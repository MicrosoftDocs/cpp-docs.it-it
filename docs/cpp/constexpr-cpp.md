---
title: constexpr (C++)
description: Guida alla parola C++ chiave constexpr della lingua.
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
ms.openlocfilehash: 4f34eef3217377ab50a2d80d42b5bea4b054c5be
ms.sourcegitcommit: b8c22e6d555cf833510753cba7a368d57e5886db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/29/2020
ms.locfileid: "76821779"
---
# <a name="opno-locconstexpr-c"></a>constexpr (C++)

La parola chiave **constexpr** è stata introdotta in c++ 11 e migliorata in c++ 14. Significa *espressione costante*. Come **const** , può essere applicato a variabili: viene generato un errore del compilatore quando il codice tenta di modificare il valore. A differenza di **const** , **constexpr** può essere applicato anche alle funzioni e ai costruttori di classi. **constexpr** indica che il valore, o valore restituito, è costante e, laddove possibile, viene calcolato in fase di compilazione.

Un **constexpr** valore integrale può essere usato ogni volta che è necessario un const Integer, ad esempio negli argomenti del modello e nelle dichiarazioni di matrici. Quando un valore viene calcolato in fase di compilazione anziché in fase di esecuzione, consente di eseguire più velocemente il programma e di utilizzare una quantità inferiore di memoria.

