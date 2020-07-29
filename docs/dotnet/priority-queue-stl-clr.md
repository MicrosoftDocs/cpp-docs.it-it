---
title: priority_queue (STL/CLR)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- cliext::priority_queue
- cliext::priority_queue::assign
- cliext::priority_queue::const_reference
- cliext::priority_queue::container_type
- cliext::priority_queue::difference_type
- cliext::priority_queue::empty
- cliext::priority_queue::generic_container
- cliext::priority_queue::generic_value
- cliext::priority_queue::get_container
- cliext::priority_queue::operator=
- cliext::priority_queue::pop
- cliext::priority_queue::priority_queue
- cliext::priority_queue::push
- cliext::priority_queue::reference
- cliext::priority_queue::size
- cliext::priority_queue::size_type
- cliext::priority_queue::to_array
- cliext::priority_queue::top
- cliext::priority_queue::top_item
- cliext::priority_queue::value_comp
- cliext::priority_queue::value_compare
- cliext::priority_queue::value_type
helpviewer_keywords:
- priority_queue class [STL/CLR]
- <queue> header [STL/CLR]
- <cliext/queue> header [STL/CLR]
- assign member [STL/CLR]
- const_reference member [STL/CLR]
- container_type member [STL/CLR]
- difference_type member [STL/CLR]
- empty member [STL/CLR]
- generic_container member [STL/CLR]
- generic_value member [STL/CLR]
- get_container member [STL/CLR]
- operator= member [STL/CLR]
- pop member [STL/CLR]
- priority_queue member [STL/CLR]
- push member [STL/CLR]
- reference member [STL/CLR]
- size member [STL/CLR]
- size_type member [STL/CLR]
- to_array member [STL/CLR]
- top member [STL/CLR]
- top_item member [STL/CLR]
- value_comp member [STL/CLR]
- value_compare member [STL/CLR]
- value_type member [STL/CLR]
ms.assetid: 4d0000d3-68ff-4c4b-8157-7060540136f5
ms.openlocfilehash: 6c5a37cc76f6ac3a3f92cf54b440960d7476daa9
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87211035"
---
# <a name="priority_queue-stlclr"></a>priority_queue (STL/CLR)

La classe modello descrive un oggetto che controlla una sequenza ordinata di lunghezza variabile di elementi con accesso limitato. Usare l'adattatore contenitore `priority_queue` per gestire un contenitore sottostante come coda di priorità.

Nella descrizione seguente corrisponde a `GValue` *value* , a meno che quest'ultimo non sia un tipo di riferimento, nel qual caso è `Value^` . Analogamente, `GContainer` è uguale al *contenitore* a meno che quest'ultimo non sia un tipo di riferimento, nel qual caso è `Container^` .

## <a name="syntax"></a>Sintassi

```cpp
template<typename Value,
    typename Container>
    ref class priority_queue
        System::ICloneable,
        Microsoft::VisualC::StlClr::IPriorityQueue<GValue, GContainer>
    { ..... };
```

### <a name="parameters"></a>Parametri

*Valore*<br/>
Tipo di un elemento nella sequenza controllata.

*Contenitore*<br/>
Tipo del contenitore sottostante.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<cliext/queue>

**Spazio dei nomi:** cliext

## <a name="declarations"></a>Dichiarazioni

