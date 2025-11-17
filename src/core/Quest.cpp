#include "core/Quest.hpp"

namespace LifeGame {

Quest::Quest(int id, const std::string& title, const std::string& description, 
             QuestType type, QuestDifficulty difficulty, int xpReward, int tokenReward)
    : id_(id), title_(title), description_(description), type_(type), 
      difficulty_(difficulty), xpReward_(xpReward), tokenReward_(tokenReward), 
      completed_(false) {
}

// Геттеры
int Quest::getId() const {
    return id_;
}

std::string Quest::getTitle() const {
    return title_;
}

std::string Quest::getDescription() const {
    return description_;
}

QuestType Quest::getType() const {
    return type_;
}

bool Quest::isCompleted() const {
    return completed_;
}

int Quest::getXpReward() const {
    return xpReward_;
}

int Quest::getTokenReward() const {
    return tokenReward_;
}

// Действия
void Quest::complete() {
    completed_ = true;
}

void Quest::reset() {
    completed_ = false;
}

} // namespace LifeGame
