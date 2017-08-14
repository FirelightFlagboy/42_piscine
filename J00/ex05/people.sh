ldapsearch -xLLL -t "uid=z*" cn |sed '/^$/d' |sed '/uid/d' |cut -c 5-| sort -rf
