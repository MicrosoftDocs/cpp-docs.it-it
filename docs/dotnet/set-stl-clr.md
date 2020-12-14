---
description: 'Altre informazioni su: set (STL/CLR)'
title: set (STL/CLR)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- cliext::set
- cliext::set::begin
- cliext::set::clear
- cliext::set::const_iterator
- cliext::set::const_reference
- cliext::set::const_reverse_iterator
- cliext::set::count
- cliext::set::difference_type
- cliext::set::empty
- cliext::set::end
- cliext::set::equal_range
- cliext::set::erase
- cliext::set::find
- cliext::set::generic_container
- cliext::set::generic_iterator
- cliext::set::generic_reverse_iterator
- cliext::set::generic_value
- cliext::set::insert
- cliext::set::iterator
- cliext::set::key_comp
- cliext::set::key_compare
- cliext::set::key_type
- cliext::set::lower_bound
- cliext::set::make_value
- cliext::set::operator=
- cliext::set::rbegin
- cliext::set::reference
- cliext::set::rend
- cliext::set::reverse_iterator
- cliext::set::set
- cliext::set::size
- cliext::set::size_type
- cliext::set::swap
- cliext::set::to_array
- cliext::set::upper_bound
- cliext::set::value_comp
- cliext::set::value_compare
- cliext::set::value_type
helpviewer_keywords:
- <cliext/set> header [STL/CLR]
- <set> header [STL/CLR]
- set class [STL/CLR]
- operator!= (set) member [STL/CLR]
- operator< (set) member [STL/CLR]
- operator<= (set) member [STL/CLR]
- operator== (set) member [STL/CLR]
- operator> (set) member [STL/CLR]
- operator>= (set) member [STL/CLR]
- begin member [STL/CLR]
- clear member [STL/CLR]
- const_iterator member [STL/CLR]
- const_reference member [STL/CLR]
- const_reverse_iterator member [STL/CLR]
- count member [STL/CLR]
- difference_type member [STL/CLR]
- empty member [STL/CLR]
- end member [STL/CLR]
- equal_range member [STL/CLR]
- erase member [STL/CLR]
- find member [STL/CLR]
- generic_container member [STL/CLR]
- generic_iterator member [STL/CLR]
- generic_reverse_iterator member [STL/CLR]
- generic_value member [STL/CLR]
- insert member [STL/CLR]
- iterator member [STL/CLR]
- key_comp member [STL/CLR]
- key_compare member [STL/CLR]
- key_type member [STL/CLR]
- lower_bound member [STL/CLR]
- make_value member [STL/CLR]
- operator= member [STL/CLR]
- rbegin member [STL/CLR]
- reference member [STL/CLR]
- rend member [STL/CLR]
- reverse_iterator member [STL/CLR]
- set member [STL/CLR]
- size member [STL/CLR]
- size_type member [STL/CLR]
- swap member [STL/CLR]
- to_array member [STL/CLR]
- upper_bound member [STL/CLR]
- value_comp member [STL/CLR]
- value_compare member [STL/CLR]
- value_type member [STL/CLR]
ms.assetid: 27d3628c-741a-43a7-bef1-5085536f679e
ms.openlocfilehash: 38d02576b270d41e0a21076c92d16f8349d54ecb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335365"
---
# <a name="set-stlclr"></a>set (STL/CLR)

La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi con accesso bidirezionale. Il contenitore viene usato `set` per gestire una sequenza di elementi come albero ordinato (quasi) bilanciato di nodi, ognuno dei quali archivia un elemento.

Nella descrizione riportata di seguito `GValue` è uguale a `GKey` , che a sua volta corrisponde a *Key* , a meno che quest'ultimo non sia un tipo di riferimento, nel qual caso è `Key^` .

## <a name="syntax"></a>Sintassi

