#include "Gestionclient.h"

namespace NS_SVC
{
	Gestionclient::Gestionclient(void)
	{
		this->cad = gcnew NS_Composants::CAD();
		this->client = gcnew NS_Composants::map_client();
	}
	DataSet^ Gestionclient::listeClients(String^ dataTableName)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->client->SELECT(), dataTableName);
		return this->ds;
	}

	void Gestionclient::ajouter(String^ nom, String^ prenom, DateTime^ datenaissance)
	{
		int id;
		int i;

		this->client->setNom(nom);
		this->client->setPrenom(prenom);
		this->client->setdatenaissance(datenaissance);
		this->cad->actionRowsID(this->client->INSERT());

	}
	void Gestionclient::Gestionclient::modifier(int id_personne, String^ nom, String^ prenom, DateTime^ datenaissance)
	{
		int i;

		this->client->setID(id_personne);
		this->client->setNom(nom);
		this->client->setPrenom(prenom);
		this->client->setdatenaissance(datenaissance);
		this->cad->actionRows(this->client->UPDATE());

	}
	void Gestionclient::supprimer(int idPersonne)
	{
		this->client->setID(idPersonne);
		this->cad->actionRows(this->client->DELETE());
	}
}
