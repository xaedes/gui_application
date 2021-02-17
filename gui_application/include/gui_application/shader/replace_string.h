#pragma once
#include <string>
#include <vector>

namespace gui_application {
namespace shader {

// https://stackoverflow.com/a/2548212
std::string& replace_string_inplace(std::string& str, const std::string& remove, const std::string& insert);
std::string& replace_strings_inplace(std::string& str, const std::vector<std::string>& remove, const std::vector<std::string>& insert);

} // namespace shader
} // namespace gui_application
