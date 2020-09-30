---
title: vector (STL/CLR)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- cliext::vector
- cliext::vector::assign
- cliext::vector::at
- cliext::vector::back
- cliext::vector::back_item
- cliext::vector::begin
- cliext::vector::capacity
- cliext::vector::clear
- cliext::vector::const_iterator
- cliext::vector::const_reference
- cliext::vector::const_reverse_iterator
- cliext::vector::difference_type
- cliext::vector::empty
- cliext::vector::end
- cliext::vector::erase
- cliext::vector::front
- cliext::vector::front_item
- cliext::vector::generic_container
- cliext::vector::generic_iterator
- cliext::vector::generic_reverse_iterator
- cliext::vector::generic_value
- cliext::vector::insert
- cliext::vector::iterator
- cliext::vector::operator=
- cliext::vector::operator
- cliext::vector::pop_back
- cliext::vector::push_back
- cliext::vector::rbegin
- cliext::vector::reference
- cliext::vector::rend
- cliext::vector::reserve
- cliext::vector::resize
- cliext::vector::reverse_iterator
- cliext::vector::size
- cliext::vector::size_type
- cliext::vector::swap
- cliext::vector::to_array
- cliext::vector::value_type
- cliext::vector::vector
helpviewer_keywords:
- vector class [STL/CLR]
- <cliext/vector> header [STL/CLR]
- <vector> header [STL/CLR]
- operator!= member [STL/CLR]
- operator< member [STL/CLR]
- operator<= member [STL/CLR]
- operator== member [STL/CLR]
- operator> (vector) member [STL/CLR]
- operator>= member [STL/CLR]
- assign member [STL/CLR]
- at member [STL/CLR]
- back member [STL/CLR]
- back_item member [STL/CLR]
- begin member [STL/CLR]
- capacity member [STL/CLR]
- clear member [STL/CLR]
- const_iterator member [STL/CLR]
- const_reference member [STL/CLR]
- const_reverse_iterator member [STL/CLR]
- difference_type member [STL/CLR]
- empty member [STL/CLR]
- end member [STL/CLR]
- erase member [STL/CLR]
- front member [STL/CLR]
- front_item member [STL/CLR]
- generic_container member [STL/CLR]
- generic_iterator member [STL/CLR]
- generic_reverse_iterator member [STL/CLR]
- generic_value member [STL/CLR]
- insert member [STL/CLR]
- iterator member [STL/CLR]
- operator= member [STL/CLR]
- operator member [STL/CLR]
- pop_back member [STL/CLR]
- push_back member [STL/CLR]
- rbegin member [STL/CLR]
- reference member [STL/CLR]
- rend member [STL/CLR]
- reserve member [STL/CLR]
- resize member [STL/CLR]
- reverse_iterator member [STL/CLR]
- size member [STL/CLR]
- size_type member [STL/CLR]
- swap member [STL/CLR]
- to_array member [STL/CLR]
- value_type member [STL/CLR]
- vector member [STL/CLR]
ms.assetid: f90060d5-097a-4e9d-9a26-a634b5b9c6c2
ms.openlocfilehash: 9abecfa6e0bbdf74514e2b7162d1d22a84fa01b2
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91502407"
---
# <a name="vector-stlclr"></a>vector (STL/CLR)

La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi con accesso casuale. Il contenitore viene usato `vector` per gestire una sequenza di elementi come blocco di archiviazione contiguo. Il blocco viene implementato come una matrice che cresce su richiesta.

Nella descrizione seguente corrisponde a `GValue` *value* , a meno che quest'ultimo non sia un tipo di riferimento, nel qual caso è `Value^` .

## <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    ref class vector
        :   public
        System::ICloneable,
        System::Collections::IEnumerable,
        System::Collections::ICollection,
        System::Collections::Generic::IEnumerable<GValue>,
        System::Collections::Generic::ICollection<GValue>,
        System::Collections::Generic::IList<GValue>,
        Microsoft::VisualC::StlClr::IVector<GValue>
    { ..... };
