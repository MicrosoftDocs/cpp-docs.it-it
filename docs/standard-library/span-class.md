---
title: classe Span (libreria standard C++) | Microsoft Docs
ms.date: 05/28/2020
f1_keywords:
- span/std::span
- span/std::span::const_pointer
- span/std::span::const_reference
- span/std::span::difference_type
- span/std::span::element_type
- span/std::span::iterator
- span/std::span::pointer
- span/std::span::reference
- span/std::span::reverse_iterator
- span/std::span::size_type
- span/std::span::value_type
- span/std::span::at
- span/std::span::assign
- span/std::span::back
- span/std::span::begin
- span/std::span::data
- span/std::span::empty
- span/std::span::end
- span/std::span::front
- span/std::span::rbegin
- span/std::span::rend
- span/std::span::size
- span/std::span::size_bytes
- span/std::span::operator=
- span/std::span::operator[]
helpviewer_keywords:
- std::span [C++]
- std::span [C++], const_pointer
- std::span [C++], const_reference
- std::span [C++], difference_type
- std::span [C++], element_type
- std::span [C++], iterator
- std::span [C++], pointer
- std::span [C++], reference
- std::span [C++], reverse_iterator
- std::span [C++], size_type
- std::span [C++], value_type
- std::span [C++], assign
- std::span [C++], at
- std::span [C++], back
- std::span [C++], begin
- std::span [C++], data
- std::span [C++], empty
- std::span [C++], end
- std::span [C++], front
- std::span [C++], rbegin
- std::span [C++], rend
- std::span [C++], size
- std::span [C++], size_bytes
ms.openlocfilehash: 86ef4afcb5e6e7a9d244a8c2f2126bec7e1ace75
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87217454"
---
# <a name="span-class-c-standard-library"></a>classe Span (libreria standard C++)

Fornisce una visualizzazione semplificata di una sequenza di oggetti contigua. Un span fornisce un modo sicuro per eseguire un'iterazione e indicizzare gli oggetti che vengono disposti back-to-back in memoria, ad esempio gli oggetti archiviati in una matrice incorporata, `std::array` o `std::vector` .

Se in genere si accede a una sequenza di oggetti back-to-back utilizzando un puntatore e un indice, un `span` è un'alternativa più sicura e semplice.

Per impostare la dimensione di un oggetto in fase di `span` compilazione, è possibile specificarla come argomento di modello o in fase di esecuzione specificando `dynamic_extent` .

## <a name="syntax"></a>Sintassi

```cpp
template<class T, size_t Extent = dynamic_extent>
class span;
```

### <a name="template-parameters"></a>Parametri del modello

|Parametro|Descrizione|
|-|-|
|`T`| Tipo degli elementi nell'intervallo. |
|`Extent`| Numero di elementi nell'intervallo se specificato in fase di compilazione. In caso contrario `std::dynamic_extent` , se il numero di elementi verrà specificato in fase di esecuzione. |

