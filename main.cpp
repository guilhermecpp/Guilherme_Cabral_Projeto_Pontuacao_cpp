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

    int score_inadimplencia;
    int score_forma_de_pagamento;

    int score_final;

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

    if(qtd_compras == 0)
    {
        score_inadimplencia = 0;
    }else
    {
        if(atrasos == 0)
        {
            score_inadimplencia = 30;
        }else if(atrasos == 1)
        {
            score_inadimplencia = 15;
        }else
        {
            score_inadimplencia = 0;
        }
    }

    if(qtd_compras == 0)
    {
        score_forma_de_pagamento = 0;
    }else
    {
        if(forma_pagamento == 'D')
        {
            score_forma_de_pagamento = 5;
        }else
        {
            score_forma_de_pagamento = 10;
        }
    }

    cout << "Score de inadimplencia = " << score_inadimplencia << " pontos" << endl;
    cout << "Score de forma de pagamento = " << score_forma_de_pagamento << " pontos" << endl;
    cout << endl;

    score_final = score_volume_de_compras + score_inadimplencia + score_forma_de_pagamento;

    cout << "Classificacao final = CLIENTE ";


    if(score_final <= 25)
    {
        cout << "BRONZE" << endl;
    }else if(score_final <= 75)
    {
        cout << "PRATA" << endl;
    }else
    {
        cout << "OURO" << endl;
    }

    cout << endl;

    return 0;
}
