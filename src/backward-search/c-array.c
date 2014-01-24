
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define MAX_ALPHABET_SIZE 20
/**
*@brief finds first index of given char from a string
**/
int get_index(const char* string,const char c)
{
	int i;
	for(i=0;i<strlen(string);i++){
		if(c == *(string+i)){
			return i;
		}
	}
	return -1;
}

/**
*@brief returns string of all characters in words alphabet, ordered alphabetically
**/
char* get_alphabet(const char* string)
{

	int i;
	char* alphabet = calloc(MAX_ALPHABET_SIZE, sizeof(char));
	alphabet[0] = '\0';
	int alphabet_index = 0;
	
	for(i=0;i<strlen(string);i++){
		if(get_index(alphabet, string[i]) == -1){
			alphabet[alphabet_index+1] = alphabet[alphabet_index];
			alphabet[alphabet_index] = string[i];
			alphabet_index++;
		}
	}
	quick_sort(alphabet, strlen(alphabet), sizeof(char));
	return alphabet;
}



int* create_c_array(const char* string)
{
	int i;
	char* alphabet = get_alphabet(string);
	int* c_array = calloc(strlen(alphabet), sizeof(int));
	
	for(i=0;i<strlen(string);i++){
		int index = get_index(alphabet, string[i]);
		c_array[index] += 1;
	}
	for(i=0;i<strlen(alphabet)-1;i++){
		c_array[i+1] = c_array[i+1] + c_array[i];
	}
	
	return c_array;
}

