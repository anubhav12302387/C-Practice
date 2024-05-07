/*
#include <stdio.h>

int main() {
    int num1, num2;
    printf("enter num1");
    scanf("%d", &num1);

    printf("enter num2");
    scanf("%d", &num2);

    int sum = num1 + num2;
    printf("sum is : %d", sum);
    return 0;

}
*/

// sum of two numbers
/*
#include <stdio.h>

int main(){
    int a,b;
    printf("enter a ");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);

    int sum = a+b;
    printf("sum is : %d", sum);
    return 0;
}
*/

// difference of two numbers
/*
#include <stdio.h>

int main(){
    int num1,num2;
    printf("enter num1: ");
    scanf("%d", &num1);

    printf("enter num2: ");
    scanf("%d", &num2);

    int difference = num2 - num1;
    printf("result is %d", difference);
    return 0;
}
*/

//product of two numbers
/*
#include <stdio.h>

int main(){
    int num1,num2;
    printf("enter num1 :");
    scanf("%d",&num1);

    printf("enter num2 :");
    scanf("%d",&num2);

    int product = num1 * num2;
    printf("result is : %d" , product);
    return 0;
}
*/

// write a program to callculate the area of a square by taking the input from the user:-
/*
#include <stdio.h>

int main(){
    int num1;
    printf("enter the side: ");
    scanf("%d", &num1);

    int area = num1 * num1;
    printf("area of a square is : %d",area);
    return 0;
}
*/

//write a program to callculate the area of a circle by taking the input from the user:-
/*
#include <stdio.h>

int main(){
    float radius;
    printf("enter the radius: ");
    scanf("%f",&radius);

    printf("area of a circle is: %f", 3.14*radius*radius);
    return 0;
}
*/

//calculate the perimeter of a rectangle by taking input from the user
/*
#include <stdio.h>

int main(){
    int a,b;
    printf("enter side a:");
    scanf("%d", &a);

    printf("enter side b:");
    scanf("%d", &b);

    printf("perimeter of a rectangle: %d", 2*(a+b));
    return 0;

}
*/

//take a number x from the user and output it cube x:-
/*
#include <stdio.h>

int main(){
    int x;
    printf("enter x");
    scanf("%d", &x);

    printf("cube is : %d ", x*x*x);
    return 0;
}
*/

// convert the temperature in Fahrenheit to Celsius  C = 5/9(F-32) by taking the temp from the user 
/*
#include <stdio.h>

int main(){
    float Fahrenheit,Celsius;
    printf("enter the temperature in Farenheit: ");
    scanf("%f",&Fahrenheit);

    Celsius = (Fahrenheit-32) * 5.0 / 9.0;
    printf("Temperature in Celsius: %.2f\n", Celsius);
    return 0;
}
*/
/*
#include<stdio.h>
int main () {
    int a = 1.99999;
    printf("%d \n", a);
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int a = 5;
    int b = 2;
    int c = 3;
    int sum;
    sum = a * b / b * c;
    printf("%d\n", sum);
    return 0;
}
*/
//program of two swap numbers
/*
#include <stdio.h>

int main(){
    int a,b;
    printf("enter side a:");
    scanf("%d", &a);

    printf("enter side b:");
    scanf("%d", &b);

    printf("perimeter of a rectangle: %d", 2*(a+b));
    return 0;

}
*/
/*
#include <stdio.h>
int main(){
    unsigned int x = 12;
    unsigned int y = 10;
    printf("%d", x ^ y); 
    return 0;
}
*/
/*
#include <stdio.h>
int main (){
    float x = 9;
    printf("%f",x);
    printf("@@@");
    printf("%f",x);
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int a = 5, b =6, x;
    x = ++a + ++b;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",x);
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a>b && a>c);{
        printf("A is gretaer than b and c");
    } 
    if (b>c && b>a){
        printf("B is gretaer than a and c");
    }
    if (c>b && c>a){
        printf("c is gretaer than a and b");}
        return 0;
        
}
*/

///chapteer 2


/*
#include<stdio.h>
int main(){
    printf("%d \n", !( (5>1) && (3>4)));

    return 0;
}
*/

// Write a programe to check a number is divisible by 2 or not
/*
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", & a);
    printf("%d", a%2==0);
    return 0;(
}
*/

// write a program to check a number is even or odd
/*
#include<stdio.h>
int main(){
    int a;
    // even -> 1
    // odd -. 0
    printf("Enter a number");
    scanf("%d", & a);
    printf("%d", a%2==0);
    return 0;
}
*/

//if a number is greater than 9 and less than 100.
/*
#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", & x );
    printf("%d", (x>9) && (x<10));
    return 0;
} 
*/

// write a program to print average of three numbera
 /*
 #include<stdio.h>
 int main (){
    int x,y,z;
    printf("Enter 1st number: ");
    scanf("%d", & x);
    printf("Enter 2nd number: ");
    scanf("%d", & y);
    printf("Enter 3rd number: ");
    scanf("%d", & z);
    int sum = x + y + z;
    int average = sum/3;
    printf("The result is: ");
    printf("%d", average);
    return 0;
 }
 
/*

write a program to check if the given character is digit or not 
write a program to print the smallest number.
*/

/*
#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int y = x/10;
    int z = y+1;
    printf("%d",y);
    printf(" %d",z);
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int x;
    int y;
    int z;
    int a;
    int b;
    scanf("%d ",&x);
    scanf("%d ",&y);
    scanf("%d ",&z);
    scanf("%d ",&a);
    scanf("%d ",&b);
    int sum = x+y+z+a+b;
    float per = (sum * 100)/5;
    printf("Total: %d\n",sum);
    printf("Percentage: %.2f",per);
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int age;
    scanf("%d",& age);
    (age >= 18) ? printf("Eligible") : printf("Not Eligible");
    return 0;
}
*/

