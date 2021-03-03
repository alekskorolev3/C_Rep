#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include "main.h"

int PotatoValue = 0;
int CarrotValue = 0;
int BeetValue = 0;
const int PotatoPrice = 500;
const int CarrotPrice = 1000;
const int BeetPrice = 700;


int main() {

    int choice = 0;
    while (choice != 7)
    {
        PrintMenu();
        choice = CliReadInt();
        if (choice == 1)
        {
            printf ("Enter how many kilograms of potatoes you want to add to the cart ");
            int value;
            value = CliReadInt();
            PotatoValue += value;


        }
        if (choice == 2)
        {
            printf ("Enter how many kilograms of carrot you want to add to the cart ");
            int value;
            value = CliReadInt();
            CarrotValue += value;

        }
        if (choice == 3)
        {
            printf ("Enter how many kilograms of beet you want to add to the cart ");
            int value;
            value = CliReadInt();
            BeetValue += value;

        }
        if (choice == 4)
        {
            ShoppingCart();

        }
        if (choice == 5)
        {
            PriceCalculation();
        }
        if (choice == 6)
        {
            Feedback();
        }

    }
}

int CliReadInt ()
{
    char c[11];
    int n = 0;
    bool check = true;
    while (check)
    {
        fgets(c, 11, stdin);
        int i = 0;
        while (i < strlen(c) - 1)
        {
            if (!isdigit(c[i++]))
            {
                printf ("Error. You need to write integer value");
                check = true;
                fflush(stdin);
                break;
            }
            check = false;
        }
    }
    int i = (int)strlen(c) - 2;

    int k = 0;
    while (i > -1)
    {
        n += (c[k++] - '0') * (int)pow ((int)10, i--);

    }
    return n;

}

void Feedback ()
{
    printf("eVegetables, 2021 \n");
    printf("Developer - Artyom Ulasevich, group - 053501 \n");
    printf("Contacts:  \n");
    printf("E-mail - alekskorolev3@gmail.com \n");
    printf("Telegram - @alekskorolev3 \n");
    printf("Instagram - @budhaboy7 \n");
}

void ShoppingCart ()
{
    printf ("%s %d %s %d %s", "Potato - ", PotatoValue, "kg. Price -", PotatoValue * PotatoPrice, "\n");
    printf ("%s %d %s %d %s", "Carrot - ", CarrotValue, "kg. Price -", CarrotValue * CarrotPrice, "\n");
    printf ("%s %d %s %d %s", "Beet - ", BeetValue, "kg. Price -", BeetValue * BeetPrice, "\n");
}

void PriceCalculation ()
{
    double Discount = 1;
    int TotalWeight = PotatoValue + CarrotValue + BeetValue;
    if (TotalWeight > 50)
    {
        Discount = 0.7;
    }
    else if (TotalWeight > 25)
    {
        Discount = 0.8;
    }
    else if (TotalWeight > 10)
    {
        Discount = 0.9;
    }


    ShoppingCart();
    printf ("%s %d %s", "Your discount is ", (int)((1 - Discount) * 100), "% \n");
    printf ("%s", "Delivery 15000 \n");
    printf ("%s %d %s", "Total price ",
            (int) (((PotatoValue * PotatoPrice + CarrotValue * CarrotPrice + BeetValue * BeetPrice) * Discount) + 15000), "\n");

}

void PrintMenu ()
{
    printf ("1. Add potato \n");
    printf ("2. Add carrot \n");
    printf ("3. Add beet \n");
    printf ("4. Show shopping cart \n");
    printf ("5. Calculation of order value \n");
    printf ("6. Feedback \n");
    printf ("7. Exit \n");
}
