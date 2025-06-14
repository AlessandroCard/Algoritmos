#ifndef Q2CPP_H
#define Q2CPP_H

#include <string>
#define MAX 10

typedef struct
{
    int id, ch;
    float sal;
    std::string nome, nasc;

} funcionario;

class list
{
    private:
        int n;
        funcionario *listaord;
    
    public:
        list();
        list(funcionario novo);
        bool inserir(funcionario contratado);
        int busca(int id, int ini, int fim);
        bool remover(int demitido);
        bool aumento(int sortudo, float mais_sal);
};

int binsearch(funcionario *list, int value, int ini, int fim);

#endif