---
description: 'Altre informazioni su: deque (STL/CLR)'
title: deque (STL/CLR)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- cliext::deque
- cliext::deque::assign
- cliext::deque::at
- cliext::deque::back
- cliext::deque::back_item
- cliext::deque::begin
- cliext::deque::clear
- cliext::deque::const_iterator
- cliext::deque::const_reference
- cliext::deque::const_reverse_iterator
- cliext::deque::deque
- cliext::deque::difference_type
- cliext::deque::empty
- cliext::deque::end
- cliext::deque::erase
- cliext::deque::front
- cliext::deque::front_item
- cliext::deque::generic_container
- cliext::deque::generic_iterator
- cliext::deque::generic_reverse_iterator
- cliext::deque::generic_value
- cliext::deque::insert
- cliext::deque::iterator
- cliext::deque::operator!=
- cliext::deque::operator[]
- cliext::deque::pop_back
- cliext::deque::pop_front
- cliext::deque::push_back
- cliext::deque::push_front
- cliext::deque::rbegin
- cliext::deque::reference
- cliext::deque::rend
- cliext::deque::resize
- cliext::deque::reverse_iterator
- cliext::deque::size
- cliext::deque::size_type
- cliext::deque::swap
- cliext::deque::to_array
- cliext::deque::value_type
- cliext::deque::operator<
- cliext::deque::operator<=
- cliext::deque::operator=
- cliext::deque::operator==
- cliext::deque::operator>
- cliext::deque::operator>=
helpviewer_keywords:
- deque class [STL/CLR]
- <deque> header [STL/CLR]
- <cliext/deque> header [STL/CLR]
- assign member [STL/CLR]
- assign member [STL/CLR]
- at member [STL/CLR]
- back member [STL/CLR]
- back_item member [STL/CLR]
- begin member [STL/CLR]
- clear member [STL/CLR]
- const_iterator member [STL/CLR]
- const_reference member [STL/CLR]
- const_reverse_iterator member [STL/CLR]
- deque member [STL/CLR]
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
- operator!= member [STL/CLR]
- operator member [] [STL/CLR]
- pop_back member [STL/CLR]
- pop_front member [STL/CLR]
- push_back member [STL/CLR]
- push_front member [STL/CLR]
- rbegin member [STL/CLR]
- reference member [STL/CLR]
- rend member [STL/CLR]
- resize member [STL/CLR]
- reverse_iterator member [STL/CLR]
- size member [STL/CLR]
- size_type member [STL/CLR]
- swap member [STL/CLR]
- to_array member [STL/CLR]
- value_type member [STL/CLR]
- operator< member [STL/CLR]
- operator<= member [STL/CLR]
- operator= member [STL/CLR]
- operator== member [STL/CLR]
- operator> member [STL/CLR]
- operator>= member [STL/CLR]
ms.assetid: dd669da3-3c0e-45e9-8596-f6b483720941
ms.openlocfilehash: 98ad68c3220424a30b6cc75363e5ff92fbc0f965
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97252207"
---
# <a name="deque-stlclr"></a>deque (STL/CLR)

La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi con accesso casuale. Il contenitore viene usato `deque` per gestire una sequenza di elementi che sembrano un blocco di archiviazione contiguo, ma che possono aumentare o ridurre in una delle due estremità senza dover copiare gli elementi rimanenti. In questo modo è possibile implementare in modo efficiente `double-ended queue` . (Da qui il nome).

Nella descrizione riportata di seguito, `GValue` è uguale a `Value` , a meno che quest'ultimo non sia un tipo di riferimento, nel qual caso è `Value^` .

## <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    ref class deque
        :   public
        System::ICloneable,
        System::Collections::IEnumerable,
        System::Collections::ICollection,
        System::Collections::Generic::IEnumerable<GValue>,
        System::Collections::Generic::ICollection<GValue>,
        System::Collections::Generic::IList<GValue>,
        Microsoft::VisualC::StlClr::IDeque<GValue>
    { ..... };
