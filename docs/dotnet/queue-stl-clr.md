---
title: queue (STL/CLR)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- cliext::queue
- cliext::queue::assign
- cliext::queue::back
- cliext::queue::back_item
- cliext::queue::const_reference
- cliext::queue::container_type
- cliext::queue::difference_type
- cliext::queue::empty
- cliext::queue::front
- cliext::queue::front_item
- cliext::queue::generic_container
- cliext::queue::generic_value
- cliext::queue::get_container
- cliext::queue::operator=
- cliext::queue::pop
- cliext::queue::push
- cliext::queue::queue
- cliext::queue::reference
- cliext::queue::size
- cliext::queue::size_type
- cliext::queue::to_array
- cliext::queue::value_type
helpviewer_keywords:
- <queue> header [STL/CLR]
- queue class [STL/CLR]
- <cliext/queue> header [STL/CLR]
- operator!= member [STL/CLR]
- operator< member [STL/CLR]
- operator<= member [STL/CLR]
- operator== member [STL/CLR]
- operator> member [STL/CLR]
- operator>= member [STL/CLR]
- assign member [STL/CLR]
- back member [STL/CLR]
- back_item member [STL/CLR]
- const_reference member [STL/CLR]
- container_type member [STL/CLR]
- difference_type member [STL/CLR]
- empty member [STL/CLR]
- front member [STL/CLR]
- front_item member [STL/CLR]
- generic_container member [STL/CLR]
- generic_value member [STL/CLR]
- get_container member [STL/CLR]
- operator= member [STL/CLR]
- pop member [STL/CLR]
- push member [STL/CLR]
- queue member [STL/CLR]
- reference member [STL/CLR]
- size member [STL/CLR]
- size_type member [STL/CLR]
- to_array member [STL/CLR]
- value_type member [STL/CLR]
ms.assetid: 9ea7dec3-ea98-48ff-87d0-a5afc924aaf2
ms.openlocfilehash: 2d5c1d30704838cdb69516d68d328c90a094a08e
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91502383"
---
# <a name="queue-stlclr"></a>queue (STL/CLR)

La classe modello descrive un oggetto che controlla una sequenza di lunghezza variabile di elementi che hanno un accesso First-in First-out. L'adapter contenitore viene utilizzato `queue` per gestire un contenitore sottostante come coda.

Nella descrizione seguente corrisponde a `GValue` *value* , a meno che quest'ultimo non sia un tipo di riferimento, nel qual caso è `Value^` . Analogamente, `GContainer` è uguale al *contenitore* a meno che quest'ultimo non sia un tipo di riferimento, nel qual caso è `Container^` .

## <a name="syntax"></a>Sintassi

