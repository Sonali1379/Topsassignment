#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function prototypes
void reverseString();
void concatenateStrings();
void checkPalindrome();
void copyString();
void findLength();
void findFrequency();
void countVowelsConsonants();
void countSpacesDigits();
void displayMenu();

// Main function - Entry point of the program
int main()
{
    int choice;
    char continueChoice;
    
    printf("\n================================================");
    printf("\n    STRING OPERATIONS APPLICATION");
    printf("\n================================================\n");
    
    // Main loop to keep the program running until user chooses to exit
    do
    {
        displayMenu(); // Display the menu of operations
        printf("\nEnter your choice (1-8): ");
        scanf("%d", &choice);
        
        // Clear input buffer to avoid issues with subsequent inputs
        while(getchar() != '\n');
        
        // Perform operation based on user's choice
        switch(choice)
        {
            case 1:
                reverseString();
                break;
            case 2:
                concatenateStrings();
                break;
            case 3:
                checkPalindrome();
                break;
            case 4:
                copyString();
                break;
            case 5:
                findLength();
                break;
            case 6:
                findFrequency();
                break;
            case 7:
                countVowelsConsonants();
                break;
            case 8:
                countSpacesDigits();
                break;
            default:
                // Handle invalid choice with user-friendly message
                printf("\n❌ Invalid choice! Please select a number between 1 and 8.\n");
                break;
        }
        
        // Ask user if they want to continue
        if(choice >= 1 && choice <= 8)
        {
            printf("\n------------------------------------------------");
            printf("\nDo you want to perform another operation? (y/n): ");
            scanf(" %c", &continueChoice);
        }
        else
        {
            printf("\nDo you want to try again? (y/n): ");
            scanf(" %c", &continueChoice);
        }
        
    } while(continueChoice == 'y' || continueChoice == 'Y');
    
    printf("\n================================================");
    printf("\n     Thank you for using the application!");
    printf("\n================================================\n");
    
    return 0;
}

// Function to display the menu
void displayMenu()
{
    printf("\n------------------------------------------------");
    printf("\n          MENU - STRING OPERATIONS");
    printf("\n------------------------------------------------");
    printf("\n1. Reverse a string");
    printf("\n2. Concatenation");
    printf("\n3. Palindrome");
    printf("\n4. Copy a string");
    printf("\n5. Length of the string");
    printf("\n6. Frequency of character in a string");
    printf("\n7. Find number of vowels and consonants");
    printf("\n8. Find number of blank spaces and digits");
    printf("\n------------------------------------------------");
}

// Function to reverse a string
void reverseString()
{
    char str[100];
    char rev[100];
    int i = 0, j = 0;
    
    printf("\n--- REVERSE A STRING ---\n");
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;
    
    // Business Logic: Find the length of the string first
    while (str[i] != '\0')
    {
        i++;
    }
    
    // Business Logic: Reverse the string by copying characters from end to beginning
    while (i > 0)
    {
        rev[j] = str[i-1];
        i--;
        j++;
    }
    rev[j] = '\0'; // Null terminate the reversed string
    
    printf("\n Original string: %s", str);
    printf("\n Reversed string: %s\n", rev);
}

// Function to concatenate two strings
void concatenateStrings()
{
    char str1[100];
    char str2[100];
    char result[200];
    
    printf("\n--- STRING CONCATENATION ---\n");
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;
    
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;
    
    // Business Logic: Copy first string to result
    strcpy(result, str1);
    // Business Logic: Append second string to result
    strcat(result, str2);
    
    printf("\n First string: %s", str1);
    printf("\n Second string: %s", str2);
    printf("\n Concatenated string: %s\n", result);
}

// Function to check if a string is palindrome
void checkPalindrome()
{
    char str[100];
    int i, len = 0, flag = 1;
    
    printf("\n--- PALINDROME CHECK ---\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    
    // Business Logic: Calculate the length of the string
    while (str[len] != '\0')
        len++;
    
    // Business Logic: Compare characters from start and end
    // If all pairs match, it's a palindrome
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }
    
    printf("\n String: %s", str);
    if (flag)
        printf("\n Result: The string is a PALINDROME\n");
    else
        printf("\n Result: The string is NOT a palindrome\n");
}

// Function to copy a string
void copyString()
{
    char str1[100], str2[100];
    
    printf("\n--- COPY A STRING ---\n");
    printf("Enter the string to copy: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;
    
    // Business Logic: Copy source string to destination string
    strcpy(str2, str1);
    
    printf("\n Original string: %s", str1);
    printf("\n Copied string: %s\n", str2);
}

// Function to find the length of a string
void findLength()
{
    char str[100];
    int length = 0;
    
    printf("\n--- LENGTH OF STRING ---\n");
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    
    // Business Logic: Count characters until null terminator is found
    while (str[length] != '\0')
    {
        length++;
    }
    
    printf("\n String: %s", str);
    printf("\n Length of the string: %d\n", length);
}

// Function to find frequency of a character in a string
void findFrequency()
{
    char str[100], ch;
    int i, count = 0;
    
    printf("\n--- FREQUENCY OF CHARACTER ---\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    
    printf("Enter a character to find frequency: ");
    scanf(" %c", &ch);
    
    // Business Logic: Traverse the string and count occurrences of the character
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            count++;
    }
    
    printf("\n String: %s", str);
    printf("\n Character: '%c'", ch);
    printf("\n Frequency of '%c': %d\n", ch, count);
}

// Function to count vowels and consonants
void countVowelsConsonants()
{
    char str[100];
    int i, vowels = 0, consonants = 0;
    
    printf("\n--- COUNT VOWELS AND CONSONANTS ---\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    
    // Business Logic: Check each character if it's a vowel or consonant
    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        
        // Convert to lowercase for easier comparison
        char lowerCh = tolower(ch);
        
        // Business Logic: Check if character is a letter
        if ((lowerCh >= 'a' && lowerCh <= 'z'))
        {
            // Business Logic: Check if it's a vowel
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || 
                lowerCh == 'o' || lowerCh == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        // Other characters (spaces, digits, symbols) are ignored
    }
    
    printf("\n String: %s", str);
    printf("\n Number of vowels: %d", vowels);
    printf("\n Number of consonants: %d\n", consonants);
}

// Function to count blank spaces and digits
void countSpacesDigits()
{
    char str[100];
    int i, spaces = 0, digits = 0;
    
    printf("\n--- COUNT SPACES AND DIGITS ---\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    
    // Business Logic: Traverse string and count spaces and digits
    for (i = 0; str[i] != '\0'; i++)
    {
        // Business Logic: Check if character is a blank space
        if (str[i] == ' ')
            spaces++;
        // Business Logic: Check if character is a digit (0-9)
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
    }
    
    printf("\n String: %s", str);
    printf("\n Number of blank spaces: %d", spaces);
    printf("\n Number of digits: %d\n", digits);
}
