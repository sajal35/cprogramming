int add(){
    int a,b,c;
    printf("Enter value of a and b: ");
    scanf("%d %d",&a,&b);
    c = a + b;
    //printf("Result is %d ",c);
    return c;
}

void sub(int a,int b){
    int c;
    c = a - b;
    printf("Result is %d ",c);
}

int mul(){
    int a,b,c;
    printf("Enter value of a and b: ");
    scanf("%d %d",&a,&b);
    c = a * b;
    //printf("Result is %d ",c);
    return c;
}

float div(int a,int b){
    float c;
    c = a / b;
    //printf("Result is %d ",c);
    return c;
}


