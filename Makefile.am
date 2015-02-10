ACLOCAL_AMFLAGS = -I m4

SUBDIRS = . src test

check-local: all
	cd gtest && $(MAKE) $(AM_MAKEFLAGS) lib/libgtest.la lib/libgtest_main.la

clean-local:
	@if test -e gtest/Makefile; then \
		cd gtest && $(MAKE) $(AM_MAKEFLAGS) clean; \
	fi

