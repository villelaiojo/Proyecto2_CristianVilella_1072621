#pragma once

using namespace System;

ref class Producto
{
private:
	int TipoID, Peso;
	String^ NombreEncargado;
	String^ Fecha;

public:
	Producto(int TipoProduct, int PesoProduct, String^ NomEncargado, String^ Fechaa)
	{
		TipoID = TipoProduct;
		Peso = PesoProduct;
		NombreEncargado = NomEncargado;
		Fecha = Fechaa;
	}

	int retornarid()
	{
		return TipoID;
	}

	int retonarpeso()
	{
		return Peso;
	}

	String^ retornarNombre()
	{
		return NombreEncargado;
	}

	String^ retornarfechaingreso()
	{
		return Fecha;
	}

	String^ TipoProducto()
	{
		if (TipoID == 1) {
			return "Material para oficina";
		}
		else if (TipoID == 2) {
			return "Ropa";
		}
		else if (TipoID == 3) {
			return "Material de construcción";
		}
	}
};