//Q1. Take positive int from the user and give the output whether it iis odd or even.
/*#include<stdio.h>
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d", & x);
    if (x%2==0)
    {
        /* code printf("Number is even");
    }
    else
    {
        printf("number is odd");
    }
    return 0;

}
*/

//Q2. take a positive number input and tell whther its id divisible by 5 or not:
 /*
 #include<stdio.h>
 int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", & n);
    if (n%5==0)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
    
 }
*/
 //Q3. any leap year is input through the keyboard. write a program to determine whether the year is a leap year or not.
/*
#include<stdio.h>
int main(){
    int n;
    printf("Enter a year: ");
    scanf("%d",&n);
    if (n%4==0)
    {
        printf("It's a leap year");
    }
    else{
        printf("Its not a leap year");
    }
    return 0;
}
*/
//Q4. take a int input and print thr absolute value of that int
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n<0) // if n is negative
    {
        n = n * (-1);
    }
    printf("The absolute value of int is: %d",n );
    return 0;
    
}
*/
// Q5. calculate the loss and profit of a seller when he enterd a cp and sp of a item.

//#include<stdio.h>
//int main(){
    //int cp;
    //int sp;
    //printf(" Enter CP of a item: ");
    //scanf("%d",& cp);
   // printf(" Enter SP of a item: ");
//    scanf("%d",& sp);
//    if (sp>cp)
    //{ int profit = sp - cp;
    //printf("Profit is %d",profit);
        
    //}
    //else{
       // int loss = cp - sp;
     //   printf("Loss is %d",loss);
    //}
    //return 0;
  //  
//} 


//Q6. take the len and bredath of a rectangle , write a program to find whther the area of a rectangle is greater than its perimerter:
/*
#include<stdio.h>
int main(){
    int l;
    int b;
    printf("Enter length: ");
    scanf("%d",& l);
    printf("Enter breadth: ");
    scanf("%d",& b);
    int a = l * b;
    int p = 2*(l+b);
    if (a > p) // area is greater than perimeter
    {
       printf("Yes"); 
    }
    else{
        printf("No");
    }
    return 0;
}
*/

//multiple conditions using && and || 

//Q7



//class work
/*

#include <stdio.h>
int main(){ 
int a;
int b;
char c;
scanf("%d",&a);
scanf("%d",&b);
scanf(" %c",&c);
switch (c)
{
case '+':
printf("%d",a+b);
    break;

case '-':
printf("%d",a-b);
    break;;

case '*':
printf("%d",a*b);
    break;
default:
    printf("Invalid");
}
return 0;
}


*/

// #include <stdio.h>
// int main(){
//     int marks;
//     scanf("%d",&marks);
//     if (marks <0 || marks >100)
//     {
//         /* code */printf("invalid input");
//     }
//     else if (/* condition */ marks >= 90 && marks <= 100 )
//     {
//         /* code */printf("Grade A");
//     }
//     else if (/* condition */ marks >= 80 && marks < 90)
//     {
//         /* code */printf("Grade B");
//     }
//     else if (/* condition */ marks >= 70 && marks <80)
//     {
//         /* code */printf("Garde C");
//     }
//     else if (/* condition */ marks >= 60 && marks < 70)
//     {
//         /* code */printf("Grade: D");
//     }
//     else if ( marks >= 45 && marks < 60)
//     {
//         /* code */printf ("Grade E");
//     }
//     else{
//         printf("Grade F");
//     }
//     return 0;
    
    
    
    
    
// }




// #include <stdio.h>
// int main(){
//     int a,b,c,d;
//     scanf("%D%D%D%D",&a,&b,&c,&d);
//     int result = (a+b == 10 && c-d == 3)?(a*b*c*d):("Not Statisfied");
//     printf("%d",result);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a, b, c, d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);
    
//     int result = (a + b == 10 && c - d == 3) ? (a * b * c * d) : -1;
//     printf("%s", (result != -1) ? "%d" : "Not Satisfied", result);
    
//     return 0;
// }


//////////////////////////////////////////////////////// Loop Statements ///////////////////////////////////////////



// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i=i+1){
//         printf("%d ", i);
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int s_a,u_a;
//     int a = 100;
//     int final;
//     scanf("%d", &u_a);
//     scanf("%d", &s_a);
//     final = a + (s_a * 20) - (u_a * 10);
//     final = (final < 0) ? 0 : final;
//     printf("%d", final);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int s_a,u_a; // u_a - unsucess s_a - sucess 
//     int a = 100;
//     //int final;
//     scanf("%d", &u_a);
//     scanf("%d", &s_a);
//     int x = s_a * 2;
//     int y = u_a * 10;
//     int final = 100+x-y;
//     int t;
//    // t = (final < 50) ? printf("The player final score is %d", final) : printf("The player is disqualified");

//     final < 50 ? printf("The player's final score is %d. The player is disqualified.\n", final)
//                : printf("The player's final score is %d. The player is qualified.\n", final);
//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int a = 2;
//     printf("%5d",a);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a = 2;
//     int b = 5;
//     int c = 
//     return 0;
// }



// #include<stdio.h>
// int square(int y);
// int main(){
//     int x;
//     for ( x = 1; x <= 10; ++x)
//     {
//         /* code */printf("%d ",square(x) );
//     }
//     puts(" ");
// }
// int square(int y)
// {
//     return y * y;
// }



#include <stdio.h>

// int main() {
//     // Input
//     int firstTerm, commonDifference, numTerms;
//     scanf("%d", &firstTerm);
//     scanf("%d", &commonDifference);
//     scanf("%d", &numTerms);

