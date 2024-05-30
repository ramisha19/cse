#include<stdio.h>
int main()
{
    int data[2][2];
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter value for data[%d][%d]:",i,j);
            scanf("%d",&data[i][j]);
        }
    }
printf("Two Dimentional array elements:\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d ",data[j][i]);
    }
    printf("\n");
}
return 0;
}
        
    


