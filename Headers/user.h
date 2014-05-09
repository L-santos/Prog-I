#ifndef USER_H
#define USER_H

#define USER_LIM(ARGS) ARGS;
    struct user{
        int CPF;
        char nome[20];
        int tel;
    };

    struct user usuario[30];

    //int MAX;
    void initialize_user_list();
    int insert_user();
    int check_user(int CPF);
    void print_users();

#endif

