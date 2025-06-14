#ifndef Q1_H
#define Q1_H

#define MAX 10

#include <string>

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
    funcionario *lista;

public:
    bool inserir(funcionario novo);
    list();
    list(funcionario novo);
    ~list();
    int busca(int id_procurado);
    bool remover(int id_demitido);
    bool aumento(int id_aumento, float aumento);
    bool pagamento(int id_pago);
};

#endif