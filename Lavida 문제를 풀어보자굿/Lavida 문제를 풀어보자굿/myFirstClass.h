#include <iostream>
#pragma once

class myFirstClass {

public: 
	myFirstClass();
	int m_year; 
	int m_month; 
	int m_day; 

	void print() { 
		std::cout << m_year << "/" << m_month << "/" << m_day; 
	}

	void calDay(int day1, int day2) {
		int cal = day1 + day2;
		std::cout << std::endl << "Cal : " << cal << std::endl;
	}

	 int yaksu(int num) {
		int sum = 0;
		for (int i = 1; i < num; i++) {
			if ((num % i) == 0) {
				sum += i;
			}
		}
		return sum;
	}
	~myFirstClass();
};