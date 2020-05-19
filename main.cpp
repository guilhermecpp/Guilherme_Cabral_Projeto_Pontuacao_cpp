#include <bits/stdc++.h>
using namespace std;

int main()
{
    int qtd_compras;
    double ticket_medio;

    int atrasos;
    char forma_pagamento;

    int score_volume_de_compras;
    double volume_de_compras;

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

    volume_de_compras = qtd_compras * ticket_medio;

    if(qtd_compras == 0)
    {
        score_volume_de_compras = 0;
    }else
    {
        if(volume_de_compras <= 3000.0)
        {
            if(qtd_compras <= 2)
            {
                score_volume_de_compras = 20;
            }else
            {
                score_volume_de_compras = 40;
            }
        }else
        {
            score_volume_de_compras = 60;
        }
    }

    cout << "Score de volume de compras = " << score_volume_de_compras << " pontos" << endl;
    cout << endl;

    return 0;
}
