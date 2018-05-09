# GDML m4 macros for XERCESC package
AC_DEFUN( GAC_SETUP_XERCESC, [

GAC_WITH_XERCESC

GAC_WITH_XERCESC_INCLUDE

GAC_WITH_XERCESC_LIBDIR

GAC_WITH_XERCESC_LIBNAME

GAC_SUBST_XERCESC

])

# Xerces base dir
AC_DEFUN( GAC_WITH_XERCESC, [

AC_MSG_CHECKING(for Xerces-C++ installation setting) 

AC_ARG_WITH(xercesc,
	AC_HELP_STRING([--with-xercesc=<path>],[Xerces-C++ installation base [[XERCESCCROOT]] ]),
	[XERCESC_PREFIX=$with_xercesc],
	[XERCESC_PREFIX=$XERCESCROOT])

AC_MSG_RESULT([$XERCESC_PREFIX])

GAC_CHECK_PKG_DIR( [$XERCESC_PREFIX],
	[Xerces-C++])

])

# Xerces include dir
AC_DEFUN( GAC_WITH_XERCESC_INCLUDE, [

AC_MSG_CHECKING([for Xerces-C++ include dir setting])

AC_ARG_WITH([xercesc-include],
	AC_HELP_STRING([--with-xercesc-include=<path>],[Xerces-C++ alternate headers dir]),
	[XERCESC_INCLUDE=$with_xercesc_include],
	[XERCESC_INCLUDE=$XERCESC_PREFIX/include])

AC_MSG_RESULT([$XERCESC_INCLUDE])

GAC_CHECK_PKG_DIR( [$XERCESC_INCLUDE],
	[Xerces],
	[xercesc/dom/DOM.hpp])
])

AC_MSG_RESULT(yes)

# Xerces lib dir
AC_DEFUN( GAC_WITH_XERCESC_LIBDIR, [

AC_MSG_CHECKING([for Xerces-C++ lib dir setting])

AC_ARG_WITH([xercesc-libdir],
	AC_HELP_STRING([--with-xercesc-libdir=<path>], [Xerces-C++ alternate library dir]),
	[XERCESC_LIBDIR=$with_xercesc_libdir],
	[XERCESC_LIBDIR=$XERCESC_PREFIX/lib])

AC_MSG_RESULT([$XERCESC_LIBDIR])

GAC_CHECK_PKG_DIR( [$XERCESC_LIBDIR],
	[Xerces-C++])
])

# XERCESC libname
AC_DEFUN( GAC_WITH_XERCESC_LIBNAME, [

AC_MSG_CHECKING([Xerces-C++ lib name])

AC_ARG_WITH([xercesc-libname],
	AC_HELP_STRING([--with-xercesc-libname=<name>], [XERCESC alternate library name, without "lib" prefix or ".a/.so" suffix]),
	[XERCESC_LIBNAME=$with_xercesc_libname],
	[XERCESC_LIBNAME=xerces-c])

if test "${with_xercesc_libname}" = "no"; then
  AC_MSG_RESULT(invalid)
  AC_MSG_ERROR([cannot choose no for XERCESC libname setting])
else
  AC_MSG_RESULT([$XERCESC_LIBNAME])
fi

AC_SUBST(XERCESC_LIBNAME)

])

# Substitute Xerces vars to output
AC_DEFUN( GAC_SUBST_XERCESC, [

AC_SUBST(XERCESC_PREFIX)
AC_SUBST(XERCESC_INCLUDE)
AC_SUBST(XERCESC_LIBDIR)

])