#!/bin/sh
cat /etc/passwd | grep -v '*#*' | sed -n 'p;n' | rev | sort -r | awk -v fta=$FT_LINE1 -v ftb=$FT_LINE2 'FT >= fta ; FT<ftb' | tr "/" "," | tr -d "\n" | sed 's/$/ ./'