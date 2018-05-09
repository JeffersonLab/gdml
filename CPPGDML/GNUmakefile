# -*-Makefile-*-
# $Id: GNUmakefile,v 1.12 2005/03/16 10:55:46 witoldp Exp $
#
# C++ GDML build system
#
# We loop over each directory and build in each separately
#
# The required info to be passed down is the site & platform information
#
# site     holds paths and external dependencies information
# platform holds compiler and linker settings
#
# A site can have more than one platform defined

ifdef SITE
ifdef PLATFORM
default: build_gdml
else
default: supported_gdml_builds
$(warning "PLATFORM not defined")
endif
else
default: supported_gdml_builds
$(warning "SITE not defined")
endif

# Try to build as all inputs seem to be defined

# Try to guess proper project top dir
PROJECT_TOP        := $(CURDIR)
PROJECT_BUILD_AREA := $(PROJECT_TOP)/build

# Define the list of all packages we have
gdml_packages         = Common/Saxana Common/Processes Common/Writer G4Binding/G4Processor G4Binding/G4Subscribers G4Binding/G4Writer

define MakePackage
	@echo
#	@echo "Starting at $(PROJECT_TOP)"
#	@echo "Build area  $(PROJECT_BUILD_AREA)"
	@(cd $(1);make -s PROJECT_TOP=$(PROJECT_TOP) PROJECT_BUILD_AREA=$(PROJECT_BUILD_AREA) SITE=$(SITE) PLATFORM=$(PLATFORM) SUBSYSTEM=$(subst /,,$(dir $(1))) PACKAGE_NAME=$(notdir $(1)))
	@echo
#
endef

# Define the list of all examples we have
gdml_examples     = Examples/g4gogdml Examples/g4N02gdml 

define MakeApp
	@echo
#	@echo "Starting at $(PROJECT_TOP)"
#	@echo "Build area  $(PROJECT_BUILD_AREA)"
	@(cd $(1);make PROJECT_TOP=$(PROJECT_TOP) PROJECT_BUILD_AREA=$(PROJECT_BUILD_AREA) SITE=$(SITE) PLATFORM=$(PLATFORM) SUBSYSTEM=$(subst /,,$(dir $(1))) APP_NAME=$(notdir $(1)))
	@echo
#
endef

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
	@echo "Building CPPGDML for $(PLATFORM) on $(SITE) site"
	@echo "for the following packages:"
	@echo $(gdml_packages)
	@echo

# Print list of supported combinations
valid_gdml_builds := 'CERN/slc3_ia32_gcc323' \
                     'local/osx103_gcc33' \
                     'localSuSE_9.2/SuSE_9.2_gcc334'
#                     'CERN/rh73_gcc323' \
#                     'CERN/osx_gcc33' \
#                     'local/SuSE_9.2'

.PHONY: supported_gdml_builds
supported_gdml_builds:
	@echo
	@echo "To build GDML type:"
	@echo
	@echo "make SITE=SiteName PLATFORM=PlatformName"
	@echo
	@echo "Valid site/platform combinations are:"
	@echo
	@$(foreach site,$(valid_gdml_builds),echo $(site);)
	@echo
	@echo "For example:"
	@echo
	@echo "make SITE=CERN PLATFORM=slc3_ia32_gcc323"
	@echo

.PHONY: clean cleanall
clean:
	@$(foreach package,$(gdml_packages),\
	(cd $(package);make -s PROJECT_TOP=$(PROJECT_TOP) PROJECT_BUILD_AREA=$(PROJECT_BUILD_AREA) SITE=$(SITE) PLATFORM=$(PLATFORM) SUBSYSTEM=$(subst /,,$(dir $(package))) PACKAGE_NAME=$(notdir $(package)) $(notdir $(package))_clean);)
	@$(foreach example,$(gdml_examples),\
	(cd $(example);make -s PROJECT_TOP=$(PROJECT_TOP) PROJECT_BUILD_AREA=$(PROJECT_BUILD_AREA) SITE=$(SITE) PLATFORM=$(PLATFORM) SUBSYSTEM=$(subst /,,$(dir $(example))) APP_NAME=$(notdir $(example)) $(notdir $(example))_clean);)


cleanall:
	@$(foreach package,$(gdml_packages),\
    (cd $(package);make -s PROJECT_TOP=$(PROJECT_TOP) PROJECT_BUILD_AREA=$(PROJECT_BUILD_AREA) SITE=$(SITE) PLATFORM=$(PLATFORM) SUBSYSTEM=$(subst /,,$(dir $(package))) PACKAGE_NAME=$(notdir $(package)) $(notdir $(package))_cleanall);)
	@$(foreach example,$(gdml_examples),\
	(cd $(example);make -s PROJECT_TOP=$(PROJECT_TOP) PROJECT_BUILD_AREA=$(PROJECT_BUILD_AREA) SITE=$(SITE) PLATFORM=$(PLATFORM) SUBSYSTEM=$(subst /,,$(dir $(example))) APP_NAME=$(notdir $(example)) $(notdir $(example))_cleanall);)
	@rm -rf $(PROJECT_BUILD_AREA)/$(PLATFORM)
