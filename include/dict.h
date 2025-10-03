/*
** EPITECH PROJECT, 2025
** LIBDICT
** File description:
** Header file for libdict
*/
#ifndef LIB_DICT_H
    #define LIB_DICT_H
    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #define DA dict_add_entry_nc
    #define DICT_ADD_ENTRY(h, k, s) (DA((h), (k), ((void *)(s))))
    #define DICT_SEARCH_INT(h, k) ((int)dict_search_entry((h), (k)))
    #define DICT_SEARCH_STR(h, k) ((char *)dict_search_entry((h), (k)))

typedef struct dict_s {
    char *key;
    void *item;
    struct dict_s *next;
    struct dict_s *prev;
} dict_t;


dict_t *dict_add_entry_nc(dict_t **head, const char *key, void *stuff);

int dict_node_exists(dict_t *head, const char *key, dict_t **targeted);

void *dict_remove_entry(dict_t **head, const char *key);

void *dict_search_entry(dict_t *head, const char *key);

void dict_clear(dict_t *head);

void dict_dump(dict_t *head);

#endif /* LIB_DICT_H */
