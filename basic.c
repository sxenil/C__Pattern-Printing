#include<stdio.h>
int main(){

int x,n,m;

printf ("Enter the number of rows: ");
scanf ("%d", &n);

printf ("Enter the number of column: ");
scanf ("%d", &m);

printf ("\n");

for (int i=1; i<=n; i++){
    for (int i=1; i<=m; i++){
        printf ("*");
    }
    printf ("\n");
}

return 0;

}