/* commentnode.h
 * libxml++ and this file are copyright (C) 2000 by Ari Johnson, and
 * are covered by the GNU Lesser General Public License, which should be
 * included with libxml++ as the file COPYING.
 */

#ifndef __LIBXMLPP_NODES_COMMENTNODE_H
#define __LIBXMLPP_NODES_COMMENTNODE_H

#include <libxml++/nodes/contentnode.h>

namespace xmlpp
{

/** Comment node. This will be instantiated by the parser.
 */
class CommentNode : public ContentNode
{
public:
  explicit CommentNode(_xmlNode* node);
  ~CommentNode() override;
};

} // namespace xmlpp

#endif //__LIBXMLPP_NODES_COMMENTNODE_H