//     // Calculation of sum
//     int sum = (numTerms * (2 * firstTerm + (numTerms - 1) * commonDifference)) % 2 == 0 ?
//               (numTerms * (2 * firstTerm + (numTerms - 1) * commonDifference)) / 2 :
//               (numTerms * (2 * firstTerm + (numTerms - 1) * commonDifference)) / 2;

//     // Output
//     printf("%d\n", sum);

//     return 0;
// }

// #include<stdio.h>
// void swap(int x, int y);
// int main(){
//     int a=5, b=6;
//     printf("Before Swapping\n");
//     printf("a=%d b=%d",a,b);
//     swap(a,b);
//     printf("After Swapping:");
//     printf("a=%d b=%d",a,b);
//     return 0;
// }
//  void swap(int x, int y)
//  {
//     int temp;
//     temp = x;
//     x=y;
//     y=temp;
//  }



// #include<stdio.h>
// int main(){
//     int i = 3;
//     int *p;
//     p = &i;

//     printf("%d \n" , i);
//     printf("%d \n" , &i);
//     printf("%d \n" , p);
//     printf("%d \n" ,*p);

//     printf("%d \n ", &p);

//     return 0;
// }



// #include<stdio.h>
// void cubeByReference(int *nptr);
// int main (){
//     int n = 5;
//     printf("Original value: %d", n);
//     cubeByReference( &n );
//     printf("New value: %d",n);
//     return 0;
// }

// void cubeByReference(int*nptr){
//     *nptr = *nptr * *nptr * *nptr;
// }




///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int perimeter = 2*(a+b);
//     int area = a * b;
//     if(area > perimeter){
//         printf("yes");}
//     // }else if (area == perimeter)
//     // {
//     //     /* code */printf("Equal");
//     // }
//     else{
//         printf("NO");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter a number: ");
//     scanf("%d",&a);
//     if (a > 99 && a < 1000)
//     {
//         /* code */printf("Valid");
//     }else{
//         printf("Invalid");
//     }
    
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter a number: ");
//     scanf("%d",&a);
//     if (a /3 && a/5)
//     {
//         /* code */printf("valid");
//     }else
//     {
//         printf("invalid");
//     }
    
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a;
//     int b;
//     int c;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%d",&c);
//     if (a>b && a>c)
//     {
//         /* code */printf("%d",a);
//     }
//     if (b>c && b>a)
//     {
//         /* code */printf("%d",b);
//     }
//     if (c>a && c>b)
//     {
//         /* code */printf("%d",c);
//     }
//     return 0;
    
    
    
// }



// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("CP: ");
//     scanf("%d",&a);
//     printf("ENter SP: ");
//     scanf("%d",&b);
//     if (a>b)
//     {
//         /* code */printf("loss");
//     }else if (a<b)
//     {
//         /* code */printf("Gain");
//     }else{
//         printf("Equal");
//     }
//     return 0;
    
    
    
// }

// #include<stdio.h>
// int main(){
//     for(int i = 1;i<=10;i=i+1) {
//         printf("RAJ ");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i=i+1){
//         printf("%d ",i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for(int i=10;i>=1;i=i-1){
//         printf("%d ",i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for(int i=0;i<=10;i=i+1){
//         printf("%d ",i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for(char ch='a';ch<='z';ch++)
//     printf("%c ", ch);
//     return 0;
// }


//while loop


// #include<stdio.h>
// int main(){
//     int i=1;
//     while(i<=10){
//         printf("%d",i);
//         printf("Anubhav ");
//         i++;
//     }
// }

// #include<stdio.h>
// int main(){
//     int i;
//     printf("Enter: ");
//     scanf("%d",&i);
//     int a=0;
//     while(a<=i){
//         printf("%d ",a);
//         a++;
//     }
// }


// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter number: ");
//     scanf("%d",&a);
//     for(int i = a; i>=0; i--){
//         printf("%d ",i);
//     }
// }



// do while loop
// #include<stdio.h>
// int main(){
//     int a=1;
//     do{
//         printf("%d  ",a);
//         a++;
//     }while(a<=5);
// }

// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter number: ");
//     scanf("%d",&a);
//     int sum = 0;
//     for(int i = 1;i<=a;i++){
//        sum = sum + i;
//     }
//     printf("%d ", sum);

//     for(int j=a;j>=1;j--){
//         printf("%d ",j);
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     //int a = 7;
//     for(int i = 1; i<=10 ; i++){
//       int c = n * i;
//       printf("%d \n",c);
//       printf("%d x %d = %d\n",n,i,c);
//     }
//     return 0;
// }


//break statement

