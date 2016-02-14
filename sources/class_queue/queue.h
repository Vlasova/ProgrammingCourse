#ifndef QUEUE_H
#define QUEUE_H
/**
 * @brief Класс очередь
 */

class Queue {
public:
    /**
     * @brief Конструктор
     */
    Queue();
    Queue(const Queue &otherQueue);
    /**
     * @brief Добавление элемента в конец очереди
     * @param element Значение элемента
     * @throw error Если очередь полностью заполнена
     */
    int plus_element(int element);
    /**
     * @brief Удаление первого элемента
     * @throw error Если в очереди нет элементов
     */
    int minus_element();
    /**
     * @brief Вывод очереди
     */
    int print_queue();

private:
    const int SIZE=50;
    int *queue;
    int i;
    int begin_of_queue;
    int end_of_queue;


};



#endif // QUEUE_H

