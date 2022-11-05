#include <stdio.h>

#include <string.h>

int main(int argc, char const* argv[])

{

	char nome[50];

	char endereco[50];

	char telefone[14];

	printf("Digite o nome:\n");

	fgets(nome, 50, stdin);

	printf("Digite o endereco:\n");

	fgets(endereco, 60, stdin);

	printf("Digite o telefone:\n");

	fgets(telefone, 14, stdin);

	printf("Nome: %s\nEndereco: %s\nTelefone: %s", nome, endereco, telefone);



}