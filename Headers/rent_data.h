#ifndef RENT_DATA_H
#define RENT_DATA_H

    struct rent_data{
        int book_id;
        int user_CPF;

    };

    struct rent_data aluguel[20];
    void rent();
    int check_rent_status();

#endif // RENT_DATA_H



