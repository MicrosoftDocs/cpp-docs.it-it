---
title: constexpr (C++)
ms.date: 04/06/2018
f1_keywords:
- constexpr_cpp
ms.assetid: c6458ccb-51c6-4a16-aa61-f69e6f4e04f7
ms.openlocfilehash: 3ab3b75589864c95cb345be57db39c028a02f8db
ms.sourcegitcommit: c1f646c8b72f330fa8cf5ddb0f8f261ba10d16f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2019
ms.locfileid: "58328675"
---
# <a name="constexpr-c"></a>constexpr (C++)

La parola chiave **constexpr** è stato introdotto in c++11 e migliorata in c++14. Significa *espressione costante*. Ad esempio **const**, può essere applicato alle variabili in modo che viene generato un errore del compilatore se il codice prova a modificare il valore. A differenza **const**, **constexpr** può anche essere applicato alle funzioni e i costruttori di classe. **constexpr** indica che il valore o valore restituito è costante e, se possibile, viene calcolato in fase di compilazione.

Oggetto **constexpr** valore integrale può essere usato ovunque un integer const è obbligatorio, ad esempio in argomenti di modello e le dichiarazioni di matrice. E quando un valore può essere calcolato in fase di compilazione anziché in fase di esecuzione, di ottimizzare il programma eseguito più velocemente e Usa meno memoria.

