#include <stdio.h>
#include <string.h>

int main() {
    char strs[3][20] = {"flower", "flow", "flight"};
    int n = 3;

    int i = 0;

    while (1) {
        char ch = strs[0][i];

        if (ch == '\0') {
            break;
        }

        for (int j = 1; j < n; j++) {
            if (strs[j][i] != ch || strs[j][i] == '\0') {
                printf("Longest Common Prefix: ");

                for (int k = 0; k < i; k++) {
                    printf("%c", strs[0][k]);
                }

                printf("\n");
                return 0;
            }
        }

        i++;
    }

    printf("Longest Common Prefix: %s\n", strs[0]);

    return 0;
}