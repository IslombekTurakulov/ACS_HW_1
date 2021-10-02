# Домашнее задание "Архитектура вычислительных систем"
## Задача: Языки программирования
### Автор: Туракулов Исломбек Улугбекович

### Входные данные
Для успешной работы с программой необходимо соблюдать порядок ввода.
```
functional sdgfsdfsd abacab 35 true 0    Нет!
functional xcvxcv 1976 50 true 1      Правильно!
```

## Условие задачи
### Общие для всех альтернатив переменные
* Популярность в процентах (TIOBI) — действительное
* Год создания — целое
### Общие для всех альтернатив функции
Частное от деления года создания на количество символов в названии (действительное число)
### Базовые альтернативы
#### _Процедурные_

* наличие, отсутствие абстрактных типов данных – булевская величина

#### _Объектно-ориентированные_

* наследование: одинарное, множественное, интерфейса – перечислимый тип

#### _Функциональные_
* типизация – перечислимый тип = строгая, динамическая
* поддержка «ленивых» вычислений – булевский тип

### Функционал
_После размещения данных в контейнер необходимо осуществить их обработку
в соответствии с вариантом задания.
Обработанные данные после этого заносятся в отдельный файл результатов._

Упорядочить элементы контейнера по возрастанию используя сортировку
Сортировка с помощью прямого выбора (Straight Selection).
В качестве ключей для сортировки и других действий используются
результаты функции, общей для всех альтернатив.

``` 
* В соответствии с вариантом задания разработать программный продукт с
   использованием процедурного подхода и статической типизацией.
   Разработку осуществить на языке программирования C или на языке C++ в стиле C.

* Провести отладку и тестирование разработанной программы на заранее
   подготовленных тестовых наборах данных.
   Количество тестовых наборов данных – не менее пяти.
   Число уникальных элементов в тестовых наборах должно варьироваться от нуля до 10000.
   При необходимости, программа должна правильно обрабатывать переполнение по данным.
   Тестовые наборы до 20 элементов должны вводиться из заранее подготовленных тестовых файлов. Тестовые данные с большим числом элементов должны порождаться программно с использованием генераторов случайных наборов данных. Данные, формируемые генератом случайных наборов должны поддерживать допустимые значения. Управление вводом данных задается из командной строки.

* Описать структуру используемой ВС с наложением на нее обобщенной схемы
   разработанной программы.
* Зафиксировать для отчета основные характеристики программы, такие как:
   число интерфейсных модулей (заголовочных файлов) и
   модулей реализации (фалов с определением программных объектов),
   общий размер исходных текстов, полученный размер исполняемого кода (если он формируется),
   время выполнения программы для различных тестовых наборов данных.
   ```
