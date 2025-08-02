#ifndef tile_h
#define tile_h

struct Color {
    int r, g, b;
    Color(int r = 128, int g = 128, int b = 128) : r(r), g(g), b(b) {}
};

struct Tile {
    int id;
    bool player_present;
    Color color;

    Tile(int id = 0, bool player = false);
};

#endif