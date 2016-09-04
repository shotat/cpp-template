#! /bin/sh

set -e

if [ "$#" -lt 1 ]; then
  echo "USAGE: compile.sh <target> [testcase]."
  exit 1;
fi

FILENAME=$1
OUTNAME="${FILENAME}".out
g++ "${FILENAME}" -o "${OUTNAME}" -std=c++14

TESTCASE=$2
if [ -r "${TESTCASE}" ]; then
  cat "${TESTCASE}" | ./"${OUTNAME}"
fi
