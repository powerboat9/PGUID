struct motorState {
    double power;
    bool isBroken;
} __attribute((__packed))

struct motorState *states;
void start() {
    states = (struct motorState *) safeMalloc(MOTORS * 5);
    for (int i = 0; i < MOTORS; i++) {
        calibrate(n);
    }
}

void calibrate(int n) {
    testMotor = (states + n)*
    if (testMotor.isBroken) {
        power = 0;
    } else {
        
    }
}