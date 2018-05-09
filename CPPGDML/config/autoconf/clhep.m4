# GDML m4 macros for CLHEP package
AC_DEFUN( GAC_SETUP_CLHEP, [

GAC_WITH_CLHEP

GAC_WITH_CLHEP_INCLUDE

GAC_WITH_CLHEP_LIBDIR

GAC_WITH_CLHEP_LIBNAME

GAC_SUBST_CLHEP

])

# CLHEP base dir
AC_DEFUN( GAC_WITH_CLHEP, [

AC_MSG_CHECKING(for CLHEP installation setting) 

AC_ARG_WITH(clhep,
	AC_HELP_STRING([--with-clhep=<path>],[CLHEP installation base [[CLHEP_BASE_DIR]] ]),
	[CLHEP_PREFIX=$with_clhep],
	[CLHEP_PREFIX=$CLHEP_BASE_DIR])

AC_MSG_RESULT([$CLHEP_PREFIX])

GAC_CHECK_PKG_DIR( [$CLHEP_PREFIX],
	[CLHEP])
])

# CLHEP include dir
AC_DEFUN( GAC_WITH_CLHEP_INCLUDE, [

AC_MSG_CHECKING([for CLHEP include dir setting])

AC_ARG_WITH([clhep-include],
	AC_HELP_STRING([--with-clhep-include=<path>],[CLHEP alternate headers dir]),
	[CLHEP_INCLUDE=$with_clhep_include],
	[CLHEP_INCLUDE=$CLHEP_PREFIX/include])

AC_MSG_RESULT([$CLHEP_INCLUDE])

GAC_CHECK_PKG_DIR( [$CLHEP_INCLUDE],
	[CLHEP],
	[CLHEP/Evaluator/Evaluator.h])
])

AC_MSG_RESULT(yes)

# CLHEP lib dir
AC_DEFUN( GAC_WITH_CLHEP_LIBDIR, [

AC_MSG_CHECKING([for CLHEP lib dir setting])

AC_ARG_WITH([clhep-libdir],
	AC_HELP_STRING([--with-clhep-libdir=<path>], [CLHEP alternate library dir]),
	[CLHEP_LIBDIR=$with_clhep_libdir],
	[CLHEP_LIBDIR=$CLHEP_PREFIX/lib])

AC_MSG_RESULT([$CLHEP_LIBDIR])

GAC_CHECK_PKG_DIR( [$CLHEP_LIBDIR],
	[CLHEP])
])

# CLHEP libname
AC_DEFUN( GAC_WITH_CLHEP_LIBNAME, [

AC_MSG_CHECKING([CLHEP lib name])

AC_ARG_WITH([clhep-libname],
	AC_HELP_STRING([--with-clhep-libname=<name>], [CLHEP alternate library name, without "lib" prefix or ".a/.so" suffix]),
	[CLHEP_LIBNAME=$with_clhep_libname],
	[CLHEP_LIBNAME=CLHEP])

if test "${with_clhep_libname}" = "no"; then
  AC_MSG_RESULT(invalid)
  AC_MSG_ERROR([cannot choose no for CLHEP libname setting])
else 
  AC_MSG_RESULT([$CLHEP_LIBNAME])
fi

AC_SUBST(CLHEP_LIBNAME)

])

# Substitute CLHEP vars to output
AC_DEFUN( GAC_SUBST_CLHEP, [

AC_SUBST(CLHEP_PREFIX)
AC_SUBST(CLHEP_INCLUDE)
AC_SUBST(CLHEP_LIBDIR)

])