---
title: Delega di costruttori (C++)
description: Usare i costruttori di delega in C++ per richiamare altri costruttori e ridurre la ripetizione del codice.
ms.date: 11/19/2019
ms.openlocfilehash: 533cdfbeb882f3770cc554b0633611a4ffc2cfbd
ms.sourcegitcommit: 654aecaeb5d3e3fe6bc926bafd6d5ace0d20a80e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2019
ms.locfileid: "74250674"
---
# <a name="delegating-constructors"></a>Delega dei costruttori

Molte classi dispongono di più costruttori che svolgono funzioni simili, come ad esempio la convalida di parametri:

```cpp
class class_c {
public:
    int max;
    int min;
    int middle;

    class_c() {}
    class_c(int my_max) {
        max = my_max > 0 ? my_max : 10;
    }
    class_c(int my_max, int my_min) {
        max = my_max > 0 ? my_max : 10;
        min = my_min > 0 && my_min < max ? my_min : 1;
    }
    class_c(int my_max, int my_min, int my_middle) {
        max = my_max > 0 ? my_max : 10;
        min = my_min > 0 && my_min < max ? my_min : 1;
        middle = my_middle < max && my_middle > min ? my_middle : 5;
    }
};
```

È possibile ridurre il codice ripetitivo aggiungendo una funzione che esegue l'intera convalida, ma il codice per `class_c` sarebbe più facile da comprendere e gestire se un costruttore fosse in grado di delegare parte del lavoro ad un altro. Per aggiungere la delega dei costruttori, utilizzare la sintassi `constructor (. . .) : constructor (. . .)`:

```cpp
class class_c {
public:
    int max;
    int min;
    int middle;

    class_c(int my_max) {
        max = my_max > 0 ? my_max : 10;
    }
    class_c(int my_max, int my_min) : class_c(my_max) {
        min = my_min > 0 && my_min < max ? my_min : 1;
    }
    class_c(int my_max, int my_min, int my_middle) : class_c (my_max, my_min){
        middle = my_middle < max && my_middle > min ? my_middle : 5;
}
};
int main() {

    class_c c1{ 1, 3, 2 };
}
```

Nell'esaminare l'esempio precedente, notare che il costruttore `class_c(int, int, int)` chiama prima il costruttore `class_c(int, int)`, che a sua volta chiama `class_c(int)`. Ciascuno dei costruttori esegue solo il lavoro che non viene eseguito dagli altri costruttori.

Il primo costruttore chiamato inizializza l'oggetto in modo da inizializzare tutti i relativi membri in tale posizione. Non è possibile eseguire l'inizializzazione dei membri in un costruttore che delega del lavoro a un altro costruttore, come illustrato di seguito:

```cpp
class class_a {
public:
    class_a() {}
    // member initialization here, no delegate
    class_a(string str) : m_string{ str } {}

    //can’t do member initialization here
    // error C3511: a call to a delegating constructor shall be the only member-initializer
    class_a(string str, double dbl) : class_a(str) , m_double{ dbl } {}

    // only member assignment
    class_a(string str, double dbl) : class_a(str) { m_double = dbl; }
    double m_double{ 1.0 };
    string m_string;
};
```

Nell'esempio seguente viene illustrato l'utilizzo degli inizializzatori dei membri dati non statici. Notare che se un costruttore inizializza anche un membro dati specifico, l'inizializzatore del membro viene ignorato:

```cpp
class class_a {
public:
    class_a() {}
    class_a(string str) : m_string{ str } {}
    class_a(string str, double dbl) : class_a(str) { m_double = dbl; }
    double m_double{ 1.0 };
    string m_string{ m_double < 10.0 ? "alpha" : "beta" };
};

int main() {
    class_a a{ "hello", 2.0 };  //expect a.m_double == 2.0, a.m_string == "hello"
    int y = 4;
}
```

La sintassi della delega del costruttore non impedisce la creazione accidentale di ricorsione del costruttore, ad esempio Costruttore1 chiama Costruttore2 il quale chiama Costruttore1, e non viene generato alcun errore fino a quando non vi sia un overflow dello stack. È responsabilità dello sviluppatore evitare i cicli.

```cpp
class class_f{
public:
    int max;
    int min;

    // don't do this
    class_f() : class_f(6, 3){ }
    class_f(int my_max, int my_min) : class_f() { }
};
```
