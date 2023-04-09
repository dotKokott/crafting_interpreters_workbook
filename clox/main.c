#include <stdio.h>
#include <string.h>
#include "LL.h"

int main(void) {
    LinkedList *list = createList();
    LL_add(list, strdup("Hello world"));
    LL_add(list, strdup("What"));
    LL_add(list, strdup("That"));

    if(LL_find_c(list, "What")) {
        printf("Found what");
    }

    //LL_print(list);

    LL_delete(list);

    return 0;
}