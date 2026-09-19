#include<stdio.h>
#include"stack.h"

void menu() {
    printf("-----------------------------------------------\n");
    printf("Select a function:\n");
    printf("1 - print\n");
    printf("2 - push\n");
    printf("3 - pop\n");
    printf("4 - top\n");
    printf("5 - clear\n");
    printf("6 - is_empy\n");
    printf("7 - is_full\n");
    printf("8 - size\n");
    printf("9 - exit\n");
    printf("-----------------------------------------------\n");
    printf("Your choice: ");
}

int main() {
    int stack_size;

    printf("Enter the maximum initial stack size: ");
    scanf("%d", &stack_size);

    t_stack *stack = create_stack(stack_size);

    if (stack == NULL) {
        return 1;
    }

    return 0;
}
