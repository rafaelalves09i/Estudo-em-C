#include <stdio.h>
#include <stdlib.h>

typedef struct number{
    int n;
    int d;
} Number;

typedef Number* (*FuncOpe) (Number* left, Number* right); 

typedef struct operation{
    char code;
    FuncOpe func;    
} Operation;

typedef struct expression{
    Number* left;   
    Number* right;
    Operation* operation; 
} Expression;

Number* Operation_Sum(Number* left, Number* right);
Number* Operation_Sub(Number* left, Number* right);
Number* Operation_Div(Number* left, Number* right);
Number* Operation_Mult(Number* left, Number* right);

void Number_Print(Number* number);
Number* Number_Simplify(Number* number);


Expression* Expression_Read();
Number* Number_Read();
Operation* Operation_Read();
Number* Expression_Solve(Expression* expression);

int main(){
    int tests;
    scanf("%d", &tests);
    for(int i = 0; i < tests; i++){
        Expression* expression = Expression_Read();
        Number* number = Expression_Solve(expression);
        Number* numberSimplified = Number_Simplify(number);
        Number_Print(number);
        printf(" = ");
        Number_Print(numberSimplified);
        printf("\n");
    }
    return 0;
}


void Number_Print(Number* number){
    if(number->d < 0){
        number->n = -number->n;
        number->d = -number->d;
    }
    printf("%d/%d", number->n, number->d); 
}

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

Number* Number_Simplify(Number* number){
    int p = gcd(number->n, number->d);
    Number* simplified = (Number*) malloc(sizeof(Number));
    simplified->n = number->n / p;
    simplified->d = number->d / p;
    return simplified;
}

Expression* Expression_Read(){
    Expression* expression = (Expression*) malloc(sizeof(Expression));
    expression->left = Number_Read();
    Operation* operation = Operation_Read();
    expression->operation = operation;
    expression->right = Number_Read();
    return expression;
}

Number* Number_Read(){
    Number* number = (Number*) malloc(sizeof(Number));
    scanf("%d / %d", &number->n, &number->d);
    return number;
}

Operation* Operation_Read(){
    Operation* operation = (Operation*) malloc(sizeof(Operation));
    char code;
    scanf(" %c ", &code);
    operation->code = code;
    if(code == '+'){
        operation->func = Operation_Sum;
    }else if(code == '-'){
        operation->func = Operation_Sub;
    }else if(code == '*'){
        operation->func = Operation_Mult;
    }else if(code == '/'){
        operation->func = Operation_Div;
    }else{
        //ERROR!!
    }   
    return operation;
}

Number* Operation_Sum(Number* left, Number* right){
    Number* number = (Number*) malloc(sizeof(Number));
    number->n = left->n * right->d + right->n * left->d;
    number->d = left->d * right->d;
    return number;
}

Number* Operation_Sub(Number* left, Number* right){
    Number* number = (Number*) malloc(sizeof(Number));
    number->n = left->n * right->d - right->n * left->d;
    number->d = left->d * right->d;
    return number;
}

Number* Operation_Div(Number* left, Number* right){
    Number* number = (Number*) malloc(sizeof(Number));
    number->n = left->n * right->d;
    number->d = left->d * right->n;
    return number;
}

Number* Operation_Mult(Number* left, Number* right){
    Number* number = (Number*) malloc(sizeof(Number));
    number->n = left->n * right->n;
    number->d = left->d * right->d;
    return number;
}

Number* Expression_Solve(Expression* expression){
    Number* number = expression->operation->func(expression->left, expression->right);
    return number;
}
