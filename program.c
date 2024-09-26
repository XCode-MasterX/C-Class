#include <stdio.h>
#include <string.h>

int getStringSize(char *s) {
    int size = -1;
    while(s[++size] != '\0');
    return size;
}

void func1(){
    printf("SOLVING QUESTION 1.\n");

    char s[100];

    printf("Enter the string: ");
    fgets(s, 100, stdin);

    printf("Length of string (without null char): %d", getStringSize(s));
}

void func2() {
    printf("SOLVING QUESTION 2.\n");

    char s[100];
    int size = 0, left = 0, right;

    printf("Enter the string: ");
    fgets(s, 100, stdin);
    size = getStringSize(s);
    right = size;

    printf("Reversing the String: ");
    while(left < right) {
        char x = s[left];
        s[left++] = s[right];
        s[right--] = x;
    }

    printf("%s", s);
}

void func3() {
    printf("SOLVING QUESTION 3.\n");

    char s[100];
    
    printf("Enter the string: ");
    fgets(s, 100, stdin);
    int size = getStringSize(s);

    for(int i = 0; i < size; i++)
    {
        char x = s[i];
        x = x > 'a' && x < 'z' ? (char)(x - 32) : x;
        printf("%c", x);
    }
}

void func4() {
    printf("SOLVING QUESTION 4.\n");

    char s1[100], s2[100];
    
    printf("Enter the string1: ");
    fgets(s1, 100, stdin);
    printf("Enter the string2: ");
    fgets(s2, 100, stdin);

    int size1 = getStringSize(s1), size2 = getStringSize(s2);
    int minSize = size1 < size2 ? size1 : size2;

    for(int i = 0; i < minSize; i++) {
        if(s1[i] < s2[i]) { printf("s1 is smaller."); return; }
        else if(s1[i] > s2[i]) { printf("s2 is smaller."); return; }
    }

    if(size1 < size2) printf("s1 is smaller.");
    else if(size2 < size1) printf("s2 is smaller.");
    else printf("Both strings are same.");
}

void func5() {
    printf("SOLVING QUESTION 5.\n");

    char s[100];
    int size = 0, left = -1, right, same = 1;

    printf("Enter the string: ");
    fgets(s, 100, stdin);
    size = getStringSize(s);
    right = size;

    printf("Reversing the String: ");
    while(left++ < right-- & same)
        same = s[left] != s[right] ? 0 : same;

    printf(same ? "The string is palindrome.\n" : "The string is not palindrome.\n");
}

void func6() {
    printf("SOLVING QUESTION 6.\n");

    char str[100];
    
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    int size = getStringSize(str);
    char copy[size + 1];
    copy[size] = '\0';

    for(int i = 0; i < size; i++)
        copy[i] = str[i];

    printf("%s", copy);
}

void func7() {
    printf("SOLVING QUESTION 7.\n");

    char str1[100];
    char str2[100];

    printf("Enter the string1: ");
    fgets(str1, 100, stdin);
    printf("Enter the string2: ");
    fgets(str2, 100, stdin);

    str1[strcspn(str1, "\n")] = '\0';

    int size1 = getStringSize(str1), size2 = getStringSize(str2);
    int mergeSize = size1 + size2, index;
    char merge[size1 + size2];

    for(int i = 0; i < size1; i++, index++)
        merge[index] = str1[i];

    merge[index++] = ' ';

    for(int i = 0; i < size2; i++, index++)
        merge[index] =  str2[i];

    merge[index] = '\0';

    printf("\n\nMerged String: %s \nLength of merged string: %d\n", merge,getStringSize(merge));
}

void func8() {
    printf("SOLVING QUESTION 8.\n");

    char str1[100];
    char str2[100];

    printf("Enter the string1: ");
    fgets(str1, 100, stdin);
    printf("Enter the string2: ");
    fgets(str2, 100, stdin);

    str1[strcspn(str1, "\n")] = '\0';

    int size1 = getStringSize(str1), size2 = getStringSize(str2);
    int mergeSize = size1 + size2, index;
    char merge[size1 + size2];

    for(int i = 0; i < size1; i++, index++)
        merge[index] = str1[i];

    for(int i = 0; i < size2; i++, index++)
        merge[index] =  str2[i];

    merge[index] = '\0';

    printf("Size of str1: %d\nSize of str2: %d", size1, size2);
    printf("\n\nConcatenated String: %s \nLength of merged string: %d\n", merge, getStringSize(merge));
}

int main() {
    func8();

    return 0;
}