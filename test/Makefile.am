AM_CPPFLAGS = -isystem $(top_srcdir)/gtest/include -I$(top_srcdir)/src $(GTEST_CPPFLAGS)
AM_CXXFLAGS = $(GTEST_CXXFLAGS)
AM_LDFLAGS = $(GTEST_LDFLAGS) $(GTEST_LIBS) \
			 $(top_srcdir)/gtest/lib/libgtest_main.la \
			 $(top_srcdir)/gtest/lib/libgtest.la

TESTS =
check_PROGRAMS =

TESTS += func_test
check_PROGRAMS += func_test

func_test_SOURCES = func_test.cc
func_test_LDADD = $(top_srcdir)/src/func.o

