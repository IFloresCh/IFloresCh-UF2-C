struct biblio{
    char titulo[100];
    char autor[100];
    char editorial[100];
    int data;
};

struct disponibles{
    int disp;
    char usuario_p[50];
    int dias_p;
    struct biblio biblioteca;
};

int validate();
void modifyData(struct biblio *, int);
void printData(struct biblio *, int);




