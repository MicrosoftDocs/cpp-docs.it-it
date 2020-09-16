---
title: constexpr C++
description: Guida alla parola chiave del linguaggio C++ constexpr .
ms.date: 01/28/2020
f1_keywords:
- constexpr_cpp
ms.assetid: c6458ccb-51c6-4a16-aa61-f69e6f4e04f7
no-loc:
- constexpr
- const
- inline
- goto
- try
- if
- switch
- for
- while
ms.openlocfilehash: 57ebf4bf69c768bfcd2e4d26a5c3334ca788b08f
ms.sourcegitcommit: a6b97f5d78299ad93675de2fe0f0561f528d26c7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/15/2020
ms.locfileid: "90569558"
---
# <a name="no-locconstexpr-c"></a>constexpr C++

La parola chiave **`constexpr`** è stata introdotta in c++ 11 e migliorata in c++ 14. Significa * const espressione Ant*. Come **`const`** , può essere applicato a variabili: viene generato un errore del compilatore quando il codice tenta di eseguire if il mod y del valore. Diversamente da **`const`** , **`constexpr`** può anche essere applicato alle funzioni e alla classe const ructors. **`constexpr`** indica che il valore, o valore restituito, è const Ant e, laddove possibile, viene calcolato in fase di compilazione.

Un **`constexpr`** valore integrale può essere usato ogni volta che const è richiesto un Integer, ad esempio negli argomenti del modello e nelle dichiarazioni di matrici. Quando un valore viene calcolato in fase di compilazione anziché in fase di esecuzione, consente di eseguire più velocemente il programma e di utilizzare una quantità inferiore di memoria.

