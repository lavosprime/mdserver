#include <cstdio>
#include <iostream>
#include <string>

#include "./MarkdownParser.h"
#include "../stmd/src/buffer.h"
#include "../stmd/src/stmd.h"

namespace mdserver {

std::string MarkdownParser::ParseFromFile(FILE *mdfile) {
  node_block *root = stmd_parse_file(mdfile);
  strbuf buf = GH_BUF_INIT;
  stmd_render_html(&buf, root);
  stmd_free_nodes(root);
  std::string htmlstr = std::string(strbuf_cstr(&buf));
  strbuf_free(&buf);
  return htmlstr;
}

}  // namespace mdserver
