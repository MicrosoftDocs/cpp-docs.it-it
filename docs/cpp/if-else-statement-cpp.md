---
title: Istruzione if-else (C++)
ms.date: 07/20/2019
description: Usare le istruzioni if-else in C++ per controllare la diramazione condizionale.
f1_keywords:
- else_cpp
- if_cpp
helpviewer_keywords:
- if keyword [C++]
- else keyword [C++]
ms.assetid: f8c45cde-6bce-42ae-81db-426b3dbd4caa
ms.openlocfilehash: a9256e32c89890635c5473a85b4bb3b56bec26d4
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87187569"
---
# <a name="if-else-statement-c"></a>Istruzione if-else (C++)

Controlla la creazione di un ramo condizionale. Le istruzioni nel *blocco If* vengono eseguite solo se l' *espressione if* restituisce un valore diverso da zero (o **`true`** ). Se il valore di *Expression* è diverso da zero, *istruzione1* e qualsiasi altra istruzione nel blocco vengono eseguiti e il blocco Else, se presente, viene ignorato. Se il valore di *Expression* è zero, il blocco if viene ignorato e il blocco Else, se presente, viene eseguito. Le espressioni che restituiscono un valore diverso da zero sono

- **`true`**
- un puntatore non null,
- qualsiasi valore aritmetico diverso da zero, oppure
- tipo di classe che definisce una conversione non ambigua a un tipo aritmetico, booleano o puntatore. Per informazioni sulle conversioni, vedere [conversioni standard](../cpp/standard-conversions.md).

## <a name="syntax"></a>Sintassi

```cpp
if ( expression )
{
   statement1;
   ...
}
else  // optional
{
   statement2;
   ...
}

// C++17 - Visual Studio 2017 version 15.3 and later:
if ( initialization; expression )
{
   statement1;
   ...
}
else  // optional
{
   statement2;
   ...
}

// C++17 - Visual Studio 2017 version 15.3 and later:
if constexpr (expression)
{
    statement1;
    ...
}
else  // optional
{
   statement2;
   ...
}
```

## <a name="example"></a>Esempio

```cpp
// if_else_statement.cpp
#include <iostream>

using namespace std;

class C
{
    public:
    void do_something(){}
};
void init(C){}
bool is_true() { return true; }
int x = 10;

int main()
{
    if (is_true())
    {
        cout << "b is true!\n";  // executed
    }
    else
    {
        cout << "b is false!\n";
    }

    // no else statement
    if (x == 10)
    {
        x = 0;
    }

    C* c;
    init(c);
    if (c)
    {
        c->do_something();
    }
    else
    {
        cout << "c is null!\n";
    }
}
```

## <a name="if-statement-with-an-initializer"></a><a name="if_with_init"></a>istruzione if con un inizializzatore

**Visual Studio 2017 versione 15,3 e successive** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)): un' **`if`** istruzione può contenere anche un'espressione che dichiara e Inizializza una variabile denominata. Utilizzare questo formato dell'istruzione If-quando la variabile è necessaria solo nell'ambito del blocco If.

## <a name="example"></a>Esempio

```cpp
#include <iostream>
#include <mutex>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

map<int, string> m;
mutex mx;
bool shared_flag; // guarded by mx
void unsafe_operation() {}

int main()
{

    if (auto it = m.find(10); it != m.end())
    {
        cout << it->second;
        return 0;
    }

    if (char buf[10]; fgets(buf, 10, stdin))
    {
        m[0] += buf;
    }

    if (lock_guard<mutex> lock(mx); shared_flag)
    {
        unsafe_operation();
        shared_flag = false;
    }

    string s{ "if" };
    if (auto keywords = { "if", "for", "while" }; any_of(keywords.begin(), keywords.end(), [&s](const char* kw) { return s == kw; }))
    {
        cout << "Error! Token must not be a keyword\n";
    }
}
```

In tutte le forme dell' **`if`** istruzione, l' *espressione*, che può avere qualsiasi valore tranne una struttura, viene valutata, inclusi tutti gli effetti collaterali. Il controllo passa dall' **`if`** istruzione all'istruzione successiva nel programma, a meno che una delle *istruzioni*contenga [break](../cpp/break-statement-cpp.md), [continue](../cpp/continue-statement-cpp.md)o [goto](../cpp/goto-statement-cpp.md).

La **`else`** clausola di un' `if...else` istruzione è associata all'istruzione precedente più vicina **`if`** nello stesso ambito che non dispone di un' **`else`** istruzione corrispondente.

## <a name="a-nameif_constexpr-if-constexpr-statements"></a><a name="if_constexpr">Se istruzioni constExpr

**Visual Studio 2017 versione 15,3 e successive** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)): nei modelli di funzione è possibile usare un'istruzione **if constExpr** per eseguire decisioni di diramazione in fase di compilazione senza dover ricorrere a più overload di funzione. Ad esempio, è possibile scrivere una singola funzione che gestisce la decompressione del parametro (non è necessario alcun overload di parametro zero):

```cpp
template <class T, class... Rest>
void f(T&& t, Rest&&... r)
{
    // handle t
    do_something(t);

    // handle r conditionally
    if constexpr (sizeof...(r))
    {
        f(r...);
    }
    else
    {
        g(r...);
    }
}
```

## <a name="see-also"></a>Vedere anche

[Istruzioni di selezione](../cpp/selection-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Istruzione switch (C++)](../cpp/switch-statement-cpp.md)