// #include<stdio.h>
// int main(){
//     for(int i = 1 ; i<=5 ; i++){
//         if(i == 3){
//             break;
//         }
//         printf("%d",i);
//     }
//     printf("end");
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     do{
//         printf("Enter a number: ");
//         scanf("%d\n",&n);
//         printf("%d\n",n);

//         if(n % 2 != 0) {
//             break;
//         }


//     }while(1);
//     printf("Thank You");
//     return 0;
// }


/////////////////////////////////////////////////_______________FUNCTION_&_RECURSSION__________________/////////////////////////////////////////////

// #include<stdio.h>
// //declaration/prototype
// void printHello();

// int main(){
//     printf("Hello World\n");
//     printHello();  //function_call
//     return 0;
// }
// //function definition
// void printHello() {
//     printf("Welcome Back Anubhav !");
// }

// write 2 functions - one to print hello and second to print goodbye

// #include<stdio.h>
// void hello();
// void good();

// int main(){
//     hello();
//     good();
//     return 0;
// }

// void hello(){
//     printf("H E L L O \n");
// }

// void good(){
//     printf("G O O D B Y E");
// }



// WRITE A FUNCTION THAT PRINTS NAMASTE IF USER IS INDIAN AND BONJOUR IF THE USER IS FRENCH


// #include<stdio.h>

// void indian();
// void french();

// int main(){
//     printf("Enter the origin: ");
//     char ch;
//     scanf("%c", &ch);
//     if(ch == 'i'){
//         indian();
//     } else{
//         french();
//     }
//     return 0;
// }

// void indian(){
//     printf("Namaste");
// }

// void french(){
//     printf("Bonjour");
// }


// #include<stdio.h>

// int sum(int a, int b);

// int main(){
//     int a, b;
//     printf("Enter first number: ");
//     scanf("%d", &a);
//     printf("Enter first number: ");
//     scanf("%d", &b);
//     int s = sum(a, b);
//     printf("Sum is: %d", s);

//     return 0;
// }

// int sum(int a , int b) {
//     return a + b;
// }


// #include<stdio.h>
// void table();

// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     table(n);  // arguement / actual parameter
//     return 0;
// }

// void table(int n){    // parameter / formal parameter
//     for(int i = 1; i<=10; i++){
//         printf("%d\n", i*n);
//     }
// }



// use library function to calculate the square of a number:
// #include<math.h>
// #include<stdio.h>
// int main(){
//     int n = 5;
//     //printf("Enter number: ");
//     //scanf("%d ", &n);

//     printf("%f ", pow(n, 2));
//     return 0;
// }



//write a function to calculate the area of square , rectangle and circle:


// #include<stdio.h>
// #include<math.h>
// int rectangle(int a, int b);
// float circle(int c);
// int main(){
//     int square,a,b,c;
//     //int a,b,c;
//     printf("Enter the value for square: ");
//     scanf("%d", &square); 
//     printf("result of a square is :  %d", square * square);

//     printf("length: ");
//     scanf("%d",&a);

//     printf("Breadth: ");
//     scanf("%d", &b);

//     printf("Enter radius: ");
//     scanf("%d",&c);


//     int rec = rectangle(a,b);
//     float cir = circle(c);

//     printf("Area of a rectangle is: %d\n", rec);
//     printf("Area of a circle is: %f\n", cir);

//     return 0;
// }

// int rectangle(int a, int b){
//     //printf("The area  of rectangle is: %d", a*b);
//     return a * b;
// }

// float circle(int y){
//     //printf("The area of a circle is: %f", 3.14*y*y);
//     return y*y*3.14;
// }



//////////////////////////////////////RECURSION////////////////////////////////////////////////////////////////

// #include<stdio.h>
// void hello(int count){
//     if (count == 0)
//     {
//         /* code */return;
//     }
    
//     printf("Hello Anubhav! Welcome to AWS. \n");
//     hello(count - 1);
// }
// int main(){
//     hello(10);
//     return 0;

// }


//sum of first n natural numbers

// #include<stdio.h>

// int sum(int n);

// int main() {
//     printf("Sum is : %d", sum(5));
//     return 0;
// }

// int sum(int n){
//     if(n == 1){
//         return 1;
//     }
//     int a = sum(n-1);
//     int b = a + n;
//     return b;
// }



// factorial of N

// #include<stdio.h>

// int factorial(int n);

// int main(){
//     printf("Factorial is: %d", factorial(5));

//     return 0;
// }

// int factorial(int n){
//     if (n == 1){
//         return 1;
//     }
//     int a = factorial(n-1);
//     int b = a * n;
//     return b;
// }


//write a function to convert celsius to Farhenit

// #include<stdio.h>

// float Temp(float c);

// int main(){
//     float c;
//     printf("Enter the temp: ");
//     scanf("%f", &c);
//     Temp(c);
//     return 0;
// }

// float Temp( float c){
//     float f = (1.8*c)+32;
//     printf("value is: %f", f);
//     return f;
// }


// write a function to calculate the percentage of  a students in maths sci and snskrit


// #include<stdio.h>
// float percentage(float m, float s, float g);

// int main(){
//     float m,s,g;
//     printf("Enter the marks: ");
//     scanf("%f", &m);

//     printf("Enter the marks: ");
//     scanf("%f", &s);

//     printf("Enter the marks: ");
//     scanf("%f", &g);
//     percentage(m,s,g);
//     return 0;
// }
// float percentage(float m, float s, float g){
//     float x = 300;
//     float total = m + s + g;
//     float p = total/x;
//     float p1 = p * 100;
//     printf("percentage is: %f", p1);
//     return p1; 
// } 

/////////////////Pass by value

// #include<stdio.h>
// void increment(int num){
//     num++;
//     printf("Inside function: %d\n", num);
//     return;
// }
// int main(){
//     int value = 5;
//     increment(value);
//     printf("Outside Function: %d\n",value);

//     return 0;
// }



// ////////////////////////////////////////////////////array


// #include<stdio.h>
// int main(){
//     int arr[3][3]; //= {{1,2,3},{4,5,6},{7,8,9}};
//     //printf("Enter the value: ");

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",& arr[i][j]);
//         }
//     }

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


//question



// #include<stdio.h>
// int main(){
//     int r,c,n,m;

//     printf("Enter number of row: ");
//     scanf("%d",&r);

//     printf("Enter number of Column: ");
//     scanf("%d",&c);

//     int arr[r][c];

//     printf("Enter the elements of a matrix: ");
//     for(int i = 0; i<r; i++){
//         for(int j=0;j<c; j++){
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     printf("Result: \n");

//     for(int i = 0; i<r; i++){
//         for(int j=0;j<c; j++){
//             printf("%d ", arr[j][i]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }



//////////////WAP to store roll no and marks obtained by a 4 students in a matrix;


// #include<stdio.h>
// int main(){
//     int r,c;

//     printf("enter no.of students: ");
//     scanf("%d", &r);

//     printf("enter no.of things: ");
//     scanf("%d", &c);

//     int arr[r][c];

//     printf("Enter the value: ");


//     for(int i =0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("Result: \n");

//     for(int i =0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
    

// }


////////wap to add two matrices



// #include<stdio.h>
// int main(){
//     // first matrix
//     int r,c;
//     printf("Enter no.of row: ");
//     scanf("%d",&r);

//     printf("Enter no.of colums: ");
//     scanf("%d",&c);

//     int arr1[r][c];
//     printf("enter the value of first matrix: ");

//     for(int i = 0; i<r; i++){
//         for(int j = 0; j<c; j++){
//             scanf("%d",&arr1[i][j]);
//         }
//     }

//     int brr2[r][c];

//     printf("enter the value of second matrix: ");

//     for(int i = 0; i<r; i++){
//         for(int j = 0; j<c; j++){
//             scanf("%d",&brr2[i][j]);
//         }
//     }

//     int crr3[r][c];

//     printf("Result: ");

//     for(int i = 0; i<r; i++){
//         for(int j = 0; j<c; j++){
//            // scanf("%d",& arr1);
//            printf("%d ",crr3[i][j]= arr1[i][j] + brr2[i][j]);
//         }
//         printf("\n");
//     }


//     return 0;
// }



//sum of the elements of nxm matrix;


// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("Enter rows:");
//     scanf("%d",&r);

//     printf("Enter columns:");
//     scanf("%d",&c);

//     int arr[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<r;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }

//     for(int i=0;i<r;i++){
//         for(int j=0;j<r;j++){
//             printf("%d", arr[i][j]);
//         }
//         printf("\n");
//     }
//     int sum = 0;

//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//              sum += arr[i][j]; 
//         }
//     }

//     printf("Sum is: %d", sum);
//     return 0;
// }


// #include<stdio.h>

// #define ROWS 3
// #define COLS 3

// int main() {
//     int matrix[ROWS][COLS];
//     int i, j;
//     int max, min;

//     // Input elements into the matrix
//     printf("Enter elements into the matrix (%d x %d):\n", ROWS, COLS);
//     for (i = 0; i < ROWS; i++) {
//         for (j = 0; j < COLS; j++) {
//             printf("Enter element at position (%d, %d): ", i+1, j+1);
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     // Assume first element as maximum and minimum
//     max = min = matrix[0][0];

//     // Finding maximum and minimum elements
//     for (i = 0; i < ROWS; i++) {
//         for (j = 0; j < COLS; j++) {
//             if (matrix[i][j] > max) {
//                 max = matrix[i][j];
//             }
//             if (matrix[i][j] < min) {
//                 min = matrix[i][j];
//             }
//         }
//     }

//     // Displaying the maximum and minimum elements
//     printf("Maximum element in the matrix: %d\n", max);
//     printf("Minimum element in the matrix: %d\n", min);

//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int subject;
//     scanf("%d",&subject);

//     int arr[subject];
//     for(int i=0;i<subject;i++){
//         scanf("%d",&arr[i]);
//     }
//     float weight;

//     int arr1[subject]

//     for(int i=0;i<subject;i++){
//         scanf("%f",&arr1[i]);
//     }
// }


// #include <stdio.h>

// int main() {
//     int num_subjects;
//     scanf("%d", &num_subjects);

//     int scores[num_subjects];
//     float weights[num_subjects];


//     for (int i = 0; i < num_subjects; i++) {
//         printf("Subject %d score: ", i + 1);
//         scanf("%d", &scores[i]);
//     }

   
//     for (int i = 0; i < num_subjects; i++) {
//         printf("Subject %d weight: ", i + 1);
//         scanf("%f", &weights[i]);
//     }

//     float total_score = 0, total_weight = 0;
//     for (int i = 0; i < num_subjects; i++) {
//         total_score += scores[i] * weights[i];
//         total_weight += weights[i];
//     }

//     float weighted_average = total_score / total_weight;

//     printf("Weighted average score: %.2f\n", weighted_average);

//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a[100] = {10,20,30,40,50,60,70};
//     int n=7,i;
//     int pos; scanf("%d",&pos);
//     for(i=pos+i; i<n; i++){
//         a[i-1] = a[i];
//         n--;
//     }

//     for(i = 0; i<n; i++){
//         printf("%d ",a[i]);
//     }
//     return 0;
// }


// NUll pointer
// wild pointer
// generic pointer(void )pointer
// constant pointer
// dangling pointer



// #include<stdio.h>
// int main(){
//     int x=10;
//     char ch= 'a';
//     void *gp;
//     gp = &x;
//     printf("Gp to iv= %d", *(int*)gp);
//     gp=&ch;
//     printf("gp to ch: = %c",*(char*)gp);
//     return 0;
// }

// #include<stdlib.h>
// #include<stdio.h>
// int main(){
//     int *p, i;
//     p = (int*)malloc(5*sizeof(int));
//     *p = 10;
//     *p = 10;
//     *(p+1) = 20;
//     *(p+2) = 30;
//     *(p+3) = 40;
//     *(p+4) = 50;
//     //*(p+5) = 20;
//     for(i=0; i<5;i++){
//         printf("%d ",*(p+i));
//     }
//     free(p);

//     return 0;

// }


////////////////////////////////////////////POINTERS/////////////////////////////////


// #include<stdio.h>
// int main(){
//     int age = 22;
//     int *ptr = &age;
//     int _age = *ptr;

//     printf("%d ", _age);
//     printf("Jai Hanuman");
//     return 0;
// }

/////ADRESS printing


// #include<stdio.h>
// int main(){
//     int age = 22;
//     int *ptr = &age;

//     printf("%u\n", &age);    // printing the adreess of age
//     printf("%u\n", ptr);     // printing the address of age which stored in the ptr 
//     printf("%u\n", &ptr);    // printing the address of ptr address which it holds;
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int x;
//     int *ptr;

//     ptr = &x;
//     *ptr = 0;
//     printf(" x = %d\n", x); // 0;
//     printf(" *ptr = %d\n", *ptr); // 0

//     *ptr += 5;
//     printf(" x = %d\n", x); // 5;
//     printf(" *ptr = %d\n", *ptr); // 5
//     return 0;

// }

///////////////////////////////print the value of i from its pointer to pointer
// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     int arr[a][b];

//     for(int i=0; i<a; i++){
//         for(int j=0; j<b; j++){
//             scanf("%d",&arr[i][j]);
//         }
        
//     }

//     for(int i=0; i<a; i++){
//         for(int j=0; j<b; j++){
//             printf("%d ", arr[i][j]);
//         }
        
//     }

//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int arr[3][3]; //= {{1,2,3},{4,5,6},{7,8,9}};
//     //printf("Enter the value: ");

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",& arr[i][j]);
//         }
//     }

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

//////////////////////////////////////ARRAY PRACTICE////////////////////////////////////////

// #include<stdio.h>
// int main(){
//     int arr[5] = {1,2,34,5,6};
//     arr[4] = 100;
//     printf("%d",arr[4]);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;

//     printf("Enter the value: ");
//     scanf("%d",&n);
//     int arr[n];

//     for(int i=0;i<n;i++){
//         printf("Enter the value %d ", i+1);
//         scanf("%d",& arr[i]);
//     }

//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i] );
//     }
    
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int n;

//     printf("Enter the value: ");
//     scanf("%d ",&n);
//     int arr[n];

//     for(int i=0;i<n;i++){
//         printf("Enter the value %d ", i+1);
//         scanf("%d ",& arr[i]);
//     }

//     for(int i=n; i<0; i++){
//         printf("%d ",arr[i] );
//     }
    
//     return 0;
// }



 // #include<stdio.h>
// int main(){
//     int age = 22;
//     int *ptr = &age;
//     printf("%d ", ptr);
//     ptr++;
//     printf("%d ", ptr);
//     return 0;
// }

// #include<stdio.h>

// void pN(int arr[], int n);

// int main(){
//     int arr[] ={1,2,3,4,5};
//     pN(arr, 5);

//     return 0;
// }

// void pN(int arr[], int n){
//     for(int i=0; i<n; i++){
//         printf("%d \t", arr[i]);
//     }
//     printf("\n");
// }


// #include <stdio.h>

// int count_odd(int arr[], int n);

// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n]; // Declare array with a size n

//     printf("Enter %d numbers:\n", n);
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int odd_count = count_odd(arr, n);
//     printf("Number of odd elements: %d\n", odd_count);

//     return 0;
// }

// int count_odd(int arr[], int n) {
//     int count = 0;

//     for(int i = 0; i < n; i++) {
//   or      if(arr[i] % 2 != 0) {
//             count++;
//         }
//     }

//     return count; // Return the count of odd numbers
// }


// #include<stdio.h>
// int main(){
//     int n;
//     int arr[n];

//     for(int i = 0; i<n; i++){
//         printf("Enter %d elements: \n", i);
//         scanf("%d ", &arr[i]);
//     }

//     for(int i = n; i>0 ; i--){
//         printf("%d", arr[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){

//     int n;
//     printf("Enter the value: ");
//     scanf("%d",&n);

//     int fibo[n];
//      fibo[0] = 0;
//      fibo[1] = 1;

//     for(int i = 2; i<n; i++){
//          fibo[i] = fibo[i-1] + fibo[i-2];
//         printf("%d ", fibo[i]);
//     }
//     return 0;
// }


// #include <stdio.h>

// // Function to calculate factorial
// int factorial(int n) {
//     if (n == 0)
//         return 1;
//     else
//         return n * factorial(n - 1);
// }

// int main() {
//     int number;
//     printf("Enter a non-negative integer: ");
//     scanf("%d", &number);

//     if (number < 0)
//         printf("Factorial of a negative number is undefined.\n");
//     else
//         printf("Factorial of %d is %d\n", number, factorial(number));

//     return 0;
// }




////////////////////////////////////////////STRINGS//////////////////////////////////////////////
// #include<stdio.h>
// int main(){
//     char name[]={'A','N','U','B','H','A','V','\0'}; //using /0 null character
//     char _name0[]="ANUBHAV"; // compiler automatically use it null character

//     return 0;
// }


//create a string fn and ln and print all the characters using a loop

// #include<stdio.h>
// int main(){
//      char fn[]="ANUBHAV";
//      char ln[]="JAISWAL";


//     for(int i=0;i<7;i++){
//         printf("%c", fn[i]);
//     }
//     //printf("\n");
//     printf(" ");
//     for(int i=0;i<7;i++){
//         printf("%c", ln[i]);
//     }
//     return 0;
// }

//same question using function

// #include<stdio.h>
// void print_string(char arr[]){
//     for(int i=0; arr[i] != '\0' ;i++){
//         printf("%c",arr[i]);
//     }
//     printf("\n");

// }
// int main(){
//     char fn[]="ANUBHAV";
//     char ln[]="JAISWAL";
//     print_string(fn);
//     print_string(ln);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     char arr_f[50];
//     scanf("%s",arr_f);
//     printf("Name is: %s",arr_f);
//     return 0;
// }

//SCANF CANNOT INPUT MULTI WORD INPUT INPUT WITH STRINGS
//SO USE GETS AND PUTS

// #include<stdio.h>
// int main(){
//     char arr[100];
//     fgets(arr,100,stdin);
//     puts(arr);
//     return 0;
// }

// string using pointers

// char *str -> store string a memory and assigned address is stored in the char pointer 'str'
// char *str can be reinitialized
// char []str cannot be reinitialized



// #include<stdio.h>
// int main(){
//     char *str = "ANUBHAV JAISWAL";
//     puts(str);
//     str = "ASHIMA MAHAJAN";
//     puts(str);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char arr[]="ANUBHAV JAISWAL";
//     puts(arr);
//     //arr = "an";
//     //puts(arr);
//     return 0;
// }


// make a program that inputs name and prints its length


// #include<stdio.h>
// int main(){
//     char arr[100]; 
//     int count = 0;
//     printf("Enter name:");
//     fgets(arr,100,stdin);

//     for(int i=0; arr[i] != '\0';i++){
//         count++;

//     }
//     printf("Number of characters in a name is: %d",count-1);

//     return 0;
// }


//Standard library function

//1. strlen(str) -> count the number of char in str excluding \0

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char arr[100];
//     fgets(arr,100,stdin);
//     int length = strlen(arr);
//     printf("Length is: %d",length-1);
//     return 0;
// }

//2. strcpy(newstr, oldstr) -> copies values of oldstring to newstring

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char oldstr[100] = "ANUBAHV";
//     char newstr[100] = "JAISWAL";

//     strcpy(newstr, oldstr);
//     puts(newstr);

//     return 0;
// }


//3. strcat(str1, str2) -> concentates str1 + str2
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char arr1[100] = "Anubhav ";
//     char arr2[100] = "Jaiswal";

//     strcat(arr1, arr2);
//     puts(arr1);
//     return 0;
// }

//4. strcmp(str1, str2) -> compare str1 with str2 
// str 1 > str 2 give value in +ve
// str 1 < str 2 give value in -ve
// str 1 = str 2 give output  0


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char arr1[] = "Ram";
//     char arr2[] = "JAis";

    
//     printf("%d",strcmp(arr1 ,arr2));
//     return 0;
// }


// take string input from the user using %c

// #include<stdio.h>
// int main(){
//     char arr[100];
//     for(int i=0;arr[i] != 0; i++){
//         scanf("%c",arr[i]);
//     }

//     for(int i = 0; arr[i] != 0; i++){
//         printf("%c",arr[i]);
//     }
//     return 0;
// }


// FIND THE SALTED FORM OF A PASSWORD ENTERED BY THE USER IF THE SALT IS '123' AND ADDDED AT THE END


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char arr[100];
//     printf("Enter pass:");
//     // fgets(arr,100,stdin);
//     scanf("%s",arr);
//     char arr2[100] = "1133";

//     strcat(arr, arr2);
//     puts(arr);
//     return 0;
// }


//write a function named slice and let the user input to the string and print the slice string from index to n to m;

// #include<stdio.h>
// #include<string.h>

// void slice(arr[]){

// }
// int main(){
//     char pass[100];
//     scanf("%s",pass);
    
//     return 0;
// }



///////////////////////////////////Structure

// #include<stdio.h>
// #include<string.h>
// //user defined 
// struct student
// {
//     int roll;
//     float cgpa;
//     char name[100];
// };


// int main(){
//     struct student s1;
//     s1.roll = 45;
//     s1.cgpa = 9.2;
//     strcpy(s1.name, "Anubhav");
//     printf("Student name: %s\n", s1.name);
//     printf("Student roll no: %d\n", s1.roll);
//     printf("Student CGPA: %.2f\n", s1.cgpa);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     // int n;
//     //scanf("%d", &n);
//     // int arr[n];
//     // for(int i=0;i<n;i++){
//     // scanf("%d", arr[i]);
//     // }

//     int arr[10] = {90,36,35,34,32,31,56,85,85,90};

//     for(int i=0;i<10;i++){
//         if(arr[i]<35){
//             printf("Roll no: %d\n",i);
//         }
//     }
//     return 0;
// }




////sum of elements in a array

// #include<stdio.h>
// int main(){
//     int n;
//     int sum = 0;
//     scanf("%d",&n);

//     int arr[n];

//     for(int i=0; i<n; i++){
//         printf("Enter %d element:", i);
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0; i<n; i++){
//         sum = sum + arr[i];
//     }

//     printf("%d", sum);
//     return 0;
// }


//////product of all elements

// #include<stdio.h>
// int main(){
//     int n;
//     int sum = 1;
//     scanf("%d",&n);

//     int arr[n];

//     for(int i=0; i<n; i++){
//         printf("Enter %d element:", i);
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0; i<n; i++){
//         sum = sum * arr[i];
//     }

//     printf("product is %d", sum);
//     return 0;
// }




/// find the maxium values of all the element in the array


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter:");
//     scanf("%d",&n);

//     int arr[n];
//     for(int i=0;i<n;i++){
//         printf("enter %d element:",i);
//         scanf("%d",&arr[i]);
//     }

//     int max = arr[0];
//     for(int i=0;i<n;i++){
//         if(max<arr[i]){
//             max = arr[i];
//         }
//     }

//     return 0;
// }




//////////find the minimum values




// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter:");
//     scanf("%d",&n);

//     int arr[n];
//     for(int i=0;i<n;i++){
//         printf("enter %d element:",i);
//         scanf("%d",&arr[i]);
//     }

//     int max = arr[0];

//     for(int i=0; i<n; i++){
//         if(max>arr[i]){
//             max = arr[i];
//         }
//     }

//     printf("min: %d",max);
//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int firstHighest = arr[0];
//     int secondHighest = arr[0];

//     // Find the highest element
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > firstHighest) {
//             firstHighest = arr[i];
//         }
//     }

//     // Replace the highest element with 0
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == firstHighest) {
//             arr[i] = 0;
//             break; // Assuming unique highest element
//         }
//     }

//     // Find the second highest element
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > secondHighest) {
//             secondHighest = arr[i];
//         }
//     }

//     printf("The second highest element is: %d\n", secondHighest);

//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter:");
//     scanf("%d",&n);

//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     int fh = arr[0];
//     int sh = arr[0];

//     for(int i=0;i<n;i++){
//         if(fh>arr[i]){
//             fh = arr[i];
//         }
//     }

//     for(int i=0;i<n;i++){
//         if(fh = arr[i]){
//             arr[i] = 0;
//         }
//     }

//     for(int i=0;i<n;i++){
//         if(sh>arr[i]){
//             sh = arr[i];
//         }
//     }

//     printf("second: %d",sh);
//     return 0;
// }






///////take the arrray and even index multiply by 10 and odd by 2


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter:");
//     scanf("%d",&n);

//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0;i<n;i++){
//         if(i%2==0){
//             arr[i] = arr[i] * 2;
//         }
//         else{
//             arr[i]=arr[i]*10;
//         }
//     }

//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }


// }








// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter:");
//     scanf("%d",&n);

//     int arr[n];
//     int sum_odd;
//     int sum_even;
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0;i<n;i++){
//         if(i%2==0){
//             sum_even = sum_even + arr[i];
//         }
//         else{
//             sum_odd = sum_odd + arr[i];
//         }
//     }

//     if(sum_even>sum_odd){
//         printf("even win");
//     }else{
//         printf("odd win");
//     }

// }




//count the no.of triplets whose sum is equal to x


// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     int arr[a];
//     for(int i=0;i<a;i++){
//         scanf("%d",arr[i]);
//     }
//     int x;
//     printf("Enter the value of x:");
//     scanf("%d",&x);

//     for(int i=0;i<a;i++){
//         for(int j=i+1;j<a;j++){
//             for(int k=j+1;k<a;k++){
//                 if(arr[i] + arr[j] + arr[k] == x){
//                     printf("Triplet");
//                     printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
//                 }
//             }
//         }
//     }


//     return 0;
// }

//////////////////////////////////////////////////////////////INSERTION IN ARRAY/////////////////////////////////////////////////////

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of elements:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         printf("enter %d element:",i);
//         scanf("%d",&arr[i]);
//     }
//     int position;
//     printf("Enter the position:");
//     scanf("%d",&position);

//     int value;
//     printf("ENter the value:");
//     scanf("%d",&value);

//     for(int i=n-1;i>=position-1;i--){
//         arr[i+1] = arr[i];
//     }

//     arr[position-1] = value;

//     for(int i = 0;i<n+1;i++){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }

//////////////////////////////////////////////////////deletion in c//////////////////////////////
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of elements:");
//     scanf("%d",&n);

//     int arr[n];
//     for(int i=0;i<n;i++){
//         printf("enter %d element:",i);
//         scanf("%d",&arr[i]);
//     }

//     int position;
//     printf("Enter the position:");
//     scanf("%d",&position);

//     if(position>=n){
//         printf("Deletion is possible");
//     }
//     else{
//         for(int i=position;i<n;i++){
//             arr[i+1]=arr[i];
//         }
//     }
//     printf("Resultant array:");

//     for(int i=0;i<n-1;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of elements:");
//     scanf("%d",&n);

//     int arr[n];
//     for(int i=0;i<n;i++){
//         printf("Enter %d element:",i);
//         scanf("%d",&arr[i]);
//     }

//     int position;
//     printf("Enter the position:");
//     scanf("%d",&position);

//     if(position >= n){
//         printf("Deletion is not possible because position is out of bounds\n");
//     }
//     else{
//         for(int i=position;i<n;i++){
//             arr[i-1]=arr[i];
//         }
//         n--; // Decrease the size of the array after deletion
//     }

//     printf("Resultant array:");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }



///1prime numbers
///2factorial 
///3perfect square
///4fibonacci
///5armstrong
///6string
///7structures
///8functions
///9revise


// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
//     }

//     int sum = 0; 
//     for(int i=0;i<n;i++){
//         sum += arr[i];
//     }

//     printf("Total sum: %d \n",sum);


//     int fac = 1;

//     for(int i=1;i<=sum;i++){
//         fac *= i;
//     }

//     printf("factoraial is: %d ",fac);
//     return 0;
// }



// #include<stdio.h>

// int isprime(int n){
//     for(int i=2;i*i<n;i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int a,b;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     for(int i=a;i<=b;i++){
//         if(isprime(i)){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }


/////////////fibo

// #include<stdio.h>
// int main(){
//     int c;
//     int term;
//     scanf("%d",&term);
//     int a=0;
//     int b=1;
//     for(int i=1;i<=term;i++){
//         printf("%d ",a);
//         c = a+b;
//         a=b;
//         b=c;

//     }
//     return 0;
// }


/////////////arm


#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int c=num;
    int arm=0;
    int r;
    while(num>0){
        r=num%10;
        arm = (r*r*r)+arm;
        num=num/10;
    }
    if(c=arm){
        printf("Armstrong");
    }
    return 0;
}