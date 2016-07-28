void onDamage(int n);
void onMemError();
void start();

void *safeMalloc(long size) {
    void *ptr = malloc(size);
    if (ptr == NULL) {
        onMemError();
    }
    return ptr;
}

void *safeRealloc(void *oldPtr, long size) {
    void *ptr == realloc(oldPtr, size);
    if (ptr == NULL) {
        onMemError();
    }
    return ptr;
}