Per limitare la complessità dei calcoli costanti in fase di compilazione e i loro potenziali effetti sul tempo di compilazione, lo standard C++ 14 richiede che i tipi nelle espressioni costanti siano [tipi letterali](trivial-standard-layout-and-pod-types.md#literal_types).

## <a name="syntax"></a>Sintassi

> **constexpr** *identificatore di tipo letterale* **=** *Constant-Expression* **;** \
> **constexpr** identificatore *di tipo letterale* **{** *Constant-Expression* **}** **;** \
> **constexpr** identificatore *di tipo letterale* **(** *params* **)** **;** \
> **constexpr** *ctor* **(** *params* **)** **;**

## <a name="parameters"></a>Parametri

*params*\
Uno o più parametri, ognuno dei quali deve essere un tipo letterale e deve essere un'espressione costante.

## <a name="return-value"></a>Valore restituito

Una variabile **constexpr** o una funzione deve restituire un [tipo di valore letterale](trivial-standard-layout-and-pod-types.md#literal_types).

## <a name="opno-locconstexpr-variables"></a>Variabili constexpr

La differenza principale tra **const** e **constexpr** variabili è che l'inizializzazione di una variabile **const** può essere posticipata fino alla fase di esecuzione. Una variabile di **constexpr** deve essere inizializzata in fase di compilazione.  Tutte le variabili **constexpr** vengono **const** .

- Una variabile può essere dichiarata con **constexpr** , quando dispone di un tipo di valore letterale e viene inizializzata. Se l'inizializzazione viene eseguita da un costruttore, il costruttore deve essere dichiarato come **constexpr** .

- Un riferimento può essere dichiarato come **constexpr** quando vengono soddisfatte entrambe le condizioni: l'oggetto a cui si fa riferimento viene inizializzato da un'espressione costante e tutte le conversioni implicite richiamate durante l'inizializzazione sono anche espressioni costanti.

- Tutte le dichiarazioni di una funzione o una variabile di **constexpr** devono avere l'identificatore di **constexpr** .

```cpp
constexpr float x = 42.0;
constexpr float y{108};
constexpr float z = exp(5, 3);
constexpr int i; // Error! Not initialized
int j = 0;
constexpr int k = j + 1; //Error! j not a constant expression
```

## <a name="constexpr_functions"></a>funzioni constexpr

Una funzione **constexpr** è un oggetto il cui valore restituito è calcolabile in fase di compilazione quando è necessario utilizzare il codice. Per l'utilizzo del codice è necessario il valore restituito in fase di compilazione per inizializzare una variabile di **constexpr** o per fornire un argomento di modello non di tipo. Quando gli argomenti sono **constexpr** valori, una funzione **constexpr** produce una costante in fase di compilazione. Quando viene chiamato con argomenti non **constexpr** o quando il relativo valore non è necessario in fase di compilazione, produce un valore in fase di esecuzione come una normale funzione. Questo doppio comportamento evita di dover scrivere **constexpr** e versioni non **constexpr** della stessa funzione.

Una funzione o un costruttore **constexpr** viene **inline** in modo implicito.

Le regole seguenti si applicano alle funzioni constexpr:

- Una funzione **constexpr** deve accettare e restituire solo [tipi letterali](trivial-standard-layout-and-pod-types.md#literal_types).

- Una funzione **constexpr** può essere ricorsiva.

- Non può essere [virtuale](../cpp/virtual-cpp.md). Un costruttore non può essere definito come **constexpr** quando la classe contenitore contiene classi base virtuali.

- Il corpo può essere definito come `= default` o `= delete`.

- Il corpo non può contenere istruzioni o blocchi di **try** di **goto** .

- Una specializzazione esplicita di un modello non **constexpr** può essere dichiarata come **constexpr** :

- Non è inoltre necessario **constexpr** una specializzazione esplicita di un modello di **constexpr** :

Le regole seguenti si applicano alle funzioni **constexpr** in Visual Studio 2017 e versioni successive:

- Può contenere istruzioni **if** e **switch** e tutte le istruzioni di ciclo, tra cui **for** , **for** basati su intervallo, **while** e **whiledo** .

- Può contenere dichiarazioni di variabili locali, ma è necessario inizializzare la variabile. Deve essere un tipo di valore letterale e non può essere **statico** o thread-local. La variabile dichiarata localmente non deve essere **const** e può essere mutata.

- Non è necessario **const** implicitamente un **constexpr** funzione membro non**statica** .

```cpp
constexpr float exp(float x, int n)
{
    return n == 0 ? 1 :
        n % 2 == 0 ? exp(x * x, n / 2) :
        exp(x * x, (n - 1) / 2) * x;
};
```

> [!TIP]
> Nel debugger di Visual Studio, quando si esegue il debug di una build di debug non ottimizzata, è possibile stabilire se una funzione **constexpr** viene valutata in fase di compilazione inserendo un punto di interruzione al suo interno. Se il punto di interruzione viene raggiunto, la funzione è stata chiamata in fase di esecuzione.  In caso contrario, la funzione è stata chiamata in fase di compilazione.

## <a name="extern-opno-locconstexpr"></a>constexpr extern

L'opzione del compilatore [/Zc: externConstexpr](../build/reference/zc-externconstexpr.md) fa sì che il compilatore applichi il [collegamento esterno](../c-language/external-linkage.md) a variabili dichiarate con **extern constexpr** . Nelle versioni precedenti di Visual Studio, per impostazione predefinita o quando si specifica **/Zc: externConstexpr-** , Visual Studio applica il collegamento interno alle variabili **constexpr** anche quando viene usata la parola chiave **extern** . L'opzione **/Zc: externConstexpr** è disponibile a partire da Visual Studio 2017 Update 15,6 ed è disattivata per impostazione predefinita. L'opzione [/permissive-](../build/reference/permissive-standards-conformance.md) non abilita **/Zc: externConstexpr**.

## <a name="example"></a>Esempio

Nell'esempio seguente vengono illustrate **constexpr** variabili, le funzioni e un tipo definito dall'utente. Nell'ultima istruzione di `main()`, la funzione membro **constexpr** `GetValue()` è una chiamata di run-time perché il valore non deve essere noto in fase di compilazione.

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
};

// Pass by reference
constexpr float exp2(const float& x, const int& n)
{
    return n == 0 ? 1 :
        n % 2 == 0 ? exp2(x * x, n / 2) :
        exp2(x * x, (n - 1) / 2) * x;
};

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

## <a name="requirements"></a>Requisiti di

Visual Studio 2015 o versione successiva.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni e definizioni](../cpp/declarations-and-definitions-cpp.md)\
[const](../cpp/const-cpp.md)
