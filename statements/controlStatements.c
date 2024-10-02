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
