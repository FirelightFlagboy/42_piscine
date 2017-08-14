ifconfig |cut -c 2-|sed '/ether*/!d'|sed 's/ether //g'|tr -d ' '
