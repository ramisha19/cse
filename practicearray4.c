#include<stdio.h>
int main()
{
    int data[2][2],ara[2][2];
    int i,j,k,l,p,n,o, m[2][2];
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

for(p=0;p<2;p++){
    for(n=0;n<2;n++){
        m[p][n]=0;
        for(o=0;o<2;o++){
         m[p][n]= m[p][n]+data[p][o]*ara[o][n];   
        }
    }

}
for(p=0;p<2;p++){
    for(n=0;n<2;n++){
printf("%d ",m[p][n]);
    }
    printf("\n");
}

return 0;
}
        
    


