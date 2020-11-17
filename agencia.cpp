/*
Trabalho
Aluno: Bruno Enéas Costa
Matrícula: 201910013871.
*/
#include<iomanip>
#include<iostream>
#include <locale.h>
using namespace std;
string resposta = "";
double valorCarro, valorOriginal;
int opcao, contador, contadorAr, contadorIpi, contadorTrio, contadorDirecao, contadorCompleto;
//Função para mostrar apenas 2 casas decimais e armazenar o valor do automóvel
void varCar (){
cout << setprecision (2) << fixed << valorCarro<<"\n";
}
void linha(){
cout<<"____________________________________\n";
}
int main() {
//Setar a linguagem português
setlocale(LC_ALL, "Portuguese");
linha();
linha();
cout<<"### Bem vindo a Agencia ###\n";
cout<<" Cálculo de automóvel 0KM \n";
linha();
cout<<"Qual o valor do automóvel?: \n";
linha();
cout <<"(separe os centavos com . ponto)\n";
linha();
cout <<"R$ ";
cin >> valorCarro;
valorOriginal = valorCarro;
do {
/*Declaração das variáveis dentro da estrutura de repetição.
/ Requisitos do TRABALHO.
*/
double ipi = valorOriginal * 0.08; // IPI corresponde a 8% do valor do automovel.
double trio = valorOriginal * 0.02 + ipi; //2% do valor de fábrica com (+) IPI.
double ar = valorOriginal * 0.02; //2% do valor de fábrica sem IPI.
double direcao = valorOriginal * 0.02; //direção hidráulica: 2% do valor de fábrica do modelo(se
double completo = trio + ar + direcao;// variavel para calculo do automovel completo.
system("cls");
linha();
cout<<"A Agência conta com estas opções\n";
linha();
cout << " 1- Trio elétrico (+2% + 8% IPI)\n";
cout << " 2- Ar condicionado (+2% sem IPI)\n";
cout << " 3- Direção hidráulica (+2% sem IPI)\n";
cout << " 4- Completo (todos adicionais-3.5%)\n";
cout << " 0- Sem opcionais (Valor de fábrica)\n";linha();
cout << " Selecione uma opção: ";
cin >> opcao;
linha();
if(opcao!=1||opcao!=2||opcao!=3||opcao!=0)
{
cout<<"Digite uma opção válida!\n";
}
//Estrutura de repetição
switch (opcao) {
//TRIO ELÉTRICO.
case 1:
system("cls");
linha();
if (contadorCompleto > 0) {
cout << " Veículo completo já possui todos os opcionais \n";
}
else if (contadorTrio == 0) {
cout << " O valor do carro está em R$";
varCar();
valorCarro += trio;
cout << " Acréscimo de + R$" << trio << " com Trio \n";
linha();
cout << " Valor total com Trio é de R$ ";
varCar();
contadorTrio = contadorTrio + 1;
}
else {
cout << " O opcional com Trio Elétrico já foi adicionado \n";
}
break;
//AR CONDICIONADO.
case 2:
system("cls");
linha();
if (contadorCompleto > 0){
cout << " Veículo completo já possui todos os opcionais \n";
}
else if (contadorAr == 0){
cout << " O valor do carro está em R$";
varCar();
valorCarro += ar;
cout << " Acréscimo de + R$" << ar << " com ar \n";
linha();
cout << " Valor total com ar é de R$ ";
varCar();
contadorAr = contadorAr + 1;
}
else {
cout << " O opcicional com Ar Condicionado já foi adcionado \n";
}
break;
//DIRECAO HIDRAULICA
case 3:
system("cls");
linha();
if (contadorCompleto > 0){cout << " Veículo completo já possui todos os opcionais \n";
} else if (contadorDirecao == 0) {
cout << " O valor do carro está em R$";
varCar();
valorCarro += direcao;
cout << " Acréscimo de + R$" << direcao<<"\n";
linha();
cout << " Valor total com Direção é de R$ ";
varCar();
contadorDirecao = contadorDirecao + 1;
}
else {
cout << " O opcional com Direção já foi adicionado \n";
}
break;
//CARRO COMPLETO
case 4:
system("cls");
linha();
if (contadorCompleto > 0){
cout << " Veículo completo já possui todos os opicionais \n";
} else if (contadorCompleto == 0) {
cout << " O valor do carro é de: R$";
varCar();
valorCarro = valorOriginal + completo;
double desconto = valorCarro * 0.035;
valorCarro = valorCarro - desconto;
linha();
cout<<" Carro completo esta\n";
cout<<" com 3.5% de desconto \n";
linha();
cout << " A soma total é de: R$" << valorOriginal + completo <<"\n";
cout << " O desconto é de: R$" << desconto <<"\n";
linha();
cout << " O valor do carro completo é de R$ ";
varCar();
contadorCompleto = contadorCompleto + 1;
}
else {
cout << " O opcional com Direção já foi adicionado \n";
}
break;
case 0:
system("cls");
linha();
cout << " O valor do carro está em R$";
varCar();
valorCarro = valorOriginal;
contador = contador + 1;
cout<< " Valor sem opcionais : R$ " << valorCarro<<"\n";
cout<<" Carro sem opcionais volta ao valor de fábrica (sem IPI)\n";
}
cout << " Deseja acrescentar adicional? (s/n) : \n";
linha();
cin >> resposta;
system("cls");
}
while (resposta == "s"||resposta == "S");
if (resposta != "s") {if (contadorTrio != 0)
{
cout << contadorTrio << "x selecionada opção com Trio\n";
}
if (contadorAr != 0)
{
cout << contadorAr << "x selecionada opção com Ar\n";
}
if (contadorDirecao != 0)
{
cout << contadorDirecao << "x selecionada opção com Direção\n";
}
if (contadorCompleto != 0)
{cout << contadorCompleto << "x selecionada opção Completo\n";
}
if (contador != 0)
{
cout << contador << "x selecionada opção básico \n";
}
linha();
cout << " O valor final é de: R$" ;
varCar();
cout << "\n";
linha();
cout << " Obrigado por usar o sistema!";
}
return -1;
}
