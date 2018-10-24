#include <iostream>
#include <string>
using namespace std;

const string PALAVRA_SECRETA = "MELANCIA"; 

bool letra_existe(char chute){
    for(char letra : PALAVRA_SECRETA){
        if(chute == letra){
            return true;
        }
    }
    return false;
}

int main () {
    cout << PALAVRA_SECRETA << endl;

    bool nao_acertou = true;
    bool nao_enforcou = true;

    while(nao_acertou && nao_enforcou){
        char chute;
        cin >> chute;

        if(letra_existe(chute)){
            cout << "Você acertou! Seu chute está na palavra." << endl;
        }
        else{
            cout << "Você errou! Seu chute não está na palavra." << endl;
        }
    }
}