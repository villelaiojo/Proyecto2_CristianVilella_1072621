#pragma once
#include "Lista.h"
#include "Producto.h"

using namespace System;


ref class Bahia
{
private:
	char ubiF;
	int ubiC,PesoM,IDProductos;
	int PesoAct = 0, CantProductos = 0;

public:
	void Inicializar(int Peso,int IDB,int UbiColumna, char UbiFila)
    {
		ubiC = UbiColumna;
		ubiF = UbiFila;
		PesoM = Peso;
		IDProductos = IDB;

	}
	Lista Bactiva;
	Bahia^ arriba;
	Bahia^ abajo;
	Bahia^ derecha;
	Bahia^ izquierda;

	Producto^ RetornarPrimerPro() {
		if (Bactiva.Cabeza != nullptr) {
			return Bactiva.Cabeza->producto;
		}
		return nullptr;
	}
	String^ retornarProductoInfo()
	{
		String^ contenido;
		Nodo^ aux = Bactiva.Cabeza;
		if (aux == nullptr)
		{

			return contenido;
		}
		for (int i = 0; i < CantProductos; i++)
		{
			if(aux == nullptr)
				break;
			Producto^ ver = aux->producto;
			contenido += "Nombre del Empleado : " + Convert::ToString(ver->retornarNombre()) + "\n";
			contenido += "Fecha de Ingreso: " + Convert::ToString(ver->retornarfechaingreso()) + "\n";
			contenido += "Peso: " + Convert::ToString(ver->retonarpeso()) + "\n";
			contenido += "tipo de producto: " + ver->TipoProducto() + "\n\n";	
			aux = aux->Siguiente;

		}
		return contenido;
	}
	String^ retornarinfoproduc(int idbu)
	{
		Producto^ ver = Bactiva.Rproducto(idbu);
		if (ver != nullptr)
		{
			String^ contenido;
			contenido += "Nombre del Empleado : " + Convert::ToString(ver->retornarNombre()) + "\n";
			contenido += "Fecha de Ingreso: " + Convert::ToString(ver->retornarfechaingreso()) + "\n";
			contenido += "Peso: " + Convert::ToString(ver->retonarpeso()) + "\n";
			contenido += "tipo de producto: " + ver->TipoProducto() + "\n\n";
			return contenido;
		}
		else
		{
			return "";
		}

	}
	void CalcularPeso()
	{
		int Peso = Bactiva.sumarP();
		PesoAct = Peso;
	}
	void quitarPro()
	{
		Bactiva.POP(0);
		CantProductos--;
		CalcularPeso();
	}
	void quitarunproducto(int posicion)
	{
		Bactiva.POP(posicion);
		CantProductos--;
		CalcularPeso();
	}
	int RetornarubiColumna()
	{
		return ubiC;
	}
	int RetornarIdBahia()
	{
		return IDProductos;
	}
	int PesoActual() {
		return PesoAct;
	}
	int PesoMaximo() {
		return PesoM;
	}
	int CantProducots() {
		return CantProductos;
	}
	bool MeterProdu(Producto^ NuevoP)
	{

		if ((NuevoP->retonarpeso() + PesoAct) <= PesoM)
		{
			if (IDProductos == 4)
			{
				Bactiva.Push(NuevoP);
				CalcularPeso();
				Bactiva.ordenar();
				CantProductos++;
				return true;
			}
			else if (IDProductos == 5 && (NuevoP->retornarid() == 1 || NuevoP->retornarid() == 3))
			{
				Bactiva.Push(NuevoP);
				Bactiva.ordenar();
				CalcularPeso();
				CantProductos++;
				return true;
			}
			else if (IDProductos == 6 && (NuevoP->retornarid() == 1 || NuevoP->retornarid() == 2))
			{
				Bactiva.Push(NuevoP);
				Bactiva.ordenar();
				CalcularPeso();
				CantProductos++;
				return true;
			}
			else if (IDProductos == 7 && (NuevoP->retornarid() == 2 || NuevoP->retornarid() == 3))
			{
				Bactiva.Push(NuevoP);
				Bactiva.ordenar();
				CalcularPeso();
				CantProductos++;
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	char RetornarUbiFila()
	{
		return ubiF;

	}
	String^ retornarContenido()
	{
		String^ Contenido;
		Contenido += "Cantidad de Productos en la Bahia " + Convert::ToString(CantProductos) + "\n";
		Contenido += "El Peso Actual " + Convert::ToString(PesoAct) + "\n";
		Contenido += "El Peso Maximo " + Convert::ToString(PesoM) + "\n";
		switch (IDProductos)
		{
		case 1:

			Contenido += "Los productos que se pueden Almacenar son : \n - Articulos de Oficina";

			break;
		case 2:

			Contenido += "Los productos que se pueden Almacenar son : \n - Ropa";

			break;
		case 3:

			Contenido += "Los productos que se pueden Almacenar son : \n - Articulos de Construccion \n";

			break;

		}

		Contenido += "Ubicacion \n La Fila: " + ubiF + "Columna: " + Convert::ToString(ubiC) + "\n";
		Bahia^ aux = arriba;
		if (arriba != nullptr)
		{
			Contenido += "Arriba: " + Convert::ToString(aux->RetornarubiColumna()) + "," + Convert::ToString(aux->RetornarUbiFila() + "\n");
		}
		else
			Contenido += "Arriba: null\r\n";
		aux = abajo;
		if (aux != nullptr)
		{
			Contenido += "Abajo: " + Convert::ToString(aux->RetornarubiColumna()) + "," + Convert::ToString(aux->RetornarUbiFila() + "\n");
		}
		else
			Contenido += "Abajo: null\r\n";
		aux = derecha;
		if (aux != nullptr)
		{
			Contenido += "Derecha: " + Convert::ToString(aux->RetornarubiColumna()) + "," + Convert::ToString(aux->RetornarUbiFila() + "\n");
		}
		else
			Contenido += "Derecha: null\r\n";
		aux = izquierda;
		if (aux != nullptr)
		{
			Contenido += "Izquierda: " + Convert::ToString(aux->RetornarubiColumna()) + "," + Convert::ToString(aux->RetornarUbiFila() + "\n");
		}
		else
			Contenido += "Izquierda: null\r\n";
		return Contenido;


	}

};

