---
title: utility (STL/CLR)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- <cliext/utility>
- cliext::pair
- cliext::pair::pair
- cliext::pair::first
- cliext::pair::first_type
- cliext::pair::second
- cliext::pair::second_type
- cliext::pair::swap
- cliext::make_pair
- cliext::pair::operator=
- cliext::pair::operator==
- cliext::pair::operator>=
- cliext::pair::operator>
- cliext::pair::operator!=
- cliext::pair::operator<=
- cliext::pair::operator<
helpviewer_keywords:
- <utility> header [STL/CLR]
- utility header [STL/CLR]
- <cliext/utility> header [STL/CLR]
- first member [STL/CLR]
- first_type member [STL/CLR]
- second member [STL/CLR]
- second_type member [STL/CLR]
- swap member [STL/CLR]
- make_pair function [STL/CLR]
- pair class [STL/CLR]
- pair member [STL/CLR]
- operator== member [STL/CLR]
- operator= member [STL/CLR]
- operator>= member [STL/CLR]
- operator> member [STL/CLR]
- operator!= member [STL/CLR]
- operator<= member [STL/CLR]
- operator< member [STL/CLR]
ms.assetid: fb48cb75-d5ef-47ce-b526-bf60dc86c552
ms.openlocfilehash: 6d025230abcff42e367a231e616a13f0f8c684f0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320282"
---
# <a name="utility-stlclr"></a>utility (STL/CLR)

Includere l'intestazione `<cliext/utility>` STL/CLR `pair` per definire la classe modello e diverse funzioni di modello di supporto.

## <a name="syntax"></a>Sintassi

```cpp
#include <utility>
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<cliext/utility>

**Spazio dei nomi:** cliext

## <a name="declarations"></a>Dichiarazioni

|Classe|Descrizione|
|-----------|-----------------|
|[pair (STL/CLR)](#pair)|Eseguire il wrapping di una coppia di elementi.|

|Operatore|Descrizione|
|--------------|-----------------|
|[operator== (pair) (STL/CLR)](#op_eq)|Coppia di confronto uguale.|
|[operator! (coppia) (STL/CLR)](#op_neq)|Confronto non uguale.|
|[< operatore (coppia) (STL/CLR)](#op_lt)|Coppia minore di confronto.|
|[operatore\<: (coppia) (STL/CLR)](#op_lteq)|Coppia di confronto minore o uguale.|
|[> operatore (coppia) (STL/CLR)](#op_gt)|Coppia maggiore del confronto.|
|[operatore>- (coppia) (STL/CLR)](#op_gteq)|Coppia maggiore o uguale confronto.|

|Funzione|Descrizione|
|--------------|-----------------|
|[make_pair (STL/CLR)](#make_pair)|Creare una coppia da una coppia di valori.|

## <a name="members"></a>Membri

## <a name="pair-stlclr"></a><a name="pair"></a>coppia (STL/CLR)

La classe modello descrive un oggetto che esegue il wrapping di una coppia di valori.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value1,
    typename Value2>
    ref class pair;
```

#### <a name="parameters"></a>Parametri

*Value1*<br/>
Tipo del primo valore di cui è stato eseguito il wrapping.

*Value2*<br/>
Tipo del secondo valore di cui è stato eseguito il wrapping.

