#ifndef UTIL_H
#define UTIL_H

#include "../tome/tome.h"

#include <string>
#include <vector>

void vTomePrint(const std::vector<Tome*>& v);
std::vector<File*> vTomeTrim(const std::vector<Tome*>& vIn, const std::string& type);

#endif

