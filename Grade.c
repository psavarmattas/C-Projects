// Use else if ladder statements to find out the result grade from the percentage.
/*  AA 100-90
    AB 89-75
    BB 74-60
    CC 59-35
    FF <=34
*/

void main() {
    int s1,s2,s3,s4,s5,t,p;

    printf("\n Enter marks of 5 subjects each out of 100 ");
    printf("\n\n ********************************************");

    printf("\n\n Maths = ");
    scanf("%d",&s1);

    printf("\n Science = ");
    scanf("%d",&s2);

    printf("\n English = ");
    scanf("%d",&s3);

    printf("\n History = ");
    scanf("%d",&s4);

    printf("\n Geography = ");
    scanf("%d",&s5);
    printf("\n ********************************************");

    t=s1+s2+s3+s4+s5;
    printf("\n Total marks = %d/500",t);

    p=t/5;
    printf("\n\n Percentage = %d ",p);
    printf("\n ********************************************");

    if(p>=90) {
        printf("\n\n Your Grade : AA");
    }
    else if(p>=75) {
    printf("\n\n Your Grade : AB");
    }

    else if(p>=60) {
    printf("\n\n Your Grade : BB");
    }

    else if(p>=34) {
    printf("\n\n Your Grade : CC");
    }

    else {
        printf("\n\n Your Grade : FF");
    }
}