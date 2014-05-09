#ifndef BOOKING_H
#define BOOKING_H

    struct booking{
        int book_id;
        int user_CPF;
        int data;

    };

    struct booking reserva[20];
    void check_book_status(int ID);

#endif // BOOKING_H


