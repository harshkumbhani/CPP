#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <sstream>

const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";

struct calendarDate {
  char c;
  int year;
  int month;
  int date;
};

struct data {
  int lineNumber;
  double value;
  std::string date;
  std::string line;
  std::map<std::string, double> dataBase;
};

class BitcoinExchange {
private:
public:
  BitcoinExchange();
  BitcoinExchange(const BitcoinExchange &src);
  ~BitcoinExchange();

  BitcoinExchange &operator=(const BitcoinExchange &rhs);

  void parseDataBase(data &data);
  void parseInputFile(data &data, const std::string &inputFile);
  static void btcProgram(const std::string &inputFile);
};

#endif
