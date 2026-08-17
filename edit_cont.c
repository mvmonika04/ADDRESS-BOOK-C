#include<stdio.h>
#include<string.h>
#include"contact.h"
#define YELLOW "\033[1;33m"
#define GREEN "\033[1;32m"
#define CYAN  "\033[1;36m"
#define RED  "\033[1;31m"
#define BLUE "\033[1;34m"
#define RESET "\033[0m"
void name(AddressBook *addressbox,int  i);
void phone(AddressBook *addressbox,int i);
void mail(AddressBook *addressbox,int i);

void edit_contact(AddressBook *addressbox)
{
    char Name[25];
    int found=0;
    int i;
        printf(CYAN);
        printf(" _________________________________\n");
        printf("|          3.EDIT CONTACT         |\n");
        printf("|_________________________________|\n"RESET);

    printf("\nEnter person Name/mobile number/email:");
    scanf(" %[^\n]",Name);
    
     
    for(i=0;i<addressbox->countcontact;i++)
    {
         if(strcmp(addressbox->contacts[i].name,Name)==0)
         {
            found=1;
            break;

         }
         else if(strcmp(addressbox->contacts[i].phone,Name)==0)
         {
            found=1;
            break;
         }
         else if(strcmp(addressbox->contacts[i].mail,Name)==0)
         {
            found=1;
            break;
         }
         
    } 
    if(found==0)
    {
        printf(RED"Contact not found..!\n"RESET);
        return ;
    }
    printf("\nRecommend Edit Contact:\n");   
    printf("+--------------------------------------------------------------+");
    printf("\n| [%-2d]  |%-10s |%-15s| %-25s|\n",i+1,addressbox->contacts[i].name,
                                addressbox->contacts[i].phone,
                                addressbox->contacts[i].mail);
    printf("+--------------------------------------------------------------+\n"); 
    int choice;
        
    printf("what you want to edit\n[1]. Name\n[2]. Mobile Number\n[3]. Mail\n");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
            case 1:
                   name(addressbox,i);
                   break;
            case 2:
                   phone(addressbox,i);
                   break;
            case 3:
                   mail(addressbox,i);
                   break;
            default:
                   printf(YELLOW"please enter only above option"RESET);  
                   return ;                   
    }

}
void name(AddressBook *addressbox,int  i)
{    

     printf("Enter new name: ");
     scanf(" %[^\n]",addressbox->contacts[i].name);
     save_contact(addressbox);
     printf(GREEN"\nContact Updated Successfully!"RESET);
     printf("\n+----------------------------------------------------------------+");
     printf("\n| [%-2d]  |%-10s |%-15s| %-25s |\n",i+1,addressbox->contacts[i].name,
                                addressbox->contacts[i].phone,
                                addressbox->contacts[i].mail);
     printf("+----------------------------------------------------------------+\n"); 
      
}
void phone(AddressBook *addressbox,int  i)
{
     char temp[50];
     printf("Enter new  phone number: ");
     scanf(" %49s",temp);
     ///pnone_validation(addressbox,i);
     if(is_duplicate(addressbox,temp))
     {
       printf(YELLOW"Contact already exits"RESET);
     }
     else
     {
       strcpy(addressbox->contacts[i].phone,temp);
       save_contact(addressbox);
       printf(GREEN"\nContact Updated Successfully!"RESET);
       printf("\n+----------------------------------------------------------------+");
       printf("\n| [%-2d]  |%-10s |%-15s| %-25s |\n",i+1,addressbox->contacts[i].name,
                                addressbox->contacts[i].phone,
                                addressbox->contacts[i].mail);
       printf("+----------------------------------------------------------------+\n"); 
     }
      
}
void mail(AddressBook *addressbox,int i)
{
     char mailt[50];
     printf("Enter new mail: ");
     scanf("%49s",mailt);
     if(duplicate_mail(addressbox,mailt))
     {
       printf(YELLOW"Contact already exits"RESET);
     }
     else
     {   strcpy(addressbox->contacts[i].mail,mailt);
         save_contact(addressbox);
         printf(GREEN"\nContact Updated Sucessfully!"RESET);
         printf("\n+----------------------------------------------------------------+");
         printf("\n| [%-2d]  |%-10s |%-15s| %-25s |\n",i+1,addressbox->contacts[i].name,
                                addressbox->contacts[i].phone,
                                addressbox->contacts[i].mail);
         printf("+----------------------------------------------------------------+\n"); 
       }
}