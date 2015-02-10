#!/bin/sh

set -e

rm -f config.cache
aclocal -I m4 --install
autoconf
autoheader
automake -a --add-missing -Wall

