#include<stdio.h>
int main()
{     int quantity,choice,amount,totalamount = 0;
      char moreorders;
     do{  
      printf("-----------Menu-----------\n");
      printf("1.Pizza       price = 180rs/pcs\n");
      printf("2.Burger      price = 100rs/pcs\n");
      printf("3.Dosa        price = 120rs/pcs\n");
      printf("4.Idli        price = 50rs/pcs\n");
      printf("please enter your choice :  "); 
      scanf("%d",&choice);
      
      switch(choice){
            
       case 1: printf("you have selected pizza.\n");
               printf("enter the quantity : ");
               scanf("%d",&quantity);
               amount = quantity * 180; 
               totalamount += amount;
               printf("amount is : %d\n",amount); 
               printf("totalamount is : %d\n",totalamount);     
               break;
       case 2: printf("you have selected burger.\n");
               printf("enter the quantity : ");
               scanf("%d",&quantity);
               amount = quantity * 100; 
               totalamount += amount;
               printf("amount is : %d\n",amount); 
               printf("totalamount is : %d\n",totalamount);
               break;
       case 3: printf("you have selected dosa.\n");
               printf("enter the quantity : ");
               scanf("%d",&quantity);
               amount = quantity * 120; 
               totalamount += amount;
               printf("amount is : %d\n",amount);
               printf("totalamount is : %d\n",totalamount);
               break;   
       case 4: printf("you have selected idli.\n");
               printf("enter the quantity : ");
               scanf("%d",&quantity);
               amount = quantity * 50; 
               totalamount += amount;
               printf("amount is : %d\n",amount);
               printf("totalamount is : %d\n",totalamount);
               break;
               default :
               printf("invalid choice\n"); 
               continue;
      }  
        printf("do you want moreorders? y/n : ");
        scanf(" %c",&moreorders);
}       while (moreorders == 'y' || moreorders == 'Y');
        printf("your final totalamount = %d\n",totalamount);
        printf("thank you for order\n");
        return 0;      
}
