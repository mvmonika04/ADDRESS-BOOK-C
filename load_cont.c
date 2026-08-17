#include<stdio.h>
#include"contact.h"
void load_contact(AddressBook *addressbox)
{    
      FILE *fp;
        fp=fopen("contact.dat","r");
        if(fp==NULL)
        {
            perror("ERROR");
            return ;
        }
        fread(addressbox,sizeof(AddressBook),1,fp);
        fclose(fp);
        
}