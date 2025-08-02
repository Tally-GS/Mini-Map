#include <iostream>
#include <map>
#include <vector>
#include "tile.h"

int main() {
    std::cout << "Mini-Map Cartographers - Starting..." << std::endl;

    //basic tile creation
    Tile test_tile(0, false);
    std::cout << "Created tile " << test_tile.id << " with color ("
              << test_tile.color.r << "," << test_tile.color.g << ","
              << test_tile.color.b << ")" << std::endl;

    // Test
    std::map<int, Tile> tile_map;
    tile_map[0] = test_tile;

    std::cout << "Basic setup working!" << std::endl;
    return 0;
}