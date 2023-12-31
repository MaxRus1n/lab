#include <stdio.h>
#include <string.h>

int countAnagrams(char* word, int length) {
    if (length == 1) {
        return 1;
    }

    int count = 0;

    for (int i = 0; i < length; i++) {
        char temp = word[0];
        word[0] = word[i];
        word[i] = temp;
        
        count += countAnagrams(word + 1, length - 1);

        temp = word[0];
        word[0] = word[i];
        word[i] = temp;
    }

    return count;
}

int main() {
    char word[15];
    printf("Enter a word: ");
    scanf("%s", word);

    int length = strlen(word);
    int result = countAnagrams(word, length);
    printf("Number of possible anagrams: %d\n", result);

    return 0;
}
