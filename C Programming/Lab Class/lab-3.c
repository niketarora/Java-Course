#include <stdio.h> 
#include <math.h> 
// int main()  { 
//     int num; 
//     printf("Enter an integer: "); 
//     scanf("%d", &num); 
//     if(num % 2 == 0) 
//         printf("%d is even.", num); 
//     else 
//         printf("%d is odd.", num); 
//     return 0; 
//    } 

// int main() { 
//    int year; 
//    printf("Enter a year: "); 
//    scanf("%d", &year); 
//     if ((year %4==0 && year%100!=0) || (year % 400 == 0)) { 
//       printf("%d is a leap year.", year); 
//     } 
//     else { 
//       printf("%d is not a leap year.", year); 
//     } 
//    return 0; 
// } 

// int main (){ 
//    float a,b,c,r1,r2,d; 
//    printf ("enter the values of a b c :- "); 
//    scanf ("%f %f %f", &a, &b, &c); 
//    d= b*b - 4*a*c; 
//     if (d>0) { 
//       r1 = (-b + sqrt(d)) / (2*a); 
//       r2 = (-b - sqrt(d)) / (2*a); 
//       printf ("The real roots = %f %f", r1, r2); 
//     } 
//     else if (d == 0){ 
//       r1 = -b/(2*a); 
//       r2 = -b/(2*a); 
//       printf ("roots are equal =%f %f", r1, r2); 
//     } 
//     else 
//       printf("Roots are imaginary!"); 
//       return 0;
// } 

// int main() { 
//     int month; 
//     printf("Enter month number (1-12): "); 
//     scanf("%d", &month); 
//     if(month == 1 || month == 3 || month == 5 || month == 7 || 
//         month == 8 || month == 10 || month == 12) { 
//         printf("31 days"); 
//     } 
//     else if(month == 2) 
//         { 
//         printf("28 or 29 days"); 
//     } 
//     else if(month == 4 || month == 6 || month == 9 || month == 11) { 
//           printf("31 days"); 
//     } 
//     else { 
//     printf("Invalid input! Please enter month number between (1-12)"); 
//     } 
// return 0; 
// }

// int main() {
//     int months;
//     int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//     printf("Enter the number of months: ");
//     scanf("%d", &months);
//     int totalDays = 0;
//     if (months < 1 || months > 12) {
//         printf("Invalid number of months. Please enter a value between 1 and 12.\n");
//         return 1;
//     }
//     else {
//     for (int i = 0; i <= months-1; i++) {
//         totalDays += daysInMonth[i];
//     } }

//     printf("Total number of days for %d months starting from January: %d days", months, totalDays);
//     return 0;
// }

// int main() { 
//     int n1, n2; 
//     printf( "Input the first integer : " ); 
//     scanf("%d", &n1); 
//     printf( "Input the second integer: " ); 
//     scanf("%d", &n2); 
//     if(n1 % n2 ==0) 
//         printf( "\n%d is a multiple of %d.\n", n1, n2 ); 
//     else 
//         printf( "\n%d is not a multiple of %d.\n", n1, n2 ); 
//     return 0; 
// } 

// int main() { 
//     int num; 
//     printf("Enter your mark "); 
//     scanf("%d",&num); 
//     printf("You entered %d", num);   
//         if (num>100)  printf("!Wrong data ");
//         else if(num >= 80)  printf("You got A grade");  
//         else if (num >=60)  printf(" You got B grade"); 
//         else if (num >=40)  printf(" You got C grade");
//         else if (num < 40)  printf(" You Failed in this exam");
//     return 0; 
// } 

// int main() { 
//     int side1, side2, side3;
//     float area;  
//     printf("Enter the value of sides:"); 
//     scanf("%d %d %d",&side1,&side2,&side3); 
//     if(side1+side2> side3) { 
//         if(side1+side3> side2) {
//             if(side2+side3> side1) { 
//                 area = (side1+side2+side3)/2;
//                 printf("Area = %f",area); 
//             }
//         }
//     }
// return 0;  
// } 

int main() { 
    char ch; 
    printf("Please enter an alphabet:"); 
    scanf("%c", &ch); 
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' ||  ch == 'I' || ch == 'O' || ch == 'U') { 
        printf("%c is a VOWEL.",ch);
    } 
    else { 
        printf("%c is a CONSONANT.",ch); 
    } 
    return 0; 
} 

