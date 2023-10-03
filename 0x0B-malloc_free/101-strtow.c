#include <stdlib.h>

int count_words(char *str) {
    int count = 0;
    int in_word = 0;

    while (*str) {
        if (*str == ' ') {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

char **strtow(char *str) {
	int num_words;
	int i;
	char **result;
	int word_length;
	int word_index;

    if (str == NULL || *str == '\0') {
        return NULL;
    }

    num_words = count_words(str);
    if (num_words == 0) {
        return (NULL);
    }

     result = (char **)malloc((num_words + 1) * sizeof(char *));
    if (result == NULL) {
        return NULL;
    }
	word_length = 0;
	word_index = 0;

    while (*str) {
        if (*str == ' ') {
            if (word_length > 0) {
                result[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
                if (result[word_index] == NULL) {

                    for (i = 0; i < word_index; i++) {
                        free(result[i]);
                    }
                    free(result);
                    return NULL;
                }
                word_length = 0;
                word_index++;
            }
        } else {
            word_length++;
            if (word_length == 1) {
                result[word_index] = str;
            }
        }
        str++;
    }

    if (word_length > 0) {

        result[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
        if (result[word_index] == NULL) {
            for (i = 0; i < word_index; i++) {
                free(result[i]);
            }
            free(result);
            return NULL;
        }
    }

    for (i = 0; i <= num_words; i++) {
        result[i][word_length] = '\0';
    }

    return (result);
}