```

### <a name="parameters"></a>Parametri

*Valore*<br/>
Tipo di un elemento nella sequenza controllata.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<cliext/vector>

**Spazio dei nomi:** cliext

## <a name="declarations"></a>Dichiarazioni

|Definizione del tipo|Descrizione|
|---------------------|-----------------|
|[vector::const_iterator (STL/CLR)](#const_iterator)|Tipo di un iteratore costante per la sequenza controllata.|
|[vector::const_reference (STL/CLR)](#const_reference)|Tipo di un riferimento costante a un elemento.|
|[vector::const_reverse_iterator (STL/CLR)](#const_reverse_iterator)|Tipo di un iteratore inverso costante per la sequenza controllata.|
|[vector::difference_type (STL/CLR)](#difference_type)|Tipo di una distanza Signed tra due elementi.|
|[vector::generic_container (STL/CLR)](#generic_container)|Tipo dell'interfaccia generica per il contenitore.|
|[vector::generic_iterator (STL/CLR)](#generic_iterator)|Tipo di un iteratore per l'interfaccia generica per il contenitore.|
|[vector::generic_reverse_iterator (STL/CLR)](#generic_reverse_iterator)|Tipo di un iteratore inverso per l'interfaccia generica per il contenitore.|
|[vector::generic_value (STL/CLR)](#generic_value)|Tipo di un elemento per l'interfaccia generica per il contenitore.|
|[vector::iterator (STL/CLR)](#iterator)|Tipo di un iteratore per la sequenza controllata.|
|[vector::reference (STL/CLR)](#reference)|Tipo di un riferimento a un elemento.|
|[vector::reverse_iterator (STL/CLR)](#reverse_iterator)|Tipo di un iteratore inverso della sequenza controllata.|
|[vector::size_type (STL/CLR)](#size_type)|Tipo di una distanza Signed tra due elementi.|
|[vector::value_type (STL/CLR)](#value_type)|Tipo di un elemento.|

|Funzione membro|Descrizione|
|---------------------|-----------------|
|[vector::assign (STL/CLR)](#assign)|Sostituisce tutti gli elementi.|
|[vector::at (STL/CLR)](#at)|Accede a un elemento in una posizione specificata.|
|[vector::back (STL/CLR)](#back)|Accede all'ultimo elemento.|
|[vector::begin (STL/CLR)](#begin)|Indica l'inizio della sequenza controllata.|
|[vector::capacity (STL/CLR)](#capacity)|Restituisce la dimensione dello spazio di memorizzazione allocato per il contenitore.|
|[vector::clear (STL/CLR)](#clear)|Rimuove tutti gli elementi.|
|[vector::empty (STL/CLR)](#empty)|Verifica se sono presenti o meno degli elementi.|
|[vector::end (STL/CLR)](#end)|Designa la fine della sequenza controllata.|
|[vector::erase (STL/CLR)](#erase)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|
|[vector::front (STL/CLR)](#front)|Accede al primo elemento.|
|[vector::insert (STL/CLR)](#insert)|Aggiunge elementi in una posizione specificata.|
|[vector::pop_back (STL/CLR)](#pop_back)|Rimuove l'ultimo elemento.|
|[vector::push_back (STL/CLR)](#push_back)|Aggiunge un nuovo elemento ultimo.|
|[vector::rbegin (STL/CLR)](#rbegin)|Indica l'inizio della sequenza controllata inversa.|
|[vector::rend (STL/CLR)](#rend)|Indica la fine della sequenza controllata inversa.|
|[vector::reserve (STL/CLR)](#reserve)|Garantisce una capacità di crescita minima per il contenitore.|
|[vector::resize (STL/CLR)](#resize)|Modifica il numero di elementi.|
|[vector::size (STL/CLR)](#size)|Conta il numero di elementi.|
|[vector::swap (STL/CLR)](#swap)|Scambia il contenuto di due contenitori.|
|[vector::to_array (STL/CLR)](#to_array)|Copia la sequenza controllata in una nuova matrice.|
|[vector::vector (STL/CLR)](#vector)|Costruisce un oggetto contenitore.|

|Proprietà|Descrizione|
|--------------|-----------------|
|[vector::back_item (STL/CLR)](#back_item)|Accede all'ultimo elemento.|
|[vector::front_item (STL/CLR)](#front_item)|Accede al primo elemento.|

|Operatore|Descrizione|
|--------------|-----------------|
|[vector::operator= (STL/CLR)](#op_as)|Sostituisce la sequenza controllata.|
|[vector::operator(STL/CLR)](#op)|Accede a un elemento in una posizione specificata.|
|[operatore! = (Vector) (STL/CLR)](#op_neq)|Determina se un `vector` oggetto non è uguale a un altro `vector` oggetto.|
|[operatore< (Vector) (STL/CLR)](#op_lt)|Determina se un `vector` oggetto è minore di un altro `vector` oggetto.|
|[operatore<= (Vector) (STL/CLR)](#op_lteq)|Determina se un `vector` oggetto è minore o uguale a un altro `vector` oggetto.|
|[operatore = = (Vector) (STL/CLR)](#op_eq)|Determina se un `vector` oggetto è uguale a un altro `vector` oggetto.|
|[operator> (vector) (STL/CLR)](#op_gt)|Determina se un `vector` oggetto è maggiore di un altro `vector` oggetto.|
|[operatore>= (Vector) (STL/CLR)](#op_gteq)|Determina se un `vector` oggetto è maggiore o uguale a un altro `vector` oggetto.|

## <a name="interfaces"></a>Interfacce

|Interfaccia|Descrizione|
|---------------|-----------------|
|<xref:System.ICloneable>|Duplicare un oggetto.|
|<xref:System.Collections.IEnumerable>|Sequenza tramite elementi.|
|<xref:System.Collections.ICollection>|Mantiene il gruppo di elementi.|
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza di elementi tipizzati.|
|<xref:System.Collections.Generic.ICollection%601>|Mantiene il gruppo di elementi tipizzati.|
|<xref:System.Collections.Generic.IList%601>|Gestisce il gruppo ordinato di elementi tipizzati.|
|Valore<IVector\>|Mantiene il contenitore generico.|

## <a name="remarks"></a>Osservazioni

L'oggetto alloca e libera la memoria per la sequenza che controlla tramite una matrice archiviata di elementi *valore* , che aumenta su richiesta. La crescita si verifica in modo tale che il costo di Accodamento di un nuovo elemento venga ammortizzato in tempo costante. In altre parole, il costo dell'aggiunta di elementi alla fine non aumenta, in media, perché la lunghezza della sequenza controllata diventa più grande. Pertanto, un vettore è un buon candidato per il contenitore sottostante per lo stack di classi modello [(STL/CLR)](../dotnet/stack-stl-clr.md).

Un oggetto `vector` supporta gli iteratori ad accesso casuale, che significa che è possibile fare riferimento a un elemento direttamente in base alla relativa posizione numerica, contando da zero per il primo elemento (anteriore), a `size() - 1` per l'ultimo elemento (indietro). Significa anche che un vettore è un buon candidato per il contenitore sottostante per la classe modello [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md).

Un iteratore vettoriale archivia un handle per l'oggetto vettore associato, insieme alla distorsione dell'elemento designato. È possibile utilizzare gli iteratori solo con gli oggetti contenitore associati. La distorsione di un elemento vector corrisponde alla relativa posizione.

L'inserimento o l'eliminazione di elementi può modificare il valore dell'elemento archiviato in una determinata posizione, quindi è possibile modificare anche il valore designato da un iteratore. (Il contenitore potrebbe dover copiare gli elementi verso l'alto o verso il basso per creare un foro prima di un inserimento o per riempire un foro dopo una cancellazione). Un iteratore vettoriale rimane tuttavia valido purché la relativa distorsione sia compresa nell'intervallo `[0, size()]` . Inoltre, un iteratore valido rimane dereferenziabile, che può essere usato per accedere o modificare il valore dell'elemento che designa, purché la distorsione non sia uguale a `size()` .

La cancellazione o la rimozione di un elemento chiama il distruttore per il valore archiviato. L'eliminazione definitiva del contenitore Cancella tutti gli elementi. Pertanto, un contenitore il cui tipo di elemento è una classe di riferimento garantisce che nessun elemento sopravviva al contenitore. Si noti, tuttavia, che un contenitore di handle non elimina definitivamente i relativi elementi.

## <a name="members"></a>Membri

## <a name="vectorassign-stlclr"></a><a name="assign"></a> Vector:: Assign (STL/CLR)

Sostituisce tutti gli elementi.

### <a name="syntax"></a>Sintassi

```cpp
void assign(size_type count, value_type val);
template<typename InIt>
    void assign(InIt first, InIt last);