|Definizione del tipo|Descrizione|
|---------------------|-----------------|
|[priority_queue::const_reference (STL/CLR)](#const_reference)|Tipo di un riferimento costante a un elemento.|
|[priority_queue::container_type (STL/CLR)](#container_type)|Tipo del contenitore sottostante.|
|[priority_queue::difference_type (STL/CLR)](#difference_type)|Tipo di una distanza Signed tra due elementi.|
|[priority_queue::generic_container (STL/CLR)](#generic_container)|Tipo dell'interfaccia generica per l'adattatore del contenitore.|
|[priority_queue::generic_value (STL/CLR)](#generic_value)|Tipo di un elemento per l'interfaccia generica per l'adattatore del contenitore.|
|[priority_queue::reference (STL/CLR)](#reference)|Tipo di un riferimento a un elemento.|
|[priority_queue::size_type (STL/CLR)](#size_type)|Tipo di una distanza Signed tra due elementi.|
|[priority_queue::value_compare (STL/CLR)](#value_compare)|Delegato di ordinamento di due elementi.|
|[priority_queue::value_type (STL/CLR)](#value_type)|Tipo di un elemento.|

|Funzione membro|Descrizione|
|---------------------|-----------------|
|[priority_queue::assign (STL/CLR)](#assign)|Sostituisce tutti gli elementi.|
|[priority_queue::empty (STL/CLR)](#empty)|Verifica se sono presenti o meno degli elementi.|
|[priority_queue::get_container (STL/CLR)](#get_container)|Accede al contenitore sottostante.|
|[priority_queue::pop (STL/CLR)](#pop)|Rimuove l'elemento hghest-Priority.|
|[priority_queue::priority_queue (STL/CLR)](#priority_queue)|Costruisce un oggetto contenitore.|
|[priority_queue::push (STL/CLR)](#push)|Aggiunge un nuovo elemento.|
|[priority_queue::size (STL/CLR)](#size)|Conta il numero di elementi.|
|[priority_queue::top (STL/CLR)](#top)|Accede all'elemento con priorità più alta.|
|[priority_queue::to_array (STL/CLR)](#to_array)|Copia la sequenza controllata in una nuova matrice.|
|[priority_queue::value_comp (STL/CLR)](#value_comp)|Copia il delegato di ordinamento per due elementi.|

|Proprietà|Descrizione|
|--------------|-----------------|
|[priority_queue::top_item (STL/CLR)](#top_item)|Accede all'elemento con priorità più alta.|

|Operatore|Descrizione|
|--------------|-----------------|
|[priority_queue::operator= (STL/CLR)](#op_as)|Sostituisce la sequenza controllata.|

## <a name="interfaces"></a>Interfacce

|Interfaccia|Descrizione|
|---------------|-----------------|
|<xref:System.ICloneable>|Duplicare un oggetto.|
|IPriorityQueue\<Value, Container>|Gestire un adapter contenitore generico.|

## <a name="remarks"></a>Osservazioni

L'oggetto alloca e libera la memoria per la sequenza che controlla tramite un contenitore sottostante, di tipo `Container` , che archivia `Value` gli elementi e cresce su richiesta. Mantiene la sequenza ordinata come heap, con l'elemento con priorità più alta (l'elemento superiore) prontamente accessibile e rimovibile. L'oggetto limita l'accesso al push di nuovi elementi e l'inserimento di un solo elemento con priorità più alta, implementando una coda di priorità.

L'oggetto ordina la sequenza che controlla chiamando un oggetto delegato archiviato di tipo [priority_queue:: value_compare (STL/CLR)](../dotnet/priority-queue-value-compare-stl-clr.md). È possibile specificare l'oggetto delegato archiviato quando si costruisce la priority_queue; Se non si specifica alcun oggetto delegato, il valore predefinito è il confronto `operator<(value_type, value_type)` . È possibile accedere a questo oggetto archiviato chiamando la funzione membro [priority_queue:: value_comp (STL/CLR)](../dotnet/priority-queue-value-comp-stl-clr.md) `()` .

Un oggetto delegato di questo tipo deve imporre un ordinamento debole rigoroso su valori di tipo [priority_queue:: value_type (STL/CLR)](../dotnet/priority-queue-value-type-stl-clr.md). Ciò significa che, per due chiavi `X` e `Y` :

`value_comp()(X, Y)`Restituisce lo stesso risultato booleano a ogni chiamata.

Se `value_comp()(X, Y)` è true, `value_comp()(Y, X)` deve essere false.

Se `value_comp()(X, Y)` è true, `X` viene detto che prima viene ordinato `Y` .

Se `!value_comp()(X, Y) && !value_comp()(Y, X)` è true, `X` e `Y` si afferma che hanno un ordinamento equivalente.

Per qualsiasi elemento `X` che precede `Y` nella sequenza controllata, `key_comp()(Y, X)` è false. Per l'oggetto delegato predefinito, il valore delle chiavi non diminuisce mai.

L'elemento con la priorità più alta è quindi uno degli elementi che non viene ordinato prima di qualsiasi altro elemento.

Poiché il contenitore sottostante mantiene gli elementi ordinati come heap:

Il contenitore deve supportare gli iteratori ad accesso casuale.

Gli elementi con ordinamento equivalente possono essere estratti in un ordine diverso rispetto al push. L'ordinamento non è stabile.

Pertanto, i candidati per il contenitore sottostante includono [deque (STL/CLR)](../dotnet/deque-stl-clr.md) e [Vector (STL/CLR)](../dotnet/vector-stl-clr.md).

## <a name="members"></a>Membri

## <a name="priority_queueassign-stlclr"></a><a name="assign"></a>priority_queue:: Assign (STL/CLR)

Sostituisce tutti gli elementi.

### <a name="syntax"></a>Sintassi

```cpp
void assign(priority_queue<Value, Container>% right);
```

#### <a name="parameters"></a>Parametri

*Ok*<br/>
Adattatore contenitore da inserire.

### <a name="remarks"></a>Osservazioni

La funzione membro assegna `right.get_container()` al contenitore sottostante. Viene usato per modificare l'intero contenuto della coda.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_assign.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // assign a repetition of values
    Mypriority_queue c2;
    c2.assign(c1);
    for each (wchar_t elem in c2.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
c a b
```

## <a name="priority_queueconst_reference-stlclr"></a><a name="const_reference"></a>priority_queue:: const_reference (STL/CLR)

Tipo di un riferimento costante a un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef value_type% const_reference;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un riferimento costante a un elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_const_reference.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display reversed contents " c b a"
    for (; !c1.empty(); c1.pop())
        {   // get a const reference to an element
        Mypriority_queue::const_reference cref = c1.top();
        System::Console::Write("{0} ", cref);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c b a
```

## <a name="priority_queuecontainer_type-stlclr"></a><a name="container_type"></a>priority_queue:: container_type (STL/CLR)

Tipo del contenitore sottostante.

### <a name="syntax"></a>Sintassi

```cpp
typedef Container value_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello `Container`.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_container_type.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display contents " a b c" using container_type
    Mypriority_queue::container_type wc1 = c1.get_container();
    for each (wchar_t elem in wc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
```

## <a name="priority_queuedifference_type-stlclr"></a><a name="difference_type"></a>priority_queue::d ifference_type (STL/CLR)

Tipi di una distanza con segno tra due elementi.

### <a name="syntax"></a>Sintassi

```cpp
typedef int difference_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un conteggio di elementi probabilmente negativo.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_difference_type.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // compute negative difference
    Mypriority_queue::difference_type diff = c1.size();
    c1.push(L'd');
    c1.push(L'e');
    diff -= c1.size();
    System::Console::WriteLine("pushing 2 = {0}", diff);

    // compute positive difference
    diff = c1.size();
    c1.pop();
    c1.pop();
    c1.pop();
    diff -= c1.size();
    System::Console::WriteLine("popping 3 = {0}", diff);
    return (0);
    }
```

```Output
c a b
pushing 2 = -2
popping 3 = 3
```

## <a name="priority_queueempty-stlclr"></a><a name="empty"></a>priority_queue:: Empty (STL/CLR)

Verifica se sono presenti o meno degli elementi.

### <a name="syntax"></a>Sintassi

```cpp
bool empty();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce true per una sequenza controllata vuota. Equivale a [priority_queue:: size (STL/CLR)](../dotnet/priority-queue-size-stl-clr.md) `() == 0` . Viene usato per verificare se la priority_queue è vuota.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_empty.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    System::Console::WriteLine("size() = {0}", c1.size());
    System::Console::WriteLine("empty() = {0}", c1.empty());

    // clear the container and reinspect
    c1.pop();
    c1.pop();
    c1.pop();
    System::Console::WriteLine("size() = {0}", c1.size());
    System::Console::WriteLine("empty() = {0}", c1.empty());
    return (0);
    }
```

```Output
c a b
size() = 3
empty() = False
size() = 0
empty() = True
```

## <a name="priority_queuegeneric_container-stlclr"></a><a name="generic_container"></a>priority_queue:: generic_container (STL/CLR)

Tipo dell'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::IPriorityQueue<Value>
    generic_container;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive l'interfaccia generica per questa classe dell'adattatore del contenitore del modello.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_generic_container.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct a generic container
    Mypriority_queue::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1->get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // modify generic and display original
    gc1->push(L'd');
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // modify original and display generic
    c1.push(L'e');
    for each (wchar_t elem in gc1->get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
c a b
d c b a
e d b a c
```

## <a name="priority_queuegeneric_value-stlclr"></a><a name="generic_value"></a>priority_queue:: generic_value (STL/CLR)

Tipo di un elemento da utilizzare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef GValue generic_value;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo `GValue` che descrive il valore dell'elemento archiviato da usare con l'interfaccia generica per questa classe del contenitore del modello. ( `GValue` è `value_type` o `value_type^` se `value_type` è un tipo di riferimento).

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_generic_value.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // get interface to container
    Mypriority_queue::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1->get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // display in priority order using generic_value
    for (; !gc1->empty(); gc1->pop())
        {
        Mypriority_queue::generic_value elem = gc1->top();

        System::Console::Write("{0} ", elem);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
c a b
c b a
```

## <a name="priority_queueget_container-stlclr"></a><a name="get_container"></a>priority_queue:: get_container (STL/CLR)

Accede al contenitore sottostante.

### <a name="syntax"></a>Sintassi

```cpp
container_type get_container();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce il contenitore sottostante. Viene utilizzato per ignorare le restrizioni imposte dal wrapper del contenitore.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_get_container.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
```

## <a name="priority_queueoperator-stlclr"></a><a name="op_as"></a>priority_queue:: operator = (STL/CLR)

Sostituisce la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
priority_queue <Value, Container>% operator=(priority_queue <Value, Container>% right);
```

#### <a name="parameters"></a>Parametri

*Ok*<br/>
Adattatore contenitore da copiare.

### <a name="remarks"></a>Osservazioni

L'operatore membro copia *right* nell'oggetto, quindi restituisce **`*this`** . Viene usato per sostituire la sequenza controllata con una copia della sequenza controllata a *destra*.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_operator_as.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // assign to a new container
    Mypriority_queue c2;
    c2 = c1;
    for each (wchar_t elem in c2.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
c a b
```

## <a name="priority_queuepop-stlclr"></a><a name="pop"></a>priority_queue::p op (STL/CLR)

Rimuove l'elemento proirity più elevato.

### <a name="syntax"></a>Sintassi

```cpp
void pop();
```

### <a name="remarks"></a>Osservazioni

La funzione membro rimuove l'elemento con priorità più alta della sequenza controllata, che non deve essere vuoto. Viene utilizzato per abbreviare la coda di un elemento nella parte posteriore.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_pop.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // pop an element and redisplay
    c1.pop();
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
b a
```

## <a name="priority_queuepriority_queue-stlclr"></a><a name="priority_queue"></a>priority_queue::p riority_queue (STL/CLR)

Costruisce un oggetto adattatore del contenitore.

### <a name="syntax"></a>Sintassi

```cpp
priority_queue();
priority_queue(priority_queue<Value, Container> right);
priority_queue(priority_queue<Value, Container> right);
explicit priority_queue(value_compare^ pred);
priority_queue(value_compare^ pred, container_type% cont);
template<typename InIt>
    priority_queue(InIt first, InIt last);
template<typename InIt>
    priority_queue(InIt first, InIt last,
        value_compare^ pred);
template<typename InIt>
    priority_queue(InIt first, InIt last,
        value_compare^ pred, container_type% cont);
```

#### <a name="parameters"></a>Parametri

*contenuti*<br/>
Contenitore da copiare.

*first*<br/>
Inizio dell'intervallo da inserire.

*last*<br/>
Fine dell'intervallo da inserire.

*Pred*<br/>
Predicato di ordinamento per la sequenza controllata.

*Ok*<br/>
Oggetto o un intervallo da inserire.

### <a name="remarks"></a>Osservazioni

Il costruttore:

`priority_queue();`

Crea un contenitore con wrapper vuoto, con il predicato di ordinamento predefinito. Viene usato per specificare una sequenza controllata iniziale vuota con il predicato di ordinamento predefinito.

Il costruttore:

`priority_queue(priority_queue<Value, Container>% right);`

Crea un contenitore di cui è stato eseguito il wrapper che è una copia di `right.get_container()` , con il predicato di ordinamento `right.value_comp()` Viene usato per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto Queue a *destra*, con lo stesso predicato di ordinamento.

Il costruttore:

`priority_queue(priority_queue<Value, Container>^ right);`

Crea un contenitore di cui è stato eseguito il wrapper che è una copia di `right->get_container()` , con il predicato di ordinamento `right->value_comp()` Viene usato per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto Queue `*right` , con lo stesso predicato di ordinamento.

Il costruttore:

`explicit priority_queue(value_compare^ pred);`

Crea un contenitore di cui è stato eseguito il wrapper vuoto con il *predicato*di ordinamento. Viene usato per specificare una sequenza controllata iniziale vuota, con il predicato di ordinamento specificato.

Il costruttore:

`priority_queue(value_compare^ pred, container_type cont);`

Crea un contenitore di cui è stato eseguito il wrapper vuoto con il predicato di ordinamento, quindi effettua il push di tutti gli elementi di *cont* usato per specificare una sequenza controllata iniziale da un contenitore esistente, con il *predicato*di ordinamento specificato.

Il costruttore:

`template<typename InIt> priority_queue(InIt first, InIt last);`

Crea un contenitore di cui è stato eseguito il wrapper vuoto, con il predicato di ordinamento predefinito, quindi inserisce la sequenza [ `first` , `last` ). Viene usato per specificare una sequenza controllata iniziale da un eqeuence specificato, con il predicato di ordinamento specificato.

Il costruttore:

`template<typename InIt> priority_queue(InIt first, InIt last, value_compare^ pred);`

Crea un contenitore di cui è stato eseguito il wrapper *vuoto, con il predicato*di ordinamento, quindi inserisce la sequenza [ `first` , `last` ). Viene usato per specificare una sequenza controllata iniziale da un seqeuence specificato, con il predicato di ordinamento specificato.

Il costruttore:

`template<typename InIt> priority_queue(InIt first, InIt last, value_compare^ pred, container_type% cont);`

Crea un contenitore di cui è stato eseguito il wrapper vuoto con il *predicato di ordinamento*, quindi inserisce tutti gli elementi di *cont* più la sequenza [ `first` , `last` ). Viene usato per specificare una sequenza controllata iniziale da un contenitore esistente e un seqeuence specificato, con il predicato di ordinamento specificato.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_construct.cpp
// compile with: /clr
#include <cliext/queue>
#include <cliext/deque>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
typedef cliext::deque<wchar_t> Mydeque;
int main()
    {
// construct an empty container
    Mypriority_queue c1;
    Mypriority_queue::container_type^ wc1 = c1.get_container();
    System::Console::WriteLine("size() = {0}", c1.size());

    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');
    for each (wchar_t elem in wc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct with an ordering rule
    Mypriority_queue c2 = cliext::greater<wchar_t>();
    System::Console::WriteLine("size() = {0}", c2.size());

    for each (wchar_t elem in wc1)
        c2.push(elem);
    for each (wchar_t elem in c2.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct with an ordering rule by copying an underlying container
    Mypriority_queue c2x =
        gcnew Mypriority_queue(cliext::greater<wchar_t>(), *wc1);
   for each (wchar_t elem in c2x.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct with an iterator range
    Mypriority_queue c3(wc1->begin(), wc1->end());
    for each (wchar_t elem in c3.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct with an iterator range and an ordering rule
    Mypriority_queue c4(wc1->begin(), wc1->end(),
        cliext::greater<wchar_t>());
    for each (wchar_t elem in c4.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct with an iterator range, another container, and an ordering rule
    Mypriority_queue c5(wc1->begin(), wc1->end(),
        cliext::greater<wchar_t>(), *wc1);
    for each (wchar_t elem in c5.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct from a generic container
    Mypriority_queue c6(c3);
    for each (wchar_t elem in c6.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct by copying another container
    Mypriority_queue c7(%c3);
    for each (wchar_t elem in c7.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // construct with an ordering rule, by copying an underlying container
    Mypriority_queue c8 =
        gcnew Mypriority_queue(cliext::greater<wchar_t>(), *wc1);
    for each (wchar_t elem in c8.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    return (0);
    }
```

```Output
size() = 0
c a b
size() = 0
a c b
a c b
c a b
a c b
a a b c c b
c a b
c a b
a c b
```

## <a name="priority_queuepush-stlclr"></a><a name="push"></a>priority_queue::p USH (STL/CLR)

Aggiunge un nuovo elemento.

### <a name="syntax"></a>Sintassi

```cpp
void push(value_type val);
```

### <a name="remarks"></a>Osservazioni

La funzione membro inserisce un elemento con un valore `val` nella sequenza controllata e riordina la sequenza controllata per mantenere la disciplina dell'heap. Viene usato per aggiungere un altro elemento alla coda.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_push.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
```

## <a name="priority_queuereference-stlclr"></a><a name="reference"></a>priority_queue:: Reference (STL/CLR)

Tipo di un riferimento a un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef value_type% reference;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un riferimento a un elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_reference.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // modify top of priority_queue and redisplay
    Mypriority_queue::reference ref = c1.top();
    ref = L'x';
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
x a b
```

## <a name="priority_queuesize-stlclr"></a><a name="size"></a>priority_queue:: size (STL/CLR)

Conta il numero di elementi.

### <a name="syntax"></a>Sintassi

```cpp
size_type size();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce la lunghezza della sequenza controllata. Viene usato per determinare il numero di elementi attualmente presenti nella sequenza controllata. Se è sufficiente che la sequenza abbia dimensioni diversi da zero, vedere [priority_queue:: Empty (STL/CLR)](../dotnet/priority-queue-empty-stl-clr.md) `()` .

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_size.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    System::Console::WriteLine("size() = {0} starting with 3", c1.size());

    // pop an item and reinspect
    c1.pop();
    System::Console::WriteLine("size() = {0} after popping", c1.size());

    // add two elements and reinspect
    c1.push(L'a');
    c1.push(L'b');
    System::Console::WriteLine("size() = {0} after adding 2", c1.size());
    return (0);
    }
```

```Output
c a b
size() = 3 starting with 3
size() = 2 after popping
size() = 4 after adding 2
```

## <a name="priority_queuesize_type-stlclr"></a><a name="size_type"></a>priority_queue:: size_type (STL/CLR)

Tipo di una distanza con segno tra due elementi.

### <a name="syntax"></a>Sintassi

```cpp
typedef int size_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un conteggio di elementi non negativi.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_size_type.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // compute positive difference
    Mypriority_queue::size_type diff = c1.size();
    c1.pop();
    c1.pop();
    diff -= c1.size();
    System::Console::WriteLine("size difference = {0}", diff);
    return (0);
    }
```

```Output
c a b
size difference = 2
```

## <a name="priority_queueto_array-stlclr"></a><a name="to_array"></a>priority_queue:: to_array (STL/CLR)

Copia la sequenza controllata in una nuova matrice.

### <a name="syntax"></a>Sintassi

```cpp
cli::array<Value>^ to_array();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce una matrice che contiene la sequenza controllata. Viene usato per ottenere una copia della sequenza controllata in forma di matrice.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_to_array.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // copy the container and modify it
    cli::array<wchar_t>^ a1 = c1.to_array();

    c1.push(L'd');
    for each (wchar_t elem in c1.get_container())
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
d c b a
c a b
```

## <a name="priority_queuetop-stlclr"></a><a name="top"></a>priority_queue:: Top (STL/CLR)

Accede all'elemento con priorità più alta.

### <a name="syntax"></a>Sintassi

```cpp
reference top();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un riferimento all'elemento top (priorità più alta) della sequenza controllata, che non deve essere vuoto. Viene usato per accedere all'elemento con priorità più alta, quando si è certi che esista.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_top.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // inspect last item
    System::Console::WriteLine("top() = {0}", c1.top());

    // alter last item and reinspect
    c1.top() = L'x';
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

## <a name="priority_queuetop_item-stlclr"></a><a name="top_item"></a>priority_queue:: top_item (STL/CLR)

Accede all'elemento con priorità più alta.

### <a name="syntax"></a>Sintassi

```cpp
property value_type back_item;
```

### <a name="remarks"></a>Osservazioni

La proprietà accede all'elemento superiore (priorità più alta) della sequenza controllata, che non deve essere vuota. Viene utilizzato per leggere o scrivere l'elemento con priorità più alta, quando si è certi che esista.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_top_item.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

    // inspect last item
    System::Console::WriteLine("top_item = {0}", c1.top_item);

    // alter last item and reinspect
    c1.top_item = L'x';
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c a b
top_item = c
x a b
```

## <a name="priority_queuevalue_comp-stlclr"></a><a name="value_comp"></a>priority_queue:: value_comp (STL/CLR)

Copia il delegato di ordinamento per due elementi.

### <a name="syntax"></a>Sintassi

```cpp
value_compare^ value_comp();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce il delegato di ordinamento utilizzato per ordinare la sequenza controllata. Viene utilizzato per confrontare due valori.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_value_comp.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    Mypriority_queue::value_compare^ vcomp = c1.value_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        vcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        vcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        vcomp(L'b', L'a'));
    System::Console::WriteLine();

    // test a different ordering rule
    Mypriority_queue c2 = cliext::greater<wchar_t>();
    vcomp = c2.value_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        vcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        vcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        vcomp(L'b', L'a'));
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

## <a name="priority_queuevalue_compare-stlclr"></a><a name="value_compare"></a>priority_queue:: value_compare (STL/CLR)

Delegato di ordinamento per due valori.

### <a name="syntax"></a>Sintassi

```cpp
binary_delegate<value_type, value_type, int> value_compare;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del delegato che determina se il primo argomento è ordinato prima del secondo.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_value_compare.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    Mypriority_queue::value_compare^ vcomp = c1.value_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        vcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        vcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        vcomp(L'b', L'a'));
    System::Console::WriteLine();

    // test a different ordering rule
    Mypriority_queue c2 = cliext::greater<wchar_t>();
    vcomp = c2.value_comp();

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        vcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        vcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        vcomp(L'b', L'a'));
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

## <a name="priority_queuevalue_type-stlclr"></a><a name="value_type"></a>priority_queue:: value_type (STL/CLR)

Tipo di un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef Value value_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del *valore*del parametro di modello.

### <a name="example"></a>Esempio

```cpp
// cliext_priority_queue_value_type.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::priority_queue<wchar_t> Mypriority_queue;
int main()
    {
    Mypriority_queue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

    // display reversed contents " a b c" using value_type
    for (; !c1.empty(); c1.pop())
        {   // store element in value_type object
        Mypriority_queue::value_type val = c1.top();

        System::Console::Write("{0} ", val);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
c b a
```
