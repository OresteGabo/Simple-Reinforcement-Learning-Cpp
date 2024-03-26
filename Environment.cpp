//
// Created by oreste on 26/03/24.
//

#include "Environment.h"
#include <iostream>

Environment::Environment() : current_state(0) {}

int Environment::getCurrentState() const {
    return current_state;
}

bool Environment::isTerminal() const {
    return current_state == NumStates - 1;
}

void Environment::takeAction(Action action) {
    switch (action) {
        case MoveUp:     if (current_state >= 4) current_state -= 4; break;
        case MoveDown:   if (current_state < 12) current_state += 4; break;
        case MoveLeft:   if (current_state % 4 != 0) current_state -= 1; break;
        case MoveRight:  if (current_state % 4 != 3) current_state += 1; break;
        default:         std::cerr << "Invalid action!" << std::endl;
    }
}