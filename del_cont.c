#include<stdio.h>
#include<string.h>
#include"contact.h"
#define YELLOW "\033[1;33m"
#define GREEN "\033[1;32m"
#define CYAN  "\033[1;36m"
#define RED  "\033[1;31m"
#define BLUE "\033[1;34m"
#define RESET "\033[0m"
void delete(AddressBook *addressbox,int i)
{
      int j;
       for(j=i;j<addressbox->countcontact-1;j++)
       {
         addressbox->contacts[j]=addressbox->contacts[j+1];
       }
       addressbox->countcontact--;
       save_contact(addressbox);
       printf(RED"Contact Deleted Successfully..!"RESET);


}
void delete_contact(AddressBook *addressbox)
{
    char delName[25];
    int found=0;
    int i;
       printf(CYAN);
         printf(" __________________________________\n");
        printf("|        4.DELETE CONTACT          |\n");
        printf("|__________________________________|\n"RESET);
    printf("\nfind contact:");
    printf("\nEnter the Name/Phone Nuber/mail: ");
    scanf(" %[^\n]",delName);
     
    for(i=0;i<addressbox->countcontact;i++)
    {
         if(strcmp(addressbox->contacts[i].name,delName)==0)
         {
            found=1;
            break;

         }
         else if(strcmp(addressbox->contacts[i].phone,delName)==0)
         {
            found=1;
            break;
         }
         else if(strcmp(addressbox->contacts[i].mail,delName)==0)
         {
            found=1;
            break;
         }
         
    } 
    if(found==0)
    {
        printf(RED"Contact not found!\n"RESET);
        return ;
    }
    printf(GREEN"Contact found . "RESET);
    printf("\n+--------------------------------------------------------------+");
    printf("\n| [%-2d]  |%-10s |%-15s| %-25s|\n",i,addressbox->contacts[i].name,
                                addressbox->contacts[i].phone,
                                addressbox->contacts[i].mail);
    printf("+--------------------------------------------------------------+\n"); 
    char confirm;
    printf(YELLOW"Are you sure you want to delete [Y/N] ?: "RESET);
    scanf(" %c",&confirm);
    switch(confirm)
    {
        case 'Y':
               delete(addressbox,i);
               break;
        case 'N':
              printf(GREEN"EXIT"RESET);
              break;
        default:
               printf(RED"something went wrong enter Y/N "RESET);             
    }                            
}