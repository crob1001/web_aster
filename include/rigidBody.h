typedef struct RigidBody {
    SDL_Point center, pos, size, vel, acc;
    double ang, angV, angA, mass, frict;
    SDL_Texture *texture;
} RigidBody; 
