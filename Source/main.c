#include "user.h"
#include "booking.h"
#include "rent_data.h"
#include "book_data.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_avancado();

int main()
{
    initialize_user_list();
    initialize_book_list();
    int count, op = 1;
    while(op)
    {
        printf("\nMENU\n1.Inserir Usuario\n2.Inserir Livro\n3.Mostrar Usuario\n4.Mostrar Livros\nA5.Alugar\n6.Avancado");
        scanf("%i", &op);
        switch (op)
        {
        case 1:
            insert_user();
            break;
        case 2:
            //print_users();
            break;
        case 3:
            print_users();
            break;
        case 4:
            print_books();
            break;
        case 5:
            rent();
        case 6:
            print_avancado();
        default:
            break;
        }
    }

    return 0;
}
void print_avancado(){
    int count;
    system("cls");
    printf("=======Imprimir usuarios=======\n\n");
    for(count = 0; count < 5; count++){
        printf("%i", count);

    }



}
