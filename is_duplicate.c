#include<stdio.h>
#include<string.h>
#include"contact.h"
int is_duplicate(AddressBook *addressbox,char *temp)
{
    for(int i=0;i<addressbox->countcontact;i++)
    {
        if(strcmp(addressbox->contacts[i].phone,temp)==0)
        {
            return 1;
        }
           
    }
    return 0;
}
int duplicate_mail(AddressBook *addressbox,char *mailt)
{
     for(int i=0;i<addressbox->countcontact;i++)
    {
        if(strcmp(addressbox->contacts[i].mail,mailt)==0)
        {
            return 1;
        }
           
    }
    return 0;
}