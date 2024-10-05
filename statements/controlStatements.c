//Structure of for loop:

/*     1                2           4
for (expression1; expression2; expression3)                                             Evaluation in for loop 1,2,3,4

{       3
    statement;
}
*/



/*
#include <stdio.h>
int main() {
    int x;
    for (x=1;x<5;x++);
    printf("This code will run \n");                                    output: This code will run
    printf("%d",x);                                                             5
    return 0;
}

*/




/*
#include <stdio.h>

int main() {
   int i;
   for(i = printf("GATE");i<=7;printf("EXAM")){
    printf("%d",i);                                           //output: GATE4EXAM6EXAM
    i = i +2;
   }
   return 0;
}
*/



/*
#include <stdio.h>

int main() {
    int i,j;
    for(i=1,j=4;i<=4,j>2;i++,j--)                                                  // output: 1,4 2,3
    printf("%d,%d ",i,j);
    return 0;
}
*/

/*


#include <stdio.h>
int main() {
    int i=1;
    for(;;i+=2)
    {
        if (i>=7)
        break;
        
        printf("%d ",i);                                            //output: 1 3 5
        
    }
    return 0;
}


*/


/*
#include <stdio.h>
int main() {
    int a,b=2,c,d=1;
    for(a=1;a<=10;a+=3) b++;
    for(c=b*2;c<=20;c+=2) d=d+c;                                            //output: 87
    printf("%d",b+d);
    return 0;
}

*/


/*
#include <stdio.h>
int main() {
    int x,y;
    for(x=1; x<=3; x++)
    {
        for(y=5; y>=1; y--)
        {
            printf("%d",x+y);                                                   //output: 654327654387654
        }
    }
    return 0;
}

*/


/*
#include <stdio.h>
int main() {
    int i, count = 0;
    for(i=1; i<4; i++)
    {
        switch(i)
        {
            case 3: count++;
            case 1: count += 2;                                                 // output: 50
            case 2: count += 3;
            case 4: count -= 1;
            default: count *= 2;
        }
    }
    printf("%d", count);
    return 0;
}

*/

/*
#include <stdio.h>

int main() {
    int a =10;
    if(a)
    printf("Good");                                     output:GoodBad
    printf("Bad");
    return 0;
}

*/

/*
#include <stdio.h>

int main() {
    int a = 0, b =1;
    if (a,b)
    {
    printf("Good");                          //output: GoodBetter
    printf("Better");

    }
    printf("Bad");
    return 0;
}

*/



/*
#include <stdio.h>

int main() {
    int a = 0;
    if(printf("%d",a))                          output:0GoodBad
      printf("Good");
    printf("Bad");
    return 0;
}

*/


/*

#include <stdio.h>

int main() {
    int a,b,c;
    a = 1,0;
    b = (1,0);
    c = (0,1);
    if(a)
    {
        printf("%d",a);                        output:1
        if(b)
        {
          printf("%d",b);
          if(c)
          printf("%d",c);
        }
    }

    return 0;
}

*/ 

/*
#include <stdio.h>

int main() {
    int a = -1, b = 0, c = 1;
    if(++a, b++, c--)
        printf("HAI");
    else if(a++, --b, ++c)
        printf("HELLO");
    else if(--a, c++, b++)                      output:HAI
        printf("BYE");
    return 0;
}
*/


/*
#include <stdio.h>

int main() {
    int a =1, b = -1, c =0;
    if(a,c,b)
     printf("HAI");
    if(++a,--c,b++)
     printf("HELLO");                           output:HAIHELLOBYE
    if(--b,c++,a) 
     printf("BYE");
    return 0;
}

*/

/*
#include <stdio.h>

int main() {
    int a = 1, b = 0;
    if(a,b)
     printf("HAI");
     printf("HELLO");                           output:'else' without a previous if
    else
     printf("BYE");
}
*/

/*
#include <stdio.h>

int main() {
    int a = 1;
    if(printf("%d",a--))
     printf("%d",a);
    if(printf(""))
     printf("%d",a++);
    else                                                output:10-1
     printf("%d",--a);
     return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {

    }
    return 0;
}
*/


//Nested if
/*
if(exp1)
{
    if(exp2)
    {

    }
}

*/


//Nested if-else
/*
if(Exp)
{
    if(Exp)
    {
        
    }
    else
    {

    }
}
else
{
    if(Exp)
    {

    }
    else
    {

    }
}
*/


//Else if-else ladder
/*
#include <stdio.h>

int main() {
    if(Exp)
    {
        stats;
    }
    else if(Exp)
    {
        Stats;
    }
    else if(Exp)
    {
        Stats;
    }
    else if(Exp)
    {
        Stats;
    }
    else
    {
        Stats;
    }
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int a,b,c;
    if(scanf("%d%d%d",&a,&b,&c))
     printf("Hai");
    if(printf("%d%d%d",a,b,c))
     printf("Hello");                                   //output: Hai5-7-9Hello
    return 0;
}

*/

/*
#include <stdio.h>

int main() {
    int i = 5;
    do{
        printf("%d\n",i);                      // output:5
        i=i+1;
    }while(i<=5);
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int a = 1;
    while(a<=5){                                     // output: infinte loop
        printf("%d",a);
    }
    return 0;
}

*/


/*
#include <stdio.h>

int main() {
    int i = 3, j = 7;
    do
    {
        printf("%d%d\n",i,j);                       //output:infinite loop
        i = i + 1;
        j = j - 2;
    }while(i,j);
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int i = 5, j = 9, count = 0;
    
    do
    {
        printf("Hai\n");
        count += 1;
    }while(i--,j--);
    printf("count = %d",count);
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int i = 1, j = 5;
    do
    {
        printf("%d, ",j);
        do
        {
            printf("%d, ",i);                          //output:5111-14-37
            j = j - 2;
        }while(j>=0);
        i = i + 3;
    }while(i<=9);
    return 0;
}

*/


#include <stdio.h>

int main() {
    FILE * new_file;
    new_file = fopen("uttam.txt","w");
    return 0;
}
