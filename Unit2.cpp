//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	int num1 = Edit1->Text.ToInt();
	int num2 = Edit2->Text.ToInt();
	Edit3->Text = num1+num2;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
	int num1 = Edit1->Text.ToInt();
	int num2 = Edit2->Text.ToInt();
	Edit3->Text = num1-num2;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button3Click(TObject *Sender)
{
	double num1 = Edit1->Text.ToDouble();
	double num2 = Edit2->Text.ToDouble();
	if(num2!=0){
	Edit3->Text = num1/num2;
	}
	else{
        ShowMessage("На ноль делить нельзя");
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button4Click(TObject *Sender)
{
	double num1 = Edit1->Text.ToDouble();
	double num2 = Edit2->Text.ToDouble();
	Edit3->Text = num1*num2;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button5Click(TObject *Sender)
{
	Edit1->Clear();
	Edit2->Clear();
	Edit3->Clear();
}
//---------------------------------------------------------------------------

