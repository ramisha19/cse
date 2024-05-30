#include<stdio.h>
int main()
{
    int data[2][2],ara[2][2];
    int i,j,k,l,m,n, sum[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter value for data[%d][%d]:",i,j);
            scanf("%d",&data[i][j]);
        }
    }
    for(k=0;k<2;k++){
        for(l=0;l<2;l++){
            printf("Enter value for ara[%d][%d]:",k,l);
            scanf("%d",&ara[k][l]);
        }
    }
    printf("Two Dimentional array elements:\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d ",data[i][j]);
    }
    printf("\n ");
}
printf("Two Dimentional array elements:\n");
for(k=0;k<2;k++){
    for(l=0;l<2;l++){
        printf("%d ",ara[k][l]);
    }
    printf("\n ");
    }

for(m=0;m<2;m++){
    for(n=0;n<2;n++){
         sum[m][n]=data[m][n]+ara[m][n];   
         printf("%d ",sum[m][n]);
        }
    printf("\n");
}



return 0;
}
        
    


