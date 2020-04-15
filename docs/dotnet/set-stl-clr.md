---
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
ms.openlocfilehash: 38b0a3278efd10ef5cc989a5fc900bf82d377eae
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320315"
---
# <a name="set-stlclr"></a>set (STL/CLR)

La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi con accesso bidirezionale. Utilizzare il `set` contenitore per gestire una sequenza di elementi come un (quasi) struttura ad albero ordinata bilanciata di nodi, ognuno dei quali archivia un elemento.

`GValue` Nella descrizione seguente, è `GKey`lo stesso di , che a sua volta è uguale a `Key^` *Key* a meno che quest'ultimo non sia un tipo di riferimento, nel qual caso è .

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

*Codice*<br/>
Tipo del componente chiave di un elemento nella sequenza controllata.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<cliext/set>

**Spazio dei nomi:** cliext

## <a name="declarations"></a>Dichiarazioni

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|[set::const_iterator (STL/CLR)](#const_iterator)|Tipo di un iteratore costante per la sequenza controllata.|
|[set::const_reference (STL/CLR)](#const_reference)|Tipo di un riferimento costante a un elemento.|
|[set::const_reverse_iterator (STL/CLR)](#const_reverse_iterator)|Tipo di un iteratore inverso costante per la sequenza controllata.|
|[set::difference_type (STL/CLR)](#difference_type)|Tipo di distanza (eventualmente con segno) tra due elementi.|
|[set::generic_container (STL/CLR)](#generic_container)|Tipo dell'interfaccia generica per il contenitore.|
|[set::generic_iterator (STL/CLR)](#generic_iterator)|Tipo di iteratore per l'interfaccia generica per il contenitore.|
|[set::generic_reverse_iterator (STL/CLR)](#generic_reverse_iterator)|Tipo di iteratore inverso per l'interfaccia generica per il contenitore.|
|[set::generic_value (STL/CLR)](#generic_value)|Tipo di un elemento per l'interfaccia generica per il contenitore.|
|[set::iterator (STL/CLR)](#iterator)|Tipo di un iteratore per la sequenza controllata.|
|[set::key_compare (STL/CLR)](#key_compare)|Delegato di ordinamento per due chiavi.|
|[set::key_type (STL/CLR)](#key_type)|Tipo di una chiave di ordinamento.|
|[set::reference (STL/CLR)](#reference)|Tipo di un riferimento a un elemento.|
|[set::reverse_iterator (STL/CLR)](#reverse_iterator)|Tipo di un iteratore inverso della sequenza controllata.|
|[set::size_type (STL/CLR)](#size_type)|Il tipo di distanza (non negativa) tra due elementi.|
|[set::value_compare (STL/CLR)](#value_compare)|Delegato di ordinamento per due valori di elemento.|
|[set::value_type (STL/CLR)](#value_type)|Tipo di un elemento.|

|Funzione membro|Descrizione|
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
|[operator! (set) (STL/CLR)](#op_neq)|Determina se `set` un oggetto non `set` è uguale a un altro oggetto.|
|[< operatore (set) (STL/CLR)](#op_lt)|Determina se `set` un oggetto `set` è minore di un altro oggetto.|
|[operatore<: (set) (STL/CLR)](#op_lteq)|Determina se `set` un oggetto è minore `set` o uguale a un altro oggetto.|
|[operator== (set) (STL/CLR)](#op_eq)|Determina se `set` un oggetto `set` è uguale a un altro oggetto.|
|[> operatore (set) (STL/CLR)](#op_gt)|Determina se `set` un oggetto `set` è maggiore di un altro oggetto.|
|[operatore>: (set) (STL/CLR)](#op_gteq)|Determina se `set` un oggetto è maggiore `set` o uguale a un altro oggetto.|

## <a name="interfaces"></a>Interfacce

|Interfaccia|Descrizione|
|---------------|-----------------|
|<xref:System.ICloneable>|Duplicare un oggetto.|
|<xref:System.Collections.IEnumerable>|Sequenza attraverso gli elementi.|
|<xref:System.Collections.ICollection>|Mantenere un gruppo di elementi.|
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza tramite elementi tipati.|
|<xref:System.Collections.Generic.ICollection%601>|Mantenere il gruppo di elementi tipati.|
|Chiave\<ITree,> valore|Gestire il contenitore generico.|

## <a name="remarks"></a>Osservazioni

L'oggetto alloca e libera spazio di archiviazione per la sequenza che controlla come singoli nodi. Inserisce elementi in un albero (quasi) bilanciato che mantiene ordinato modificando i collegamenti tra i nodi, mai copiando il contenuto di un nodo a un altro. Ciò significa che è possibile inserire e rimuovere elementi liberamente senza disturbare gli elementi rimanenti.

L'oggetto ordina la sequenza che controlla chiamando un oggetto delegato archiviato di tipo [set::key_compare (STL/CLR)](../dotnet/set-key-compare-stl-clr.md). È possibile specificare l'oggetto delegato archiviato quando si costruisce il set; Se non si specifica alcun oggetto `operator<(key_type, key_type)`delegato, il valore predefinito è il confronto . È possibile accedere a questo oggetto archiviato chiamando la funzione membro [set::key_comp (STL/CLR)](../dotnet/set-key-comp-stl-clr.md)`()`.

Un oggetto delegato di questo tipo deve imporre un ordinamento debole rigoroso per le chiavi di tipo [set::key_type (STL/CLR)](../dotnet/set-key-type-stl-clr.md). Ciò significa, per `X` `Y`due tasti qualsiasi e:

`key_comp()(X, Y)`restituisce lo stesso risultato booleano a ogni chiamata.

Se `key_comp()(X, Y)` è true, allora `key_comp()(Y, X)` deve essere false.

Se `key_comp()(X, Y)` è vero, allora `X` si `Y`dice di essere ordinato prima di .

Se `!key_comp()(X, Y) && !key_comp()(Y, X)` è vero, allora `X` e `Y` si dice che hanno un ordinamento equivalente.

Per qualsiasi `X` elemento che `Y` precede nella `key_comp()(Y, X)` sequenza controllata, è false. Per l'oggetto delegato predefinito, le chiavi non diminuiscono mai di valore. A differenza [set](../dotnet/set-stl-clr.md)della classe modello `set` set , un oggetto della classe modello non richiede che le chiavi per tutti gli elementi siano univoche. Due o più chiavi possono avere un ordinamento equivalente.

Ogni elemento funge sia da ey che da valore. La sequenza è rappresentata in modo da consentire la ricerca, l'inserimento e la rimozione di un elemento arbitrario con una serie di operazioni proporzionali al logaritmo del numero di elementi nella sequenza (tempo logaritmico). Inoltre, l'inserimento di un elemento non invalida gli iteratori e la rimozione di un elemento invalida solo gli iteratori che fanno riferimento all'elemento rimosso.

Un set supporta gli iteratori bidirezionali, il che significa che è possibile passare agli elementi adiacenti dato un iteratore che definisce un elemento nella sequenza controllata. Un nodo head speciale corrisponde all'iteratore restituito da [set::end (STL/CLR)](../dotnet/set-end-stl-clr.md)`()`. È possibile diminuire questo iteratore per raggiungere l'ultimo elemento nella sequenza controllata, se presente. È possibile incrementare un iteratore set per raggiungere il `end()`nodo head e quindi verrà confrontato con . Tuttavia, non è possibile `end()`dereferenziare l'iteratore restituito da .

Si noti che non è possibile fare riferimento a un elemento set direttamente data la posizione numerica -- che richiede un iteratore di accesso casuale.

Un iteratore set archivia un handle per il nodo set associato, che a sua volta archivia un handle al contenitore associato. È possibile usare gli iteratori solo con gli oggetti contenitore associati. Un iteratore set rimane valido finché il nodo set associato è associato a un set. Inoltre, un iteratore valido è dereferencable -- è possibile utilizzarlo per accedere o modificare `end()`il valore dell'elemento che definisce -- purché non sia uguale a .

La cancellazione o la rimozione di un elemento chiama il distruttore per il relativo valore archiviato. L'eliminazione del contenitore cancella tutti gli elementi. Pertanto, un contenitore il cui tipo di elemento è una classe di riferimento assicura che nessun elemento riliverà il contenitore. Si noti, tuttavia, che un contenitore di handle *non* distrugge i relativi elementi.

## <a name="members"></a>Membri

## <a name="setbegin-stlclr"></a><a name="begin"></a>set::begin (STL/CLR)

Indica l'inizio della sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
iterator begin();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore bidirezionale che definisce il primo elemento della sequenza controllata o appena oltre la fine di una sequenza vuota. Viene utilizzato per ottenere un iteratore che definisce l'inizio `current` della sequenza controllata, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.

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

## <a name="setclear-stlclr"></a><a name="clear"></a>set::clear (STL/CLR)

Rimuove tutti gli elementi.

### <a name="syntax"></a>Sintassi

```cpp
void clear();
```

### <a name="remarks"></a>Osservazioni

La funzione membro chiama effettivamente [set::erase (STL/CLR)](../dotnet/set-erase-stl-clr.md) `(` [set::begin (STL/CLR)](../dotnet/set-begin-stl-clr.md) `(),` [set::end (STL/CLR)](../dotnet/set-end-stl-clr.md)`())`. Utilizzarla per assicurarsi che la sequenza controllata sia vuota.

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

## <a name="setconst_iterator-stlclr"></a><a name="const_iterator"></a>set::const_iterator (STL/CLR)

Tipo di un iteratore costante per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T2 const_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto `T2` di tipo non specificato che può essere utilizzato come iteratore bidirezionale costante per la sequenza controllata.

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

## <a name="setconst_reference-stlclr"></a><a name="const_reference"></a>set::const_reference (STL/CLR)

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

## <a name="setconst_reverse_iterator-stlclr"></a><a name="const_reverse_iterator"></a>set::const_reverse_iterator (STL/CLR)

Tipo di iteratore inverso costante per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T4 const_reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto `T4` di tipo non specificato che può essere utilizzato come iteratore inverso costante per la sequenza controllata.

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

## <a name="setcount-stlclr"></a><a name="count"></a>set::count (STL/CLR)

Trova il numero di elementi corrispondenti a una chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
size_type count(key_type key);
```

#### <a name="parameters"></a>Parametri

*Chiave*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce il numero di elementi nella sequenza controllata con ordinamento equivalente con *il tasto*. Viene utilizzata per determinare il numero di elementi attualmente presenti nella sequenza controllata che corrispondono a una chiave specificata.

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

## <a name="setdifference_type-stlclr"></a><a name="difference_type"></a>set::difference_type (STL/CLR)

Tipi di una distanza con segno tra due elementi.

### <a name="syntax"></a>Sintassi

```cpp
typedef int difference_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un numero di elementi eventualmente negativi.

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

## <a name="setempty-stlclr"></a><a name="empty"></a>set::empty (STL/CLR)

Verifica se sono presenti o meno degli elementi.

### <a name="syntax"></a>Sintassi

```cpp
bool empty();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce true per una sequenza controllata vuota. Equivale a [set::size (STL/CLR)](../dotnet/set-size-stl-clr.md)`() == 0`. Utilizzarla per verificare se il set è vuoto.

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

## <a name="setend-stlclr"></a><a name="end"></a>set::end (STL/CLR)

Designa la fine della sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
iterator end();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore bidirezionale che punta appena oltre la fine della sequenza controllata. Utilizzarla per ottenere un iteratore che definisce la fine della sequenza controllata; il suo stato non cambia se cambia la lunghezza della sequenza controllata.

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

## <a name="setequal_range-stlclr"></a><a name="equal_range"></a>set::equal_range (STL/CLR)

Trova un intervallo che corrisponde a una chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
cliext::pair<iterator, iterator> equal_range(key_type key);
```

#### <a name="parameters"></a>Parametri

*Chiave*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce `cliext::pair<iterator, iterator>(` una coppia di iteratori [set::lower_bound (STL/CLR)](../dotnet/set-lower-bound-stl-clr.md) `(key),` [set::upper_bound (STL/CLR)](../dotnet/set-upper-bound-stl-clr.md)`(key))`. Utilizzarla per determinare l'intervallo di elementi attualmente nella sequenza controllata che corrispondono a una chiave specificata.

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

## <a name="seterase-stlclr"></a><a name="erase"></a>set::erase (STL/CLR)

Rimuove gli elementi in corrispondenza delle posizioni specificate.

### <a name="syntax"></a>Sintassi

```cpp
iterator erase(iterator where);
iterator erase(iterator first, iterator last);
size_type erase(key_type key)
```

#### <a name="parameters"></a>Parametri

*Prima*<br/>
Inizio dell'intervallo da cancellare.

*Chiave*<br/>
Valore della chiave da cancellare.

*Ultima*<br/>
Fine intervallo da cancellare.

*Dove*<br/>
Elemento da cancellare.

### <a name="remarks"></a>Osservazioni

La prima funzione membro rimuove l'elemento della sequenza controllata a cui punta *where*e restituisce un iteratore che definisce il primo elemento rimanente oltre l'elemento rimosso oppure [set::end (STL/CLR)](../dotnet/set-end-stl-clr.md) `()` se tale elemento non esiste. Utilizzarla per rimuovere un singolo elemento.

La seconda funzione membro rimuove gli elementi della`first` `last`sequenza controllata nell'intervallo [ , ) e `end()` restituisce un iteratore che definisce il primo elemento rimanente oltre gli elementi rimossi o se tale elemento non esiste.. Utilizzarla per rimuovere zero o più elementi contigui.

La terza funzione membro rimuove qualsiasi elemento della sequenza controllata il cui tasto ha un ordinamento equivalente a *key*e restituisce un conteggio del numero di elementi rimossi. Utilizzarla per rimuovere e contare tutti gli elementi che corrispondono a una chiave specificata.

La cancellazione di ogni elemento richiede tempo proporzionale al logaritmo del numero di elementi nella sequenza controllata.

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

## <a name="setfind-stlclr"></a><a name="find"></a>set::find (STL/CLR)

Trova un elemento che corrisponde a una chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
iterator find(key_type key);
```

#### <a name="parameters"></a>Parametri

*Chiave*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Osservazioni

Se almeno un elemento nella sequenza controllata ha un ordinamento equivalente con *key*, la funzione membro restituisce un iteratore che designa uno di questi elementi; in caso contrario restituisce [set::end (STL/CLR)](../dotnet/set-end-stl-clr.md)`()`. Utilizzarla per individuare un elemento attualmente nella sequenza controllata che corrisponde a una chiave specificata.

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

## <a name="setgeneric_container-stlclr"></a><a name="generic_container"></a>set::generic_container (STL/CLR)

Tipo dell'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::
    ITree<GKey, GValue>
    generic_container;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive l'interfaccia generica per questa classe contenitore di modelli.

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

## <a name="setgeneric_iterator-stlclr"></a><a name="generic_iterator"></a>set::generic_iterator (STL/CLR)

Tipo di iteratore da utilizzare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::Generic::
    ContainerBidirectionalIterator<generic_value>
    generic_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un iteratore generico che può essere utilizzato con l'interfaccia generica per questa classe contenitore di modelli.

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

## <a name="setgeneric_reverse_iterator-stlclr"></a><a name="generic_reverse_iterator"></a>set::generic_reverse_iterator (STL/CLR)

Tipo di iteratore inverso da utilizzare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::Generic::
    ReverseRandomAccessIterator<generic_value>
    generic_reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un iteratore inverso generico che può essere utilizzato con l'interfaccia generica per questa classe contenitore di modelli.

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

## <a name="setgeneric_value-stlclr"></a><a name="generic_value"></a>set::generic_value (STL/CLR)

Tipo di un elemento da utilizzare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef GValue generic_value;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un `GValue` oggetto di tipo che descrive il valore dell'elemento archiviato da utilizzare con l'interfaccia generica per questa classe contenitore modello.

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

## <a name="setinsert-stlclr"></a><a name="insert"></a>set::insert (STL/CLR)

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

*Prima*<br/>
Inizio dell'intervallo da inserire.

*Ultima*<br/>
Fine dell'intervallo da inserire.

*va bene*<br/>
Enumerazione da inserire.

*Val*<br/>
Valore della chiave da inserire.

*Dove*<br/>
Dove nel contenitore inserire (solo suggerimento).

### <a name="remarks"></a>Osservazioni

Ognuna delle funzioni membro inserisce una sequenza specificata dagli operandi rimanenti.

La prima funzione membro cerca di inserire un *val*elemento con valore val `X`e restituisce una coppia di valori . Se `X.second` è `X.first` true, definisce l'elemento appena inserito; in `X.first` caso contrario, indica un elemento con ordinamento equivalente che esiste già e non viene inserito alcun nuovo elemento. Utilizzarla per inserire un singolo elemento.

La seconda funzione membro inserisce un elemento con valore *val*, utilizzando *where* come suggerimento (per migliorare le prestazioni) e restituisce un iteratore che definisce l'elemento appena inserito. Utilizzarla per inserire un singolo elemento che potrebbe essere adiacente a un elemento noto.

La terza funzione membro inserisce la sequenza [`first`, `last`). Utilizzarla per inserire zero o più elementi copiati da un'altra sequenza.

La quarta funzione membro inserisce la sequenza designata da *right*. Utilizzarla per inserire una sequenza descritta da un enumeratore.

Ogni inserimento di elementi richiede tempo proporzionale al logaritmo del numero di elementi nella sequenza controllata. L'inserimento può verificarsi nel tempo costante ammortizzato, tuttavia, dato un suggerimento che definisce un elemento adiacente al punto di inserimento.

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

## <a name="setiterator-stlclr"></a><a name="iterator"></a>set::iterator (STL/CLR)

Tipo di un iteratore per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T1 iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto `T1` di tipo non specificato che può fungere da iteratore bidirezionale per la sequenza controllata.

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

## <a name="setkey_comp-stlclr"></a><a name="key_comp"></a>set::key_comp (STL/CLR)

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

## <a name="setkey_compare-stlclr"></a><a name="key_compare"></a>set::key_compare (STL/CLR)

Delegato di ordinamento per due chiavi.

### <a name="syntax"></a>Sintassi

```cpp
Microsoft::VisualC::StlClr::BinaryDelegate<GKey, GKey, bool>
    key_compare;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del delegato che determina l'ordine degli argomenti chiave.

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

## <a name="setkey_type-stlclr"></a><a name="key_type"></a>set::key_type (STL/CLR)

Tipo di una chiave di ordinamento.

### <a name="syntax"></a>Sintassi

```cpp
typedef Key key_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello *Key*.

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

## <a name="setlower_bound-stlclr"></a><a name="lower_bound"></a>set::lower_bound (STL/CLR)

Trova l'inizio dell'intervallo che corrisponde a una chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
iterator lower_bound(key_type key);
```

#### <a name="parameters"></a>Parametri

*Chiave*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Osservazioni

La funzione membro determina `X` il primo elemento nella sequenza controllata con ordinamento equivalente a *key*. Se tale elemento non esiste, restituisce [set::end (STL/CLR)](../dotnet/set-end-stl-clr.md)`()`; in caso contrario restituisce un iteratore che definisce `X`. Utilizzarla per individuare l'inizio di una sequenza di elementi attualmente nella sequenza controllata che corrispondono a una chiave specificata.

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

## <a name="setmake_value-stlclr"></a><a name="make_value"></a>set::make_value (STL/CLR)

Costruisce un oggetto valore.

### <a name="syntax"></a>Sintassi

```cpp
static value_type make_value(key_type key);
```

#### <a name="parameters"></a>Parametri

*Chiave*<br/>
Valore della chiave da utilizzare.

### <a name="remarks"></a>Osservazioni

La funzione membro `value_type` restituisce un oggetto la cui chiave è *key*. Utilizzarla per comporre un oggetto adatto per l'utilizzo con diverse altre funzioni membro.

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

## <a name="setoperator-stlclr"></a><a name="op_as"></a>set::operator ( STL/CLR)

Sostituisce la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
set<Key>% operator=(set<Key>% right);
```

#### <a name="parameters"></a>Parametri

*va bene*<br/>
Contenitore da copiare.

### <a name="remarks"></a>Osservazioni

L'operatore membro copia *direttamente all'oggetto,* quindi restituisce `*this`. Utilizzarla per sostituire la sequenza controllata con una copia della sequenza controllata a *destra.*

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

## <a name="setrbegin-stlclr"></a><a name="rbegin"></a>set::rbegin (STL/CLR)

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

## <a name="setreference-stlclr"></a><a name="reference"></a>set::reference (STL/CLR)

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

## <a name="setrend-stlclr"></a><a name="rend"></a>set::rend (STL/CLR)

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

## <a name="setreverse_iterator-stlclr"></a><a name="reverse_iterator"></a>set::reverse_iterator (STL/CLR)

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

## <a name="setset-stlclr"></a><a name="set"></a>set::set (STL/CLR)

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

*Prima*<br/>
Inizio dell'intervallo da inserire.

*Ultima*<br/>
Fine dell'intervallo da inserire.

*Pred*<br/>
Predicato di ordinamento per la sequenza controllata.

*va bene*<br/>
Oggetto o un intervallo da inserire.

### <a name="remarks"></a>Osservazioni

Il costruttore:

`set();`

inizializza la sequenza controllata senza elementi, con `key_compare()`il predicato di ordinamento predefinito. Utilizzarla per specificare una sequenza iniziale controllata vuota, con il predicato di ordinamento predefinito.

Il costruttore:

`explicit set(key_compare^ pred);`

inizializza la sequenza controllata senza elementi, con il predicato di ordinamento *pred*. Utilizzarla per specificare una sequenza iniziale controllata vuota, con il predicato di ordinamento specificato.

Il costruttore:

`set(set<Key>% right);`

inizializza la sequenza controllata`right.begin()` `right.end()`con la sequenza [ , ), con il predicato di ordinamento predefinito. Utilizzarla per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto set *a destra,* con il predicato di ordinamento predefinito.

Il costruttore:

`set(set<Key>^ right);`

inizializza la sequenza controllata`right->begin()` `right->end()`con la sequenza [ , ), con il predicato di ordinamento predefinito. Utilizzarla per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto set *a destra,* con il predicato di ordinamento predefinito.

Il costruttore:

`template<typename InIter> set(InIter first, InIter last);`

inizializza la sequenza controllata`first` `last`con la sequenza [ , ), con il predicato di ordinamento predefinito. Utilizzarla per rendere la sequenza controllata una copia di un'altra sequenza, con il predicato di ordinamento predefinito.

Il costruttore:

`template<typename InIter> set(InIter first, InIter last, key_compare^ pred);`

inizializza la sequenza controllata`first` `last`con la sequenza [ , ), con il predicato di ordinamento *pred*. Utilizzarla per rendere la sequenza controllata una copia di un'altra sequenza, con il predicato di ordinamento specificato.

Il costruttore:

`set(System::Collections::Generic::IEnumerable<Key>^ right);`

inizializza la sequenza controllata con la sequenza designata dall'enumeratore *a destra,* con il predicato di ordinamento predefinito. Utilizzarla per rendere la sequenza controllata una copia di un'altra sequenza descritta da un enumeratore, con il predicato di ordinamento predefinito.

Il costruttore:

`set(System::Collections::Generic::IEnumerable<Key>^ right, key_compare^ pred);`

inizializza la sequenza controllata con la sequenza designata dall'enumeratore *right*, con il predicato di ordinamento *pred*. Utilizzarla per rendere la sequenza controllata una copia di un'altra sequenza descritta da un enumeratore, con il predicato di ordinamento specificato.

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

## <a name="setsize-stlclr"></a><a name="size"></a>set::size (STL/CLR)

Conta il numero di elementi.

### <a name="syntax"></a>Sintassi

```cpp
size_type size();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce la lunghezza della sequenza controllata. Utilizzarla per determinare il numero di elementi attualmente nella sequenza controllata. Se tutto ciò che interessa è se la sequenza ha dimensioni diverse da zero, vedere [set::empty (STL/CLR)](../dotnet/set-empty-stl-clr.md)`()`.

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

## <a name="setsize_type-stlclr"></a><a name="size_type"></a>set::size_type (STL/CLR)

Tipo di distanza con segno tra due elementi.

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

## <a name="setswap-stlclr"></a><a name="swap"></a>set::swap (STL/CLR)

Scambia il contenuto di due contenitori.

### <a name="syntax"></a>Sintassi

```cpp
void swap(set<Key>% right);
```

#### <a name="parameters"></a>Parametri

*va bene*<br/>
Contenitore con cui scambiare il contenuto.

### <a name="remarks"></a>Osservazioni

La funzione membro scambia le `this` sequenze controllate tra e *right*. Lo fa in tempo costante e non genera eccezioni. Utilizzarlo come un modo rapido per scambiare il contenuto di due contenitori.

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

## <a name="setto_array-stlclr"></a><a name="to_array"></a>set::to_array (STL/CLR)

Copia la sequenza controllata in una nuova matrice.

### <a name="syntax"></a>Sintassi

```cpp
cli::array<value_type>^ to_array();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce una matrice contenente la sequenza controllata. Utilizzarla per ottenere una copia della sequenza controllata in forma di matrice.

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

## <a name="setupper_bound-stlclr"></a><a name="upper_bound"></a>set::upper_bound (STL/CLR)

Trova la fine dell'intervallo che corrisponde a una chiave specificata.

### <a name="syntax"></a>Sintassi

```cpp
iterator upper_bound(key_type key);
```

#### <a name="parameters"></a>Parametri

*Chiave*<br/>
Valore della chiave da cercare.

### <a name="remarks"></a>Osservazioni

La funzione membro determina `X` l'ultimo elemento nella sequenza controllata con ordinamento equivalente a *key*. Se tale elemento non `X` esiste o se è l'ultimo elemento nella sequenza controllata, restituisce [set::end (STL/CLR)](../dotnet/set-end-stl-clr.md)`()`; in caso contrario restituisce un `X`iteratore che definisce il primo elemento oltre . Utilizzarla per individuare la fine di una sequenza di elementi attualmente nella sequenza controllata che corrispondono a una chiave specificata.

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

## <a name="setvalue_comp-stlclr"></a><a name="value_comp"></a>set::value_comp (STL/CLR)

Copia il delegato di ordinamento per due valori di elemento.

### <a name="syntax"></a>Sintassi

```cpp
value_compare^ value_comp();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce il delegato di ordinamento utilizzato per ordinare la sequenza controllata. Utilizzarla per confrontare due valori di elemento.

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

## <a name="setvalue_compare-stlclr"></a><a name="value_compare"></a>set::value_compare (STL/CLR)

Delegato di ordinamento per due valori di elemento.

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

## <a name="setvalue_type-stlclr"></a><a name="value_type"></a>set::value_type (STL/CLR)

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

## <a name="operator-set-stlclr"></a><a name="op_neq"></a>operator! (set) (STL/CLR)

Elenco di confronto non uguale.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Key>
    bool operator!=(set<Key>% left,
        set<Key>% right);
```

#### <a name="parameters"></a>Parametri

*Sinistra*<br/>
Contenitore sinistro da confrontare.

*va bene*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione `!(left == right)`operatore restituisce . Utilizzarla per verificare se *left* non è ordinato come *right* quando i due set vengono confrontati elemento per elemento.

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

## <a name="operatorlt-set-stlclr"></a><a name="op_lt"></a>operatore&lt; (insieme) (STL/CLR)

Elencare meno del confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Key>
    bool operator<(set<Key>% left,
        set<Key>% right);
```

#### <a name="parameters"></a>Parametri

*Sinistra*<br/>
Contenitore sinistro da confrontare.

*va bene*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione operatore restituisce true `i` if, per la posizione più bassa per la quale `!(right[i] < left[i])` è anche true che `left[i] < right[i]`. In caso `left->size() < right->size()` contrario, restituisce Si usa per verificare se *left* è ordinato prima *di right* quando i due set vengono confrontati elemento per elemento.

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

## <a name="operatorlt-set-stlclr"></a><a name="op_lteq"></a>operatore&lt;(set) (STL/CLR)

Elencare il confronto minore o uguale.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Key>
    bool operator<=(set<Key>% left,
        set<Key>% right);
```

#### <a name="parameters"></a>Parametri

*Sinistra*<br/>
Contenitore sinistro da confrontare.

*va bene*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione `!(right < left)`operatore restituisce . Utilizzarla per verificare se *left* non è ordinato dopo *right* quando i due set vengono confrontati elemento per elemento.

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

## <a name="operator-set-stlclr"></a><a name="op_eq"></a>operatore (set) (STL/CLR)

Elencare il confronto uguale.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Key>
    bool operator==(set<Key>% left,
        set<Key>% right);
```

#### <a name="parameters"></a>Parametri

*Sinistra*<br/>
Contenitore sinistro da confrontare.

*va bene*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione operatore restituisce true solo se le sequenze controllate `i`da `left[i] ==` `right[i]` *left* e *right* hanno la stessa lunghezza e, per ogni posizione , . Utilizzarla per verificare se *left* è ordinato come *right* quando i due set vengono confrontati elemento per elemento.

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

## <a name="operatorgt-set-stlclr"></a><a name="op_gt"></a>operatore&gt; (insieme) (STL/CLR)

Elenco maggiore del confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Key>
    bool operator>(set<Key>% left,
        set<Key>% right);
```

#### <a name="parameters"></a>Parametri

*Sinistra*<br/>
Contenitore sinistro da confrontare.

*va bene*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione `right` `<` `left`operatore restituisce . Utilizzarla per verificare se *left* viene ordinato dopo *right* quando i due set vengono confrontati elemento per elemento.

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

## <a name="operatorgt-set-stlclr"></a><a name="op_gteq"></a>operatore&gt;(set) (STL/CLR)

Elenco maggiore o uguale confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Key>
    bool operator>=(set<Key>% left,
        set<Key>% right);
```

#### <a name="parameters"></a>Parametri

*Sinistra*<br/>
Contenitore sinistro da confrontare.

*va bene*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione `!(left < right)`operatore restituisce . Utilizzarla per verificare se *left* non è ordinato prima *di right* quando i due set vengono confrontati elemento per elemento.

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