void assign(System::Collections::Generic::IEnumerable<Value>^ right);
```

#### <a name="parameters"></a>Parametri

*count*<br/>
Numero di elementi da inserire.

*first*<br/>
Inizio dell'intervallo da inserire.

*last*<br/>
Fine dell'intervallo da inserire.

*Ok*<br/>
Enumerazione da inserire.

*Val*<br/>
Valore dell'elemento da inserire.

### <a name="remarks"></a>Osservazioni

La prima funzione membro sostituisce la sequenza controllata con una ripetizione di elementi *count* del valore *Val*. Viene usato per riempire il contenitore con tutti gli elementi con lo stesso valore.

Se `InIt` è un tipo Integer, la seconda funzione membro si comporta come `assign((size_type)first, (value_type)last)` . In caso contrario, sostituisce la sequenza controllata con la sequenza [ `first` , `last` ). Viene usato per fare in modo che la sequenza controllata copi un'altra sequenza.

La terza funzione membro sostituisce la sequenza controllata con la sequenza designata dal *diritto*dell'enumeratore. Viene usato per rendere la sequenza controllata una copia di una sequenza descritta da un enumeratore.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_assign.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// assign a repetition of values
    cliext::vector<wchar_t> c2;
    c2.assign(6, L'x');
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign an iterator range
    c2.assign(c1.begin(), c1.end() - 1);
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign an enumeration
    c2.assign(   // NOTE: cast is not needed
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c1);
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
x x x x x x
a b
a b c
```

## <a name="vectorat-stlclr"></a><a name="at"></a> Vector:: at (STL/CLR)

Accede a un elemento in una posizione specificata.

### <a name="syntax"></a>Sintassi

```cpp
reference at(size_type pos);
```

#### <a name="parameters"></a>Parametri

*pos*<br/>
Posizione dell'elemento a cui accedere.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un riferimento all'elemento della sequenza controllata nella posizione *pos*. Viene utilizzato per leggere o scrivere un elemento la cui posizione si conosce.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_at.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c" using at
    for (int i = 0; i < c1.size(); ++i)
        System::Console::Write("{0} ", c1.at(i));
    System::Console::WriteLine();

// change an entry and redisplay
    c1.at(1) = L'x';
    for (int i = 0; i < c1.size(); ++i)
        System::Console::Write("{0} ", c1[i]);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a x c
```

## <a name="vectorback-stlclr"></a><a name="back"></a> Vector:: Back (STL/CLR)

Accede all'ultimo elemento.

### <a name="syntax"></a>Sintassi

```cpp
reference back();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un riferimento all'ultimo elemento della sequenza controllata, che non deve essere vuoto. Viene usato per accedere all'ultimo elemento, quando si è certi che esista.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_back.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect last item
    System::Console::WriteLine("back() = {0}", c1.back());

// alter last item and reinspect
    c1.back() = L'x';
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
back() = c
a b x
```

## <a name="vectorback_item-stlclr"></a><a name="back_item"></a> Vector:: back_item (STL/CLR)

Accede all'ultimo elemento.

### <a name="syntax"></a>Sintassi

```cpp
property value_type back_item;
```

### <a name="remarks"></a>Osservazioni

La proprietà accede all'ultimo elemento della sequenza controllata, che non deve essere vuota. Viene utilizzato per leggere o scrivere l'ultimo elemento, quando si è certi che esista.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_back_item.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect last item
    System::Console::WriteLine("back_item = {0}", c1.back_item);

// alter last item and reinspect
    c1.back_item = L'x';
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
back_item = c
a b x
```

## <a name="vectorbegin-stlclr"></a><a name="begin"></a> Vector:: begin (STL/CLR)

Indica l'inizio della sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
iterator begin();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore ad accesso casuale che designa il primo elemento della sequenza controllata o appena oltre la fine di una sequenza vuota. Viene utilizzato per ottenere un iteratore che definisce l'inizio `current` della sequenza controllata, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_begin.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect first two items
    cliext::vector<wchar_t>::iterator it = c1.begin();
    System::Console::WriteLine("*begin() = {0}", *it);
    System::Console::WriteLine("*++begin() = {0}", *++it);

// alter first two items and reinspect
    *--it = L'x';
    *++it = L'y';
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
*begin() = a
*++begin() = b
x y c
```

## <a name="vectorcapacity-stlclr"></a><a name="capacity"></a> Vector:: Capacity (STL/CLR)

Restituisce la dimensione dello spazio di memorizzazione allocato per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
size_type capacity();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce lo spazio di archiviazione attualmente allocato per mantenere la sequenza controllata, un valore almeno pari a [vector:: size (STL/CLR)](#size) `()` . Viene usato per determinare il grado di crescita del contenitore prima che sia necessario riallocare lo spazio di archiviazione per la sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_capacity.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for (int i = 0; i < c1.size(); ++i)
        System::Console::Write("{0} ", c1.at(i));
    System::Console::WriteLine();

// increase capacity
    cliext::vector<wchar_t>::size_type cap = c1.capacity();
    System::Console::WriteLine("capacity() = {0}, ok = {1}",
        cap, c1.size() <= cap);
    c1.reserve(cap + 5);
    System::Console::WriteLine("capacity() = {0}, ok = {1}",
        c1.capacity(), cap + 5 <= c1.capacity());
    return (0);
    }
```

```Output
a b c
capacity() = 4, ok = True
capacity() = 9, ok = True
```

## <a name="vectorclear-stlclr"></a><a name="clear"></a> Vector:: Clear (STL/CLR)

Rimuove tutti gli elementi.

### <a name="syntax"></a>Sintassi

```cpp
void clear();
```

### <a name="remarks"></a>Osservazioni

