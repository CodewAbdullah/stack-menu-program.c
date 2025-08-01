#include <stdio.h>
#define size 5

int stack[size];
int top = -1;

void push(int num) {

    if (top == size - 1) {

        printf("The stack is overflowing.\n");
    }

    else {

        top++;
        stack[top] = num;
        printf("%d pushed.\n", num);
    }
}

void pop() {

    if (top == -1) {

        printf("Stack is empty.\n");
    }

    else {

        printf("%d poped.\n", stack[top]);
        top--;
    }
}

void peek() {

    if (top == -1) {

        printf("The stack is empty.\n");
    }

    else {

        printf("Top element: %d", stack[top]);
    }
}

void display() {

    if (top == -1) {

        printf("The stack is empty.\n");
    }

    else {

        printf("The elements in the stack: ");
        
        for(int i = top; i >= 0; i--) {

            printf("%d ", stack[i]);
        }
    }
}

int main() {

    int exit_flag = 0;


    do {

        int choice = 0;
        int num = 0;
        int valid = 0;

        printf("\n1. Push.\n");
        printf("2. Pop.\n");
        printf("3. Peek.\n");
        printf("4. Display.\n");
        printf("5. Exit.\n");

        do {

            printf("Choose an option: ");
            if (scanf("%d", &choice) != 1) {

                getchar();
                printf("Invalid Choice, choose an option between(1-5).\n");
            }

            else if (choice < 0 || choice > 5) {

                printf("Invalid Choice, choose an option between(1-5).\n");
            }

        } while (choice < 1 || choice > 5);
        

        switch(choice) {

            case 1:

            do {

                printf("Enter a number to push: ");
                if (scanf("%d", &num) != 1) {

                    getchar();
                    printf("\nInvalid Input, enter a number to push.\n");
                    valid = 1;
                }

                getchar();

            } while (valid == 1);

            push(num);
            break;

            case 2:

            pop();
            break;

            case 3:

            peek();
            break;

            case 4:

            display();
            break;

            case 5:

            printf("Exiting the program.\n");
            exit_flag = 1;
            break;
        }

    } while (exit_flag != 1);

    return 0;
}