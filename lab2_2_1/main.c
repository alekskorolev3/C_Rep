#include <stdio.h>
#include <locale.h>
int PotatoValue = 0;
int CarrotValue = 0;
int BeetValue = 0;
const int PotatoPrice = 500;
const int CarrotPrice = 1000;
const int BeetPrice = 700;

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
int main() {

    int choice = 0;
    while (choice != 7)
    {
        PrintMenu();
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf ("Enter how many kilograms of potatoes you want to add to the cart ");
            int value;
            scanf ("%d", &value);
            PotatoValue += value;


        }
        if (choice == 2)
        {
            printf ("Enter how many kilograms of carrot you want to add to the cart ");
            int value;
            scanf ("%d", &value);
            CarrotValue += value;

        }
        if (choice == 3)
        {
            printf ("Enter how many kilograms of beet you want to add to the cart ");
            int value;
            scanf ("%d", &value);
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

        }

    }
}
