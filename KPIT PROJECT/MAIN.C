#include<stdio.h>
#include<conio.h>
#include<process.h>
int i,j,f,a[100];
char s[100],z[10];
void vishal();
void mock()
{
j=0;
clrscr();
printf("\n\n\n\t WELCOME TO CODE RANK MOCK TEST ");
printf("\n\t********************************");
printf("\n\n\t ENTER YOUR NAME = ");
scanf("%s",&s);
clrscr();
printf("\n\t\t TEST STARTS \n");
printf("\n\n\t 1.Which one is not a keyword?");
printf("\n\t a.break");
printf("\n\t b.loop");
printf("\n\t c.goto");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
if(strcmp(z,"a")==0||strcmp(z,"A")==0)
j++;
clrscr();
printf("\n\n\t 2.Which one is a Logical operator?");
printf("\n\t a. +");
printf("\n\t b. >");
printf("\n\t c. &&");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
if(strcmp(z,"c")==0||strcmp(z,"C")==0&&!isdigit(z))
j++;
clrscr();
printf("\n\n\t 3.Can C++ compiler Support C code to run?");
printf("\n\t a. yes");
printf("\n\t b. no");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
if(strcmp(z,"a")==0||strcmp(z,"A")==0)
j++;
clrscr();
printf("\n\n\t 4.Which one is a Entry Control Loop?");
printf("\n\t a. do-while");
printf("\n\t b. for");
printf("\n\t c. while");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
if(strcmp(z,"c")==0||strcmp(z,"C")==0)
j++;
clrscr();
printf("\n\n\t 5.Which one is a unconditional Statement?");
printf("\n\t a. break");
printf("\n\t b. if");
printf("\n\t c. switch");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
if(strcmp(z,"a")==0||strcmp(z,"A")==0)
j++;
clrscr();
printf("\n\n\t 6.Why goto not used for practical purpose?");
printf("\n\t a. very fast");
printf("\n\t b. can lead to infinite loop");
printf("\n\t c. changes the cursor loctaion");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
if(strcmp(z,"B")==0||strcmp(z,"b")==0)
j++;
clrscr();
printf("\n\n\t 7.Can a Array be 3-Dimensional?");
printf("\n\t a. True");
printf("\n\t b. False");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
if(strcmp(z,"a")==0||strcmp(z,"A")==0)
j++;
clrscr();
printf("\n\n\t 8.Can a Function Call itself ?");
printf("\n\t a. Yes");
printf("\n\t b. No");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
if(strcmp(z,"a")==0||strcmp(z,"A")==0)
j++;
clrscr();
printf("\n\n\t 9.Which is correct operator to get unit digit?");
printf("\n\t a. +");
printf("\n\t b. >");
printf("\n\t c. %");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
if(strcmp(z,"c")==0||strcmp(z,"C")==0)
j++;
clrscr();
printf("\n\n\t 10.Can a program run without main function ?");
printf("\n\t a. Yes");
printf("\n\t b. No");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
if(strcmp(z,"a")==0||strcmp(z,"A")==0)
j++;
clrscr();
printf("\n\n\n\t\t\t ****CONGRAGULATION*** ");
printf("\n\n\n\n\t\t\t %s YOUR SCORE IS %d ",s,j*10);
getch();
getch();
vishal();
}
void welcome()
{
clrscr();
printf("\n");
printf("     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
printf("        *****   ******  *****    *****    *****      *     *****   *  *   \n");
printf("       *        *    *  *    *  *         *    *   *   *  *        * *    \n");
printf("       *        *    *  *    *  *****     *****    *****  *        **     \n");
printf("       *        *    *  *    *  *         *  *     *   *  *        * *    \n");
printf("        *****   ******  *****    *****    *    *   *   *   *****   *  *   \n");
printf("     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
printf("\n\n\n\n\t\t\t     KPIT MINI PROJECT ");
printf("\n\n\n\t\t          R.M.D ENGINEERING COLLEGE");
printf("\n\n\n\t\t\t\t\t\t    PROJECT DONE BY: \n");
printf("\n\t\t\t\t\t                  R.VISHAL PERIYASAMY ");
printf("\n\t\t\t\t\t                  ECE DEPARTMENT");
printf("\n\t\t\t\t\t                  111516106169");
getch();
}
void basic(char *s1)
{
    FILE *fptr;
	char ch;

    fptr = fopen(s1, "r");
    if (fptr == NULL)
    {
	printf("Cannot open file \n");
	exit(0);
    }
    ch = fgetc(fptr);
    while (ch != EOF)
    {
	printf ("%c", ch);
	ch = fgetc(fptr);
    }
    fclose(fptr);
getch();
}
void program()
{
clrscr();
printf("\n\n\t\t\t\t SAMPLE PROGRAMS");
printf("\n\t\t\t\t ************** ");
printf("\n\n\t 1. LEAP YEAR ");
printf("\n\t 2. PRIME NUMBER ");
printf("\n\t 3. REVERSE A NUMBER");
printf("\n\t 4. PATTERN ");
printf("\n\t 5. EXIT");
printf("\n\n\n\t ENTER THE CHOICE = ");
scanf("%d",&i);
switch(i)
{
case 1:
clrscr();
basic("leap.txt");
getch();
clrscr();
printf("\n\tEnter a year: ");
scanf("%d",&i);

    if(i%4 == 0)
    {
        if( i%100 == 0)
        {
            if ( i%400 == 0)
		printf("\n\t%d is a leap year.", i);
	    else
		printf("\n\t%d is not a leap year.", i);
	}
	else
	    printf("\n\t%d is a leap year.", i );
    }
    else
	printf("\n\t%d is not a leap year.", i);
printf("\n\n\t TAP TO RETURN MAIN MENU ");
getch();
program();
break;
case 2:
clrscr();
basic("prime.txt");
getch();
clrscr();
printf("Enter a positive integer: ");
    scanf("%d",&i);
    f=0;
    for(j=2; j<=i/2; ++j)
    {
        if(i%j==0)
        {
            f=1;
            break;
        }
    }

    if (f==0&&i!=1)
	printf("%d is a prime number.",i);
    else
	printf("%d is not a prime number.",i);
printf("\n\n\t TAP TO RETURN MAIN MENU ");
getch();
program();
break;
case 3:
clrscr();
basic("reverse.txt");
getch();
clrscr();
printf("\n\n\tEnter an integer: ");
   scanf("%d", &i);
   f=0;
    while(i != 0)
    {
        j = i%10;
        f = f*10 +j;
        i /= 10;
    }

    printf("\n\n\tReversed Number = %d",f);
printf("\n\n\t TAP TO RETURN MAIN MENU ");
getch();
program();
break;
case 4:
clrscr();
basic("pattern.txt");
getch();
clrscr();
printf("\n\nEnter number of rows: ");
    scanf("%d",&f);
    printf("\n\n");

    for(i=1; i<=f; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
printf("\n\n\t TAP TO RETURN MAIN MENU ");
getch();
program();
break;   
case 5:
vishal();
break;
default:
program();
break;
}
}
void loop()
{ 
clrscr();
printf("\n\n\t\t\t\t LOOPING STATEMENTS");
printf("\n\t\t\t\t ************** ");
printf("\n\n\t 1. FOR LOOP ");
printf("\n\t 2. WHILE LOOP ");
printf("\n\t 3. DO WHILE LOOP");
printf("\n\t 4. EXIT");
printf("\n\n\n\t ENTER THE CHOICE = ");
scanf("%d",&i);
switch(i)
{
case 1:
clrscr();
printf("\n\t\t THE BASIC SYNTAX IS \n");
basic("for.txt");
getch();
clrscr();
printf("\n\n\t THE SAMPLE PROGRAM IS \n\t");
basic("for1.txt");
printf("\n ENTER A SMALL VALUE =");
scanf("%d",&i);
printf("\n");
for (j=1; j<=i; j++)
{
  printf("%d ",j);
}
printf("\n\n\t TAP TO RETURN MAIN MENU ");
getch();
loop();
break;
case 2:
clrscr();
printf("\n\t\t THE BASIC SYNTAX IS \n");
basic("while.txt");
getch();
clrscr();
printf("\n\n\t THE SAMPLE PROGRAM IS \n\t");
basic("while1.txt");
j=1;
printf("ENTER A SMALL NUMBER =");
scanf("%d",&i);
printf("\n");
while (j<= i)
{
 printf("%d ",j);
 j++;
}
printf("\n\n\t TAP TO RETURN MAIN MENU ");
getch();
loop();
break;
case 3:
clrscr();
printf("\n\t\t THE BASIC SYNTAX IS \n");
basic("dowhile.txt");
getch();
clrscr();
printf("\n\n\t THE SAMPLE PROGRAM IS \n\t");
basic("dowhile1.txt");
j=1;
printf("\n ENTER A SMALL NUMBER =");
scanf("%d",&i);
printf("\n");
do
{
  printf("%d ", j);
  j++;
}while (j<=i);
printf("\n\n\t TAP TO RETURN MAIN MENU ");
getch();
loop();
break;
case 4:
vishal();
break;
default:
loop();
break;
}
}
void array()
{
clrscr();
printf("\n\t");
basic("array.txt");
getch();
clrscr();
printf("\n\n\t Enter the size of array =");
scanf("%d",&i);
for(j=0;j<i;j++)
{
printf("\n Enter the array elements =");
scanf("%d",&a[j]);
}
printf("\n\n\t THE ARRAY ELEMENTS ARE = ");
for(j=0;j<i;j++)
printf("%d ",a[j]);
getch();
vishal();
}
void intro()
{
clrscr();
printf("\n\n\t\t\t\t BASIC INTRODUCTION");
printf("\n\t\t\t\t******************** ");
printf("\n\n\t 1. INTRODUCTION ");
printf("\n\t 2. HELLO WORLD ");
printf("\n\t 3. EXIT ");
printf("\n\n\n\t ENTER THE CHOICE = ");
scanf("%d",&i);
switch(i)
{
case 1:
clrscr();
basic("basic.txt");
getch();
clrscr();
basic("key.txt");
getch();
clrscr();
basic("key1.txt");
printf("\n\n\t TAP TO RETURN MAIN MENU ");
getch();
intro();
break;
case 2:
clrscr();
printf("\n\n\t THE PROGRAM IS : \n\n");
basic("wel.txt");
printf("\n\n\t\t ENTER YOUR NAME = ");
scanf("%s",&s);
printf("\n\n\t\t HELLO %s WELCOME TO CODE RACK ",s);
printf("\n\n\t TAP TO CONTINUE ");
getch();
intro();
break;
case 3:
vishal();
break;
default:
intro();
break;
}
}
void statement()
{
clrscr();
printf("\n\n\t\t\t\t STATEMENT INTRODUCTION ");
printf("\n\t\t\t\t ************** ");
printf("\n\n\t 1. IF ELSE ");
printf("\n\t 2. SWITCH CASE ");
printf("\n\t 3. UNCONDITIONAL  STATEMENT ");
printf("\n\t 4. EXIT ");
printf("\n\n\n\t ENTER THE CHOICE = ");
scanf("%d",&i);
switch(i)
{
case 1:
clrscr();
printf("\n\t\t\t IF ELSE SYNTAX \n\n");
basic("if.txt");
getch();
clrscr();
printf("\n\n\t\t\t PROGRAM \n\n");
basic("ifprg.txt");
printf("\n\n\t ENTER A NUMBER = ");
scanf("%d",&j);
if(j>=0)
printf("\n\n\t ENTERED NUMBER IS POSITIVE");
else
printf("\n\t ENTERED NUMBER IS NEGATIVE ");
printf("\n\n ENTER TO BACK TO MAIN MENU ");
getch();
statement();
break;
case 2:
clrscr();
printf("\n\t\t\t SWITCH SYNTAX \n\n");
basic("switch.txt");
getch();
clrscr();
printf("\n\n");
basic("switch1.txt");
getch();
printf("\n\n\t ENTER A NUMBER = ");
scanf("%d",&i);
printf("\n\n\t\t\t");
switch (i)
{
case 1:
printf("Case1 ");
break;
case 2:
printf("Case2 ");
break;
case 3:
printf("Case3 ");
break;
case 4:
printf("Case4 ");
break;
default:
printf("Default ");
break;
}
printf("\n\n ENTER TO BACK TO MAIN MENU ");
getch();
statement();
break;
case 3:
clrscr();
printf("\n\t UNCONDITIONAL STATEMENT \n\n");
basic("break.txt");
getch();
clrscr();
basic("continue.txt");
getch();
clrscr();
basic("goto.txt");
getch();
statement();
break;
case 4:
vishal();
break;
default:
statement();
break;
}
}
int add(int a,int b)
{
return(a+b);
}
void fun()
{
clrscr();
printf("\n\t");
basic("function.txt");
getch();
clrscr();
printf("\n\t\t PROGRAM EXECUTION ");
printf("\n\n\t ENTER FIRST NUMBERS =");
scanf("%d",&i);
printf("\n\t ENTER SECOND NUMBER =");
scanf("%d",&j);
printf("\n\n\t The sum of %d and %d is %d",i,j,add(i,j));
getch();
vishal();
}
void vishal()
{
clrscr();
printf("\n\n\t\t\t\t MAIN MENU ");
printf("\n\t\t\t\t ********* ");
printf("\n\n\t 1. BASICS \n");
printf("\n\t 2. STATEMENTS \n");
printf("\n\t 3. LOOPS \n");
printf("\n\t 4. ARRAY \n");
printf("\n\t 5. FUNCTION \n");
printf("\n\t 6. SAMPLE PROGRAMS \n");
printf("\n\t 7. MOCK TEST \n");
printf("\n\t 8. EXIT \n");
printf("\n\n\n\t ENTER THE CHOICE = ");
scanf("%d",&i);
switch(i)
{
case 1:
clrscr();
intro();
break;
case 2:
clrscr();
statement();
break;
case 3:
clrscr();
loop();
break;
case 4:
clrscr();
array();
break;
case 5:
clrscr();
fun();
break;
case 6:
clrscr();
program();
break;
case 7:
clrscr();
mock();
break;
case 8:
exit(0);
break;
default:
vishal();
break;
}
}
void main()
{
clrscr();
welcome();
vishal();
getch();
}