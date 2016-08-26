FT_NBR1=$(echo $FT_NBR1 | tr “’\”?!” "01234")
FT_NBR2=$(echo $FT_NBR2 | tr "mrdoc" "01234")

echo "obase=13;ibase=5;$FT_NBR1+$FT_NBR2" | bc

sed ’s/‘/0/g’ | sed ’s/‘/1/g’ | sed ’s/\/2/g’ | sed ’s/“/3/g’ | sed ’s/?/4/g’ | sed ’s/!/5/g’