Per limitare la complessità dei calcoli di costanti in fase di compilazione e il potenziale impatto sul tempo di compilazione, la lo standard c++14 richiede i tipi nelle espressioni costanti devono essere [tipi di valore letterali](trivial-standard-layout-and-pod-types.md#literal_types).

## <a name="syntax"></a>Sintassi

> **constexpr** *tipo di valore letterale* *identificatore* ** = ** *espressione costante* **;** 
>  **constexpr** *-tipo di valore letterale* *identificatore* **{** *espressione costante * **}** **;** 
>  **constexpr** *-tipo di valore letterale* *identificatore* **(** *params* **)** **;** 
>  **constexpr** *ctor* **(** *params* **)** **;**

## <a name="parameters"></a>Parametri

*params*<br/>
Uno o più parametri, ognuno dei quali deve essere un tipo di valore letterale e deve essere un'espressione costante.

## <a name="return-value"></a>Valore restituito

Una funzione o variabile constexpr deve restituire un [tipo di valore letterale](trivial-standard-layout-and-pod-types.md#literal_types).

## <a name="constexpr-variables"></a>Variabili constexpr

La differenza principale tra const e le variabili constexpr è che l'inizializzazione di una variabile const può essere posticipata fino alla fase di esecuzione. Una variabile constexpr deve essere inizializzata in fase di compilazione.  Tutte le variabili constexpr sono const.

- Una variabile può essere dichiarata con **constexpr**se dispone di un tipo di valore letterale e viene inizializzato. Se l'inizializzazione viene eseguita da un costruttore, il costruttore deve essere dichiarato come **constexpr**.

- Un riferimento può essere dichiarato come constexpr se l'oggetto a cui fa riferimento è stato inizializzato da un'espressione costante e anche tutte le conversioni implicite che vengono richiamate durante l'inizializzazione sono espressioni costanti.

- Tutte le dichiarazioni di una **constexpr** variabile o funzione deve avere il **constexpr** identificatore.

```cpp
constexpr float x = 42.0;
constexpr float y{108};
constexpr float z = exp(5, 3);
constexpr int i; // Error! Not initialized
int j = 0;
constexpr int k = j + 1; //Error! j not a constant expression
```

## <a name="constexpr_functions"></a> funzioni constexpr

Oggetto **constexpr** (funzione) è uno cui valore restituito può essere calcolato in fase di compilazione quando codice viene usato lo richiede. Utilizzo di codice richiede il valore restituito in fase di compilazione, ad esempio, per inizializzare un **constexpr** variabile o fornire un argomento di modello non di tipo. Quando gli argomenti rappresentino **constexpr** valori, un **constexpr** funzione produce una costante in fase di compilazione. Quando viene chiamato diversa**constexpr** argomenti, o quando il relativo valore non è necessario in fase di compilazione, produce un valore in fase di esecuzione come una normale funzione. (Questo doppio comportamento evita di dover scrivere **constexpr** e non-**constexpr** versioni della stessa funzione.)

Oggetto **constexpr** la funzione o costruttore è implicitamente **inline**.

Per le funzioni constexpr si applicano le regole seguenti:

- Oggetto **constexpr** funzione deve accettare e restituire solo [tipi letterali](trivial-standard-layout-and-pod-types.md#literal_types).

- Oggetto **constexpr** funzione può essere ricorsivi.

- Non può essere [virtuale](../cpp/virtual-cpp.md). Un costruttore non può essere definito come constexpr se la classe contenitore include le classi base virtuali.

- Il corpo può essere definito come `= default` o `= delete`.

- Non può contenere il corpo **goto** istruzioni o blocchi try.

- Una specializzazione esplicita di un modello constexpr non può essere dichiarata come **constexpr**:

- Una specializzazione esplicita di un **constexpr** modello non deve essere anche **constexpr**:

Le regole seguenti riguardano **constexpr** funzioni in Visual Studio 2017 e versioni successive:

- Può contenere **se** e **passare** istruzioni e tutte le istruzioni loop inclusi **per**basata su intervallo, **mentre**e **scopo-mentre**.

- Può contenere dichiarazioni di variabili locali, ma la variabile deve essere inizializzata, deve essere un tipo di valore letterale e non può essere statico o thread-local. La variabile dichiarata in locale non deve essere const e può modificare.

- Una funzione membro non statica constexpr non deve essere const in modo implicito.

```cpp
constexpr float exp(float x, int n)
{
    return n == 0 ? 1 :
        n % 2 == 0 ? exp(x * x, n / 2) :
        exp(x * x, (n - 1) / 2) * x;
};
```

> [!TIP]
> Nel debugger di Visual Studio, durante il debug di un non ottimizzate per eseguire il Debug di compilazione, è possibile indicare se un **constexpr** funzione viene valutata in fase di compilazione inserendo un punto di interruzione in essa contenuti. Se il punto di interruzione viene raggiunto, la funzione è stata chiamata in fase di esecuzione.  In caso contrario, la funzione è stata chiamata in fase di compilazione.

## <a name="extern-constexpr"></a>extern constexpr

Il [/Zc:externConstexpr](../build/reference/zc-externconstexpr.md) l'opzione del compilatore indica al compilatore di applicare [collegamento esterno](../c-language/external-linkage.md) alle variabili dichiarate utilizzando **extern constexpr**. Nelle versioni precedenti di Visual Studio e per impostazione predefinita o se **/Zc:externConstexpr-** è specificato, Visual Studio si applica un collegamento interno al **constexpr** anche se le variabili di **extern** parola chiave viene usata. Il **/Zc:externConstexpr** opzione è disponibile a partire da Visual Studio 2017 Update 15.6. ed è disattivata per impostazione predefinita. Il /permissive-option non abilita /Zc:externConstexpr.

## <a name="example"></a>Esempio

L'esempio seguente illustra **constexpr** variabili, funzioni e un tipo definito dall'utente. Nell'ultima istruzione in Main (), il **constexpr** funzione membro GetValue () è una chiamata in fase di esecuzione perché il valore non deve essere noto in fase di compilazione.

```cpp
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
constexpr int length(const T(&ary)[N])
{
    return N;
}

// Recursive constexpr function
constexpr int fac(int n)
{
    return n == 1 ? 1 : n*fac(n - 1);
}

// User-defined type
class Foo
{
public:
    constexpr explicit Foo(int i) : _i(i) {}
    constexpr int GetValue()
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

Visual Studio 2015

## <a name="see-also"></a>Vedere anche

[Dichiarazioni e definizioni](../cpp/declarations-and-definitions-cpp.md)<br/>
[const](../cpp/const-cpp.md)
