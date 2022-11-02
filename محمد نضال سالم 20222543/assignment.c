#include<stdio.h>


//1- Write a C program that reads two integers from the user then displays 
//their sum, product, difference, quotient and remainder.

int main()
{
  int a, b, sum, product, difference, quotient, remainder;

  printf( "Please enter number 1:" );
  scanf( "%d", &a );
  
  printf("\nPlease enter number 2:");
  scanf( "%d", &b );

  sum = a + b;
  printf( "\nThe sum of %d and %d is %d.\n", a, b, sum );

  product = a * b;
  printf( "\nThe product of is %d.\n", product );

  difference = a - b;
  printf( "\nThe difference of %d and %d is %d.\n", a, b, difference );

  quotient = a / b;
  printf( "\nThe quotient is %d.\n", quotient );

  remainder = a % b;
  printf( "\nThe remainder of %d and %d is %d.\n", a, b, remainder);

  return 0;
}


//2-Write a C program that displays the numbers 1to 4 on the same line then 5 to

  
 int main(){
	int a=0;
	while (a<=4) 
	{
		printf("%d",a);
		a++;
	}
	
	printf("\n"); 
		
	do
	{
			printf("%d",a++);
	}
	while (a<=10);
}



//3-Write a C program that reads two integers from the user then displays the  
//10 in a newline.
//larger number followed by the words “is larger.” If the numbers are equal,  
//display the message “These numbers are equal.” Use only the single- 
//selection form of the if statement.

int main(){
	int a=0;
	int b=0;
	
	printf("enter number a:");
	scanf("%d",&a);
	
	printf("enter number b:");
	scanf("%d",&b);
	
	if (a==b){
		printf("\nThese numbers are equal");
	}
	
	if (a>b){
		printf("\n %d is larger");
	}
} 



//4- Write a C program that inputs three different integers from the keyboard,  
//then displays the sum, the average, the product, the smallest and the largest  
//of these numbers. Use only the single-selection form of the if statement

 
int main() {
  int x, y, z, sum, average, product;

  printf( "Input number 1: ");
  scanf( "%d", &x);
  
  printf("Input number 2:");
  scanf("%d", &y);
  
  printf("Input number 3:");
  scanf("%d", &z);

  sum = x + y + z;
  printf("\nSum is %d\n", sum );

  average = (x + y + z ) / 3;
  printf("Average is %d\n", average );

  product = x * y * z;
  printf("Product is %d\n", product );

  if ( x < y ) {
    if ( x < z ) {
      printf("Smallest is %d\n", x );
    }
  }

  if ( y < x ) {
    if ( y < z ) {
      printf("Smallest is %d\n", y );
    }
  }

  if ( z < x ) {
    if ( z < y ) {
      printf("Smallest is %d\n", z );
    }
  }

  if ( x > y ) {
    if ( x > z ) {
      printf("Largest is %d\n", x );
    }
  }

  if ( y > x ) {
    if ( y > z ) {
      printf("Largest is %d\n", y );
    }
  }

  if ( z > x ) {
    if ( z > y ) {
      printf("Largest is %d\n", z );
    }
  }
  
  return 0;
}



//5- For a circle of radius 2, display the diameter, circumference and area. Use  
//the value 3.14 for p. Use the following formulas (r is the radius): diameter =  
//2r, circumference = 2pr and area = pr2.  
//Perform each of these calculations inside the printf statement(s) and use the  
//conversion specification %f.

#define PI 3.14
float main(){
	float r=2;
	
	printf(" radius= %0.1f \n",r);
	
	printf("diameter= %0.1f \n",r*2);
	
	printf("circumference = %0.1f \n",2*PI*r);
	
	printf("area = %0.1f \n",PI*r*r);
	
}
