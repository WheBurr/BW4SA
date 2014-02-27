#ifndef C_ARRAY_H_
#define C_ARRAY_H_

#include "backward_search.h"
#include "wavelet_tree.h"

/**
 * @brief Generates array C of given string. This is still a rather slow version of algorithm, but
 * with small alphabets this should not be a problem.
 * 
 * @param string from the C-array will be generated
 *
 * @return array C which contains starting indexes of each distinct character. 
 *
 * @author Topi Paavilainen
 *
 * @bug no known bugs
 */
unsigned int* create_c_array(const wavelet_node* string, const interval* inter,
		const char* alphabet, unsigned int alphabet_length);

/**
 * @brief Generates the alphabet of given string in the substring determined by interval struct
 * 
 * @param interval 
 *
 * @param string which the alphabet will be generated from
 *
 * @return alphabet of given interval
 *
 * @author Topi Paavilainen
 *
 * @bug no known bugs
 */
char* create_alphabet_interval(const interval* interval, const wavelet_node* string);

#endif
