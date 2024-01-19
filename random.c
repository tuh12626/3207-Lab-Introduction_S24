#include "random.h"

char randchar() {
    return (char)('A' + rand() % 26);
}