Per limitare la complessità dei calcoli ant in fase di compilazione const e il relativo impatto potenziale sul tempo di compilazione, lo standard c++ 14 richiede che i tipi nelle const espressioni Ant siano [tipi letterali](trivial-standard-layout-and-pod-types.md#literal_types).

## <a name="syntax"></a>Sintassi

> **`constexpr`***tipo di valore letterale* *ident if Ier* **=** * const -espressione* **;**\
> **`constexpr`***tipo di valore letterale* * if ident* **{** * const Ant-Expression* **}** **;**\
> **`constexpr`***tipo di valore letterale* *ident if * **(** *params* **)** **;**\
> **`constexpr`***ctor* **(** *params* **)** **;**

## <a name="parameters"></a>Parametri

*params*\
Uno o più parametri, ognuno dei quali deve essere un tipo letterale e deve essere un' const espressione ant.

## <a name="return-value"></a>Valore restituito

Una **`constexpr`** variabile o una funzione deve restituire un [tipo di valore letterale](trivial-standard-layout-and-pod-types.md#literal_types).

## <a name="no-locconstexpr-variables"></a>Variabili constexpr

Il riferimento d primario if tra **`const`** le **`constexpr`** variabili e è che l'inizializzazione di una **`const`** variabile può essere posticipata fino alla fase di esecuzione. Una **`constexpr`** variabile deve essere inizializzata in fase di compilazione.  Tutte le **`constexpr`** variabili sono **`const`** .

- Una variabile può essere dichiarata con **`constexpr`** , quando dispone di un tipo di valore letterale e viene inizializzata. Se l'inizializzazione è per for Med da un const ructor, const ructor deve essere dichiarata come **`constexpr`** .

- Un riferimento può essere dichiarato come **`constexpr`** quando vengono soddisfatte entrambe le condizioni: l'oggetto a cui si fa riferimento viene inizializzato da un' const espressione ANT e tutte le conversioni implicite richiamate durante l'inizializzazione sono anche const espressioni ant.

- Tutte le dichiarazioni di una **`constexpr`** variabile o di una funzione devono avere la **`constexpr`** specifica if Ier.

```cpp
constexpr float x = 42.0;
constexpr float y{108};
constexpr float z = exp(5, 3);
constexpr int i; // Error! Not initialized
int j = 0;
constexpr int k = j + 1; //Error! j not a constant expression
```

## <a name="no-locconstexpr-functions"></a><a name="constexpr_functions"></a>constexprfunzioni di

Una **`constexpr`** funzione è una funzione il cui valore restituito è calcolabile in fase di compilazione quando l'utilizzo di codice lo richiede. Per l'utilizzo del codice è necessario il valore restituito in fase di compilazione per inizializzare una **`constexpr`** variabile o per fornire un argomento di modello non di tipo. Quando i relativi argomenti sono **`constexpr`** valori, una **`constexpr`** funzione produce una ant in fase di compilazione const . Quando viene chiamato con **`constexpr`** argomenti non o quando il relativo valore non è necessario in fase di compilazione, produce un valore in fase di esecuzione come una normale funzione. (Questo doppio comportamento evita di dover scrivere **`constexpr`** e non **`constexpr`** le versioni della stessa funzione).

Una **`constexpr`** funzione o const ructor è implicitamente **`inline`** .

Le regole seguenti si applicano alle constexpr funzioni:

- Una **`constexpr`** funzione deve accettare e restituire solo [tipi letterali](trivial-standard-layout-and-pod-types.md#literal_types).

- Una **`constexpr`** funzione può essere ricorsiva.

- Non può essere [virtuale](../cpp/virtual-cpp.md). constNon è possibile definire un ructor come **`constexpr`** quando la classe contenitore contiene classi base virtuali.

- Il corpo può essere definito come `= default` o `= delete`.

- Il corpo non può contenere **`goto`** istruzioni o **`try`** blocchi.

- Una specializzazione esplicita di un **`constexpr`** modello non può essere dichiarata come **`constexpr`** :

- Una specializzazione esplicita di un **`constexpr`** modello non deve essere anche **`constexpr`** :

Le regole seguenti si applicano alle **`constexpr`** funzioni in Visual Studio 2017 e versioni successive:

- Può contenere **`if`** istruzioni e e **`switch`** tutte le istruzioni di ciclo, tra cui **`for`** , basate su intervallo **`for`** , **`while`** e **do- while **.

- Può contenere dichiarazioni di variabili locali, ma è necessario inizializzare la variabile. Deve essere un tipo di valore letterale e non può essere **`static`** o thread-local. La variabile dichiarata localmente non deve essere **`const`** e può essere mutata.

- Una **`constexpr`** funzione non **`static`** membro non deve essere implicitamente **`const`** .

```cpp
constexpr float exp(float x, int n)
{
    return n == 0 ? 1 :
        n % 2 == 0 ? exp(x * x, n / 2) :
        exp(x * x, (n - 1) / 2) * x;
}
```

> [!TIP]
> Nel debugger di Visual Studio, quando si esegue il debug di una build di debug non ottimizzata, è possibile stabilire se una **`constexpr`** funzione viene valutata in fase di compilazione inserendo un punto di interruzione al suo interno. Se il punto di interruzione viene raggiunto, la funzione è stata chiamata in fase di esecuzione.  In caso contrario, la funzione è stata chiamata in fase di compilazione.

## <a name="extern-no-locconstexpr"></a>extern constexpr

L'opzione del compilatore [/Zc: externConstexpr](../build/reference/zc-externconstexpr.md) fa sì che il compilatore applichi il [collegamento esterno](../c-language/external-linkage.md) a variabili dichiarate tramite **extern constexpr **. Nelle versioni precedenti di Visual Studio, per impostazione predefinita o quando **/Zc: externConstexpr-** is spec if IED, Visual Studio applica il collegamento interno alle **`constexpr`** variabili anche quando **`extern`** viene usata la parola chiave. L'opzione **/Zc: externConstexpr** è disponibile a partire da Visual Studio 2017 Update 15,6 ed è disattivata per impostazione predefinita. L'opzione [/permissive-](../build/reference/permissive-standards-conformance.md) non abilita **/Zc: externConstexpr**.

## <a name="example"></a>Esempio

Nell'esempio seguente vengono illustrate le **`constexpr`** variabili, le funzioni e un tipo definito dall'utente. Nell'ultima istruzione di `main()` , la **`constexpr`** funzione membro `GetValue()` è una chiamata di run-time perché il valore non deve essere noto in fase di compilazione.

```cpp
// constexpr.cpp
// Compile with: cl /EHsc /W4 constexpr.cpp
#include <iostream>

using namespace std;

// Pass by value
constexpr float exp(float x, int n)
{
    return n == 0 ? 1 :
        n % 2 == 0 ? exp(x * x, n / 2) :
        exp(x * x, (n - 1) / 2) * x;
}

// Pass by reference
constexpr float exp2(const float& x, const int& n)
{
    return n == 0 ? 1 :
        n % 2 == 0 ? exp2(x * x, n / 2) :
        exp2(x * x, (n - 1) / 2) * x;
}

// Compile-time computation of array length
template<typename T, int N>
constexpr int length(const T(&)[N])
{
    return N;
}

// Recursive constexpr function
constexpr int fac(int n)
{
    return n == 1 ? 1 : n * fac(n - 1);
}

// User-defined type
class Foo
{
public:
    constexpr explicit Foo(int i) : _i(i) {}
    constexpr int GetValue() const
    {
        return _i;
    }
private:
    int _i;
};

int main()
{
    // foo is const:
    constexpr Foo foo(5);
    // foo = Foo(6); //Error!

    // Compile time:
    constexpr float x = exp(5, 3);
    constexpr float y { exp(2, 5) };
    constexpr int val = foo.GetValue();
    constexpr int f5 = fac(5);
    const int nums[] { 1, 2, 3, 4 };
    const int nums2[length(nums) * 2] { 1, 2, 3, 4, 5, 6, 7, 8 };

    // Run time:
    cout << "The value of foo is " << foo.GetValue() << endl;
}
```

## <a name="requirements"></a>Requisiti

Visual Studio 2015 o versione successiva.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni e definizioni](../cpp/declarations-and-definitions-cpp.md)\
[const](../cpp/const-cpp.md)
