---
title: constexpr (C++)
ms.date: 08/05/2019
f1_keywords:
- constexpr_cpp
ms.assetid: c6458ccb-51c6-4a16-aa61-f69e6f4e04f7
ms.openlocfilehash: 5c98436f537b34b1c9050e057971938d48792db1
ms.sourcegitcommit: c3bf94210bdb73be80527166264d49e33784152c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2019
ms.locfileid: "68821102"
---
# <a name="constexpr-c"></a>constexpr (C++)

La parola chiave **constExpr** è stata introdotta in c++ 11 e migliorata in c++ 14. Significa *espressione costante*. Analogamente a **const**, può essere applicato a variabili in modo che venga generato un errore del compilatore se il codice tenta di modificare il valore. Diversamente da **const**, **constExpr** può essere applicato anche alle funzioni e ai costruttori di classi. **constExpr** indica che il valore, o valore restituito, è costante e, se possibile, viene calcolato in fase di compilazione.

Un valore integrale **constExpr** può essere usato ovunque sia necessario un numero intero const, ad esempio negli argomenti del modello e nelle dichiarazioni di matrici. Quando un valore può essere calcolato in fase di compilazione anziché in fase di esecuzione, può essere utile per velocizzare l'esecuzione del programma e utilizzare una quantità inferiore di memoria.

Per limitare la complessità dei calcoli costanti in fase di compilazione e i loro potenziali effetti sul tempo di compilazione, lo standard C++ 14 richiede che i tipi nelle espressioni costanti siano [tipi letterali](trivial-standard-layout-and-pod-types.md#literal_types).

## <a name="syntax"></a>Sintassi

> **constexpr** *tipo di valore letterale* *identificatore* **=** *espressione costante* **;** 
>  **constexpr** *-tipo di valore letterale* *identificatore* **{** *espressione costante* **}** **;** 
>  **constexpr** *-tipo di valore letterale* *identificatore* **(** *params* **)** **;** 
>  **constexpr** *ctor* **(** *params* **)** **;**

## <a name="parameters"></a>Parametri

*params*<br/>
Uno o più parametri, ognuno dei quali deve essere un tipo letterale e deve essere un'espressione costante.

## <a name="return-value"></a>Valore restituito

Una funzione o una variabile constExpr deve restituire un [tipo di valore letterale](trivial-standard-layout-and-pod-types.md#literal_types).

## <a name="constexpr-variables"></a>Variabili constexpr

La differenza principale tra le variabili const e constExpr è che l'inizializzazione di una variabile const può essere posticipata fino alla fase di esecuzione. Una variabile constExpr deve essere inizializzata in fase di compilazione.  Tutte le variabili constexpr sono const.

- Una variabile può essere dichiarata con **constExpr**, se dispone di un tipo di valore letterale e viene inizializzata. Se l'inizializzazione viene eseguita da un costruttore, il costruttore deve essere dichiarato come **constExpr**.

- Un riferimento può essere dichiarato come constexpr se l'oggetto a cui fa riferimento è stato inizializzato da un'espressione costante e anche tutte le conversioni implicite che vengono richiamate durante l'inizializzazione sono espressioni costanti.

- Per tutte le dichiarazioni di una funzione o di una variabile **constExpr** deve essere presente l'identificatore **constExpr** .

```cpp
constexpr float x = 42.0;
constexpr float y{108};
constexpr float z = exp(5, 3);
constexpr int i; // Error! Not initialized
int j = 0;
constexpr int k = j + 1; //Error! j not a constant expression
```

## <a name="constexpr_functions"></a>funzioni constExpr

Una funzione **constExpr** è una funzione il cui valore restituito può essere calcolato in fase di compilazione quando l'utilizzo del codice lo richiede. Per l'utilizzo del codice è necessario il valore restituito in fase di compilazione, ad esempio per inizializzare una variabile **constExpr** o fornire un argomento di modello non di tipo. Quando gli argomenti sono valori **constExpr** , una funzione **constExpr** genera una costante in fase di compilazione. Quando viene chiamato con argomenti non**constExpr** o quando il relativo valore non è necessario in fase di compilazione, produce un valore in fase di esecuzione come una normale funzione. Questo doppio comportamento evita di dover scrivere versioni **constExpr** e non**constExpr** della stessa funzione.

Una funzione o un costruttore **constExpr** è implicitamente inline.

Le regole seguenti si applicano alle funzioni constExpr:

- Una funzione **constExpr** deve accettare e restituire solo [tipi letterali](trivial-standard-layout-and-pod-types.md#literal_types).

- Una funzione **constExpr** può essere ricorsiva.

- Non può essere [virtuale](../cpp/virtual-cpp.md). Un costruttore non può essere definito come constExpr se la classe contenitore contiene classi base virtuali.

- Il corpo può essere definito come `= default` o `= delete`.

- Il corpo non può contenere istruzioni **goto** o blocchi try.

- Una specializzazione esplicita di un modello non constExpr può essere dichiarata come **constExpr**:

- Una specializzazione esplicita di un modello **constExpr** non deve essere anche **constExpr**:

Le regole seguenti si applicano alle funzioni **constExpr** in Visual Studio 2017 e versioni successive:

- Può contenere istruzioni **if** e **Switch** e tutte le istruzioni di ciclo, incluse **for**, basate su intervallo per, **while**e **do-while**.

- Può contenere dichiarazioni di variabili locali, ma la variabile deve essere inizializzata, deve essere un tipo letterale e non può essere statica o thread-local. La variabile dichiarata localmente non deve essere const e può essere mutata.

- Una funzione membro non statica constExpr non deve essere implicitamente const.

```cpp
constexpr float exp(float x, int n)
{
    return n == 0 ? 1 :
        n % 2 == 0 ? exp(x * x, n / 2) :
        exp(x * x, (n - 1) / 2) * x;
};
```

> [!TIP]
> Nel debugger di Visual Studio, quando si esegue il debug di una build di debug non ottimizzata, è possibile stabilire se una funzione **constExpr** viene valutata in fase di compilazione inserendo un punto di interruzione al suo interno. Se il punto di interruzione viene raggiunto, la funzione è stata chiamata in fase di esecuzione.  In caso contrario, la funzione è stata chiamata in fase di compilazione.

## <a name="extern-constexpr"></a>constExpr extern

L'opzione del compilatore [/Zc: externConstexpr](../build/reference/zc-externconstexpr.md) fa sì che il compilatore applichi il [collegamento esterno](../c-language/external-linkage.md) a variabili dichiarate con **extern constExpr**. Nelle versioni precedenti di Visual Studio e per impostazione predefinita o se **/Zc: externConstexpr-** è specificato, Visual Studio applica il collegamento interno alle variabili **constExpr** anche se viene usata la parola chiave **extern** . L'opzione **/Zc: externConstexpr** è disponibile a partire da Visual Studio 2017 Update 15,6 ed è disattivata per impostazione predefinita. L'opzione/permissive-non abilita **/Zc: externConstexpr**.

## <a name="example"></a>Esempio

Nell'esempio seguente vengono illustrate le variabili **constExpr** , le funzioni e un tipo definito dall'utente. Nell'ultima istruzione di Main (), la funzione membro **constExpr** GetValue () è una chiamata di run-time perché il valore non deve essere noto in fase di compilazione.

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

## <a name="requirements"></a>Requisiti

Visual Studio 2015 o versione successiva.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni e definizioni](../cpp/declarations-and-definitions-cpp.md)\
[const](../cpp/const-cpp.md)
