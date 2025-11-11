#include <stdio.h>
 
void swap(int *i1, int *i2){
    int temp = *i1;
    *i1 = *i2;
    *i2 = temp;
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    swap(&n, &m);
    printf("%d %d\n", n, m);
     
    return 0;
}