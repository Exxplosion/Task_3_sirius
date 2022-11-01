#pragma once
#include "Matrix.h"
#include <vector>
#include <iostream>

class dijkstra
{
    public:
        const unsigned int INF_ = 4e4;
        uint32_t x_s;
        uint32_t x_f;
        uint32_t N = 0, M = 0;
        uint32_t count_vertex = 0;
        MatrixP adjancency_matrix;
        std::vector<std::vector<std::pair<uint32_t, uint32_t>>> adjacency_list; //may using typedef here;

        std::vector<uint32_t> current_weights;
        std::vector<uint32_t> parrent_array;
        std::vector<bool> marker;
        std::vector<uint32_t> optimal_path;

        void find_optimal_weights();
        std::vector<uint32_t>& find_optimal_path();
        std::vector<uint32_t>& path_to_dumb_view() const;

        dijkstra() = default;
        dijkstra(MatrixP &enter_matrix, uint32_t x_s, uint32_t x_f);

        void matrix_to_adjacency_list(std::vector<std::vector<std::pair<uint32_t, uint32_t>>>& adjacency_list, const MatrixP& adjancency_matrix);
        void print_adjacency_list() const;
};