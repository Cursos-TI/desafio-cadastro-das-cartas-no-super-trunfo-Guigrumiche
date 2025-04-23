#include <stdio.h>
int main(){
int turistico;
float populacao ;
char cidade [30];
char codigo [15];
float pib ;
float km;
// aventureiro
float denPop;
float pibpc;
//mestre
float superpoder1 ;
//variaveis estado 2 !
int tur2;
float pop2;
char cidade2[30];
char cod2[15];
float pib2;
float km2;
// aventureiro
float denPopu;
float pibPc;
// mestre
float superpoder2 ;
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

 superpoder1 = populacao + km + denPop + pib;

 printf("Superpoder somado é : %.3f \n",superpoder1);

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

 superpoder2 = pop2 + km2 + denPopu + pib2;


 printf("Superpoder somado é : %.3f \n",superpoder2);

 printf("------Cidade %s-----\n-----CADASTRADO COM SUCESSO-----\n",cidade2);


 printf("\n---------- COMPARAÇÕES BINÁRIAS ENTRE AS CIDADES ----------\n");

// População
printf("População (1 = %s venceu): %d\n", cidade, populacao > pop2);

// PIB
printf("PIB (1 = %s venceu): %d\n", cidade, pib > pib2);

// PIB per Capita
printf("PIB per Capita (1 = %s venceu): %d\n", cidade, pibpc > pibPc);

// Área
printf("Área Territorial (1 = %s venceu): %d\n", cidade, km > km2);

// Densidade Populacional (menor = melhor, então invertemos a lógica)
printf("Densidade Populacional Invertida (1 = %s venceu): %d\n", cidade, denPop < denPopu);

// Pontos Turísticos
printf("Pontos Turísticos (1 = %s venceu): %d\n", cidade, turistico > tur2);

// SuperPoder
printf("SuperPoder (1 = %s venceu): %d\n", cidade, superpoder1 > superpoder2);



    return 0;
}