#!bash/bin

export FT_LINE1=8
export FT_LINE2=16

cat /etc/passwd | sed 's/\:.*/ /' | grep _ | awk '{if(++count%2==1) print $0;}' | rev | sort -r | sed -n $FT_LINE1,$FT_LINE2\p | tr "\n" "," | sed 's/, *$/./'


