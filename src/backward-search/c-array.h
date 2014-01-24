

int get_index(const char* alphabet, const char c);

char* get_alphabet(const char* string);

/**
 * @brief Generates array C of given string. This is still a rather slow version of algorithm, but
 * with small alphabets this should not be a problem.
 * 
 * @param string from the C-array will be generated
 *
 * @return array C which contains starting indexes of each distinct character
 */
int* create_c_array(const char* string);