```cpp
template<typename Key>
    ref class set
        :   public
        System::ICloneable,
        System::Collections::IEnumerable,
        System::Collections::ICollection,
        System::Collections::Generic::IEnumerable<GValue>,
        System::Collections::Generic::ICollection<GValue>,
        System::Collections::Generic::IList<GValue>,
        Microsoft::VisualC::StlClr::ITree<Gkey, GValue>
    { ..... };
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Tipo del componente chiave di un elemento nella sequenza controllata.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<cliext/set>

**Spazio dei nomi:** cliext

## <a name="declarations"></a>Dichiarazioni

|Definizione del tipo|Descrizione|
|---------------------|-----------------|
|[set::const_iterator (STL/CLR)](#const_iterator)|Tipo di un iteratore costante per la sequenza controllata.|
|[set::const_reference (STL/CLR)](#const_reference)|Tipo di un riferimento costante a un elemento.|
|[set::const_reverse_iterator (STL/CLR)](#const_reverse_iterator)|Tipo di un iteratore inverso costante per la sequenza controllata.|
|[set::difference_type (STL/CLR)](#difference_type)|Tipo di una distanza (possibilmente firmata) tra due elementi.|
|[set::generic_container (STL/CLR)](#generic_container)|Tipo dell'interfaccia generica per il contenitore.|
|[set::generic_iterator (STL/CLR)](#generic_iterator)|Tipo di un iteratore per l'interfaccia generica per il contenitore.|
|[set::generic_reverse_iterator (STL/CLR)](#generic_reverse_iterator)|Tipo di un iteratore inverso per l'interfaccia generica per il contenitore.|
|[set::generic_value (STL/CLR)](#generic_value)|Tipo di un elemento per l'interfaccia generica per il contenitore.|
|[set::iterator (STL/CLR)](#iterator)|Tipo di un iteratore per la sequenza controllata.|
|[set::key_compare (STL/CLR)](#key_compare)|Delegato di ordinamento per due chiavi.|
|[set::key_type (STL/CLR)](#key_type)|Tipo di una chiave di ordinamento.|
|[set::reference (STL/CLR)](#reference)|Tipo di un riferimento a un elemento.|
|[set::reverse_iterator (STL/CLR)](#reverse_iterator)|Tipo di un iteratore inverso della sequenza controllata.|
|[set::size_type (STL/CLR)](#size_type)|Il tipo di una distanza (non negativa) tra due elementi.|
|[set::value_compare (STL/CLR)](#value_compare)|Delegato di ordinamento per i valori di due elementi.|
|[set::value_type (STL/CLR)](#value_type)|Tipo di un elemento.|

|Funzione membro|Description|
|---------------------|-----------------|
|[set::begin (STL/CLR)](#begin)|Indica l'inizio della sequenza controllata.|
|[set::clear (STL/CLR)](#clear)|Rimuove tutti gli elementi.|
|[set::count (STL/CLR)](#count)|Conta gli elementi che corrispondono a una chiave specificata.|
|[set::empty (STL/CLR)](#empty)|Verifica se sono presenti o meno degli elementi.|
|[set::end (STL/CLR)](#end)|Designa la fine della sequenza controllata.|
|[set::equal_range (STL/CLR)](#equal_range)|Trova un intervallo che corrisponde a una chiave specificata.|
|[set::erase (STL/CLR)](#erase)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|
|[set::find (STL/CLR)](#find)|Trova un elemento che corrisponde a una chiave specificata.|
|[set::insert (STL/CLR)](#insert)|Aggiunge elementi.|
|[set::key_comp (STL/CLR)](#key_comp)|Copia il delegato di ordinamento per due chiavi.|
|[set::lower_bound (STL/CLR)](#lower_bound)|Trova l'inizio dell'intervallo che corrisponde a una chiave specificata.|
|[set::make_value (STL/CLR)](#make_value)|Costruisce un oggetto valore.|
|[set::rbegin (STL/CLR)](#rbegin)|Indica l'inizio della sequenza controllata inversa.|
|[set::rend (STL/CLR)](#rend)|Indica la fine della sequenza controllata inversa.|
|[set::set (STL/CLR)](#set)|Costruisce un oggetto contenitore.|
|[set::size (STL/CLR)](#size)|Conta il numero di elementi.|
|[set::swap (STL/CLR)](#swap)|Scambia il contenuto di due contenitori.|
|[set::to_array (STL/CLR)](#to_array)|Copia la sequenza controllata in una nuova matrice.|
|[set::upper_bound (STL/CLR)](#upper_bound)|Trova la fine dell'intervallo che corrisponde a una chiave specificata.|
|[set::value_comp (STL/CLR)](#value_comp)|Copia il delegato di ordinamento per due valori di elemento.|

|Operatore|Descrizione|
|--------------|-----------------|
|[set::operator= (STL/CLR)](#op_as)|Sostituisce la sequenza controllata.|
|[operatore! = (set) (STL/CLR)](#op_neq)|Determina se un `set` oggetto non è uguale a un altro `set` oggetto.|
|[operatore< (set) (STL/CLR)](#op_lt)|Determina se un `set` oggetto è minore di un altro `set` oggetto.|
|[operatore<= (set) (STL/CLR)](#op_lteq)|Determina se un `set` oggetto è minore o uguale a un altro `set` oggetto.|
|[operator== (set) (STL/CLR)](#op_eq)|Determina se un `set` oggetto è uguale a un altro `set` oggetto.|
|[operatore> (set) (STL/CLR)](#op_gt)|Determina se un `set` oggetto è maggiore di un altro `set` oggetto.|
|[operatore>= (set) (STL/CLR)](#op_gteq)|Determina se un `set` oggetto è maggiore o uguale a un altro `set` oggetto.|

## <a name="interfaces"></a>Interfacce

|Interfaccia|Descrizione|
|---------------|-----------------|
|<xref:System.ICloneable>|Duplicare un oggetto.|
|<xref:System.Collections.IEnumerable>|Sequenza tramite elementi.|
|<xref:System.Collections.ICollection>|Mantiene il gruppo di elementi.|
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza di elementi tipizzati.|
|<xref:System.Collections.Generic.ICollection%601>|Mantiene il gruppo di elementi tipizzati.|
|ITree\<Key, Value>|Mantiene il contenitore generico.|

## <a name="remarks"></a>Commenti

L'oggetto alloca e libera la memoria per la sequenza che controlla come singoli nodi. Inserisce gli elementi in un albero (quasi) bilanciato che mantiene ordinato modificando i collegamenti tra i nodi, mai copiando il contenuto di un nodo in un altro. Ciò significa che è possibile inserire e rimuovere elementi liberamente senza disturbare gli elementi rimanenti.

L'oggetto ordina la sequenza che controlla chiamando un oggetto delegato archiviato di tipo [set:: key_compare (STL/CLR)](#key_compare). È possibile specificare l'oggetto delegato archiviato quando si costruisce il set; Se non si specifica alcun oggetto delegato, il valore predefinito è il confronto `operator<(key_type, key_type)` . È possibile accedere a questo oggetto archiviato chiamando la funzione membro [set:: key_comp (STL/CLR)](#key_comp) `()` .

Tale oggetto delegato deve imporre un ordinamento debole rigoroso per le chiavi di tipo [set:: key_type (STL/CLR)](#key_type). Ciò significa che, per due chiavi `X` e `Y` :

`key_comp()(X, Y)` Restituisce lo stesso risultato booleano a ogni chiamata.

Se `key_comp()(X, Y)` è true, `key_comp()(Y, X)` deve essere false.

Se `key_comp()(X, Y)` è true, `X` viene detto che prima viene ordinato `Y` .

Se `!key_comp()(X, Y) && !key_comp()(Y, X)` è true, `X` e `Y` si afferma che hanno un ordinamento equivalente.

Per qualsiasi elemento `X` che precede `Y` nella sequenza controllata, `key_comp()(Y, X)` è false. Per l'oggetto delegato predefinito, il valore delle chiavi non diminuisce mai. A differenza della classe modello [impostata](../dotnet/set-stl-clr.md), un oggetto della classe modello non `set` richiede che le chiavi per tutti gli elementi siano univoche. Due o più chiavi possono avere un ordinamento equivalente.

Ogni elemento funge da EY e da un valore. La sequenza viene rappresentata in modo da consentire la ricerca, l'inserimento e la rimozione di un elemento arbitrario con un numero di operazioni proporzionale al logaritmo del numero di elementi nella sequenza (ora logaritmica). Inoltre, l'inserimento di un elemento non invalida gli iteratori e la rimozione di un elemento invalida solo gli iteratori che fanno riferimento all'elemento rimosso.

Un set supporta gli iteratori bidirezionali, il che significa che è possibile passare agli elementi adiacenti in base a un iteratore che designa un elemento nella sequenza controllata. Un nodo head speciale corrisponde all'iteratore restituito da [set:: end (STL/CLR)](#end) `()` . È possibile decrementare questo iteratore per raggiungere l'ultimo elemento nella sequenza controllata, se presente. È possibile incrementare un iteratore set per raggiungere il nodo Head e quindi confrontare uguale a `end()` . Non è tuttavia possibile dereferenziare l'iteratore restituito da `end()` .

Si noti che non è possibile fare riferimento a un elemento set direttamente in base alla relativa posizione numerica, che richiede un iteratore ad accesso casuale.

Un iteratore set archivia un handle al nodo set associato, che a sua volta archivia un handle per il contenitore associato. È possibile utilizzare gli iteratori solo con gli oggetti contenitore associati. Un iteratore di set rimane valido finché il nodo del set associato è associato a un determinato set. Inoltre, un iteratore valido è dereferenziabile, che può essere utilizzato per accedere o modificare il valore dell'elemento che designa, a condizione che non sia uguale a `end()` .

La cancellazione o la rimozione di un elemento chiama il distruttore per il valore archiviato. L'eliminazione definitiva del contenitore Cancella tutti gli elementi. Pertanto, un contenitore il cui tipo di elemento è una classe di riferimento garantisce che nessun elemento sopravviva al contenitore. Si noti, tuttavia, che un contenitore di handle *non elimina definitivamente* i relativi elementi.

## <a name="members"></a>Membri

## <a name="setbegin-stlclr"></a><a name="begin"></a> set:: begin (STL/CLR)

Indica l'inizio della sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
iterator begin();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore bidirezionale che designa il primo elemento della sequenza controllata o appena oltre la fine di una sequenza vuota. Viene utilizzato per ottenere un iteratore che definisce l'inizio `current` della sequenza controllata, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.

### <a name="example"></a>Esempio

```cpp
// cliext_set_begin.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect first two items
    Myset::iterator it = c1.begin();
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

