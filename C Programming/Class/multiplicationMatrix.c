#include<stdio.h>     
int main() {   
    int a[10][10],b[10][10],M[10][10],r,c,i,j,k,m,n;     
    printf("Enter the number of row for first matrix= ");     
    scanf("%d",&r);     
    printf("Enter the number of column for first matrix= ");     
    scanf("%d",&c);     
    printf("Enter the first matrix element= \n");     
    for(i=0;i<r;i++) {     
        for(j=0;j<c;j++) {     
            scanf("%d",&a[i][j]);     
        }     
    }     
    printf("Enter the number of row for second matrix= ");     
    scanf("%d",&m);     
    printf("Enter the number of column for second matrix= ");     
    scanf("%d",&n); 
    printf("Enter the second matrix element= \n");     
    for(i=0;i<m;i++) {     
        for(j=0;j<n;j++) {     
            scanf("%d",&b[i][j]);     
        }     
    }     
    printf("multiply of the matrix= \n");     
    for(i=0;i<r;i++) {     
        for(j=0;j<n;j++) {     
            M[i][j]=0;     
            for(k=0;k<c;k++) {     
                M[i][j]+=a[i][k]*b[k][j];     
            }     
        }
    }     
    //for printing result    
    for(i=0;i<r;i++) {     
        for(j=0;j<n;j++) {
            printf("%3d",M[i][j]);     
        }     
        printf("\n");     
        }     
    return 0;   
}  