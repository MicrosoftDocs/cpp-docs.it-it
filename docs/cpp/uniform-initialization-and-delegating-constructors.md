---
title: Uniforme di inizializzazione e costruttori deleganti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: aa4daa64-eaec-4a3c-ade4-d9325e31e9d4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 80beb5e840e182396f519b6b827dd8d727252d61
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46116243"
---
# <a name="uniform-initialization-and-delegating-constructors"></a>Inizializzazione uniforme e costruttori deleganti

Nel linguaggio C++ moderno, è possibile usare *inizializzazione con parentesi graffe* per qualsiasi tipo, senza il segno di uguale. Inoltre, è possibile utilizzare la delega dei costruttori per semplificare il codice quando si dispone di più costruttori che eseguono operazioni simili.

## <a name="brace-initialization"></a>Inizializzazione con parentesi graffe

È possibile utilizzare l'inizializzazione con parentesi graffe per qualsiasi classe, struct o unione. Se un tipo dispone di un costruttore predefinito, dichiarato in modo implicito o esplicito, è possibile utilizzare l'inizializzazione predefinita con parentesi graffe (con le parentesi graffe vuote). Ad esempio, la classe seguente può essere inizializzata utilizzando sia l'inizializzazione con parentesi graffe predefinita che quella non predefinita:

```cpp
#include <string>
using namespace std;

class class_a {
public:
    class_a() {}
    class_a(string str) : m_string{ str } {}
    class_a(string str, double dbl) : m_string{ str }, m_double{ dbl } {}
double m_double;
string m_string;
};

int main()
{
    class_a c1{};
    class_a c1_1;

    class_a c2{ "ww" };
    class_a c2_1("xx");

    // order of parameters is the same as the constructor
    class_a c3{ "yy", 4.4 };
    class_a c3_1("zz", 5.5);
}
```

Se la classe dispone di costruttori non predefiniti, l'ordine in cui i membri della classe vengono visualizzati nell'inizializzatore con parentesi graffe è l'ordine in cui appaiono i parametri corrispondenti nel costruttore, non l'ordine in cui i membri vengono dichiarati (come nel caso di `class_a` nell'esempio precedente). Altrimenti, se il tipo non dispone di alcun costruttore dichiarato, l'ordine in cui i membri vengono visualizzati nell'inizializzatore con parentesi graffe corrisponde all'ordine in cui essi sono dichiarati; in questo caso, è possibile inizializzare un numero a piacere di membri pubblici, ma non è possibile ignorare alcun membro. Nell'esempio seguente viene illustrato l'ordine utilizzato nell'inizializzazione con parentesi graffe quando non vi è alcun costruttore dichiarato:

```cpp
class class_d {
public:
    float m_float;
    string m_string;
    wchar_t m_char;
};

int main()
{
    class_d d1{};
    class_d d1{ 4.5 };
    class_d d2{ 4.5, "string" };
    class_d d3{ 4.5, "string", 'c' };

    class_d d4{ "string", 'c' }; // compiler error
    class_d d5("string", 'c', 2.0 }; // compiler error
}
```

Se il costruttore predefinito è dichiarato in modo esplicito ma contrassegnato come eliminato, l'inizializzazione con parentesi graffe predefinita non può essere utilizzata:

```cpp
class class_f {
public:
    class_f() = delete;
    class_f(string x): m_string { x } {}
    string m_string;
};
int main()
{
    class_f cf{ "hello" };
    class_f cf1{}; // compiler error C2280: attempting to reference a deleted function
}
```

È possibile usare l'inizializzazione con parentesi graffe ovunque si esegua in genere l'inizializzazione, ad esempio, come un parametro di funzione o un valore restituito o con il **nuovo** (parola chiave):

```cpp
class_d* cf = new class_d{4.5};
kr->add_d({ 4.5 });
return { 4.5 };
```

## <a name="initializerlist-constructors"></a>Costruttori di initializer_list

Il [classe initializer_list](../standard-library/initializer-list-class.md) rappresenta un elenco di oggetti di un tipo specificato che può essere usato in un costruttore e in altri contesti. È possibile creare un initializer_list tramite l'inizializzazione con parentesi graffe:

```cpp
initializer_list<int> int_list{5, 6, 7};
```

> [!IMPORTANT]
>  Per usare questa classe, è necessario includere il [ \<initializer_list >](../standard-library/initializer-list.md) intestazione.

Un `initializer_list` può essere copiato. In questo caso, i membri del nuovo elenco sono riferimenti ai membri dell'elenco originale:

```cpp
initializer_list<int> ilist1{ 5, 6, 7 };
initializer_list<int> ilist2( ilist1 );
if (ilist1.begin() == ilist2.begin())
    cout << "yes" << endl; // expect "yes"
```

Le classi di contenitori di libreria standard e `string`, `wstring` e `regex`, dispongono di costruttori `initializer_list`. Negli esempi seguenti viene illustrato come effettuare l'inizializzazione con parentesi graffe con questi costruttori:

```cpp
vector<int> v1{ 9, 10, 11 };
map<int, string> m1{ {1, "a"}, {2, "b"} };
string s{ 'a', 'b', 'c' };
regex rgx{'x', 'y', 'z'};
```

## <a name="delegating-constructors"></a>Delega dei costruttori

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