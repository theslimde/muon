#pragma once

#include <array>

enum class type_of_option {
  none,
  vector_string
};

/** The allowed command line options.
 *  This is an exhausting list of all allowed command line options with
 *  a short description of their meaning
 */
constexpr std::array<std::pair<std::pair<const char*, const char*>, type_of_option>, 5> options {
  std::make_pair(std::make_pair("help", "display this help message"),
                 type_of_option::none),
  std::make_pair(std::make_pair("version", "display version information of this build"),
                 type_of_option::none)
};
