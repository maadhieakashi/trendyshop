#include<stdio.h>
int main()
{
static int totalPrice;
int a,b,select,c=1,x[5],cost[5];
for(a=0;a<5;a++)
x[a]=0;
char name[50];
 char Fashion[5][50]={"dress","top","pant","hand bag","high heel"};


 printf("\t\t\t\t###########################################\n");
    printf("\t\t\t\t************ WELCOME TO TRENDY ************\n");
    printf("\t\t\t\t###########################################\n");

    printf("\t\t\tEnter your Name:");
    scanf("%s",&name);

printf("\t\t ***** HY %s, It\'s Time To Inject Some Colour Into Your Wardrobe ***** \t\n",name);
printf("\t\t_______________________________________________________________________\n");




do{
 if(c==1){
 printf("\t\t\t\t select your own\n[1] casuals\n[2] accessories \n");
 scanf("%d",&select);


 switch(select)
 {


 case 1:
 {
int casuals;
 printf("\n1.dress- Rs.1850\n2.top Rs.860\n3.pant Rs 2100\t\n");
 scanf("%d",&casuals);
 cost[0]=1850;
 cost[1]=860;
 cost[2]=2100;


 switch(casuals)
 {
 case 1:
 {
 int num;
 printf("you want to buy this dress- Rs 1850.To YES-1 or if NO-any other number \n");
 scanf("%d",&num);
 if(num==1)
 {
 x[0]++;
 totalPrice+=1850;
 }
 printf("price is %d\n",totalPrice);
 break;
 }
 case 2:
 {
 int num;
 printf("you want to buy this top- Rs.860.To YES-1 or if NO-any other number \n");
 scanf("%d",&num);
 if(num==1)
 {
 x[1]++;
 totalPrice+=860;
 }
 printf("Price is %d\n",totalPrice);
 break;
 }
 case 3:
 {
 int num;
 printf("you want to buy this pant- Rs.2100.To YES-1 , NO-any other number\n");
 scanf("%d",&num);
 if(num==1)
 {
 x[2]++;
 totalPrice+=2100;
 }
 printf("Price is %d\n",totalPrice);
 break;
 }
 default:{
 printf("Exit from casual\n");
 break;
 }
 }
 break;
 }



 case 2:
 {
 int access;
 printf("Enter\n1.hand bag -Rs.1500 n2.high heel-1750 \n");
 scanf("%d",&access);
 cost[3]=1500;
 cost[4]=1750;

 switch(access)
 {
 case 1:
 {
 int num;
 printf("you want to buy this hand bag- Rs.1500.To YES-1 , NO-any other number\n");
 scanf("%d",&num);
 if(num==1)
 {
 x[3]++;
 totalPrice+=1500;
 }
 printf("price is %d\n",totalPrice);
 break;
 }
 case 2:
 {
 int num;
 printf("you want to buy this high heel- Rs.1750.To YES-1 , NO-any other number\n");
 scanf("%d",&num);
 if(num==1)
 {
 x[4]++;
 totalPrice+=1750;
 }
 printf("price is %d\n",totalPrice);
 break;

 }
 default:{
 printf("Exit from accessories\n");
 break;
 }
 }
 break;
 }


 default:
 {
 printf("VALID\n");
 break;
 }
 }


 printf("%s's wardrobe\n",name);
 printf("\t****fashion****\t\t****Quantity****\t\t\t****Cost****\n");
 for(a=0;a<5;a++)
 {
 if(x[a]!=0)
 {
 printf("%d\t%s\t\t%d\t\t\t%d\n",x,Fashion[a],x[a],(cost[a]*x[a]));
 }
 }

 printf("Total price\t\t\t\t\tRs.%d\n",totalPrice);
 printf("If you love to buy something more\n1 to Add Fashion item\n2 to Delete fashion item \n");
 scanf("%d",&c);
}
 if(c==2)
 {
 int id;
 printf("Enter id to delete item\n");
 scanf("%d",&id);
 if(id<5 && id>0){
 totalPrice=totalPrice-(cost[id]*x[id]);
 x[id]=0;
 }
 else{
 printf("Enter a Valid ID\n");
 }
 printf("Checked Fashion items..... \n");
 printf("Id\tFashion\t\tAmount\t\t\tprice\n");
 for(a=0;a<9;a++)
 {
 if(x[a]!=0)
 {
 printf("%d\t%s\t\t%d\t\t%d\n",a,Fashion[a],x[a],(cost[a]*x[a]));
 }
 }
 printf("Total \t\t\t\t\t%d\n",totalPrice);
 printf("If you love to buy something more\n1  Add another Fashion items \n2 Delete fashion item \n");
 scanf("%d",&c);

 }
}while(c==1 || c==2);
printf("Your total balance is Rs.%d\n",totalPrice);
printf("Thanks %s for shopping *****TRENDY*****!\n",name);
return 0;
}
