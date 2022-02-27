#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int losuj(int min, int max)
{
	return (rand()%(max-min+1)+min);
}

int wypelnij(FILE *plik, int n)
{

    char char1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int dlugosc;
    char litera;


     for(int i = 0; i < n; i++)
     {
         for(int i = 0; i<n; i++)
        {
            dlugosc = losuj(1, 20);
        }

         for(int j = 0; j<dlugosc; j++)
         {

                int key = rand() % (int)(sizeof(char1) -1);

                litera = char1[key];
             	fprintf(plik, "%c", litera);
         }

        fprintf(plik, "\n");
     }
fclose(plik);
}

int main()
{
    srand(time(NULL));
    FILE *plik = NULL;
    char nazwa[50];
    printf("Podaj nazwe pliku: ");
    gets(nazwa);
    plik = fopen(nazwa,"w");


    int n;
    printf("n: ");
    scanf("%d", &n);
    printf("Plik wypelniam Losowymi Stringami\n");
    wypelnij(plik, n);
    printf("\n...Wypelniono...\n");
    return 0;
}
