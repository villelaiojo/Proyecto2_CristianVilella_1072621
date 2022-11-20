#pragma once
#include "Nodo.h"
#include <stdlib.h>

using namespace System;

ref class Lista
{
private:
	int longitud() {
		int cont = 0;
		Nodo^ aux = Cabeza;
		while (aux != nullptr) {
			cont++;
			aux = aux->Siguiente;
		}
		return cont;
	}

public:
		Nodo^ Cabeza;
		void ordenar()
		{
		
			Nodo^ aux = Cabeza;
			int tamlista = longitud();
			Nodo^ Imenor = Cabeza;
			int indicieM;
			for (int i = 0; i < tamlista; i++)
			{
				int cont=0;
				indicieM = i;
				Imenor = Cabeza;
				aux = Cabeza;
				while (indicieM > cont)
				{
					cont++;
					Imenor = Imenor->Siguiente;
					aux = aux->Siguiente;

				}
				for (int j= i +1; j < tamlista; j++)
				{
					aux = aux->Siguiente;
					if (aux->producto->retornarid() < Imenor->producto->retornarid())
					{
						indicieM = j;
						cont = 0;
						Imenor = Cabeza;
						while (indicieM > cont)
						{

							cont++;
							Imenor = Imenor->Siguiente;
						}

					}
				}
				if (i != indicieM)
				{

					aux = Cabeza;
					cont = 0;
					while (cont < i)
					{
						cont++;
						aux = aux->Siguiente;

					}
					Producto^ temp = aux->producto;
					aux->producto = Imenor->producto;
					Imenor->producto = temp;
				}
			}
			aux = Cabeza;
			int i = 0;
			while (aux != nullptr)
			{

				aux->pos = i;
				i++;
				aux = aux->Siguiente;
			}
		}

		void POP(int sacarID) {
			Nodo^ aux = Cabeza;
			Nodo^ auxsig = Cabeza->Siguiente;
			
			while (aux->producto->retornarid() != sacarID && aux != nullptr)
			{

				aux = aux->Siguiente;

				if (auxsig!= nullptr)
				{

					auxsig = auxsig->Siguiente;

				}
			}
			if (aux->pos == 0)
			{
				Cabeza = auxsig;
			}
			else if (auxsig != nullptr)
			{
				Nodo^ auxant = Cabeza;
				while (true)
				{
					if (auxant->Siguiente == aux)
					{

						break;

					}
					else
					{
						auxant = auxant->Siguiente;
					}

				}
				auxant->Siguiente = auxsig;

			}
			else
			{
				Nodo^ auxant = Cabeza;
				while (true)
				{
					if (auxant->Siguiente == aux)
					{

						break;

					}
					else
					{
						auxant = auxant->Siguiente;
					}

				}
				auxsig->Siguiente = nullptr;

			}
			ordenar();
		}

		void Push(Producto^ nuevo)
		{
			Nodo^ aux = gcnew Nodo();
			aux->producto = nuevo;
			if (Cabeza == nullptr)
			{
				aux->Siguiente = nullptr;
				Cabeza = aux;

			}
			else
			{
				aux->Siguiente = Cabeza;
				Cabeza = aux;
			}
		}

		int sumarP()
		{
			int sum = 0;
			Nodo^ aux = Cabeza;
			while (aux != nullptr)
			{
				sum += aux->producto->retonarpeso();
				aux = aux->Siguiente;

			}
			return sum;
		}

		int posicionProducto(int IdBu)
		{
			int a1;
			Nodo^ aux = Cabeza;
			while (aux->producto->retornarid() != IdBu && aux != nullptr)
			{
				aux = aux->Siguiente;
			}
			if ( aux != nullptr)
			{
				a1 = aux->pos;
				return a1;
			}
			else
			{
				return -1;
			}
		}

		Producto^ Rproducto(int IdBu)
		{
			Producto^ a1;
			Nodo^ aux = Cabeza;
			if (aux == nullptr)
			{
				a1 = aux->producto;
				return nullptr;
			}
			while (aux->producto->retornarid() != IdBu && aux != nullptr)
			{
				aux = aux->Siguiente;

			}
			if (aux != nullptr)
			{
				a1 = aux->producto;
				return a1;
			}
			else
			{
				return nullptr;
			}

		}

		Producto^ RfechaP(String^ FechaB)
		{
			Producto^ a1;
			Nodo^ aux = Cabeza;
			while (aux->producto->retornarfechaingreso() != FechaB && aux != nullptr) {
				aux = aux->Siguiente;
			}
			if (aux != nullptr) {
				a1 = aux->producto;
				return a1;
			}
			else
			{
				return nullptr;
			}
		}
};

