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
ms.openlocfilehash: c6a001797e90bd7381358abb16612926442e8d9f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371826"
---
# <a name="vector-stlclr"></a>vector (STL/CLR)

La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi con accesso casuale. Utilizzare il `vector` contenitore per gestire una sequenza di elementi come blocco contiguo di archiviazione. Il blocco viene implementato come una matrice che cresce su richiesta.

Nella descrizione seguente, `GValue` è uguale a *Valore* a meno che quest'ultimo non sia un tipo di riferimento, nel qual caso è `Value^`.

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

**Intestazione:** \<> cliext/vector

**Spazio dei nomi:** cliext

## <a name="declarations"></a>Dichiarazioni

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|[vector::const_iterator (STL/CLR)](#const_iterator)|Tipo di un iteratore costante per la sequenza controllata.|
|[vector::const_reference (STL/CLR)](#const_reference)|Tipo di un riferimento costante a un elemento.|
|[vector::const_reverse_iterator (STL/CLR)](#const_reverse_iterator)|Tipo di un iteratore inverso costante per la sequenza controllata.|
|[vector::difference_type (STL/CLR)](#difference_type)|Tipo di una distanza Signed tra due elementi.|
|[vector::generic_container (STL/CLR)](#generic_container)|Tipo dell'interfaccia generica per il contenitore.|
|[vector::generic_iterator (STL/CLR)](#generic_iterator)|Tipo di iteratore per l'interfaccia generica per il contenitore.|
|[vector::generic_reverse_iterator (STL/CLR)](#generic_reverse_iterator)|Tipo di iteratore inverso per l'interfaccia generica per il contenitore.|
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
|[vector::push_back (STL/CLR)](#push_back)|Aggiunge un nuovo ultimo elemento.|
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
|[operator! (vettore) (STL/CLR)](#op_neq)|Determina se `vector` un oggetto non `vector` è uguale a un altro oggetto.|
|[< operatore (vettore) (STL/CLR)](#op_lt)|Determina se `vector` un oggetto `vector` è minore di un altro oggetto.|
|[<dell'operatore (vettore) (STL/CLR)](#op_lteq)|Determina se `vector` un oggetto è minore `vector` o uguale a un altro oggetto.|
|[operatore (vettore) (STL/CLR)](#op_eq)|Determina se `vector` un oggetto `vector` è uguale a un altro oggetto.|
|[operator> (vector) (STL/CLR)](#op_gt)|Determina se `vector` un oggetto `vector` è maggiore di un altro oggetto.|
|[>dell'operatore (vettore) (STL/CLR)](#op_gteq)|Determina se `vector` un oggetto è maggiore `vector` o uguale a un altro oggetto.|

## <a name="interfaces"></a>Interfacce

|Interfaccia|Descrizione|
|---------------|-----------------|
|<xref:System.ICloneable>|Duplicare un oggetto.|
|<xref:System.Collections.IEnumerable>|Sequenza attraverso gli elementi.|
|<xref:System.Collections.ICollection>|Mantenere un gruppo di elementi.|
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza tramite elementi tipati.|
|<xref:System.Collections.Generic.ICollection%601>|Mantenere il gruppo di elementi tipati.|
|<xref:System.Collections.Generic.IList%601>|Gestire un gruppo ordinato di elementi tipizzato.|
|Valore<IVector\>|Gestire il contenitore generico.|

## <a name="remarks"></a>Osservazioni

L'oggetto alloca e libera spazio di archiviazione per la sequenza che controlla tramite una matrice archiviata di elementi *Value,* che aumenta su richiesta. La crescita si verifica in modo tale che il costo dell'aggiunta di un nuovo elemento sia un tempo costante ammortizzato. In altre parole, il costo dell'aggiunta di elementi alla fine non aumenta, in media, man mano che la lunghezza della sequenza controllata aumenta. Pertanto, un vettore è un buon candidato per il contenitore sottostante per lo stack di classi [modello (STL/CLR)](../dotnet/stack-stl-clr.md).

Un `vector` supporta gli iteratori ad accesso casuale, il che significa che è possibile fare riferimento a un `size() - 1` elemento direttamente data la posizione numerica, contando da zero per il primo elemento (anteriore), a per l'ultimo (indietro) elemento. Significa anche che un vettore è un buon candidato per il contenitore sottostante per la classe modello [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md).

Un iteratore vettore archivia un handle per l'oggetto vettore associato, insieme alla distorsione dell'elemento che definisce. È possibile usare gli iteratori solo con gli oggetti contenitore associati. La distorsione di un elemento vettoriale è la stessa della sua posizione.

L'inserimento o la cancellazione di elementi può modificare il valore dell'elemento archiviato in una determinata posizione, in modo che anche il valore designato da un iteratore possa essere modificato. Il contenitore potrebbe dover copiare gli elementi verso l'alto o verso il basso per creare un foro prima di un inserto o per riempire un foro dopo una cancellazione. Tuttavia, un iteratore vettoriale rimane valido `[0, size()]`fino a quando la distorsione è compresa nell'intervallo . Inoltre, un iteratore valido rimane dereferencable -- è possibile utilizzarlo per accedere o modificare il `size()`valore dell'elemento che definisce -- purché la sua distorsione non sia uguale a .

La cancellazione o la rimozione di un elemento chiama il distruttore per il relativo valore archiviato. L'eliminazione del contenitore cancella tutti gli elementi. Pertanto, un contenitore il cui tipo di elemento è una classe di riferimento assicura che nessun elemento riliverà il contenitore. Si noti, tuttavia, che un contenitore di handle non distrugge i relativi elementi.

## <a name="members"></a>Membri

## <a name="vectorassign-stlclr"></a><a name="assign"></a>vettore::assegnare (STL/CLR)

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

*Prima*<br/>
Inizio dell'intervallo da inserire.

*Ultima*<br/>
Fine dell'intervallo da inserire.

*va bene*<br/>
Enumerazione da inserire.

*Val*<br/>
Valore dell'elemento da inserire.

### <a name="remarks"></a>Osservazioni

La prima funzione membro sostituisce la sequenza controllata con una ripetizione di *elementi count* di value *val*. Utilizzarla per riempire il contenitore con elementi che hanno lo stesso valore.

Se `InIt` è un tipo Integer, la seconda funzione `assign((size_type)first, (value_type)last)`membro si comporta come . In caso contrario, sostituisce la`first` `last`sequenza controllata con la sequenza [ , ). Utilizzarla per rendere la sequenza controllata una copia un'altra sequenza.

La terza funzione membro sostituisce la sequenza controllata con la sequenza designata dall'enumeratore *right*. Utilizzarla per rendere la sequenza controllata una copia di una sequenza descritta da un enumeratore.

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

## <a name="vectorat-stlclr"></a><a name="at"></a>vector::at (STL/CLR)

Accede a un elemento in una posizione specificata.

### <a name="syntax"></a>Sintassi

```cpp
reference at(size_type pos);
```

#### <a name="parameters"></a>Parametri

*Pos*<br/>
Posizione dell'elemento a cui accedere.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un riferimento all'elemento della sequenza controllata in corrispondenza della posizione *pos*. Si usa per leggere o scrivere un elemento di cui si conosce la posizione.

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

## <a name="vectorback-stlclr"></a><a name="back"></a>vettore::back (STL/CLR)

Accede all'ultimo elemento.

### <a name="syntax"></a>Sintassi

```cpp
reference back();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un riferimento all'ultimo elemento della sequenza controllata, che deve essere non vuoto. Utilizzarla per accedere all'ultimo elemento, quando si sa che esiste.

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

## <a name="vectorback_item-stlclr"></a><a name="back_item"></a>vector::back_item (STL/CLR)

Accede all'ultimo elemento.

### <a name="syntax"></a>Sintassi

```cpp
property value_type back_item;
```

### <a name="remarks"></a>Osservazioni

La proprietà accede all'ultimo elemento della sequenza controllata, che deve essere non vuoto. Utilizzarla per leggere o scrivere l'ultimo elemento, quando si sa che esiste.

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

## <a name="vectorbegin-stlclr"></a><a name="begin"></a>vettore::begin (STL/CLR)

Indica l'inizio della sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
iterator begin();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore di accesso casuale che definisce il primo elemento della sequenza controllata o appena oltre la fine di una sequenza vuota. Viene utilizzato per ottenere un iteratore che definisce l'inizio `current` della sequenza controllata, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.

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

## <a name="vectorcapacity-stlclr"></a><a name="capacity"></a>vettore::capacità (STL/CLR)

Restituisce la dimensione dello spazio di memorizzazione allocato per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
size_type capacity();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce lo spazio di archiviazione attualmente allocato per contenere la sequenza controllata, un valore grande almeno quanto [vector::size (STL/CLR)](../dotnet/vector-size-stl-clr.md)`()`. Utilizzarla per determinare quanto il contenitore può crescere prima di dover riallocare lo spazio di archiviazione per la sequenza controllata.

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

## <a name="vectorclear-stlclr"></a><a name="clear"></a>vettore::cancellare (STL/CLR)

Rimuove tutti gli elementi.

### <a name="syntax"></a>Sintassi

```cpp
void clear();
```

### <a name="remarks"></a>Osservazioni

La funzione membro chiama effettivamente [vector::erase (STL/CLR)](../dotnet/vector-erase-stl-clr.md) `(` [vector::begin (STL/CLR)](../dotnet/vector-begin-stl-clr.md) `(),` [vector::end (STL/CLR)](../dotnet/vector-end-stl-clr.md)`())`. Utilizzarla per assicurarsi che la sequenza controllata sia vuota.

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

## <a name="vectorconst_iterator-stlclr"></a><a name="const_iterator"></a>vector::const_iterator (STL/CLR)

Tipo di un iteratore costante per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T2 const_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto `T2` di tipo non specificato che può fungere da iteratore di accesso casuale costante per la sequenza controllata.

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

## <a name="vectorconst_reference-stlclr"></a><a name="const_reference"></a>vector::const_reference (STL/CLR)

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

## <a name="vectorconst_reverse_iterator-stlclr"></a><a name="const_reverse_iterator"></a>vector::const_reverse_iterator (STL/CLR)

Tipo di iteratore inverso costante per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T4 const_reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto `T4` di tipo non specificato che può essere utilizzato come iteratore inverso costante per la sequenza controllata.

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

## <a name="vectordifference_type-stlclr"></a><a name="difference_type"></a>vector::difference_type (STL/CLR)

Tipi di una distanza con segno tra due elementi.

### <a name="syntax"></a>Sintassi

```cpp
typedef int difference_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un conteggio di elementi con segno.

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

## <a name="vectorempty-stlclr"></a><a name="empty"></a>vettore::vuoto (STL/CLR)

Verifica se sono presenti o meno degli elementi.

### <a name="syntax"></a>Sintassi

```cpp
bool empty();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce true per una sequenza controllata vuota. È equivalente a [vector::size (STL/CLR)](../dotnet/vector-size-stl-clr.md)`() == 0`. Utilizzarla per verificare se il vettore è vuoto.

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

## <a name="vectorend-stlclr"></a><a name="end"></a>vettore::fine (STL/CLR)

Designa la fine della sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
iterator end();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore di accesso casuale che punta appena oltre la fine della sequenza controllata. Viene utilizzato per ottenere un iteratore che definisce la fine `current` della sequenza controllata, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.

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

## <a name="vectorerase-stlclr"></a><a name="erase"></a>vector::erase (STL/CLR)

Rimuove gli elementi in corrispondenza delle posizioni specificate.

### <a name="syntax"></a>Sintassi

```cpp
iterator erase(iterator where);
iterator erase(iterator first, iterator last);
```

#### <a name="parameters"></a>Parametri

*Prima*<br/>
Inizio dell'intervallo da cancellare.

*Ultima*<br/>
Fine intervallo da cancellare.

*Dove*<br/>
Elemento da cancellare.

### <a name="remarks"></a>Osservazioni

La prima funzione membro rimuove l'elemento della sequenza controllata a cui punta *where*. Utilizzarla per rimuovere un singolo elemento.

La seconda funzione membro rimuove gli elementi della sequenza controllata nell'intervallo [`first`, `last`). Utilizzarla per rimuovere zero o più elementi contigui.

Entrambe le funzioni membro restituiscono un iteratore che definisce il primo elemento rimanente oltre gli elementi rimossi o [vector::end (STL/CLR)](../dotnet/vector-end-stl-clr.md) `()` se tale elemento non esiste.

Quando si cancellano gli elementi, il numero di copie dell'elemento è lineare nel numero di elementi tra la fine della cancellazione e la fine più vicina della sequenza. (Quando si cancellano uno o più elementi alle estremità della sequenza, non si verifica alcuna copia dell'elemento.)

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

## <a name="vectorfront-stlclr"></a><a name="front"></a>vettore::fronte (STL/CLR)

Accede al primo elemento.

### <a name="syntax"></a>Sintassi

```cpp
reference front();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un riferimento al primo elemento della sequenza controllata, che deve essere non vuoto. Utilizzarla per leggere o scrivere il primo elemento, quando si sa che esiste.

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

## <a name="vectorfront_item-stlclr"></a><a name="front_item"></a>vector::front_item (STL/CLR)

Accede al primo elemento.

### <a name="syntax"></a>Sintassi

```cpp
property value_type front_item;
```

### <a name="remarks"></a>Osservazioni

La proprietà accede al primo elemento della sequenza controllata, che deve essere non vuoto. Utilizzarla per leggere o scrivere il primo elemento, quando si sa che esiste.

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

## <a name="vectorgeneric_container-stlclr"></a><a name="generic_container"></a>vector::generic_container (STL/CLR)

Tipo dell'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::
    IVector<generic_value>
    generic_container;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive l'interfaccia generica per questa classe contenitore di modelli.

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

## <a name="vectorgeneric_iterator-stlclr"></a><a name="generic_iterator"></a>vector::generic_iterator (STL/CLR)

Tipo di iteratore da utilizzare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::Generic::
    ContainerRandomAccessIterator<generic_value>
    generic_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un iteratore generico che può essere utilizzato con l'interfaccia generica per questa classe contenitore di modelli.

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

## <a name="vectorgeneric_reverse_iterator-stlclr"></a><a name="generic_reverse_iterator"></a>vector::generic_reverse_iterator (STL/CLR)

Tipo di iteratore inverso da utilizzare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::Generic::
    ReverseRandomAccessIterator<generic_value> generic_reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un iteratore inverso generico che può essere utilizzato con l'interfaccia generica per questa classe contenitore di modelli.

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

## <a name="vectorgeneric_value-stlclr"></a><a name="generic_value"></a>vettore::generic_value (STL/CLR)

Tipo di un elemento da utilizzare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef GValue generic_value;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un `GValue` oggetto di tipo che descrive il valore dell'elemento archiviato da utilizzare con l'interfaccia generica per questa classe contenitore modello.

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

## <a name="vectorinsert-stlclr"></a><a name="insert"></a>vector::insert (STL/CLR)

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

*Prima*<br/>
Inizio dell'intervallo da inserire.

*Ultima*<br/>
Fine dell'intervallo da inserire.

*va bene*<br/>
Enumerazione da inserire.

*Val*<br/>
Valore dell'elemento da inserire.

*Dove*<br/>
Dove in contenitore inserire prima.

### <a name="remarks"></a>Osservazioni

Ognuna delle funzioni membro inserisce, prima dell'elemento a cui punta il *punto* della sequenza controllata, una sequenza specificata dagli operandi rimanenti.

La prima funzione membro inserisce un elemento con valore *val* e restituisce un iteratore che definisce l'elemento appena inserito. Utilizzarla per inserire un singolo elemento prima di una posizione designata da un iteratore.

La seconda funzione membro inserisce una ripetizione di *count* elementi di valore *val*. Utilizzarla per inserire zero o più elementi contigui che sono tutte copie dello stesso valore.

Se `InIt` è di tipo Integer, la terza funzione membro si comporta come `insert(where, (size_type)first, (value_type)last)`. In caso contrario,`first`inserisce la sequenza [ , `last`). Utilizzarla per inserire zero o più elementi contigui copiati da un'altra sequenza.

La quarta funzione membro inserisce la sequenza designata da *right*. Utilizzarla per inserire una sequenza descritta da un enumeratore.

Quando si inserisce un singolo elemento, il numero di copie dell'elemento è lineare nel numero di elementi tra il punto di inserimento e la fine più vicina della sequenza. (Quando si inseriscono uno o più elementi a entrambe le estremità della sequenza, non si verifica alcuna copia dell'elemento.) Se `InIt` è un iteratore di input, la terza funzione membro esegue in modo efficace un singolo inserimento per ogni elemento nella sequenza. In caso contrario, quando si inseriscono `N` elementi, il numero di copie dell'elemento è lineare più `N` il numero di elementi tra il punto di inserimento e la fine più vicina della sequenza.

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

## <a name="vectoriterator-stlclr"></a><a name="iterator"></a>vector::iterator (STL/CLR)

Tipo di un iteratore per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T1 iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto `T1` di tipo non specificato che può fungere da iteratore di accesso casuale per la sequenza controllata.

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

## <a name="vectoroperator-stlclr"></a><a name="op_as"></a>vector::operator (STL/CLR)

Sostituisce la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
vector<Value>% operator=(vector<Value>% right);
```

#### <a name="parameters"></a>Parametri

*va bene*<br/>
Contenitore da copiare.

### <a name="remarks"></a>Osservazioni

L'operatore membro copia *direttamente all'oggetto,* quindi restituisce `*this`. Utilizzarla per sostituire la sequenza controllata con una copia della sequenza controllata a *destra.*

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

## <a name="vectoroperatorstlclr"></a><a name="op"></a>vector::operator(STL/CLR)

Accede a un elemento in una posizione specificata.

### <a name="syntax"></a>Sintassi

```cpp
reference operator[](size_type pos);
```

#### <a name="parameters"></a>Parametri

*Pos*<br/>
Posizione dell'elemento a cui accedere.

### <a name="remarks"></a>Osservazioni

L'operatore membro restituisce un riferimento all'elemento nella posizione *pos*. Utilizzarla per accedere a un elemento di cui si conosce la posizione.

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

## <a name="vectorpop_back-stlclr"></a><a name="pop_back"></a>vector::pop_back (STL/CLR)

Rimuove l'ultimo elemento.

### <a name="syntax"></a>Sintassi

```cpp
void pop_back();
```

### <a name="remarks"></a>Osservazioni

La funzione membro rimuove l'ultimo elemento della sequenza controllata, che deve essere non vuoto. Utilizzarla per accorciare il vettore di un elemento nella parte posteriore.

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

## <a name="vectorpush_back-stlclr"></a><a name="push_back"></a>vector::push_back (STL/CLR)

Aggiunge un nuovo ultimo elemento.

### <a name="syntax"></a>Sintassi

```cpp
void push_back(value_type val);
```

### <a name="remarks"></a>Osservazioni

La funzione membro inserisce `val` un elemento con valore alla fine della sequenza controllata. Utilizzarla per aggiungere un altro elemento al vettore.

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

## <a name="vectorrbegin-stlclr"></a><a name="rbegin"></a>vector::rbegin (STL/CLR)

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

## <a name="vectorreference-stlclr"></a><a name="reference"></a>vector::reference (STL/CLR)

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

## <a name="vectorrend-stlclr"></a><a name="rend"></a>vettore::rend (STL/CLR)

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

## <a name="vectorreserve-stlclr"></a><a name="reserve"></a>vettore::riserva (STL/CLR)

Garantisce una capacità di crescita minima per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
void reserve(size_type count);
```

#### <a name="parameters"></a>Parametri

*count*<br/>
Nuova capacità minima del contenitore.

### <a name="remarks"></a>Osservazioni

La funzione membro `capacity()` assicura che d'ora in poi restituisca almeno *count*. Utilizzarla per assicurarsi che il contenitore non è necessario riallocare lo spazio di archiviazione per la sequenza controllata fino a quando non è cresciuto fino a quando non è cresciuto fino a raggiungere le dimensioni specificate.

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

## <a name="vectorresize-stlclr"></a><a name="resize"></a>vector::resize (STL/CLR)

Modifica il numero di elementi.

### <a name="syntax"></a>Sintassi

```cpp
void resize(size_type new_size);
void resize(size_type new_size, value_type val);
```

#### <a name="parameters"></a>Parametri

*new_size*<br/>
Nuova dimensione della sequenza controllata.

*Val*<br/>
Valore dell'elemento di spaziatura interna.

### <a name="remarks"></a>Osservazioni

Le funzioni membro assicurano che [vector::size (STL/CLR)](../dotnet/vector-size-stl-clr.md) `()` a d'ora in poi restituisca *new_size*. Se è necessario rendere più lunga la sequenza controllata, la prima funzione membro aggiunge elementi con valore `value_type()`, mentre la seconda funzione membro aggiunge elementi con valore *val*. Per accorciare la sequenza controllata, entrambe le funzioni membro cancellano in modo efficace i`() -` `new_size` tempi dell'ultimo [elemento vector::size (STL/CLR).](../dotnet/vector-size-stl-clr.md) Utilizzarla per assicurarsi che la sequenza controllata abbia dimensioni *new_size*, tagliando o riempiendo la sequenza controllata corrente.

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

## <a name="vectorreverse_iterator-stlclr"></a><a name="reverse_iterator"></a>vector::reverse_iterator (STL/CLR)

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

## <a name="vectorsize-stlclr"></a><a name="size"></a>vettore::dimensione (STL/CLR)

Conta il numero di elementi.

### <a name="syntax"></a>Sintassi

```cpp
size_type size();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce la lunghezza della sequenza controllata. Utilizzarla per determinare il numero di elementi attualmente nella sequenza controllata. Se tutto ciò che interessa è se la sequenza ha dimensioni diverse da zero, vedere [vector::empty (STL/CLR)](../dotnet/vector-empty-stl-clr.md)`()`.

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

## <a name="vectorsize_type-stlclr"></a><a name="size_type"></a>vector::size_type (STL/CLR)

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

## <a name="vectorswap-stlclr"></a><a name="swap"></a>vettore::swap (STL/CLR)

Scambia il contenuto di due contenitori.

### <a name="syntax"></a>Sintassi

```cpp
void swap(vector<Value>% right);
```

#### <a name="parameters"></a>Parametri

*va bene*<br/>
Contenitore con cui scambiare il contenuto.

### <a name="remarks"></a>Osservazioni

La funzione membro scambia le `*this` sequenze controllate tra e *right*. Lo fa in tempo costante e non genera eccezioni. Utilizzarlo come un modo rapido per scambiare il contenuto di due contenitori.

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

## <a name="vectorto_array-stlclr"></a><a name="to_array"></a>vector::to_array (STL/CLR)

Copia la sequenza controllata in una nuova matrice.

### <a name="syntax"></a>Sintassi

```cpp
cli::array<Value>^ to_array();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce una matrice contenente la sequenza controllata. Utilizzarla per ottenere una copia della sequenza controllata in forma di matrice.

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

## <a name="vectorvalue_type-stlclr"></a><a name="value_type"></a>vector::value_type (STL/CLR)

Tipo di un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef Value value_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello *Value*.

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

## <a name="vectorvector-stlclr"></a><a name="vector"></a>vettore::vettore (STL/CLR)

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

*Prima*<br/>
Inizio dell'intervallo da inserire.

*Ultima*<br/>
Fine dell'intervallo da inserire.

*va bene*<br/>
Oggetto o un intervallo da inserire.

*Val*<br/>
Valore dell'elemento da inserire.

### <a name="remarks"></a>Osservazioni

Il costruttore:

`vector();`

inizializza la sequenza controllata senza elementi. Utilizzarla per specificare una sequenza iniziale controllata vuota.

Il costruttore:

`vector(vector<Value>% right);`

inizializza la sequenza controllata`right.begin()` `right.end()`con la sequenza [ , ). Utilizzarla per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto vettoriale *a destra.*

Il costruttore:

`vector(vector<Value>^ right);`

inizializza la sequenza controllata`right->begin()` `right->end()`con la sequenza [ , ). Utilizzarla per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto vettore la cui maniglia è *di destra.*

Il costruttore:

`explicit vector(size_type count);`

inizializza la sequenza *count* controllata con `value_type()`gli elementi count ciascuno con valore . Utilizzarla per riempire il contenitore con elementi tutti con il valore predefinito.

Il costruttore:

`vector(size_type count, value_type val);`

inizializza la sequenza controllata con gli elementi *count* ciascuno con valore *val*. Utilizzarla per riempire il contenitore con elementi che hanno lo stesso valore.

Il costruttore:

`template<typename InIt>`

`vector(InIt first, InIt last);`

inizializza la sequenza controllata`first` `last`con la sequenza [ , ). Utilizzarla per rendere la sequenza controllata una copia di un'altra sequenza.

Il costruttore:

`vector(System::Collections::Generic::IEnumerable<Value>^ right);`

inizializza la sequenza controllata con la sequenza designata dall'enumeratore *a destra.* Utilizzarla per rendere la sequenza controllata una copia di un'altra sequenza descritta da un enumeratore.

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

## <a name="operator-vector-stlclr"></a><a name="op_neq"></a>operator! (vettore) (STL/CLR)

Confronto vettore non uguale.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    bool operator!=(vector<Value>% left,
        vector<Value>% right);
```

#### <a name="parameters"></a>Parametri

*Sinistra*<br/>
Contenitore sinistro da confrontare.

*va bene*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione `!(left == right)`operatore restituisce . Utilizzarla per verificare se *left* non è ordinato come *right* quando i due vettori vengono confrontati elemento per elemento.

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

## <a name="operatorlt-vector-stlclr"></a><a name="op_lt"></a>operatore&lt; (vettore) (STL/CLR)

Vettore minore rispetto al confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    bool operator<(vector<Value>% left,
        vector<Value>% right);
```

#### <a name="parameters"></a>Parametri

*Sinistra*<br/>
Contenitore sinistro da confrontare.

*va bene*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione operatore restituisce true `i` if, per la posizione più bassa per la quale `!(right[i] < left[i])` è anche true che `left[i] < right[i]`. In caso `left->size() < right->size()` contrario, restituisce Si usa per verificare se *left* è ordinato prima *di right* quando i due vettori vengono confrontati elemento per elemento.

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

## <a name="operatorlt-vector-stlclr"></a><a name="op_lteq"></a>operatore&lt;( vettore) (STL/CLR)

Vettore minore o uguale a confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    bool operator<=(vector<Value>% left,
        vector<Value>% right);
```

#### <a name="parameters"></a>Parametri

*Sinistra*<br/>
Contenitore sinistro da confrontare.

*va bene*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione `!(right < left)`operatore restituisce . Utilizzarla per verificare se *left* non è ordinato dopo *right* quando i due vettori vengono confrontati elemento per elemento.

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

## <a name="operator-vector-stlclr"></a><a name="op_eq"></a>operatore (vettore) (STL/CLR)

Confronto uguale vettore.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    bool operator==(vector<Value>% left,
        vector<Value>% right);
```

#### <a name="parameters"></a>Parametri

*Sinistra*<br/>
Contenitore sinistro da confrontare.

*va bene*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione operatore restituisce true solo se le sequenze controllate `i`da `left[i] ==` `right[i]` *left* e *right* hanno la stessa lunghezza e, per ogni posizione , . Utilizzarla per verificare se *left* è ordinato come *right* quando i due vettori vengono confrontati elemento per elemento.

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

## <a name="operatorgt-vector-stlclr"></a><a name="op_gt"></a>operatore&gt; (vettore) (STL/CLR)

Vettore maggiore del confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    bool operator>(vector<Value>% left,
        vector<Value>% right);
```

#### <a name="parameters"></a>Parametri

*Sinistra*<br/>
Contenitore sinistro da confrontare.

*va bene*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione `right` `<` `left`operatore restituisce . Utilizzarla per verificare se *left* viene ordinato dopo *right* quando i due vettori vengono confrontati elemento per elemento.

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

## <a name="operatorgt-vector-stlclr"></a><a name="op_gteq"></a>operatore&gt;( vettore) (STL/CLR)

Vettore maggiore o uguale confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    bool operator>=(vector<Value>% left,
        vector<Value>% right);
```

#### <a name="parameters"></a>Parametri

*Sinistra*<br/>
Contenitore sinistro da confrontare.

*va bene*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione `!(left < right)`operatore restituisce . Utilizzarla per verificare se *left* non è ordinato prima *di right* quando i due vettori vengono confrontati elemento per elemento.

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
