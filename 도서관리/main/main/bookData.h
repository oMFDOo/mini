#include <string>
#pragma once

#ifndef library    // CALC_DATA_H가 정의되어 있지 않다면
#define library    // CALC_DATA_H 매크로 정의

struct library {
	int page;
	int price;
	int publicationDate;
	std::string name;
	std::string author;
};

#endif