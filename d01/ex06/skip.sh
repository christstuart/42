#!/bin/sh
 ls -l | awk '{if(++count%2==1) print $0;}'
