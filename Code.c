//*There are 2 Library in Hubli(Central library(c) and Main library(m)) which gives books to readers
//and take them back but some users are late to submits so library planned to put some fine ,for only single book taken
//Central library charges fine for every book returned late
//for first 5 days fine is 50 paise/day ,
//for 6-10 days fine is 1 rupee/day
//for 10-15 days fine is 5 rupee/day
//for above 15 print statement that "your membership is cancelled"
//Main Library charges fine for every book returned late
//for first 5days fine is 1 rupee/day ,
//for 6-10 days fine is 2 rupee/day
//for 10-15 days fine is 10rupee/day
//for above 15 print statement that "You cannot borrow books"*//

#include<stdio.h>
main()
{
    char ch;
    float f;
    int d;
    printf("Enter the library(c-central library,M-main library)\n");
    scanf("%c",&ch);

    if(ch=='c'||ch=='C')
    {
        printf("Enter the number of days:");
        scanf("%d",&d);
        if(d<=5)
        {
            f=d*0.5;
        }
        else if(d>5&&d<=10)
        {
            f=2.5+(d-5)*1;
        }
        else if(d>10&&d<=15)
        {
            f=2.5+5+(d-10)*5;
        }
        else
        {
            f=2.5+5+(d-10)*5;
            printf("your Membership is cancelled\n");
        }
    }
    else if(ch=='m'||ch=='m')
    {
        printf("Enter the number of days:");
        scanf("%d",&d);

      if(d<=5)
        {
            f=d*1;
        }
      else if(d>5 && d<=10)
        {
            f=5+(d-5)*2;
        }
      else if(d>10 && d<=15)
        {
            f=5+10+(d-10)*10;
        }
       else
        {
           f=5+10+(d-10)*10;
           printf("You cannot borrow the books\n");
        }
    }
    printf("fine=%f",f);
}