## <a name="setclear-stlclr"></a><a name="clear"></a> set:: Clear (STL/CLR)

Rimuove tutti gli elementi.

### <a name="syntax"></a>Sintassi

```cpp
void clear();
```

### <a name="remarks"></a>Osservazioni

La funzione membro chiama in modo efficace [set:: erase (STL/CLR)](#erase) `(` [set:: begin (STL/CLR)](#begin) `(),` [set:: end (STL/CLR)](#end) `())` . Viene usato per garantire che la sequenza controllata sia vuota.

### <a name="example"></a>Esempio

```cpp
// cliext_set_clear.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// clear the container and reinspect
    c1.clear();
    System::Console::WriteLine("size() = {0}", c1.size());

// add elements and clear again
    c1.insert(L'a');
    c1.insert(L'b');

    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    c1.clear();
    System::Console::WriteLine("size() = {0}", c1.size());
    return (0);
    }
```

```Output
a b c
size() = 0
a b
size() = 0
```

## <a name="setconst_iterator-stlclr"></a><a name="const_iterator"></a> set:: const_iterator (STL/CLR)

Tipo di un iteratore costante per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T2 const_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo non specificato `T2` che può fungere da iteratore bidirezionale costante per la sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_set_const_iterator.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    Myset::const_iterator cit = c1.begin();
    for (; cit != c1.end(); ++cit)
        System::Console::Write("{0} ", *cit);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="setconst_reference-stlclr"></a><a name="const_reference"></a> set:: const_reference (STL/CLR)

Tipo di un riferimento costante a un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef value_type% const_reference;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un riferimento costante a un elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_set_const_reference.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    Myset::const_iterator cit = c1.begin();
    for (; cit != c1.end(); ++cit)
        {   // get a const reference to an element
        Myset::const_reference cref = *cit;
        System::Console::Write("{0} ", cref);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="setconst_reverse_iterator-stlclr"></a><a name="const_reverse_iterator"></a> set:: const_reverse_iterator (STL/CLR)

Tipo di un iteratore inverso costante per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T4 const_reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo non specificato `T4` che può fungere da iteratore inverso costante per la sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_set_const_reverse_iterator.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c" reversed
    Myset::const_reverse_iterator crit = c1.rbegin();
    for (; crit != c1.rend(); ++crit)
        System::Console::Write("{0} ", *crit);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c b a
```

## <a name="setcount-stlclr"></a><a name="count"></a> set:: Count (STL/CLR)

Trova il numero di elementi corrispondenti a una chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
size_type count(key_type key);
```

#### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Commenti

La funzione membro restituisce il numero di elementi nella sequenza controllata che hanno un ordinamento equivalente con la *chiave*. Viene utilizzata per determinare il numero di elementi attualmente presenti nella sequenza controllata che corrispondono a una chiave specificata.

### <a name="example"></a>Esempio

```cpp
// cliext_set_count.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("count(L'A') = {0}", c1.count(L'A'));
    System::Console::WriteLine("count(L'b') = {0}", c1.count(L'b'));
    System::Console::WriteLine("count(L'C') = {0}", c1.count(L'C'));
    return (0);
    }
```

```Output
a b c
count(L'A') = 0
count(L'b') = 1
count(L'C') = 0
```

## <a name="setdifference_type-stlclr"></a><a name="difference_type"></a> set::d ifference_type (STL/CLR)

Tipi di una distanza con segno tra due elementi.

### <a name="syntax"></a>Sintassi

```cpp
typedef int difference_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un conteggio di elementi probabilmente negativo.

### <a name="example"></a>Esempio

```cpp
// cliext_set_difference_type.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// compute positive difference
    Myset::difference_type diff = 0;
    for (Myset::iterator it = c1.begin(); it != c1.end(); ++it)
        ++diff;
    System::Console::WriteLine("end()-begin() = {0}", diff);

// compute negative difference
    diff = 0;
    for (Myset::iterator it = c1.end(); it != c1.begin(); --it)
        --diff;
    System::Console::WriteLine("begin()-end() = {0}", diff);
    return (0);
    }
```

```Output
a b c
end()-begin() = 3
begin()-end() = -3
```

## <a name="setempty-stlclr"></a><a name="empty"></a> set:: Empty (STL/CLR)

Verifica se sono presenti o meno degli elementi.

### <a name="syntax"></a>Sintassi

```cpp
bool empty();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce true per una sequenza controllata vuota. Equivale a [set:: size (STL/CLR)](#size) `() == 0` . Viene usato per verificare se il set è vuoto.

### <a name="example"></a>Esempio

```cpp
// cliext_set_empty.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    System::Console::WriteLine("size() = {0}", c1.size());
    System::Console::WriteLine("empty() = {0}", c1.empty());

// clear the container and reinspect
    c1.clear();
    System::Console::WriteLine("size() = {0}", c1.size());
    System::Console::WriteLine("empty() = {0}", c1.empty());
    return (0);
    }
```

```Output
a b c
size() = 3
empty() = False
size() = 0
empty() = True
```

## <a name="setend-stlclr"></a><a name="end"></a> set:: end (STL/CLR)

Designa la fine della sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
iterator end();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore bidirezionale che punta appena oltre la fine della sequenza controllata. Viene usato per ottenere un iteratore che designa la fine della sequenza controllata. lo stato non viene modificato se la lunghezza della sequenza controllata cambia.

### <a name="example"></a>Esempio

```cpp
// cliext_set_end.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect last two items
    Myset::iterator it = c1.end();
    --it;
    System::Console::WriteLine("*-- --end() = {0}", *--it);
    System::Console::WriteLine("*--end() = {0}", *++it);
    return (0);
    }
```

```Output
a b c
*-- --end() = b
*--end() = c
```

## <a name="setequal_range-stlclr"></a><a name="equal_range"></a> set:: equal_range (STL/CLR)

Trova un intervallo che corrisponde a una chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
cliext::pair<iterator, iterator> equal_range(key_type key);
```

#### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Commenti

La funzione membro restituisce una coppia di iteratori `cliext::pair<iterator, iterator>(` [set:: lower_bound (STL/CLR)](#lower_bound) `(key),` [set:: upper_bound (STL/CLR)](#upper_bound) `(key))` . Viene usato per determinare l'intervallo di elementi attualmente presenti nella sequenza controllata che corrispondono a una chiave specificata.

### <a name="example"></a>Esempio

```cpp
// cliext_set_equal_range.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
typedef Myset::pair_iter_iter Pairii;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// display results of failed search
    Pairii pair1 = c1.equal_range(L'x');
    System::Console::WriteLine("equal_range(L'x') empty = {0}",
        pair1.first == pair1.second);

// display results of successful search
    pair1 = c1.equal_range(L'b');
    for (; pair1.first != pair1.second; ++pair1.first)
        System::Console::Write("{0} ", *pair1.first);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
equal_range(L'x') empty = True
b
```

## <a name="seterase-stlclr"></a><a name="erase"></a> set:: erase (STL/CLR)

Rimuove gli elementi in corrispondenza delle posizioni specificate.

### <a name="syntax"></a>Sintassi

```cpp
iterator erase(iterator where);
iterator erase(iterator first, iterator last);
size_type erase(key_type key)
```

#### <a name="parameters"></a>Parametri

*first*<br/>
Inizio dell'intervallo da cancellare.

*key*<br/>
Valore della chiave da cancellare.

*last*<br/>
Fine dell'intervallo da cancellare.

*where*<br/>
Elemento da cancellare.

### <a name="remarks"></a>Commenti

La prima funzione membro rimuove l'elemento della sequenza controllata a *cui* punta e restituisce un iteratore che definisce il primo elemento rimanente oltre l'elemento rimosso o [set:: end (STL/CLR)](#end) `()` se tale elemento non esiste. Viene usato per rimuovere un singolo elemento.

La seconda funzione membro rimuove gli elementi della sequenza controllata nell'intervallo [ `first` , `last` ) e restituisce un iteratore che definisce il primo elemento rimanente oltre tutti gli elementi rimossi o `end()` se tale elemento non esiste. Viene usato per rimuovere zero o più elementi contigui.

La terza funzione membro rimuove qualsiasi elemento della sequenza controllata la cui chiave ha un ordinamento equivalente a *Key* e restituisce un conteggio del numero di elementi rimossi. Viene usato per rimuovere e contare tutti gli elementi che corrispondono a una chiave specificata.

Ogni cancellazione di elementi richiede tempo proporzionale al logaritmo del numero di elementi nella sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_set_erase.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// erase an element and reinspect
    System::Console::WriteLine("erase(begin()) = {0}",
        *c1.erase(c1.begin()));

// add elements and display " b c d e"
    c1.insert(L'd');
    c1.insert(L'e');
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// erase all but end
    Myset::iterator it = c1.end();
    System::Console::WriteLine("erase(begin(), end()-1) = {0}",
        *c1.erase(c1.begin(), --it));
    System::Console::WriteLine("size() = {0}", c1.size());
    return (0);
    }
```

```Output
a b c
erase(begin()) = b
b c d e
erase(begin(), end()-1) = e
size() = 1
```

## <a name="setfind-stlclr"></a><a name="find"></a> set:: Find (STL/CLR)

Trova un elemento che corrisponde a una chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
iterator find(key_type key);
```

#### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Commenti

Se almeno un elemento nella sequenza controllata ha un ordinamento equivalente con la *chiave*, la funzione membro restituisce un iteratore che designa uno di tali elementi. in caso contrario, restituisce [set:: end (STL/CLR)](#end) `()` . Viene usato per individuare un elemento attualmente nella sequenza controllata che corrisponde a una chiave specificata.

### <a name="example"></a>Esempio

```cpp
// cliext_set_find.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("find {0} = {1}",
        L'A', c1.find(L'A') != c1.end());
    System::Console::WriteLine("find {0} = {1}",
        L'b', *c1.find(L'b'));
    System::Console::WriteLine("find {0} = {1}",
        L'C', c1.find(L'C') != c1.end());
    return (0);
    }
