// tax calc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int _tmain(int argc, _TCHAR* argv[])
{
	std::string relationship,wait;
	int singlemoney,marriedmoney;
	std::cout << "Are you single or married? ";
	std::cin >> relationship;
	if (relationship == "single") {
		std::cout << "How much money do you make annually? ";
		std::cin >> singlemoney;
		if (singlemoney >= 0 && singlemoney <= 9325) {
			std::cout << "your income tax is $" << singlemoney*0.1 << ". Have a good day.";

		}
		else if (singlemoney > 9325 && singlemoney <= 30000){
			std::cout << "your income tax is $" << (932.50 + 0.15*(singlemoney - 9325)) << ". Have a good day.";
		}
		else if (singlemoney > 30000){
			std::cout << "This program was not meant for someone as rich as you. Go away.";
		}
		else
			std::cout << "you are too poor. go get a job.";
	}
	else if (relationship == "married") {
		std::cout << "How much money do you make annually? ";
		std::cin >> marriedmoney;
		if (marriedmoney >= 0 && marriedmoney <= 18650){
			std::cout << "your income tax is $" << marriedmoney*0.1 << ". Have a good day.";
		}
		else if (marriedmoney > 18650 && marriedmoney <= 30000){
			std::cout << "Your income tax is $" << 1865 + 0.15*(marriedmoney - 18650) << ". Have a good day.";
		}
		else if (marriedmoney > 30000){
			std::cout << "This program was not meant for someone as rich as you. Go away.";
		}
		else 
			std::cout << "You are too poor. Go get a job.";
	}
	std::cin >> wait;
	return 0;
}

/*
TextWindow.Title="Dante Mason-Tax Calculator"
TextWindow.Write("are you married or single? ")
relationship=TextWindow.Read()
If relationship="single" Or relationship="Single" Then
TextWindow.WriteLine("How much money do you make annually? ")
singlemoney=TextWindow.ReadNumber()
If singlemoney>=0 and singlemoney<=9325 Then
TextWindow.WriteLine ("your income tax is $"+singlemoney*0.1+". Have a good day.")
EndIf
If singlemoney>9325 And singlemoney<30000 Then
TextWindow.WriteLine("your income tax is $" +(932.50+0.15*(singlemoney-9325))+". Have a good day.")
EndIf
If singlemoney>=30000 Then
TextWindow.WriteLine("This program was not meant to calculate with that much money. Go away.")
EndIf
If singlemoney<0 Then
TextWindow.WriteLine("You are too poor. Go get a job")
EndIf
EndIf

If relationship="married" Or relationship="Married" Then
TextWindow.WriteLine("How much money do you both make annually? ")
marriedmoney=TextWindow.ReadNumber()
If marriedmoney>=0 and marriedmoney<=18650 Then
TextWindow.WriteLine ("your income tax is $"+marriedmoney*0.1+". Have a good day.")
EndIf
If marriedmoney>18650 And marriedmoney<30000 Then
TextWindow.WriteLine("your income tax is $" +(1865+0.15*(marriedmoney-18650))+". Have a good day.")
EndIf
If marriedmoney>=30000 Then
TextWindow.WriteLine("This program was not meant to calculate with that much money. Go away.")
EndIf
If marriedmoney<0 Then
TextWindow.WriteLine("You are too poor. Go get a job")
EndIf
EndIf
*/