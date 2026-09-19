#ifndef STACK_H
#define STACK_H

typedef struct {
    int max;
    int top_index;
    int *items;
} t_stack;

t_stack* create_stack(int);
int push(t_stack*, int);
int pop(t_stack*, int*);
int top(t_stack*, int*);
void destroy(t_stack*);
void clear(t_stack*);
int is_empty(t_stack*);
int is_full(t_stack*);
int size(t_stack*);
void print(t_stack*);

#endif