```

```Output
a b c
find A = False
find b = b
find C = False
```

## <a name="setgeneric_container-stlclr"></a><a name="generic_container"></a> set:: generic_container (STL/CLR)

Tipo dell'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::
    ITree<GKey, GValue>
    generic_container;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive l'interfaccia generica per questa classe del contenitore del modello.

### <a name="example"></a>Esempio

```cpp
// cliext_set_generic_container.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct a generic container
    Myset::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// modify generic and display original
    gc1->insert(L'd');
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// modify original and display generic
    c1.insert(L'e');
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b c
a b c d
a b c d e
```

## <a name="setgeneric_iterator-stlclr"></a><a name="generic_iterator"></a> set:: generic_iterator (STL/CLR)

Tipo di un iteratore da utilizzare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::Generic::
    ContainerBidirectionalIterator<generic_value>
    generic_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un iteratore generico che può essere usato con l'interfaccia generica per questa classe del contenitore del modello.

### <a name="example"></a>Esempio

```cpp
// cliext_set_generic_iterator.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct a generic container
    Myset::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// get an element and display it
    Myset::generic_iterator gcit = gc1->begin();
    Myset::generic_value gcval = *gcit;
    System::Console::WriteLine("{0} ", gcval);
    return (0);
    }
```

```Output
a b c
a b c
a
```

## <a name="setgeneric_reverse_iterator-stlclr"></a><a name="generic_reverse_iterator"></a> set:: generic_reverse_iterator (STL/CLR)

Tipo di un iteratore inverso da usare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::Generic::
    ReverseRandomAccessIterator<generic_value>
    generic_reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un iteratore inverso generico che può essere usato con l'interfaccia generica per questa classe del contenitore del modello.

### <a name="example"></a>Esempio

```cpp
// cliext_set_generic_reverse_iterator.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct a generic container
    Myset::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// get an element and display it
    Myset::generic_reverse_iterator gcit = gc1->rbegin();
    Myset::generic_value gcval = *gcit;
    System::Console::WriteLine("{0} ", gcval);
    return (0);
    }
```

```Output
a b c
a b c
c
```

## <a name="setgeneric_value-stlclr"></a><a name="generic_value"></a> set:: generic_value (STL/CLR)

Tipo di un elemento da utilizzare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef GValue generic_value;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo `GValue` che descrive il valore dell'elemento archiviato da usare con l'interfaccia generica per questa classe del contenitore del modello.

### <a name="example"></a>Esempio

```cpp
// cliext_set_generic_value.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct a generic container
    Myset::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// get an element and display it
    Myset::generic_iterator gcit = gc1->begin();
    Myset::generic_value gcval = *gcit;
    System::Console::WriteLine("{0} ", gcval);
    return (0);
    }
```

```Output
a b c
a b c
a
```

## <a name="setinsert-stlclr"></a><a name="insert"></a> set:: Insert (STL/CLR)

Aggiunge elementi.

### <a name="syntax"></a>Sintassi

```cpp
cliext::pair<iterator, bool> insert(value_type val);
iterator insert(iterator where, value_type val);
template<typename InIter>
    void insert(InIter first, InIter last);