```cpp
template<typename Value,
    typename Container>
    ref class queue
        :   public
        System::ICloneable,
        Microsoft::VisualC::StlClr::IQueue<GValue, GContainer>
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
|[queue::const_reference (STL/CLR)](#const_reference)|Tipo di un riferimento costante a un elemento.|
|[queue::container_type (STL/CLR)](#container_type)|Tipo del contenitore sottostante.|
|[queue::difference_type (STL/CLR)](#difference_type)|Tipo di una distanza Signed tra due elementi.|
|[queue::generic_container (STL/CLR)](#generic_container)|Tipo dell'interfaccia generica per l'adattatore del contenitore.|
|[queue::generic_value (STL/CLR)](#generic_value)|Tipo di un elemento per l'interfaccia generica per l'adattatore del contenitore.|
|[queue::reference (STL/CLR)](#reference)|Tipo di un riferimento a un elemento.|
|[queue::size_type (STL/CLR)](#size_type)|Tipo di una distanza Signed tra due elementi.|
|[queue::value_type (STL/CLR)](#value_type)|Tipo di un elemento.|

|Funzione membro|Descrizione|
|---------------------|-----------------|
|[queue::assign (STL/CLR)](#assign)|Sostituisce tutti gli elementi.|
|[queue::back (STL/CLR)](#back)|Accede all'ultimo elemento.|
|[queue::empty (STL/CLR)](#empty)|Verifica se sono presenti o meno degli elementi.|
|[queue::front (STL/CLR)](#front)|Accede al primo elemento.|
|[queue::get_container (STL/CLR)](#get_container)|Accede al contenitore sottostante.|
|[queue::pop (STL/CLR)](#pop)|Rimuove il primo elemento.|
|[queue::push (STL/CLR)](#push)|Aggiunge un nuovo elemento ultimo.|
|[queue::queue (STL/CLR)](#queue)|Costruisce un oggetto contenitore.|
|[queue::size (STL/CLR)](#size)|Conta il numero di elementi.|
|[queue::to_array (STL/CLR)](#to_array)|Copia la sequenza controllata in una nuova matrice.|

|Proprietà|Descrizione|
|--------------|-----------------|
|[queue::back_item (STL/CLR)](#back_item)|Accede all'ultimo elemento.|
|[queue::front_item (STL/CLR)](#front_item)|Accede al primo elemento.|

|Operatore|Descrizione|
|--------------|-----------------|
|[queue::operator= (STL/CLR)](#op_as)|Sostituisce la sequenza controllata.|
|[operatore! = (coda) (STL/CLR)](#op_neq)|Determina se un `queue` oggetto non è uguale a un altro `queue` oggetto.|
|[operatore< (Queue) (STL/CLR)](#op_lt)|Determina se un `queue` oggetto è minore di un altro `queue` oggetto.|
|[operatore<= (coda) (STL/CLR)](#op_lteq)|Determina se un `queue` oggetto è minore o uguale a un altro `queue` oggetto.|
|[operatore = = (coda) (STL/CLR)](#op_eq)|Determina se un `queue` oggetto è uguale a un altro `queue` oggetto.|
|[operatore> (Queue) (STL/CLR)](#op_gt)|Determina se un `queue` oggetto è maggiore di un altro `queue` oggetto.|
|[operator>= (queue) (STL/CLR)](#op_gteq)|Determina se un `queue` oggetto è maggiore o uguale a un altro `queue` oggetto.|

## <a name="interfaces"></a>Interfacce

|Interfaccia|Descrizione|
|---------------|-----------------|
|<xref:System.ICloneable>|Duplicare un oggetto.|
|IQueue\<Value, Container>|Gestire un adapter contenitore generico.|

## <a name="remarks"></a>Osservazioni

L'oggetto alloca e libera la memoria per la sequenza che controlla tramite un contenitore sottostante, di tipo `Container` , che archivia `Value` gli elementi e cresce su richiesta. L'oggetto limita l'accesso al solo push del primo elemento e l'ultimo elemento, implementando una coda First-in First-out (nota anche come coda FIFO o semplicemente una coda).

## <a name="members"></a>Membri

## <a name="queueassign-stlclr"></a><a name="assign"></a> Queue:: Assign (STL/CLR)

Sostituisce tutti gli elementi.

### <a name="syntax"></a>Sintassi

```cpp
void assign(queue<Value, Container>% right);
```

#### <a name="parameters"></a>Parametri

*Ok*<br/>
Adattatore contenitore da inserire.

### <a name="remarks"></a>Osservazioni

La funzione membro assegna `right.get_container()` al contenitore sottostante. Viene usato per modificare l'intero contenuto della coda.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_assign.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign a repetition of values
    Myqueue c2;
    c2.assign(c1);
    for each (wchar_t elem in c2.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b c
```

## <a name="queueback-stlclr"></a><a name="back"></a> Queue:: Back (STL/CLR)

Accede all'ultimo elemento.

### <a name="syntax"></a>Sintassi

