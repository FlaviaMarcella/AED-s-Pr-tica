/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: fl-via-gon-alves
 *
 * Created on 29 de abril de 2024, 16:17
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

/*
 * 
 */

const int TAM = 100;

typedef struct {
    string nome;
    string celular;
    string cidade;
    string email;
    bool status = true;
} Pessoa;

std::string rem_espaco(std::string palavra) {

    int tam = palavra.length();

    for (int i = 0; i < tam; i++) {

        if (palavra[i] == ' ') {
            palavra[i] = '_';
        }

    }


    return palavra;

}

std::string exib_lista(int qtd, Pessoa* agenda) {

    std::string lista;

    for (int i = 0; i < qtd; i++) {

        if (agenda[i].status == false) {
            i++;
        }

        lista += "\n\t (" + std::to_string(i) + ")-------------------------------" + "\n\t Nome: " + agenda[i].nome + "\n\t Celular: " + agenda[i].celular + "\n\t Cidade: " + agenda[i].cidade + "\n\t Email: " + agenda[i].email + "\n\t Status: " + std::to_string(agenda[i].status) + "\n\t -------------------------------";

    }

    return lista;

}

int main(int argc, char** argv) {

    Pessoa agenda[TAM];
    int i, qtd, opcao, cod, alterar, codalt, x;
    std::string nome, cidade, pesq;
    std::string lista = "";
    string pesqui = "";

    i = 0;
    qtd = 0;
    cod = 0;
    alterar = 0;
    codalt = 0;

    ifstream arquivo("registros.txt");

    if (!arquivo.is_open()) {
        cout << "Erro: arquivo não existe" << endl;
        return 1;
    }

    arquivo >> agenda[i].nome;


    do {
        arquivo >> agenda[i].celular;
        arquivo >> agenda[i].cidade;
        arquivo >> agenda[i].email;
        arquivo >> agenda[i].status;

        i++;
        qtd++;

        arquivo >> agenda[i].nome;

    } while (agenda[i].nome != "Fim");

    arquivo.close();

    cout << "\t -------------------------------" << endl;
    cout << "\t Há " << qtd << " amigos na sua agenda!" << endl;
    cout << "\t -------------------------------" << endl;

    lista = exib_lista(qtd, agenda);
    cout << lista;

    cout << "\n\n\t ------------------------------" << endl;
    cout << "\t Menu de Opções" << endl;
    cout << "\t ------------------------------" << endl;
    cout << "\t Inserir contato -  1" << endl;
    cout << "\t Deletar contato -  2" << endl;
    cout << "\t Alterar contato -  3" << endl;
    cout << "\t Exibir contato  -  4" << endl;
    cout << "\t Pesquisar       -  5" << endl;
    cout << "\t Sair - 0" << endl;
    cout << "\t ------------------------------" << endl;


    do {
        cout << "\n\t Insira sua opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:

                qtd++;

                cout << "\n\t Dados: " << endl;

                cout << "\t Nome: ";
                std::getline(std::cin >> std::ws, nome);

                agenda[i].nome = rem_espaco(nome);

                cout << "\t Celular: ";
                cin >> agenda[i].celular;

                cout << "\t Cidade: ";
                std::getline(std::cin >> std::ws, cidade);
                agenda[i].cidade = rem_espaco(cidade);

                cout << "\t Email: ";
                cin >> agenda[i].email;

                i++;

                cout << "\n\n\t Agenda atualizada!" << endl;

                lista = exib_lista(qtd, agenda);
                cout << lista;

                break;

            case 2:

                cout << "\t ------------------------------- \n " << endl;
                cout << "\t Insira o código do seu amigo: ";
                cin >> cod;

                cout << "\t Deletando contato..." << endl;

                agenda[cod].status = false;

                qtd--;

                lista = exib_lista(qtd, agenda);
                cout << lista;

                break;

            case 3:

                //cout << "Oque você deseja alterar?";

                lista = exib_lista(qtd, agenda);


                cout << "\n\t Insira o código do seu contato: ";
                cin >> codalt;

                cout << "\n\n\t Contato selecionado: ";
                cout << "\n\t --------------------";
                cout << "\n\t Nome: " << agenda[codalt].nome;
                cout << "\n\t Celular: " << agenda[codalt].celular;
                cout << "\n\t Cidade: " << agenda[codalt].cidade;
                cout << "\n\t Email: " << agenda[codalt].email;
                cout << "\n\t --------------------";

                cout << "\n\n\t ------------------------------" << endl;
                cout << "\t Oque você deseja alterar?" << endl;
                cout << "\t ------------------------------" << endl;
                cout << "\t Nome -  1" << endl;
                cout << "\t Celular -  2" << endl;
                cout << "\t Cidade -  3" << endl;
                cout << "\t Email  -  4" << endl;
                cout << "\t Sair - 0" << endl;
                cout << "\t ------------------------------" << endl;

                do {

                    cout << "\n\t Opção desejada: ";
                    cin >> alterar;

                    switch (alterar) {

                        case 1:

                            cout << "\n\t Novo nome: ";
                            cin >> agenda[codalt].nome;

                            break;
                        case 2:

                            cout << "\n\t Novo celular: ";
                            cin >> agenda[codalt].celular;

                            break;
                        case 3:

                            cout << "\n\t Nova localização: ";
                            cin >> agenda[codalt].cidade;

                            break;
                        case 4:

                            cout << "\n\t Novo email: ";
                            cin >> agenda[codalt].email;

                            break;

                    }

                } while (alterar != 0);

                cout << "\n\t Contato atualizado com sucesso!";


                break;

            case 4:

                lista = exib_lista(qtd, agenda);
                cout << lista;

                break;

            case 5:

                cout << "\n\t Qual contato você deseja pesquisar? ";
                cin >> pesqui;
                //std::getline(std::cin >> std::ws, pesq);

                x = 0;
                do {
                    
                    //cout << "\n\t Nome: " << agenda[x].nome;
                   
                    if (pesqui == agenda[x].nome) {

                        cout << "\n\t Contato encontrado!";

                        cout << "\n\n\t ("<< x <<")------------------------------" << endl;
                        cout << "\t Nome: " << agenda[x].nome << endl;
                        cout << "\t Celular: " << agenda[x].celular << endl;
                        cout << "\t Cidade: " << agenda[x].cidade << endl;
                        cout << "\t Email: " << agenda[x].email << endl;
                        cout << "\t ------------------------------" << endl;

                        x = qtd;

                    }

                    x++;
                } while (x < qtd);


                /*for(x = 0; x > qtd; x++){

                    if (pesq == agenda[x].nome) {

                        cout << "Contato encontrado!";

                        cout << "\t ------------------------------" << endl;
                        cout << "\t Nome: " << agenda[codalt].nome << endl;
                        cout << "\t Celular: " << agenda[codalt].celular << endl;
                        cout << "\t Cidade: " << agenda[codalt].cidade << endl;
                        cout << "\t Email: " << agenda[codalt].email << endl;
                        cout << "\t ------------------------------" << endl;
                        
                        x = qtd;

                    }

                }*/

                break;

            case 0:

                ofstream arquivo_saida("registros.txt");

                for (int i = 0; i <= qtd; i++) {
                    arquivo_saida << agenda[i].nome + " ";
                    arquivo_saida << agenda[i].celular + " ";
                    arquivo_saida << agenda[i].cidade + " ";
                    arquivo_saida << agenda[i].email + " ";
                    arquivo_saida << std::to_string(agenda[i].status) + " ";
                    arquivo_saida << "\n";
                }
                arquivo_saida << "Fim";
                arquivo_saida.close();

                break;
        }

    } while (opcao != 0);



    return 0;
}

