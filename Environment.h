//
// Created by oreste on 26/03/24.
//

#ifndef MDP_ENVIRONMENT_H
#define MDP_ENVIRONMENT_H

enum Action { MoveUp = 0, MoveDown, MoveLeft, MoveRight };

class Environment {
private:
    static const int NumStates = 16;
    int current_state;
public:
    Environment();
    [[nodiscard]] int getCurrentState() const;
    bool isTerminal() const;
    void takeAction(Action action);
};

#endif //MDP_ENVIRONMENT_H
