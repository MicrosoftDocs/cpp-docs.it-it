---
title: Inizializzazione delle parentesi graffe per classi, struct e unioni
description: Utilizzare l'inizializzazione delle parentesi graffe con qualsiasi classe, struct o unione di C
ms.date: 11/19/2019
ms.assetid: 3e55c3d6-1c6b-4084-b9e5-221b151402f4
ms.openlocfilehash: 4628ffe8935fc32e86468c631d5d9e9622d63d2e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374068"
---
# <a name="brace-initialization"></a>Inizializzazione con parentesi graffe

Non è sempre necessario definire un costruttore per una classe, in particolare quelli relativamente semplici. Gli utenti possono inizializzare oggetti di una classe o uno struct usando l'inizializzazione uniforme, come illustrato nell'esempio seguente:

```cpp
// no_constructor.cpp
// Compile with: cl /EHsc no_constructor.cpp
#include <time.h>

// No constructor
struct TempData
{
    int StationId;
    time_t timeSet;
    double current;
    double maxTemp;
    double minTemp;
};

// Has a constructor
struct TempData2
{
    TempData2(double minimum, double maximum, double cur, int id, time_t t) :
       stationId{id}, timeSet{t}, current{cur}, maxTemp{maximum}, minTemp{minimum} {}
    int stationId;
    time_t timeSet;
    double current;
    double maxTemp;
    double minTemp;
};

int main()
{
    time_t time_to_set;

    // Member initialization (in order of declaration):
    TempData td{ 45978, time(&time_to_set), 28.9, 37.0, 16.7 };

    // Default initialization = {0,0,0,0,0}
    TempData td_default{};

    // Uninitialized = if used, emits warning C4700 uninitialized local variable
    TempData td_noInit;

    // Member declaration (in order of ctor parameters)
    TempData2 td2{ 16.7, 37.0, 28.9, 45978, time(&time_to_set) };

    return 0;
}
```

Si noti che quando una classe o uno struct non dispone di alcun costruttore, si forniscono gli elementi dell'elenco nell'ordine in cui i membri vengono dichiarati nella classe. Se la classe dispone di un costruttore, fornire gli elementi nell'ordine dei parametri. Se un tipo dispone di un costruttore predefinito, dichiarato in modo implicito o esplicito, è possibile utilizzare l'inizializzazione predefinita con parentesi graffe (con le parentesi graffe vuote). Ad esempio, la classe seguente può essere inizializzata utilizzando sia l'inizializzazione con parentesi graffe predefinita che quella non predefinita:

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
    class_d d5{ "string", 'c', 2.0 }; // compiler error
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

È possibile utilizzare l'inizializzazione delle parentesi graffe ovunque si esegue in genere l'inizializzazione, ad esempio come parametro di funzione o valore restituito, o con la parola chiave **new:You** can use brace initialization anywhere you would typically do initialization, for example, as a function parameter or a return value, or with the new keyword:

```cpp
class_d* cf = new class_d{4.5};
kr->add_d({ 4.5 });
return { 4.5 };
```

In modalità **/std:c'17,** le regole per l'inizializzazione delle parentesi graffe vuote sono leggermente più restrittive. Vedere [Costruttori derivati e inizializzazione di aggregazione estesa](constructors-cpp.md#extended_aggregate).

## <a name="initializer_list-constructors"></a>Costruttori initializer_list

Il [initializer_list Class](../standard-library/initializer-list-class.md) rappresenta un elenco di oggetti di un tipo specificato che possono essere utilizzati in un costruttore e in altri contesti. È possibile creare un initializer_list tramite l'inizializzazione con parentesi graffe:

```cpp
initializer_list<int> int_list{5, 6, 7};
```

> [!IMPORTANT]
> Per utilizzare questa classe, [ \<](../standard-library/initializer-list.md) è necessario includere il initializer_list>'intestazione.

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
regex rgx{ 'x', 'y', 'z' };
```

## <a name="see-also"></a>Vedere anche

[Classi e struct](../cpp/classes-and-structs-cpp.md)<br/>
[Costruttori](../cpp/constructors-cpp.md)
