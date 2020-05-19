#include <bits/stdc++.h>
using namespace std;

int main()
{
    int qtd_compras;
    double ticket_medio;

    int atrasos;
    char forma_pagamento;

    cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "--------------------------------" << endl;
    cout << "INFORME OS DADOS DO ULTIMO ANO" << endl;
    cout << endl;

    cout << "Quantas compras o cliente fez no ultimo ano? ";
    cin >> qtd_compras;
    cout << "Qual o ticket medio? ";
    cin >> ticket_medio;
    cout << endl;

    cout << "Quantas vezes o cliente atrasou o pagamento? ";
    cin >> atrasos;
    cout << "A maioria das compras foi em dinheiro, cartao, ou boleto (D/C/B)? ";
    cin >> forma_pagamento;
    cout << endl;

    return 0;
}
