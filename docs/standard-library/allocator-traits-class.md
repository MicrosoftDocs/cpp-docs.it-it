---
description: 'Altre informazioni su: allocator_traits Class'
title: Classe allocator_traits
ms.date: 11/04/2016
f1_keywords:
- memory/std::allocator_traits
- memory/std::allocator_traits::propagate_on_container_move_assignment
- memory/std::allocator_traits::const_pointer
- memory/std::allocator_traits::propagate_on_container_swap
- memory/std::allocator_traits::propagate_on_container_copy_assignment
- memory/std::allocator_traits::difference_type
- memory/std::allocator_traits::allocator_type
- memory/std::allocator_traits::value_type
- memory/std::allocator_traits::pointer
- memory/std::allocator_traits::size_type
- memory/std::allocator_traits::const_void_pointer
- memory/std::allocator_traits::void_pointer
- memory/std::allocator_traits::allocate
- memory/std::allocator_traits::construct
- memory/std::allocator_traits::deallocate
- memory/std::allocator_traits::destroy
- memory/std::allocator_traits::max_size
- memory/std::allocator_traits::select_on_container_copy_construction
ms.assetid: 612974b8-b5d4-4668-82fb-824bff6821d6
helpviewer_keywords:
- std::allocator_traits [C++]
- std::allocator_traits [C++], propagate_on_container_move_assignment
- std::allocator_traits [C++], const_pointer
- std::allocator_traits [C++], propagate_on_container_swap
- std::allocator_traits [C++], propagate_on_container_copy_assignment
- std::allocator_traits [C++], difference_type
- std::allocator_traits [C++], allocator_type
- std::allocator_traits [C++], value_type
- std::allocator_traits [C++], pointer
- std::allocator_traits [C++], size_type
- std::allocator_traits [C++], const_void_pointer
- std::allocator_traits [C++], void_pointer
- std::allocator_traits [C++], allocate
- std::allocator_traits [C++], construct
- std::allocator_traits [C++], deallocate
- std::allocator_traits [C++], destroy
- std::allocator_traits [C++], max_size
- std::allocator_traits [C++], select_on_container_copy_construction
ms.openlocfilehash: d60658c5f8cf6217dff7a846f0e5cbae42e6a565
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97163561"
---
# <a name="allocator_traits-class"></a>Classe allocator_traits

Il modello di classe descrive un oggetto che integra un *tipo di allocatore*. Un tipo di allocatore è un tipo che descrive un oggetto allocatore usato per la gestione dello spazio di archiviazione allocato. In particolare, per qualsiasi tipo di allocatore `Alloc`, è possibile usare `allocator_traits<Alloc>` per determinare tutte le informazioni necessarie per un contenitore che supporta gli allocatori. Per altre informazioni, vedere la [Classe allocator](allocator-class.md) predefinita.

## <a name="syntax"></a>Sintassi

```cpp
template <class Alloc>
    class allocator_traits;
```

## <a name="members"></a>Members

### <a name="typedefs"></a>Typedef

|Nome|Description|
|-|-|
|`allocator_type`|Questo tipo è un sinonimo del parametro di modello `Alloc`.|
|`const_pointer`|Questo tipo è `Alloc::const_pointer`, se il tipo è ben formato; in caso contrario, questo tipo è `pointer_traits<pointer>::rebind<const value_type>`.|
|`const_void_pointer`|Questo tipo è `Alloc::const_void_pointer`, se il tipo è ben formato; in caso contrario, questo tipo è `pointer_traits<pointer>::rebind<const void>`.|
|`difference_type`|Questo tipo è `Alloc::difference_type`, se il tipo è ben formato; in caso contrario, questo tipo è `pointer_traits<pointer>::difference_type`.|
|`pointer`|Questo tipo è `Alloc::pointer`, se il tipo è ben formato; in caso contrario, questo tipo è `value_type *`.|
|`propagate_on_container_copy_assignment`|Questo tipo è `Alloc::propagate_on_container_copy_assignment`, se il tipo è ben formato; in caso contrario, questo tipo è `false_type`.|
|`propagate_on_container_move_assignment`|Questo tipo è `Alloc::propagate_on_container_move_assignment`, se il tipo è ben formato; in caso contrario, questo tipo è `false_type`. Se il tipo dà come risultato true, un contenitore che supporta gli allocatori copia l'allocatore archiviato in un'assegnazione di spostamento.|
|`propagate_on_container_swap`|Questo tipo è `Alloc::propagate_on_container_swap`, se il tipo è ben formato; in caso contrario, questo tipo è `false_type`. Se il tipo dà come risultato true, un contenitore che supporta gli allocatori scambia l'allocatore archiviato in uno scambio.|
|`size_type`|Questo tipo è `Alloc::size_type`, se il tipo è ben formato; in caso contrario, questo tipo è `make_unsigned<difference_type>::type`.|
|`value_type`|Questo tipo è sinonimo di `Alloc::value_type`.|
|`void_pointer`|Questo tipo è `Alloc::void_pointer`, se il tipo è ben formato; in caso contrario, questo tipo è `pointer_traits<pointer>::rebind<void>`.|

### <a name="static-methods"></a>Metodi statici

