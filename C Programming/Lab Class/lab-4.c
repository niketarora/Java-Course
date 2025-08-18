// #include <stdio.h> 
// #include <math.h> 
// #define M_PI 3.14159
// void main() { 
//     float area, radius, width, length, a, b, c,s; 
//     int choice; 
//     printf("**********Choose an Option:*********\n "); 
//     printf("1: Area of the Circle\n "); 
//     printf("2: Area of the Rectangle\n "); 
//     printf("3: Area of the Triangle\n "); 
//     scanf("%d", &choice); 
    
//     if(choice==1) { 
//     printf("Enter the radius of the Circle: "); 
//     scanf("%f", &radius); 
//     area = M_PI*radius*radius; 
//     printf("The area of the circle with radius %f is %.2f", radius, area); 
//     } 
    
//     if(choice ==2) { 
//     printf("Enter the Width of the rectangle: "); 
//     scanf("%f", &width); 
//     printf("Enter the length of the rectangle: "); 
//     scanf("%f", &length); 
//     area = width*length; 
//     printf("The area of the rectangle is %.2f", area); 
//     } 
    
//     if(choice ==3) { 
//     printf("Enter the 3 sides of triangle eg (12 13 14):  "); 
//     scanf("%f %f %f", &a, &b, &c); 
//     s = (a+b+c)/2; 
//     area = sqrt(s*(s-a)*(s-b)*(s-c)); 
//     printf("The area of the triangle is %.2f", area); 
//     } 
// }

// #include<stdio.h> 
// void main() { 
//     float area, radius, width, length, a, b, c,s; 
//     int choice; 
//     printf("**********Choose an Option:*********\n "); 
//     printf("1: Area of the Circle\n "); 
//     printf("2: Area of the Rectangle\n "); 
//     printf("3: Area of the Triangle\n "); 
//     scanf("%d", &choice); 
//     switch(choice) { 
//         case 1: 
//             printf("Enter the radius of the Circle: "); 
//             scanf("%f", &radius); 
//             area = 3.14*radius*radius; 
//             printf("The area of the circle with radius %f is %.2f", radius, area); 
//             break; 
//         case 2:
//             printf("Enter the Width of the rectangle: "); 
//             scanf("%f", &width); 
//             printf("Enter the length of the rectangle: "); 
//             scanf("%f", &length); 
//             area = width*length; 
//             printf("The area of the rectangle is %.2f", area);
//             break;
//         case 3:
//             printf("Enter the 3 sides of triangle eg (12 13 14):  "); 
//             scanf("%f %f %f", &a, &b, &c); 
//             s = (a+b+c)/2; 
//             area = sqrt(s*(s-a)*(s-b)*(s-c)); 
//             printf("The area of the triangle is %.2f", area); 
//             break; 
//     } 
// } 


// #include<stdio.h> 
// void main() { 
//     int ch; 
//     printf("Enter number of week's day(1-7):"); 
//     scanf("%d",&ch); 
//     switch(ch) 
//     { 
//     case 1: printf("\n Sunday"); 
//     break; 
//     case 2: printf("\n Monday"); 
//     break; 
//     case 3: printf("\n Tuesday"); 
//     break; 
//     case 4: printf("\n Wednesday"); 
//     break; 
//     case 5: printf("\n Thursday"); 
//     break; 
//     case 6: printf("\n Friday"); 
//     break; 
//     case 7: printf("\n Saturday"); 
//     break; 
//     default: printf("Wrong choice!"); 
//     } 
// } 

// #include <stdio.h> 
// void main() { 
//     int num1, num2; 
//     float result=0; 
//     char ch;    
//     printf("Enter first number: "); 
//     scanf("%d",&num1); 
//     printf("Enter second number: "); 
//     scanf("%d",&num2); 
//     printf("Choose operation to perform (+,-,*,/,%): "); 
//     scanf(" %c",&ch); 
//     switch(ch)  { 
//         case '+': result=num1+num2; 
//         break;    
//         case '-': result=num1-num2; 
//             break; 
//         case '*': result=num1*num2; 
//             break;     
//         case '/': result=(float)num1/num2; 
//             break;    
//         case '%': result=num1%num2; 
//             break;
//         default: printf("Wrong operator!.\n"); 
//     } 
//     printf("Result: %d %c %d = %f\n",num1,ch,num2,result); 
// }


// #include <stdio.h>  
// void main() {  
//     int calls;  
//     float bill;  
//     printf("Enter number of calls :");  
//     scanf("%d", &calls);  
//     if (calls <= 100) {  
//     bill = 200;  
//     }  
//     else if (calls > 100 && calls <= 150) {  
//     calls = calls - 100;  
//     bill = 200+(0.60 *calls);  
//     }  
//     else if (calls > 150 && calls <= 200) {  
//     calls = calls - 150;  
//     bill = 200+(0.60 *50) + (0.50 *calls);  
//     }  
//     else {  
//     calls = calls - 200;  
//     bill = 200 + (0.60 * 50) + (0.50 * 50) + (0.40 * calls);  
//     }  
//     printf("Your bill is Rs. %0.2f", bill);  
// }

// #include <stdio.h> 
// void main() { 
//     int calls; 
//     float  bill; 
//     printf("Enter the number of calls"); 
//     scanf("%d",&calls); 
//     switch(calls) { 
//         case 1 ... 150: bill=0; 
//             break; 
//         case 151 ... 250: bill=0+(calls-150)*0.9; 
//             break; 
//         case 251 ... 400: bill=0+100*0.9+(calls-250)*1.2; 
//             break; 
//         default: bill=0+100*0.9+150*1.2+(calls-400)*1.5; 
//         } 
//     printf("Total bill =%f",bill); 
// } 

// #include<stdio.h> 
// void main() { 
//     float bill, units; 
//     printf("Enter the units consumed="); 
//     scanf("%f",&units); 
//     if(units<=50 && units>=0) { 
//         bill=units*3.50; 
//         printf("Electricity Bill=%f Rupees",bill); 
//     } 
//     else if(units<=100 && units>50) { 
//         bill=50*3.50+(units-50)*4; 
//         printf("Electricity Bill=%f Rupees",bill); 
//     } 
//     else if(units<=250 && units>150) { 
//         bill=50*3.50+100*4+(units-150)*5.20; 
//         printf("Electricity Bill=%f Rupees",bill); 
//     } 
//     else if(units>250) { 
//         bill=50*3.50+100*4+100*5.20+(units-250)*6.50; 
//         printf("Electricity Bill=%f Rupees",bill); 
//     } 
//     else {
//         printf("Please enter valid consumed units...");
//     } 
// }

// #include <stdio.h>

// void main() {
//     float cp, discount;
//     printf("Enter the cost price: ");
//     scanf("%f", &cp);
//     if (cp >= 800) {
//         discount = cp * 0.25;
//     }
//     else if (cp >= 500 && cp < 800) {
//         discount = cp * 0.20;
//     }
//     else {
//         discount = 0;
//     }
//     printf("Discount: Rs.%.2f", discount);
// }