void insert(System::Collections::Generic::IEnumerable<value_type>^ right);
```

#### <a name="parameters"></a>Parametri

*first*<br/>
Inizio dell'intervallo da inserire.

*last*<br/>
Fine dell'intervallo da inserire.

*Ok*<br/>
Enumerazione da inserire.

*Val*<br/>
Valore della chiave da inserire.

*where*<br/>
Posizione del contenitore da inserire (solo hint).

### <a name="remarks"></a>Commenti

Ogni funzione membro inserisce una sequenza specificata dagli operandi rimanenti.

La prima funzione membro tenta di inserire un elemento con il valore *Val* e restituisce una coppia di valori `X` . Se `X.second` è true, `X.first` definisce l'elemento appena inserito; in caso contrario, `X.first` definisce un elemento con ordinamento equivalente già esistente e non viene inserito alcun nuovo elemento. Viene utilizzato per inserire un singolo elemento.

La seconda funzione membro inserisce un elemento con il valore *Val*, usando *where* come hint (per migliorare le prestazioni) e restituisce un iteratore che designa l'elemento appena inserito. Viene usato per inserire un singolo elemento che può essere adiacente a un elemento noto.

La terza funzione membro inserisce la sequenza [ `first` , `last` ). Viene usato per inserire zero o più elementi copiati da un'altra sequenza.

La quarta funzione membro inserisce la sequenza designata dal *diritto*. Viene usato per inserire una sequenza descritta da un enumeratore.

Ogni inserimento di elementi richiede tempo proporzionale al logaritmo del numero di elementi nella sequenza controllata. L'inserimento può essere eseguito in un tempo costante ammortizzato, tuttavia, dato un suggerimento che designa un elemento adiacente al punto di inserimento.

### <a name="example"></a>Esempio

```cpp
// cliext_set_insert.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
typedef Myset::pair_iter_bool Pairib;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// insert a single value, unique and duplicate
    Pairib pair1 = c1.insert(L'x');
    System::Console::WriteLine("insert(L'x') = [{0} {1}]",
        *pair1.first, pair1.second);

    pair1 = c1.insert(L'b');
    System::Console::WriteLine("insert(L'b') = [{0} {1}]",
        *pair1.first, pair1.second);

    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// insert a single value with hint
    System::Console::WriteLine("insert(begin(), L'y') = {0}",
        *c1.insert(c1.begin(), L'y'));
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// insert an iterator range
    Myset c2;
    Myset::iterator it = c1.end();
    c2.insert(c1.begin(), --it);
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// insert an enumeration
    Myset c3;
    c3.insert(   // NOTE: cast is not needed
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c1);
    for each (wchar_t elem in c3)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
insert(L'x') = [x True]
insert(L'b') = [b False]
a b c x
insert(begin(), L'y') = y
a b c x y
a b c x
a b c x y
```

## <a name="setiterator-stlclr"></a><a name="iterator"></a> set:: iterator (STL/CLR)

Tipo di un iteratore per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T1 iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo non specificato `T1` che può fungere da iteratore bidirezionale per la sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_set_iterator.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    Myset::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
        System::Console::Write("{0} ", *it);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="setkey_comp-stlclr"></a><a name="key_comp"></a> set:: key_comp (STL/CLR)

Copia il delegato di ordinamento per due chiavi.

### <a name="syntax"></a>Sintassi

```cpp
key_compare^key_comp();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce il delegato di ordinamento utilizzato per ordinare la sequenza controllata. Viene utilizzato per confrontare due chiavi.

### <a name="example"></a>Esempio

```cpp
// cliext_set_key_comp.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    Myset::key_compare^ kcomp = c1.key_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        kcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        kcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        kcomp(L'b', L'a'));
    System::Console::WriteLine();

// test a different ordering rule
    Myset c2 = cliext::greater<wchar_t>();
    kcomp = c2.key_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        kcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        kcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        kcomp(L'b', L'a'));
    return (0);
    }
```

```Output
compare(L'a', L'a') = False
compare(L'a', L'b') = True
compare(L'b', L'a') = False

compare(L'a', L'a') = False
compare(L'a', L'b') = False
compare(L'b', L'a') = True
```

## <a name="setkey_compare-stlclr"></a><a name="key_compare"></a> set:: key_compare (STL/CLR)

Delegato di ordinamento per due chiavi.

### <a name="syntax"></a>Sintassi

```cpp
Microsoft::VisualC::StlClr::BinaryDelegate<GKey, GKey, bool>
    key_compare;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del delegato che determina l'ordinamento degli argomenti chiave.

### <a name="example"></a>Esempio

```cpp
// cliext_set_key_compare.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    Myset::key_compare^ kcomp = c1.key_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        kcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        kcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        kcomp(L'b', L'a'));
    System::Console::WriteLine();

// test a different ordering rule
    Myset c2 = cliext::greater<wchar_t>();
    kcomp = c2.key_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        kcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        kcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        kcomp(L'b', L'a'));
    return (0);
    }
```

```Output
compare(L'a', L'a') = False
compare(L'a', L'b') = True
compare(L'b', L'a') = False

compare(L'a', L'a') = False
compare(L'a', L'b') = False
compare(L'b', L'a') = True
```

## <a name="setkey_type-stlclr"></a><a name="key_type"></a> set:: key_type (STL/CLR)

Tipo di una chiave di ordinamento.

### <a name="syntax"></a>Sintassi

```cpp
typedef Key key_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo della *chiave* del parametro di modello.

### <a name="example"></a>Esempio

```cpp
// cliext_set_key_type.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c" using key_type
    for (Myset::iterator it = c1.begin(); it != c1.end(); ++it)
        {   // store element in key_type object
        Myset::key_type val = *it;

        System::Console::Write("{0} ", val);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="setlower_bound-stlclr"></a><a name="lower_bound"></a> set:: lower_bound (STL/CLR)

Trova l'inizio dell'intervallo che corrisponde a una chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
iterator lower_bound(key_type key);
```

#### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Commenti

