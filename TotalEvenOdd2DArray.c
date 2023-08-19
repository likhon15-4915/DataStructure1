#include<stdio.h>
int main(){
int i,j,n,a[100][100],row,col,even=0,odd=0;
printf("Enter the row and colum size");
scanf("%d %d",&row,&col);

printf("Enter the numbers of matrix\n");
for(i=1;i<=row;i++)
    for(j=1;j<=col;j++){
        scanf("%d ",&a[i][j]);
    }

for(i=1;i<=row;i++)
    for(j=1;j<=col;j++){
    if(a[i][j]%2==0)
                even++;
            else
                odd++;
}



printf("Even %d\n",even);
printf("Odd %d\n",odd);
return 0;
}
