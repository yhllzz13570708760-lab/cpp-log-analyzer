#ifndef LOG_FILTER_H
#define LOG_FILTER_H

#include <string>

bool matchesFilters(const std::string& line,
                    const std::string& level,
                    const std::string& keyword);

#endif