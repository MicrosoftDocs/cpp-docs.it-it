---
description: 'Altre informazioni su: Adapter (STL/CLR)'
title: adapter (STL/CLR)
ms.date: 06/15/2018
ms.topic: reference
f1_keywords:
- <cliext/adapter>
- cliext::collection_adapter
- cliext::collection_adapter::base
- cliext::collection_adapter::begin
- cliext::collection_adapter::collection_adapter
- cliext::collection_adapter::difference_type
- cliext::collection_adapter::end
- cliext::collection_adapter::iterator
- cliext::collection_adapter::key_type
- cliext::collection_adapter::mapped_type
- cliext::collection_adapter::operator=
- cliext::collection_adapter::reference
- cliext::collection_adapter::size
- cliext::collection_adapter::size_type
- cliext::collection_adapter::swap
- cliext::collection_adapter::value_type
- cliext::make_collection
- cliext::range_adapter
- cliext::operator=
- cliext::range_adapter::operator=
- cliext::range_adapter::range_adapter
helpviewer_keywords:
- <adapter> header [STL/CLR]
- adapter [STL/CLR]
- <cliext/adapter> header [STL/CLR]
- collection_adapter class [STL/CLR]
- base member [STL/CLR]
- begin member [STL/CLR]
- collection_adapter member [STL/CLR]
- difference_type member [STL/CLR]
- end member [STL/CLR]
- iterator member [STL/CLR]
- key_type member [STL/CLR]
- mapped_type member [STL/CLR]
- operator= member [STL/CLR]
- reference member [STL/CLR]
- size member [STL/CLR]
- size_type member [STL/CLR]
- swap member [STL/CLR]
- value_type member [STL/CLR]
- make_collection function [STL/CLR]
- range_adapter class [STL/CLR]
- operator= member [STL/CLR]
- range_adapter member [STL/CLR]
ms.assetid: 71ce7e51-42b6-4f70-9595-303791a97677
ms.openlocfilehash: 66e6346c644bc0d176d90701722cfcd90cbb3590
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97116419"
---
# <a name="adapter-stlclr"></a>adapter (STL/CLR)

L'intestazione STL/CLR `<cliext/adapter>` specifica due classi modello ( `collection_adapter` e `range_adapter` ) e la funzione modello `make_collection` .

## <a name="syntax"></a>Sintassi

```cpp
#include <cliext/adapter>
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<cliext/adapter>

**Spazio dei nomi:** cliext

## <a name="declarations"></a>Dichiarazioni

|Classe|Descrizione|
|-----------|-----------------|
|[collection_adapter (STL/CLR)](#collection_adapter)|Esegue il wrapping della raccolta della libreria di classi base (BCL) come intervallo.|
|[range_adapter (STL/CLR)](#range_adapter)|Esegue il wrapping dell'intervallo come raccolta di BCL.|

|Funzione|Descrizione|
|--------------|-----------------|
|[make_collection (STL/CLR)](#make_collection)|Crea un adattatore di intervallo utilizzando una coppia di iteratori.|

## <a name="members"></a>Membri

## <a name="collection_adapter-stlclr"></a><a name="collection_adapter"></a> collection_adapter (STL/CLR)

Esegue il wrapping di una raccolta .NET da utilizzare come contenitore STL/CLR. `collection_adapter`È una classe modello che descrive un semplice oggetto contenitore STL/CLR. Esegue il wrapping di un'interfaccia di libreria di classi base (BCL) e restituisce una coppia di iteratori usata per modificare la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Coll>
    ref class collection_adapter;

template<>
    ref class collection_adapter<
        System::Collections::ICollection>;
template<>
    ref class collection_adapter<
        System::Collections::IEnumerable>;
template<>
    ref class collection_adapter<
        System::Collections::IList>;
template<>
    ref class collection_adapter<
        System::Collections::IDictionary>;
template<typename Value>
    ref class collection_adapter<
        System::Collections::Generic::ICollection<Value>>;
template<typename Value>
    ref class collection_adapter<
        System::Collections::Generic::IEnumerable<Value>>;
template<typename Value>
    ref class collection_adapter<
        System::Collections::Generic::IList<Value>>;
template<typename Key,
    typename Value>
    ref class collection_adapter<
        System::Collections::Generic::IDictionary<Key, Value>>;
```

