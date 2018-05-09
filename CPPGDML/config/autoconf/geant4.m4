dnl
dnl m4 macros for setting up Geant4
dnl

# call all the Geant4 macros
AC_DEFUN( GDML_SETUP_GEANT4, [

GDML_CREATE_GEANT4_SETTINGS_FILE
GDML_WITH_GEANT4
GDML_WITH_G4SYSTEM
GDML_WITH_GEANT4_INCLUDE
GDML_WITH_GEANT4_LIBDIR
GDML_ENABLE_GEANT4_VIS
GDML_ENABLE_GEANT4_UI
GDML_ENABLE_GEANT4_GRANULAR_LIBS
GDML_ENABLE_NIST
GDML_SUBST_GEANT4

])

# macro to set GEANT4 base dir (G4INSTALL)
AC_DEFUN( GDML_WITH_GEANT4, [

AC_MSG_CHECKING(for GEANT4 installation setting)

AC_ARG_WITH(geant4,
	AC_HELP_STRING([--with-geant4=<path>],[Geant4 installation base [[G4INSTALL]] ]),
	[GEANT4_PREFIX=$with_geant4],
	[GEANT4_PREFIX=$G4INSTALL])

AC_MSG_RESULT([$GEANT4_PREFIX])

GDML_CHECK_PKG_DIR( [$GEANT4_PREFIX],
	[Geant4])
])

# macro to set G4SYSTEM
AC_DEFUN( GDML_WITH_G4SYSTEM, [

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

# macro to set GEANT4 include dir
AC_DEFUN( GDML_WITH_GEANT4_INCLUDE, [

AC_MSG_CHECKING([for Geant4 include dir setting])

AC_ARG_WITH([geant4-include],
	AC_HELP_STRING([--with-geant4-include=<path>],[Geant4 alternate headers dir]),
	[GEANT4_INCLUDE=$with_geant4_include],
	[GEANT4_INCLUDE=$GEANT4_PREFIX/include])

AC_MSG_RESULT([$GEANT4_INCLUDE])

GDML_CHECK_PKG_DIR( [$GEANT4_INCLUDE],
	[GEANT4],
	[G4RunManager.hh])
])

AC_MSG_RESULT(yes)

# macro to set GEANT4 lib dir
AC_DEFUN( GDML_WITH_GEANT4_LIBDIR, [

AC_MSG_CHECKING([for Geant4 lib dir])

AC_ARG_WITH([geant4-libdir],
	AC_HELP_STRING([--with-geant4-libdir=<path>], [Geant4 alternate library dir]),
	[GEANT4_LIBDIR=$with_geant4_libdir],
	[GEANT4_LIBDIR=$GEANT4_PREFIX/lib/$G4SYSTEM])

AC_MSG_RESULT([$GEANT4_LIBDIR])

GDML_CHECK_PKG_DIR( [$GEANT4_LIBDIR],
	[GEANT4])
])

# macro to setup GEANT4 visualization libs
AC_DEFUN( GDML_ENABLE_GEANT4_VIS, [

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

# macro to setup GEANT4 UI libs
AC_DEFUN( GDML_ENABLE_GEANT4_UI, [

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

# macro to substitute GEANT4 vars to output
AC_DEFUN( GDML_SUBST_GEANT4, [

AC_SUBST(GEANT4_PREFIX)
AC_SUBST(GEANT4_INCLUDE)
AC_SUBST(GEANT4_LIBDIR)

])

# macro to select granular libs
AC_DEFUN( GDML_ENABLE_GEANT4_GRANULAR_LIBS, [

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

# macro to regenerate the Geant4 settings file
AC_DEFUN( GDML_CREATE_GEANT4_SETTINGS_FILE, [

g4config_file=${srcdir}/config/make/geant4_settings.gmk
rm -f ${g4config_file}
touch $g4config_file
echo "# Local Geant4 Settings." >> $g4config_file

])

# macro to check whether NIST is supported by the current Geant4 version
AC_DEFUN(GDML_CHECK_NIST, [

AC_CHECK_FILE([$G4INSTALL/source/materials/include/G4NistManager.hh],have_nist=yes)

if test $have_nist = "yes"
then
  AC_DEFINE(HAVE_NIST)
fi

])

# macro to enable/disable NIST support
AC_DEFUN(GDML_ENABLE_NIST, [

AC_REQUIRE([GDML_CHECK_NIST])dnl

AC_MSG_CHECKING(whether to enable Geant4 NIST support for material lookup)

AC_ARG_ENABLE([nist],
              AC_HELP_STRING([--enable-nist=<setting>]., [Turn NIST support on or off.]))

# default to using NIST if not set from the enable-nist option
if test "X$enable_nist" = "X"
then
  enable_nist=yes
fi

if test "X$enable_nist" = "Xyes"
then
  if test "X$have_nist" = "Xyes"
  then
    AC_MSG_RESULT(yes)
    AC_DEFINE(GDML_USE_NIST)
  else
    AC_MSG_RESULT(no)
    AC_MSG_WARN(NIST was selected, but your Geant4 installation does not support it.)
  fi
else
  AC_MSG_RESULT(no)
fi

])