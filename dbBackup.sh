#!/bin/bash

if [ $# -eq 0 ]
then
    WORKDIR=/home/steam/server
else
    WORKDIR=$1
fi

cd $WORKDIR

mkdir -p databaseBackups

