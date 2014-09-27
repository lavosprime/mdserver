#ifndef _MARKDOWN_PARSER_H_
#define _MARKDOWN_PARSER_H_

#include <cstdio>
#include <iostream>
#include <string>

namespace mdserver {

class MarkdownParser {
 public:
  static std::string ParseFromFile(FILE *mdfile);
}

}  // namespace mdserver

#endif  // _MARKDOWN_PARSER_H_