## <a name="members"></a>Membri

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|[pair::first_type (STL/CLR)](#first_type)|Tipo del primo valore di cui è stato eseguito il wrapping.|
|[pair::second_type (STL/CLR)](#second_type)|Tipo del secondo valore di cui è stato eseguito il wrapping.|

|Oggetto Member|Descrizione|
|-------------------|-----------------|
|[pair::first (STL/CLR)](#first)|Primo valore archiviato.|
|[pair::second (STL/CLR)](#second)|Secondo valore archiviato.|

|Funzione membro|Descrizione|
|---------------------|-----------------|
|[pair::pair (STL/CLR)](#pair_pair)|Costruisce un oggetto coppia.|
|[pair::swap (STL/CLR)](#swap)|Scambia il contenuto di due coppie.|

|Operatore|Descrizione|
|--------------|-----------------|
|[pair::operator= (STL/CLR)](#op_as)|Sostituisce la coppia di valori archiviata.|

## <a name="remarks"></a>Osservazioni

L'oggetto archivia una coppia di valori. Utilizzare questa classe modello per combinare due valori in un singolo oggetto. Inoltre, l'oggetto `cliext::pair` (descritto qui) archivia solo i tipi gestiti; per archiviare una coppia `std::pair`di tipi `<utility>`non gestiti, utilizzare , dichiarato in .

## <a name="pairfirst-stlclr"></a><a name="first"></a>pair::first (STL/CLR)

Primo valore di cui è stato eseguito il wrapping.

### <a name="syntax"></a>Sintassi

```cpp
Value1 first;
```

### <a name="remarks"></a>Osservazioni

L'oggetto archivia il primo valore di cui è stato eseguito il wrapping.

### <a name="example"></a>Esempio

```cpp
// cliext_pair_first.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);

    cliext::pair<wchar_t, int>::first_type first_val = c1.first;
    cliext::pair<wchar_t, int>::second_type second_val = c1.second;
    System::Console::WriteLine("[{0}, {1}]", first_val, second_val);
    return (0);
    }
```

```Output
[x, 3]
```

## <a name="pairfirst_type-stlclr"></a><a name="first_type"></a>pair::first_type (STL/CLR)

Tipo del primo valore di cui è stato eseguito il wrapping.

### <a name="syntax"></a>Sintassi

```cpp
typedef Value1 first_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello *Value1*.

### <a name="example"></a>Esempio

```cpp
// cliext_pair_first_type.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);

    cliext::pair<wchar_t, int>::first_type first_val = c1.first;
    cliext::pair<wchar_t, int>::second_type second_val = c1.second;
    System::Console::WriteLine("[{0}, {1}]", first_val, second_val);
    return (0);
    }
```

```Output
[x, 3]
```

## <a name="pairoperator-stlclr"></a><a name="op_as"></a>pair::operator (STL/CLR)

Sostituisce la coppia di valori archiviata.

### <a name="syntax"></a>Sintassi

```cpp
pair<Value1, Value2>% operator=(pair<Value1, Value2>% right);
```

#### <a name="parameters"></a>Parametri

*va bene*<br/>
Coppia da copiare.

### <a name="remarks"></a>Osservazioni

L'operatore membro copia *direttamente all'oggetto,* quindi restituisce `*this`. Utilizzarla per sostituire la coppia di valori archiviata con una copia della coppia di valori archiviata in *right*.

### <a name="example"></a>Esempio

```cpp
// cliext_pair_operator_as.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);

// assign to a new pair
    cliext::pair<wchar_t, int> c2;
    c2 = c1;
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);
    return (0);
    }
```

```Output
[x, 3]
[x, 3]
```

## <a name="pairpair-stlclr"></a><a name="pair_pair"></a>pair::pair (STL/CLR)

Costruisce un oggetto coppia.

### <a name="syntax"></a>Sintassi

```cpp
pair();
pair(pair<Coll>% right);
pair(pair<Coll>^ right);
pair(Value1 val1, Value2 val2);
```

#### <a name="parameters"></a>Parametri

*va bene*<br/>
Coppia da conservare.

*val1*<br/>
Primo valore da memorizzare.

*val2*<br/>
Secondo valore da archiviare.

### <a name="remarks"></a>Osservazioni

Il costruttore:

`pair();`

inizializza la coppia archiviata con i valori costruiti predefiniti.

Il costruttore:

`pair(pair<Value1, Value2>% right);`

inizializza la coppia `right.`archiviata con [pair::first (STL/CLR)](../dotnet/pair-first-stl-clr.md) e `right.` [pair::second (STL/CLR)](../dotnet/pair-second-stl-clr.md).

`pair(pair<Value1, Value2>^ right);`

inizializza la coppia `right->`archiviata con [pair::first (STL/CLR)](../dotnet/pair-first-stl-clr.md) e `right>` [pair::second (STL/CLR)](../dotnet/pair-second-stl-clr.md).

Il costruttore:

`pair(Value1 val1, Value2 val2);`

inizializza la coppia memorizzata con *val1* e *val2*.

### <a name="example"></a>Esempio

```cpp
// cliext_pair_construct.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
// construct an empty container
    cliext::pair<wchar_t, int> c1;
    System::Console::WriteLine("[{0}, {1}]",
        c1.first == L'\0' ? "\\0" : "??", c1.second);

// construct with a pair of values
    cliext::pair<wchar_t, int> c2(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);

// construct by copying another pair
    cliext::pair<wchar_t, int> c3(c2);
    System::Console::WriteLine("[{0}, {1}]", c3.first, c3.second);

// construct by copying a pair handle
    cliext::pair<wchar_t, int> c4(%c3);
    System::Console::WriteLine("[{0}, {1}]", c4.first, c4.second);

    return (0);
    }
```

```Output
[\0, 0]
[x, 3]
[x, 3]
[x, 3]
```

## <a name="pairsecond-stlclr"></a><a name="second"></a>coppia::secondo (STL/CLR)

Secondo valore di cui è stato eseguito il wrapping.

### <a name="syntax"></a>Sintassi

```cpp
Value2 second;
```

### <a name="remarks"></a>Osservazioni

L'oggetto archivia il secondo valore di cui è stato eseguito il wrapping.

### <a name="example"></a>Esempio

```cpp
// cliext_pair_second.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);

    cliext::pair<wchar_t, int>::first_type first_val = c1.first;
    cliext::pair<wchar_t, int>::second_type second_val = c1.second;
    System::Console::WriteLine("[{0}, {1}]", first_val, second_val);
    return (0);
    }
```

```Output
[x, 3]
```

## <a name="pairsecond_type-stlclr"></a><a name="second_type"></a>coppia::second_type (STL/CLR)

Tipo del secondo valore di cui è stato eseguito il wrapping.

### <a name="syntax"></a>Sintassi

```cpp
typedef Value2 second_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello *Value2*.

### <a name="example"></a>Esempio

```cpp
// cliext_pair_second_type.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);

    cliext::pair<wchar_t, int>::first_type first_val = c1.first;
    cliext::pair<wchar_t, int>::second_type second_val = c1.second;
    System::Console::WriteLine("[{0}, {1}]", first_val, second_val);
    return (0);
    }
```

```Output
[x, 3]
```

## <a name="pairswap-stlclr"></a><a name="swap"></a>coppia::swap (STL/CLR)

Scambia il contenuto di due coppie.

### <a name="syntax"></a>Sintassi

```cpp
void swap(pair<Value1, Value2>% right);
```

#### <a name="parameters"></a>Parametri

*va bene*<br/>
Abbina con cui scambiare i contenuti.

### <a name="remarks"></a>Osservazioni

La funzione membro scambia la `*this` coppia di valori archiviata tra e *right*.

### <a name="example"></a>Esempio

```cpp
// cliext_pair_swap.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/deque>

typedef cliext::collection_adapter<
    System::Collections::ICollection> Mycoll;
int main()
    {
    cliext::deque<wchar_t> d1;
    d1.push_back(L'a');
    d1.push_back(L'b');
    d1.push_back(L'c');
    Mycoll c1(%d1);

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct another container with repetition of values
    cliext::deque<wchar_t> d2(5, L'x');
    Mycoll c2(%d2);
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// swap and redisplay
    c1.swap(c2);
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
x x x x x
x x x x x
a b c
```

## <a name="make_pair-stlclr"></a><a name="make_pair"></a>make_pair (STL/CLR)

Crea `pair` un da una coppia di valori.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value1,
    typename Value2>
    pair<Value1, Value2> make_pair(Value1 first, Value2 second);
```

#### <a name="parameters"></a>Parametri

*Value1*<br/>
Tipo del primo valore di cui è stato eseguito il wrapping.

*Value2*<br/>
Tipo del secondo valore di cui è stato eseguito il wrapping.

*Prima*<br/>
Primo valore di cui eseguire il wrapping.

*Secondo*<br/>
Secondo valore di cui eseguire il wrapping.

### <a name="remarks"></a>Osservazioni

La funzione modello restituisce `pair<Value1, Value2>(first, second)`. Utilizzarla per costruire `pair<Value1, Value2>` un oggetto da una coppia di valori.

### <a name="example"></a>Esempio

```cpp
// cliext_make_pair.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);

    c1 = cliext::make_pair(L'y', 4);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);
    return (0);
    }
