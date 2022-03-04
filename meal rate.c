#include<stdio.h>
#include<string.h>


void totalmealcount()
{
    printf("....................Total meal number count......................\n\n");
    float ar[100],sum=0;
    int n,i,a,b;

    printf("How Many Members Meal You Want to Count :\n");
    scanf("%d", &n);

    printf("How Many Meals: \n");

    for(i=0; i<n; i++)
    {
        scanf("%f", &ar[i]);
    }

    for(i=0; i<n; i++)
    {
        sum=sum+ar[i];
    }
    printf("Total Meal is: %0.2f\n\n", sum);
    printf("<<..............................................................>>\n\n");

}

void individualpersonamount()
{
    printf("................Individual Person Given Amount Count.......................\n\n");

    int k, s;
    printf("How many member:\n");
    scanf("%d", &s);

    for(k=0; k<s; k++)
    {
        int n,arr[100],sum=0,i;

        char name[100];

        printf("Name of the person:\n");
        scanf("%s", &name);

        printf("How many days he go to the market:\n");
        scanf("%d", &n);

        printf("Now Enter all amount:\n");
        for(i=1; i<=n; i++)
        {
            printf("Day %d:\t", i);
            scanf("%d", &arr[i]);
        }

        for(i=1; i<=n; i++)
        {
            sum=sum+arr[i];
        }
        printf("Name is:%s and Amount Given %d\n\n", name,sum);
        printf("<<..............................................................>>\n\n\n");
    }
}


void totalamountcount()
{
    int n,i;
    printf(".......................Total Amount count.........................\n\n");
    int ar[100],sum=0;


    printf("How Many Members Amount You Want to Count:\n");
    scanf("%d", &n);
    printf("Enter All Amount:\n");

    for(i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for(i=0; i<n; i++)
    {
        sum=sum+ar[i];
    }
    printf("Total Amount is: %d\n\n", sum);
    printf("<<..............................................................>>\n\n");
}


void mealrate()
{
    printf(".....................Meal Rate Calculate.......................\n\n");
    float amount,mealcount,sum;
    printf("Enter Total Amount: ");
    scanf("%f", &amount);
    printf("Enter Total Meal: ");
    scanf("%f", &mealcount);

    sum = amount/mealcount;
    printf("Meal Rate is: %0.3lf\n\n", sum);
    printf("<<..............................................................>>\n\n");
}

void everyoneamount()
{
    printf("..............Individual Cash Pay or Give Calculation Per person.....................\n\n");
    int i;
    for(i=0; i<10; i++)
    {
        char name1[100];
        float totalmeal,mealrate,givenamount,result1,result2,value1,value2;

        printf("Enter Name:\t");
        scanf("%s", &name1);

        printf("Enter Total Meal:\t");
        scanf("%f", &totalmeal);

        printf("Enter Meal Rate:\t");
        scanf("%f", &mealrate);

        printf("Enter Given Amount:\t");
        scanf("%f", &givenamount);

        result1=totalmeal*mealrate;
        value1=result1;

        printf("His Total Expense %0.2f:\n", result1);

        result2 = givenamount-result1;
        value2=result2;

        if(value1>value2)
        {
             printf("%s have to pay %0.2f taka\n", name1, value2);
        }
        else
        {
            printf("%s will get %0.2f taka\n", name1, value2);
        }
        printf("<<..............................................................>>\n\n");
    }

}


int main()
{
    printf(".........................Meal Calculator..........................\n\n");
    totalmealcount();
    individualpersonamount();
    totalamountcount();
    mealrate();
    everyoneamount();
    return 0;
}
