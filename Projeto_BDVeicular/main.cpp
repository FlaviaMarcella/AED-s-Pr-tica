/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: fl-via-gon-alves
 *
 * Created on 6 de maio de 2024, 16:23
 * 
 * modelo, marca, tipo, ano, quilometragem, potência do motor, combustível, câmbio, direção, cor, portas, placa e valor do veículo
 * 
 *
 * 🚗🔍 Inclusão de um novo veículo na base de dados;
 * 🔍 Busca de um veículo pela placa*, 
 *      com opção de exclusão da base de dados;
🔎 * 🔍 Busca de veículos pelo tipo*;
 * 🔍 Busca de veículos pelo câmbio*;
 * 🔍 Busca de veículos por faixa de valores*;
 *
 * 📊 Relatório do banco de dados:
 *  - Percentagens de veículos nas categorias de tipo;
 *  - Percentagens de veículos pelo combustível;
 *  - Placa e valor do veículo mais barato entre os veículos com potência do motor 1.0, 
 *      e ainda, valor da prestação do financiamento em 60 meses com taxa de juros atuais (consulte na internet);
 *  - Placa e valor do veículo mais caro com direção hidráulica e câmbio automático, 
 *      e ainda, valor do seguro estimado (porcentagem estimada sobre o valor do veículo);
 *  - Quantidade e média de quilometragem dos veículos com 5 anos ou mais (2019).
 * 
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <cstring>
#include <string>
#include <array>
#include <list>
#include <vector>
#include <complex>

using namespace std;

/*
 * 
 */

typedef struct {
    string modelo;
    string marca;
    string tipo;
    int ano;
    double km;
    string potencia;
    string combustivel;
    string cambio;
    string direcao;
    string cor;
    int portas;
    string placa;
    double valor;
    bool status = false;
} Veiculo;

typedef struct {
    string tipo;
    double qtd;
    double percent;
} Tipo;

const int TAM = 100;

