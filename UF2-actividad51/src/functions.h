struct biblio{
    char titulo[50];
    char autor[50];
    char editorial[50];
    int date;
};

struct disponibles{
    int disp;
    char usuario_p[50];
    int dias_p;
    struct biblio biblioteca;
};

int validate();
void modifyData(struct disponibles *, int);
void printData(struct disponibles *, int);




