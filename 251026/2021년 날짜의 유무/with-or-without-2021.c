#include <stdio.h>

int verifyMonth(int N){
    if(N==1||N==3||N==5||N==7||N==8||N==10||N==12){
        return 31;
    } else if (N==4||N==6||N==9||N==11){
        return 30;
    } else if (N==2){
        return 28;
    } else {
        return 0;
    }
}
void yes(){
    printf("Yes\n");
}
void no(){
    printf("No\n");
}
int main() {
    int m, d;
    scanf("%d %d", &m, &d);
    
    int month = verifyMonth(m);

    if(month==0){
        no();
    } else if (month==28){
        if(d>28){
            no();
        } else {
            yes();
        }
    } else if (month == 30){
        if(d>30){
            no();
        } else {
            yes();
        }
    } else if (month == 31){
        if(d>31){
            no();
        } else {
            yes();
        }
    } else {
        printf("Wrong Case\n");
    }


    return 0;
}