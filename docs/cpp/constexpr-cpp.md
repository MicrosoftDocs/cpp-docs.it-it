---
title: constexpr (C++) | Microsoft Docs
ms.custom: ''
ms.date: 04/06/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-language
ms.tgt_pltfrm: ''
ms.topic: language-reference
f1_keywords:
- constexpr_cpp
dev_langs:
- C++
ms.assetid: c6458ccb-51c6-4a16-aa61-f69e6f4e04f7
caps.latest.revision: 3
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5218e576a1aa0436ccb7696d208b1ba2049263b0
ms.sourcegitcommit: 770f6c4a57200aaa9e8ac6e08a3631a4b4bdca05
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/16/2018
---
# <a name="constexpr-c"></a>constexpr (C++)

La parola chiave **constexpr** è stato introdotto in c++11 e migliorata in c++14. Significa *espressione costante*. Ad esempio **const**, può essere applicato alle variabili in modo che se il codice tenta di modificare il valore verrà generato un errore del compilatore. A differenza **const**, **constexpr** può anche essere applicato alle funzioni e i costruttori di classe. **constexpr** indica che il valore o valore restituito, è costante e, se possibile, verrà calcolato in fase di compilazione.

Un **constexpr** valore integrale può essere utilizzato ogni volta che un intero const è richiesto, ad esempio negli argomenti di modello e nelle dichiarazioni di matrice. E, quando un valore può essere calcolato in fase di compilazione anziché sul tempo di esecuzione, può essere utile il programma eseguito più velocemente e utilizzano meno memoria.

Per limitare la complessità dell'elaborazione costanti in fase di compilazione e loro potenziale impatto sulla fase di compilazione, il lo standard c++14 richiede che i tipi usati nelle espressioni costanti siano limitati ai [tipi di valori letterali](trivial-standard-layout-and-pod-types.md#literal_types).

## <a name="syntax"></a>Sintassi

```
constexpr  literal-type  identifier = constant-expression;
constexpr  literal-type  identifier { constant-expression };
constexpr literal-type identifier(params );
constexpr ctor (params);
```

## <a name="parameters"></a>Parametri

 *params*  
Uno o più parametri che devono essere un tipo di valore letterale e devono essere un'espressione costante.

