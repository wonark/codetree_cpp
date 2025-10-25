#include <stdio.h>

int n1, n2;
int a[100], b[100];

int isTrue(int* p, int* q, int n1, int n2);
int main() {
    scanf("%d %d", &n1, &n2);
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    for (int j = 0; j < n2; j++)
        scanf("%d", &b[j]);
    
    if(isTrue(a, b, n1, n2)==1){
        printf("Yes\n");
        return 0;
    } else {
        printf("No\n");
        return 0;
    }
    
    return -1;
}
int isTrue(int* p, int* q, int n1, int n2){
    for(int*p1=p;p1<p+n1-n2+1;p1++){
        int*testp = p1;
        int test_cnt = n2;
        for(int*p2=q;p2<q+n2;testp++, p2++){
            if (*testp==*p2){
                test_cnt--;
            }
        }
        if(test_cnt==0){
            return 1;
        }
    }
    return 0;
}