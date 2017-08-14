cat /etc/passwd |sed -e '/^#.*/d; s/:.*//'|awk 'NR % 2 == 0'|rev|sort -rf|awk -v min=$FT_LINE1 -v max=$FT_LINE2 'NR >= min && NR <= max' |tr '\n' '|'|sed 's/|/, /g'|sed 's/..$/./'|tr -d '\n'
