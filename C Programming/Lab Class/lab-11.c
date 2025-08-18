// #include<stdio.h> 
// int main() { 
//     int num1, num2, sum; 
//     int *ptr1, *ptr2; 
//     printf("Enter any two Number: "); 
//     scanf("%d%d", &num1, &num2); 
//     ptr1 = &num1; 
//     ptr2 = &num2; 
//     sum = *ptr1 + *ptr2; 
//     printf("Sum of %d and %d is %d", *ptr1, *ptr2, sum); 
//     return 0; 
// }

// #include<stdio.h> 
// int main() { 
//     int a,b,c,*pa, *pb, *pc; 
//     printf("Enter three numbers:\n"); 
//     scanf("%d%d%d", &a,&b,&c); 
//     pa= &a;  
//     pb= &b; 
//     pc= &c; 
//     if(*pa > *pb && *pa > *pc) { 
//         printf("Largest is: %d", *pa); 
//     } 
//     else if(*pb > *pc && *pb > *pc) { 
//         printf("Largest is : %d", *pb); 
//     } 
//     else { 
//         printf("Largest = %d", *pc); 
//     } 
//     return 0; 
// }

// #include<stdio.h> 
// int string_ln(char*); 
// void main() { 
//     char str[20]; 
//     int length; 
//     printf("\nEnter any string : "); 
//     gets(str);    // fgets(str,20,stdin) 
//     length = string_ln(str); 
//     printf("The length of the given string %s is : %d", str, length); 
// } 
// int string_ln(char  *p) { 
//     int count = 0; 
//     while (*p != '\0') { 
//         count++; 
//         p++; 
//     } 
//     return count; 
// }

// #include<stdio.h> 
// int main() { 
//     int array[5]; 
//     int i,sum=0; 
//     int *ptr; 
//     printf("Enter array elements (5 integer values):"); 
//     for(i=0;i<5;i++) { 
//         scanf("%d",&array[i]); 
//     } 
//     ptr = array; 
//     for(i=0;i<5;i++) { 
//         sum = sum + *ptr; 
//         ptr++; 
//     } 
//     printf("The sum is: %d",sum); 
// }

// #include<stdio.h> 
// int main() { 
//     char str[80], search[10]; 
//     int count1 = 0, count2 = 0, i, j, flag; 
//     printf("Enter a string:"); 
//     gets(str); 
//     printf("Enter search substring:"); 
//     gets(search); 
//     while (str[count1] != '\0') 
//         count1++; 
//     while (search[count2] != '\0') 
//         count2++; 
//     for (i = 0; i <= count1 - count2; i++) { 
//         for (j = i; j < i + count2; j++) { 
//             flag = 1; 
//             if (str[j] != search[j - i]) { 
//                 flag = 0; 
//                 break; 
//             } 
//         } 
//         if (flag == 1) 
//             break; 
//     } 
//     if (flag == 1) 
//         printf("SEARCH SUCCESSFUL!"); 
//     else 
//         printf("SEARCH UNSUCCESSFUL!"); 
//     return 0; 
// }

// #include<stdio.h> 
// int main() {
//     int n,m,rem,base=10,flag=0;
//     printf("Enter the number:-");
//     scanf("%d",&n);
//     m = n*n;
//     while(n>0){
//         rem = n % base;
//         rem = rem*rem;
//         if(rem == m){
//             printf("It's an automorphic number");
//             flag = 1;
//             break;
//         }
//         base *= 10;
//     }
//     printf("%d", base);
//     if(flag == 0){
//         printf("It's not an automorphic number");
//     }
// }
