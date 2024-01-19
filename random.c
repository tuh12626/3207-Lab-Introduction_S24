#include "random.h"
#include <stdlib.h>
// ranchar() function

char randchar() {
    return (char)('A' + rand() % 26);
}