# -*-Makefile-*-
# $Id: GNUmakefile,v 1.17 2005/05/13 20:15:22 jmccormi Exp $
#
# /\/\/\/\ C++ GDML Build System /\/\/\/\
#
#
# Original system by Radovan Chytracek with Autoconf support by Jeremy McCormick.
#
# We loop over the directories and build in each separately.
#

# Include default definition for PROJECT_TOP and derived settings.
include $(CURDIR)/config/make/project.gmk

# Include all vars defined by the Autoconf configure script.
include $(PROJECT_CONFIG)/local_settings.gmk

# Define the list of all packages we have
gdml_packages = Common/Saxana Common/Processes Common/Writer G4Binding/G4Processor G4Binding/G4Subscribers G4Binding/G4Writer

# Function to build a package.
define MakePackage
	@echo
#	@echo "Starting at $(PROJECT_TOP)"
#	@echo "Build area  $(PROJECT_BUILD_AREA)"
	@(cd $(1);make PROJECT_TOP=$(PROJECT_TOP) PLATFORM=$(PLATFORM) SUBSYSTEM=$(subst /,,$(dir $(1))) PACKAGE_NAME=$(notdir $(1)))
	@echo
#
endef

# Define the list of all examples we have
gdml_examples = Examples/g4gogdml Examples/g4N02gdml 

# Function to build an application.
define MakeApp
	@echo
#	@echo "Starting at $(PROJECT_TOP)"
#	@echo "Build area  $(PROJECT_BUILD_AREA)"
	@(cd $(1);make PROJECT_TOP=$(PROJECT_TOP) PLATFORM=$(PLATFORM) SUBSYSTEM=$(subst /,,$(dir $(1))) APP_NAME=$(notdir $(1)))
	@echo

endef

# Build Targets
.PHONY: build_gdml 
build_gdml: build_gdml_prolog build_gdml_libs build_gdml_examples

.PHONY: build_gdml_libs
build_gdml_libs:
	@$(foreach package,$(gdml_packages),$(call MakePackage,$(package)))

.PHONY: build_gdml_examples
build_gdml_examples:
	@$(foreach example,$(gdml_examples),$(call MakeApp,$(example)))

.PHONY: build_gdml_prolog
build_gdml_prolog:
	@echo
	@echo "Building CPPGDML for $(PLATFORM)"
	@echo "for the following packages:"
	@echo
	@echo $(gdml_packages)
	@echo

# Clean Targets
.PHONY: clean cleanall
clean:
	@$(foreach package,$(gdml_packages),\
	(cd $(package);make -s PROJECT_TOP=$(PROJECT_TOP) PLATFORM=$(PLATFORM) SUBSYSTEM=$(subst /,,$(dir $(package))) PACKAGE_NAME=$(notdir $(package)) $(notdir $(package))_clean);)
	@$(foreach example,$(gdml_examples),\
	(cd $(example);make -s PROJECT_TOP=$(PROJECT_TOP) PLATFORM=$(PLATFORM) SUBSYSTEM=$(subst /,,$(dir $(example))) APP_NAME=$(notdir $(example)) $(notdir $(example))_clean);)


cleanall:
	@$(foreach package,$(gdml_packages),\
    (cd $(package);make -s PROJECT_TOP=$(PROJECT_TOP) PLATFORM=$(PLATFORM) SUBSYSTEM=$(subst /,,$(dir $(package))) PACKAGE_NAME=$(notdir $(package)) $(notdir $(package))_cleanall);)
	@$(foreach example,$(gdml_examples),\
	(cd $(example);make -s PROJECT_TOP=$(PROJECT_TOP) PLATFORM=$(PLATFORM) SUBSYSTEM=$(subst /,,$(dir $(example))) APP_NAME=$(notdir $(example)) $(notdir $(example))_cleanall);)
	@rm -rf $(PROJECT_BUILD_AREA)/$(PLATFORM)

# Install Targets

# top-level install target
install: install_lib install_bin install_include

# install libraries
install_lib:	
	@if [ ! -d $(libdir) ]; then mkdir -p $(libdir); fi	
	cp $(PROJECT_BUILD_AREA)/$(PLATFORM)/lib/*lib* $(libdir)

# install binaries
install_bin:
	@if [ ! -d $(bindir) ]; then mkdir -p $(bindir); fi
	cp -vR $(PROJECT_BUILD_AREA)/$(PLATFORM)/bin/* $(bindir)

# install includes
install_headers := $(shell find . -name *.h)
install_include:		
	for i in $(install_headers); do \
		i_dir=`dirname $$i`; \
		mkdir -p $(includedir)/$$i_dir; \
		install $$i $(includedir)/$$i_dir; \
	done
