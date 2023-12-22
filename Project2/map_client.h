#pragma once
using namespace System;

namespace NS_Composants
{
	ref class map_client
	{
	private:
		int id_client;
		String^ nom;
		String^ prenom;
		DateTime^ datenaissance;
	public:
		map_client(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setID(int);
		void setPrenom(String^);
		void setNom(String^);
		void setdatenaissance(DateTime^);
		int getId(void);
		String^ getNom(void);
		String^ getPrenom(void);
		DateTime^ getdatenaissance(void);
	};
}
