---
title: :::no-loc(constexpr):::C++
description: 'Guida alla parola chiave del linguaggio C++ :::no-loc(constexpr)::: .'
ms.date: 01/28/2020
f1_keywords:
- :::no-loc(constexpr):::_cpp
ms.assetid: c6458ccb-51c6-4a16-aa61-f69e6f4e04f7
no-loc:
- ':::no-loc(constexpr):::'
- ':::no-loc(const):::'
- ':::no-loc(inline):::'
- ':::no-loc(goto):::'
- ':::no-loc(try):::'
- ':::no-loc(if):::'
- ':::no-loc(switch):::'
- ':::no-loc(for):::'
- ':::no-loc(while):::'
ms.openlocfilehash: d66dc333b7ac9fba94221dc4efa723c7919ef88f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229025"
---
# <a name="no-locconstexpr-c"></a>:::no-loc(constexpr):::C++

La parola chiave **`:::no-loc(constexpr):::`** è stata introdotta in c++ 11 e migliorata in c++ 14. Significa * :::no-loc(const)::: espressione Ant*. Come **`:::no-loc(const):::`** , può essere applicato a variabili: viene generato un errore del compilatore quando il codice tenta di eseguire :::no-loc(if)::: il mod y del valore. Diversamente da **`:::no-loc(const):::`** , **`:::no-loc(constexpr):::`** può anche essere applicato alle funzioni e alla classe :::no-loc(const)::: ructors. **`:::no-loc(constexpr):::`** indica che il valore, o valore restituito, è :::no-loc(const)::: Ant e, laddove possibile, viene calcolato in fase di compilazione.

Un **`:::no-loc(constexpr):::`** valore integrale può essere usato ogni volta che :::no-loc(const)::: è richiesto un Integer, ad esempio negli argomenti del modello e nelle dichiarazioni di matrici. Quando un valore viene calcolato in fase di compilazione anziché in fase di esecuzione, consente di eseguire più velocemente il programma e di utilizzare una quantità inferiore di memoria.

