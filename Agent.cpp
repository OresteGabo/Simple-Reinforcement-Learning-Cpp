//
// Created by oreste on 26/03/24.
//

#include "Agent.h"
#include "Agent.h"

std::mt19937 Agent::gen(std::random_device{}());

Agent::Agent() {}

Action Agent::choose_action() {
    return static_cast<Action>(std::uniform_int_distribution<>(0, 3)(gen));
}