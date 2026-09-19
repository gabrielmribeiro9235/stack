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

    int opt = 0;
    do {
        menu();
        scanf("%d", &opt);

        switch (opt) {
            case 1:
                printf("-----------------------------------------------\n");
                print(stack);
                break;
            case 2: {
                printf("-----------------------------------------------\n");

                int elem;

                printf("Enter the element you want to push: ");
                scanf("%d", &elem);

                int push_status = push(stack, elem);

                if (push_status == 1) {
                    printf("\n%d pushed successfully\n", elem);
                } else {
                    printf("\nFailed to push\n");
                }

                break;
            }
            case 3: {
                printf("-----------------------------------------------\n");
                int popped_value;

                int pop_status = pop(stack, &popped_value);

                if (pop_status == 1) {
                    printf("Popped value: %d\n", popped_value);
                } else {
                    printf("Failed to pop\n");
                }

                break;
            }
            default:
                printf("-----------------------------------------------\n");
                printf("Invalid choice\n");
                break;
        }
    } while (opt != 9);

    return 0;
}
