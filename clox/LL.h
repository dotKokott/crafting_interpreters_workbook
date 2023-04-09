#include <stdio.h>

#ifndef LL_H
#define LL_H

typedef struct LinkedNode {
    char *data;
    struct LinkedNode *next;
    struct LinkedNode *prev;
} LinkedNode;

typedef struct LinkedList {
    struct LinkedNode *head;
    struct LinkedNode *tail;
} LinkedList;

LinkedList *createList();
void LL_add(struct LinkedList *list, char *data);
LinkedNode *LL_find_n(LinkedList *list, LinkedNode *node);
LinkedNode *LL_find_c(LinkedList *list, char *data);
void LL_print(struct LinkedList *list);
void LL_delete(struct LinkedList *list);

#endif