La funzione membro determina il primo elemento `X` nella sequenza controllata che ha un ordinamento equivalente a *Key*. Se tale elemento non esiste, restituisce [set:: end (STL/CLR)](#end) `()` ; in caso contrario, restituisce un iteratore che designa `X` . Viene usato per individuare l'inizio di una sequenza di elementi attualmente presenti nella sequenza controllata che corrispondono a una chiave specificata.

### <a name="example"></a>Esempio

```cpp
// cliext_set_lower_bound.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("lower_bound(L'x')==end() = {0}",
        c1.lower_bound(L'x') == c1.end());

    System::Console::WriteLine("*lower_bound(L'a') = {0}",
        *c1.lower_bound(L'a'));
    System::Console::WriteLine("*lower_bound(L'b') = {0}",
        *c1.lower_bound(L'b'));
    return (0);
    }
```

```Output
a b c
lower_bound(L'x')==end() = True
*lower_bound(L'a') = a
*lower_bound(L'b') = b
```

## <a name="setmake_value-stlclr"></a><a name="make_value"></a> set:: make_value (STL/CLR)

Costruisce un oggetto valore.

### <a name="syntax"></a>Sintassi

```cpp
static value_type make_value(key_type key);
```

#### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave da usare.

### <a name="remarks"></a>Commenti

La funzione membro restituisce un `value_type` oggetto la cui chiave è *Key*. Viene usato per comporre un oggetto adatto per l'uso con diverse altre funzioni membro.

### <a name="example"></a>Esempio

```cpp
// cliext_set_make_value.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(Myset::make_value(L'a'));
    c1.insert(Myset::make_value(L'b'));
    c1.insert(Myset::make_value(L'c'));

// display contents " a b c"
    for each (Myset::value_type elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="setoperator-stlclr"></a><a name="op_as"></a> set:: operator = (STL/CLR)

Sostituisce la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
set<Key>% operator=(set<Key>% right);
```

#### <a name="parameters"></a>Parametri

*Ok*<br/>
Contenitore da copiare.

### <a name="remarks"></a>Commenti

L'operatore membro copia *right* nell'oggetto, quindi restituisce **`*this`** . Viene usato per sostituire la sequenza controllata con una copia della sequenza controllata a *destra*.

### <a name="example"></a>Esempio

```cpp
// cliext_set_operator_as.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (Myset::value_type elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myset c2;
    c2 = c1;
// display contents " a b c"
    for each (Myset::value_type elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b c
```

## <a name="setrbegin-stlclr"></a><a name="rbegin"></a> set:: rbegin (STL/CLR)

Indica l'inizio della sequenza controllata inversa.

### <a name="syntax"></a>Sintassi

```cpp
reverse_iterator rbegin();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore inverso che definisce l'ultimo elemento della sequenza controllata o appena oltre l'inizio di una sequenza vuota. Definisce quindi l'oggetto `beginning` della sequenza inversa. Viene utilizzato per ottenere un iteratore che definisce l'inizio `current` della sequenza controllata considerata in ordine inverso, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.

### <a name="example"></a>Esempio

```cpp
// cliext_set_rbegin.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect first two items in reversed sequence
    Myset::reverse_iterator rit = c1.rbegin();
    System::Console::WriteLine("*rbegin() = {0}", *rit);
    System::Console::WriteLine("*++rbegin() = {0}", *++rit);
    return (0);
    }
```

```Output
a b c
*rbegin() = c
*++rbegin() = b
```

## <a name="setreference-stlclr"></a><a name="reference"></a> set:: Reference (STL/CLR)

Tipo di un riferimento a un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef value_type% reference;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un riferimento a un elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_set_reference.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    Myset::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
        {   // get a reference to an element
        Myset::reference ref = *it;
        System::Console::Write("{0} ", ref);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="setrend-stlclr"></a><a name="rend"></a> set:: rend (STL/CLR)

Indica la fine della sequenza controllata inversa.

### <a name="syntax"></a>Sintassi

```cpp
reverse_iterator rend();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore inverso che punta appena oltre l'inizio della sequenza controllata. Definisce quindi l'oggetto `end` della sequenza inversa. Viene utilizzato per ottenere un iteratore che definisce la fine `current` della sequenza controllata considerata in ordine inverso, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.

### <a name="example"></a>Esempio

```cpp
// cliext_set_rend.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect first two items
    Myset::reverse_iterator rit = c1.rend();
    --rit;
    System::Console::WriteLine("*-- --rend() = {0}", *--rit);
    System::Console::WriteLine("*--rend() = {0}", *++rit);
    return (0);
    }
```

```Output
a b c
*-- --rend() = b
*--rend() = a
```

## <a name="setreverse_iterator-stlclr"></a><a name="reverse_iterator"></a> set:: reverse_iterator (STL/CLR)

Tipo di un iteratore inverso della sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T3 reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo non specificato `T3` che può essere utilizzato come iteratore inverso per la sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_set_reverse_iterator.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c" reversed
    Myset::reverse_iterator rit = c1.rbegin();
    for (; rit != c1.rend(); ++rit)
        System::Console::Write("{0} ", *rit);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c b a
```

## <a name="setset-stlclr"></a><a name="set"></a> set:: set (STL/CLR)

Costruisce un oggetto contenitore.

### <a name="syntax"></a>Sintassi

```cpp
set();
explicit set(key_compare^ pred);
set(set<Key>% right);
set(set<Key>^ right);
template<typename InIter>
    setset(InIter first, InIter last);
template<typename InIter>
    set(InIter first, InIter last,
        key_compare^ pred);
set(System::Collections::Generic::IEnumerable<GValue>^ right);
set(System::Collections::Generic::IEnumerable<GValue>^ right,
    key_compare^ pred);
```

#### <a name="parameters"></a>Parametri

*first*<br/>
Inizio dell'intervallo da inserire.

*last*<br/>
Fine dell'intervallo da inserire.

*Pred*<br/>
Predicato di ordinamento per la sequenza controllata.

*Ok*<br/>
Oggetto o un intervallo da inserire.

### <a name="remarks"></a>Commenti

Il costruttore:

`set();`

Inizializza la sequenza controllata senza elementi, con il predicato di ordinamento predefinito `key_compare()` . Viene usato per specificare una sequenza controllata iniziale vuota con il predicato di ordinamento predefinito.

Il costruttore:

`explicit set(key_compare^ pred);`

Inizializza la sequenza controllata senza elementi, con il predicato di ordinamento *predazione*. Viene usato per specificare una sequenza controllata iniziale vuota, con il predicato di ordinamento specificato.

Il costruttore:

`set(set<Key>% right);`

Inizializza la sequenza controllata con la sequenza [ `right.begin()` , `right.end()` ) con il predicato di ordinamento predefinito. Viene usato per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dal *diritto* dell'oggetto set, con il predicato di ordinamento predefinito.

Il costruttore:

`set(set<Key>^ right);`

Inizializza la sequenza controllata con la sequenza [ `right->begin()` , `right->end()` ) con il predicato di ordinamento predefinito. Viene usato per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dal *diritto* dell'oggetto set, con il predicato di ordinamento predefinito.

Il costruttore:

`template<typename InIter> set(InIter first, InIter last);`

Inizializza la sequenza controllata con la sequenza [ `first` , `last` ) con il predicato di ordinamento predefinito. Viene usato per rendere la sequenza controllata una copia di un'altra sequenza, con il predicato di ordinamento predefinito.

Il costruttore:

`template<typename InIter> set(InIter first, InIter last, key_compare^ pred);`

Inizializza la sequenza controllata con la sequenza [ `first` , `last` ) con il predicato di ordinamento *predazione*. Viene usato per rendere la sequenza controllata una copia di un'altra sequenza, con il predicato di ordinamento specificato.

Il costruttore:

`set(System::Collections::Generic::IEnumerable<Key>^ right);`

Inizializza la sequenza controllata con la sequenza designata dal *diritto* dell'enumeratore, con il predicato di ordinamento predefinito. Viene usato per fare in modo che la sequenza controllata venga copiata da un'altra sequenza descritta da un enumeratore, con il predicato di ordinamento predefinito.

Il costruttore:

`set(System::Collections::Generic::IEnumerable<Key>^ right, key_compare^ pred);`

Inizializza la sequenza controllata con la sequenza designata dal *diritto* dell'enumeratore, con il *predicato* di ordinamento. Viene usato per fare in modo che la sequenza controllata venga copiata da un'altra sequenza descritta da un enumeratore, con il predicato di ordinamento specificato.

### <a name="example"></a>Esempio

```cpp
// cliext_set_construct.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
// construct an empty container
    Myset c1;
    System::Console::WriteLine("size() = {0}", c1.size());

    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct with an ordering rule
    Myset c2 = cliext::greater_equal<wchar_t>();
    System::Console::WriteLine("size() = {0}", c2.size());

    c2.insert(c1.begin(), c1.end());
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct with an iterator range
    Myset c3(c1.begin(), c1.end());
    for each (wchar_t elem in c3)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct with an iterator range and an ordering rule
    Myset c4(c1.begin(), c1.end(),
        cliext::greater_equal<wchar_t>());
    for each (wchar_t elem in c4)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct with an enumeration
    Myset c5(   // NOTE: cast is not needed
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3);
    for each (wchar_t elem in c5)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct with an enumeration and an ordering rule
    Myset c6(   // NOTE: cast is not needed
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3,
            cliext::greater_equal<wchar_t>());
    for each (wchar_t elem in c6)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct from a generic container
    Myset c7(c4);
    for each (wchar_t elem in c7)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct by copying another container
    Myset c8(%c3);
    for each (wchar_t elem in c8)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
