#ifndef UTIL_H
#define UTIL_H

#include "../tome/tome.h"

#include <string>
#include <vector>

void vTomeOutput(const std::vector<Tome*>& v);
std::vector<Tome*> vTomeTrim(const std::vector<Tome*>& vIn, const std::string& type);

#endif

