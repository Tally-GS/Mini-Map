#include "tile.h"

Tile::Tile(int id, bool player)
    : id(id), player_present(player),
      color(128 + (id % 50), 128 + ((id * 2) % 50), 128 + ((id * 3) % 50)) {}