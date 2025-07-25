# c_ex

# Компиляция и запуск
## Компилируем ручками
```c
gcc -Wall -Werror -Wextra <путь/название_файла> -o main && ./main
```
## Для строк
```c
gcc -Wall -Werror -Wextra <путь/название_файла> -o main && ./main < <имя_файла>
```


# Теория

Что нужно повторить перед экзаменом: 
1. работа со строками
2. динамическая память
3. работа с файлами
4. работа с матрицами

30 вопросов, многих из которых, имеют несколько вариантов ответов, что сильно усложняет решение.

### Общие вопросы по unix-системам.  
1. Основные модули unix-систем: ядро, файловая система, командная оболочка, утилиты
2. Валидные имена файлов - до 256 символов, буквы, цифры, . _ -, специальные символы, но их надо экранировать
```
проверяйте в блокноте
```
### ssh
### Cтроки. что такое строки, варианты их инициализации, доступ к их содержимому.
1. что такое строка, как она задаётся в си, как лежит в памяти, какие преимущества у строк в си и про выход за границы памяти
2. Какая функция делит строки на части по распределителю? 
```
split
```


### Матрицы. вопросы такого же характера, что и по строкам.
1. Третий блок: матрицы, вопросы про calloc, free, malloc и их аргументы.
2. Как инициализировать матрицу :
 ⁃ malloc без инициализации
 ⁃ Calloc для инициализации
 ⁃ Цикл for
 ⁃ Scanf
3. Ещё про способы инициализации и про то, как матрицы лежат в памяти
4. Что будет, если при выделении памяти под матрицу использовать один блок памяти? 
5. Вопросы по realloc уточняющие, что конкретно он делает и как именно выделяет память. 

### Структуры, как выделять под них память, что можно с ними делать, как к ним обращаться, есть ли перегрузка и так далее.

### Функции из стандартной библиотеки.
1. что вернет strcmp("abc", "abcd");
```
< 0
```
2. что делает strcat 
```
Функция strcat()объединяет  destination строку и source строку, а результат сохраняется в destination строке
```
3. Scanf(). Что возвращает? 
```
Функция scanf() в языке C возвращает количество успешно считанных и присвоенных полей.
```
4. atoi, atol, catstr и ascii_to_int - выбираем существующие(можно проверить через man)
```
по последней группе вопросов можно безнаказанно юзать man в консоли, если вдруг забыли или сомневаетесь в правильности ответов или
```
### Разные
1. какие аргументы у main – 
```
аргументы командной строки, которые передаются при запуске программы
argc: Целочисленная переменная, содержащая количество аргументов, переданных в программу. Всегда не меньше 1, так как первый аргумент - это имя самой программы. 
argv: Массив указателей на строки (массив строк), где каждый элемент массива содержит один из аргументов командной строки. 
```
2. что такое коипоновщик, препроцессор
```
компоновщик - инструментальная программа, которая производит компоновку («линковку»): принимает на вход один или несколько объектных модулей и собирает из них исполняемый или библиотечный файл-модуль.
препроцессор –  компьютерная программа, принимающая данные на входе и выдающая данные, предназначенные для входа другой программы (например, компилятора).
Наиболее широкое распространение среди лексических препроцессоров получил препроцессор языка Си, используемый в языках программирования Си и его потомке — C++. Препроцессор удаляет из кода комментарии, преобразует код в соответствии с макросами и выполняет иные директивы, начинающиеся с символа «#» (такие как #include, #define, разнообразные директивы типа #pragma).

```
3. int const *ptr. Можно ли изменить значение или указатель? Указатель
```
Надо смотреть где стоит const
после * – значит константный указатель
до или после типа – значит константное значение
```
4. Regex и wildcard - функция записывающая в переменную все переменные подходящие шаблону
5. Функции для работы с регулярными выражениями 
```
regcomp, regexec, regfree, regerror
```
6.  Какие цепочки преобразований пройдут без потери данных(варианты на выбор):
```
 ⁃ double->long double-> float ❌ (сужение)
 ⁃ char-> short-> int -> long double ✅
 ⁃ unsigned char-> unsigned short-> unsigned int -> unsigned long ✅
```
7. Short. Сколько байт, диапазон и свойства.
```
2 байта, -32768 - 32767
``` 
8.  Const как хранится в памяти. в сегменте памяти с запретом записи


# Практическая часть
Второе задание объемное и если делали на лайте первое, то времени может не хватить.
Примеры второго задания, которые попадались:
```
7-1
9-1
6-1
```
г) "Создать структуру вектор с тремя интами, создать массив с выделением динамической памяти, заполнить массив координатами, затем подсчет длины векторов и вывод суммы длин векторов больше заданного"

 Например структура вектор и считаем сумму длин всех векторов, у которых она больше введённого числа. Или структура человек(имя фамилия рост). На вход имя и выводим фамилии с этим именем с максимальным и минимальным ростом и среднее их роста. Во втором проверки на ввод. Делал scanf==1 потом getchar и проверка на \n. Обязательно тестируем вводом через файл. Также очень важно правильно прочитать условие и проверить все данные тесты)), а то у меня были проблемы только с этим. Ключ командой ssh-keygen -t rsa. Потом переходим в папку и открываем pub файл

В структуре Person 3 поля: имя, фамилия и рост. В начале вводится число n - количество объектов структуры. Затем вводятся именая, фамилии и рост для n объектов. Затем вводится имя.

Нужно вывести фамилии всех людей с этим именем и их средний рост в виде числа округленного до ближайшего целого.

Пример:
Ввод: 3
John
Week
190
Amamdeus
Mozart
150
John
Cena
180
Вывод:
Week, Cena, 185


Первое задание: Вводится последовательность целых положительных чисел, заканчивающаяся -1 (не входит в последовательность). Переставить первое максимальное с первым минимальным местами. Проверить на ввод и в случае ошибки вывести n/a.
Пример:
Ввод: 1 2 3 4 5 6 7 8 9 -1
Вывод: 9 2 3 4 5 6 7 8 1

Второе задание: Посчитать количество предложений в файле, заканчивающихся на ".!?". Самое главное что файл вводится через stdin и его ввод заканчивается "\n". По проверкам не успел погонять, так как у меня экзамен начался через 25 минут после начала, так как комп тупо тормозил.

4 уровень
структуры и динамическая память
Описать структуру "Человек", содержащую следующую информацию: имя (строка), фамилия (строка) и рост (целое положительное число). Написать программу, осуществляющую заполнение массива, состоящего из N элементов типа "Человек", где N вводится на стандартный поток ввода stdin в виде целого положительного числа, после чего последовательно, построчно, с окончанием "\n", вводятся N раз через stdin информация для заполнения элементов массива. После заполнения массива поступает имя, необходимо посчитать средний рост людей с данным именем и вывести на stdout через запятую с пробелом фамилии людей, которые участвовали в подсчете среднего роста. После последней фамилии двоеточие с пробелом и средний рост (округлить до целого). В конце ответа не нужно переноса на новую строку, в случае ошибки "n/a".
```
ПРИМЕР:
stdin
3
John
Wick
190
Scarlett
Brown
166
John
King
180
John
stdout
Wick, King: 185
```