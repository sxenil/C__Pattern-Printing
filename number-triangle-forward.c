#include<stdio.h>
int main(){

int n;

printf ("Enter the number of rows: ");
scanf ("%d", &n);

printf ("\n");

for (int i=1; i<=n; i++){
    for (int j=1; j<=n+i-4; j++){ //or use j<=i
        printf ("%d ", j);
        }
    printf ("\n");
}

return 0;

}