#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_LEN 256

int i=0,j=0,flag,pes;
char input[200];
char buffer[200];
char test[50]="Item unavailable";
char flavors[][50]={
    "chocolate","butterscotch","mango","Belgian chocolate","Litchi delight","Vanilla","Oreo cream and cookies","Kitkat delight"
};
    
char toppings[][50]={
    "brownie","rainbow sprinkles","Jelly cubes","chocolate chips","cashew nuts","Marshmallow"
};
    
char sauces[][50]={
    "Chocolate sauce","caramel","strawberry sauce","fresh Blueberry sauce","honey","chocolate fudge"
        
};
 
struct ice_cream
{
    char* flavor;
    char* topping;
    char* sauce;
};
struct ice_cream your_order;
char* stringmatch(char str[],char pat[])
{
    
    int c=0,d=0;
    while(c!=strlen(str))
    {
        if(str[c]==pat[d])
        {
            c++;
            d++;
            if(d==strlen(pat))
            {
                c=0;
                d=0;
                return pat;
                
            }
        }
        else{
            c++;
            d=0;
        }
    }
    return test;
}
int main()
{
    printf("%s",your_order.flavor);
    printf("\nFLAVOURS\n");
    for(i=0;i<8;i++)
    {
        printf("\n%d.%s",i+1,flavors[i]);
    }
    printf("\n\nTOPPINGS\n");
    for(i=0;i<6;i++)
    {
        printf("\n%d.%s",i+1,toppings[i]);
    }
    printf("\n\nSAUCES\n");
    for(i=0;i<6;i++)
    {
        printf("\n%d.%s",i+1,sauces[i]);
    }
    printf("\nChoose your order:");
    gets(buffer);
    FILE* fp;
    fp=fopen("C:\\Users\\saksh\\OneDrive\\Documents\\fyy.txt","r");
    if(fp==NULL)
    {
        perror("Failed: ");
        return 1;
    }
    char input[MAX_LEN];
    while (fgets(input,MAX_LEN, fp)!=NULL)
    {
        input[strcspn(input, "\n")] = 0;
        printf("\n\n%s\n",input);
        
    }
    fclose(fp);
    
    
    for(j=0;j<8;j++)
    {
        your_order.flavor=stringmatch(input,flavors[j]);
        if(your_order.flavor!=test)
        {
            break;
        }
    }
    if(your_order.flavor==test)
    {
        printf("\nFLAVOUR:NONE\n");
    }
    else
    {
        printf("\n\nDispense=FLAVOUR:%s\n",your_order.flavor);
    }
        
    for(j=0;j<6;j++)
    {
        your_order.topping=stringmatch(input,toppings[j]);
        if(your_order.topping!=test)
        {
            break;
        }
    }
    if(your_order.topping==test)
    {
        printf("\nTOPPING:NONE\n");
    }
    else
    {
        printf("\nDispense=TOPPING:%s\n",your_order.topping);
    }
    for(j=0;j<6;j++)
    {
        your_order.sauce=stringmatch(input,sauces[j]);
        if(your_order.sauce!=test)
        {
            break;
        }
    }
    if(your_order.sauce==test)
    {
        printf("\nSAUCE:NONE\n");
    }
    else
    {
        printf("\nDispense=SAUCE:%s\n",your_order.sauce);
    }
    return 0;
}
