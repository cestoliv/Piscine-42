printf "$(cat /etc/passwd | sed '/^#/d' | sed -n 'g;n;p' | cut -d":" -f1 | rev | sort -r | tail -n +"$FT_LINE1" | head -n "$(expr $FT_LINE2 - $FT_LINE1 + 1 )" | tr '\n' ',' | sed 's/, */, /g' | sed 's/, $/./')"