I metodi statici seguenti chiamano il metodo corrispondente in un parametro allocatore specificato.

|Nome|Description|
|-|-|
|[allocare](#allocate)|Metodo statico che alloca la memoria usando il parametro allocatore specificato.|
|[costruire](#construct)|Metodo statico che usa un allocatore specificato per costruire un oggetto.|
|[deallocare](#deallocate)|Metodo statico che usa un allocatore specificato per deallocare un numero specificato di oggetti.|
|[eliminare](#destroy)|Metodo statico che usa un allocatore specificato per chiamare il distruttore in un oggetto senza la deallocazione della memoria.|
|[max_size](#max_size)|Metodo statico che usa un allocatore specificato per determinare il numero massimo di oggetti che possono essere allocati.|
|[select_on_container_copy_construction](#select_on_container_copy_construction)|Metodo statico che chiama `select_on_container_copy_construction`nell'allocatore specificato.|

### <a name="allocate"></a><a name="allocate"></a> allocare

Metodo statico che alloca la memoria usando il parametro allocatore specificato.

```cpp
static pointer allocate(Alloc& al, size_type count);

static pointer allocate(Alloc& al, size_type count,
    typename allocator_traits<void>::const_pointer* hint);
```

#### <a name="parameters"></a>Parametri

*al*\
Un oggetto allocatore.

*conteggio*\
Numero di elementi da allocare.

*Suggerimento*\
`const_pointer` che può essere utile all'oggetto allocatore per soddisfare la richiesta di spazio di archiviazione individuando l'indirizzo di un oggetto allocato prima della richiesta. Un puntatore null viene considerato come assenza di hint.

#### <a name="return-value"></a>Valore restituito

Ogni metodo restituisce un puntatore all'oggetto allocato.

Il primo metodo statico restituisce `al.allocate(count)`.

Il secondo metodo statico restituisce `al.allocate(count, hint)`, se l'espressione è ben formata; in caso contrario, restituisce `al.allocate(count)`.

### <a name="construct"></a><a name="construct"></a> costruire

Metodo statico che usa un allocatore specificato per costruire un oggetto.

```cpp
template <class Uty, class Types>
static void construct(Alloc& al, Uty* ptr, Types&&... args);
```

#### <a name="parameters"></a>Parametri

*al*\
Un oggetto allocatore.

*PTR*\
Puntatore al percorso in cui deve essere creato l'oggetto.

*args*\
Elenco di argomenti passato al costruttore dell'oggetto.

#### <a name="remarks"></a>Commenti

La funzione membro statica chiama `al.construct(ptr, args...)`, se l'espressione è ben formata; in caso contrario, restituisce `::new (static_cast<void *>(ptr)) Uty(std::forward<Types>(args)...)`.

### <a name="deallocate"></a><a name="deallocate"></a> deallocare

Metodo statico che usa un allocatore specificato per deallocare un numero specificato di oggetti.

```cpp
static void deallocate(Alloc al,
    pointer ptr,
    size_type count);
```

#### <a name="parameters"></a>Parametri

*al*\
Un oggetto allocatore.

*PTR*\
Puntatore alla posizione iniziale degli oggetti da deallocare.

*conteggio*\
Numero di oggetti da deallocare.

#### <a name="remarks"></a>Commenti

Questo metodo chiama `al.deallocate(ptr, count)`.

Questo metodo non genera nulla.

### <a name="destroy"></a><a name="destroy"></a> eliminare

Metodo statico che usa un allocatore specificato per chiamare il distruttore in un oggetto senza la deallocazione della memoria.

```cpp
template <class Uty>
    static void destroy(Alloc& al, Uty* ptr);
```

#### <a name="parameters"></a>Parametri

*al*\
Un oggetto allocatore.

*PTR*\
Puntatore alla posizione dell'oggetto.

#### <a name="remarks"></a>Commenti

Questo metodo chiama `al.destroy(ptr)`, se l'espressione è ben formata; in caso contrario, restituisce `ptr->~Uty()`.

### <a name="max_size"></a><a name="max_size"></a> max_size

Metodo statico che usa un allocatore specificato per determinare il numero massimo di oggetti che possono essere allocati.

```cpp
static size_type max_size(const Alloc& al);
```

#### <a name="parameters"></a>Parametri

*al*\
Un oggetto allocatore.

#### <a name="remarks"></a>Commenti

Questo metodo restituisce `al.max_size()`, se l'espressione è ben formata; in caso contrario, restituisce `numeric_limits<size_type>::max()`.

### <a name="select_on_container_copy_construction"></a><a name="select_on_container_copy_construction"></a> select_on_container_copy_construction

Metodo statico che chiama `select_on_container_copy_construction`nell'allocatore specificato.

```cpp
static Alloc select_on_container_copy_construction(const Alloc& al);
```

#### <a name="parameters"></a>Parametri

*al*\
Un oggetto allocatore.

#### <a name="return-value"></a>Valore restituito

Questo metodo restituisce `al.select_on_container_copy_construction()` , se il tipo è ben formato; in caso contrario, restituisce *al*.

#### <a name="remarks"></a>Commenti

Questo metodo viene usato per specificare un allocatore quando il contenitore associato è creato con un costruttore di copia.
