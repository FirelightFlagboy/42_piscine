# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/10 20:01:30 by fbenneto          #+#    #+#              #
#    Updated: 2017/08/10 20:17:59 by fbenneto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
date=$(date +%s)
file_date=$(stat -f "%m" bomb.txt)
substract=`expr $date - $file_date`
echo $substract
