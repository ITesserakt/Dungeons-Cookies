#include <string>

class Item
{
    private:
        // Описание конкретного предмета
        std::string description;
        // Чтобы не делать разбор падежей, будем использовать "корень" слова. Например для ложки - ложк
        std::string short_name;
};