```

```Output
[x, 3]
[y, 4]
```

## <a name="operator-pair-stlclr"></a><a name="op_neq"></a>operator! (coppia) (STL/CLR)

Confronto non uguale.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value1,
    typename Value2>
    bool operator!=(pair<Value1, Value2>% left,
        pair<Value1, Value2>% right);
```

#### <a name="parameters"></a>Parametri

*Sinistra*<br/>
Coppia sinistra da confrontare.

*va bene*<br/>
Coppia destra da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione `!(left == right)`operatore restituisce . Utilizzarla per verificare se *left* non è ordinato come *right* quando le due coppie vengono confrontate elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_pair_operator_ne.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);
    cliext::pair<wchar_t, int> c2(L'x', 4);
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);

    System::Console::WriteLine("[x 3] != [x 3] is {0}",
        c1 != c1);
    System::Console::WriteLine("[x 3] != [x 4] is {0}",
        c1 != c2);
    return (0);
    }
```

```Output
[x, 3]
[x, 4]
[x 3] != [x 3] is False
[x 3] != [x 4] is True
```

## <a name="operatorlt-pair-stlclr"></a><a name="op_lt"></a>operatore&lt; (coppia) (STL/CLR)

Coppia minore di confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value1,
    typename Value2>
    bool operator<(pair<Value1, Value2>% left,
        pair<Value1, Value2>% right);
```

#### <a name="parameters"></a>Parametri

*Sinistra*<br/>
Coppia sinistra da confrontare.

*va bene*<br/>
Coppia destra da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione `left.first <` `right.first || !(right.first <` `left.first &&` `left.second <` `right.second`operatore restituisce . Utilizzarla per verificare se *left* viene ordinato prima *di destra* quando le due coppie vengono confrontate elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_pair_operator_lt.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);
    cliext::pair<wchar_t, int> c2(L'x', 4);
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);

    System::Console::WriteLine("[x 3] < [x 3] is {0}",
        c1 < c1);
    System::Console::WriteLine("[x 3] < [x 4] is {0}",
        c1 < c2);
    return (0);
    }