```

### <a name="parameters"></a>Parametri

*GValue*<br/>
Tipo generico di un elemento nella sequenza controllata.

*Valore*<br/>
Tipo di un elemento nella sequenza controllata.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<cliext/deque>

**Spazio dei nomi:** cliext

## <a name="declarations"></a>Dichiarazioni

|Definizione del tipo|Descrizione|
|---------------------|-----------------|
|[deque::const_iterator (STL/CLR)](#const_iterator)|Tipo di un iteratore costante per la sequenza controllata.|
|[deque::const_reference (STL/CLR)](#const_reference)|Tipo di un riferimento costante a un elemento.|
|[deque::const_reverse_iterator (STL/CLR)](#const_reverse_iterator)|Tipo di un iteratore inverso costante per la sequenza controllata.|
|[deque::difference_type (STL/CLR)](#difference_type)|Tipo di una distanza Signed tra due elementi.|
|[deque::generic_container (STL/CLR)](#generic_container)|Tipo dell'interfaccia generica per il contenitore.|
|[deque::generic_iterator (STL/CLR)](#generic_iterator)|Tipo di un iteratore per l'interfaccia generica per il contenitore.|
|[deque::generic_reverse_iterator (STL/CLR)](#generic_reverse_iterator)|Tipo di un iteratore inverso per l'interfaccia generica per il contenitore.|
|[deque::generic_value (STL/CLR)](#generic_value)|Tipo di un elemento per l'interfaccia generica per il contenitore.|
|[deque::iterator (STL/CLR)](#iterator)|Tipo di un iteratore per la sequenza controllata.|
|[deque::reference (STL/CLR)](#reference)|Tipo di un riferimento a un elemento.|
|[deque::reverse_iterator (STL/CLR)](#reverse_iterator)|Tipo di un iteratore inverso della sequenza controllata.|
|[deque::size_type (STL/CLR)](#size_type)|Tipo di una distanza Signed tra due elementi.|
|[deque::value_type (STL/CLR)](#value_type)|Tipo di un elemento.|

|Funzione membro|Description|
|---------------------|-----------------|
|[deque::assign (STL/CLR)](#assign)|Sostituisce tutti gli elementi.|
|[deque::at (STL/CLR)](#at)|Accede a un elemento in una posizione specificata.|
|[deque::back (STL/CLR)](#back)|Accede all'ultimo elemento.|
|[deque::begin (STL/CLR)](#begin)|Indica l'inizio della sequenza controllata.|
|[deque::clear (STL/CLR)](#clear)|Rimuove tutti gli elementi.|
|[deque::deque (STL/CLR)](#deque)|Costruisce un oggetto contenitore.|
|[deque::empty (STL/CLR)](#empty)|Verifica se sono presenti o meno degli elementi.|
|[deque::end (STL/CLR)](#end)|Designa la fine della sequenza controllata.|
|[deque::erase (STL/CLR)](#erase)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|
|[deque::front (STL/CLR)](#front)|Accede al primo elemento.|
|[deque::insert (STL/CLR)](#insert)|Aggiunge elementi in una posizione specificata.|
|[deque::pop_back (STL/CLR)](#pop_back)|Rimuove l'ultimo elemento.|
|[deque::pop_front (STL/CLR)](#pop_front)|Rimuove il primo elemento.|
|[deque::push_back (STL/CLR)](#push_back)|Aggiunge un nuovo elemento ultimo.|
|[deque::push_front (STL/CLR)](#push_front)|Aggiunge un nuovo primo elemento.|
|[deque::rbegin (STL/CLR)](#rbegin)|Indica l'inizio della sequenza controllata inversa.|
|[deque::rend (STL/CLR)](#rend)|Indica la fine della sequenza controllata inversa.|
|[deque::resize (STL/CLR)](#resize)|Modifica il numero di elementi.|
|[deque::size (STL/CLR)](#size)|Conta il numero di elementi.|
|[deque::swap (STL/CLR)](#swap)|Scambia il contenuto di due contenitori.|
|[deque::to_array (STL/CLR)](#to_array)|Copia la sequenza controllata in una nuova matrice.|

|Proprietà|Descrizione|
|--------------|-----------------|
|[deque::back_item (STL/CLR)](#back_item)|Accede all'ultimo elemento.|
|[deque::front_item (STL/CLR)](#front_item)|Accede al primo elemento.|

|Operatore|Descrizione|
|--------------|-----------------|
|[deque::operator!= (STL/CLR)](#op_neq)|Determina se due oggetti `deque` non sono uguali.|
|[deque::operator(STL/CLR)](#operator)|Accede a un elemento in una posizione specificata.|
|[operatore< (deque) (STL/CLR)](#op_lt)|Determina se un `deque` oggetto è minore di un altro `deque` oggetto.|
|[operatore<= (deque) (STL/CLR)](#op_lteq)|Determina se un `deque` oggetto è minore o uguale a un altro `deque` oggetto.|
|[operator = (deque) (STL/CLR)](#op_as)|Sostituisce la sequenza controllata.|
|[operatore = = (deque) (STL/CLR)](#op_eq)|Determina se un `deque` oggetto è uguale a un altro `deque` oggetto.|
|[operatore> (deque) (STL/CLR)](#op_gt)|Determina se un `deque` oggetto è maggiore di un altro `deque` oggetto.|
|[operator>= (deque) (STL/CLR)](#op_gteq)|Determina se un `deque` oggetto è maggiore o uguale a un altro `deque` oggetto.|

## <a name="interfaces"></a>Interfacce

|Interfaccia|Descrizione|
|---------------|-----------------|
|<xref:System.ICloneable>|Duplicare un oggetto.|
|<xref:System.Collections.IEnumerable>|Sequenza tramite elementi.|
|<xref:System.Collections.ICollection>|Mantiene il gruppo di elementi.|
|<xref:System.Collections.Generic.IEnumerable%601>|Sequenza di elementi tipizzati.|
|<xref:System.Collections.Generic.ICollection%601>|Mantiene il gruppo di elementi tipizzati.|
|<xref:System.Collections.Generic.IList%601>|Gestisce il gruppo ordinato di elementi tipizzati.|
|Valore<IDeque\>|Mantiene il contenitore generico.|

## <a name="remarks"></a>Commenti

L'oggetto alloca e libera la memoria per la sequenza che controlla tramite una matrice di handle archiviati che designa i blocchi di `Value` elementi. La matrice cresce su richiesta. La crescita si verifica in modo tale che il costo di un elemento anteposto o Accodamento di un nuovo elemento sia un tempo costante e nessun elemento rimanente viene disturbato. È anche possibile rimuovere un elemento alla fine in un tempo costante e senza disturbare gli elementi rimanenti. Pertanto, una deque è un buon candidato per il contenitore sottostante per lo stack di classi modello ( [STL/CLR)](../dotnet/queue-stl-clr.md) o lo stack di classi modello [(STL/CLR)](../dotnet/stack-stl-clr.md).

Un `deque` oggetto supporta gli iteratori ad accesso casuale, che significa che è possibile fare riferimento a un elemento direttamente in base alla relativa posizione numerica, conteggiando da zero per il primo elemento (front), a [deque:: size (STL/CLR)](#size) `() - 1` per l'ultimo elemento (indietro). Significa anche che una deque è un buon candidato per il contenitore sottostante per la classe modello [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md).

Un iteratore di deque archivia un handle per l'oggetto deque associato, insieme alla distorsione dell'elemento designato. È possibile utilizzare gli iteratori solo con gli oggetti contenitore associati. La distorsione di un elemento deque *non* è necessariamente identica alla relativa posizione. Il primo elemento inserito ha la distorsione zero, l'elemento accodato successivo ha la distorsione 1, ma l'elemento anteposto successivo ha la distorsione-1.

L'inserimento o l'eliminazione di elementi a entrambe le estremità *non comporta la* modifica del valore di un elemento archiviato in corrispondenza di una distorsione valida. L'inserimento o la cancellazione di un elemento interno, tuttavia, *può* modificare il valore dell'elemento archiviato a una determinata distorsione, in modo che anche il valore designato da un iteratore possa cambiare. (Il contenitore potrebbe dover copiare gli elementi verso l'alto o verso il basso per creare un foro prima di un inserimento o per riempire un foro dopo una cancellazione). Un iteratore di deque rimane tuttavia valido purché la distorsione specifichi un elemento valido. Inoltre, un iteratore valido rimane dereferenziabile, che può essere usato per accedere o modificare il valore dell'elemento che designa, purché la distorsione non sia uguale alla distorsione per l'iteratore restituito da `end()` .

La cancellazione o la rimozione di un elemento chiama il distruttore per il valore archiviato. L'eliminazione definitiva del contenitore Cancella tutti gli elementi. Pertanto, un contenitore il cui tipo di elemento è una classe di riferimento garantisce che nessun elemento sopravviva al contenitore. Si noti, tuttavia, che un contenitore di handle *non elimina definitivamente* i relativi elementi.

## <a name="members"></a>Membri

## <a name="dequeassign-stlclr"></a><a name="assign"></a> deque:: Assign (STL/CLR)

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

### <a name="remarks"></a>Commenti

La prima funzione membro sostituisce la sequenza controllata con una ripetizione di elementi *count* del valore *Val*. Viene usato per riempire il contenitore con tutti gli elementi con lo stesso valore.

Se `InIt` è un tipo Integer, la seconda funzione membro si comporta come `assign((size_type)first, (value_type)last)` . In caso contrario, sostituisce la sequenza controllata con la sequenza [ `first` , `last` ). Viene usato per fare in modo che la sequenza controllata copi un'altra sequenza.

La terza funzione membro sostituisce la sequenza controllata con la sequenza designata dal *diritto* dell'enumeratore. Viene usato per rendere la sequenza controllata una copia di una sequenza descritta da un enumeratore.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_assign.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // assign a repetition of values
    cliext::deque<wchar_t> c2;
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

## <a name="dequeat-stlclr"></a><a name="at"></a> deque:: at (STL/CLR)

Accede a un elemento in una posizione specificata.

### <a name="syntax"></a>Sintassi

```cpp
reference at(size_type pos);
```

#### <a name="parameters"></a>Parametri

*pos*<br/>
Posizione dell'elemento a cui accedere.

### <a name="remarks"></a>Commenti

La funzione membro restituisce un riferimento all'elemento della sequenza controllata nella posizione *pos*. Viene utilizzato per leggere o scrivere un elemento la cui posizione si conosce.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_at.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
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

## <a name="dequeback-stlclr"></a><a name="back"></a> deque:: Back (STL/CLR)

Accede all'ultimo elemento.

### <a name="syntax"></a>Sintassi

```cpp
reference back();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un riferimento all'ultimo elemento della sequenza controllata, che non deve essere vuoto. Viene usato per accedere all'ultimo elemento, quando si è certi che esista.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_back.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
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

