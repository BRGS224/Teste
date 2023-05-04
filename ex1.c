#include <stdio.h>

int main(){
    int pos,pulos,i,j,k,pedras,sapos,n[100];
    scanf("%d",&pedras);
    scanf("%d",&sapos);
    for ( i = 0; i < pedras; i++)
    {
        n[i]=0;
    }
    
    for (i = 0; i < sapos; i++)
    {
        scanf("%d",&pos);
        scanf("%d",&pulos);
        for (j = pos; j < pedras; j+=pulos)
        {
            n[j]=1;

        }
        for ( k = pos; k >=0;k-=pulos)
        {
            n[k]=1;
        }
    }
    for ( i = 0; i < pedras; i++)
    {
        printf("%d ",n[i]);
    }
    
    


    return 0;
}