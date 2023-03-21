#include "CLmapTB_Adresse.h"

NS_Comp::CLmapTB_Adresse::CLmapTB_Adresse(void)
{
}

System::String^ NS_Comp::CLmapTB_Adresse::Insert(void)
{
    return "INSERT INTO Adresse (Adresse, Ville, Cp) VALUES ('" + this->Adresse + "','" + this->Ville + "','" + this->Cp + "');SELECT @@IDENTITY";
}

System::String^ NS_Comp::CLmapTB_Adresse::Update(void)
{
    return "UPDATE [Projet_POO].[dbo].[Adresse]" +
                "SET Adresse='" + this->getAdresse() + "', Ville='" + this->getVille() + "', Cp='" + this->getCp() + '"' +
                "WHERE(id_adresse='" + this->getIdAdresse() + "');SELECT @@IDENTITY";
}

/*System::String^ NS_Comp::CLmapTB_Adresse::Delete(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}*/

void NS_Comp::CLmapTB_Adresse::setIdAdresse(int id_adresse)
{
    this->id_adresse = id_adresse;
}

void NS_Comp::CLmapTB_Adresse::setAdresse(System::String^ adresse)
{
    this->Adresse = adresse;
}

void NS_Comp::CLmapTB_Adresse::setVille(System::String^ ville)
{
    this->Ville = ville;
}

void NS_Comp::CLmapTB_Adresse::setCp(int cp)
{
    this->Cp = cp;
}

int NS_Comp::CLmapTB_Adresse::getIdAdresse(void)
{
    return this->id_adresse;
}

System::String^ NS_Comp::CLmapTB_Adresse::getAdresse(void)
{
    return this->Adresse;
}

System::String^ NS_Comp::CLmapTB_Adresse::getVille(void)
{
    return this->Ville;
}

int NS_Comp::CLmapTB_Adresse::getCp(void)
{
    return this->Cp;
}
