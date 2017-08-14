ldapsearch -xLLL -t "sn=*bon*" cn |grep 'cn'|wc -l|sed 's/ *//'