## <a name="dequeback_item-stlclr"></a><a name="back_item"></a> deque:: back_item (STL/CLR)

Accede all'ultimo elemento.

### <a name="syntax"></a>Sintassi

```cpp
property value_type back_item;
```

### <a name="remarks"></a>Osservazioni

La proprietà accede all'ultimo elemento della sequenza controllata, che non deve essere vuota. Viene utilizzato per leggere o scrivere l'ultimo elemento, quando si è certi che esista.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_back_item.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
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

## <a name="dequebegin-stlclr"></a><a name="begin"></a> deque:: begin (STL/CLR)

Indica l'inizio della sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
iterator begin();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore ad accesso casuale che designa il primo elemento della sequenza controllata o appena oltre la fine di una sequenza vuota. Viene utilizzato per ottenere un iteratore che definisce l'inizio `current` della sequenza controllata, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_begin.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // inspect first two items
    cliext::deque<wchar_t>::iterator it = c1.begin();
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

## <a name="dequeclear-stlclr"></a><a name="clear"></a> deque:: Clear (STL/CLR)

Rimuove tutti gli elementi.

### <a name="syntax"></a>Sintassi

```cpp
void clear();
```

### <a name="remarks"></a>Osservazioni

La funzione membro chiama in modo efficace [deque:: erase (STL/CLR)](#erase) `(` [deque:: begin (STL/CLR)](#begin) `(),` [deque:: end (STL/CLR)](#end) `())` . Viene usato per garantire che la sequenza controllata sia vuota.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_clear.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
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

## <a name="dequeconst_iterator-stlclr"></a><a name="const_iterator"></a> deque:: const_iterator (STL/CLR)

Tipo di un iteratore costante per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T2 const_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo non specificato `T2` che può fungere da iteratore ad accesso casuale costante per la sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_const_iterator.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display contents " a b c"
    cliext::deque<wchar_t>::const_iterator cit = c1.begin();
    for (; cit != c1.end(); ++cit)
        System::Console::Write("{0} ", *cit);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="dequeconst_reference-stlclr"></a><a name="const_reference"></a> deque:: const_reference (STL/CLR)

Tipo di un riferimento costante a un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef value_type% const_reference;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un riferimento costante a un elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_const_reference.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display initial contents " a b c"
    cliext::deque<wchar_t>::const_iterator cit = c1.begin();
    for (; cit != c1.end(); ++cit)
        {   // get a const reference to an element
        cliext::deque<wchar_t>::const_reference cref = *cit;
        System::Console::Write("{0} ", cref);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="dequeconst_reverse_iterator-stlclr"></a><a name="const_reverse_iterator"></a> deque:: const_reverse_iterator (STL/CLR)

Tipo di un iteratore inverso costante per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T4 const_reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo non specificato `T4` che può fungere da iteratore inverso costante per la sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_const_reverse_iterator.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display contents " a b c" reversed
    cliext::deque<wchar_t>::const_reverse_iterator crit = c1.rbegin();
    cliext::deque<wchar_t>::const_reverse_iterator crend = c1.rend();
    for (; crit != crend; ++crit)
        System::Console::Write("{0} ", *crit);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c b a
```

## <a name="dequedeque-stlclr"></a><a name="deque"></a> deque::d eque (STL/CLR)

Costruisce un oggetto contenitore.

### <a name="syntax"></a>Sintassi

```cpp
deque();
deque(deque<Value>% right);
deque(deque<Value>^ right);
explicit deque(size_type count);
deque(size_type count, value_type val);
template<typename InIt>
    deque(InIt first, InIt last);
deque(System::Collections::Generic::IEnumerable<Value>^ right);
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

### <a name="remarks"></a>Commenti

Il costruttore:

`deque();`

Inizializza la sequenza controllata senza elementi. Viene usato per specificare una sequenza controllata iniziale vuota.

Il costruttore:

`deque(deque<Value>% right);`

Inizializza la sequenza controllata con la sequenza [ `right.begin()` , `right.end()` ). Viene usato per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto deque a *destra*. Per ulteriori informazioni sugli iteratori, vedere [deque:: begin (STL/CLR)](#begin) e [deque:: end (STL/CLR)](#end).

Il costruttore:

`deque(deque<Value>^ right);`

Inizializza la sequenza controllata con la sequenza [ `right->begin()` , `right->end()` ). Viene usato per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto deque il cui handle è a *destra*.

Il costruttore:

`explicit deque(size_type count);`

Inizializza la sequenza controllata con gli elementi *count* ognuno con value `value_type()` . Viene usato per riempire il contenitore con tutti gli elementi con il valore predefinito.

Il costruttore:

`deque(size_type count, value_type val);`

Inizializza la sequenza controllata con gli elementi *count* ognuno con il valore *Val*. Viene usato per riempire il contenitore con tutti gli elementi con lo stesso valore.

Il costruttore:

`template<typename InIt>`

`deque(InIt first, InIt last);`

Inizializza la sequenza controllata con la sequenza [ `first` , `last` ). Viene usato per fare in modo che la sequenza controllata venga copiata da un'altra sequenza.

Il costruttore:

`deque(System::Collections::Generic::IEnumerable<Value>^ right);`

Inizializza la sequenza controllata con la sequenza designata dal *diritto* dell'enumeratore. Viene usato per fare in modo che la sequenza controllata venga copiata da un'altra sequenza descritta da un enumeratore.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_construct.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
// construct an empty container
    cliext::deque<wchar_t> c1;
    System::Console::WriteLine("size() = {0}", c1.size());

    // construct with a repetition of default values
    cliext::deque<wchar_t> c2(3);
    for each (wchar_t elem in c2)
        System::Console::Write("{0} ", (int)elem);
    System::Console::WriteLine();

    // construct with a repetition of values
    cliext::deque<wchar_t> c3(6, L'x');
    for each (wchar_t elem in c3)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct with an iterator range
    cliext::deque<wchar_t>::iterator it = c3.end();
    cliext::deque<wchar_t> c4(c3.begin(), --it);
    for each (wchar_t elem in c4)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct with an enumeration
    cliext::deque<wchar_t> c5(   // NOTE: cast is not needed
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3);
    for each (wchar_t elem in c5)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct by copying another container
    cliext::deque<wchar_t> c7(c3);
    for each (wchar_t elem in c7)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct by copying a container handle
    cliext::deque<wchar_t> c8(%c3);
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

## <a name="dequedifference_type-stlclr"></a><a name="difference_type"></a> deque::d ifference_type (STL/CLR)

Tipi di una distanza con segno tra due elementi.

### <a name="syntax"></a>Sintassi

```cpp
typedef int difference_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un conteggio di elementi firmati.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_difference_type.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // compute positive difference
    cliext::deque<wchar_t>::difference_type diff = 0;
    for (cliext::deque<wchar_t>::iterator it = c1.begin();
        it != c1.end(); ++it) ++diff;
    System::Console::WriteLine("end()-begin() = {0}", diff);

    // compute negative difference
    diff = 0;
    for (cliext::deque<wchar_t>::iterator it = c1.end();
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

## <a name="dequeempty-stlclr"></a><a name="empty"></a> deque:: Empty (STL/CLR)

Verifica se sono presenti o meno degli elementi.

### <a name="syntax"></a>Sintassi

```cpp
bool empty();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce true per una sequenza controllata vuota. Equivale a [deque:: size (STL/CLR)](#size) `() == 0` . Viene usato per verificare se la deque è vuota.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_empty.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
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

## <a name="dequeend-stlclr"></a><a name="end"></a> deque:: end (STL/CLR)

Designa la fine della sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
iterator end();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore ad accesso casuale che punta appena oltre la fine della sequenza controllata. Viene utilizzato per ottenere un iteratore che definisce la fine `current` della sequenza controllata, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_end.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // inspect last two items
    cliext::deque<wchar_t>::iterator it = c1.end();
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

## <a name="dequeerase-stlclr"></a><a name="erase"></a> deque:: erase (STL/CLR)

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

### <a name="remarks"></a>Commenti

La prima funzione membro rimuove l'elemento della sequenza controllata a *cui* punta. Viene usato per rimuovere un singolo elemento.

La seconda funzione membro rimuove gli elementi della sequenza controllata nell'intervallo [`first`, `last`). Viene usato per rimuovere zero o più elementi contigui.

Entrambe le funzioni membro restituiscono un iteratore che definisce il primo elemento rimanente oltre tutti gli elementi rimossi o [deque:: end (STL/CLR)](#end) `()` se tale elemento non esiste.

Quando si cancellano gli elementi, il numero di copie di elementi è lineare nel numero di elementi compresi tra la fine della cancellazione e la fine più vicina della sequenza. (Quando si cancellano uno o più elementi a una delle estremità della sequenza, non viene eseguita alcuna copia degli elementi).

### <a name="example"></a>Esempio

```cpp
// cliext_deque_erase.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
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
    cliext::deque<wchar_t>::iterator it = c1.end();
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

## <a name="dequefront-stlclr"></a><a name="front"></a> deque:: Front (STL/CLR)

Accede al primo elemento.

### <a name="syntax"></a>Sintassi

```cpp
reference front();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un riferimento al primo elemento della sequenza controllata, che non deve essere vuoto. Viene utilizzato per leggere o scrivere il primo elemento, quando si è certi che esista.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_front.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
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

## <a name="dequefront_item-stlclr"></a><a name="front_item"></a> deque:: front_item (STL/CLR)

Accede al primo elemento.

### <a name="syntax"></a>Sintassi

```cpp
property value_type front_item;
```

### <a name="remarks"></a>Osservazioni

La proprietà accede al primo elemento della sequenza controllata, che non deve essere vuota. Viene utilizzato per leggere o scrivere il primo elemento, quando si è certi che esista.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_front_item.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
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

## <a name="dequegeneric_container-stlclr"></a><a name="generic_container"></a> deque:: generic_container (STL/CLR)

Tipo dell'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::
    IDeque<generic_value>
    generic_container;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive l'interfaccia generica per questa classe del contenitore del modello.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_generic_container.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct a generic container
    cliext::deque<wchar_t>::generic_container^ gc1 = %c1;
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

## <a name="dequegeneric_iterator-stlclr"></a><a name="generic_iterator"></a> deque:: generic_iterator (STL/CLR)

Tipo di un iteratore da utilizzare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::Generic::
    ContainerRandomAccessIterator<generic_value> generic_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un iteratore generico che può essere usato con l'interfaccia generica per questa classe del contenitore del modello.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_generic_iterator.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct a generic container
    cliext::deque<wchar_t>::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // modify generic and display original
    cliext::deque<wchar_t>::generic_iterator gcit = gc1->begin();
    cliext::deque<wchar_t>::generic_value gcval = *gcit;
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

## <a name="dequegeneric_reverse_iterator-stlclr"></a><a name="generic_reverse_iterator"></a> deque:: generic_reverse_iterator (STL/CLR)

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
// cliext_deque_generic_reverse_iterator.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct a generic container
    cliext::deque<wchar_t>::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // modify generic and display original
    cliext::deque<wchar_t>::generic_reverse_iterator gcit = gc1->rbegin();
    cliext::deque<wchar_t>::generic_value gcval = *gcit;
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

## <a name="dequegeneric_value-stlclr"></a><a name="generic_value"></a> deque:: generic_value (STL/CLR)

Tipo di un elemento da utilizzare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef GValue generic_value;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo `GValue` che descrive il valore dell'elemento archiviato da usare con l'interfaccia generica per questa classe del contenitore del modello.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_generic_value.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct a generic container
    cliext::deque<wchar_t>::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // modify generic and display original
    cliext::deque<wchar_t>::generic_iterator gcit = gc1->begin();
    cliext::deque<wchar_t>::generic_value gcval = *gcit;
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

## <a name="dequeinsert-stlclr"></a><a name="insert"></a> deque:: Insert (STL/CLR)

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

### <a name="remarks"></a>Commenti

Ogni funzione membro inserisce, prima dell'elemento a cui punta la *posizione* nella sequenza controllata, una sequenza specificata dagli operandi rimanenti.

La prima funzione membro inserisce un elemento con il valore *Val* e restituisce un iteratore che designa l'elemento appena inserito. Viene usato per inserire un singolo elemento prima di una posizione designata da un iteratore.

La seconda funzione membro inserisce una ripetizione di elementi *count* del valore *Val*. Viene usato per inserire zero o più elementi contigui che sono tutte copie dello stesso valore.

Se `InIt` è di tipo Integer, la terza funzione membro si comporta come `insert(where, (size_type)first, (value_type)last)`. In caso contrario, inserisce la sequenza [ `first` , `last` ). Viene usato per inserire zero o più elementi contigui copiati da un'altra sequenza.

La quarta funzione membro inserisce la sequenza designata dal *diritto*. Viene usato per inserire una sequenza descritta da un enumeratore.

Quando si inserisce un singolo elemento, il numero di copie degli elementi è lineare nel numero di elementi tra il punto di inserimento e la fine più vicina della sequenza. (Quando si inseriscono uno o più elementi a una delle estremità della sequenza, non viene eseguita alcuna copia degli elementi). Se `InIt` è un iteratore di input, la terza funzione membro esegue efficacemente un singolo inserimento per ogni elemento nella sequenza. In caso contrario, quando si inseriscono `N` elementi, il numero di copie di elementi è lineare in `N` più il numero di elementi tra il punto di inserimento e la fine più vicina della sequenza.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_insert.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // insert a single value using iterator
    cliext::deque<wchar_t>::iterator it = c1.begin();
    System::Console::WriteLine("insert(begin()+1, L'x') = {0}",
        *c1.insert(++it, L'x'));
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // insert a repetition of values
    cliext::deque<wchar_t> c2;
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

## <a name="dequeiterator-stlclr"></a><a name="iterator"></a> deque:: iterator (STL/CLR)

Tipo di un iteratore per la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T1 iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo non specificato `T1` che può fungere da iteratore ad accesso casuale per la sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_iterator.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display contents " a b c"
    cliext::deque<wchar_t>::iterator it = c1.begin();
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

## <a name="dequeoperator-stlclr"></a><a name="op_neq"></a> deque:: operator! = (STL/CLR)

Deque non uguale al confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    bool operator!=(deque<Value>% left,
        deque<Value>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Commenti

La funzione operator restituisce `!(left == right)` . Viene usato per verificare se *Left* non è ordinato come *right* quando i due dequesti vengono confrontati elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_operator_ne.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // assign to a new container
    cliext::deque<wchar_t> c2;
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

## <a name="dequeoperatorstlclr"></a><a name="operator"></a> deque:: operator (STL/CLR)

Accede a un elemento in una posizione specificata.

### <a name="syntax"></a>Sintassi

```cpp
reference operator[](size_type pos);
```

#### <a name="parameters"></a>Parametri

*pos*<br/>
Posizione dell'elemento a cui accedere.

### <a name="remarks"></a>Commenti

L'operatore membro restituisce un referene all'elemento alla posizione *pos*. Viene usato per accedere a un elemento di cui si conosce la posizione.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_operator_sub.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
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

## <a name="dequepop_back-stlclr"></a><a name="pop_back"></a> deque::p op_back (STL/CLR)

Rimuove l'ultimo elemento.

### <a name="syntax"></a>Sintassi

```cpp
void pop_back();
```

### <a name="remarks"></a>Osservazioni

La funzione membro rimuove l'ultimo elemento della sequenza controllata, che non deve essere vuoto. Viene utilizzato per abbreviare la deque di un elemento nella parte posteriore.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_pop_back.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
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

## <a name="dequepop_front-stlclr"></a><a name="pop_front"></a> deque::p op_front (STL/CLR)

Rimuove il primo elemento.

### <a name="syntax"></a>Sintassi

```cpp
void pop_front();
```

### <a name="remarks"></a>Osservazioni

La funzione membro rimuove il primo elemento della sequenza controllata, che non deve essere vuoto. Viene utilizzato per abbreviare la deque di un elemento in primo piano.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_pop_front.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // pop an element and redisplay
    c1.pop_front();
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
b c
```

## <a name="dequepush_back-stlclr"></a><a name="push_back"></a> deque::p ush_back (STL/CLR)

Aggiunge un nuovo elemento ultimo.

### <a name="syntax"></a>Sintassi

```cpp
void push_back(value_type val);
```

### <a name="remarks"></a>Osservazioni

La funzione membro inserisce un elemento con il valore `val` alla fine della sequenza controllata. Viene usato per aggiungere un altro elemento alla deque.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_push_back.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
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

## <a name="dequepush_front-stlclr"></a><a name="push_front"></a> deque::p ush_front (STL/CLR)

Aggiunge un nuovo primo elemento.

### <a name="syntax"></a>Sintassi

```cpp
void push_front(value_type val);
```

### <a name="remarks"></a>Osservazioni

La funzione membro inserisce un elemento con un valore `val` all'inizio della sequenza controllata. Viene usato per anteporre un altro elemento alla deque.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_push_front.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_front(L'a');
    c1.push_front(L'b');
    c1.push_front(L'c');

    // display contents " c b a"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c b a
```

## <a name="dequerbegin-stlclr"></a><a name="rbegin"></a> deque:: rbegin (STL/CLR)

Indica l'inizio della sequenza controllata inversa.

### <a name="syntax"></a>Sintassi

```cpp
reverse_iterator rbegin();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore inverso che definisce l'ultimo elemento della sequenza controllata o appena oltre l'inizio di una sequenza vuota. Definisce quindi l'oggetto `beginning` della sequenza inversa. Viene utilizzato per ottenere un iteratore che definisce l'inizio `current` della sequenza controllata considerata in ordine inverso, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_rbegin.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // inspect first two items in reversed sequence
    cliext::deque<wchar_t>::reverse_iterator rit = c1.rbegin();
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

## <a name="dequereference-stlclr"></a><a name="reference"></a> deque:: Reference (STL/CLR)

Tipo di un riferimento a un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef value_type% reference;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un riferimento a un elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_reference.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display initial contents " a b c"
    cliext::deque<wchar_t>::iterator it = c1.begin();
    for (; it != c1.end(); ++it)
        {   // get a reference to an element
        cliext::deque<wchar_t>::reference ref = *it;
        System::Console::Write("{0} ", ref);
        }
    System::Console::WriteLine();

    // modify contents " a b c"
    for (it = c1.begin(); it != c1.end(); ++it)
        {   // get a reference to an element
        cliext::deque<wchar_t>::reference ref = *it;

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

## <a name="dequerend-stlclr"></a><a name="rend"></a> deque:: rend (STL/CLR)

Indica la fine della sequenza controllata inversa.

### <a name="syntax"></a>Sintassi

```cpp
reverse_iterator rend();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore inverso che punta appena oltre l'inizio della sequenza controllata. Definisce quindi l'oggetto `end` della sequenza inversa. Viene utilizzato per ottenere un iteratore che definisce la fine `current` della sequenza controllata considerata in ordine inverso, ma il cui stato può modificarsi se la lunghezza della sequenza controllata cambia.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_rend.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // inspect first two items
    cliext::deque<wchar_t>::reverse_iterator rit = c1.rend();
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

## <a name="dequeresize-stlclr"></a><a name="resize"></a> deque:: Resize (STL/CLR)

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

### <a name="remarks"></a>Commenti

Le funzioni membro assicurano che [deque:: size (STL/CLR)](#size) `()` restituisca *new_size*. Se la sequenza controllata deve essere più lunga, la prima funzione membro accoda elementi con valore `value_type()` , mentre la seconda funzione membro accoda gli elementi con il valore *Val*. Per rendere la sequenza controllata più breve, entrambe le funzioni membro cancellano in modo efficace l'ultimo elemento [deque:: size (STL/CLR)](#size) `() -` `new_size` volte. Viene usato per garantire che la sequenza controllata abbia dimensioni *new_size*, tagliando o riempiendo la sequenza controllata corrente.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_resize.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
// construct an empty container and pad with default values
    cliext::deque<wchar_t> c1;
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

## <a name="dequereverse_iterator-stlclr"></a><a name="reverse_iterator"></a> deque:: reverse_iterator (STL/CLR)

Tipo di un iteratore inverso della sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
typedef T3 reverse_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo non specificato `T3` che può essere utilizzato come iteratore inverso per la sequenza controllata.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_reverse_iterator.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display contents " a b c" reversed
    cliext::deque<wchar_t>::reverse_iterator rit = c1.rbegin();
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

## <a name="dequesize-stlclr"></a><a name="size"></a> deque:: size (STL/CLR)

Conta il numero di elementi.

### <a name="syntax"></a>Sintassi

```cpp
size_type size();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce la lunghezza della sequenza controllata. Viene usato per determinare il numero di elementi attualmente presenti nella sequenza controllata. Se è sufficiente che la sequenza abbia dimensioni diversi da zero, vedere [deque:: Empty (STL/CLR)](#empty) `()` .

### <a name="example"></a>Esempio

```cpp
// cliext_deque_size.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
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

## <a name="dequesize_type-stlclr"></a><a name="size_type"></a> deque:: size_type (STL/CLR)

Tipo di una distanza con segno tra due elementi.

### <a name="syntax"></a>Sintassi

```cpp
typedef int size_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un conteggio di elementi non negativi.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_size_type.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // compute positive difference
    cliext::deque<wchar_t>::size_type diff = c1.end() - c1.begin();
    System::Console::WriteLine("end()-begin() = {0}", diff);
    return (0);
    }
```

```Output
a b c
end()-begin() = 3
```

## <a name="dequeswap-stlclr"></a><a name="swap"></a> deque:: swap (STL/CLR)

Scambia il contenuto di due contenitori.

### <a name="syntax"></a>Sintassi

```cpp
void swap(deque<Value>% right);
```

#### <a name="parameters"></a>Parametri

*Ok*<br/>
Contenitore con cui scambiare il contenuto.

### <a name="remarks"></a>Commenti

La funzione membro scambia le sequenze controllate tra **`*this`** e *right*. Esegue questa operazione in un tempo costante e non genera alcuna eccezione. Viene usato come modo rapido per scambiare il contenuto di due contenitori.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_swap.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct another container with repetition of values
    cliext::deque<wchar_t> c2(5, L'x');
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

## <a name="dequeto_array-stlclr"></a><a name="to_array"></a> deque:: to_array (STL/CLR)

Copia la sequenza controllata in una nuova matrice.

### <a name="syntax"></a>Sintassi

```cpp
cli::array<Value>^ to_array();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce una matrice che contiene la sequenza controllata. Viene usato per ottenere una copia della sequenza controllata in forma di matrice.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_to_array.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
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

## <a name="dequevalue_type-stlclr"></a><a name="value_type"></a> deque:: value_type (STL/CLR)

Tipo di un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef Value value_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del *valore* del parametro di modello.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_value_type.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display contents " a b c" using value_type
    for (cliext::deque<wchar_t>::iterator it = c1.begin();
        it != c1.end(); ++it)
        {   // store element in value_type object
        cliext::deque<wchar_t>::value_type val = *it;

        System::Console::Write("{0} ", val);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="operatorlt-deque-stlclr"></a><a name="op_lt"></a> operatore &lt; (deque) (STL/CLR)

Deque minore del confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    bool operator<(deque<Value>% left,
        deque<Value>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Commenti

La funzione operator restituisce true se, per la posizione più bassa `i` per la quale `!(right[i] < left[i])` è anche true `left[i] < right[i]` . In caso contrario, restituisce `left->size() < right->size()` il valore usato per verificare se *Left* viene ordinato prima del *diritto* quando i due dequesti vengono confrontati elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_operator_lt.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // assign to a new container
    cliext::deque<wchar_t> c2;
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

## <a name="operatorlt-deque-stlclr"></a><a name="op_lteq"></a> Operator &lt; = (deque) (STL/CLR)

Deque minore o uguale al confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    bool operator<=(deque<Value>% left,
        deque<Value>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Commenti

La funzione operator restituisce `!(right < left)` . Viene usato per verificare se *Left* non è ordinato dopo *right* quando i due dequesti vengono confrontati elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_operator_le.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // assign to a new container
    cliext::deque<wchar_t> c2;
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

## <a name="operator-deque-stlclr"></a><a name="op_as"></a> operator = (deque) (STL/CLR)

Sostituisce la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
deque<Value>% operator=(deque<Value>% right);
```

#### <a name="parameters"></a>Parametri

*Ok*<br/>
Contenitore da copiare.

### <a name="remarks"></a>Commenti

L'operatore membro copia *right* nell'oggetto, quindi restituisce **`*this`** . Viene usato per sostituire la sequenza controllata con una copia della sequenza controllata a *destra*.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_operator_as.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // assign to a new container
    cliext::deque<wchar_t> c2;
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

## <a name="operator-deque-stlclr"></a><a name="op_eq"></a> operatore = = (deque) (STL/CLR)

Confronto di uguaglianza di deque.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    bool operator==(deque<Value>% left,
        deque<Value>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Commenti

La funzione operator restituisce true solo se le sequenze controllate da *Left* e *right* hanno la stessa lunghezza e, per ogni posizione `i` , `left[i] ==` `right[i]` . Viene usato per verificare se *Left* è ordinato come *right* quando i due dequesti vengono confrontati elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_operator_eq.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // assign to a new container
    cliext::deque<wchar_t> c2;
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

## <a name="operatorgt-deque-stlclr"></a><a name="op_gt"></a> operatore &gt; (deque) (STL/CLR)

Deque maggiore del confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    bool operator>(deque<Value>% left,
        deque<Value>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Commenti

La funzione operator restituisce `right` `<` `left` . Viene usato per verificare se *Left* viene ordinato dopo *right* quando i due dequesti vengono confrontati elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_operator_gt.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // assign to a new container
    cliext::deque<wchar_t> c2;
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

## <a name="operatorgt-deque-stlclr"></a><a name="op_gteq"></a> Operator &gt; = (deque) (STL/CLR)

Deque maggiore o uguale al confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value>
    bool operator>=(deque<Value>% left,
        deque<Value>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Commenti

La funzione operator restituisce `!(left` `<` `right)` . Viene usato per verificare se *Left* non è ordinato prima del *diritto* quando i due dequesti vengono confrontati elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_deque_operator_ge.cpp
// compile with: /clr
#include <cliext/deque>

int main()
    {
    cliext::deque<wchar_t> c1;
    c1.push_back(L'a');
    c1.push_back(L'b');
    c1.push_back(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // assign to a new container
    cliext::deque<wchar_t> c2;
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
