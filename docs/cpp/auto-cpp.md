---
title: auto (C++)
ms.date: 11/04/2016
f1_keywords:
- auto_CPP
- auto
helpviewer_keywords:
- auto keyword [C++]
ms.assetid: e9d495d7-601c-4547-b897-998389a311f4
ms.openlocfilehash: f4d17069ed4e06a85b80d2027433ff87be6d1521
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51518567"
---
# <a name="auto-c"></a>auto (C++)

Deduce il tipo di una variabile dichiarata dall'espressione di inizializzazione.

## <a name="syntax"></a>Sintassi

```
auto declarator initializer;
```

```
[](auto param1, auto param2) {};
```

## <a name="remarks"></a>Note

Il **automatica** parola chiave indica al compilatore di usare l'espressione di inizializzazione di una variabile dichiarata, o un parametro di espressione lambda, per dedurre il tipo.

È consigliabile usare la **automatica** parola chiave per la maggior parte dei casi, a meno che non si desideri effettivamente una conversione, perché offre questi vantaggi:

- **Affidabilità:** se viene modificato il tipo dell'espressione, incluso quando viene modificato un tipo restituito della funzione, ovvero comunque a funzionare.

- **Prestazioni:** si ha la certezza che non verrà eseguita alcuna conversione.

- **Usabilità:** non è necessario preoccuparsi delle difficoltà legate all'ortografia nome tipo e di errori ortografici.

- **Efficienza:** la codifica può essere più efficiente.

Casi di conversione in cui è possibile evitare di usare **automatica**:

- Quando si desidera esclusivamente un tipo specifico.

- Tipi di helper modello di espressione, ad esempio, `(valarray+valarray)`.

Usare la **automatica** parola chiave, usarlo invece di un tipo per dichiarare una variabile e specificare un'espressione di inizializzazione. Inoltre, è possibile modificare il **automatica** (parola chiave) tramite, ad esempio identificatori e dichiaratori **const**, **volatile**, puntatore (`*`), riferimenti (`&`) e riferimento rvalue (`&&`). Il compilatore valuta l'espressione di inizializzazione, quindi usa tali informazioni per dedurre il tipo della variabile.

L'espressione di inizializzazione può essere un'assegnazione (sintassi del segno di uguale), un'inizializzazione diretta (sintassi di tipo funzione), un' [operatore new](new-operator-cpp.md) espressione o l'espressione di inizializzazione può essere il  *for-range-declaration* parametro in un [Range-based per istruzione (C++)](../cpp/range-based-for-statement-cpp.md) istruzione. Per altre informazioni, vedere [inizializzatori](../cpp/initializers.md) e gli esempi di codice più avanti in questo documento.

Il **automatica** (parola chiave) è un segnaposto per un tipo, ma non è un tipo. Pertanto, il **automatica** parola chiave non può essere utilizzata in un cast o operatori, ad esempio [sizeof](../cpp/sizeof-operator.md) e [typeid](../windows/typeid-cpp-component-extensions.md).

## <a name="usefulness"></a>Utilizzabilità

Il **automatica** (parola chiave) è un modo semplice per dichiarare una variabile con un tipo complesso. Ad esempio, è possibile usare **automatica** per dichiarare una variabile in cui l'espressione di inizializzazione include modelli, puntatori a funzioni o i puntatori ai membri.

È anche possibile usare **automatica** dichiarare e inizializzare una variabile in un'espressione lambda. Non è possibile dichiarare il tipo della variabile manualmente poiché il tipo di un'espressione lambda è noto solo al compilatore. Per altre informazioni, vedere [esempi di espressioni Lambda](../cpp/examples-of-lambda-expressions.md).

## <a name="trailing-return-types"></a>Tipi restituiti finali

È possibile usare **automatica**, in combinazione con la **decltype** identificatore, per scrivere librerie di modelli di tipo. Uso **automatica** e **decltype** per dichiarare una funzione di modello restituiscono il cui tipo dipende dai tipi dei relativi argomenti di modello. In alternativa, usare **automatica** e **decltype** per dichiarare una funzione di modello che esegue il wrapping di una chiamata a un'altra funzione e quindi restituisce il tipo restituito di altra funzione. Per altre informazioni, vedere [decltype](../cpp/decltype-cpp.md).

## <a name="references-and-cv-qualifiers"></a>Riferimenti ed elementi cv-qualifier

Si noti che l'utilizzo **automatica** Elimina riferimenti, qualificatori const e volatili qualificatori. Si consideri l'esempio seguente:

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

Nell'esempio precedente, myAuto sia un numero intero, non è un riferimento di int, l'output viene `11 11`, non `11 12` come sarebbe il caso se il qualificatore di riferimento non fosse stato rilasciato **auto**.

## <a name="type-deduction-with-braced-initializers-c14"></a>Deduzione del tipo con inizializzatori racchiusi tra parentesi graffe (c++14)

