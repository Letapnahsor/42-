ifconfig | grep -w "ether" | cut -c 8- | tr ' ' '\n'
