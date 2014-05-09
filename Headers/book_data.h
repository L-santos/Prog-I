#ifndef BOOK_DATA_H
#define BOOK_DATA_H

    struct book_data{
        int id;
        char desc;
        float valor;

    };

    struct book_data livro[50];
    void initialize_book_list();
    int check_book();

#endif // bpp