[Guida alla deduzione](#deduction_guides)

## <a name="members"></a>Membri

| **Definizioni dei tipi** | **Descrizione** |
|-|-|
| [const_pointer](#pointer) | Tipo di un puntatore a un **`const`** elemento. |
| [const_reference](#reference) | Tipo di un riferimento a un **`const`** elemento. |
| [difference_type](#difference_type) | Tipo di una distanza Signed tra due elementi. |
| [element_type](#element_type) | Tipo di un elemento span. |
| [iteratore](#iterator) | Tipo di un iteratore per un intervallo. |
| [puntatore](#pointer) | Tipo di un puntatore a un elemento. |
| [reference](#reference) | Tipo di un riferimento a un elemento. |
| [reverse_iterator](#reverse_iterator) | Tipo di un iteratore inverso per un intervallo. |
| [size_type](#size_type) | Tipo per il risultato della distanza senza segno tra due elementi nell'intervallo. |
| [value_type](#value_type) | Tipo di un elemento, senza **`const`** qualifiche o **`volatile`** . |
| **Costruttori** | **Descrizione** |
|[intervallo](#span)| Creare un oggetto `span`.|
| **Supporto degli iteratori** | **Descrizione** |
|[iniziare](#begin) | Ottiene un iteratore che punta al primo elemento nell'intervallo.|
|[fine](#end) | Ottiene un iteratore che punta alla fine dell'intervallo. |
|[rbegin](#rbegin) | Ottiene un iteratore inverso che punta all'ultimo elemento dell'intervallo; ovvero l'inizio dell'intervallo invertito.|
|[rend](#rend) | Ottiene un iteratore inverso che punta all'inizio dell'intervallo; ovvero la fine dell'intervallo invertito.|
| **Elementi di accesso**| **Descrizione** |
|[Indietro](#back) | Ottiene l'ultimo elemento nell'intervallo.|
|[data](#data) | Ottiene l'indirizzo del primo elemento nell'intervallo.|
|[fronte](#front) | Ottiene il primo elemento nell'intervallo.|
|[operatore\[\]](#op_at) | Accede a un elemento in una posizione specificata.|
| **Osservatori** | **Descrizione** |
|[empty](#empty)| Verificare se l'estensione è vuota.|
|[size](#size) | Ottiene il numero di elementi nell'intervallo.|
|[size_bytes](#size_bytes) | Ottiene le dimensioni dell'intervallo in byte.|
| **Visualizzazioni secondarie** | **Descrizione**|
| [first](#first_view) | Ottiene un subspan dall'inizio dell'intervallo.|
| [last](#last_view) | Ottiene un subspan dal retro dell'intervallo.|
| [sottospan](#sub_view) | Ottenere un subspan da qualsiasi punto dell'intervallo.|
| **Operatori** | **Descrizione** |
|[span:: operator =](#op_eq)| Sostituire l'intervallo.|
|[operatore span::\[\]](#op_at)| Ottiene l'elemento in corrispondenza della posizione specificata. |

## <a name="remarks"></a>Osservazioni

Tutte le `span` funzioni membro hanno una complessità temporale costante.

A differenza `array` `vector` di o, un span non "possiede" gli elementi al suo interno. Un intervallo non libera alcuna risorsa di archiviazione per gli elementi al suo interno perché non è il proprietario dello spazio di archiviazione per tali oggetti.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<span>

**Spazio dei nomi:** std

**Opzione del compilatore:** /std: c + + Latest più recente

## <a name="spanback"></a><a name="back"></a> `span::back`

Ottiene l'ultimo elemento nell'intervallo.

```cpp
constexpr reference back() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Riferimento all'ultimo elemento nell'intervallo.

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    cout << mySpan.back();
}
```

```Output
2
```

## <a name="spanbegin"></a><a name="begin"></a> `span::begin`

Ottiene un iteratore che punta al primo elemento nell'intervallo.

```cpp
constexpr iterator begin() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Iteratore che punta al primo elemento nell'intervallo.

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    auto i = mySpan.begin();
    cout << *i;
}
```

```Output
0
```

## <a name="spandata"></a><a name="data"></a> `span::data`

Ottiene un puntatore all'inizio dei dati dell'intervallo.

```cpp
constexpr pointer data() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Puntatore al primo elemento archiviato nell'intervallo.

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);
    auto i = mySpan.data();
    cout << *i;
}
```

```Output
0
```

## <a name="spandifference_type"></a><a name="difference_type"></a> `span::difference_type`

Numero di elementi tra due elementi in un intervallo.

```cpp
using difference_type = std::ptrdiff_t;
```

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    span<int>::difference_type distance = mySpan.end() - mySpan.begin();
    cout << distance << std::endl;
}
```

```Output
3
```

## <a name="spanelement_type"></a><a name="element_type"></a> `span::element_type`

Tipo degli elementi nell'intervallo.

```cpp
using element_type = T;
```

### <a name="remarks"></a>Osservazioni

Il tipo viene tratto dal parametro di modello `T` quando viene creato un intervallo.

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    span<int>::element_type et = mySpan[2];
    cout << et << endl;
}
```

```Output
2
```

## <a name="spanempty"></a><a name="empty"></a> `span::empty`

Indica se l'intervallo contiene elementi.

```cpp
constexpr bool empty() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Restituisce **`true`** se `this->size() == 0` . In caso contrario **`false`** ,.

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);
    bool isEmpty = mySpan.empty(); // isEmpty == false
}
```

## <a name="spanend"></a><a name="end"></a> `span::end`

Ottiene un iteratore alla fine dell'intervallo.

```cpp
constexpr iterator end() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Iteratore che punta appena oltre la fine dell'intervallo.

### <a name="remarks"></a>Osservazioni

`end` viene utilizzato per verificare se un iteratore ha superato la fine del relativo intervallo.

Non dereferenziare il valore restituito da questo iteratore. Usarlo per determinare se l'iteratore ha raggiunto oltre l'ultimo elemento nell'intervallo.

### <a name="example"></a>Esempio

```cpp
// Iteration
for (auto it = s1.begin(); it != s1.end(); ++it)
{
    cout << *it;
}
```

## <a name="spanfirst"></a><a name="first_view"></a> `span::first`

Ottiene un subspan, tratto dall'inizio di questo intervallo.

```cpp
constexpr auto first(size_type count) const noexcept;
template <size_t count> constexpr auto first() const noexcept;
```

### <a name="parameters"></a>Parametri

*conteggio*\
Numero di elementi dall'inizio di questo intervallo da inserire nell'intervallo.  
Il numero di elementi viene specificato come parametro per il modello o per la funzione, come illustrato di seguito.

### <a name="return-value"></a>Valore restituito

Intervallo che contiene `count` gli elementi dall'inizio di questo intervallo.

### <a name="remarks"></a>Osservazioni

Usare la versione modello di questa funzione quando possibile per convalidare in fase di `count` compilazione e mantenere le informazioni sull'intervallo poiché restituisce un intervallo di extent fisso.

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    auto first2 = mySpan.first(2);
    cout << "mySpan.first(2): ";
    for (auto& i : first2)
    {
        cout << i;
    }

    cout << "\nmySpan.first<2>: ";
    auto viewSpan = mySpan.first<2>();
    for (auto& i : viewSpan)
    {
        cout << i;
    }
}
```

```Output
mySpan.first(2): 01
mySpan.first<2>: 01
```

## <a name="spanfront"></a><a name="front"></a> `span::front`

Ottiene il primo elemento nell'intervallo.

```cpp
constexpr reference front() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Riferimento al primo elemento nell'intervallo.

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    auto i = mySpan.front();
    cout << i;
}
```

```Output
0
```

## <a name="spaniterator"></a><a name="iterator"></a> `span::iterator`

Tipo di un iteratore sugli elementi span.

```cpp
using iterator = implementation-defined-iterator-type;
```

### <a name="remarks"></a>Osservazioni

Questo tipo funge da iteratore sugli elementi in un intervallo.

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    span<int>::iterator it = mySpan.begin();
    cout << *it++ << *it++ << *it;
}
```

```Output
012
```

## <a name="spanlast"></a><a name="last_view"></a> `span::last`

Ottiene un subspan, tratto dalla fine di questo intervallo.

```cpp
constexpr span<element_type, dynamic_extent> last(const size_type count) const noexcept;
template <size_t count> constexpr span<element_type, count> last() const noexcept;
```

### <a name="parameters"></a>Parametri

*conteggio*\
Il numero di elementi dalla fine di questo intervallo da inserire nell'intervallo di sottospan.
Il numero può essere specificato come parametro per il modello o per la funzione, come illustrato di seguito.

### <a name="return-value"></a>Valore restituito

Intervallo contenente gli ultimi `count` elementi di questo intervallo.

### <a name="remarks"></a>Osservazioni

Usare la versione modello di questa funzione quando possibile per convalidare in fase di `count` compilazione e mantenere le informazioni sull'intervallo poiché restituisce un intervallo di extent fisso.

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    auto first2 = mySpan.last(2);
    cout << "mySpan.last(2): ";
    for (auto& i : last2)
    {
        cout << i;
    }

    cout << "\nmySpan.last<2>: ";
    auto viewSpan = mySpan.last<2>();
    for (auto& i : viewSpan)
    {
        cout << i;
    }
}
```

```Output
mySpan.last(2): 12
mySpan.last<2>: 12
```

## <a name="spanoperator"></a><a name="op_at"></a> `span::operator[]`

Ottiene l'elemento nell'intervallo in corrispondenza di una posizione specificata.

```cpp
constexpr reference operator[](size_type offset) const;
```

### <a name="parameters"></a>Parametri

*offset*\
Elemento in base zero nell'intervallo a cui accedere.

### <a name="return-value"></a>Valore restituito

Riferimento all'elemento in corrispondenza dell' *offset*della posizione. Se la posizione non è valida, il comportamento non è definito.

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);
    cout << mySpan[1];
}
```

```Output
1
```

## <a name="spanoperator"></a><a name="op_eq"></a> `span::operator=`

Assegnare a questo un altro intervallo.

```cpp
constexpr span& operator=(const span& other) noexcept = default;
```

### <a name="parameters"></a>Parametri

*altri*\
Intervallo da assegnare a questo.

### <a name="return-value"></a>Valore restituito

`*this`

### <a name="remarks"></a>Osservazioni

L'assegnazione esegue una copia superficiale del puntatore ai dati e della dimensione. Una copia superficiale è sicura perché `span` non alloca memoria per gli elementi in esso contenuti.

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);
    span<int> mySpan2;
    mySpan2 = mySpan;
    for (auto &i : mySpan2)
    {
        cout << it;
    }
}
```

```Output
012
```

## <a name="spanpointer"></a><a name="pointer"></a> `span::pointer`

Tipi di puntatore e **`const`** puntatore a un elemento span.

```cpp
using pointer = T*;
using const_pointer = const T*;
```

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    // pointer
    span<int>::pointer ptr = &mySpan[2];
    *ptr = 9;
    cout << mySpan[2];

    // const pointer
    span<int>::const_pointer cPtr = &mySpan[0];
    // *cPtr = 9; error - const
    cout << *cPtr;
}
```

```Output
90
```

## <a name="spanrbegin"></a><a name="rbegin"></a> `span::rbegin`

Ottiene un iteratore inverso che punta all'ultimo elemento di questo intervallo.

```cpp
constexpr reverse_iterator rbegin() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Iteratore che punta all'inizio dell'intervallo invertito.

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    for (auto rIt = s1.rbegin(); rIt != s1.rend(); ++rIt)
    {
        cout << *rIt;
    }
}
```

```Output
210
```

## <a name="spanreference"></a><a name="reference"></a> `span::reference`

Tipi per un riferimento e un **`const`** riferimento a un elemento span.

```cpp
using reference = T&;
using const_reference = const T&;
```

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    // reference
    span<int>::reference ref = mySpan[0];
    ref = 9;
    cout << mySpan[0];
    // const reference
    span<int>::const_reference cRef = mySpan[1];
    // cRef = 9; error because const
    cout << cRef;
}
```

```Output
91
```

## <a name="spanrend"></a><a name="rend"></a> `span::rend`

Ottiene un iteratore ad accesso casuale che punta appena oltre la fine dell'intervallo invertito.

```cpp
constexpr reverse_iterator rend() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Iteratore inverso per il segnaposto che segue l'ultimo elemento nell'intervallo invertito; ovvero il segnaposto prima del primo elemento nell'intervallo non invertito.

### <a name="remarks"></a>Osservazioni

`rend`viene usato con un intervallo invertito proprio come span [:: end](#end) viene usato con un intervallo. Usarlo per verificare se un iteratore inverso ha raggiunto la fine del relativo intervallo.

`rend`Non è possibile dereferenziare il valore restituito da.

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    for (auto rIt = s1.rbegin(); rIt != s1.rend(); ++rIt)
    {
        cout << *rIt;
    }
}
```

## <a name="spanreverse_iterator"></a><a name="reverse_iterator"></a> `span::reverse_iterator`

Tipo di un iteratore inverso per un intervallo.

```cpp
using reverse_iterator = std::reverse_iterator<iterator>;
```

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    span<int>::reverse_iterator rIt = mySpan.rbegin();
    cout << *rIt++ << *rIt++ << *rIt;
}
```

```Output
210
```

## <a name="spansize"></a><a name="size"></a> `span::size`

Ottiene il numero di elementi nell'intervallo.

```cpp
constexpr size_t size() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'intervallo.

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);
    cout << mySpan.size();
}
```

```Output
3
```

## <a name="spansize_bytes"></a><a name="size_bytes"></a> `span::size_bytes`

Ottiene le dimensioni in byte degli elementi nell'intervallo.

```cpp
constexpr size_type size_bytes() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Numero di byte che tutti gli elementi nell'intervallo occupano; ovvero `sizeof(element_type)` moltiplicato per il numero di elementi nell'intervallo.

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);
    cout << mySpan.size_bytes(); // 3 elements * 4 (size of an int)
}
```

```Output
12
```

## <a name="spansize_type"></a><a name="size_type"></a> `span::size_type`

Tipo senza segno, adatto per archiviare il numero di elementi in un intervallo.

```cpp
using size_type = size_t;
```

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    span<int>::size_type szType = mySpan.size();
    cout << szType;
}
```

```Output
3
```

## <a name="spanspan"></a><a name="span"></a> `span::span`

`span`costruttori.

```cpp
constexpr span() noexcept
requires (Extent == 0 || Extent == dynamic_extent) = default;

template <class It>
constexpr explicit(Extent != dynamic_extent)
span(It first, size_type count) noexcept

template <class It, class End>
constexpr explicit(Extent != dynamic_extent)
span(It first, End last) noexcept(noexcept(last - first))

template <class T, size_t N>
requires (Extent == dynamic_extent || Extent == N) && is_convertible_v<T (*)[], T (*)[]>
constexpr span(array<T, N>& arr) noexcept

template <class T, size_t N>
requires (Extent == dynamic_extent || Extent == N) && is_convertible_v<const T (*)[], T (*)[]>
constexpr span(const array<T, N>& arr) noexcept

template <size_t N>
requires (Extent == dynamic_extent || Extent == N)
constexpr span(type_identity_t<T> (&arr)[N]) noexcept

template <class R>
constexpr explicit(Extent != dynamic_extent)
span(R&& r)

// default copy ctor
constexpr span(const span& other) noexcept = default;

// converting  ctor
template <class T, size_t OtherExtent>
requires (Extent == dynamic_extent || OtherExtent == dynamic_extent ||
              Extent == OtherExtent) && is_convertible_v<T (*)[], T (*)[]>
constexpr explicit(Extent != dynamic_extent && OtherExtent == dynamic_extent)
span(const span<T, OtherExtent>& other) noexcept
```

### <a name="parameters"></a>Parametri

*arr*\
Costruisce un intervallo da una matrice.

*conteggio*\
Numero di elementi che saranno nell'intervallo.

*prima*\
Iteratore per il primo elemento nell'intervallo.

*Ultima*\
Iteratore per incollare immediatamente l'ultimo elemento nell'intervallo.

*N*\
Numero di elementi che saranno nell'intervallo.

*altri*\
Crea una copia di questo intervallo.

*r*\
Costruisce un intervallo da questo intervallo.

### <a name="remarks"></a>Osservazioni

Un intervallo non libera spazio di archiviazione per gli elementi nell'intervallo perché non è il proprietario dell'archiviazione degli oggetti al suo interno.

|Costruttore  | Descrizione  |
|---------|---------|
|`span()` | Costruisce un intervallo vuoto. Viene considerato solo durante la risoluzione dell'overload quando il parametro di modello `Extent` è `0` o `dynamic_extent` .|
|`span(It first, size_type count)` | Costruisce un intervallo dai primi `count` elementi dell'iteratore `first` .  Considerato solo durante la risoluzione dell'overload quando il parametro di modello `Extent` non è `dynamic_extent` . |
|`span(It first, End last)` | Costruisce un intervallo dagli elementi nell'iteratore `first` fino a quando non `last` viene raggiunta la fine. Considerato solo durante la risoluzione dell'overload quando il parametro di modello `Extent` non è `dynamic_extent` . `It`deve essere un oggetto `contiguous_iterator` .  |
|`span(array<T, N>& arr) noexcept;`<br /><br />`span(const array<T, N>& arr) noexcept;`<br /><br />`span(type_identity_t<element_type> (&arr)[N]) noexcept;` |  Costruisce un intervallo dagli `N` elementi della matrice specificata. Viene considerato solo durante la risoluzione dell'overload quando il parametro di modello `Extent` è `dynamic_extent` o è uguale a `N` . |
|`span(R&& r)` |  Costruire un intervallo da un intervallo. Partecipa solo alla risoluzione dell'overload se il parametro di modello `Extent` non è `dynamic_extent` .|
|`span(const span& other)` |  Costruttore di copia generato dal compilatore. Una copia superficiale del puntatore dati è sicura perché l'intervallo non alloca la memoria per conservare gli elementi. |
|`span(const span<OtherElementType, OtherExtent>& s) noexcept;` | Conversione del costruttore: costruire un intervallo da un altro intervallo. Partecipa solo alla risoluzione dell'overload se il parametro `Extent` di modello è o `dynamic_extent` `N` è `dynamic_extent` o è uguale a `Extent` .|

### <a name="example"></a>Esempio

```cpp
#include <span>

using namespace std;

int main()
{
    const int MAX=10;

    int x[MAX];
    for (int i = 0; i < MAX; i++)
    {
        x[i] = i;
    }

    span<int, MAX> span1{ x }; // fixed-size span: compiler error if size of x doesn't match template argument MAX
    span<int> span2{ x }; // size is inferred from x
    span<const int> span3 = span2; // converting constructor
    span<int> span4( span2 ); // copy constructor
}
```

## <a name="spansubspan"></a><a name="sub_view"></a> `span::subspan`

Ottiene un subspan di questo intervallo.

```cpp
constexpr auto subspan(size_type offset, size_type count = dynamic_extent) const noexcept;

template <size_t offset, size_t count = dynamic_extent>
constexpr auto subspan() const noexcept
```

### <a name="parameters"></a>Parametri

*conteggio*\
Numero di elementi da inserire nell'intervallo di sottospan. Se `count` è `dynamic_extent` (valore predefinito), il sottointervallo viene ricavato da `offset` alla fine di questo intervallo.

*offset*\
Posizione nell'intervallo in cui iniziare l'intervallo.

### <a name="return-value"></a>Valore restituito

Intervallo che inizia in corrispondenza `offset` di in questo intervallo. Contiene `count` elementi.

### <a name="remarks"></a>Osservazioni

È disponibile una versione modello di questa funzione che controlla il conteggio in fase di compilazione, in modo da mantenere le informazioni sull'intervallo restituendo un intervallo di extent fisso.

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    cout << "mySpan.subspan(1,2): ";
    for (auto& i : mySpan.subspan(1,2))
    {
        cout << i;
    }
    cout << "\nmySpan.subspan<1,2>: ";
    for (auto& i : mySpan.subspan<1,2>())
    {
        cout << i;
    }
    cout << "\nmySpan.subspan<1>: ";
    for (auto& i : mySpan.subspan<1>)
    {
        cout << i;
    }
}
```

```Output
mySpan.subspan(1,2): 12
mySpan.subspan<1,2>: 12
mySpan.subspan<1>: 12
```

## <a name="spanvalue_type"></a><a name="value_type"></a> `span::value_type`

Tipo dell'elemento nell'intervallo, senza le **`const`** **`volatile`** qualifiche o.

```cpp
using value_type = std::remove_cv_t<T>;
```

### <a name="example"></a>Esempio

```cpp
#include <span>
#include <iostream>

using namespace std;

int main()
{
    int a[] = { 0,1,2 };
    span<int> mySpan(a);

    span<int>::value_type vType = mySpan[2];
    cout << vType;
}
```

```Output
2
```

## <a name="deduction-guides"></a><a name="deduction_guides"></a>Guide per la deduzione

Per span sono disponibili le guide di deduzione seguenti.

```cpp
// Allows the extent to be deduced from std::array and C++ built-in arrays

template <class T, size_t Extent>
span(T (&)[Extent]) -> span<T, Extent>;

template <class T, size_t Size>
span(array<T, Size>&) -> span<T, Size>;

template <class T, size_t Size>
span(const array<T, Size>&) -> span<const T, Size>;

// Allows the element type to be deduced from the iterator and the end of the span.
// The iterator must be contiguous

template <contiguous_iterator It, class End>
span(It, End) -> span<remove_reference_t<iter_reference_t<It>>>;

// Allows the element type to be deduced from a range.
// The range must be contiguous

template <ranges::contiguous_range Rng>
span(Rng &&) -> span<remove_reference_t<ranges::range_reference_t<Rng>>>;
```

## <a name="see-also"></a>Vedere anche

[\<span>](../standard-library/span.md)  
[Come usare la deduzione dell'argomento del modello di classe](https://devblogs.microsoft.com/cppblog/how-to-use-class-template-argument-deduction/)
