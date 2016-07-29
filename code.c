struct motorState {
    double power;
    bool isBroken;
} __attribute((__packed))

struct motorState *states;
void start() {
    states = (struct motorState *) safeMalloc(MOTORS * 5);
    for (int i = 0; i < MOTORS; i++) {
        struct motorState currentMotor = (states + i);
        currentMotor->power = 1;
        currentMotor->isBroken = false;
    }
}

double oldYaw;
double oldRoll;
bool oldRotExists = false;
void calibrate() {
    double newYaw = getYaw();
    double newRoll = getRoll();
    if (oldRotExists) {
        
    }
    oldYaw = newYaw;
    oldRoll = newRoll;
}