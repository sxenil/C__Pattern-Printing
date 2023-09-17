#include<stdio.h>
int main(){

int n;

printf ("Enter the number of rows: ");
scanf ("%d", &n);

printf ("\n");

for (int i= 1; i<=n; i++){
    for (int j=1; j<=n;j++){
        int t= (n/2)+1;
        if (j==t || i==t){
            printf ("* ");
        }

        else {
            printf ("  ");
        }
        
    }

    printf ("\n");

}

return 0;

}