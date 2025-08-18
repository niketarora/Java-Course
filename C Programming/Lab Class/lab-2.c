#include <stdio.h> 
 
// int main() { 
//    printf("Hello World"); 
//    return 0; 
// }

// int main() { 
//    int num1, num2, sum; 
//    printf("Enter first number: "); 
//    scanf("%d", &num1); 
//    printf("Enter second number: "); 
//    scanf("%d", &num2); 
 
//    sum = num1 + num2; 
//    printf("Sum of the entered numbers= %d", sum); 
//    return 0,
// }
 
// int main() { 
//     int sec, h, m, s; 
//     printf("Enter time in seconds: "); 
//     scanf("%d", &sec); 
//     h = (sec/3600);  
//     sec %= 3600;
//     m = sec/60;
//     sec %= 60;
//     s = sec;
//     // h = (sec/3600);
//     // m = (sec -(3600*h))/60;
//     // s = (sec -(3600*h)-(m*60));
//     printf("H:M:S - %d:%d:%d\n",h,m,s); 
//     return 0; 
// } 

// int main() { 
//     int n,f,x,s,y,t,l,sum; 
//     printf("Enter a four digit number: "); 
//     scanf("%d",&n); 
//     f=n/1000;   
//     x=n%1000; 
//     s=x/100; 
//     y=x%100; 
//     t=y/10; 
//     l=y%10; 
//     printf("\nFirst Digit =%d \nSecond Digit=%d \nThird Digit =%d \nLast Digit=%d\n",f,s,t,l); 
//     sum=f+s+t+l; 
//     printf("\nSum of All 4-Digits : %d",sum); 
//     return 0; 
// }

// int main() { 
//     float fah, cel; 
//     printf("Enter a temp in fahrenheit: "); 
//     scanf("%f", &fah); 
//     cel = (5.0/9) * (fah - 32); 
//     printf("%.2f °F is same as %.2f °C", fah, cel); 
//     return 0; 
// }

// int main() { 
//     int distance; 
//     float meter, feet, inches, centimeter; 
//     printf("Enter the distance [in Kilometers]: "); 
//     scanf("%d", & distance); 
    
//     meter = distance * 1000; 
//     feet = distance * 3280.84; 
//     inches = distance * 39370.1; 
//     centimeter = distance * 100000; 
    
//     printf("Meter = %f\n", meter); 
//     printf("Feet = %f\n", feet); 
//     printf("Inches = %f\n", inches); 
//     printf("Centimeters = %f\n", centimeter); 
// }

//  int main() {   
//     float x1, y1, x2, y2, distance;   
//     printf("Enter point 1 (x1, y1)\n");   
//     scanf("%f%f", &x1, &y1);    
//     printf("Enter point 2 (x2, y2)\n");   
//     scanf("%f%f", &x2, &y2);    
//     distance = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) );   
//     printf("Distance between (%0.2f, %0.2f) and (%0.2f, %0.2f) is %0.2f \n", x1, y1, x2, y2, distance);   
//     return 0;   
// }  

// int main() { 
//     float r, area,  perimeter; 
//     printf("Enter the radius of circle: "); 
//     scanf("%f",&r);  
//     area = 3.14*r*r;  
//     perimeter=2*3.14*r; 
//     printf("The area of the circle is =%f\n",area); 
//     printf("The perimeter of the circle is= %f" ,perimeter);  
//    return 0;  
// } 

// int main() { 
//     int x, y; 
//     printf("Enter the value of x: "); 
//     scanf("%d", &x); 
//     printf("Enter the value of y: "); 
//     scanf("%d", &y); 
//     int temp = x; 
//     x = y; 
//     y = temp; 
//     printf("After Swapping: x = %d, y = %d", x, y); 
//     return 0; 
// } 

