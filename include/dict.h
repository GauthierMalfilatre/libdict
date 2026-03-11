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
    #define dict_add_entry(h, k, s) (__dict_add_entry((h), (k), ((void *)(s))))
    #define dict_change_entry(h, k, s) (__dict_change_entry((h), (k), ((void *)(s))))
    #define dict_search_int(h, k) ((int)dict_search_entry((h), (k)))
    #define dict_search_str(h, k) ((char*)dict_search_entry((head), (key)))
    #define dict_search(t, h, k) ((t)dict_search_entry((h), (k)))

typedef struct dict_s {

    char *key;
    void *item;
    struct dict_s *next;
    struct dict_s *prev;

} dict_t;


dict_t *__dict_add_entry(dict_t **head, const char *key, void *stuff);

int dict_node_exists(dict_t *head, const char *key, dict_t **targeted);

void *__dict_change_entry(dict_t *head, const char *key, void *new);

void *dict_search_entry(dict_t *head, const char *key);

void *dict_remove_entry(dict_t **head, const char *key);

void dict_clear(dict_t *head);

void dict_dump(dict_t *head);

#endif /* LIB_DICT_H */
