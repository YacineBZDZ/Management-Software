#pragma once
#include "CAD.h"
#include "map_client.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_SVC
{
	ref class Gestionclient
	{
	private:
		NS_Composants::CAD^ cad;
		NS_Composants::map_client^ client;
		DataSet^ ds;
	public:
		Gestionclient(void);
		DataSet^ listeClients(String^);
		void ajouter(String^, String^, DateTime^);
		void modifier(int, String^, String^, DateTime^);
		void supprimer(int);
	};
}
