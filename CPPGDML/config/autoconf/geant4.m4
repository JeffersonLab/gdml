dnl
dnl m4 macros for setting up Geant4
dnl

# call all the Geant4 macros
AC_DEFUN( GDML_SETUP_GEANT4, [

#GDML_CREATE_GEANT4_SETTINGS_FILE
GDML_WITH_GEANT4
GDML_WITH_G4SYSTEM
GDML_WITH_GEANT4_INCLUDE
GDML_WITH_GEANT4_LIBDIR
GDML_ENABLE_NIST
GDML_ENABLE_GEANT4_GRANULAR_LIBS
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
#  echo "G4LIB_USE_GRANULAR := 1" >> $g4config_file
#  SET_G4LIB_USE_GRANULAR=1
#  AC_SUBST(SET_G4LIB_USE_GRANULAR)
#  G4LIB_USE_GRANULAR = 1
  AC_DEFINE(G4LIB_USE_GRANULAR)
fi

])

# macro to regenerate the Geant4 settings file
#AC_DEFUN( GDML_CREATE_GEANT4_SETTINGS_FILE, [

#g4config_file=${srcdir}/config/make/geant4_settings.gmk
#rm -f ${g4config_file}
#touch $g4config_file
#echo "# Local Geant4 Settings." >> $g4config_file

#])

# macro to check whether NIST is supported by the current Geant4 version
AC_DEFUN(GDML_CHECK_NIST, [

AC_CHECK_FILE([$G4INSTALL/source/materials/include/G4NistManager.hh],have_nist=yes)

if test "$have_nist" = "yes"
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