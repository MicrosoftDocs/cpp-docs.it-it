---
description: 'Altre informazioni su: `auto` (C++)'
title: auto (C++)
ms.date: 12/10/2019
f1_keywords:
- auto_CPP
- auto
helpviewer_keywords:
- auto keyword [C++]
ms.assetid: e9d495d7-601c-4547-b897-998389a311f4
ms.openlocfilehash: 2237c8aa3cb1b1078a8b90ba5a3ba6cba0a7134b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319469"
---
# <a name="auto-c"></a>`auto` C++

Deduce il tipo di una variabile dichiarata dall'espressione di inizializzazione.

> [!NOTE]
> Lo standard C++ definisce un significato originale e modificato per questa parola chiave. Prima di Visual Studio 2010, la **`auto`** parola chiave dichiara una variabile nella classe di archiviazione *automatica* , ovvero una variabile con una durata locale. A partire da Visual Studio 2010, la **`auto`** parola chiave dichiara una variabile il cui tipo viene dedotto dall'espressione di inizializzazione nella relativa dichiarazione. L'opzione del compilatore [ `/Zc:auto`&#91;-&#93;](../build/reference/zc-auto-deduce-variable-type.md) controlla il significato della **`auto`** parola chiave.

## <a name="syntax"></a>Sintassi

> **`auto`***inizializzatore* *dichiaratore***`;`**

> **`[](auto`***param1* **`, auto`** *param2***`) {};`**

## <a name="remarks"></a>Commenti

La **`auto`** parola chiave indica al compilatore di usare l'espressione di inizializzazione di una variabile dichiarata o un parametro dell'espressione lambda per dedurre il tipo.

Si consiglia di usare la **`auto`** parola chiave per la maggior parte delle situazioni, a meno che non si desideri effettivamente una conversione, perché offre i vantaggi seguenti:

- **Affidabilità:** Se il tipo dell'espressione viene modificato, incluso quando viene modificato un tipo restituito da una funzione, funziona solo.

- **Prestazioni:** Si è certi che non verrà eseguita alcuna conversione.

- **Usabilità:** Non è necessario preoccuparsi delle difficoltà di ortografia del nome del tipo e dei digitazioni.

- **Efficienza:** Il codice può essere più efficiente.

Casi di conversione in cui potrebbe non essere necessario usare **`auto`** :

- Quando si desidera esclusivamente un tipo specifico.

- Tipi di helper del modello di espressione, ad esempio `(valarray+valarray)` .

Per usare la **`auto`** parola chiave, usarla invece di un tipo per dichiarare una variabile e specificare un'espressione di inizializzazione. Inoltre, è possibile modificare la **`auto`** parola chiave utilizzando identificatori e dichiaratori come **`const`** , **`volatile`** , Pointer ( **`*`** ), Reference ( **`&`** ) e il riferimento rvalue ( **`&&`** ). Il compilatore valuta l'espressione di inizializzazione, quindi utilizza tali informazioni per dedurre il tipo della variabile.

L'espressione di inizializzazione può essere un'assegnazione (sintassi del segno di uguale), un'inizializzazione diretta (sintassi di tipo funzione), un' [`operator new`](new-operator-cpp.md) espressione o l'espressione di inizializzazione può essere il parametro *for-range-declaration* in un'istruzione [basata sull'intervallo `for` (C++)](../cpp/range-based-for-statement-cpp.md) . Per ulteriori informazioni, vedere [inizializzatori](../cpp/initializers.md) e gli esempi di codice più avanti in questo documento.

La **`auto`** parola chiave è un segnaposto per un tipo, ma non è un tipo. Pertanto, la **`auto`** parola chiave non può essere utilizzata in cast o operatori, ad esempio [`sizeof`](../cpp/sizeof-operator.md) e (per C++/CLI) [`typeid`](../extensions/typeid-cpp-component-extensions.md) .

## <a name="usefulness"></a>Utilizzabilità

La **`auto`** parola chiave è un modo semplice per dichiarare una variabile con un tipo complesso. È ad esempio possibile utilizzare **`auto`** per dichiarare una variabile in cui l'espressione di inizializzazione include modelli, puntatori a funzioni o puntatori a membri.

È anche possibile usare **`auto`** per dichiarare e inizializzare una variabile in un'espressione lambda. Non è possibile dichiarare il tipo della variabile manualmente poiché il tipo di un'espressione lambda è noto solo al compilatore. Per ulteriori informazioni, vedere [esempi di espressioni lambda](../cpp/examples-of-lambda-expressions.md).

## <a name="trailing-return-types"></a>Tipi restituiti finali

È possibile utilizzare **`auto`** , insieme all' **`decltype`** identificatore di tipo, per facilitare la scrittura di librerie di modelli. Usare **`auto`** e **`decltype`** per dichiarare una funzione di modello il cui tipo restituito dipende dai tipi dei relativi argomenti di modello. In alternativa, usare **`auto`** e **`decltype`** per dichiarare una funzione di modello che esegue il wrapping di una chiamata a un'altra funzione e quindi restituisce il tipo restituito dell'altra funzione. Per altre informazioni, vedere [`decltype`](../cpp/decltype-cpp.md).

## <a name="references-and-cv-qualifiers"></a>Riferimenti ed elementi cv-qualifier

Si noti che l'utilizzo di **`auto`** Elimina i riferimenti, i **`const`** qualificatori e i **`volatile`** qualificatori. Si consideri l'esempio seguente:

```cpp
// cl.exe /analyze /EHsc /W4
#include <iostream>

using namespace std;

int main( )
{
    int count = 10;
    int& countRef = count;
    auto myAuto = countRef;

    countRef = 11;
    cout << count << " ";

    myAuto = 12;
    cout << count << endl;
}
```

Nell'esempio precedente, la funzione auto è un oggetto **`int`** , non un **`int`** riferimento, pertanto l'output è `11 11` , non `11 12` come se il qualificatore di riferimento non venisse eliminato da **`auto`** .

## <a name="type-deduction-with-braced-initializers-c14"></a>Deduzione del tipo con inizializzatori con parentesi graffe (C++ 14)

Nell'esempio di codice seguente viene illustrato come inizializzare una **`auto`** variabile utilizzando le parentesi graffe. Si noti la differenza tra B e C e tra A e e.

```cpp
#include <initializer_list>

int main()
{
    // std::initializer_list<int>
    auto A = { 1, 2 };

    // std::initializer_list<int>
    auto B = { 3 };

    // int
    auto C{ 4 };

    // C3535: cannot deduce type for 'auto' from initializer list'
    auto D = { 5, 6.7 };

    // C3518 in a direct-list-initialization context the type for 'auto'
    // can only be deduced from a single initializer expression
    auto E{ 8, 9 };

    return 0;
}
```

## <a name="restrictions-and-error-messages"></a>Restrizioni e messaggi di errore

La tabella seguente elenca le restrizioni relative all'uso della **`auto`** parola chiave e il messaggio di errore di diagnostica corrispondente emesso dal compilatore.

|Numero di errore|Descrizione|
|------------------|-----------------|
|[C3530](../error-messages/compiler-errors-2/compiler-error-c3530.md)|La **`auto`** parola chiave non può essere combinata con qualsiasi altro identificatore di tipo.|
|[C3531](../error-messages/compiler-errors-2/compiler-error-c3531.md)|Un simbolo dichiarato con la **`auto`** parola chiave deve avere un inizializzatore.|
|[C3532](../error-messages/compiler-errors-2/compiler-error-c3532.md)|Per dichiarare un tipo è stata usata erroneamente la **`auto`** parola chiave. Ad esempio, è stato dichiarato un tipo restituito di un metodo o una matrice.|
|[C3533](../error-messages/compiler-errors-2/compiler-error-c3533.md), [C3539](../error-messages/compiler-errors-2/compiler-error-c3539.md)|Un parametro o un argomento di modello non può essere dichiarato con la **`auto`** parola chiave.|
|[C3535](../error-messages/compiler-errors-2/compiler-error-c3535.md)|Un metodo o un parametro di modello non può essere dichiarato con la **`auto`** parola chiave.|
|[C3536](../error-messages/compiler-errors-2/compiler-error-c3536.md)|Un simbolo non può essere usato prima che venga inizializzato. In pratica, ciò significa che una variabile non può essere usata per inizializzare se stessa.|
|[C3537](../error-messages/compiler-errors-2/compiler-error-c3537.md)|Non è possibile eseguire il cast a un tipo dichiarato con la **`auto`** parola chiave.|
|[C3538](../error-messages/compiler-errors-2/compiler-error-c3538.md)|Tutti i simboli in un elenco di dichiaratori dichiarati con la **`auto`** parola chiave devono essere risolti nello stesso tipo. Per altre informazioni, vedere [dichiarazioni e definizioni](declarations-and-definitions-cpp.md).|
|[C3540](../error-messages/compiler-errors-2/compiler-error-c3540.md), [C3541](../error-messages/compiler-errors-2/compiler-error-c3541.md)|Gli operatori [sizeof](../cpp/sizeof-operator.md) e [typeid](../extensions/typeid-cpp-component-extensions.md) non possono essere applicati a un simbolo dichiarato con la **`auto`** parola chiave.|

## <a name="examples"></a>Esempio

Questi frammenti di codice illustrano alcune modalità in cui **`auto`** è possibile usare la parola chiave.

Le dichiarazioni seguenti sono equivalenti. Nella prima istruzione la variabile `j` viene dichiarata come Type **`int`** . Nella seconda istruzione la variabile `k` viene dedotta come tipo **`int`** perché l'espressione di inizializzazione (0) è un numero intero.

```cpp
int j = 0;  // Variable j is explicitly type int.
auto k = 0; // Variable k is implicitly type int because 0 is an integer.
```

Le dichiarazioni seguenti sono equivalenti, ma la seconda dichiarazione è più semplice della prima. Uno dei motivi più interessanti per usare la **`auto`** parola chiave è la semplicità.

```cpp
map<int,list<string>>::iterator i = m.begin();
auto i = m.begin();
```

Il frammento di codice seguente dichiara il tipo di variabili `iter` e `elem` il momento in cui vengono **`for`** avviati i cicli di intervallo e **`for`** .

```cpp
// cl /EHsc /nologo /W4
#include <deque>
using namespace std;

int main()
{
    deque<double> dqDoubleData(10, 0.1);

    for (auto iter = dqDoubleData.begin(); iter != dqDoubleData.end(); ++iter)
    { /* ... */ }

    // prefer range-for loops with the following information in mind
    // (this applies to any range-for with auto, not just deque)

    for (auto elem : dqDoubleData) // COPIES elements, not much better than the previous examples
    { /* ... */ }

    for (auto& elem : dqDoubleData) // observes and/or modifies elements IN-PLACE
    { /* ... */ }

    for (const auto& elem : dqDoubleData) // observes elements IN-PLACE
    { /* ... */ }
}
```

Il frammento di codice seguente usa l' **`new`** operatore e la dichiarazione del puntatore per dichiarare i puntatori.

```cpp
double x = 12.34;
auto *y = new auto(x), **z = new auto(&x);
```

Il frammento di codice seguente dichiara più simboli in ogni istruzione di dichiarazione. Si noti che tutti i simboli in ogni istruzione vengono risolte nello stesso tipo.

```cpp
auto x = 1, *y = &x, **z = &y; // Resolves to int.
auto a(2.01), *b (&a);         // Resolves to double.
auto c = 'a', *d(&c);          // Resolves to char.
auto m = 1, &n = m;            // Resolves to int.
```

Questo frammento di codice usa l'operatore condizionale (`?:`) per dichiarare la variabile `x` come intero con un valore di 200:

```cpp
int v1 = 100, v2 = 200;
auto x = v1 > v2 ? v1 : v2;
```

Il frammento di codice seguente inizializza la variabile `x` nel tipo **`int`** , la variabile `y` in un riferimento al tipo **`const int`** e la variabile `fp` a un puntatore a una funzione che restituisce il tipo **`int`** .

```cpp
int f(int x) { return x; }
int main()
{
    auto x = f(0);
    const auto& y = f(1);
    int (*p)(int x);
    p = f;
    auto fp = p;
    //...
}
```

## <a name="see-also"></a>Vedi anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[`/Zc:auto` (Deduce il tipo di variabile)](../build/reference/zc-auto-deduce-variable-type.md)<br/>
[`sizeof` Operatore](../cpp/sizeof-operator.md)<br/>
[`typeid`](../extensions/typeid-cpp-component-extensions.md)<br/>
[`operator new`](new-operator-cpp.md)<br/>
[Dichiarazioni e definizioni](declarations-and-definitions-cpp.md)<br/>
[Esempi di espressioni lambda](../cpp/examples-of-lambda-expressions.md)<br/>
[Inizializzatori](../cpp/initializers.md)<br/>
[`decltype`](../cpp/decltype-cpp.md)
