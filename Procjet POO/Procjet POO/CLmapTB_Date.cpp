#include "CLmapTB_Date.h"

System::String^ NS_Comp::CLmapTB_Date::Insert(void)
{
    return "INSERT INTO Date (Date) VALUES ('" + this->Date + "');SELECT @@IDENTITY";
}

System::String^ NS_Comp::CLmapTB_Date::Update(void)
{
    return "UPDATE[Projet_POO].[dbo].[Date]" +
                "SET Date='" + this->getDate() + '"' +
                "WHERE(Id_date='" + this->getIdDate() + "');SELECT @@IDENTITY";
}

/*System::String^ NS_Comp::CLmapTB_Date::Delete(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}*/

void NS_Comp::CLmapTB_Date::setIdDate(int id_date)
{
    this->id_date = id_date;
}

void NS_Comp::CLmapTB_Date::setDate(System::String^ date)
{
    this->Date = date;
}

System::String^ NS_Comp::CLmapTB_Date::getDate(void)
{
    return this->Date;
}

int NS_Comp::CLmapTB_Date::getIdDate(void)
{
    return this->id_date;
}