#### <a name="parameters"></a>Parametri

*Coll*<br/>
Tipo della raccolta di cui è stato eseguito il Wrapped.

### <a name="specializations"></a>Specializzazioni

|Specializzazione|Description|
|--------------------|-----------------|
|IEnumerable|Sequenze tramite elementi.|
|ICollection|Mantiene un gruppo di elementi.|
|IList|Gestisce un gruppo ordinato di elementi.|
|IDictionary|Mantenere un set di coppie {Key, value}.|
|IEnumerable\<Value>|Sequenze tramite elementi tipizzati.|
|ICollection\<Value>|Mantiene un gruppo di elementi tipizzati.|
|IList\<Value>|Gestisce un gruppo ordinato di elementi tipizzati.|
|IDictionary\<Value> |Mantiene un set di coppie {Key, value} tipizzate.|

### <a name="members"></a>Membri

|Definizione del tipo|Descrizione|
|---------------------|-----------------|
|[collection_adapter::difference_type (STL/CLR)](#difference_type)|Tipo di una distanza Signed tra due elementi.|
|[collection_adapter::iterator (STL/CLR)](#iterator)|Tipo di un iteratore per la sequenza controllata.|
|[collection_adapter::key_type (STL/CLR)](#key_type)|Tipo di una chiave del dizionario.|
|[collection_adapter::mapped_type (STL/CLR)](#mapped_type)|Tipo di un valore del dizionario.|
|[collection_adapter::reference (STL/CLR)](#reference)|Tipo di un riferimento a un elemento.|
|[collection_adapter::size_type (STL/CLR)](#size_type)|Tipo di una distanza Signed tra due elementi.|
|[collection_adapter::value_type (STL/CLR)](#value_type)|Tipo di un elemento.|

|Funzione membro|Description|
|---------------------|-----------------|
|[collection_adapter::base (STL/CLR)](#base)|Definisce l'interfaccia BCL di cui è stato eseguito il wrapper.|
|[collection_adapter::begin (STL/CLR)](#begin)|Indica l'inizio della sequenza controllata.|
|[collection_adapter::collection_adapter (STL/CLR)](#collection_adapter_collection_adapter)|Costruisce un oggetto adapter.|
|[collection_adapter::end (STL/CLR)](#end)|Designa la fine della sequenza controllata.|
|[collection_adapter::size (STL/CLR)](#size)|Conta il numero di elementi.|
|[collection_adapter::swap (STL/CLR)](#swap)|Scambia il contenuto di due contenitori.|

|Operatore|Descrizione|
|--------------|-----------------|
|[collection_adapter::operator= (STL/CLR)](#op_eq)|Sostituisce l'handle di BCL archiviato.|

### <a name="remarks"></a>Commenti

Usare questa classe modello per modificare un contenitore BCL come contenitore STL/CLR. `collection_adapter`Archivia un handle per un'interfaccia BCL, che a sua volta controlla una sequenza di elementi. Un `collection_adapter` oggetto `X` restituisce una coppia di iteratori di input `X.begin()` e `X.end()` che si utilizza per visitare gli elementi in ordine. Alcune specializzazioni consentono inoltre `X.size()` di scrivere per determinare la lunghezza della sequenza controllata.

## <a name="collection_adapterbase-stlclr"></a><a name="base"></a> collection_adapter:: base (STL/CLR)

Definisce l'interfaccia BCL di cui è stato eseguito il wrapper.

### <a name="syntax"></a>Sintassi

```cpp
Coll^ base();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce l'handle dell'interfaccia BCL archiviato.

### <a name="example"></a>Esempio

```cpp
// cliext_collection_adapter_base.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/deque>

typedef cliext::collection_adapter<
    System::Collections::ICollection> Mycoll;
int main()
    {
    cliext::deque<wchar_t> d6x(6, L'x');
    Mycoll c1(%d6x);

    // display initial contents "x x x x x x "
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("base() same = {0}", c1.base() == %c1);
    return (0);
    }
```

```Output
x x x x x x
base() same = True
```

## <a name="collection_adapterbegin-stlclr"></a><a name="begin"></a> collection_adapter:: begin (STL/CLR)

Indica l'inizio della sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
iterator begin();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore di input che designa il primo elemento della sequenza controllata o appena oltre la fine di una sequenza vuota.

### <a name="example"></a>Esempio

```cpp
// cliext_collection_adapter_begin.cpp
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

    // display initial contents "a b c "
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // inspect first two items
    Mycoll::iterator it = c1.begin();
    System::Console::WriteLine("*begin() = {0}", *it);
    System::Console::WriteLine("*++begin() = {0}", *++it);
    return (0);
}
```

```Output
a b c
*begin() = a
*++begin() = b
```

## <a name="collection_adaptercollection_adapter-stlclr"></a><a name="collection_adapter_collection_adapter"></a> collection_adapter:: collection_adapter (STL/CLR)

Costruisce un oggetto adapter.

### <a name="syntax"></a>Sintassi

```cpp
collection_adapter();
collection_adapter(collection_adapter<Coll>% right);
collection_adapter(collection_adapter<Coll>^ right);
collection_adapter(Coll^ collection);
```

#### <a name="parameters"></a>Parametri

*raccolta*<br/>
Handle BCL di cui eseguire il wrapping.

*Ok*<br/>
Oggetto da copiare.

### <a name="remarks"></a>Commenti

Il costruttore:

`collection_adapter();`

Inizializza l'handle archiviato con **`nullptr`** .

Il costruttore:

`collection_adapter(collection_adapter<Coll>% right);`

Inizializza l'handle archiviato con `right.` [collection_adapter:: base (STL/CLR)](#base) `()` .

Il costruttore:

`collection_adapter(collection_adapter<Coll>^ right);`

Inizializza l'handle archiviato con `right->` [collection_adapter:: base (STL/CLR)](#base) `()` .

Il costruttore:

`collection_adapter(Coll^ collection);`

Inizializza l'handle archiviato con `collection` .

### <a name="example"></a>Esempio

```cpp
// cliext_collection_adapter_construct.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/deque>

typedef cliext::collection_adapter<
    System::Collections::ICollection> Mycoll;
int main()
{
    cliext::deque<wchar_t> d6x(6, L'x');

    // construct an empty container
    Mycoll c1;
    System::Console::WriteLine("base() null = {0}", c1.base() == nullptr);

    // construct with a handle
    Mycoll c2(%d6x);
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct by copying another container
    Mycoll c3(c2);
    for each (wchar_t elem in c3)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct by copying a container handle
    Mycoll c4(%c3);
    for each (wchar_t elem in c4)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    return (0);
}
```

```Output
base() null = True
x x x x x x
x x x x x x
x x x x x x
```

## <a name="collection_adapterdifference_type-stlclr"></a><a name="difference_type"></a> collection_adapter::d ifference_type (STL/CLR)

Tipi di una distanza con segno tra due elementi.

### <a name="syntax"></a>Sintassi

```cpp
typedef int difference_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un conteggio di elementi firmati.

### <a name="example"></a>Esempio

```cpp
// cliext_collection_adapter_difference_type.cpp
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

    // display initial contents "a b c "
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // compute positive difference
    Mycoll::difference_type diff = 0;
    Mycoll::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
        ++diff;
    System::Console::WriteLine("end()-begin() = {0}", diff);
    return (0);
}
```

```Output
a b c
end()-begin() = 3
```

## <a name="collection_adapterend-stlclr"></a><a name="end"></a> collection_adapter:: end (STL/CLR)

Designa la fine della sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
iterator end();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore di input che punta appena oltre la fine della sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_collection_adapter_end.cpp
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

    // display initial contents "a b c "
    Mycoll::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
        System::Console::Write("{0} ", *it);
    System::Console::WriteLine();
    return (0);
}
```

```Output
a b c
```

## <a name="collection_adapteriterator-stlclr"></a><a name="iterator"></a> collection_adapter:: iterator (STL/CLR)

Tipo di un iteratore per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T1 iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo non specificato `T1` che può essere utilizzato come iteratore di input per la sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_collection_adapter_iterator.cpp
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

    // display initial contents "a b c "
    Mycoll::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
        System::Console::Write("{0} ", *it);
    System::Console::WriteLine();
    return (0);
}
```

```Output
a b c
```

## <a name="collection_adapterkey_type-stlclr"></a><a name="key_type"></a> collection_adapter:: key_type (STL/CLR)

Tipo di una chiave del dizionario.

### <a name="syntax"></a>Sintassi

```cpp
typedef Key key_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello `Key` , in una specializzazione per `IDictionary` o `IDictionary<Value>` ; in caso contrario, non è definito.

### <a name="example"></a>Esempio

```cpp
// cliext_collection_adapter_key_type.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/map>

typedef cliext::map<wchar_t, int> Mymap;
typedef cliext::collection_adapter<
    System::Collections::Generic::IDictionary<wchar_t, int>> Mycoll;
typedef System::Collections::Generic::KeyValuePair<wchar_t,int> Mypair;
int main()
{
    Mymap d1;
    d1.insert(Mymap::make_value(L'a', 1));
    d1.insert(Mymap::make_value(L'b', 2));
    d1.insert(Mymap::make_value(L'c', 3));
    Mycoll c1(%d1);

    // display contents "[a 1] [b 2] [c 3] "
    for each (Mypair elem in c1)
    {
        Mycoll::key_type key = elem.Key;
        Mycoll::mapped_type value = elem.Value;
        System::Console::Write("[{0} {1}] ", key, value);
    }
    System::Console::WriteLine();
    return (0);
}
```

```Output
[a 1] [b 2] [c 3]
```

## <a name="collection_adaptermapped_type-stlclr"></a><a name="mapped_type"></a> collection_adapter:: mapped_type (STL/CLR)

Tipo di un valore del dizionario.

### <a name="syntax"></a>Sintassi

```cpp
typedef Value mapped_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello `Value` , in una specializzazione per `IDictionary` o `IDictionary<Value>` ; in caso contrario, non è definito.

### <a name="example"></a>Esempio

```cpp
// cliext_collection_adapter_mapped_type.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/map>

typedef cliext::map<wchar_t, int> Mymap;
typedef cliext::collection_adapter<
    System::Collections::Generic::IDictionary<wchar_t, int>> Mycoll;
typedef System::Collections::Generic::KeyValuePair<wchar_t,int> Mypair;
int main()
{
    Mymap d1;
    d1.insert(Mymap::make_value(L'a', 1));
    d1.insert(Mymap::make_value(L'b', 2));
    d1.insert(Mymap::make_value(L'c', 3));
    Mycoll c1(%d1);

    // display contents "[a 1] [b 2] [c 3] "
    for each (Mypair elem in c1)
    {
        Mycoll::key_type key = elem.Key;
        Mycoll::mapped_type value = elem.Value;
        System::Console::Write("[{0} {1}] ", key, value);
    }
    System::Console::WriteLine();
    return (0);
}
```

```Output
[a 1] [b 2] [c 3]
```

## <a name="collection_adapteroperator-stlclr"></a><a name="op_eq"></a> collection_adapter:: operator = (STL/CLR)

Sostituisce l'handle di BCL archiviato.

### <a name="syntax"></a>Sintassi

```cpp
collection_adapter<Coll>% operator=(collection_adapter<Coll>% right);
```

#### <a name="parameters"></a>Parametri

*Ok*<br/>
Adapter da copiare.

### <a name="remarks"></a>Commenti

L'operatore membro copia *right* nell'oggetto, quindi restituisce **`*this`** . È possibile usarlo per sostituire il punto di controllo di BCL archiviato con una copia dell'handle di BCL archiviato a *destra*.

### <a name="example"></a>Esempio

```cpp
// cliext_collection_adapter_operator_as.cpp
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

    // display initial contents "a b c "
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // assign to a new container
    Mycoll c2;
    c2 = c1;
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
}
```

```Output
a b c
a b c
```

## <a name="collection_adapterreference-stlclr"></a><a name="reference"></a> collection_adapter:: Reference (STL/CLR)

Tipo di un riferimento a un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef value_type% reference;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un riferimento a un elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_collection_adapter_reference.cpp
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

    // display initial contents "a b c "
    Mycoll::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
    {   // get a reference to an element
        Mycoll::reference ref = *it;
        System::Console::Write("{0} ", ref);
    }
    System::Console::WriteLine();
    return (0);
}
```

```Output
a b c
```

## <a name="collection_adaptersize-stlclr"></a><a name="size"></a> collection_adapter:: size (STL/CLR)

Conta il numero di elementi.

### <a name="syntax"></a>Sintassi

```cpp
size_type size();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce la lunghezza della sequenza controllata. Non è definito in una specializzazione per `IEnumerable` o `IEnumerable<Value>` .

### <a name="example"></a>Esempio

```cpp
// cliext_collection_adapter_size.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/deque>

typedef cliext::collection_adapter<
    System::Collections::ICollection> Mycoll;
int main()
{
    cliext::deque<wchar_t> d6x(6, L'x');
    Mycoll c1(%d6x);

    // display initial contents "x x x x x x "
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    System::Console::WriteLine("size() = {0}", c1.size());
    return (0);
}
```

```Output
x x x x x x
size() = 6
```

## <a name="collection_adaptersize_type-stlclr"></a><a name="size_type"></a> collection_adapter:: size_type (STL/CLR)

Tipo di una distanza con segno tra due elementi.

### <a name="syntax"></a>Sintassi

```cpp
typedef int size_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un conteggio di elementi non negativi.

### <a name="example"></a>Esempio

```cpp
// cliext_collection_adapter_size_type.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/deque>

typedef cliext::collection_adapter<
    System::Collections::ICollection> Mycoll;
int main()
{
    cliext::deque<wchar_t> d6x(6, L'x');
    Mycoll c1(%d6x);

    // display initial contents "x x x x x x"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    Mycoll::size_type size = c1.size();
    System::Console::WriteLine("size() = {0}", size);
    return (0);
}
```

```Output
x x x x x x
size() = 6
```

## <a name="collection_adapterswap-stlclr"></a><a name="swap"></a> collection_adapter:: swap (STL/CLR)

Scambia il contenuto di due contenitori.

### <a name="syntax"></a>Sintassi

```cpp
void swap(collection_adapter<Coll>% right);
```

#### <a name="parameters"></a>Parametri

*Ok*<br/>
Contenitore con cui scambiare il contenuto.

### <a name="remarks"></a>Commenti

La funzione membro scambia gli handle di BCL archiviati tra **`*this`** e *right*.

### <a name="example"></a>Esempio

```cpp
// cliext_collection_adapter_swap.cpp
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

## <a name="collection_adaptervalue_type-stlclr"></a><a name="value_type"></a> collection_adapter:: value_type (STL/CLR)

Tipo di un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef Value value_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del *valore* del parametro di modello, se presente nella specializzazione; in caso contrario, è un sinonimo di `System::Object^` .

### <a name="example"></a>Esempio

```cpp
// cliext_collection_adapter_value_type.cpp
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

    // display contents "a b c" using value_type
    for (Mycoll::iterator it = c1.begin();
        it != c1.end(); ++it)
    {   // store element in value_type object
        Mycoll::value_type val = *it;

        System::Console::Write("{0} ", val);
    }
    System::Console::WriteLine();
    return (0);
}
```

```Output
a b c
```

## <a name="make_collection-stlclr"></a><a name="make_collection"></a> make_collection (STL/CLR)

Creare un oggetto `range_adapter` da una coppia di iteratori.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Iter>
    range_adapter<Iter> make_collection(Iter first, Iter last);
```

#### <a name="parameters"></a>Parametri

*Iter*<br/>
Tipo degli iteratori di cui è stato eseguito il wrapper.

*first*<br/>
Primo iteratore di cui eseguire il wrapping.

*last*<br/>
Secondo iteratore di cui eseguire il wrapping.

### <a name="remarks"></a>Commenti

La funzione modello restituisce `gcnew range_adapter<Iter>(first, last)`. Viene usato per costruire un `range_adapter<Iter>` oggetto da una coppia di iteratori.

### <a name="example"></a>Esempio

```cpp
// cliext_make_collection.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/deque>

typedef cliext::deque<wchar_t> Mycont;
typedef cliext::range_adapter<Mycont::iterator> Myrange;
int main()
{
    cliext::deque<wchar_t> d1;
    d1.push_back(L'a');
    d1.push_back(L'b');
    d1.push_back(L'c');

    // display contents " a b c"
    for each (wchar_t elem in d1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Collections::ICollection^ p1 =
        cliext::make_collection(d1.begin(), d1.end());
    System::Console::WriteLine("Count = {0}", p1->Count);
    System::Console::WriteLine("IsSynchronized = {0}",
        p1->IsSynchronized);
    System::Console::WriteLine("SyncRoot not nullptr = {0}",
        p1->SyncRoot != nullptr);

    // copy the sequence
    cli::array<System::Object^>^ a1 = gcnew cli::array<System::Object^>(5);

    a1[0] = L'|';
    p1->CopyTo(a1, 1);
    a1[4] = L'|';
    for each (wchar_t elem in a1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    return (0);
}
```

```Output
a b c
Count = 3
IsSynchronized = False
SyncRoot not nullptr = True
| a b c |
```

## <a name="range_adapter-stlclr"></a><a name="range_adapter"></a> range_adapter (STL/CLR)

Classe modello che esegue il wrapping di una coppia di iteratori utilizzati per implementare diverse interfacce della libreria di classi base (BCL). Usare il range_adapter per modificare un intervallo di STL/CLR come se fosse una raccolta di BCL.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Iter>
    ref class range_adapter
        :   public
        System::Collections::IEnumerable,
        System::Collections::ICollection,
        System::Collections::Generic::IEnumerable<Value>,
        System::Collections::Generic::ICollection<Value>
    { ..... };
```

#### <a name="parameters"></a>Parametri

*Iter*<br/>
Tipo associato agli iteratori di cui è stato eseguito il wrapper.

### <a name="members"></a>Membri

|Funzione membro|Description|
|---------------------|-----------------|
|[range_adapter::range_adapter (STL/CLR)](#range_adapter_range_adapter)|Costruisce un oggetto adapter.|

|Operatore|Descrizione|
|--------------|-----------------|
|[range_adapter::operator= (STL/CLR)](#range_adapter_op_eq)|Sostituisce la coppia dell'iteratore archiviato.|

### <a name="interfaces"></a>Interfacce

|Interfaccia|Descrizione|
|---------------|-----------------|
|<xref:System.Collections.IEnumerable>|Scorre gli elementi della raccolta.|
|<xref:System.Collections.ICollection>|Mantiene un gruppo di elementi.|
|<xref:System.Collections.Generic.IEnumerable%601>|Scorre gli elementi tipizzati nella raccolta.|
|<xref:System.Collections.Generic.ICollection%601>|Mantiene un gruppo di elementi tipizzati.|

### <a name="remarks"></a>Commenti

Il range_adapter archivia una coppia di iteratori, che a sua volta delimita una sequenza di elementi. L'oggetto implementa quattro interfacce BCL che consentono di scorrere gli elementi in ordine. Usare questa classe modello per modificare gli intervalli STL/CLR in modo analogo ai contenitori BCL.

## <a name="range_adapteroperator-stlclr"></a><a name="range_adapter_op_eq"></a> range_adapter:: operator = (STL/CLR)

Sostituisce la coppia dell'iteratore archiviato.

### <a name="syntax"></a>Sintassi

```cpp
range_adapter<Iter>% operator=(range_adapter<Iter>% right);
```

#### <a name="parameters"></a>Parametri

*Ok*<br/>
Adapter da copiare.

### <a name="remarks"></a>Commenti

L'operatore membro copia *right* nell'oggetto, quindi restituisce **`*this`** . Viene usato per sostituire la coppia di iteratori archiviati con una copia della coppia di iteratori archiviati a *destra*.

### <a name="example"></a>Esempio

```cpp
// cliext_range_adapter_operator_as.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/deque>

typedef cliext::deque<wchar_t> Mycont;
typedef cliext::range_adapter<Mycont::iterator> Myrange;
int main()
{
    cliext::deque<wchar_t> d1;
    d1.push_back(L'a');
    d1.push_back(L'b');
    d1.push_back(L'c');
    Myrange c1(d1.begin(), d1.end());

    // display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // assign to a new container
    Myrange c2;
    c2 = c1;
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
}
```

```Output
a b c
a b c
```

## <a name="range_adapterrange_adapter-stlclr"></a><a name="range_adapter_range_adapter"></a> range_adapter:: range_adapter (STL/CLR)

Costruisce un oggetto adapter.

### <a name="syntax"></a>Sintassi

```cpp
range_adapter();
range_adapter(range_adapter<Iter>% right);
range_adapter(range_adapter<Iter>^ right);
range_adapter(Iter first, Iter last);
```

#### <a name="parameters"></a>Parametri

*first*<br/>
Primo iteratore di cui eseguire il wrapping.

*last*<br/>
Secondo iteratore di cui eseguire il wrapping.

*Ok*<br/>
Oggetto da copiare.

### <a name="remarks"></a>Commenti

Il costruttore:

`range_adapter();`

Inizializza la coppia di iteratori archiviati con gli iteratori costruiti predefiniti.

Il costruttore:

`range_adapter(range_adapter<Iter>% right);`

Inizializza la coppia di iteratori archiviati copiando la coppia archiviata a *destra*.

Il costruttore:

`range_adapter(range_adapter<Iter>^ right);`

Inizializza la coppia di iteratori archiviati copiando la coppia archiviata in `*right` .

Il costruttore:

`range_adapter(Iter^ first, last);`

Inizializza la coppia di iteratori archiviati con la *prima* e *l'ultima*.

### <a name="example"></a>Esempio

```cpp
// cliext_range_adapter_construct.cpp
// compile with: /clr
#include <cliext/adapter>
#include <cliext/deque>

typedef cliext::deque<wchar_t> Mycont;
typedef cliext::range_adapter<Mycont::iterator> Myrange;
int main()
{
    cliext::deque<wchar_t> d1;
    d1.push_back(L'a');
    d1.push_back(L'b');
    d1.push_back(L'c');

    // construct an empty adapter
    Myrange c1;

    // construct with an iterator pair
    Myrange c2(d1.begin(), d1.end());
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct by copying another adapter
    Myrange c3(c2);
    for each (wchar_t elem in c3)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct by copying an adapter handle
    Myrange c4(%c3);
    for each (wchar_t elem in c4)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    return (0);
}
```

```Output
a b c
a b c
a b c
```