La funzione membro chiama in modo efficace vector [:: erase (STL/CLR)](#erase) `(` [vector:: begin (STL/CLR)](#begin) `(),` [vector:: end (STL/CLR)](#end) `())` . Viene usato per garantire che la sequenza controllata sia vuota.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_clear.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// clear the container and reinspect
    c1.clear();
    System::Console::WriteLine("size() = {0}", c1.size());

// add elements and clear again
    c1.push_back(L'a');
    c1.push_back(L'b');

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

## <a name="vectorconst_iterator-stlclr"></a><a name="const_iterator"></a> Vector:: const_iterator (STL/CLR)

Tipo di un iteratore costante per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T2 const_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo non specificato `T2` che può fungere da iteratore ad accesso casuale costante per la sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_const_iterator.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    cliext::vector<wchar_t>::const_iterator cit = c1.begin();
    for (; cit != c1.end(); ++cit)
        System::Console::Write("{0} ", *cit);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="vectorconst_reference-stlclr"></a><a name="const_reference"></a> Vector:: const_reference (STL/CLR)

Tipo di un riferimento costante a un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef value_type% const_reference;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un riferimento costante a un elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_const_reference.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    cliext::vector<wchar_t>::const_iterator cit = c1.begin();
    for (; cit != c1.end(); ++cit)
        {   // get a const reference to an element
        cliext::vector<wchar_t>::const_reference cref = *cit;
        System::Console::Write("{0} ", cref);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="vectorconst_reverse_iterator-stlclr"></a><a name="const_reverse_iterator"></a> Vector:: const_reverse_iterator (STL/CLR)

Tipo di un iteratore inverso costante per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T4 const_reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo non specificato `T4` che può fungere da iteratore inverso costante per la sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_const_reverse_iterator.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c" reversed
    cliext::vector<wchar_t>::const_reverse_iterator crit = c1.rbegin();
    cliext::vector<wchar_t>::const_reverse_iterator crend = c1.rend();
    for (; crit != crend; ++crit)
        System::Console::Write("{0} ", *crit);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c b a
```

## <a name="vectordifference_type-stlclr"></a><a name="difference_type"></a> Vector::d ifference_type (STL/CLR)

Tipi di una distanza con segno tra due elementi.

### <a name="syntax"></a>Sintassi

```cpp
typedef int difference_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un conteggio di elementi firmati.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_difference_type.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// compute positive difference
    cliext::vector<wchar_t>::difference_type diff = 0;
    for (cliext::vector<wchar_t>::iterator it = c1.begin();
        it != c1.end(); ++it) ++diff;
    System::Console::WriteLine("end()-begin() = {0}", diff);

// compute negative difference
    diff = 0;
    for (cliext::vector<wchar_t>::iterator it = c1.end();
        it != c1.begin(); --it) --diff;
    System::Console::WriteLine("begin()-end() = {0}", diff);
    return (0);
    }
```

```Output
a b c
end()-begin() = 3
begin()-end() = -3
```

## <a name="vectorempty-stlclr"></a><a name="empty"></a> Vector:: Empty (STL/CLR)

Verifica se sono presenti o meno degli elementi.

### <a name="syntax"></a>Sintassi

```cpp
bool empty();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce true per una sequenza controllata vuota. Equivale a [vector:: size (STL/CLR)](#size) `() == 0` . Viene usato per verificare se il vettore è vuoto.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_empty.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

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

## <a name="vectorend-stlclr"></a><a name="end"></a> Vector:: end (STL/CLR)

Designa la fine della sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
iterator end();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore ad accesso casuale che punta appena oltre la fine della sequenza controllata. Viene utilizzato per ottenere un iteratore che definisce la fine `current` della sequenza controllata, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_end.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect last two items
    cliext::vector<wchar_t>::iterator it = c1.end();
    --it;
    System::Console::WriteLine("*-- --end() = {0}", *--it);
    System::Console::WriteLine("*--end() = {0}", *++it);

// alter first two items and reinspect
    *--it = L'x';
    *++it = L'y';
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
*-- --end() = b
*--end() = c
a x y
```

## <a name="vectorerase-stlclr"></a><a name="erase"></a> Vector:: erase (STL/CLR)

Rimuove gli elementi in corrispondenza delle posizioni specificate.

### <a name="syntax"></a>Sintassi

```cpp
iterator erase(iterator where);
iterator erase(iterator first, iterator last);
```

#### <a name="parameters"></a>Parametri

*first*<br/>
Inizio dell'intervallo da cancellare.

*last*<br/>
Fine dell'intervallo da cancellare.

*where*<br/>
Elemento da cancellare.

### <a name="remarks"></a>Osservazioni

La prima funzione membro rimuove l'elemento della sequenza controllata a *cui*punta. Viene usato per rimuovere un singolo elemento.

La seconda funzione membro rimuove gli elementi della sequenza controllata nell'intervallo [`first`, `last`). Viene usato per rimuovere zero o più elementi contigui.

Entrambe le funzioni membro restituiscono un iteratore che definisce il primo elemento rimanente oltre tutti gli elementi rimossi oppure [vector:: end (STL/CLR)](#end) `()` se tale elemento non esiste.

Quando si cancellano gli elementi, il numero di copie di elementi è lineare nel numero di elementi compresi tra la fine della cancellazione e la fine più vicina della sequenza. (Quando si cancellano uno o più elementi a una delle estremità della sequenza, non viene eseguita alcuna copia degli elementi).

### <a name="example"></a>Esempio

```cpp
// cliext_vector_erase.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// erase an element and reinspect
    System::Console::WriteLine("erase(begin()) = {0}",
        *c1.erase(c1.begin()));

// add elements and display " b c d e"
    c1.push_back(L'd');
    c1.push_back(L'e');
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// erase all but end
    cliext::vector<wchar_t>::iterator it = c1.end();
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

## <a name="vectorfront-stlclr"></a><a name="front"></a> Vector:: Front (STL/CLR)

Accede al primo elemento.

### <a name="syntax"></a>Sintassi

```cpp
reference front();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un riferimento al primo elemento della sequenza controllata, che non deve essere vuoto. Viene utilizzato per leggere o scrivere il primo elemento, quando si è certi che esista.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_front.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect first item
    System::Console::WriteLine("front() = {0}", c1.front());

// alter first item and reinspect
    c1.front() = L'x';
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
front() = a
x b c
```

## <a name="vectorfront_item-stlclr"></a><a name="front_item"></a> Vector:: front_item (STL/CLR)

Accede al primo elemento.

### <a name="syntax"></a>Sintassi

```cpp
property value_type front_item;
```

### <a name="remarks"></a>Osservazioni

La proprietà accede al primo elemento della sequenza controllata, che non deve essere vuota. Viene utilizzato per leggere o scrivere il primo elemento, quando si è certi che esista.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_front_item.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect first item
    System::Console::WriteLine("front_item = {0}", c1.front_item);

// alter first item and reinspect
    c1.front_item = L'x';
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
front_item = a
x b c
```

## <a name="vectorgeneric_container-stlclr"></a><a name="generic_container"></a> Vector:: generic_container (STL/CLR)

Tipo dell'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::
    IVector<generic_value>
    generic_container;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive l'interfaccia generica per questa classe del contenitore del modello.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_generic_container.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct a generic container
    cliext::vector<wchar_t>::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// modify generic and display original
    gc1->insert(gc1->end(), L'd');
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// modify original and display generic
    c1.push_back(L'e');

    System::Collections::IEnumerator^ enum1 =
        gc1->GetEnumerator();
    while (enum1->MoveNext())
        System::Console::Write("{0} ", enum1->Current);
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

## <a name="vectorgeneric_iterator-stlclr"></a><a name="generic_iterator"></a> Vector:: generic_iterator (STL/CLR)

Tipo di un iteratore da utilizzare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::Generic::
    ContainerRandomAccessIterator<generic_value>
    generic_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un iteratore generico che può essere usato con l'interfaccia generica per questa classe del contenitore del modello.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_generic_iterator.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct a generic container
    cliext::vector<wchar_t>::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// modify generic and display original
    cliext::vector<wchar_t>::generic_iterator gcit = gc1->begin();
    cliext::vector<wchar_t>::generic_value gcval = *gcit;
    *++gcit = gcval;
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b c
a a c
```

## <a name="vectorgeneric_reverse_iterator-stlclr"></a><a name="generic_reverse_iterator"></a> Vector:: generic_reverse_iterator (STL/CLR)

Tipo di un iteratore inverso da usare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::Generic::
    ReverseRandomAccessIterator<generic_value> generic_reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un iteratore inverso generico che può essere usato con l'interfaccia generica per questa classe del contenitore del modello.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_generic_reverse_iterator.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct a generic container
    cliext::vector<wchar_t>::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// modify generic and display original
    cliext::vector<wchar_t>::generic_reverse_iterator gcit = gc1->rbegin();
    cliext::vector<wchar_t>::generic_value gcval = *gcit;
    *++gcit = gcval;
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b c
a c c
```

## <a name="vectorgeneric_value-stlclr"></a><a name="generic_value"></a> Vector:: generic_value (STL/CLR)

Tipo di un elemento da utilizzare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef GValue generic_value;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo `GValue` che descrive il valore dell'elemento archiviato da usare con l'interfaccia generica per questa classe del contenitore del modello.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_generic_value.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct a generic container
    cliext::vector<wchar_t>::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// modify generic and display original
    cliext::vector<wchar_t>::generic_iterator gcit = gc1->begin();
    cliext::vector<wchar_t>::generic_value gcval = *gcit;
    *++gcit = gcval;
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b c
a a c
```

## <a name="vectorinsert-stlclr"></a><a name="insert"></a> Vector:: Insert (STL/CLR)

Aggiunge elementi in una posizione specificata.

### <a name="syntax"></a>Sintassi

```cpp
iterator insert(iterator where, value_type val);
void insert(iterator where, size_type count, value_type val);
template<typename InIt>
    void insert(iterator where, InIt first, InIt last);
void insert(iterator where,
    System::Collections::Generic::IEnumerable<Value>^ right);
```

#### <a name="parameters"></a>Parametri

*count*<br/>
Numero di elementi da inserire.

*first*<br/>
Inizio dell'intervallo da inserire.

*last*<br/>
Fine dell'intervallo da inserire.

*Ok*<br/>
Enumerazione da inserire.

*Val*<br/>
Valore dell'elemento da inserire.

*where*<br/>
Posizione del contenitore da inserire prima.

### <a name="remarks"></a>Osservazioni

Ogni funzione membro inserisce, prima dell'elemento a cui punta la *posizione* nella sequenza controllata, una sequenza specificata dagli operandi rimanenti.

La prima funzione membro inserisce un elemento con il valore *Val* e restituisce un iteratore che designa l'elemento appena inserito. Viene usato per inserire un singolo elemento prima di una posizione designata da un iteratore.

La seconda funzione membro inserisce una ripetizione di elementi *count* del valore *Val*. Viene usato per inserire zero o più elementi contigui che sono tutte copie dello stesso valore.

Se `InIt` è di tipo Integer, la terza funzione membro si comporta come `insert(where, (size_type)first, (value_type)last)`. In caso contrario, inserisce la sequenza [ `first` , `last` ). Viene usato per inserire zero o più elementi contigui copiati da un'altra sequenza.

La quarta funzione membro inserisce la sequenza designata dal *diritto*. Viene usato per inserire una sequenza descritta da un enumeratore.

Quando si inserisce un singolo elemento, il numero di copie degli elementi è lineare nel numero di elementi tra il punto di inserimento e la fine più vicina della sequenza. (Quando si inseriscono uno o più elementi a una delle estremità della sequenza, non viene eseguita alcuna copia degli elementi). Se `InIt` è un iteratore di input, la terza funzione membro esegue efficacemente un singolo inserimento per ogni elemento nella sequenza. In caso contrario, quando si inseriscono `N` elementi, il numero di copie di elementi è lineare in `N` più il numero di elementi tra il punto di inserimento e la fine più vicina della sequenza.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_insert.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// insert a single value using iterator
    cliext::vector<wchar_t>::iterator it = c1.begin();
    System::Console::WriteLine("insert(begin()+1, L'x') = {0}",
        *c1.insert(++it, L'x'));
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// insert a repetition of values
    cliext::vector<wchar_t> c2;
    c2.insert(c2.begin(), 2, L'y');
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// insert an iterator range
    it = c1.end();
    c2.insert(c2.end(), c1.begin(), --it);
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// insert an enumeration
    c2.insert(c2.begin(),   // NOTE: cast is not needed
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c1);
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
insert(begin()+1, L'x') = x
a x b c
y y
y y a x b
a x b c y y a x b
```

## <a name="vectoriterator-stlclr"></a><a name="iterator"></a> Vector:: iterator (STL/CLR)

Tipo di un iteratore per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T1 iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo non specificato `T1` che può fungere da iteratore ad accesso casuale per la sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_iterator.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    cliext::vector<wchar_t>::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
        System::Console::Write("{0} ", *it);
    System::Console::WriteLine();

// alter first element and redisplay
    it = c1.begin();
    *it = L'x';
    for (; it != c1.end(); ++it)
        System::Console::Write("{0} ", *it);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
x b c
```

## <a name="vectoroperator-stlclr"></a><a name="op_as"></a> Vector:: operator = (STL/CLR)

Sostituisce la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
vector<Value>% operator=(vector<Value>% right);
```

#### <a name="parameters"></a>Parametri

*Ok*<br/>
Contenitore da copiare.

### <a name="remarks"></a>Osservazioni

L'operatore membro copia *right* nell'oggetto, quindi restituisce **`*this`** . Viene usato per sostituire la sequenza controllata con una copia della sequenza controllata a *destra*.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_operator_as.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    cliext::vector<wchar_t> c2;
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

## <a name="vectoroperatorstlclr"></a><a name="op"></a> Operatore Vector:: (STL/CLR)

Accede a un elemento in una posizione specificata.

### <a name="syntax"></a>Sintassi

```cpp
reference operator[](size_type pos);
```

#### <a name="parameters"></a>Parametri

*pos*<br/>
Posizione dell'elemento a cui accedere.

### <a name="remarks"></a>Osservazioni

L'operatore membro restituisce un referene all'elemento alla posizione *pos*. Viene usato per accedere a un elemento di cui si conosce la posizione.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_operator_sub.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c" using subscripting
    for (int i = 0; i < c1.size(); ++i)
        System::Console::Write("{0} ", c1[i]);
    System::Console::WriteLine();

// change an entry and redisplay
    c1[1] = L'x';
    for (int i = 0; i < c1.size(); ++i)
        System::Console::Write("{0} ", c1[i]);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a x c
```

## <a name="vectorpop_back-stlclr"></a><a name="pop_back"></a> Vector::p op_back (STL/CLR)

Rimuove l'ultimo elemento.

### <a name="syntax"></a>Sintassi

```cpp
void pop_back();
```

### <a name="remarks"></a>Osservazioni

La funzione membro rimuove l'ultimo elemento della sequenza controllata, che non deve essere vuoto. Viene utilizzato per abbreviare il vettore di un elemento nella parte posteriore.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_pop_back.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// pop an element and redisplay
    c1.pop_back();
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b
```

## <a name="vectorpush_back-stlclr"></a><a name="push_back"></a> Vector::p ush_back (STL/CLR)

Aggiunge un nuovo elemento ultimo.

### <a name="syntax"></a>Sintassi

```cpp
void push_back(value_type val);
```

### <a name="remarks"></a>Osservazioni

La funzione membro inserisce un elemento con il valore `val` alla fine della sequenza controllata. Viene usato per aggiungere un altro elemento al vettore.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_push_back.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="vectorrbegin-stlclr"></a><a name="rbegin"></a> Vector:: rbegin (STL/CLR)

Indica l'inizio della sequenza controllata inversa.

### <a name="syntax"></a>Sintassi

```cpp
reverse_iterator rbegin();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore inverso che definisce l'ultimo elemento della sequenza controllata o appena oltre l'inizio di una sequenza vuota. Definisce quindi l'oggetto `beginning` della sequenza inversa. Viene utilizzato per ottenere un iteratore che definisce l'inizio `current` della sequenza controllata considerata in ordine inverso, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_rbegin.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect first two items in reversed sequence
    cliext::vector<wchar_t>::reverse_iterator rit = c1.rbegin();
    System::Console::WriteLine("*rbegin() = {0}", *rit);
    System::Console::WriteLine("*++rbegin() = {0}", *++rit);

// alter first two items and reinspect
    *--rit = L'x';
    *++rit = L'y';
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
*rbegin() = c
*++rbegin() = b
a y x
```

## <a name="vectorreference-stlclr"></a><a name="reference"></a> Vector:: Reference (STL/CLR)

Tipo di un riferimento a un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef value_type% reference;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un riferimento a un elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_reference.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    cliext::vector<wchar_t>::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
        {   // get a reference to an element
        cliext::vector<wchar_t>::reference ref = *it;
        System::Console::Write("{0} ", ref);
        }
    System::Console::WriteLine();

// modify contents " a b c"
    for (it = c1.begin(); it != c1.end(); ++it)
        {   // get a reference to an element
        cliext::vector<wchar_t>::reference ref = *it;

        ref += (wchar_t)(L'A' - L'a');
        System::Console::Write("{0} ", ref);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
A B C
```

## <a name="vectorrend-stlclr"></a><a name="rend"></a> Vector:: rend (STL/CLR)

Indica la fine della sequenza controllata inversa.

### <a name="syntax"></a>Sintassi

```cpp
reverse_iterator rend();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore inverso che punta appena oltre l'inizio della sequenza controllata. Definisce quindi l'oggetto `end` della sequenza inversa. Viene utilizzato per ottenere un iteratore che definisce la fine `current` della sequenza controllata considerata in ordine inverso, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_rend.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect first two items
    cliext::vector<wchar_t>::reverse_iterator rit = c1.rend();
    --rit;
    System::Console::WriteLine("*-- --rend() = {0}", *--rit);
    System::Console::WriteLine("*--rend() = {0}", *++rit);

// alter first two items and reinspect
    *--rit = L'x';
    *++rit = L'y';
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
*-- --rend() = b
*--rend() = a
y x c
```

## <a name="vectorreserve-stlclr"></a><a name="reserve"></a> Vector:: Reserve (STL/CLR)

Garantisce una capacità di crescita minima per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
void reserve(size_type count);
```

#### <a name="parameters"></a>Parametri

*count*<br/>
Nuova capacità minima del contenitore.

### <a name="remarks"></a>Osservazioni

La funzione membro garantisce che `capacity()` in questo momento venga restituito almeno *count*. Viene usato per garantire che il contenitore non debba riallocare lo spazio di archiviazione per la sequenza controllata fino a quando non è aumentato fino alla dimensione specificata.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_reserve.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for (int i = 0; i < c1.size(); ++i)
        System::Console::Write("{0} ", c1.at(i));
    System::Console::WriteLine();

// increase capacity
    cliext::vector<wchar_t>::size_type cap = c1.capacity();
    System::Console::WriteLine("capacity() = {0}, ok = {1}",
        cap, c1.size() <= cap);
    c1.reserve(cap + 5);
    System::Console::WriteLine("capacity() = {0}, ok = {1}",
        c1.capacity(), cap + 5 <= c1.capacity());
    return (0);
    }
```

```Output
a b c
capacity() = 4, ok = True
capacity() = 9, ok = True
```

## <a name="vectorresize-stlclr"></a><a name="resize"></a> Vector:: Resize (STL/CLR)

Modifica il numero di elementi.

### <a name="syntax"></a>Sintassi

```cpp
void resize(size_type new_size);
void resize(size_type new_size, value_type val);
```

#### <a name="parameters"></a>Parametri

*new_size*<br/>
Nuove dimensioni della sequenza controllata.

*Val*<br/>
Valore dell'elemento di riempimento.

### <a name="remarks"></a>Osservazioni

Le funzioni membro assicurano che [vector:: size (STL/CLR)](#size) `()` restituisca *new_size*. Se la sequenza controllata deve essere più lunga, la prima funzione membro accoda elementi con valore `value_type()` , mentre la seconda funzione membro accoda gli elementi con il valore *Val*. Per rendere la sequenza controllata più breve, entrambe le funzioni membro cancellano in modo efficace l'ultimo elemento [vector:: size (STL/CLR)](#size) `() -` `new_size` . Viene usato per garantire che la sequenza controllata abbia dimensioni *new_size*, tagliando o riempiendo la sequenza controllata corrente.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_resize.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
// construct an empty container and pad with default values
    cliext::vector<wchar_t> c1;
    System::Console::WriteLine("size() = {0}", c1.size());
    c1.resize(4);
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", (int)elem);
    System::Console::WriteLine();

// resize to empty
    c1.resize(0);
    System::Console::WriteLine("size() = {0}", c1.size());

// resize and pad
    c1.resize(5, L'x');
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
size() = 0
0 0 0 0
size() = 0
x x x x x
```

## <a name="vectorreverse_iterator-stlclr"></a><a name="reverse_iterator"></a> Vector:: reverse_iterator (STL/CLR)

Tipo di un iteratore inverso della sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T3 reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo non specificato `T3` che può essere utilizzato come iteratore inverso per la sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_reverse_iterator.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c" reversed
    cliext::vector<wchar_t>::reverse_iterator rit = c1.rbegin();
    for (; rit != c1.rend(); ++rit)
        System::Console::Write("{0} ", *rit);
    System::Console::WriteLine();

// alter first element and redisplay
    rit = c1.rbegin();
    *rit = L'x';
    for (; rit != c1.rend(); ++rit)
        System::Console::Write("{0} ", *rit);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c b a
x b a
```

## <a name="vectorsize-stlclr"></a><a name="size"></a> Vector:: size (STL/CLR)

Conta il numero di elementi.

### <a name="syntax"></a>Sintassi

```cpp
size_type size();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce la lunghezza della sequenza controllata. Viene usato per determinare il numero di elementi attualmente presenti nella sequenza controllata. Se è sufficiente che la sequenza abbia dimensioni diversi da zero, vedere [vector:: Empty (STL/CLR)](#empty) `()` .

### <a name="example"></a>Esempio

```cpp
// cliext_vector_size.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    System::Console::WriteLine("size() = {0} starting with 3", c1.size());

// clear the container and reinspect
    c1.clear();
    System::Console::WriteLine("size() = {0} after clearing", c1.size());

// add elements and clear again
    c1.push_back(L'a');
    c1.push_back(L'b');
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

## <a name="vectorsize_type-stlclr"></a><a name="size_type"></a> Vector:: size_type (STL/CLR)

Tipo di una distanza Signed tra due elementi.

### <a name="syntax"></a>Sintassi

```cpp
typedef int size_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un conteggio di elementi non negativi.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_size_type.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// compute positive difference
    cliext::vector<wchar_t>::size_type diff = c1.end() - c1.begin();
    System::Console::WriteLine("end()-begin() = {0}", diff);
    return (0);
    }
```

```Output
a b c
end()-begin() = 3
```

## <a name="vectorswap-stlclr"></a><a name="swap"></a> Vector:: swap (STL/CLR)

Scambia il contenuto di due contenitori.

### <a name="syntax"></a>Sintassi

```cpp
void swap(vector<Value>% right);
```

#### <a name="parameters"></a>Parametri

*Ok*<br/>
Contenitore con cui scambiare il contenuto.

### <a name="remarks"></a>Osservazioni

La funzione membro scambia le sequenze controllate tra **`*this`** e *right*. Esegue questa operazione in un tempo costante e non genera alcuna eccezione. Viene usato come modo rapido per scambiare il contenuto di due contenitori.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_swap.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct another container with repetition of values
    cliext::vector<wchar_t> c2(5, L'x');
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

## <a name="vectorto_array-stlclr"></a><a name="to_array"></a> Vector:: to_array (STL/CLR)

Copia la sequenza controllata in una nuova matrice.

### <a name="syntax"></a>Sintassi

```cpp
cli::array<Value>^ to_array();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce una matrice che contiene la sequenza controllata. Viene usato per ottenere una copia della sequenza controllata in forma di matrice.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_to_array.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// copy the container and modify it
    cli::array<wchar_t>^ a1 = c1.to_array();

    c1.push_back(L'd');
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

## <a name="vectorvalue_type-stlclr"></a><a name="value_type"></a> Vector:: value_type (STL/CLR)

Tipo di un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef Value value_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del *valore*del parametro di modello.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_value_type.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c" using value_type
    for (cliext::vector<wchar_t>::iterator it = c1.begin();
        it != c1.end(); ++it)
        {   // store element in value_type object
        cliext::vector<wchar_t>::value_type val = *it;

        System::Console::Write("{0} ", val);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="vectorvector-stlclr"></a><a name="vector"></a> Vector:: Vector (STL/CLR)

Costruisce un oggetto contenitore.

### <a name="syntax"></a>Sintassi

```cpp
vector();
vector(vector<Value>% right);
vector(vector<Value>^ right);
explicit vector(size_type count);
vector(size_type count, value_type val);
template<typename InIt>
    vector(InIt first, InIt last);
vector(System::Collections::Generic::IEnumerable<Value>^ right);
```

#### <a name="parameters"></a>Parametri

*count*<br/>
Numero di elementi da inserire.

*first*<br/>
Inizio dell'intervallo da inserire.

*last*<br/>
Fine dell'intervallo da inserire.

*Ok*<br/>
Oggetto o un intervallo da inserire.

*Val*<br/>
Valore dell'elemento da inserire.

### <a name="remarks"></a>Osservazioni

Il costruttore:

`vector();`

Inizializza la sequenza controllata senza elementi. Viene usato per specificare una sequenza controllata iniziale vuota.

Il costruttore:

`vector(vector<Value>% right);`

Inizializza la sequenza controllata con la sequenza [ `right.begin()` , `right.end()` ). Viene usato per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto vettore a *destra*.

Il costruttore:

`vector(vector<Value>^ right);`

Inizializza la sequenza controllata con la sequenza [ `right->begin()` , `right->end()` ). Viene usato per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto Vector il cui handle è *right*.

Il costruttore:

`explicit vector(size_type count);`

Inizializza la sequenza controllata con gli elementi *count* ognuno con value `value_type()` . Viene usato per riempire il contenitore con tutti gli elementi con il valore predefinito.

Il costruttore:

`vector(size_type count, value_type val);`

Inizializza la sequenza controllata con gli elementi *count* ognuno con il valore *Val*. Viene usato per riempire il contenitore con tutti gli elementi con lo stesso valore.

Il costruttore:

`template<typename InIt>`

`vector(InIt first, InIt last);`

Inizializza la sequenza controllata con la sequenza [ `first` , `last` ). Viene usato per fare in modo che la sequenza controllata venga copiata da un'altra sequenza.

Il costruttore:

`vector(System::Collections::Generic::IEnumerable<Value>^ right);`

Inizializza la sequenza controllata con la sequenza designata dal *diritto*dell'enumeratore. Viene usato per fare in modo che la sequenza controllata venga copiata da un'altra sequenza descritta da un enumeratore.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_construct.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
// construct an empty container
    cliext::vector<wchar_t> c1;
    System::Console::WriteLine("size() = {0}", c1.size());

// construct with a repetition of default values
    cliext::vector<wchar_t> c2(3);
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", (int)elem);
    System::Console::WriteLine();

// construct with a repetition of values
    cliext::vector<wchar_t> c3(6, L'x');
    for each (wchar_t elem in c3)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct with an iterator range
    cliext::vector<wchar_t>::iterator it = c3.end();
    cliext::vector<wchar_t> c4(c3.begin(), --it);
    for each (wchar_t elem in c4)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct with an enumeration
    cliext::vector<wchar_t> c5(   // NOTE: cast is not needed
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3);
    for each (wchar_t elem in c5)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct by copying another container
    cliext::vector<wchar_t> c7(c3);
    for each (wchar_t elem in c7)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct by copying a container handle
    cliext::vector<wchar_t> c8(%c3);
    for each (wchar_t elem in c8)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    return (0);
    }
```

```Output
size() = 0
0 0 0
x x x x x x
x x x x x
x x x x x x
x x x x x x
x x x x x x
```

## <a name="operator-vector-stlclr"></a><a name="op_neq"></a> operatore! = (Vector) (STL/CLR)

Confronto vettore non uguale.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    bool operator!=(vector<Value>% left,
        vector<Value>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione operator restituisce `!(left == right)` . Viene usato per verificare se *Left* non è ordinato come *right* quando i due vettori vengono confrontati elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_operator_ne.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    cliext::vector<wchar_t> c2;
    c2.push_back(L'a');
    c2.push_back(L'b');
    c2.push_back(L'd');

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

## <a name="operatorlt-vector-stlclr"></a><a name="op_lt"></a> operatore &lt; (Vector) (STL/CLR)

Vettore minore del confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    bool operator<(vector<Value>% left,
        vector<Value>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione operator restituisce true se, per la posizione più bassa `i` per la quale `!(right[i] < left[i])` è anche true `left[i] < right[i]` . In caso contrario, viene restituito `left->size() < right->size()` per verificare se *Left* viene ordinato prima del *diritto* quando i due vettori vengono confrontati elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_operator_lt.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    cliext::vector<wchar_t> c2;
    c2.push_back(L'a');
    c2.push_back(L'b');
    c2.push_back(L'd');

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

## <a name="operatorlt-vector-stlclr"></a><a name="op_lteq"></a> Operator &lt; = (Vector) (STL/CLR)

Confronto tra Vector minore di o uguale a.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    bool operator<=(vector<Value>% left,
        vector<Value>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione operator restituisce `!(right < left)` . Viene usato per verificare se *Left* non è ordinato dopo *right* quando i due vettori vengono confrontati elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_operator_le.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    cliext::vector<wchar_t> c2;
    c2.push_back(L'a');
    c2.push_back(L'b');
    c2.push_back(L'd');

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

## <a name="operator-vector-stlclr"></a><a name="op_eq"></a> operatore = = (Vector) (STL/CLR)

Confronto vettoriale uguale.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    bool operator==(vector<Value>% left,
        vector<Value>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione operator restituisce true solo se le sequenze controllate da *Left* e *right* hanno la stessa lunghezza e, per ogni posizione `i` , `left[i] ==` `right[i]` . Viene usato per verificare se *Left* è ordinato come *right* quando i due vettori vengono confrontati con l'elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_operator_eq.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    cliext::vector<wchar_t> c2;
    c2.push_back(L'a');
    c2.push_back(L'b');
    c2.push_back(L'd');

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

## <a name="operatorgt-vector-stlclr"></a><a name="op_gt"></a> operatore &gt; (Vector) (STL/CLR)

Vettore maggiore del confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    bool operator>(vector<Value>% left,
        vector<Value>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione operator restituisce `right` `<` `left` . Viene usato per verificare se *Left* viene ordinato dopo *right* quando i due vettori vengono confrontati elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_operator_gt.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    cliext::vector<wchar_t> c2;
    c2.push_back(L'a');
    c2.push_back(L'b');
    c2.push_back(L'd');

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

## <a name="operatorgt-vector-stlclr"></a><a name="op_gteq"></a> Operator &gt; = (Vector) (STL/CLR)

Vettore di confronto maggiore o uguale a.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    bool operator>=(vector<Value>% left,
        vector<Value>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione operator restituisce `!(left < right)` . Viene usato per verificare se *Left* non è ordinato prima del *diritto* quando i due vettori vengono confrontati elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_vector_operator_ge.cpp
// compile with: /clr
#include <cliext/vector>

int main()
    {
    cliext::vector<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    cliext::vector<wchar_t> c2;
    c2.push_back(L'a');
    c2.push_back(L'b');
    c2.push_back(L'd');

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
