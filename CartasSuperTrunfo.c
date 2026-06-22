#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas CARTAS 01
   int main (){

     // Carta 1
char estado1[] = "Brasil";
char codigoCarta1[] = "A01";
char nomeCidade1[] = "Curitiba";
int populacao1 = 100000;
float areaKm2_1 = 1000.5;
float pibPerCapita1 = 10000.5;
int pontosTuristicos1 = 100;
     float densidadePopulacional1 = populacao1 / areaKm2_1;
float pibPerCapita1 = pibPerCapita1 / populacao1;
      
// Carta 2
char estado2[] = "Ceara";
char codigoCarta2[] = "A02";
char nomeCidade2[] = "Fortaleza";
int populacao2 = 2428678;
float areaKm2_2 = 312.35;
float pib2 = 73.4;
int pontosTuristicos2 = 150;
float densidadePopulacional2 = populacao2 / areaKm2_2;
float pibPerCapita2 = pib2 / populacao2;
      
   printf("Codigo da Carta 1: %s\n", codigoCarta1);
   printf("Codigo da Carta 2: %s\n", codigoCarta2);
           printf("=== CARTA 1 ===\n");
printf("Estado: %s\n", estado1);
printf("Codigo: %s\n", codigoCarta1);
printf("Cidade: %s\n", nomeCidade1);

printf("\n=== CARTA 2 ===\n");
printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codigoCarta2);
printf("Cidade: %s\n", nomeCidade2);

   }
   
