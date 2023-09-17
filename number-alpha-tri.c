#include<stdio.h>
int main(){

int n;

printf ("Enter the number of rows: ");
scanf ("%d", &n);

printf ("\n");

for (int i=1; i<=n; i++){
    if (i%2!=0){
        for (int j=1; j<=i; j++){
            printf ("%d ", j);
        }

        printf ("\n");

    }

    else if (i%2==0){
        int a= 65;
        for (int j=1; j<=i; j++){
        printf ("%c ", a);
        a= a+1;
    }

    printf ("\n");

    }

}

return 0;

}