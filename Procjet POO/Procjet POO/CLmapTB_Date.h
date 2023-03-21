#pragma once
namespace NS_Comp
{
	ref class CLmapTB_Date
	{
	private:
		int id_date;
		System::String^ Date;
	public:
		System::String^ Insert(void);
		System::String^ Update(void);
		//System::String^ Delete(void);
		void setIdDate(int);
		void setDate(System::String^);
		System::String^ getDate(void);
		int getIdDate(void);
	};
}