size() = 0
a b c
size() = 0
c b a
a b c
c b a
a b c
c b a
c b a
a b c
```

## <a name="setsize-stlclr"></a><a name="size"></a> set:: size (STL/CLR)

Conta il numero di elementi.

### <a name="syntax"></a>Sintassi

```cpp
size_type size();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce la lunghezza della sequenza controllata. Viene usato per determinare il numero di elementi attualmente presenti nella sequenza controllata. Se è sufficiente che la sequenza abbia dimensioni diversi da zero, vedere [set:: Empty (STL/CLR)](#empty) `()` .

### <a name="example"></a>Esempio

```cpp
// cliext_set_size.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    System::Console::WriteLine("size() = {0} starting with 3", c1.size());

// clear the container and reinspect
    c1.clear();
    System::Console::WriteLine("size() = {0} after clearing", c1.size());

// add elements and clear again
    c1.insert(L'a');
    c1.insert(L'b');
    System::Console::WriteLine("size() = {0} after adding 2", c1.size());
    return (0);
    }
```

```Output
a b c
size() = 3 starting with 3
size() = 0 after clearing
size() = 2 after adding 2
```

## <a name="setsize_type-stlclr"></a><a name="size_type"></a> set:: size_type (STL/CLR)

Tipo di una distanza con segno tra due elementi.

### <a name="syntax"></a>Sintassi

```cpp
typedef int size_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un conteggio di elementi non negativi.

### <a name="example"></a>Esempio

```cpp
// cliext_set_size_type.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// compute positive difference
    Myset::size_type diff = 0;
    for (Myset::iterator it = c1.begin(); it != c1.end(); ++it)
        ++diff;
    System::Console::WriteLine("end()-begin() = {0}", diff);
    return (0);
    }
```

```Output
a b c
end()-begin() = 3
```

## <a name="setswap-stlclr"></a><a name="swap"></a> set:: swap (STL/CLR)

Scambia il contenuto di due contenitori.

### <a name="syntax"></a>Sintassi

```cpp
void swap(set<Key>% right);
```

#### <a name="parameters"></a>Parametri

*Ok*<br/>
Contenitore con cui scambiare il contenuto.

### <a name="remarks"></a>Commenti

La funzione membro scambia le sequenze controllate tra **`this`** e *right*. Esegue questa operazione in un tempo costante e non genera alcuna eccezione. Viene usato come modo rapido per scambiare il contenuto di due contenitori.

### <a name="example"></a>Esempio

```cpp
// cliext_set_swap.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct another container with repetition of values
    Myset c2;
    c2.insert(L'd');
    c2.insert(L'e');
    c2.insert(L'f');
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
d e f
d e f
a b c
```

## <a name="setto_array-stlclr"></a><a name="to_array"></a> set:: to_array (STL/CLR)

Copia la sequenza controllata in una nuova matrice.

### <a name="syntax"></a>Sintassi

```cpp
cli::array<value_type>^ to_array();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce una matrice che contiene la sequenza controllata. Viene usato per ottenere una copia della sequenza controllata in forma di matrice.

### <a name="example"></a>Esempio

```cpp
// cliext_set_to_array.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// copy the container and modify it
    cli::array<wchar_t>^ a1 = c1.to_array();

    c1.insert(L'd');
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// display the earlier array copy
    for each (wchar_t elem in a1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c d
a b c
```

## <a name="setupper_bound-stlclr"></a><a name="upper_bound"></a> set:: upper_bound (STL/CLR)

Trova la fine dell'intervallo che corrisponde a una chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
iterator upper_bound(key_type key);
```

#### <a name="parameters"></a>Parametri

*key*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Commenti

La funzione membro determina l'ultimo elemento della `X` sequenza controllata che ha un ordinamento equivalente a *Key*. Se tale elemento non esiste o se `X` è l'ultimo elemento nella sequenza controllata, restituisce [set:: end (STL/CLR)](#end) `()` ; in caso contrario, restituisce un iteratore che definisce il primo elemento successivo a `X` . Viene usato per individuare la fine di una sequenza di elementi attualmente presenti nella sequenza controllata che corrispondono a una chiave specificata.

### <a name="example"></a>Esempio

```cpp
// cliext_set_upper_bound.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("upper_bound(L'x')==end() = {0}",
        c1.upper_bound(L'x') == c1.end());

    System::Console::WriteLine("*upper_bound(L'a') = {0}",
        *c1.upper_bound(L'a'));
    System::Console::WriteLine("*upper_bound(L'b') = {0}",
        *c1.upper_bound(L'b'));
    return (0);
    }
```

```Output
a b c
upper_bound(L'x')==end() = True
*upper_bound(L'a') = b
*upper_bound(L'b') = c
```

## <a name="setvalue_comp-stlclr"></a><a name="value_comp"></a> set:: value_comp (STL/CLR)

Copia il delegato di ordinamento per due valori di elemento.

### <a name="syntax"></a>Sintassi

```cpp
value_compare^ value_comp();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce il delegato di ordinamento utilizzato per ordinare la sequenza controllata. Viene utilizzato per confrontare due valori di elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_set_value_comp.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    Myset::value_compare^ kcomp = c1.value_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        kcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        kcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        kcomp(L'b', L'a'));
    System::Console::WriteLine();
    return (0);
    }
