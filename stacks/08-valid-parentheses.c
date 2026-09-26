#include <stdio.h>
#include <string.h>

int main() {
   char s[] = "({[]})";
    char stack[100];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } else {
            if (top == -1) {
                printf("Invalid Parentheses\n");
                return 0;
            }

            char open = stack[top--];

            if ((ch == ')' && open != '(') ||
                (ch == '}' && open != '{') ||
                (ch == ']' && open != '[')) {
                printf("Invalid Parentheses\n");
                return 0;
            }
        }
    }

    if (top == -1) {
        printf("Valid Parentheses\n");
    } else {
        printf("Invalid Parentheses\n");
    }

    return 0;
}