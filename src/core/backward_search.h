
#ifndef BACKWARD_SEARCH_H_
#define BACKWARD_SEARCH_H_

struct interval;
struct wavelet_tree;

/**
* @brief function that finds interval of given string from given bwt
* 
* @param bwt of the string
*
* @param string to be searched
* 
* @return interval of searched string
*
**/

struct interval* backward_search(const struct wavelet_tree* bwt, const struct wavelet_tree* string, struct interval* target);

/**
 * @brief finds the interval of a given letter in an interval.
 *
 * @param bwt of the string
 *
 * @param interval to be searched
 *
 * @param left extension character
 *
 * @return interval of searched left extension
 *
 */
struct interval* backward_search_interval(const struct wavelet_tree* bwt, const struct interval* inter, char c,
		struct interval* target);

#endif /* BACKWARD_SEARCH_H_ */