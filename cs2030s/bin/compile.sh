#!/usr/bin/env bash
readonly PE2DIR=~cs2030s/.python
set -o nounset
user=$(whoami)
if [ ! -r $PE2DIR ] || [ ! -x $PE2DIR ]; then
  echo "No permission to access the question and skeleton."
  echo "Bye."
  exit
fi

  for f in $PE2DIR/*
  do
    echo -n "copying $f over.."
    if [ -d $f ]; then
      cp -r $f ~/
    else
      cp -i $f ~/
    fi
    if [ $? -eq 0 ]; 
    then
      echo "done"
    else
      echo "failed"
    fi
  done
ls
