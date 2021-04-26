// WAP to check your age > 18 or not (using if else statement).

void main() {
    int vote_age;

    printf("Input the age of the candidate : ");
    scanf("%d",&vote_age);
    if (vote_age<18) {
        printf("Sorry, You are not eligible to cast your vote.\n");
        printf("You would be able to cast your vote after %d year.\n",18-vote_age);
    }
    else {
        printf("Congratulations! You are eligible for casting your vote.\n");
    }
}
