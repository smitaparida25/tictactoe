#include <stdio.h>

int main() {
    char a[]={"123456789"};
    int i,j,p;
    printf(".____________________.\n");
    printf("|  %c   |  %c   |  %c   |\n",a[0],a[1],a[2]);
    printf("|------|------|------|\n");
    printf("|  %c   |  %c   |  %c   |\n",a[3],a[4],a[5]);
    printf("|------|------|------|\n");
    printf("|  %c   |  %c   |  %c   |\n",a[6],a[7],a[8]);
    printf("|______|______|______|\n");
    for (i=1;i<9;i++){
    printf("enter a number for x: ");
    scanf("%d",&j);
  
        if (i<9){
            if(j<10){
                a[j-1]='X';
                printf(".____________________.\n");
                printf("|  %c   |  %c   |  %c   |\n",a[0],a[1],a[2]);
                printf("|------|------|------|\n");
                printf("|  %c   |  %c   |  %c   |\n",a[3],a[4],a[5]);
                printf("|------|------|------|\n");
                printf("|  %c   |  %c   |  %c   |\n",a[6],a[7],a[8]);
                printf("|______|______|______|\n");
            }
            else {
                printf("invalid no");
            }
            }
            
            printf("enter a number for 0: ");
            scanf("%d",&p);
            if (p<10){
                a[p-1]='0';
                printf(".____________________.\n");
                printf("|  %c   |  %c   |  %c   |\n",a[0],a[1],a[2]);
                printf("|------|------|------|\n");
                printf("|  %c   |  %c   |  %c   |\n",a[3],a[4],a[5]);
                printf("|------|------|------|\n");
                printf("|  %c   |  %c   |  %c   |\n",a[6],a[7],a[8]);
                printf("|______|______|______|\n");
                
            }
    }
return 0;
}
