#include "main.h"
#include <stdlib.h>
#include <string.h>

int count_words(char *str) {
    int count = 0;
    int is_word = 0;

    while (*str) {
        if (*str == ' ') {
            is_word = 0;
        } else if (is_word == 0) {
            is_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

char **strtow(char *str) {
	int word_index = 0;
	int word_length = 0;
	int is_word = 0;

    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int num_words = count_words(str);
    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    
    while (*str) {
        if (*str == ' ') {
            if (is_word) {
                words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
                if (words[word_index] == NULL) {
                    // Free memory allocated so far
                    for (int i = 0; i < word_index; i++) {
                        free(words[i]);
                    }
                    free(words);
                    return NULL;
                }
                strncpy(words[word_index], str - word_length, word_length);
                words[word_index][word_length] = '\0';
                word_index++;
                word_length = 0;
                is_word = 0;
            }
        } else {
            if (!is_word) {
                is_word = 1;
            }
            word_length++;
        }
        str++;
    }

    if (is_word) {
        words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
        if (words[word_index] == NULL) {
            // Free memory allocated so far
            for (int i = 0; i < word_index; i++) {
                free(words[i]);
            }
            free(words);
            return NULL;
        }
        strncpy(words[word_index], str - word_length, word_length);
        words[word_index][word_length] = '\0';
        word_index++;
    }

    words[word_index] = NULL;

    return words;
}
