#pragma once

#include "graph/dfs.h"


// template<typename SimpleGraphT>
// std::vector<GraphIndex> topological_sort(const SimpleGraph& graph) {
//   // TODO
// }

template<typename SimpleGraphT>
std::vector<GraphIndex> topological_sort_reachable(const SimpleGraphT& graph,
                                                   const std::vector<GraphIndex>& starting_vetrices) {
  return dfs(graph,
             starting_vetrices,
             [](std::vector<GraphIndex> accumulated, GraphIndex v) {
               accumulated.push_back(v);
               return accumulated;
             },
             std::vector<GraphIndex>{});
}