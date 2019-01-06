#ifndef MY_H_
#define MY_H_

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void my_putchar(char c);
void my_putstr(char *str);
void my_print_err(char *str);
void my_swap(int *a, int *b);
void my_putstr(char *str);
void my_xerror(char *str);
void *my_malloc(size_t s);
void my_free(void *ptr);
void my_strset(char *ptr, int c, size_t n);
void my_find_all_sub_word(char *str);
void my_aff_params(int array_len, char **array);
int count_digit(int nbr);
int my_strlen(char *str);
int count_words(char *str);
int my_strlen(char *str);
int my_strcmp(char *str1, char *str2);
int my_strncmp(char *str1, char *str2, int n);
int my_strisinformat(char *str, char *format);
int my_memcmp(void *str1, void *str2, size_t n);
int my_find_char(char *str,char toCmp);
int my_find_char_with_offset(char *str, char toCmp,int offset);
int my_strarraylen(char **array);
char *my_int_to_string(int nbr);
char *my_substr(char*str, int start, int nbChar);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);
char *my_strcpy(char *dest, char *src);
char *my_realloc_str(char *str, size_t s);
char *my_strcat(char *dest, char *src);
char *my_strdup(char*str);
char *my_int_to_string(int nbr);
char **my_revparams(char **array);

#endif
