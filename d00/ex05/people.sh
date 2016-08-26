#!/bin/bash

ldapsearch "uid=z*" cn | grep -i "cn" | sort -r