/* Lab 5 P3: starter code to complete*/
#include <stdio.h>
#include <string.h>

int main()
{
    char input[256];
    char check[256];
    int count[256];
    char buf[20];
    int MAX = 26;
    int k = 0;
    int letterCount[26] = {0}; // Array to store the count of each letter initialized to zeros

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); // get the input from the user via keyboard
        k = strlen(input);
        // printf("%d", sizeof(input));
        // Check for an empty line to exit the loop
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }
        for(int i  = 0; i < 26; i++){
            check[i] = 'a' + i;
        }
        for(int i  = 0; i < 26; i++){
            count[i] = 0;
        }
        for(int i = 0; i < k; i++){
            if(input[i] >= 'A' && input[i] <= 'Z'){
                input[i] += 32;
            }
        }

        for(int i = 0; i < k; i++){
            for(int j = 0; j < 26; j++){
                if(input[i] == check[j]){
                    count[j]++;
                }
            }
        }
        char x = 97, z;
        for(int i = 0; i < 26; i++){
            z = x + i;
            printf("%c:", z);
            printf(" %d", count[i]);
            printf(" ");

        }




        // Your Code should be implemented here
        // Iterate through the characters in the input
        // Check if the character is a letter (A-Z or a-z)
        // Increment the corresponding count in the array
    }
    // More of your code here to
    // Display the letter counts

    return 0;
}
