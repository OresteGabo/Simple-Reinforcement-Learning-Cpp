//
// Created by oreste on 26/03/24.
//

#ifndef MDP_AGENT_H
#define MDP_AGENT_H


#include <random>
#include "Environment.h"

class Agent {
private:
    static std::mt19937 gen;
public:
    Agent();
    Action choose_action();
};



#endif //MDP_AGENT_H
