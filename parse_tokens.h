//
// Created by Eniola Ajiboye on 04/09/2021.
//

#ifndef PATTERNS_PARSE_TOKENS_H
#define PATTERNS_PARSE_TOKENS_H

  #include "bits/stdc++.h"
  using namespace std;

  string ip = "0.0.0.255";
  vector<string> parts;
  string block;
  stringstream ss{ip};
  while(getline(ss, block, '.')){
    parts.push_back(block);
  }

#endif //PATTERNS_PARSE_TOKENS_H
