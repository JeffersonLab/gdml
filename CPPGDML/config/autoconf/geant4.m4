# GDML m4 macros for GEANT4 package
AC_DEFUN( GAC_SETUP_GEANT4, [

GAC_CREATE_GEANT4_SETTINGS_FILE

GAC_WITH_GEANT4

GAC_WITH_G4SYSTEM

GAC_WITH_GEANT4_INCLUDE

GAC_WITH_GEANT4_LIBDIR

GAC_ENABLE_GEANT4_VIS

GAC_ENABLE_GEANT4_UI

GAC_ENABLE_GEANT4_GRANULAR_LIBS

GAC_SUBST_GEANT4

])

# GEANT4 base dir
AC_DEFUN( GAC_WITH_GEANT4, [

AC_MSG_CHECKING(for GEANT4 installation setting) 

AC_ARG_WITH(geant4,
	AC_HELP_STRING([--with-geant4=<path>],[Geant4 installation base [[G4INSTALL]] ]),
	[GEANT4_PREFIX=$with_geant4],
	[GEANT4_PREFIX=$G4INSTALL])

AC_MSG_RESULT([$GEANT4_PREFIX])

GAC_CHECK_PKG_DIR( [$GEANT4_PREFIX],
	[Geant4])
])

# G4SYSTEM
AC_DEFUN( GAC_WITH_G4SYSTEM, [

AC_MSG_CHECKING(for G4SYSTEM setting)

AC_ARG_WITH(geant4-system,
	AC_HELP_STRING([--with-geant4-system=<value>],[Value of G4SYSTEM variable]),
	[G4SYSTEM=$with_geant4_g4system])

if test -z "${G4SYSTEM}"; then
  G4SYSTEM=`uname`-${CXX}
fi

AC_MSG_RESULT([$G4SYSTEM])

AC_SUBST(G4SYSTEM)

])

# GEANT4 include dir
AC_DEFUN( GAC_WITH_GEANT4_INCLUDE, [

AC_MSG_CHECKING([for Geant4 include dir setting])

AC_ARG_WITH([geant4-include],
	AC_HELP_STRING([--with-geant4-include=<path>],[Geant4 alternate headers dir]),
	[GEANT4_INCLUDE=$with_geant4_include],
	[GEANT4_INCLUDE=$GEANT4_PREFIX/include])

AC_MSG_RESULT([$GEANT4_INCLUDE])

GAC_CHECK_PKG_DIR( [$GEANT4_INCLUDE],
	[GEANT4],
	[G4RunManager.hh])
])

AC_MSG_RESULT(yes)

# GEANT4 lib dir
AC_DEFUN( GAC_WITH_GEANT4_LIBDIR, [

AC_MSG_CHECKING([for Geant4 lib dir])

AC_ARG_WITH([geant4-libdir],
	AC_HELP_STRING([--with-geant4-libdir=<path>], [Geant4 alternate library dir]),
	[GEANT4_LIBDIR=$with_geant4_libdir],
	[GEANT4_LIBDIR=$GEANT4_PREFIX/lib/$G4SYSTEM])

AC_MSG_RESULT([$GEANT4_LIBDIR])

GAC_CHECK_PKG_DIR( [$GEANT4_LIBDIR],
	[GEANT4])
])

# GEANT4 visualization libs
AC_DEFUN( GAC_ENABLE_GEANT4_VIS, [

AC_MSG_CHECKING(whether to link against Geant4 visualization libs)

AC_ARG_ENABLE([geant4-vis],
	AC_HELP_STRING([--enable-geant4-vis],[link with Geant4 visualization libraries]),
	[ac_g4_use_vis=$enable_geant4_vis],
	[ac_g4_use_vis=no])

# option not used?
if test -z "${enable_geant4_vis}"; then
  # G4VIS_NONE is not set?
  if test -z "${G4VIS_NONE}"; then
    ac_g4_use_vis=yes
  fi
fi

AC_MSG_RESULT([$ac_g4_use_vis])

if test "${ac_g4_use_vis}" = "yes"; then
  echo "CXXFLAGS += -DG4VIS_USE" >> $g4config_file
else
  echo "G4VIS_NONE = 1" >> $g4config_file
  echo "CXXFLAGS += -DG4VIS_NONE" >> $g4config_file
fi

])

# GEANT4 UI libs
AC_DEFUN( GAC_ENABLE_GEANT4_UI, [

AC_MSG_CHECKING(whether to link against Geant4 UI libs)

AC_ARG_ENABLE([geant4-ui],
	AC_HELP_STRING([--enable-geant4-ui],[link with Geant4 UI libraries]),
	[ac_g4_use_ui=$enable_geant4_ui],
	[ac_g4_use_ui=no])

# option not used?
if test -z "${enable_geant4_ui}"; then
  # G4UI_NONE is not set?
  if test -z "${G4UI_NONE}"; then
    # assume UI libs need to be linked against
    ac_g4_use_ui=yes
  fi
fi


AC_MSG_RESULT([$ac_g4_use_ui])

if test "${ac_g4_use_ui}" = "yes"; then
  echo "CXXFLAGS += -DG4UI_USE" >> $g4config_file
else
  echo "G4UI_NONE = 1" >> $g4config_file
  echo "CXXFLAGS += -DG4UI_NONE" >> $g4config_file
fi

])

# Substitute GEANT4 vars to output
AC_DEFUN( GAC_SUBST_GEANT4, [

AC_SUBST(GEANT4_PREFIX)
AC_SUBST(GEANT4_INCLUDE)
AC_SUBST(GEANT4_LIBDIR)

])

AC_DEFUN( GAC_ENABLE_GEANT4_GRANULAR_LIBS, [

AC_MSG_CHECKING(whether to use Geant4 granular libs)

AC_ARG_ENABLE([geant4-granular-libs],
	AC_HELP_STRING( [--enable-geant4-granular-libs], [Enable linking against granular rather than global Geant4 libs] ),
	[ac_g4_use_granular=$enable_geant4_granular_libs],
	[ac_g4_use_granular=no])

# no option?
if test -z "${with_geant4_granular_libs}"; then
  # set in env?
  if test -n "${G4LIB_USE_GRANULAR}"; then
    ac_g4_use_granular=yes
  fi
fi

AC_MSG_RESULT([$ac_g4_use_granular])

if test "${ac_g4_use_granular}" = "yes"; then
  echo "G4LIB_USE_GRANULAR := 1" >> $g4config_file
fi

])

AC_DEFUN( GAC_CREATE_GEANT4_SETTINGS_FILE, [

g4config_file=${srcdir}/config/make/geant4_settings.gmk
rm -f ${g4config_file}
touch $g4config_file
echo "# Local Geant4 Settings." >> $g4config_file

])