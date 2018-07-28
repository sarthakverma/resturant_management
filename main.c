#include <stdio.h>
#include <stdlib.h>
struct quantity
{
    int m1;
    int m2;
    int m3;
    int m4;
    int m5;
    int m6;
    int m7;
    int d1;
    int d2;
    int d3;

}cust;
int main()
{
    FILE *fp;
    char word;
    int a=200;
    int b=160;
    int c=180;
    int d=70;
    int e=10;
    int f=25;
    int g=90;
    int x=20;
    int y=15;
    int z=45;
    int ch;
    int order;
    int num;
    int item=0;
    int i;
    int j;
    static int k=1;
    int table;
    static int bill=0;
    static index=1;
    int feed;
    int l;
    int menu=1;
    system("cls");
    printf("\t\t\t||************************************||\n");
    printf("\t\t\t||WELCOME TO ROCKING FAMILY RESTAURANT||\n");
    printf("\t\t\t||************************************||\n\n");
    printf("\t\t\t\t   * Table Booking *\n");
    printf("\n");

                        fp=fopen("menu.txt","r");
    while(menu<4)
    {
    switch(menu)
    {
        case 1:
             {printf("\t\t\t   WELCOME TO TABLE BOOKING SECTION\n\n");
                        printf("\t\t\t\t  TABLE ARRANGEMENT\n\n");
                        for(i=0;i<4;i++)
                        {

                            for(j=0;j<4;j++)
                            {
                                printf("\t   [%d]\t",k);
                                k++;
                            }
                            printf("\n");
                        }
                        printf("\nEnter the Table Number to be booked:-");
                        scanf("%d",&table);
                        printf("\n");
 if(table>0&&table<17)
                        {
                        printf("Congratulations!!! Your table number %d has been successfully booked.\n",table);
                        printf("Kindly reach 15 minutes prior than your entered time.\n\n");
                        }
                        else{
                            printf("\n");
                        }
                        break;

             }
                    case 2:
                        {
                            printf("\t\t\t\t   Place Your Order\n\n");
             printf("\t\t\t\t\t MENU\n\n");
             while(1)
    {
        word=fgetc(fp);
        if(word==EOF)
        {
            break;
        }
        else
            {
            printf("%c",word);
        }
    }
    printf("\n\n\nEnter the number of items:-");
    scanf("%d",&num);
    printf("\n");
    item=num;
    while(num>0)
        {
            printf("Enter the item number:-");
            scanf("%d",&order);
            printf("\n");
            switch(order)
            {
            case 1:
                {
                    printf("Enter the quantity:-");
                    scanf("%d",&cust.m1);
                    printf("\n");
                    break;
                }
                case 2:
                {
                    printf("Enter the quantity:-");
                    scanf("%d",&cust.m2);
                    printf("\n");
                    break;
                }
                case 3:
                {
                    printf("Enter the quantity:-");
                    scanf("%d",&cust.m3);
                    printf("\n");
                    break;
                }
                case 4:
                {
                    printf("Enter the quantity:-");
                    scanf("%d",&cust.m4);
                    printf("\n");
                    break;
                }
                case 5:
                {
                    printf("Enter the quantity:-");
                    scanf("%d",&cust.m5);
                    printf("\n");
                    break;
                }
                case 6:
                {
                    printf("Enter the quantity:-");
                    scanf("%d",&cust.m6);
                    printf("\n");
                    break;
                }
                case 7:
                {
                    printf("Enter the quantity:-");
                    scanf("%d",&cust.m7);
                    printf("\n");
                    break;
                }
                case 8:
                {
                    printf("Enter the quantity:-");
                    scanf("%d",&cust.d1);
                    printf("\n");
                    break;
                }
                case 9:
                {
                    printf("Enter the quantity:-");
                    scanf("%d",&cust.d2);
                    printf("\n");
                    break;
                }
                case 10:
                {
                    printf("Enter the quantity:-");
                    scanf("%d",&cust.d3);
                    printf("\n");
                    break;
                }
                default: printf("Enter the valid choice please!!!!");

            }
            num--;
        }
        printf("\n\n");
        break;
        }
        case 3:
            {
                        printf("\t\t ROCKING FAMILY RESTAURANT\n\n");
                        printf("\t\t\t CASH MEMO\n\n");
                        printf("S.No.\tITEM\t\tQUANTITY\tAMOUNT\n");
                        while(item>0)
                        {
                        if(cust.m1>0)
                        {
                            printf("%d)\tChicken Biryani\t%d\t\t%d",index,cust.m1,(a*cust.m1));
                            printf("\n");
                            bill=bill+(a*cust.m1);
                            index++;
                            cust.m1=0;
                        }
                        else if(cust.m2>0)
                        {
                            printf("%d)\tButter Paneer\t%d\t\t%d",index,cust.m2,(b*cust.m2));
                            printf("\n");
                            bill=bill+(b*cust.m2);
                            index++;
                            cust.m2=0;

                        }
                        else if(cust.m3>0)
                        {
                            printf("%d)\tButter Chicken\t%d\t\t%d",index,cust.m3,(c*cust.m3));
                            printf("\n");
                            bill=bill+(c*cust.m3);
                            index++;
                            cust.m3=0;
                        }
                        else if(cust.m4>0)
                        {
                            printf("%d)\tDal Mahani\t%d\t\t%d",index,cust.m4,(d*cust.m4));
                            printf("\n");
                            bill=bill+(d*cust.m4);
                            index++;
                            cust.m4=0;
                        }
                        else if(cust.m5>0)
                        {
                            printf("%d)\tTandoori Roti\t%d\t\t%d",index,cust.m5,(e*cust.m5));
                            printf("\n");
                            bill=bill+(e*cust.m5);
                            index++;
                            cust.m5=0;
                        }
                        else if(cust.m6>0)
                        {
                            printf("%d)\tButter Nan\t%d\t\t%d",index,cust.m6,(f*cust.m6));
                            printf("\n");
                            bill=bill+(f*cust.m6);
                            index++;
                            cust.m6=0;
                        }
                        else if(cust.m7>0)
                        {
                            printf("%d)\tJeera Rice\t%d\t\t%d",index,cust.m7,(g*cust.m7));
                            printf("\n");
                            bill=bill+(g*cust.m7);
                            index++;
                            cust.m7=0;
                        }
                        else if(cust.d1>0)
                        {
                            printf("%d)\tFruit Mixture\t%d\t\t%d",index,cust.d1,(x*cust.d1));
                            printf("\n");
                            bill=bill+(x*cust.d1);
                            index++;
                            cust.d1=0;
                        }
                        else if(cust.d2>0)
                        {
                            printf("%d)\tPepsi\t\t%d\t\t%d",index,cust.d2,(y*cust.d2));
                            printf("\n");
                            bill=bill+(y*cust.d2);
                            index++;
                            cust.d2=0;
                        }
                        else if(cust.d3>0)
                        {
                            printf("%d)\tCoffee\t\t%d\t\t%d",index,cust.d3,(z*cust.d3));
                            printf("\n");
                            bill=bill+(z*cust.d3);
                            index++;
                            cust.d3=0;
                        }
                        else
                        {
                           printf("\n");
                        }
                        item--;
                        }
                        printf("Total Payable Amount:- %d\n\n",bill);
                        printf("\n");
                        break;
                    }
    }

    if(table>0&&table<17)
    {
        menu++;
    }
    else
    {
        printf("Enter The Valid Table Number...\n\n");

    }
    }
    printf("\n\t\t\tFeedback Please\n\n");
                        while(1){
                        printf("\t\tPlease Rate Us Out Of 10 Stars\n\n\t\t\t");
                        scanf("%d",&feed);
                        if(feed>0&&feed<11)
                        {
                        printf("\t\tYOU HAVE RATED US ");
                        printf("\n\n");
                        printf("\t\t");
                        for(l=0;l<feed;l++)
                        {
                            printf("*");
                        }
                        printf("\n\n\t\tOUT OF TEN\n\n");
                        printf("\t\tTHANK YOU FOR YOUR FEEDBACK...\n\n");
                        printf("\t\t\t\t\tTHANK YOU!!!\n");
                        printf("\t\t\t\t  PLEASE VISIT US AGAIN...");
                        exit(0);
                        }
                        else{
                            printf("\t\tPlease Give Your Feedback Again\n\n");
                        }
                        }
fclose(fp);
    return 0;
}