```cpp
reference back();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un riferimento all'ultimo elemento della sequenza controllata, che non deve essere vuoto. Viene usato per accedere all'ultimo elemento, quando si è certi che esista.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_back.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect last item
    System::Console::WriteLine("back() = {0}", c1.back());

// alter last item and reinspect
    c1.back() = L'x';
    for each (wchar_t elem in c1.get_container())
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

## <a name="queueback_item-stlclr"></a><a name="back_item"></a> Queue:: back_item (STL/CLR)

Accede all'ultimo elemento.

### <a name="syntax"></a>Sintassi

```cpp
property value_type back_item;
```

### <a name="remarks"></a>Osservazioni

La proprietà accede all'ultimo elemento della sequenza controllata, che non deve essere vuota. Viene utilizzato per leggere o scrivere l'ultimo elemento, quando si è certi che esista.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_back_item.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect last item
    System::Console::WriteLine("back_item = {0}", c1.back_item);

// alter last item and reinspect
    c1.back_item = L'x';
    for each (wchar_t elem in c1.get_container())
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

## <a name="queueconst_reference-stlclr"></a><a name="const_reference"></a> Queue:: const_reference (STL/CLR)

Tipo di un riferimento costante a un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef value_type% const_reference;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un riferimento costante a un elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_const_reference.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for (; !c1.empty(); c1.pop())
        {   // get a const reference to an element
        Myqueue::const_reference cref = c1.front();
        System::Console::Write("{0} ", cref);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="queuecontainer_type-stlclr"></a><a name="container_type"></a> Queue:: container_type (STL/CLR)

Tipo del contenitore sottostante.

### <a name="syntax"></a>Sintassi

```cpp
typedef Container value_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello `Container`.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_container_type.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c" using container_type
    Myqueue::container_type wc1 = c1.get_container();
    for each (wchar_t elem in wc1)
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="queuedifference_type-stlclr"></a><a name="difference_type"></a> Queue::d ifference_type (STL/CLR)

Tipi di una distanza con segno tra due elementi.

### <a name="syntax"></a>Sintassi

```cpp
typedef int difference_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un conteggio di elementi probabilmente negativo.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_difference_type.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// compute negative difference
    Myqueue::difference_type diff = c1.size();
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
a b c
pushing 2 = -2
popping 3 = 3
```

## <a name="queueempty-stlclr"></a><a name="empty"></a> Queue:: Empty (STL/CLR)

Verifica se sono presenti o meno degli elementi.

### <a name="syntax"></a>Sintassi

```cpp
bool empty();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce true per una sequenza controllata vuota. Equivale a [queue:: size (STL/CLR)](#size) `() == 0` . Viene utilizzato per verificare se la coda è vuota.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_empty.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
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
a b c
size() = 3
empty() = False
size() = 0
empty() = True
```

## <a name="queuefront-stlclr"></a><a name="front"></a> Queue:: Front (STL/CLR)

Accede al primo elemento.

### <a name="syntax"></a>Sintassi

```cpp
reference front();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un riferimento al primo elemento della sequenza controllata, che non deve essere vuoto. Viene usato per accedere al primo elemento, quando si è certi che esista.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_front.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect first item
    System::Console::WriteLine("front() = {0}", c1.front());

// alter first item and reinspect
    c1.front() = L'x';
    for each (wchar_t elem in c1.get_container())
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

## <a name="queuefront_item-stlclr"></a><a name="front_item"></a> Queue:: front_item (STL/CLR)

Accede al primo elemento.

### <a name="syntax"></a>Sintassi

```cpp
property value_type front_item;
```

### <a name="remarks"></a>Osservazioni

La proprietà accede al primo elemento della sequenza controllata, che non deve essere vuota. Viene utilizzato per leggere o scrivere il primo elemento, quando si è certi che esista.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_front_item.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// inspect last item
    System::Console::WriteLine("front_item = {0}", c1.front_item);

// alter last item and reinspect
    c1.front_item = L'x';
    for each (wchar_t elem in c1.get_container())
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

## <a name="queuegeneric_container-stlclr"></a><a name="generic_container"></a> Queue:: generic_container (STL/CLR)

Tipo dell'interfaccia generica per l'adattatore del contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef Microsoft::VisualC::StlClr::IQueue<Value>
    generic_container;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive l'interfaccia generica per questa classe dell'adattatore del contenitore del modello.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_generic_container.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct a generic container
    Myqueue::generic_container^ gc1 = %c1;
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
a b c
a b c
a b c d
a b c d e
```

