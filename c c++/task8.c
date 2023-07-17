#include <stdio.h>
#include <string.h>

int countAnagrams(char* word, int length) {
    // Базовий випадок: якщо довжина слова дорівнює 1, то є лише одна анаграма
    if (length == 1) {
        return 1;
    }

    int count = 0;

    for (int i = 0; i < length; i++) {
        // Обмінюємо першу букву з поточною
        char temp = word[0];
        word[0] = word[i];
        word[i] = temp;

        // Рекурсивно викликаємо функцію для решти букв
        count += countAnagrams(word + 1, length - 1);

        // Повертаємо букви у вихідний порядок
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
