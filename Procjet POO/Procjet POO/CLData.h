#pragma once
namespace NS_Comp
{
	ref class CLData
	{
	private:
		System::String^ sSql;												// Initialisation attribut qui stocke les requêtes
		System::String^ sCnx;												// Initialisation attribut qui stocke Chemin d'accès à la BDD
		System::Data::SqlClient::SqlConnection^ oCnx;						// Initialisation attribut qui stocke une instanciation de la classe SqlConnection
		System::Data::SqlClient::SqlCommand^ oCmd;							// Initialisation attribut qui stocke une instanciation de la classe SqlCommand
		System::Data::SqlClient::SqlDataAdapter^ oDA;						// Initialisation attribut qui stocke une instanciation de la classe DataAdapter
		System::Data::DataSet^ oDs;											// Initialisation attribut qui stocke une instanciation de la classe DataSet
	public:
		CLData(void);														// Constructeur par défaut de la classe CLData
		System::Data::DataSet^ getRows(System::String^, System::String^);	// Méthode pour récupérer les Rows d'une table
		void actionRows(System::String^);									// Méthode permettant d'agir sur les Rows d'une table
		int actionRowsID(System::String^);									// Méthode permettant d'agir sur les Rows d'une table et de récupérer un identifiant
	};
}
