#!/bin/sh

set -e

rm -f config.cache
autoreconf --no-recursive -ivf

