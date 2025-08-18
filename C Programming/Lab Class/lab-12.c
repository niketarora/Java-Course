// #include <stdio.h> 
// struct person { 
//     char name[20]; 
//     char doj[10]; 
//     float salary; 
// } p[3];      
// // Array of structures 
// int main(void) { 
//     int i=0; 
//     for(i=0;i<3;i++) { 
//         printf("\n Enter Person Name : "); 
//         scanf("%s",p[i].name); 
//         printf("\n Enter Person Date of Joining (dd-mm-yyyy) : "); 
//         scanf("%s",p[i].doj); 
//         printf("\n Enter Person Salary : "); 
//         scanf("%f",&p[i].salary); 
//     } 
//     for(i=0;i<3;i++) { 
//         printf("\n Person %d Detail ",i+1); 
//         printf("\n Name   = %s",p[i].name); 
//         printf("\n DOJ    = %s",p[i].doj); 
//         printf("\n Salary = %.2f",p[i].salary); 
//     } 
//     return 0; 
// }

// #include <stdio.h> 
// #include <string.h>  
// struct Student { 
//     int rollNo; 
//     char name[50]; 
//     int marks[3]; 
//     int total; 
// }; 
// int main() { 
//     int n; 
//     printf("Enter the number of students: "); 
//     scanf("%d", &n);  
//     struct Student students[n]; 
//     for (int i = 0; i < n; i++) { 
//         printf("\nEnter details for student %d:\n", i+1); 
//         printf("Roll No: "); 
//         scanf("%d", &students[i].rollNo); 
//         printf("Name: "); 
//         scanf(" %[^\n]s", students[i].name); // Reads entire line including spaces 
//         printf("Marks in 3 subjects: "); 
//         students[i].total = 0; 
//         for (int j = 0; j < 3; j++) { 
//             scanf("%d", &students[i].marks[j]); 
//             students[i].total = students[i].total + students[i].marks[j]; 
//         } 
//     }
//     for (int i = 0; i < n-1; i++) {  
//         for (int j = 0; j < n-i-1; j++) { 
//             if (students[j].total < students[j+1].total) { 
//                 // Swap the structures 
//                 struct Student temp = students[j]; 
//                 students[j] = students[j+1]; 
//                 students[j+1] = temp; 
//             } 
//         }    
//     }   
//     printf("\nStudent Details (Sorted by Total Marks in Descending Order):\n"); 
//     printf("Roll No\tName\t\tTotal Marks\n");
//     for (int i = 0; i < n; i++) { 
//     printf("%d\t%s\t\t%d\n", students[i].rollNo, students[i].name, students[i].total); 
//     } 
//     return 0; 
// } 

// #include <stdio.h> 
// #include <string.h> 
// struct Employee { 
//     int empNo; 
//     char name[50]; 
//     float basic; 
//     float hra; 
//     float netSalary; 
// }; 
 
// int main() { 
//     int n; 
//     float totalNetSalary = 0, averageNetSalary;  
//     printf("Enter the number of employees: "); 
//     scanf("%d", &n);  
//     struct Employee employees[n]; 
//     for (int i = 0; i < n; i++) { 
//         printf("\nEnter details for employee %d:\n", i+1);
//         printf("Employee Number: "); 
//         scanf("%d", &employees[i].empNo); 
//         printf("Name: "); 
//         scanf(" %[^\n]s", employees[i].name); 
//         printf("Basic Salary: "); 
//         scanf("%f", &employees[i].basic);
//         printf("HRA: "); 
//         scanf("%f", &employees[i].hra); 
//         employees[i].netSalary = employees[i].basic + employees[i].hra; 
//         totalNetSalary += employees[i].netSalary; 
//     } 
//     averageNetSalary = totalNetSalary / n; 
//     // Display all employee details 
//     printf("\nAll Employee Details:\n"); 
//     printf("Emp No\tName\t\tBasic\tHRA\tNet Salary\n"); 
//     printf("------------------------------------------------\n"); 
//     for (int i = 0; i < n; i++) { 
//         printf("%d\t%s\t%.2f\t%.2f\t%.2f\n",  
//                employees[i].empNo,  
//                employees[i].name,  
//                employees[i].basic,  
//                employees[i].hra,  
//                employees[i].netSalary); 
//     } 
     
//     // Display employees with above-average net salary 
//     printf("\nEmployees with Above-Average Net Salary (Average: %.2f):\n", 
//     averageNetSalary); 
//     printf("Emp No\tName\t\tBasic\tHRA\tNet Salary\n"); 
//     printf("---------------------------------------------\n"); 
//     for (int i = 0; i < n; i++) { 
//         if (employees[i].netSalary > averageNetSalary) { 
//             printf("%d\t%s\t%.2f\t%.2f\t%.2f\n",  
//             employees[i].empNo,  
//             employees[i].name,  
//             employees[i].basic,  
//             employees[i].hra,  
//             employees[i].netSalary); 
//         } 
//     } 
//     return 0; 
// }


// #include <stdio.h> 
// #include <time.h> 
// struct Date { 
//     int day; 
//     int month; 
//     int year; 
// }; 
// // Function to print date 
// void printDate(struct Date d) { 
//     printf("%02d-%02d-%04d\n", d.day, d.month, d.year); 
//     } 
// // Function to add days to a date 
// struct Date addDays(struct Date d, int daysToAdd) { 
//     struct tm timeStruct = {0}; 
//     // Set the values to tm structure (note: months are 0-based, years since 1900) 
//     timeStruct.tm_mday = d.day; 
//     timeStruct.tm_mon = d.month - 1; 
//     timeStruct.tm_year = d.year - 1900; 
//     // Add days 
//     timeStruct.tm_mday += daysToAdd; 
//     // Normalize the date 
//     mktime(&timeStruct); 
//     // Update and return the new date 
//     struct Date newDate; 
//     newDate.day = timeStruct.tm_mday; 
//     newDate.month = timeStruct.tm_mon + 1; 
//     newDate.year = timeStruct.tm_year + 1900; 
//     return newDate; 
// } 
// int main() { 
//     time_t t = time(NULL); 
//     struct tm currentTime = *localtime(&t); 
//     struct Date currentDate; 
//     currentDate.day = currentTime.tm_mday; 
//     currentDate.month = currentTime.tm_mon + 1; 
//     currentDate.year = currentTime.tm_year + 1900; 
//     printf("Current Date: "); 
//     printDate(currentDate); 
//     struct Date futureDate = addDays(currentDate, 45); 
//     printf("Date after 45 days: "); 
//     printDate(futureDate); 
//     return 0; 
// }