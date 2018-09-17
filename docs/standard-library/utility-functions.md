---
title: Funzioni &lt;utility&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- utility/std::exchange
- utility/std::forward
- utility/std::make_pair
- utility/std::move
- utility/std::swap
ms.assetid: b1df38cd-3a59-4098-9c81-83342eb719a4
helpviewer_keywords:
- std::exchange [C++]
- std::forward [C++]
- std::make_pair [C++]
- std::move [C++]
- std::swap [C++]
ms.openlocfilehash: 12e8b2c4dfb0d7d36974fb2e5979d82b69c89316
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45718329"
---
# <a name="ltutilitygt-functions"></a>Funzioni &lt;utility&gt;

||||
|-|-|-|
|[exchange](#exchange)|[forward](#forward)|[get Function &lt;utility&gt;](#get)|
|[make_pair](#make_pair)|[move](#move)|[swap](#swap)|

## <a name="exchange"></a>  exchange

**(C++14)** Assegna un nuovo valore a un oggetto e restituisce il relativo valore precedente.

```cpp
template <class T, class Other = T>
T exchange(T& val, Other&& new_val)
```

### <a name="parameters"></a>Parametri

*Val*<br/>
Oggetto che riceverà il valore di new_val.

*new_val*<br/>
Oggetto il cui valore viene copiato o spostato in val.

### <a name="remarks"></a>Note

Per i tipi complessi, `exchange` consente di non copiare il valore precedente quando è disponibile un costruttore di spostamento, di non copiare il nuovo valore se è un oggetto temporaneo o spostato e accetta qualsiasi tipo come nuovo valore usufruendo di qualsiasi operatore di assegnazione di conversione disponibile. La funzione exchange differisce da [std::swap](../standard-library/algorithm-functions.md#swap) in quanto l'argomento di sinistra non viene spostato o copiato nell'argomento di destra.

### <a name="example"></a>Esempio

Nell'esempio riportato di seguito viene illustrato come usare `exchange`. Nel mondo reale `exchange` risulta più utile con oggetti di grandi dimensioni che sono troppo onerosi da copiare:

```cpp
#include <utility>
#include <iostream>

using namespace std;

struct C
{
   int i;
   //...
};

int main()
{
   // Use brace initialization
   C c1{ 1 };
   C c2{ 2 };
   C result = exchange(c1, c2);
   cout << "The old value of c1 is: " << result.i << endl;
   cout << "The new value of c1 after exchange is: " << c1.i << endl;

   return 0;
}
```

```Output
The old value of c1 is: 1
The new value of c1 after exchange is: 2
```

## <a name="forward"></a>  forward

Esegue il cast in modo condizionale del relativo argomento a un riferimento rvalue se l'argomento è un rvalue o un riferimento rvalue. In questo modo viene ripristinata la caratteristica rvalue di una funzione di inoltro in supporto dell'inoltro perfetto.

```cpp
template <class Type>    // accepts lvalues
constexpr Type&& forward(typename remove_reference<Type>::type& Arg) noexcept

template <class Type>    // accepts everything else
constexpr Type&& forward(typename remove_reference<Type>::type&& Arg) noexcept
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Type*|Il tipo del valore passato *Arg*, che potrebbe essere diverso rispetto al tipo del *Arg*. in genere determinato da un argomento di modello della funzione di inoltro.|
|*arg*|Argomento di cui eseguire il cast.|

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento rvalue *Arg* se il valore passato *Arg* era in origine un rvalue o un riferimento a un rvalue; in caso contrario, restituisce *Arg* senza modificarne il tipo.

### <a name="remarks"></a>Note

È necessario specificare un argomento di modello esplicito per chiamare `forward`.

`forward` non inoltra il relativo argomento. Al contrario, l'esecuzione del cast in modo condizionale del relativo argomento a un riferimento rvalue se in origine era un rvalue o un riferimento rvalue, `forward` consente al compilatore di eseguire la risoluzione dell'overload e di conoscere il tipo originale dell'argomento inoltrato. Il tipo apparente di un argomento di una funzione di inoltro potrebbe essere diverso rispetto al tipo originale, ad esempio quando viene usato un oggetto rvalue come argomento di una funzione e tale oggetto viene associato a un nome di parametro. Il fatto di possedere un nome lo rende un oggetto lvalue, indipendentemente dal fatto che il valore sia effettivamente presente come rvalue. `forward` consente di ripristinare la caratteristica rvalue dell'argomento.

Il ripristino della caratteristica rvalue del valore originale di un argomento per eseguire la risoluzione dell'overload è noto come *inoltro perfetto*. L'inoltro perfetto consente a una funzione di modello di accettare un argomento di un tipo di riferimento e di ripristinare la caratteristica rvalue quando è necessario per una risoluzione corretta dell'overload. Utilizzando l'inoltro perfetto è possibile mantenere la semantica di spostamento relativa agli rvalue ed evitare di fornire gli overload per le funzioni che variano solo in base al tipo di riferimento dei relativi argomenti.

## <a name="get"></a>  get

Consente di visualizzare un elemento dall'oggetto `pair` in base alla posizione di indice o in base al tipo.

```cpp
// get reference to element at Index in pair Pr
template <size_t Index, class T1, class T2>
constexpr tuple_element_t<Index, pair<T1, T2>>&
get(pair<T1, T2>& Pr) noexcept;

// get reference to element T1 in pair Pr
template <class T1, class T2>
constexpr T1& get(pair<T1, T2>& Pr) noexcept;

// get reference to element T2 in pair Pr
template <class T2, class T1>
constexpr T2& get(pair<T1, T2>& Pr) noexcept;

// get const reference to element at Index in pair Pr
template <size_t Index, class T1, class T2>
constexpr const tuple_element_t<Index, pair<T1, T2>>&
get(const pair<T1, T2>& Pr) noexcept;

// get const reference to element T1 in pair Pr
template <class T1, class T2>
constexpr const T1& get(const pair<T1, T2>& Pr) noexcept;

// get const reference to element T2 in pair Pr
template <class T2, class T1>
constexpr const T2& get(const pair<T1, T2>& Pr) noexcept;

// get rvalue reference to element at Index in pair Pr
template <size_t Index, class T1, class T2>
constexpr tuple_element_t<Index, pair<T1, T2>>&&
get(pair<T1, T2>&& Pr) noexcept;

// get rvalue reference to element T1 in pair Pr
template <class T1, class T2>
constexpr T1&& get(pair<T1, T2>&& Pr) noexcept;

// get rvalue reference to element T2 in pair Pr
template <class T2, class T1>
constexpr T2&& get(pair<T1, T2>&& Pr) noexcept;
```

### <a name="parameters"></a>Parametri

*Index*<br/>
L'indice in base 0 dell'elemento designato.

*T1*<br/>
Tipo di elemento della prima coppia.

*T2*<br/>
Tipo di elemento della seconda coppia.

*richiesta pull*<br/>
Coppia da selezionare.

### <a name="remarks"></a>Note

Le funzioni modello restituiscono un riferimento a un elemento del relativo argomento `pair` .

Per gli overload indicizzati, se il valore di *indice* è 0, le funzioni restituiscono `pr.first` e, se il valore di *indice* è 1, le funzioni restituiscono `pr.second`. Il tipo `RI` è il tipo dell'elemento restituito.

Per gli overload che non hanno un parametro di indice, l'elemento da restituire viene dedotto dall'argomento di tipo. La chiamata `get<T>(Tuple)` produrrà un errore del compilatore se *pr* contiene più o meno di un elemento di tipo T.

### <a name="example"></a>Esempio

```cpp
#include <utility>
#include <iostream>
using namespace std;
int main()
{

    typedef pair<int, double> MyPair;

    MyPair c0(9, 3.14);

    // get elements by index
    cout << " " << get<0>(c0);
    cout << " " << get<1>(c0) << endl;

    // get elements by type (C++14)
    MyPair c1(1, 0.27);
    cout << " " << get<int>(c1);
    cout << " " << get<double>(c1) << endl;

    /*
    Output:
    9 3.14
    1 0.27
    */

}
```

## <a name="make_pair"></a>  make_pair

Funzione di modello che è possibile usare per costruire oggetti di tipo `pair`, in cui i tipi di componenti vengono automaticamente scelti in base ai tipi di dati passati come parametri.

```cpp
template <class T, class U>
pair<T, U> make_pair(T& Val1, U& Val2);

template <class T, class U>
pair<T, U> make_pair(T& Val1, U&& Val2);

template <class T, class U>
pair<T, U> make_pair(T&& Val1, U& Val2);

template <class T, class U>
pair<T, U> make_pair(T&& Val1, U&& Val2);
```

### <a name="parameters"></a>Parametri

*Val1*<br/>
Valore che inizializza il primo elemento di `pair`.

*Val2*<br/>
Valore che inizializza il secondo elemento di `pair`.

### <a name="return-value"></a>Valore restituito

Oggetto pair costruito: `pair`< `T`, `U`>( `Val1`, `Val2`).

### <a name="remarks"></a>Note

`make_pair` converte l'oggetto di tipo [reference_wrapper Class](../standard-library/reference-wrapper-class.md) in tipi di riferimento e converte le matrici e le funzioni deprecate in puntatori.

Nell'oggetto restituito `pair`, `T` viene determinato come segue:

- Se il tipo di input `T` è `reference_wrapper<X>`, il tipo restituito `T` è `X&`.

- In caso contrario, il tipo restituito `T` è `decay<T>::type`. Se la [classe decay](../standard-library/decay-class.md) non è supportata, il tipo restituito `T` corrisponde al tipo di input `T`.

Se il tipo restituito `U` viene determinato in modo analogo dal tipo di input `U`.

Un vantaggio di `make_pair` consiste nel fatto che i tipi di oggetti archiviati vengono determinati automaticamente dal compilatore e non devono essere specificati in modo esplicito. Non utilizzare gli argomenti di modello espliciti come `make_pair<int, int>(1, 2)` quando si usa `make_pair` perché è inutilmente dettagliato e aggiunge problemi complessi relativi ai riferimenti rvalue che potrebbero provocare un errore di compilazione. Per questo esempio, la sintassi corretta sarà `make_pair(1, 2)`.

La funzione helper `make_pair` consente di passare due valori a una funzione che richiede una coppia come parametro di input.

### <a name="example"></a>Esempio

Per un esempio sull'uso della funzione helper `make_pair` per dichiarare e inizializzare una coppia, vedere [Struttura pair](../standard-library/pair-structure.md).

## <a name="move"></a>  move

Esegue il cast in modo condizionale del relativo argomento a un riferimento rvalue e segnala pertanto che può essere spostato se il relativo tipo è abilitato allo spostamento.

```cpp
template <class Type>
constexpr typename remove_reference<Type>::type&& move(Type&& Arg) noexcept;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Type*|Un tipo dedotto dal tipo dell'argomento passato *Arg*, in combinazione con le regole di compressione dei riferimenti.|
|*arg*|Argomento di cui eseguire il cast. Anche se il tipo della *Arg* sembra essere specificato come riferimento rvalue, `move` accetta anche argomenti lvalue poiché riferimenti lvalue possono essere associati ai riferimenti rvalue.|

### <a name="return-value"></a>Valore restituito

`Arg` come riferimento rvalue, indipendentemente dal fatto che il relativo tipo sia un tipo di riferimento.

### <a name="remarks"></a>Note

L'argomento di modello *tipo* non può essere specificato in modo esplicito, ma dedotto dal tipo del valore passato *Arg*. Il tipo della *tipo* viene ulteriormente modificato in base alle regole di compressione dei riferimenti.

`move` non sposta il relativo argomento. Invece, eseguendo il cast in modo incondizionato di argomento, che può essere un lvalue, ovvero a un riferimento rvalue, consente al compilatore di spostarsi successivamente anziché copia, il valore passato in *Arg* se il tipo è abilitato allo spostamento. Se il relativo tipo non è abilitato allo spostamento, viene copiato.

Se il valore passato *Arg* è un lvalue, vale a dire, ha un nome o il relativo indirizzo può essere eseguita, ovvero viene invalidato quando si verifica lo spostamento. Non fanno riferimento al valore passato *Arg* dal relativo nome o indirizzo dopo che è stato spostato.

## <a name="swap"></a>  swap

Scambia gli elementi di due oggetti della [struttura pair](../standard-library/pair-structure.md).

```cpp
template <class T, class U>
void swap(pair<T, U>& left, pair<T, U>& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*left*|Oggetto di tipo `pair`.|
|*right*|Oggetto di tipo `pair`.|

### <a name="remarks"></a>Note

Un vantaggio di `swap` consiste nel fatto che i tipi di oggetti archiviati vengono determinati automaticamente dal compilatore e non devono essere specificati in modo esplicito. Non utilizzare gli argomenti di modello espliciti come `swap<int, int>(1, 2)` quando si usa `swap` perché è inutilmente dettagliato e aggiunge problemi complessi relativi ai riferimenti rvalue che potrebbero provocare un errore di compilazione.

## <a name="see-also"></a>Vedere anche

[\<utility>](../standard-library/utility.md)<br/>
