#include <stdio.h>

int y, m, d;

int verifyYoon(int y){
    if (y%400 == 0) return 1;
    else if (y%100 == 0) return 0;  
    else if (y%4   == 0) return 1;
    else return 0;
}

void printSeason(int m){
    if(m>=3&&m<=5){
        printf("Spring\n");
    } else if (m>=6&&m<=8){
        printf("Summer\n");
    } else if (m>=9&&m<=11){
        printf("Fall\n");
    } else {
        printf("Winter\n");
    }
}

int verifyExists(int verified_y, int m, int d){
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        if(d>31){
            return 0;
        } else {
            return 1;
        }
    } else if (m==4||m==6||m==9||m==11){
        if(d>30){
            return 0;
        } else {
            return 1;
        }
    } else {
        if(verified_y){
            if(d>29){
                return 0;
            } else {
                return 1;
            }
        } else {
            if(d>28){
                return 0;
            } else {
                return 1;
            }
        }
    }
}

int main(void) {
    scanf("%d %d %d", &y, &m, &d);
    
    if(verifyExists(verifyYoon(y), m, d)){
        printSeason(m);
    } else {
        printf("-1\n");
    }
    
    return 0;
}