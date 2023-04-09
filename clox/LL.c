#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LL.h"

LinkedList *createList() {
    LinkedList *list = malloc(sizeof(LinkedList));
    list->head = NULL;
    list->tail = NULL;
    return list;
}

void LL_add(LinkedList *list, char *data) {
    struct LinkedNode *node = malloc(sizeof(struct LinkedNode));
    node->data = data;
    node->next = NULL;
    node->prev = NULL;

    if (list->head == NULL) {
        list->head = node;
        list->tail = node;
    } else {
        list->tail->next = node;
        node->prev = list->tail;
        list->tail = node;
    }
}

void LL_print(LinkedList *list) {
    LinkedNode *node = list->head;
    while (node != NULL) {
        printf("%s \n", node->data);
        node = node->next;
    }
}

void LL_delete(LinkedList *list) {
    LinkedNode *node = list->head;
    while (node != NULL) {
        LinkedNode *next = node->next;
        free(node->data);
        free(node);
        node = next;
    }
    free(list);
}

LinkedNode *LL_find_n(LinkedList *list, LinkedNode *node) {
    LinkedNode *_node = list->head;
    while(_node != NULL) {
        if(_node == node) {
            return _node;
        }

        _node = _node->next;
    }

    return NULL;
}

LinkedNode *LL_find_c(LinkedList *list, char *data) {
    LinkedNode *node = list->head;
    while(node != NULL) {
        if(strcmp(node->data, data) == 0) {
            return node;
        }
        node = node->next;
    }

    return NULL;
}