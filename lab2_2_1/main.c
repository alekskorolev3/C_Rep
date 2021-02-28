#include <stdio.h>
void PrintMenu ()
{
    printf ("1. Заказ картофеля");
    printf ("2. Заказ моркови");
    printf ("3. Заказ свеклы");
    printf ("4. Посмотреть корзину");
    printf ("5. Расчет стоимости заказа");
    printf ("6. Обратная связь");
    printf ("7. Выход");
}
int main() {

    int choice = 0;
    do{

        PrintMenu();
        scanf ("%d", choice);
    }
    while (choice != 7);
}