## <a name="queuegeneric_value-stlclr"></a><a name="generic_value"></a> Queue:: generic_value (STL/CLR)

Tipo di un elemento da utilizzare con l'interfaccia generica per il contenitore.

### <a name="syntax"></a>Sintassi

```cpp
typedef GValue generic_value;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto di tipo `GValue` che descrive il valore dell'elemento archiviato da usare con l'interfaccia generica per questa classe del contenitore del modello. ( `GValue` è `value_type` o `value_type^` se `value_type` è un tipo di riferimento).

### <a name="example"></a>Esempio

```cpp
// cliext_queue_generic_value.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// get interface to container
    Myqueue::generic_container^ gc1 = %c1;
    for each (wchar_t elem in gc1->get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// display in order using generic_value
    for (; !gc1->empty(); gc1->pop())
        {
        Myqueue::generic_value elem = gc1->front();

        System::Console::Write("{0} ", elem);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b c
a b c
```

## <a name="queueget_container-stlclr"></a><a name="get_container"></a> Queue:: get_container (STL/CLR)

Accede al contenitore sottostante.

### <a name="syntax"></a>Sintassi

```cpp
container_type^ get_container();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce il contenitore sottostante. Viene utilizzato per ignorare le restrizioni imposte dal wrapper del contenitore.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_get_container.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
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
a b c
```

## <a name="queueoperator-stlclr"></a><a name="op_as"></a> Queue:: operator = (STL/CLR)

Sostituisce la sequenza controllata.

### <a name="syntax"></a>Sintassi

```cpp
queue <Value, Container>% operator=(queue <Value, Container>% right);
```

#### <a name="parameters"></a>Parametri

*Ok*<br/>
Adattatore contenitore da copiare.

### <a name="remarks"></a>Osservazioni

L'operatore membro copia *right* nell'oggetto, quindi restituisce **`*this`** . Viene usato per sostituire la sequenza controllata con una copia della sequenza controllata a *destra*.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_operator_as.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myqueue c2;
    c2 = c1;
    for each (wchar_t elem in c2.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b c
```

## <a name="queuepop-stlclr"></a><a name="pop"></a> Queue::p op (STL/CLR)

Rimuove l'ultimo elemento.

### <a name="syntax"></a>Sintassi

```cpp
void pop();
```

### <a name="remarks"></a>Osservazioni

La funzione membro rimuove l'ultimo elemento della sequenza controllata, che non deve essere vuoto. Viene utilizzato per abbreviare la coda di un elemento nella parte posteriore.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_pop.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
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
a b c
b c
```

## <a name="queuepush-stlclr"></a><a name="push"></a> coda::p USH (STL/CLR)

Aggiunge un nuovo elemento ultimo.

### <a name="syntax"></a>Sintassi

```cpp
void push(value_type val);
```

### <a name="remarks"></a>Osservazioni

La funzione membro aggiunge un elemento con il valore `val` alla fine della coda. Viene usato per aggiungere un elemento alla coda.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_push.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
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
a b c
```

## <a name="queuequeue-stlclr"></a><a name="queue"></a> Queue:: Queue (STL/CLR)

Costruisce un oggetto adattatore del contenitore.

### <a name="syntax"></a>Sintassi

```cpp
queue();
queue(queue<Value, Container>% right);
queue(queue<Value, Container>^ right);
explicit queue(container_type% wrapped);
```

#### <a name="parameters"></a>Parametri

*Ok*<br/>
Oggetto da copiare.

*eseguito il wrapping*<br/>
Contenitore di cui è stato eseguito il wrapper da usare.

### <a name="remarks"></a>Osservazioni

Il costruttore:

`queue();`

Crea un contenitore di cui è stato eseguito il wrapper vuoto. Viene usato per specificare una sequenza controllata iniziale vuota.

Il costruttore:

`queue(queue<Value, Container>% right);`

Crea un contenitore di cui è stato eseguito il wrapper che è una copia di `right.get_container()` . Viene usato per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto Queue *right*.

Il costruttore:

`queue(queue<Value, Container>^ right);`

Crea un contenitore di cui è stato eseguito il wrapper che è una copia di `right->get_container()` . Viene usato per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto Queue `*right` .

Il costruttore:

`explicit queue(container_type wrapped);`

Usa il contenitore esistente *incluso* nel contenitore di cui è stato eseguito il wrapper. Viene usato per costruire una coda da un contenitore esistente.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_construct.cpp
// compile with: /clr
#include <cliext/queue>
#include <cliext/list>

typedef cliext::queue<wchar_t> Myqueue;
typedef cliext::list<wchar_t> Mylist;
typedef cliext::queue<wchar_t, Mylist> Myqueue_list;
int main()
    {
// construct an empty container
    Myqueue c1;
    System::Console::WriteLine("size() = {0}", c1.size());

// construct from an underlying container
    Mylist v2(5, L'x');
    Myqueue_list c2(v2);
    for each (wchar_t elem in c2.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct by copying another container
    Myqueue_list c3(c2);
    for each (wchar_t elem in c3.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// construct by copying another container through handle
    Myqueue_list c4(%c2);
    for each (wchar_t elem in c4.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
size() = 0
x x x x x
x x x x x
x x x x x
```

## <a name="queuereference-stlclr"></a><a name="reference"></a> Queue:: Reference (STL/CLR)

Tipo di un riferimento a un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef value_type% reference;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un riferimento a un elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_reference.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// modify back of queue and redisplay
    Myqueue::reference ref = c1.back();
    ref = L'x';
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
a b x
```

## <a name="queuesize-stlclr"></a><a name="size"></a> Queue:: size (STL/CLR)

Conta il numero di elementi.

### <a name="syntax"></a>Sintassi

```cpp
size_type size();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce la lunghezza della sequenza controllata. Viene usato per determinare il numero di elementi attualmente presenti nella sequenza controllata. Se è sufficiente che la sequenza abbia dimensioni diversi da zero, vedere [queue:: Empty (STL/CLR)](#empty) `()` .

### <a name="example"></a>Esempio

```cpp
// cliext_queue_size.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
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
a b c
size() = 3 starting with 3
size() = 2 after popping
size() = 4 after adding 2
```

## <a name="queuesize_type-stlclr"></a><a name="size_type"></a> Queue:: size_type (STL/CLR)

Tipo di una distanza con segno tra due elementi.

### <a name="syntax"></a>Sintassi

```cpp
typedef int size_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un conteggio di elementi non negativi.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_size_type.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display initial contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// compute positive difference
    Myqueue::size_type diff = c1.size();
    c1.pop();
    c1.pop();
    diff -= c1.size();
    System::Console::WriteLine("size difference = {0}", diff);
    return (0);
    }
```

```Output
a b c
size difference = 2
```

## <a name="queueto_array-stlclr"></a><a name="to_array"></a> Queue:: to_array (STL/CLR)

Copia la sequenza controllata in una nuova matrice.

### <a name="syntax"></a>Sintassi

```cpp
cli::array<Value>^ to_array();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce una matrice che contiene la sequenza controllata. Viene usato per ottenere una copia della sequenza controllata in forma di matrice.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_to_array.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
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
a b c d
a b c
```

## <a name="queuevalue_type-stlclr"></a><a name="value_type"></a> Queue:: value_type (STL/CLR)

Tipo di un elemento.

### <a name="syntax"></a>Sintassi

```cpp
typedef Value value_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del *valore*del parametro di modello.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_value_type.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display reversed contents " a b c" using value_type
    for (; !c1.empty(); c1.pop())
        {   // store element in value_type object
        Myqueue::value_type val = c1.front();

        System::Console::Write("{0} ", val);
        }
    System::Console::WriteLine();
    return (0);
    }
```

```Output
a b c
```

## <a name="operator-queue-stlclr"></a><a name="op_neq"></a> operatore! = (coda) (STL/CLR)

Confronto coda non uguale.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value,
    typename Container>
    bool operator!=(queue<Value, Container>% left,
        queue<Value, Container>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione operator restituisce `!(left == right)` . Viene usato per verificare se *Left* non è ordinato come *right* quando le due code vengono confrontate elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_operator_ne.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myqueue c2;
    c2.push(L'a');
    c2.push(L'b');
    c2.push(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2.get_container())
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

## <a name="operatorlt-queue-stlclr"></a><a name="op_lt"></a> operatore &lt; (Queue) (STL/CLR)

Coda inferiore al confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value,
    typename Container>
    bool operator<(queue<Value, Container>% left,
        queue<Value, Container>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione operator restituisce true se, per la posizione più bassa `i` per la quale `!(right[i] < left[i])` è anche true `left[i] < right[i]` . In caso contrario, restituisce `left->` [queue:: size (STL/CLR)](#size) `() <` `right->size()` che viene usato per verificare se *Left* viene ordinato prima del *diritto* quando le due code vengono confrontate elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_operator_lt.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myqueue c2;
    c2.push(L'a');
    c2.push(L'b');
    c2.push(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2.get_container())
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

## <a name="operatorlt-queue-stlclr"></a><a name="op_lteq"></a> operatore &lt; = (coda) (STL/CLR)

Coda di confronto minore o uguale a.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value,
    typename Container>
    bool operator<=(queue<Value, Container>% left,
        queue<Value, Container>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione operator restituisce `!(right < left)` . Viene usato per verificare se *Left* non è ordinato dopo *right* quando le due code vengono confrontate elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_operator_le.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myqueue c2;
    c2.push(L'a');
    c2.push(L'b');
    c2.push(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2.get_container())
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

## <a name="operator-queue-stlclr"></a><a name="op_eq"></a> operatore = = (coda) (STL/CLR)

Confronto di uguaglianza della coda.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value,
    typename Container>
    bool operator==(queue<Value, Container>% left,
        queue<Value, Container>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione operator restituisce true solo se le sequenze controllate da *Left* e *right* hanno la stessa lunghezza e, per ogni posizione `i` , `left[i] ==` `right[i]` . Viene usato per verificare se *Left* è ordinato come *right* quando le due code vengono confrontate elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_operator_eq.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myqueue c2;
    c2.push(L'a');
    c2.push(L'b');
    c2.push(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2.get_container())
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

## <a name="operatorgt-queue-stlclr"></a><a name="op_gt"></a> operatore &gt; (Queue) (STL/CLR)

Coda maggiore di confronto.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value,
    typename Container>
    bool operator>(queue<Value, Container>% left,
        queue<Value, Container>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione operator restituisce `right` `<` `left` . Viene usato per verificare se *Left* viene ordinato dopo *right* quando le due code vengono confrontate elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_operator_gt.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myqueue c2;
    c2.push(L'a');
    c2.push(L'b');
    c2.push(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2.get_container())
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

## <a name="operatorgt-queue-stlclr"></a><a name="op_gteq"></a> operatore &gt; = (coda) (STL/CLR)

Coda di confronto maggiore o uguale a.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Value,
    typename Container>
    bool operator>=(queue<Value, Container>% left,
        queue<Value, Container>% right);
```

#### <a name="parameters"></a>Parametri

*sinistra*<br/>
Contenitore sinistro da confrontare.

*Ok*<br/>
Contenitore destro da confrontare.

### <a name="remarks"></a>Osservazioni

La funzione operator restituisce `!(left < right)` . Viene usato per verificare se *Left* non è ordinato prima del *diritto* quando le due code vengono confrontate elemento per elemento.

### <a name="example"></a>Esempio

```cpp
// cliext_queue_operator_ge.cpp
// compile with: /clr
#include <cliext/queue>

typedef cliext::queue<wchar_t> Myqueue;
int main()
    {
    Myqueue c1;
    c1.push(L'a');
    c1.push(L'b');
    c1.push(L'c');

// display contents " a b c"
    for each (wchar_t elem in c1.get_container())
        System::Console::Write("{0} ", elem);
    System::Console::WriteLine();

// assign to a new container
    Myqueue c2;
    c2.push(L'a');
    c2.push(L'b');
    c2.push(L'd');

// display contents " a b d"
    for each (wchar_t elem in c2.get_container())
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