int main(int argc, char** argv) {

    Veiculo base[TAM];
    Tipo tipo[15];
    Tipo combustivel[15];
    Tipo cambio[2];
    Tipo direcao[5];

    int i = 0; //total de veiculos, incluso os "removidos"
    int x = 0; //total de veiculos válidos
    int opc, resposta, pos_cont, entrada;
    string aux;
    bool verd = true;
    double d1 = 0.0, d2 = 0.0, jm = 1.63;

    //Leitura dos dados

    ifstream arquivo("BD_veiculos.txt");

    if (!arquivo.is_open()) {
        cout << "Erro: arquivo não existe" << endl;
        return 1;
    }

    arquivo >> aux;

    while (aux != "Fim" && i < TAM) {
        base[i].modelo = aux; //

        arquivo >> base[i].marca;
        arquivo >> base[i].tipo;
        arquivo >> base[i].ano;
        arquivo >> base[i].km;
        arquivo >> base[i].potencia;
        arquivo >> base[i].combustivel;
        arquivo >> base[i].cambio;
        arquivo >> base[i].direcao;
        arquivo >> base[i].cor;
        arquivo >> base[i].portas;
        arquivo >> base[i].placa;
        arquivo >> base[i].valor;

        base[i].status = true;

        i++;
        x++;

        arquivo >> aux;

    }

    arquivo.close();

    //Tipo
    for (int b = 0, k = 0, j = 0; b < i; b++) {

        for (k = 0; k < j; k++) {

            if (base[k].status == 1 && tipo[k].tipo == base[b].tipo) {
                tipo[k].qtd += 1;
                break;
            }

        }

        // Se não existe, adiciona ao tipo[]
        if (base[b].status == 1 && k == j) {
            tipo[j].tipo = base[b].tipo;
            tipo[j].qtd += 1;
            j++;
        }

    }
    //Gasolina
    for (int b = 0, k = 0, j = 0; b < i; b++) {

        for (k = 0; k < j; k++) {
            if (base[k].status == 1 && combustivel[k].tipo == base[b].combustivel) {
                combustivel[k].qtd += 1;
                break;
            }

        }

        // Se não existe, adiciona ao tipo[]
        if (base[b].status == 1 && k == j) {
            combustivel[j].tipo = base[b].combustivel;
            combustivel[j].qtd += 1;
            j++;
        }

    }
    //Cambio
    for (int b = 0, k = 0, j = 0; b < i; b++) {

        for (k = 0; k < j; k++) {
            if (base[k].status == 1 && cambio[k].tipo == base[b].cambio) {
                break;
            }

        }

        // Se não existe, adiciona ao tipo[]
        if (base[b].status == 1 && k == j) {
            cambio[j].tipo = base[b].cambio;
            j++;
        }

    }
    //Direção
    for (int b = 0, k = 0, j = 0; b < i; b++) {

        for (k = 0; k < j; k++) {
            if (base[k].status == 1 && direcao[k].tipo == base[b].direcao) {
                break;
            }

        }

        // Se não existe, adiciona ao tipo[]
        if (base[b].status == 1 && k == j) {
            direcao[j].tipo = base[b].direcao;
            j++;
        }

    }

    do {
        cout << "\n\n\t exib:1 - crud:2 - busca:3 - relat:4 - sair:0";
        cout << "\n\t Opção: ";
        cin >> opc;
        switch (opc) {

            case 1:

                // Exibição da lista

                for (int k = 0, l = 0; k < i; k++, l++) {

                    if (base[k].status == 1) {

                        cout << "\n\t (" << l << ")----------------------------" << endl;
                        cout << "\t Modelo: " << base[k].modelo << endl;
                        cout << "\t Marca: " << base[k].marca << endl;
                        cout << "\t Ano: " << base[k].ano << endl;
                        cout << "\t Tipo: " << base[k].tipo << endl;
                        cout << "\t Câmbio: " << base[k].cambio << endl;
                        cout << "\t N° Portas: " << base[k].portas << endl;
                        cout << "\t Cor: " << base[k].cor << endl;
                        cout << "\t Combustível: " << base[k].combustivel << endl;
                        cout << "\t Direção: " << base[k].direcao << endl;
                        cout << "\t Potência: " << base[k].potencia << endl;
                        cout << "\t Km's: " << base[k].km << endl;
                        cout << "\t Placa: " << base[k].placa << endl;
                        cout << "\t Valor(R$): " << base[k].valor << endl;
                    } else if (base[k].status == 0) {
                        l--;
                    }

                }

                break;

            case 2:

                int crud_opc;

                //inserir veiculo

                cout << "\n\t Inserir - 1 | Deletar - 2 \n\t || ";
                cin >> crud_opc;

                do {
                    switch (crud_opc) {
                        case 0:
                            cout << "\n\t Opção selecionada: Voltar" << endl;
                            break;
                        case 1:

                            do {
                                cout << "\n\t (Inserir veículo)----------------";

                                for (int k = 0; k < TAM; k++) {
                                    if (base[k].status == 0) {
                                        pos_cont = k;
                                        break;
                                    }
                                }
                                cout << "\n\t Modelo: \n\t || ";
                                cin >> base[pos_cont].modelo;
                                cout << "\n\t Marca: \n\t || ";
                                cin >> base[pos_cont].marca;

                                cout << "\n\t Tipo: " << endl;

                                for (int t = 0; tipo[t].tipo != ""; t++) {
                                    cout << "\t - " << tipo[t].tipo << ": " << t + 1;

                                    if (t % 2 != 0) {
                                        cout << "\n";
                                    }

                                }
                                cout << "\n\t || ";
                                cin >> resposta;
                                base[pos_cont].tipo = tipo[resposta - 1].tipo;
                                tipo[resposta - 1].qtd++;

                                cout << "\n\t Ano: \n\t || ";
                                cin >> base[pos_cont].ano;
                                cout << "\n\t Km's rodados: \n\t || ";
                                cin >> base[pos_cont].km;
                                cout << "\n\t Potência(x.x): \n\t || ";
                                cin >> base[pos_cont].potencia;

                                cout << "\n\t Combustível: " << endl;

                                for (int t = 0; combustivel[t].tipo != ""; t++) {
                                    cout << "\t - " << combustivel[t].tipo << ": " << t + 1;

                                    if (t % 2 != 0) {
                                        cout << "\n";
                                    }

                                }
                                cout << "\n\t || ";
                                cin >> resposta;
                                base[pos_cont].combustivel = combustivel[resposta - 1].tipo;
                                combustivel[resposta - 1].qtd++;

                                cout << "\n\t Câmbio: " << endl;

                                //for (int c = 0; cambio[c].tipo != ""; c++) {
                                for (int c = 0; c < 2; c++) {
                                    cout << "\t - " << cambio[c].tipo << ": " << c + 1;
                                }
                                cout << "\n\t || ";
                                cin >> resposta;
                                base[pos_cont].cambio = cambio[resposta - 1].tipo;

                                cout << "\n\t Direção: " << endl;

                                for (int d = 0; direcao[d].tipo != ""; d++) {
                                    cout << "\t - " << direcao[d].tipo << ": " << d + 1;
                                }
                                cout << "\n\t || ";
                                cin >> resposta;
                                base[pos_cont].direcao = direcao[resposta - 1].tipo;

                                cout << "\n\t Cor: \n\t || ";
                                cin >> base[pos_cont].cor;
                                cout << "\n\t N° Portas: \n\t || ";
                                cin >> base[pos_cont].portas;
                                cout << "\n\t Placa: \n\t || ";
                                cin >> base[pos_cont].placa;
                                cout << "\n\t Valor(R$): \n\t || R$";
                                cin >> base[pos_cont].valor;

                                base[pos_cont].status = 1;
                                i++;
                                x++;
                                
                                cout << "\n\t Veículo inserido, com sucesso!";
                                cout << "\n\t Deseja inserir outro?";
                                cout << "\n\t 1 - Sim   | 2 - Não \n\t || ";
                                cin >> entrada;
                                
                            } while (entrada != 0);
                            break;
                        case 2:
                            break;
                        default:
                            cout << "\n\t Opção selecionada inválida" << endl;

                    }
                } while (crud_opc != 0);

                //deletar veiculo

                break;

            case 3:
                do {

                    string resp;
                    int exc;

                    cout << "\n\t ----------------------------------";
                    cout << "\n\t Busca de veículos..." << endl;
                    cout << "\n\t Insira a opção de busca desejada:";
                    cout << "\n\t 1 - Placa";
                    cout << "\t | 2 - Tipo" << endl;
                    cout << "\t 3 - Câmbio";
                    cout << "\t | 4 - Valor(R$)";

                    cout << "\n\n\t 0 - Voltar" << endl << "\n\t || ";
                    cin >> entrada;

                    switch (entrada) {
                        case 0:
                            cout << "\n\t Opção selecionada: Voltar" << endl;
                            break;

                        case 1:

                            cout << "\n\t Qual placa você está buscando? " << endl << "\n\t || ";
                            cin >> resp;

                            for (int b = 0; b < i; b++) {

                                if (resp == base[b].placa) {
                                    pos_cont = b;
                                    b = i;
                                }

                            }

                            if (base[pos_cont].status == 1 && pos_cont < TAM) {

                                cout << "\n\t Véiculo encontrado!";
                                cout << "\n\t (" << pos_cont << ")----------------------------" << endl;
                                cout << "\t Modelo: " << base[pos_cont].modelo << endl;
                                cout << "\t Marca: " << base[pos_cont].marca << endl;
                                cout << "\t Ano: " << base[pos_cont].ano << endl;
                                cout << "\t Tipo: " << base[pos_cont].tipo << endl;
                                cout << "\t Câmbio: " << base[pos_cont].cambio << endl;
                                cout << "\t N° Portas: " << base[pos_cont].portas << endl;
                                cout << "\t Cor: " << base[pos_cont].cor << endl;
                                cout << "\t Combustível: " << base[pos_cont].combustivel << endl;
                                cout << "\t Direção: " << base[pos_cont].direcao << endl;
                                cout << "\t Potência: " << base[pos_cont].potencia << endl;
                                cout << "\t Km's: " << base[pos_cont].km << endl;
                                cout << "\t Placa: " << base[pos_cont].placa << endl;
                                cout << "\t Valor(R$): " << base[pos_cont].valor << endl;

                                cout << "\n\t Deseja excluir o veículo? " << endl;
                                cout << "\n\t - Sim: 0 \t - Não: 1" << endl << "\n\t || ";

                                cin >> exc;

                                if (exc == 0) {
                                    base[pos_cont].status = 0;
                                    x--;
                                    
                                    for(int k; tipo[k].tipo == "";k++){
                                    
                                        if(base[pos_cont].tipo == tipo[k].tipo){
                                            tipo[k].qtd--;
                                        }
                                    
                                    }
                                    for(int k; combustivel[k].tipo == "";k++){
                                    
                                        if(base[pos_cont].combustivel == combustivel[k].tipo){
                                            combustivel[k].qtd--;
                                        }
                                    
                                    }
                                    
                                    cout << "\n\t Veículo excluído da base de dados!";
                                }
                            } else if (base[pos_cont].status == 0) {
                                cout << "\n\t Véiculo não encontrado na base!";
                            }


                            break;

                        case 2:

                            cout << "\n\t Por qual tipo, você está procurando? \n" << endl;

                            for (int t = 0; tipo[t].tipo != ""; t++) {
                                cout << "\t - " << tipo[t].tipo << ": " << t + 1;

                                if (t % 2 != 0) {
                                    cout << "\n";
                                }

                            }

                            cout << "\n\n\t - Voltar: 0 \n\n\t ||";
                            cin >> resposta;

                            //busca/exibe carros por tipo
                            for (int b = 0, cont = 0; b < i; b++) {

                                if (tipo[resposta - 1].tipo != base[b].tipo) {
                                    verd = false;
                                } else {
                                    cont++;
                                    if (cont == 1)cout << "\n\t Véiculo(s) encontrado!" << endl;
                                    verd = true;
                                }

                                if (base[b].status == 1) {
                                    if (verd == true) {
                                        cout << "\n\t (" << b << ")----------------------------" << endl;
                                        cout << "\t Modelo: " << base[b].modelo << endl;
                                        cout << "\t Marca: " << base[b].marca << endl;
                                        cout << "\t Ano: " << base[b].ano << endl;
                                        cout << "\t Tipo: " << base[b].tipo << endl;
                                        cout << "\t Câmbio: " << base[b].cambio << endl;
                                        cout << "\t N° Portas: " << base[b].portas << endl;
                                        cout << "\t Cor: " << base[b].cor << endl;
                                        cout << "\t Combustível: " << base[b].combustivel << endl;
                                        cout << "\t Direção: " << base[b].direcao << endl;
                                        cout << "\t Potência: " << base[b].potencia << endl;
                                        cout << "\t Km's: " << base[b].km << endl;
                                        cout << "\t Placa: " << base[b].placa << endl;
                                        cout << "\t Valor(R$): " << base[b].valor << endl;
                                    }
                                }

                            }

                            break;

                        case 3:

                            cout << "\n\t Por qual cambio, você está procurando? \n" << endl;

                            //for (int c = 0; cambio[c].tipo != ""; c++) {
                            for (int c = 0; c < 2; c++) {
                                cout << "\t - " << cambio[c].tipo << ": " << c + 1;
                            }

                            cout << "\n\n\t - Voltar: 0" << endl;
                            cout << "\n\t ||";
                            cin >> resposta;

                            //busca/exibe carros por cambio
                            for (int b = 0, cont = 0; b < i; b++) {

                                if (cambio[resposta - 1].tipo != base[b].cambio) {
                                    verd = false;
                                } else {
                                    cont++;
                                    if (cont == 1)cout << "\n\t Véiculo(s) encontrado!" << endl;
                                    verd = true;
                                }

                                if (base[pos_cont].status == 1) {
                                    if (verd == true) {
                                        cout << "\n\t (" << b << ")----------------------------" << endl;
                                        cout << "\t Modelo: " << base[b].modelo << endl;
                                        cout << "\t Marca: " << base[b].marca << endl;
                                        cout << "\t Ano: " << base[b].ano << endl;
                                        cout << "\t Tipo: " << base[b].tipo << endl;
                                        cout << "\t Câmbio: " << base[b].cambio << endl;
                                        cout << "\t N° Portas: " << base[b].portas << endl;
                                        cout << "\t Cor: " << base[b].cor << endl;
                                        cout << "\t Combustível: " << base[b].combustivel << endl;
                                        cout << "\t Direção: " << base[b].direcao << endl;
                                        cout << "\t Potência: " << base[b].potencia << endl;
                                        cout << "\t Km's: " << base[b].km << endl;
                                        cout << "\t Placa: " << base[b].placa << endl;
                                        cout << "\t Valor(R$): " << base[b].valor << endl;
                                    }
                                }

                            }

                            break;

                        case 4:

                            cout << "\n\t Busca de veículos, por valores...";
                            cout << "\n\t Valor minimo: R$";
                            cin >> d1;
                            cout << "\n\t Valor máximo: R$";
                            cin >> d2;

                            //busca/exibe carros pela faixa de valores
                            for (int b = 0; b < i; b++) {

                                if (base[b].status == 1 && base[b].valor >= d1 && base[b].valor <= d2) {
                                    cout << "\n\t (" << b << ")----------------------------" << endl;
                                    cout << "\t Modelo: " << base[b].modelo << endl;
                                    cout << "\t Marca: " << base[b].marca << endl;
                                    cout << "\t Ano: " << base[b].ano << endl;
                                    cout << "\t Tipo: " << base[b].tipo << endl;
                                    cout << "\t Câmbio: " << base[b].cambio << endl;
                                    cout << "\t N° Portas: " << base[b].portas << endl;
                                    cout << "\t Cor: " << base[b].cor << endl;
                                    cout << "\t Combustível: " << base[b].combustivel << endl;
                                    cout << "\t Direção: " << base[b].direcao << endl;
                                    cout << "\t Potência: " << base[b].potencia << endl;
                                    cout << "\t Km's: " << base[b].km << endl;
                                    cout << "\t Placa: " << base[b].placa << endl;
                                    cout << "\t Valor(R$): " << base[b].valor << endl;

                                }

                            }

                            break;

                        default:
                            cout << "\n\t Opção selecionada inválida" << endl;
                            break;

                    }


                } while (entrada != 0);

                break;

            case 4:

                cout << "\n\n\t (Categoria)-----";

                for (int k = 0; tipo[k].tipo != ""; k++) {
                    tipo[k].percent = (tipo[k].qtd / x)*100;
                    cout << "\n\t " << tipo[k].tipo << ": " << tipo[k].percent << "%";
                }

                cout << "\n\n\t (Combustível)-----";

                for (int k = 0; combustivel[k].tipo != ""; k++) {
                    combustivel[k].percent = (combustivel[k].qtd / x)*100;
                    cout << "\n\t " << combustivel[k].tipo << ": " << combustivel[k].percent << "%";
                }

                //Carro mais barato com motor 1.0

                //achando o primeiro valor que atende as condições
                for (int k = 0; base[k].modelo != ""; k++) {
                    if (base[k].status == 1 && base[k].potencia == "1.0") {
                        d1 = base[k].valor;
                        d2 = base[k].valor;
                        pos_cont = k;
                        break;
                    }
                }

                //comparando os valores
                for (int k = 0; base[k].modelo != ""; k++) {
                    if (base[k].status == 1 && base[k].potencia == "1.0") {
                        d2 = base[k].valor;

                        if (d2 < d1) {
                            d1 = d2;
                            pos_cont = k;
                        }

                    }
                }

                cout << endl << "\n\t Veículo mais barato, com motor 1.0 ";

                cout << "\n\t (" << pos_cont << ")------------------------------" << endl;
                cout << "\t Modelo: " << base[pos_cont].modelo << endl;
                cout << "\t Potência: " << base[pos_cont].potencia << endl;
                cout << "\t Placa: " << base[pos_cont].placa << endl;
                cout << "\t Valor(R$): " << base[pos_cont].valor << endl;

                d1 = 0;
                d1 = (base[pos_cont].valor * (jm / 100)) / (1 - pow((1 + (jm / 100)), -60));
                cout << "\n\t Parcela mensal, do financiamento com\n\t prazo de 60 meses: R$" << d1 << endl;

                //Carro mais caro c/hidraulica e automatico

                //achando o primeiro valor que atende as condições: hidraulico/automático
                for (int k = 0; base[k].modelo != ""; k++) {
                    if (base[k].status == 1 && base[k].direcao == "Hidráulica" && base[k].cambio == "Automático") {
                        d1 = base[k].valor;
                        d2 = base[k].valor;
                        pos_cont = k;
                        break;
                    }
                }

                //comparando os valores
                for (int k = 0; base[k].modelo != ""; k++) {
                    if (base[k].status == 1 && base[k].direcao == "Hidráulica" && base[k].cambio == "Automático") {
                        d2 = base[k].valor;

                        if (d2 > d1) {
                            d1 = d2;
                            pos_cont = k;
                        }

                    }
                }

                cout << endl << "\t Veículo mais caro, com: \n\t - Direção Hidrálica \n\t - Câmbio Automático ";

                cout << "\n\t (" << pos_cont << ")------------------------------" << endl;
                cout << "\t Modelo: " << base[pos_cont].modelo << endl;
                cout << "\t Potência: " << base[pos_cont].potencia << endl;
                cout << "\t Placa: " << base[pos_cont].placa << endl;
                cout << "\t Valor(R$): " << base[pos_cont].valor << endl;

                d2 = 2023 - base[pos_cont].ano;

                if (d2 >= 0 && d2 <= 2) {

                    d1 = base[pos_cont].valor * 0.054;

                } else if (d2 >= 3 && d2 <= 5) {

                    d1 = base[pos_cont].valor * 0.065;

                } else if (d2 >= 6 && d2 <= 10) {

                    d1 = base[pos_cont].valor * 0.086;

                } else {
                    cout << "\n\t Taxa não cadastrada, para o ano do seu veículo!";
                }

                cout << "\n\t O valor estimado do seguro, sob o \n\t valor do veículo é R$" << d1 << endl;

                pos_cont = 0;
                d1 = 0;

                for (int k = 0; base[k].modelo != ""; k++) {
                    if (base[k].status == 1 && base[k].ano <= 2019) {
                        d1 += base[k].km;
                        pos_cont++;
                    }
                }

                d1 /= pos_cont;
                cout << "\n\t Foram encontrados " << pos_cont << " veículos, com: \n\t - Ano de fabricação igual\n\t\t ou inferior à 2019";
                cout << "\n\t Média de Km's dos veiculos: " << d1 << "km";
                break;

            case 0:

                //atualiza BD

                ofstream arquivo_saida("BD_veiculos.txt");

                for (int k = 0; base[k].status == 1 && k <= TAM; k++) {

                    arquivo_saida << base[k].modelo << " ";
                    arquivo_saida << base[k].marca << " ";
                    arquivo_saida << base[k].tipo << " ";
                    arquivo_saida << base[k].ano << " ";
                    arquivo_saida << base[k].km << " ";
                    arquivo_saida << base[k].potencia << " ";
                    arquivo_saida << base[k].combustivel << " ";
                    arquivo_saida << base[k].cambio << " ";
                    arquivo_saida << base[k].direcao << " ";
                    arquivo_saida << base[k].cor << " ";
                    arquivo_saida << base[k].portas << " ";
                    arquivo_saida << base[k].placa << " ";
                    arquivo_saida << base[k].valor << endl;
                }
                arquivo_saida << "Fim";
                arquivo_saida.close();

                break;

        }
    } while (opc != 0);
    return 0;
}

