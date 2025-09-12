/**
 * check_uppercase.c - check for uppercase letter.
 *
 * Description: scans variable c and if the character in it belongs to the range
 * of digits (0 through 9) in ASCII table then "1" value will be returned and 
 * if it is anything else "0" value will be returned.
 * 
 * Author: Abd.elrhman Hosam
 */


#include "main.h"
/**
 * isupper() - check for digits.
 * @c: take the char that will be scaned
 *
 * return: "1" for digits or "0" for anything else
 */
int _isdigit(int c)
{
        for (int j = 48; j <= 57; j++)
        {
                if (c == j)
                        return 1;
	}
	return 0;

        
}
