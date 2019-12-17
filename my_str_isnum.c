/*
** EPITECH PROJECT, 2019
** my_str_isnum.c
** File description:
** my_str_isnum
*/

int my_str_isnum(char *str)
{
    int	i = 0;
    
    if (str[0] == '-') {
        i = i + 1;
    }
    if (str == 0) {
        return (1);
    } else {
        while (str[i] != '\0') {
            if (str[i] == '.') {
                return (1);
            }
            if (str[i] >= '0' && str[i] <= '9') {
                i = i + 1;
            } else {
                return (0);
            }
	}
        return (1);
    }

}
