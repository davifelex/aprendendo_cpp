# Lista em c++
	#include <list> // inclus�o
	list<�tipo�> �nome_lista�; //declara��o
	
	nome_lista.push_front(�valor�); // adicionando valor na frente
	nome_lista.push_back(�valor�); // adicionando valor atr�s
	
	nome_lista.size(); // retorna o tamanho
	nome_lista.front();	//	retorna o elemento que est� na frente
	nome_lista.back(); // retorna o elemento que est� atr�s
	
	nome_lista.pop_front(); // deleta o elemento que est� na frente
	nome_lista.pop_back(); // deleta o elemento que est� atr�s

	nome_lista.sort(); // coloca em ordem crescente
	nome_lista.reverse(); // coloca na ordem reversa

# Usando interator
	list<tipo_nome_lista>::interator it; // declarando

	it = nome_lista.begin(); // passando valor da primeira posi��o

	advance(it, �posi��o�); // passando pelas posi��es da lista
	
	nome_lista.insert(it, �valor�); // adicionando valor na posi��o it

	

