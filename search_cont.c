#include<stdio.h>
#include<string.h>
#include"contact.h"
#define YELLOW "\033[1;33m"
#define GREEN "\033[1;32m"
#define CYAN  "\033[1;36m"
#define RED  "\033[1;31m"
#define BLUE "\033[1;34m"
#define RESET "\033[0m"
void search_name(AddressBook *addressbox);
void search_phone(AddressBook *addressbox);
void search_mail(AddressBook *addressbox);
void search_contact(AddressBook *addressbox)
{
    int num;
        printf(CYAN);
        printf(" _________________________________\n");
        printf("|       2.SEARCH CONTACT          |\n");
        printf("|_________________________________|\n\033[0m");
    
        printf("\nSearching Modes");
        printf("\n[1]. By Name");
        printf("\n[2]. By mobile number");
        printf("\n[3]. By Mail");
        printf("\n[4]. Exit");
        printf("\n-----------------------------------");
        printf("\nEnter your mode option: ");
        scanf("%d",&num);
        printf("------------------------------------\n");
        //scanf("%d",&num);
        switch(num)
        {
            case 1:
                    search_name(addressbox);
                    break;
            case 2:
                    
                    search_phone(addressbox);
                    break;
            case 3:
                    search_mail(addressbox);  
                    break; 
            case 4:
                    printf(YELLOW"Exit.."RESET);  
                    break;      
            default:
                   printf(YELLOW"Enter valid mode"RESET);                    
        }
    
}
void search_name(AddressBook *addressbox)
{
     char subName[30];
     int found=0;
     //int count=addressbox->countcontact;
     printf("\nEnter the name: ");
     scanf(" %[^\n]",subName);
   
    
     for(char i=0;i<addressbox->countcontact;i++)
     {
       char *ptr;
       ptr=strstr(addressbox->contacts[i].name,subName);
       if(ptr!=NULL)
       {
           /*printf(GREEN"\nContact found successfully.."RESET);
           printf("\n______________________________________________________________________\n"); */    
           printf("\n[%-2d]     %-15s %-15s %-25s",i+1,
            addressbox->contacts[i].name,
            addressbox->contacts[i].phone,
            addressbox->contacts[i].mail);
        printf("\n______________________________________________________________________\n");    
          found=1;        
       }   
     }   
    if(found)
    {
        printf(GREEN"\nContact found successfully.."RESET);
        printf("\n______________________________________________________________________\n");    
        
        
    }    
    else
    {
        printf(RED "\nSorry!contact not found"RESET); 
        return ;
    }  
}
void search_phone(AddressBook *addressbox)
{   int found=0;
    char subNum[10];

    printf("\nEnter you phone number: ");
    scanf("%s",subNum);
    char *ptr;
    int i;
    
    for(i=0;i<addressbox->countcontact;i++)
    {
       ptr=strstr(addressbox->contacts[i].phone,subNum);
      
       if(ptr!=NULL)
       {
        
         printf(GREEN"\nContact found successfully.."RESET);
         printf("\n___________________________________________________________________");
        printf("\n [%-2d]     %-15s %-15s %-25s",i+1,
            addressbox->contacts[i].name,
            addressbox->contacts[i].phone,
            addressbox->contacts[i].mail);
       printf("\n_____________________________________________________________________\n");    
           found=1;
       }  
    }   
    
    if(found==0)
    {
           printf(RED"\nSorry! Contact  not found.."RESET);
           return ;
    }                 
       
}
void search_mail(AddressBook *addressbox)
{
    int found=0;
    char subMail[25];
    printf("\nEnter you mail id: ");
    scanf("%s",subMail);
    char *ptr;
    int i;

    for(i=0;i<addressbox->countcontact;i++)
    {  
       //printf(GREEN"\nContact found successfully.."RESET); 
      // printf("\n___________________________________________________________________\n");
       ptr=strstr(addressbox->contacts[i].mail,subMail);
       if(ptr!=NULL)
       {
        printf(GREEN"\nContact found successfully.."RESET); 
        printf("\n_____________________________________________________________________\n");
        printf("\n   [%2d]     %-15s %-15s %-25s",i+1,
            addressbox->contacts[i].name,
            addressbox->contacts[i].phone,
            addressbox->contacts[i].mail);
        printf("\n____________________________________________________________________\n");    
            found=1;
       }  
    }   
    if(found==0)
    {
           printf(RED"\n  Sorry! Contact  not found.."RESET);
           
    }
                    
}