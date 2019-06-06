// Copyright 2019 Sazanov Dima

#include <string>
#include <iostream>

#include "alg_sort_station_formula_application.h"
#include "include/alg_sort_station_formula.h"

std::string ASSFApplication::Start() {
    return "Welcome to the Program - Sort Station Algorithm! \n"
	"To continue, enter the formula: ";
}

std::string UserEnter() {
	std::string userenter;
	std::cin >> userenter;
	return userenter;
}

double ASSFApplication::UseAlgoritm() {
	double result;
    AlgSortStationFormula::AlgSortStationFormula(UserEnter());
    result = AlgSortStationFormula::formulacalculator();
	return result;
} 

    void End() {
		std::cout << "Formula converted!" << std::endl;
		std::cout << "The result of the calculation is " << ASSFApplication::UseAlgoritm << std::endl;
}