Per limitare la complessità dei calcoli ant in fase di compilazione :::no-loc(const)::: e il relativo impatto potenziale sul tempo di compilazione, lo standard c++ 14 richiede che i tipi nelle :::no-loc(const)::: espressioni Ant siano [tipi letterali](trivial-standard-layout-and-pod-types.md#literal_types).

## <a name="syntax"></a>Sintassi

> **`:::no-loc(constexpr):::`***tipo di valore letterale* *ident :::no-loc(if)::: Ier* **=** * :::no-loc(const)::: -espressione* **;**\
> **`:::no-loc(constexpr):::`***tipo di valore letterale* * :::no-loc(if)::: ident* **{** * :::no-loc(const)::: Ant-Expression* **}** **;**\
> **`:::no-loc(constexpr):::`***tipo di valore letterale* *ident :::no-loc(if)::: * **(** *params* **)** **;**\
> **`:::no-loc(constexpr):::`***ctor* **(** *params* **)** **;**

## <a name="parameters"></a>Parametri

*params*\
Uno o più parametri, ognuno dei quali deve essere un tipo letterale e deve essere un' :::no-loc(const)::: espressione ant.

## <a name="return-value"></a>Valore restituito

Una **`:::no-loc(constexpr):::`** variabile o una funzione deve restituire un [tipo di valore letterale](trivial-standard-layout-and-pod-types.md#literal_types).

## <a name="no-locconstexpr-variables"></a>Variabili :::no-loc(constexpr):::

Il riferimento d primario :::no-loc(if)::: tra **`:::no-loc(const):::`** le **`:::no-loc(constexpr):::`** variabili e è che l'inizializzazione di una **`:::no-loc(const):::`** variabile può essere posticipata fino alla fase di esecuzione. Una **`:::no-loc(constexpr):::`** variabile deve essere inizializzata in fase di compilazione.  Tutte le **`:::no-loc(constexpr):::`** variabili sono **`:::no-loc(const):::`** .

- Una variabile può essere dichiarata con **`:::no-loc(constexpr):::`** , quando dispone di un tipo di valore letterale e viene inizializzata. Se l'inizializzazione è per :::no-loc(for)::: Med da un :::no-loc(const)::: ructor, :::no-loc(const)::: ructor deve essere dichiarata come **`:::no-loc(constexpr):::`** .

- Un riferimento può essere dichiarato come **`:::no-loc(constexpr):::`** quando vengono soddisfatte entrambe le condizioni: l'oggetto a cui si fa riferimento viene inizializzato da un' :::no-loc(const)::: espressione ANT e tutte le conversioni implicite richiamate durante l'inizializzazione sono anche :::no-loc(const)::: espressioni ant.

- Tutte le dichiarazioni di una **`:::no-loc(constexpr):::`** variabile o di una funzione devono avere la **`:::no-loc(constexpr):::`** specifica :::no-loc(if)::: Ier.

```cpp
:::no-loc(constexpr)::: float x = 42.0;
:::no-loc(constexpr)::: float y{108};
:::no-loc(constexpr)::: float z = exp(5, 3);
:::no-loc(constexpr)::: int i; // Error! Not initialized
int j = 0;
:::no-loc(constexpr)::: int k = j + 1; //Error! j not a :::no-loc(const):::ant expression
```

## <a name="no-locconstexpr-functions"></a><a name=":::no-loc(constexpr):::_functions"></a>:::no-loc(constexpr):::funzioni di

Una **`:::no-loc(constexpr):::`** funzione è una funzione il cui valore restituito è calcolabile in fase di compilazione quando l'utilizzo di codice lo richiede. Per l'utilizzo del codice è necessario il valore restituito in fase di compilazione per inizializzare una **`:::no-loc(constexpr):::`** variabile o per fornire un argomento di modello non di tipo. Quando i relativi argomenti sono **`:::no-loc(constexpr):::`** valori, una **`:::no-loc(constexpr):::`** funzione produce una ant in fase di compilazione :::no-loc(const)::: . Quando viene chiamato con **`:::no-loc(constexpr):::`** argomenti non o quando il relativo valore non è necessario in fase di compilazione, produce un valore in fase di esecuzione come una normale funzione. (Questo doppio comportamento evita di dover scrivere **`:::no-loc(constexpr):::`** e non **`:::no-loc(constexpr):::`** le versioni della stessa funzione).

Una **`:::no-loc(constexpr):::`** funzione o :::no-loc(const)::: ructor è implicitamente **`:::no-loc(inline):::`** .

Le regole seguenti si applicano alle :::no-loc(constexpr)::: funzioni:

- Una **`:::no-loc(constexpr):::`** funzione deve accettare e restituire solo [tipi letterali](trivial-standard-layout-and-pod-types.md#literal_types).

- Una **`:::no-loc(constexpr):::`** funzione può essere ricorsiva.

- Non può essere [virtuale](../cpp/virtual-cpp.md). :::no-loc(const):::Non è possibile definire un ructor come **`:::no-loc(constexpr):::`** quando la classe contenitore contiene classi base virtuali.

- Il corpo può essere definito come `= default` o `= delete`.

- Il corpo non può contenere **`:::no-loc(goto):::`** istruzioni o **`:::no-loc(try):::`** blocchi.

- Una specializzazione esplicita di un **`:::no-loc(constexpr):::`** modello non può essere dichiarata come **`:::no-loc(constexpr):::`** :

- Una specializzazione esplicita di un **`:::no-loc(constexpr):::`** modello non deve essere anche **`:::no-loc(constexpr):::`** :

Le regole seguenti si applicano alle **`:::no-loc(constexpr):::`** funzioni in Visual Studio 2017 e versioni successive:

- Può contenere **`:::no-loc(if):::`** istruzioni e e **`:::no-loc(switch):::`** tutte le istruzioni di ciclo, tra cui **`:::no-loc(for):::`** , basate su intervallo **`:::no-loc(for):::`** , **`:::no-loc(while):::`** e **do- :::no-loc(while)::: **.

- Può contenere dichiarazioni di variabili locali, ma è necessario inizializzare la variabile. Deve essere un tipo di valore letterale e non può essere **`static`** o thread-local. La variabile dichiarata localmente non deve essere **`:::no-loc(const):::`** e può essere mutata.

- Una **`:::no-loc(constexpr):::`** funzione non **`static`** membro non deve essere implicitamente **`:::no-loc(const):::`** .

```cpp
:::no-loc(constexpr)::: float exp(float x, int n)
{
    return n == 0 ? 1 :
        n % 2 == 0 ? exp(x * x, n / 2) :
        exp(x * x, (n - 1) / 2) * x;
};
```

> [!TIP]
> Nel debugger di Visual Studio, quando si esegue il debug di una build di debug non ottimizzata, è possibile stabilire se una **`:::no-loc(constexpr):::`** funzione viene valutata in fase di compilazione inserendo un punto di interruzione al suo interno. Se il punto di interruzione viene raggiunto, la funzione è stata chiamata in fase di esecuzione.  In caso contrario, la funzione è stata chiamata in fase di compilazione.

## <a name="extern-no-locconstexpr"></a>extern:::no-loc(constexpr):::

L'opzione del compilatore [/Zc: externConstexpr](../build/reference/zc-extern:::no-loc(constexpr):::.md) fa sì che il compilatore applichi il [collegamento esterno](../c-language/external-linkage.md) a variabili dichiarate tramite **extern :::no-loc(constexpr)::: **. Nelle versioni precedenti di Visual Studio, per impostazione predefinita o quando **/Zc: externConstexpr-** is spec :::no-loc(if)::: IED, Visual Studio applica il collegamento interno alle **`:::no-loc(constexpr):::`** variabili anche quando **`extern`** viene usata la parola chiave. L'opzione **/Zc: externConstexpr** è disponibile a partire da Visual Studio 2017 Update 15,6 ed è disattivata per impostazione predefinita. L'opzione [/permissive-](../build/reference/permissive-standards-con:::no-loc(for):::mance.md) non abilita **/Zc: externConstexpr**.

## <a name="example"></a>Esempio

Nell'esempio seguente vengono illustrate le **`:::no-loc(constexpr):::`** variabili, le funzioni e un tipo definito dall'utente. Nell'ultima istruzione di `main()` , la **`:::no-loc(constexpr):::`** funzione membro `GetValue()` è una chiamata di run-time perché il valore non deve essere noto in fase di compilazione.

```cpp
// :::no-loc(constexpr):::.cpp
// Compile with: cl /EHsc /W4 :::no-loc(constexpr):::.cpp
#include <iostream>

using namespace std;

// Pass by value
:::no-loc(constexpr)::: float exp(float x, int n)
{
    return n == 0 ? 1 :
        n % 2 == 0 ? exp(x * x, n / 2) :
        exp(x * x, (n - 1) / 2) * x;
};

// Pass by reference
:::no-loc(constexpr)::: float exp2(:::no-loc(const)::: float& x, :::no-loc(const)::: int& n)
{
    return n == 0 ? 1 :
        n % 2 == 0 ? exp2(x * x, n / 2) :
        exp2(x * x, (n - 1) / 2) * x;
};

// Compile-time computation of array length
template<typename T, int N>
:::no-loc(constexpr)::: int length(:::no-loc(const)::: T(&)[N])
{
    return N;
}

// Recursive :::no-loc(constexpr)::: function
:::no-loc(constexpr)::: int fac(int n)
{
    return n == 1 ? 1 : n * fac(n - 1);
}

// User-defined type
class Foo
{
public:
    :::no-loc(constexpr)::: explicit Foo(int i) : _i(i) {}
    :::no-loc(constexpr)::: int GetValue() :::no-loc(const):::
    {
        return _i;
    }
private:
    int _i;
};

int main()
{
    // foo is :::no-loc(const)::::
    :::no-loc(constexpr)::: Foo foo(5);
    // foo = Foo(6); //Error!

    // Compile time:
    :::no-loc(constexpr)::: float x = exp(5, 3);
    :::no-loc(constexpr)::: float y { exp(2, 5) };
    :::no-loc(constexpr)::: int val = foo.GetValue();
    :::no-loc(constexpr)::: int f5 = fac(5);
    :::no-loc(const)::: int nums[] { 1, 2, 3, 4 };
    :::no-loc(const)::: int nums2[length(nums) * 2] { 1, 2, 3, 4, 5, 6, 7, 8 };

    // Run time:
    cout << "The value of foo is " << foo.GetValue() << endl;
}
```

## <a name="requirements"></a>Requisiti

Visual Studio 2015 o versione successiva.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni e definizioni](../cpp/declarations-and-definitions-cpp.md)\
[:::no-loc(const):::](../cpp/:::no-loc(const):::-cpp.md)
