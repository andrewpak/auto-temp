AC_INIT([hello], [0.01])
AC_PREREQ([2.71])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([1.11 -Wall -Werror])
AC_CONFIG_FILES([Makefile])
AC_PROG_CC

AM_PROG_CC_C_O
AC_PROG_INSTALL
AC_PROG_LIBTOOL

AC_PATH_GTK_4([4.0.0],,AC_MSG_ERROR([Gtk+ 4.0.0 or higher required]))
# Put varuous checks and such here
AC_OUTPUT
