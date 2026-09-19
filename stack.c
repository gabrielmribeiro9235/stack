#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

t_stack* create_stack(int max) {
    t_stack *stack = malloc(sizeof(t_stack));

    if (stack == NULL) {
        return NULL;
    }

    stack->items = malloc(sizeof(int) * max);

    if (stack->items == NULL) {
        return NULL;
    }

    stack->max = max;
    stack->top_index = -1;

    return stack;
}