```

```Output
[x, 3]
[x, 4]
[x 3] < [x 3] is False
[x 3] < [x 4] is True
```

## <a name="operatorlt-pair-stlclr"></a><a name="op_lteq"></a>operatore&lt;: (coppia) (STL/CLR)

Coppia di confronto minore o uguale.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value1,
    typename Value2>
    bool operator<=(pair<Value1, Value2>% left,
        pair<Value1, Value2>% right);
```

#### <a name="parameters"></a>Parametri

*Sinistra*<br/>
Coppia sinistra da confrontare.

*va bene*<br/>
Coppia destra da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione `!(right < left)`operatore restituisce . Utilizzarla per verificare se *left* non è ordinato dopo *right* quando le due coppie vengono confrontate elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_pair_operator_le.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);
    cliext::pair<wchar_t, int> c2(L'x', 4);
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);

    System::Console::WriteLine("[x 3] <= [x 3] is {0}",
        c1 <= c1);
    System::Console::WriteLine("[x 4] <= [x 3] is {0}",
        c2 <= c1);
    return (0);
    }
```

```Output
[x, 3]
[x, 4]
[x 3] <= [x 3] is True
[x 4] <= [x 3] is False
```

## <a name="operator-pair-stlclr"></a><a name="op_eq"></a>operatore (coppia) (STL/CLR)

Coppia di confronto uguale.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value1,
    typename Value2>
    bool operator==(pair<Value1, Value2>% left,
        pair<Value1, Value2>% right);
```

#### <a name="parameters"></a>Parametri

*Sinistra*<br/>
Coppia sinistra da confrontare.

*va bene*<br/>
Coppia destra da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione `left.first ==` `right.first &&` `left.second ==` `right.second`operatore restituisce . Utilizzarla per verificare se *left* è ordinato come *right* quando le due coppie vengono confrontate elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_pair_operator_eq.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);
    cliext::pair<wchar_t, int> c2(L'x', 4);
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);

    System::Console::WriteLine("[x 3] == [x 3] is {0}",
        c1 == c1);
    System::Console::WriteLine("[x 3] == [x 4] is {0}",
        c1 == c2);
    return (0);
    }
```

```Output
[x, 3]
[x, 4]
[x 3] == [x 3] is True
[x 3] == [x 4] is False
```

## <a name="operatorgt-pair-stlclr"></a><a name="op_gt"></a>operatore&gt; (coppia) (STL/CLR)

Coppia maggiore del confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value1,
    typename Value2>
    bool operator>(pair<Value1, Value2>% left,
        pair<Value1, Value2>% right);
```

#### <a name="parameters"></a>Parametri

*Sinistra*<br/>
Coppia sinistra da confrontare.

*va bene*<br/>
Coppia destra da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione `right` `<` `left`operatore restituisce . Utilizzarla per verificare se *left* viene ordinato dopo *right* quando le due coppie vengono confrontate elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_pair_operator_gt.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);
    cliext::pair<wchar_t, int> c2(L'x', 4);
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);

    System::Console::WriteLine("[x 3] > [x 3] is {0}",
        c1 > c1);
    System::Console::WriteLine("[x 4] > [x 3] is {0}",
        c2 > c1);
    return (0);
    }
```

```Output
[x, 3]
[x, 4]
[x 3] > [x 3] is False
[x 4] > [x 3] is True
```

## <a name="operatorgt-pair-stlclr"></a><a name="op_gteq"></a>operatore&gt;: (coppia) (STL/CLR)

Coppia maggiore o uguale confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value1,
    typename Value2>
    bool operator>=(pair<Value1, Value2>% left,
        pair<Value1, Value2>% right);
```

#### <a name="parameters"></a>Parametri

*Sinistra*<br/>
Coppia sinistra da confrontare.

*va bene*<br/>
Coppia destra da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione `!(left < right)`operatore restituisce . Utilizzarla per verificare se *left* non è ordinato prima *di right* quando le due coppie vengono confrontate elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_pair_operator_ge.cpp
// compile with: /clr
#include <cliext/utility>

int main()
    {
    cliext::pair<wchar_t, int> c1(L'x', 3);
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);
    cliext::pair<wchar_t, int> c2(L'x', 4);
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);

    System::Console::WriteLine("[x 3] >= [x 3] is {0}",
        c1 >= c1);
    System::Console::WriteLine("[x 3] >= [x 4] is {0}",
        c1 >= c2);
    return (0);
    }
```

```Output
[x, 3]
[x, 4]
[x 3] >= [x 3] is True
[x 3] >= [x 4] is False
```