```

```Output
compare(L'a', L'a') = False
compare(L'a', L'b') = True
compare(L'b', L'a') = False
```

## <a name="setvalue_compare-stlclr"></a><a name="value_compare"></a> set:: value_compare (STL/CLR)

Delegato di ordinamento per i valori di due elementi.

### <a name="syntax"></a>Sintassi

```cpp
Microsoft::VisualC::StlClr::BinaryDelegate<generic_value, generic_value, bool>
    value_compare;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del delegato che determina l'ordine dei relativi argomenti valore.

### <a name="example"></a>Esempio

```cpp
// cliext_set_value_compare.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    Myset::value_compare^ kcomp = c1.value_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        kcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        kcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        kcomp(L'b', L'a'));
    System::Console::WriteLine();
    return (0);
    }
```

```Output
compare(L'a', L'a') = False
compare(L'a', L'b') = True
compare(L'b', L'a') = False
```

## <a name="setvalue_type-stlclr"></a><a name="value_type"></a> set:: value_type (STL/CLR)

Tipo di un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef generic_value value_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è sinonimo di `generic_value`.

### <a name="example"></a>Esempio

```cpp
// cliext_set_value_type.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c" using value_type
    for (Myset::iterator it = c1.begin(); it != c1.end(); ++it)
        {   // store element in value_type object
        Myset::value_type val = *it;

        System::Console::Write("{0} ", val);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="operator-set-stlclr"></a><a name="op_neq"></a> operatore! = (set) (STL/CLR)

Confronto elenco non uguale.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Key>
    bool operator!=(set<Key>% left,
        set<Key>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Commenti

La funzione operator restituisce `!(left == right)` . Viene usato per verificare se *Left* non è ordinato come *right* quando i due set vengono confrontati elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_set_operator_ne.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myset c2;
    c2.insert(L'a');
    c2.insert(L'b');
    c2.insert(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("[a b c] != [a b c] is {0}",
        c1 != c1);
    System::Console::WriteLine("[a b c] != [a b d] is {0}",
        c1 != c2);
    return (0);
    }
```

```Output
a b c
a b d
[a b c] != [a b c] is False
[a b c] != [a b d] is True
```

## <a name="operatorlt-set-stlclr"></a><a name="op_lt"></a> operatore &lt; (set) (STL/CLR)

Elenco minore del confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Key>
    bool operator<(set<Key>% left,
        set<Key>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Commenti

La funzione operator restituisce true se, per la posizione più bassa `i` per la quale `!(right[i] < left[i])` è anche true `left[i] < right[i]` . In caso contrario, viene restituito `left->size() < right->size()` che viene utilizzato per verificare se *Left* viene ordinato prima del *diritto* quando i due set vengono confrontati elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_set_operator_lt.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myset c2;
    c2.insert(L'a');
    c2.insert(L'b');
    c2.insert(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("[a b c] < [a b c] is {0}",
        c1 < c1);
    System::Console::WriteLine("[a b c] < [a b d] is {0}",
        c1 < c2);
    return (0);
    }
```

```Output
a b c
a b d
[a b c] < [a b c] is False
[a b c] < [a b d] is True
```

## <a name="operatorlt-set-stlclr"></a><a name="op_lteq"></a> operatore &lt; = (set) (STL/CLR)

Elenco di confronto minore o uguale a.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Key>
    bool operator<=(set<Key>% left,
        set<Key>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Commenti

La funzione operator restituisce `!(right < left)` . Viene usato per verificare se *Left* non è ordinato dopo *right* quando i due set vengono confrontati elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_set_operator_le.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myset c2;
    c2.insert(L'a');
    c2.insert(L'b');
    c2.insert(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("[a b c] <= [a b c] is {0}",
        c1 <= c1);
    System::Console::WriteLine("[a b d] <= [a b c] is {0}",
        c2 <= c1);
    return (0);
    }
```

```Output
a b c
a b d
[a b c] <= [a b c] is True
[a b d] <= [a b c] is False
```

## <a name="operator-set-stlclr"></a><a name="op_eq"></a> operatore = = (set) (STL/CLR)

Elenca confronto uguale.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Key>
    bool operator==(set<Key>% left,
        set<Key>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Commenti

La funzione operator restituisce true solo se le sequenze controllate da *Left* e *right* hanno la stessa lunghezza e, per ogni posizione `i` , `left[i] ==` `right[i]` . Viene usato per verificare se *Left* è ordinato come *right* quando i due set vengono confrontati elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_set_operator_eq.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myset c2;
    c2.insert(L'a');
    c2.insert(L'b');
    c2.insert(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("[a b c] == [a b c] is {0}",
        c1 == c1);
    System::Console::WriteLine("[a b c] == [a b d] is {0}",
        c1 == c2);
    return (0);
    }
```

```Output
a b c
a b d
[a b c] == [a b c] is True
[a b c] == [a b d] is False
```

## <a name="operatorgt-set-stlclr"></a><a name="op_gt"></a> operatore &gt; (set) (STL/CLR)

Elenco maggiore di confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Key>
    bool operator>(set<Key>% left,
        set<Key>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Commenti

La funzione operator restituisce `right` `<` `left` . Viene usato per verificare se *Left* viene ordinato dopo *right* quando i due set vengono confrontati elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_set_operator_gt.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myset c2;
    c2.insert(L'a');
    c2.insert(L'b');
    c2.insert(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("[a b c] > [a b c] is {0}",
        c1 > c1);
    System::Console::WriteLine("[a b d] > [a b c] is {0}",
        c2 > c1);
    return (0);
    }
```

```Output
a b c
a b d
[a b c] > [a b c] is False
[a b d] > [a b c] is True
```

## <a name="operatorgt-set-stlclr"></a><a name="op_gteq"></a> operatore &gt; = (set) (STL/CLR)

Elenco di confronto maggiore o uguale a.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Key>
    bool operator>=(set<Key>% left,
        set<Key>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Commenti

La funzione operator restituisce `!(left < right)` . Viene usato per verificare se *Left* non è ordinato prima di *right* quando i due set vengono confrontati elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_set_operator_ge.cpp
// compile with: /clr
#include <cliext/set>

typedef cliext::set<wchar_t> Myset;
int main()
    {
    Myset c1;
    c1.insert(L'a');
    c1.insert(L'b');
    c1.insert(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myset c2;
    c2.insert(L'a');
    c2.insert(L'b');
    c2.insert(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    System::Console::WriteLine("[a b c] >= [a b c] is {0}",
        c1 >= c1);
    System::Console::WriteLine("[a b c] >= [a b d] is {0}",
        c1 >= c2);
    return (0);
    }
```

```Output
a b c
a b d
[a b c] >= [a b c] is True
[a b c] >= [a b d] is False
```
