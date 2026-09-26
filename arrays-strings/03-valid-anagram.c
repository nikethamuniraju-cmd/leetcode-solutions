#include <stdio.h>
#include <string.h>

int main() {
   char str1[] = "listen";
   char str2[] = "silent";

    int count[26] = {0};

    if (strlen(str1) != strlen(str2)) {
        printf("Not an Anagram\n");
        return 0;
    }

    for (int i = 0; str1[i] != '\0'; i++) {
        count[str1[i] - 'a']++;
        count[str2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not an Anagram\n");
            return 0;
        }
    }

    printf("Valid Anagram\n");

    return 0;
}
