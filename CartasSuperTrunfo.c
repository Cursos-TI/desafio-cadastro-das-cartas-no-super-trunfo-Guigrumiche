#include <stdio.h>
int main(){
int turistico;
float populacao ;
char cidade [30];
char codigo [15];
float pib ;
float km;
float denPop;
float pibpc;
//variaveis estado 2 !
int tur2;
float pop2;
char cidade2[30];
char cod2[15];
float pib2;
float km2;
float denPopu;
float pibPc;
// fim das variaveis 

printf("-------------Cadastro---------------\n");

 printf("Digite o NOME DA CIDADE que voce deseja cadastrar: \n");
 scanf(" %[^\n]", cidade);

 printf("Digite a População da cidade: ");
 scanf("%f",&populacao);

 printf("Digite o PIB da cidade: ");
 scanf("%f",&pib);

 printf("Digite a area total em km2 da cidade: ");
 scanf("%f",&km);

 printf("Digite quantos pontos turisticos tem na cidade: ");
 scanf("%d",&turistico);

 printf("Digite o Codigo para representar sua Cidade: ");
 scanf("%s", &codigo);

 denPop = populacao / km ;
 pibpc = populacao / pib ;

 printf("A densidade populacional é : %f \n", denPop);
 printf("O PIB per capta é : %f \n", pibpc);

 printf("-----Cidade %s-----\n-----CADASTRADA COM SUCESSO-----\n\n",cidade);
 // realizando o cadastro do estado 2 

 printf ("-----CADASTRO DO SEGUNDA CIDADE-----\n\n");
 
 printf("Digite o nome da Segunda Cidade: ");
 scanf(" %[^\n]", cidade2);

 printf("Digite a população da Cidade: ");
 scanf("%f",&pop2);

 printf("Digite o PIB da Cidade: ");
 scanf("%f",&pib2);

 printf("Digite a area total em km2 do Cidade: ");
 scanf("%f",&km2);

 printf("Digite quantos pontos turisticos tem na Cidade: ");
 scanf("%d",&tur2);

 printf("Digite o Codigo para representar sua Cidade: ");
 scanf("%s", &cod2);

 denPopu = pop2 / km2 ;
 pibPc = pop2 / pib2 ;

 printf("A densidade populacional é : %f \n", denPopu);
 printf("O PIB per capta é : %f \n", pibPc);


 printf("------Cidade %s-----\n-----CADASTRADO COM SUCESSO-----\n",cidade2);


    return 0;
}