# Lista em c++
	#include <list> // inclusão
	list<´tipo´> ´nome_lista´; //declaração
	
	nome_lista.push_front(´valor´); // adicionando valor na frente
	nome_lista.push_back(´valor´); // adicionando valor atrás
	
	nome_lista.size(); // retorna o tamanho
	nome_lista.front();	//	retorna o elemento que está na frente
	nome_lista.back(); // retorna o elemento que está atrás
	
	nome_lista.pop_front(); // deleta o elemento que está na frente
	nome_lista.pop_back(); // deleta o elemento que está atrás

	nome_lista.sort(); // coloca em ordem crescente
	nome_lista.reverse(); // coloca na ordem reversa

# Usando interator
	list<tipo_nome_lista>::interator it; // declarando

	it = nome_lista.begin(); // passando valor da primeira posição

	advance(it, ´posição´); // passando pelas posições da lista
	
	nome_lista.insert(it, ´valor´); // adicionando valor na posição it

	

