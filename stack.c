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

static void increase_array_size(t_stack *stack) {
    int new_max = stack->max * 2;
    t_stack *new = realloc(stack->items, sizeof(int) * new_max);

    if (new == NULL) {
        exit(1);
    }

    stack->items = new;
    stack->max = new_max;
}