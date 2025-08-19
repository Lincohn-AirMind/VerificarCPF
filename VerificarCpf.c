#include <stdio.h>
#include <string.h>
int main(){
    
char cpf[12];
char cpfdigi[15];

scanf("%s", cpfdigi);
if(strlen(cpfdigi)<11){
    printf("tamanho incoerente para um cpf.");
    return 1;
}
int j=0;

for(int i=0; i<15; i++){

    char z= cpfdigi[i];

    if(z=='-'||z=='_'){
        continue;
    }

    cpf[j]=z;
    j++;
    
}
cpf[j]='\0';
if(strlen(cpf)!=11){
    printf("valor de cpf incoerente.");
    return 1;
}

printf("%s",cpf);

}