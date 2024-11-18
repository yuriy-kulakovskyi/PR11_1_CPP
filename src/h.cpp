#include "../include/main.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void PrintTXT(const char* fname) {
  ifstream fin(fname);
  if (!fin.is_open()) {
    cerr << "Error opening file" << endl;
    return;
  }
  string line;
  while (getline(fin, line)) {
    cout << line << endl;
  }
  fin.close();
}

int Count(const char* fname) {
  ifstream fin(fname);
  if (!fin.is_open()) {
    cerr << "Error opening file" << endl;
    return 0;
  }

  string str;
  int k = 0;

  while (getline(fin, str)) {
    for (size_t i = 0; i + 3 < str.size(); i++) {
      if (str[i] == str[i + 1] && str[i + 1] == str[i + 2] && str[i + 2] == str[i + 3])
        k++;
    }
  }

  fin.close();
  return k;
}