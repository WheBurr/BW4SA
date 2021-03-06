/**
 * @file 	rbwt.c
 * @brief 	Implementation of reversing a BWT.
 * @see 	rbwt.h 
 * @author 	Paula Lehtola, Lassi Vapaakallio, Max Sandberg (REXiator)
 * @bug 	No known bugs.
 */

#include "rbwt.h"
#include "s_to_bwt.h"
#include "../utils/wavelet_tree.h"
#include <stdlib.h>
#include <string.h>

char* reverse_string(const char* string, char* target, unsigned int length) {
	for (int i = 0; i < length; i++)
		target[i] = string[length - i - 1];

	target[length] = '\0';

	return target;
}

wavelet_tree* reverse_bwt(const char* string) {
	unsigned int length = strlen(string);
	uchar* rev = malloc((length + 1) * sizeof(uchar));
	rev = reverse_string(string, rev, length);
	wavelet_tree* bwt = s_to_bwt(rev);
	free(rev);
	return bwt;
}



