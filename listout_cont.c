#include<stdio.h>
#include"contact.h"
#define YELLOW "\033[1;33m"
#define GREEN "\033[1;32m"
#define CYAN  "\033[1;36m"
#define RED  "\033[1;31m"
#define BLUE "\033[1;34m"
#define RESET "\033[0m"
void listout_contact(AddressBook *addressbox)
{   
        printf(CYAN);
        printf(" __________________________________                    \n");
        printf("|        AVAILABLE CONTACT'S       |                   \n");
        printf("|__________________________________|              "RESET);

    printf("\n______________________________________________________________________\n");
                                                            
    printf("  %-10s %-15s %-15s %-25s \n","S.No","NAME","PHONE","MAIL");
    printf("______________________________________________________________________\n");
    for(char i=0;i<addressbox->countcontact;i++)
    {
        
        printf("\n   [%2d]     %-15s %-15s %-25s",i+1,
            addressbox->contacts[i].name,
            addressbox->contacts[i].phone,
            addressbox->contacts[i].mail);
    printf("\n______________________________________________________________________\n");    
    }
}
//printf("\n _____________________________________________________________________\n");