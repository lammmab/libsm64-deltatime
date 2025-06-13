#include "deltatime.h"

static float delta_time = 1.0f;  // Default to 1 for normal speed

void set_dt(float dt) {
    delta_time = dt;
}

float get_dt(void) {
    return delta_time;
}