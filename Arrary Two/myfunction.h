float balance = 0.0;
float amount;
void menu(){
        printf("1.Deposit\n");
        printf("2.Withdraw\n");
        printf("3.Check Balance\n");
        printf("4.Exit");
}

void deposit(){
    printf("How much do you want to deposit: ");
    scanf("%f",&amount);
    balance = balance + amount;
    printf("\nYour New Balance is %.2f\n",balance);

}

void withdraw(){
    printf("How much do you want to withdraw: ");
    scanf("%f",&amount);
    balance = balance - amount;
    printf("\nYour New Balance is %.2f\n",balance);

}

void checkBalance(){
        printf("\nYour New Balance is %.2f\n",balance);
}
