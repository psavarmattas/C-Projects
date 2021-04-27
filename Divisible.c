// WAP to find an addition of numbers which are >30, <100 & divisible by 7.

void main() {
    int i;
    printf("Numbers between 30 and 100, divisible by 7 : \n");
    for(i=30;i<100;i++) {
        if(i%7==0) {
            printf("%d \n",i);
        }
    }
}