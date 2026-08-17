#include<stdio.h>
#include"contact.h"
void save_contact(AddressBook *addressbox)
{       
        FILE *fp;
        fp=fopen("contact.dat","wb");
        if(fp==NULL)
        {
            perror("ERROR");
            return ;
        }
        fwrite(addressbox,sizeof(AddressBook),1,fp);
        fclose(fp);
      
}
