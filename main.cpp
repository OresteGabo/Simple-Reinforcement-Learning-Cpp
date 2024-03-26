#include <iostream>
#include "Environment.h"
#include "Agent.h"

// Main function
void runEpisode(Environment& env, Agent& agent) {
    int episode = 0;
    while (!env.isTerminal()) {
        Action action = agent.choose_action();
        env.takeAction(action);
        std::cout << "Episode " << episode << ", Current state: " << env.getCurrentState() << std::endl;
        ++episode;
    }
}

int main() {
    Environment env;
    Agent agent;
    for (int i = 0; i < 10; ++i)
        runEpisode(env, agent);
    return 0;
}