Esempio di codice seguente viene illustrato come inizializzare una variabile automatica usando le parentesi graffe. Si noti la differenza tra B e C e tra A ed E.

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

Nella tabella seguente sono elencate le restrizioni sull'uso delle **automatica** (parola chiave) e il messaggio di errore diagnostico corrispondente generato dal compilatore.

|Numero di errore|Descrizione|
|------------------|-----------------|
|[C3530](../error-messages/compiler-errors-2/compiler-error-c3530.md)|Il **automatica** parola chiave non può essere combinato con qualsiasi altro identificatore di tipo.|
|[C3531](../error-messages/compiler-errors-2/compiler-error-c3531.md)|Un simbolo dichiarato con la **automatica** (parola chiave) deve contenere un inizializzatore.|
|[C3532](../error-messages/compiler-errors-2/compiler-error-c3532.md)|È stato usato in modo errato il **automatica** parola chiave per dichiarare un tipo. Ad esempio, è stato dichiarato un tipo restituito di un metodo o una matrice.|
|[C3533](../error-messages/compiler-errors-2/compiler-error-c3533.md), [C3539](../error-messages/compiler-errors-2/compiler-error-c3539.md)|Un parametro o un modello di argomento non può essere dichiarato con la **automatica** (parola chiave).|
|[C3535](../error-messages/compiler-errors-2/compiler-error-c3535.md)|Un parametro di metodo o il modello non può essere dichiarato con la **automatica** (parola chiave).|
|[C3536](../error-messages/compiler-errors-2/compiler-error-c3536.md)|Un simbolo non può essere usato prima che venga inizializzato. In pratica, ciò significa che una variabile non può essere usata per inizializzare se stessa.|
|[C3537](../error-messages/compiler-errors-2/compiler-error-c3537.md)|È possibile eseguire il cast a un tipo dichiarato con la **automatica** (parola chiave).|
|[C3538](../error-messages/compiler-errors-2/compiler-error-c3538.md)|Tutti i simboli in un elenco di dichiaratori dichiarati con la **automatica** parola chiave deve essere risolto nello stesso tipo. Per altre informazioni, vedere [dichiarazioni e definizioni](declarations-and-definitions-cpp.md).|
|[C3540](../error-messages/compiler-errors-2/compiler-error-c3540.md), [C3541](../error-messages/compiler-errors-2/compiler-error-c3541.md)|Il [sizeof](../cpp/sizeof-operator.md) e [typeid](../windows/typeid-cpp-component-extensions.md) non è possibile applicare operatori per un simbolo dichiarato con il **automatico** (parola chiave).|

## <a name="examples"></a>Esempi

Questi frammenti di codice illustrano alcuni modi in cui il **automatica** parola chiave può essere utilizzata.

Le dichiarazioni seguenti sono equivalenti. Nella prima istruzione, variabile `j` viene dichiarato come tipo **int**. Nella seconda istruzione, variabile `k` viene dedotto come tipo **int** perché l'espressione di inizializzazione (0) è un numero intero.

```cpp
int j = 0;  // Variable j is explicitly type int.
auto k = 0; // Variable k is implicitly type int because 0 is an integer.
```

Le dichiarazioni seguenti sono equivalenti, ma la seconda dichiarazione è più semplice della prima. Uno dei motivi più interessanti di usare la **automatica** (parola chiave) è la semplicità.

```cpp
map<int,list<string>>::iterator i = m.begin();
auto i = m.begin();
```

Il frammento di codice seguente dichiara il tipo delle variabili `iter` e `elem` quando il **per** e l'intervallo **per** i cicli di avvio.

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

Il frammento di codice seguente usa il **nuovo** dichiarazione operatore e il puntatore per dichiarare i puntatori.

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

Il frammento di codice seguente inizializza variabile `x` al tipo **int**variabile `y` a un riferimento al tipo **const int**e la variabile `fp` a un puntatore a una funzione che restituirà il tipo **int**.

```cpp
int f(int x) { return x; }
int main()
{
    auto x = f(0);
    const auto & y = f(1);
    int (*p)(int x);
    p = f;
    auto fp = p;
    //...
}
```

## <a name="see-also"></a>Vedere anche

[Auto (parola chiave)](../cpp/auto-keyword.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[/Zc:auto (deduzione del tipo di variabile)](../build/reference/zc-auto-deduce-variable-type.md)<br/>
[Operatore sizeof](../cpp/sizeof-operator.md)<br/>
[typeid](../windows/typeid-cpp-component-extensions.md)<br/>
[operator new](new-operator-cpp.md)<br/>
[Dichiarazioni e definizioni](declarations-and-definitions-cpp.md)<br/>
[Esempi di espressioni lambda](../cpp/examples-of-lambda-expressions.md)<br/>
[Inizializzatori](../cpp/initializers.md)<br/>
[decltype](../cpp/decltype-cpp.md)
