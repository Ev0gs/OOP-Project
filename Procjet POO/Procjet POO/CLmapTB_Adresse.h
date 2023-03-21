#pragma once
namespace NS_Comp
{
	ref class CLmapTB_Adresse
	{
	private :
		System::String^ sSql;
		int id_adresse;
		System::String^ Adresse;
		System::String^ Ville;
		int Cp;
	public:
		CLmapTB_Adresse(void);
		System::String^ Insert(void);
		System::String^ Update(void);
		//System::String^ Delete(void);
		void setIdAdresse(int);
		void setAdresse(System::String^);
		void setVille(System::String^);
		void setCp(int);
		int getIdAdresse(void);
		System::String^ getAdresse(void);
		System::String^ getVille(void);
		int getCp(void);
	};
}

