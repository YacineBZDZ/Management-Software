#include "map_client.h"

namespace NS_Composants
{
	map_client::map_client(void)
	{
		this->id_client = -1;
		this->nom = "RIEN";
		this->prenom = "RIEN";
		this->datenaissance = nullptr;
	}
	String^ map_client::SELECT(void)
	{
		return "SELECT * " +
			"FROM Client2;";
	}
	String^ map_client::INSERT(void)
	{
		return "INSERT INTO Client2 " +
			"(nom, prenom,datenaissance) " +
			"VALUES('" + this->getNom() + "', '" + this->getPrenom() + "','" + this->getdatenaissance() + "');SELECT @@IDENTITY;";
	}
	String^ map_client::UPDATE(void)
	{
		return "UPDATE Client2 " +
			"SET nom = '" + this->getNom() + "', prenom = '" + this->getPrenom() + "', datenaissance = '" + this->getdatenaissance() + "' " +
			"WHERE(ID = " + this->getId() + ");";
	}
	String^ map_client::DELETE(void)
	{
		return "DELETE FROM Client2 " +
			"WHERE(ID = " + this->getId() + ");";
	}
	void map_client::setID(int id_personne)
	{
		if (id_personne > 0)
		{
			this->id_client = id_personne;
		}
	}
	void map_client::setPrenom(String^ prenom)
	{
		if (prenom != "")
		{
			this->prenom = prenom;
		}
	}
	void map_client::setNom(String^ nom)
	{
		if (nom != "")
		{
			this->nom = nom;
		}
	}
	void map_client::setdatenaissance(DateTime^ datenaissance)
	{
		if (nom != nullptr)
		{
			this->datenaissance = datenaissance;
		}
	}
	int map_client::getId(void)
	{
		return this->id_client;
	}
	String^ map_client::getNom(void)
	{
		return this->nom;
	}
	String^ map_client::getPrenom(void)
	{
		return this->prenom;
	}
	DateTime^ map_client::getdatenaissance(void)
	{
		return this->datenaissance;
	}
}
