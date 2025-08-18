// #include <stdio.h> 
// int main() { 
//     char s[100]; 
//     int i; 
//     printf("Enter a string : "); 
//     fgets(s, 100, stdin); 
//     for (i = 0; s[i]!='\0'; i++) { 
//         if(s[i] >= 'a' && s[i] <= 'z') { 
//             s[i] = s[i] - 32; 
//         } 
//     } 
//     printf("String in upper sase = %s", s); 
//     return 0; 
// } 
   
// #include <stdio.h> 
// #include <string.h> 
// int main() {
//     char str[100], ch; 
//     int i, index; 
//     index = -1; 
//     printf("Enter a string :  "); 
//     fgets(str, 100, stdin); 
//     printf("Enter the Character that you want to Search for :  "); 
//     scanf("%c", &ch); 
//     for(i = 0; i <= strlen(str); i++) { 
//         if(str[i] == ch) { 
//             index = i;  
//         } 
//     } 
//     if(index == -1) { 
//         printf("Not found !"); 
//     }
//     else { 
//         printf("The Last Occurrence  found at position %d ", index + 1); 
//     }
//     return 0; 
// } 

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str1[100], str2[100], str3[100],temp[100];
//     printf("Enter first string: ");
//     gets(str1);
//     printf("Enter second string: ");
//     gets(str2);
//     // Concatenation
//     strcpy(temp, str1);
//     strcat(temp, str2);
//     printf("\nConcatenated String: %s\n", temp);
//     // Length
//     printf("Length of first string: %lu\n", strlen(str1));
//     printf("Length of second string: %lu\n", strlen(str2));
//     // Reverse
//     strcpy(temp, str1); // Copy to preserve original
//     strrev(temp); // Note: strrev() is not standard in all compilers
//     printf("Reversed first string: %s\n", temp);
//     // Copy
//     strcpy(str3, str2);
//     return 0;
// }
   

// #include <stdio.h> 
// void main() { 
//     char str[100]; 
//     int i, totalwords=0; 
//     printf("Enter a String :  "); 
//     fgets(str, 100, stdin); 
//     for(i = 0; str[i] != '\0'; i++) { 
//         if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t') { 
//             totalwords++;  
//         }  
//     }  
//     printf("Total number of words= %d",totalwords); 
// } 

// #include <stdio.h> 
// int strlen(char str[]) { 
//     int length = 0; 
//     while (str[length] != '\0') { 
//         length++; 
//     } 
//     return length; 
// } 
// int main() { 
//     char str[] = "Hello, World!"; 
//     int len = strlen(str); 
//     printf("Length of '%s' is: %d\n", str, len); 
//     return 0; 
// }

// #include <stdio.h> 
// #include <string.h> 
// void main() { 
//     char str[100]="hello how are you",  temp[10],  substr[10]="are"; 
//     int i,j,k,flag=0; 
//     for(i=0;i<=strlen(str)-strlen(substr);i++) { 
//         k=0; 
//         for(j=i;j<i+strlen(substr);j++) { 
//             temp[k]=str[j]; 
//             k++; 
//         } 
//         temp[k]='\0'; 
//         if(strcmp(temp,substr)==0) { 
//             printf("Found!"); 
//             flag=1; 
//             break; 
//         } 
//     } 
//     if(flag==0) 
//     printf("Not found!"); 
// }

// #include <stdio.h>
// int isPalindrome(char str[]) {
//     int length = 0;
//     while (str[length] != '\0') {
//         length++;
//     }
//     int start = 0;
//     int end = length - 1;
//     while (start < end) {
//         if (str[start] != str[end]) {
//             return 0; // Not a palindrome
//         }
//         start++;
//         end--;
//     }
//     return 1;
// }
// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", str);
//     if (isPalindrome(str)) {
//         printf("'%s' is a palindrome.\n", str);
//     } else {
//         printf("'%s' is not a palindrome.\n", str);
//     }
//     return 0;
// }

// #include <stdio.h>  
// int main(){
//   int n, count=0;
//   for(int i=0; i<6; i++){
//     for(int j=6-i-1; j>0; j--){
//         printf("  ");
//     }
//     for(int j=count; j>=0; j--){
//         printf("%d ",j);
//     }
//     count++;
//     for(int j=1; j<=i; j++){
//         printf("%d ",j);
//     }
//     printf("\n");
//   }
// }
// #include <stdio.h>  
// int main()  
// {  
// int a=6, b=14;  // variable declarations  
// int x=23,y=10;  // variable declarations  
// int  m=12, n=10; // variable declarations 
// int  k=11;
//  printf("The output of the Bitwise AND operator a&b is %d\n",a&b); 
// printf("The output of the Bitwise OR operator x|y is %d\n",x|y); 
// printf("The output of the Bitwise ExOR operator m^n is %d\n",m^n); 
// printf("The output of the Bitwise Comp operator k is %d",~k); 
// return 0;  
// }  

// #include <stdio.h>
// struct Book {
//     int Book_ID;
//     char Title[50];
//     char Author[50];
//     float Price;
// }books[3] = {
//     {101, "C Basics", "John Doe", 29.99},
//     {102, "Data Structures", "Jane Smith", 39.50},
//     {103, "Algorithms", "Alan Turing", 49.00}
// };

// int main() {

//     for (int i = 0; i < 3; i++) {
//         printf("Book %d:\n", i + 1);
//         printf("ID: %d\n", books[i].Book_ID);
//         printf("Title: %s\n", books[i].Title);
//         printf("Author: %s\n", books[i].Author);
//         printf("Price: %.2f\n\n", books[i].Price);
//     }

//     return 0;
// }


#include <stdio.h>
#include <string.h>

// Custom reverse function (if strrev not available)
void reverse(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];

    // 1. strcat() - concatenate str2 to str1
    strcat(str1, str2);
    printf("After strcat: %s\n", str1);  // HelloWorld

    // 2. strlen() - length of string
    printf("Length of str1: %lu\n", strlen(str1));  // Length of HelloWorld

    // 3. strrev() - reverse a string (use custom reverse)
    strcpy(str3, str1);  // Copy to str3 to preserve original
    reverse(str3);
    printf("Reversed str1: %s\n", str3);

    // 4. strcpy() - copy one string to another
    strcpy(str3, str2);
    printf("After strcpy, str3: %s\n", str3);  // World

    // 5. strcmp() - compare strings
    int cmp = strcmp(str2, str3);
    if (cmp == 0)
        printf("str2 and str3 are equal.\n");
    else
        printf("str2 and str3 are not equal.\n");

    // 6. strchr() - search for a character
    char *ptr = strchr(str1, 'W');
    if (ptr)
        printf("Character 'W' found at position: %ld\n", ptr - str1);
    else
        printf("Character 'W' not found.\n");

    // 7. strstr() - search for a substring
    ptr = strstr(str1, "loWo");
    if (ptr)
        printf("Substring 'loWo' found at position: %ld\n", ptr - str1);
    else
        printf("Substring 'loWo' not found.\n");

    return 0;
}
