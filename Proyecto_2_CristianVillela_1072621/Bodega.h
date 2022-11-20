#pragma once
#include "Fila.h"
#include "Columna.h"


ref class Bodega
{
private:
	int cantidad;
	Fila^ InicioF = gcnew Fila();
	Columna^ InicioC = gcnew Columna();

public:
	Bodega()
	{
		InicioC->Posicion = 1;
		InicioF->Posicion = 70;
		cantidad = 0;
	}
	void AgregarB(int PesoM, int IdB, int UbiBF, int UbiBC)
	{
		Bahia^ apunt = gcnew Bahia();
		Fila^ auxF = InicioF;
		Columna^ auxC = InicioC;
		while (UbiBC != auxC->Posicion)
		{

			if (auxC->Derecha == nullptr)
			{
				Columna^ nuevaC = gcnew Columna();
				nuevaC->Posicion = auxC->Posicion + 1;
				auxC->Derecha = nuevaC;	
			}
		}
		while (UbiBF != auxF->Posicion)
		{
			if (auxF->Abajo == nullptr)
			{

				if (auxF->Posicion == 90)
				{
					break;
				}
				Fila^ NuevaF = gcnew Fila();
				NuevaF->Posicion = auxF->Posicion + 1;
				auxF->Abajo = NuevaF;
			}
			auxF = auxF->Abajo;
		}
		auxF = InicioF;
		Bahia^ auxR;
		Bahia^ auxsig;
		Bahia^ auxante;
		while (UbiBF != auxF->Posicion && auxF->Abajo != nullptr && auxC->Abajo != nullptr)
		{
			if (auxsig == nullptr && auxR== nullptr)
			{
				auxsig = auxC->Abajo;
				auxF = auxF->Abajo;

			}
			else if (auxsig != nullptr && auxR == nullptr)
			{
				auxR = auxsig;
				auxsig = auxR->abajo;
				auxF = auxF->Abajo;
			}
			else if (auxsig != nullptr && auxR != nullptr && auxante == nullptr)
			{
				auxante = auxR->arriba;
				auxR = auxsig;
				auxsig = auxR->abajo;
				auxF = auxF->Abajo;

			}
			else if (auxsig == nullptr && auxF != nullptr)
			{
				break;
			}
			else
			{
				auxante = auxR;
				auxR = auxsig;
				auxsig = auxR->abajo;
				auxF = auxF->Abajo;
			}
		}
		if (auxC->Abajo != nullptr && auxR == nullptr && auxsig == nullptr)
		{
			auxsig = auxC->Abajo;
			if (auxF->Posicion != UbiBF)
			{
				auxF = auxF->Abajo;
			}
		}
		if (auxC->Abajo == nullptr) 
		{
			Bahia^ nuevaB = gcnew Bahia();
			nuevaB->Inicializar(PesoM, IdB, UbiBC, UbiBF);
			auxC->Abajo = nuevaB;
			cantidad = cantidad + 1;
		}
		else if (auxsig != nullptr) 
		{
			auxR = auxsig;
			auxR = auxR->abajo;
			if (auxF->Posicion != auxR->RetornarUbiFila())
			{
				Bahia^ nuevaB = gcnew Bahia();
				nuevaB->Inicializar(PesoM, IdB, UbiBC, UbiBF);
				if (auxR->RetornarUbiFila() > UbiBF)
				{
					if (auxR->arriba == nullptr)
					{
						auxR->arriba = nuevaB;
						auxC->Abajo = auxR->arriba;
						auxante = auxR->arriba;
						auxante->abajo = auxR;
						cantidad = cantidad + 1;
					}
				}
				else if (auxR->RetornarUbiFila() < UbiBF)
				{
					if (auxsig != nullptr) 
					{
						auxR->abajo = nuevaB;
						auxsig->arriba = auxR->abajo;
						auxante = auxR;
						auxR = auxante->abajo;
						auxR->arriba = auxante;
						auxR->abajo = auxsig;
						cantidad = cantidad + 1;
					}
					else
					{
						auxR->abajo = nuevaB;
						auxsig = auxR->abajo;
						auxsig->arriba = auxR;
						cantidad = cantidad + 1;
					}
				}
			}
		}
		else if(auxR != nullptr)
		{
			if (auxF->Posicion != auxR->RetornarUbiFila())
			{
				Bahia^ nuevaB = gcnew Bahia();
				nuevaB->Inicializar(PesoM, IdB, UbiBC, UbiBF);
				if (auxR->RetornarUbiFila() < UbiBF)
				{
					if (auxsig == nullptr) 
					{
						auxR->abajo = nuevaB;
						auxsig = auxR->abajo;
						auxsig->arriba = auxR;
					}
					else 
					{
						auxR->abajo = nuevaB;
						auxsig->arriba = auxR->abajo;
						auxante = auxR;
						auxR = auxR->abajo;
						auxR->abajo = auxsig;
						auxR->arriba = auxante;
					}
					cantidad = cantidad + 1;
				}
				else if (auxR->RetornarUbiFila() > UbiBF)
				{
					while (auxante->RetornarUbiFila() > UbiBF)
					{
						auxante = auxante->arriba;
						auxR = auxR->arriba;
					}
					if (auxante->RetornarUbiFila() < UbiBF) 
					{

						auxante->abajo = nuevaB;
						auxR->arriba = auxante->abajo;
						cantidad = cantidad + 1;
					}
				}
			}
		}
		auxF = InicioF;
		while (UbiBF != auxF->Posicion)
		{
			if (auxF->Abajo == nullptr) {
				if (auxF->Posicion == 90) {
					break;
				}
				Fila^ nuevaC = gcnew Fila();
				nuevaC->Posicion = auxF->Posicion + 1;
				auxF->Abajo = nuevaC;
			}
			auxF = auxF->Abajo;
		}
		apunt = auxC->Abajo;
		while (apunt->RetornarUbiFila() != auxF->Posicion && apunt->abajo != nullptr)
		{
			apunt = apunt->abajo;
		}
		if (auxF->Derecha == nullptr)
		{
			auxF->Derecha = apunt;

		}
		else if (auxF->Derecha != nullptr) 
		{
			Bahia^ apunt2 = auxF->Derecha;
			while (apunt->RetornarubiColumna() < UbiBC && apunt2->derecha != nullptr)
			{
				apunt2 = apunt2->derecha;
			}
			if (apunt2->RetornarubiColumna() < UbiBC)
			{
				apunt2->derecha = apunt;
				apunt->izquierda = apunt2;
				if (apunt->RetornarubiColumna() == 1)
				{
					auxF->Derecha = apunt;
				}
			}
			else if (apunt2->RetornarubiColumna() > UbiBC)
			{
				Bahia^ apun3 = apunt2->izquierda;
				apunt->derecha = apunt2;
				apunt->izquierda = apun3;
				apunt2->izquierda = apunt;
				if (apunt->RetornarubiColumna() == 1)
				{
					auxF->Derecha = apunt;
				}
				else 
				{
					apun3->derecha = apunt;
				}
			}
		}
	}
	Bahia^ busquedaP(char buscarF, int buscarC) 
	{
		Bahia^ apunt;
		Fila^ auxf = InicioF;
		Columna^ auxc = InicioC;
		while (auxc->Derecha != nullptr && auxc->Posicion != buscarC)
		{
			auxc = auxc->Derecha;
		}
		apunt = auxc->Abajo;
		if (apunt != nullptr)
		{
			while (apunt->abajo != nullptr && apunt->RetornarUbiFila() < buscarF)
			{
				apunt = apunt->abajo;
			}
			if (apunt->RetornarubiColumna() == buscarC && apunt->RetornarUbiFila() == buscarF)
			{
				return apunt;
			}
			else {
				return nullptr;
			}
		}
	}
	Void AgregarP(Producto^ nuevoP, char ubif, int ubic)
	{
		Bahia^ llenar = busquedaP(ubif, ubic);
		if (llenar->MeterProdu(nuevoP)) {
			llenar = busquedaP(nuevoP->retornarid(), nuevoP->retonarpeso());
			if (llenar != nullptr) {
				llenar->MeterProdu(nuevoP);
			}
		}
	}
	void eliminarB(Bahia^ eliminar) 
	{
		if (eliminar != nullptr)
		{
			if (true) 
			{
				Bahia^ auxArriba = eliminar->arriba;
				Bahia^ auxAbajo = eliminar->abajo;
				Bahia^ AuxDerecha = eliminar->derecha;
				Bahia^ AuxIzquierda = eliminar->izquierda;

				if (auxArriba != nullptr)
				{
					if (auxAbajo != nullptr) 
					{
						auxArriba->abajo = auxAbajo;
						auxAbajo->arriba = auxArriba;
					}
					else
					{
						auxArriba->abajo = nullptr;
					}
				}
				else
				{
					Columna^ auxColum = InicioC;
					while (eliminar->RetornarubiColumna() != auxColum->Posicion)
					{
						auxColum = auxColum->Derecha;
					}
					if (auxAbajo != nullptr) 
					{
						auxColum->Abajo = auxAbajo;
						auxAbajo->arriba = nullptr;
					}
					else
					{
						auxColum->Abajo = nullptr;
					}
				}
				if (AuxIzquierda != nullptr)
				{
					if (AuxDerecha != nullptr)
					{
						AuxIzquierda->derecha = AuxDerecha;
						AuxDerecha->izquierda = AuxIzquierda;
					}
					else 
					{
						AuxIzquierda->derecha = nullptr;
					}
				}
				else 
				{
					Fila^ auxfila = InicioF;
					while (eliminar->RetornarUbiFila() != auxfila->Posicion)
					{
						auxfila = auxfila->Abajo;
					}
					if (AuxDerecha != nullptr)
					{
						auxfila->Derecha = AuxDerecha;
						AuxDerecha->izquierda = nullptr;
					}
					else
					{
						auxfila->Derecha = nullptr;
					}
				}
			}
			cantidad--;
		}

	}
	Bahia^ busquedaid(int buscid, char filaE) {
		Bahia^ Apuntador;
		Fila^ auxf = InicioF;
		while (auxf->Posicion < filaE)
		{
			if (auxf != nullptr) {
				auxf = auxf->Abajo;
			}
			else
				break;
		}
		Apuntador = auxf->Derecha;
		if (Apuntador == nullptr) {
			return Apuntador;
		}
		while (Apuntador->RetornarIdBahia() != buscid && Apuntador->RetornarIdBahia() != 4)
		{
			if (auxf->Derecha != nullptr) {
				Apuntador = auxf->Derecha;
				while (Apuntador->derecha != nullptr)
				{
					if (Apuntador->RetornarIdBahia() == buscid || Apuntador->RetornarIdBahia() == 4)
						break;
					Apuntador = Apuntador->derecha;
				}
			}
			auxf = auxf->Abajo;
			if (auxf == nullptr && (Apuntador->RetornarIdBahia() != buscid && Apuntador->RetornarIdBahia() != 4)) {
				Apuntador = nullptr;
				break;
			}
		}
		return Apuntador;
	}
	String^ Retornar_Informacion() 
	{
		String^ contenido;
		Bahia^ Apuntador;
		Fila^ auxf = InicioF;
		Apuntador = auxf->Derecha;
		if (auxf->Derecha == nullptr && auxf->Abajo == nullptr)
		{
			return contenido;
		}
		while (auxf->Derecha == nullptr)		
		{
			auxf = auxf->Abajo;
			Apuntador = auxf->Derecha;
		}
		for (int i = 0; i < cantidad; i++)
		{
			if (Apuntador != nullptr)
			{
				contenido += "\nUbicacion\r\n Fila: " + Apuntador->RetornarUbiFila() + "\r\nColumna: " + Convert::ToString(Apuntador->RetornarubiColumna()) ;	
				Apuntador = Apuntador->derecha;
			}
			else {
				auxf = auxf->Abajo;

				while (auxf->Derecha == nullptr)
				{
					auxf = auxf->Abajo;
				}
				Apuntador = auxf->Derecha;
				contenido += "\nUbicacion\r\n Fila: " + Apuntador->RetornarUbiFila() + " \nColumna: " + Convert::ToString(Apuntador->RetornarubiColumna()) + "\n";
				Apuntador = Apuntador->derecha;
			}
		}
		return contenido;
	}








};

