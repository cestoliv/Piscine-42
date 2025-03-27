groups=$(id -Gn $FT_USER)
groups_comma="${groups// /,}"
printf $groups_comma