## <a name="return-value"></a>Valore restituito


 Una funzione o variabile constexpr deve restituire un [tipo di valore letterale](trivial-standard-layout-and-pod-types.md#literal_types).

## <a name="constexpr-variables"></a>Variabili constexpr

 La differenza principale tra le variabili const e constexpr è che l'inizializzazione di una variabile const può essere rinviata fino alla fase di esecuzione mentre una variabile constexpr deve essere inizializzata in fase di compilazione.  Tutte le variabili constexpr sono const.

- Una variabile può essere dichiarata con **constexpr**, se è un tipo di valore letterale e viene inizializzato. Se l'inizializzazione viene eseguita da un costruttore, il costruttore deve essere dichiarato come **constexpr**.

- Un riferimento può essere dichiarato come constexpr se l'oggetto a cui fa riferimento è stato inizializzato da un'espressione costante e anche tutte le conversioni implicite che vengono richiamate durante l'inizializzazione sono espressioni costanti.

- Tutte le dichiarazioni di un **constexpr** variabile o funzione deve avere il **constexpr** identificatore.

```cpp
constexpr float x = 42.0;
constexpr float y{108};
constexpr float z = exp(5, 3);
constexpr int i; // Error! Not initialized
int j = 0;
constexpr int k = j + 1; //Error! j not a constant expression
```

## <a name="constexpr_functions"></a> funzioni constexpr

Un **constexpr** (funzione) è uno cui valore restituito può essere calcolato in fase di compilazione quando si utilizza codice richiede.  Quando gli argomenti rappresentino **constexpr** valori e il codice consumer richiede il valore restituito in fase di compilazione, ad esempio per inizializzare un **constexpr** variabile o fornire un argomento di modello non di tipo, il produce una costante in fase di compilazione. Quando viene chiamato con non -**constexpr** argomenti, o quando il relativo valore non è necessario in fase di compilazione, viene prodotto un valore in fase di esecuzione come una normale funzione.  (Questo doppio comportamento evita di dover scrivere **constexpr** e non-**constexpr** versioni della stessa funzione.)

Un **constexpr** funzione o costruttore è implicitamente **inline**.

Le regole seguenti si applicano alle funzioni constexpr:

- Un **constexpr** funzione deve accettare e restituire solo [tipi letterali](trivial-standard-layout-and-pod-types.md#literal_types).

- Un **constexpr** (funzione) può essere ricorsivi.

- Non può essere [virtuale](../cpp/virtual-cpp.md). A un costruttore non può essere definito come constexpr se la classe contenitore include le classi base virtuali.

- Il corpo può essere definito come **= default** oppure **= eliminazione**.

- Non può contenere il corpo **goto** istruzioni o blocchi try.

- Una specializzazione esplicita di un modello constexpr non può essere dichiarata come **constexpr**:

- Una specializzazione esplicita di un **constexpr** modello non deve essere anche **constexpr**:

Le regole seguenti si applicano a **constexpr** funzioni in Visual Studio 2017 e versioni successive:

- Può contenere **se** e **passare** istruzioni e tutte le istruzioni loop inclusi **per**basato su intervallo, **mentre**e **scopo-mentre**.
 
- Può contenere dichiarazioni di variabile locale, ma la variabile deve essere inizializzata, deve essere un tipo di valore letterale e non può essere statiche o thread-local. La variabile dichiarata in locale non deve essere const e potrebbe modificare.

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
> Nota: Nel debugger di Visual Studio, quando il debug non ottimizzata esegue il Debug di compilazione, è possibile stabilire se un **constexpr** funzione viene valutata in fase di compilazione inserendo un punto di interruzione all'interno. Se il punto di interruzione viene raggiunto, la funzione è stata chiamata in fase di esecuzione.  In caso contrario, la funzione è stata chiamata in fase di compilazione.

## <a name="extern-constexpr"></a>extern constexpr

Il [/Zc:externConstexpr](../build/reference/zc-externconstexpr.md) l'opzione del compilatore induce il compilatore da applicare [un collegamento esterno]() alle variabili dichiarate utilizzando **constexpr extern**. Nelle versioni precedenti di Visual Studio e per impostazione predefinita o se **/Zc:externConstexpr-** è specificato, Visual Studio si applica un collegamento interno a **constexpr** anche se le variabili di **extern** parola chiave viene utilizzata. Il **/Zc:externConstexpr** opzione è disponibile a partire da Visual Studio 2017 aggiornamento 15,6. e viene disattivata per impostazione predefinita. Il /permissive-option non abilita /Zc:externConstexpr.

## <a name="example"></a>Esempio

 L'esempio seguente illustra **constexpr** variabili, funzioni e un tipo definito dall'utente. Si noti che nell'ultima istruzione in Main (), il **constexpr** funzione membro GetValue () è una chiamata in fase di esecuzione perché il valore non deve essere noto in fase di compilazione.

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

// Compile time computation of array length
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
    //foo is const:
    constexpr Foo foo(5);
    // foo = Foo(6); //Error!

    //Compile time:
    constexpr float x = exp(5, 3);
    constexpr float y { exp(2, 5) };
    constexpr int val = foo.GetValue();
    constexpr int f5 = fac(5);
    const int nums[] { 1, 2, 3, 4 };
    const int nums2[length(nums) * 2] { 1, 2, 3, 4, 5, 6, 7, 8 };

    //Run time:
    cout << "The value of foo is " << foo.GetValue() << endl;

}

```

## <a name="requirements"></a>Requisiti

Visual Studio 2015

## <a name="see-also"></a>Vedere anche

- [Dichiarazioni e definizioni](../cpp/declarations-and-definitions-cpp.md)
- [const](../cpp/const-cpp.md)
