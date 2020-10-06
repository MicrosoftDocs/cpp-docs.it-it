---
title: istruzione if-else (C++)
description: Usare le istruzioni if-else, if-else con inizializzatore e If-constExpr per controllare la diramazione condizionale.
ms.date: 10/02/2020
f1_keywords:
- else_cpp
- if_cpp
helpviewer_keywords:
- if keyword [C++]
- else keyword [C++]
ms.assetid: f8c45cde-6bce-42ae-81db-426b3dbd4caa
ms.openlocfilehash: 20d828bf00a79687fe0a9fffbeb1a9cc56fae08c
ms.sourcegitcommit: 30792632548d1c71894f9fecbe2f554294b86020
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/06/2020
ms.locfileid: "91765304"
---
# <a name="if-else-statement-c"></a>istruzione if-else (C++)

Un'istruzione if-else controlla la diramazione condizionale. Le istruzioni in *`if-branch`* vengono eseguite solo se *`condition`* restituisce un valore diverso da zero (o **`true`** ). Se il valore di *`condition`* è diverso da zero, viene eseguita l'istruzione seguente e l'istruzione che segue l'istruzione facoltativa **`else`** viene ignorata. In caso contrario, l'istruzione seguente viene ignorata e, se è presente, **`else`** viene eseguita l'istruzione che segue **`else`** .

*`condition`* le espressioni che restituiscono un valore diverso da zero sono:

- **`true`**
- un puntatore non null,
- qualsiasi valore aritmetico diverso da zero, oppure
- tipo di classe che definisce una conversione non ambigua a un tipo aritmetico, booleano o puntatore. Per informazioni sulle conversioni, vedere [conversioni standard](../cpp/standard-conversions.md).

## <a name="syntax"></a>Sintassi

*`init-statement`*:\
&emsp; *`expression-statement`*\
&emsp; *`simple-declaration`*

*`condition`*:\
&emsp; *`expression`*\
&emsp;*`attribute-specifier-seq`* <sub>*consenso esplicito*</sub> *`decl-specifier-seq`* *`declarator`**`brace-or-equal-initializer`*

*`statement`*:\
&emsp; *`expression-statement`*\
&emsp; *`compound-statement`*

*`expression-statement`*:\
&emsp;*`expression`* <sub>*consenso esplicito*</sub>**`;`**

*`compound-statement`*:\
&emsp;**`{`** *`statement-seq`* <sub>*consenso esplicito*</sub>**`}`**

*`statement-seq`*:\
&emsp; *`statement`*\
&emsp; *`statement-seq`* *`statement`*

*`if-branch`*:\
&emsp; *`statement`*

*`else-branch`*:\
&emsp; *`statement`*

*`selection-statement`*:\
&emsp;**`if`** **`constexpr`** <sub>*opt*</sub><sup>17</sup> **`(`** *`init-statement`* <sub>*opt*</sub><sup>17</sup> 17 *`condition`* **`)`***`if-branch`*\
&emsp;**`if`** **`constexpr`** <sub>*opt*</sub><sup>17</sup> **`(`** *`init-statement`* <sub>*opt*</sub><sup>17</sup> 17 *`condition`* **`)`** *`if-branch`* **`else`***`else-branch`*

<sup>17</sup> questo elemento facoltativo è disponibile a partire da c++ 17.

## <a name="if-else-statements"></a>istruzioni if-else

In tutti i formati dell' **`if`** istruzione, *`condition`* , che può avere qualsiasi valore tranne una struttura, viene valutato, inclusi tutti gli effetti collaterali. Il controllo passa dall' **`if`** istruzione all'istruzione successiva nel programma, a meno che l'oggetto non sia stato eseguito *`if-branch`* o *`else-branch`* contenga un oggetto [`break`](../cpp/break-statement-cpp.md) , [`continue`](../cpp/continue-statement-cpp.md) o [`goto`](../cpp/goto-statement-cpp.md) .

La **`else`** clausola di un' `if...else` istruzione è associata all'istruzione precedente più vicina **`if`** nello stesso ambito senza un' **`else`** istruzione corrispondente.

### <a name="example"></a>Esempio

Questo codice di esempio illustra diverse **`if`** istruzioni in uso, sia con che senza **`else`** :

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

## <a name="if-statement-with-an-initializer"></a><a name="if_with_init"></a> istruzione if con un inizializzatore

A partire da C++ 17, un' **`if`** istruzione può contenere anche un' *`init-statement`* espressione che dichiara e Inizializza una variabile denominata. Utilizzare questo formato dell'istruzione If-quando la variabile è necessaria solo nell'ambito dell'istruzione if. **Specifico di Microsoft**: questo modulo è disponibile a partire da Visual Studio 2017 versione 15,3 e richiede almeno l' [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) opzione del compilatore.

### <a name="example"></a>Esempio

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

## <a name="a-nameif_constexpr-if-constexpr-statements"></a><a name="if_constexpr"> Se istruzioni constExpr

A partire da C++ 17, è possibile usare un' **`if constexpr`** istruzione nei modelli di funzione per eseguire decisioni di diramazione in fase di compilazione senza dover ricorrere a più overload di funzione. **Specifico di Microsoft**: questo modulo è disponibile a partire da Visual Studio 2017 versione 15,3 e richiede almeno l' [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) opzione del compilatore.

### <a name="example"></a>Esempio

Questo esempio illustra come scrivere una singola funzione che gestisce la decompressione di parametri. Non è necessario alcun overload di parametri zero:

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

[Istruzioni di selezione](../cpp/selection-statements-cpp.md)\
[Parole](../cpp/keywords-cpp.md)\
[`switch` Istruzione (C++)](../cpp/switch-statement-cpp.md)
