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

int push(t_stack *stack, int elem) {
    if (stack == NULL) {
        return 0;
    }

    if (stack->top_index + 1 == stack->max) {
        increase_array_size(stack);
    }
    
    stack->top_index++;
    stack->items[stack->top_index] = elem;

    return 1;
}

int pop(t_stack *stack, int *value) {
    if (stack == NULL || value == NULL || stack->top_index == -1) {
        return 0;
    }

    *value = stack->items[stack->top_index--];
    return 1;
}

int top(t_stack *stack, int *value) {
    if (stack == NULL || value == NULL || stack->top_index == -1) {
        return 0;
    }

    *value = stack->items[stack->top_index];
    return 1;
}

void destroy(t_stack *stack) {
    if (stack == NULL) {
        return;
    }

    free(stack->items);
    free(stack);
}

void clear(t_stack *stack) {
    if (stack == NULL) {
        return;
    }

    stack->top_index = -1;
}
