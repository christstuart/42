#!bash/bin

ldapsearch -Q 'cn=*bon*' cn | grep '^cn' | wc -l | cut -c8-