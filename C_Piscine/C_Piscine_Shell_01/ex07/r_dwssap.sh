#!/bin/bash
cat /etc/passwd | grep "^[^#;]" | rev | awk -F: '{print$7}' | awk 'NR % 2 == 0' | sort -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | tr "\n" "," | sed "s/,/, /g" | sed "s/, $/./g" | tr -d "\n"
