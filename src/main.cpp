#include <iostream>
#include "core/Quest.hpp"

using namespace LifeGame;

int main() {
    std::cout << "=== LifeGame Test ===\n";
    
    // Создаем тестовый квест
    Quest morningQuest(1, "Заправить постель", "Сделать кровать аккуратной", 
                      QuestType::DAILY, QuestDifficulty::EASY, 25, 10);
    
    std::cout << "Квест создан: " << morningQuest.getTitle() << "\n";
    std::cout << "Выполнен: " << (morningQuest.isCompleted() ? "Да" : "Нет") << "\n";
    std::cout << "Награда: " << morningQuest.getXpReward() << " XP, " 
              << morningQuest.getTokenReward() << " токенов\n";
    
    // Выполняем квест
    morningQuest.complete();
    std::cout << "После выполнения: " << (morningQuest.isCompleted() ? "Да" : "Нет") << "\n";
    
    std::cout << "=== Тест завершен ===\n";
    return 0;
}
