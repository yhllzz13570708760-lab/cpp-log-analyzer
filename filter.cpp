#include "filter.h"

bool matchesFilters(const std::string& line,
                    const std::string& level,
                    const std::string& keyword) {
    bool levelMatches =
        (level == "*" ||
         line.find("[" + level + "]") != std::string::npos);

    bool keywordMatches =
        (keyword == "*" ||
         line.find(keyword) != std::string::npos);

    return levelMatches && keywordMatches;
}