#include <stdio.h>
#include <stdlib.h>

int main() {
    int numofStrings;
    char **strings;
    printf("Enter the number of strings you want to enter: ");
    scanf("%d", &numofStrings);
    strings = (char**)malloc(numofStrings * sizeof(char*));

    char buffer[1024];
    int length;

    for (int i = 0; i < numofStrings; ++i) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", buffer); 

        length = 0;
        while (buffer[length] != '\0') {
            length++;
        }

        strings[i] = (char*)malloc((length + 1) * sizeof(char));
        for (int j = 0; j <= length; ++j) {
            strings[i][j] = buffer[j];
        }
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < numofStrings; ++i) {
        printf("%s\n", strings[i]);
    }

    for (int i = 0; i < numofStrings; ++i) {
        free(strings[i]);
    }
    free(strings);

    return 0;
}
