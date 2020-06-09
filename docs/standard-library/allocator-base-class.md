---
title: Classe allocator_base
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::allocator_base
- allocators/stdext::allocators::allocator_base
- allocators/stdext::allocator_base::const_pointer
- allocators/stdext::allocator_base::const_reference
- allocators/stdext::allocator_base::difference_type
- allocators/stdext::allocator_base::pointer
- allocators/stdext::allocator_base::reference
- allocators/stdext::allocator_base::size_type
- allocators/stdext::allocator_base::value_type
- allocators/stdext::allocator_base::_Charalloc
- allocators/stdext::allocator_base::_Chardealloc
- allocators/stdext::allocator_base::address
- allocators/stdext::allocator_base::allocate
- allocators/stdext::allocator_base::construct
- allocators/stdext::allocator_base::deallocate
- allocators/stdext::allocator_base::destroy
- allocators/stdext::allocator_base::max_size
helpviewer_keywords:
- stdext::allocator_base [C++]
- stdext::allocators [C++], allocator_base
- stdext::allocator_base [C++], const_pointer
- stdext::allocator_base [C++], const_reference
- stdext::allocator_base [C++], difference_type
- stdext::allocator_base [C++], pointer
- stdext::allocator_base [C++], reference
- stdext::allocator_base [C++], size_type
- stdext::allocator_base [C++], value_type
- stdext::allocator_base [C++], _Charalloc
- stdext::allocator_base [C++], _Chardealloc
- stdext::allocator_base [C++], address
- stdext::allocator_base [C++], allocate
- stdext::allocator_base [C++], construct
- stdext::allocator_base [C++], deallocate
- stdext::allocator_base [C++], destroy
- stdext::allocator_base [C++], max_size
ms.assetid: f920b45f-2a88-4bb0-8ead-b6126b426ed4
ms.openlocfilehash: b55a7ec92787cb6b3103bf71b65d137d24ffff04
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84617578"
---
# <a name="allocator_base-class"></a>Classe allocator_base

Definisce la classe base e le funzioni comuni necessari per creare un allocatore definito dall'utente da un filtro di sincronizzazione.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type, class Sync>
class allocator_base
```

### <a name="parameters"></a>Parametri

|Parametro|Description|
|---------------|-----------------|
|*Tipo*|Tipo degli elementi assegnato dall'allocatore.|
|*Sincrono*|I criteri di sincronizzazione per l'allocatore, ovvero la [Classe sync_none](sync-none-class.md), la [Classe sync_per_container](sync-per-container-class.md), la [Classe sync_per_thread](sync-per-thread-class.md) o la [Classe sync_shared](sync-shared-class.md).|

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[allocator_base](#allocator_base)|Costruisce un oggetto di tipo `allocator_base`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[const_pointer](#const_pointer)|Tipo che fornisce un puntatore costante al tipo di oggetto gestito dall'allocatore.|
|[const_reference](#const_reference)|Tipo che fornisce un riferimento costante al tipo di oggetto gestito dall'allocatore.|
|[difference_type](#difference_type)|Tipo integrale con segno che può rappresentare la differenza tra valori di puntatori al tipo di oggetto gestito dall'allocatore.|
|[puntatore](#pointer)|Tipo che fornisce un puntatore al tipo di oggetto gestito dall'allocatore.|
|[riferimento](#reference)|Tipo che fornisce un riferimento al tipo di oggetto gestito dall'allocatore.|
|[size_type](#size_type)|Tipo integrale senza segno che può rappresentare la lunghezza di qualsiasi sequenza che un oggetto di tipo `allocator_base` può allocare.|
|[value_type](#value_type)|Tipo gestito dall'allocatore.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[_Charalloc](#charalloc)|Alloca lo spazio di archiviazione per una matrice di tipo **char**.|
|[_Chardealloc](#chardealloc)|Libera lo spazio di archiviazione per la matrice contenente gli elementi di tipo **char**.|
|[address](#address)|Trova l'indirizzo di un oggetto il cui valore è specificato.|
|[allocate](#allocate)|Alloca un blocco di memoria sufficiente a contenere almeno un numero specificato di elementi.|
|[costrutto](#construct)|Costruisce un tipo specifico di oggetto su un indirizzo specificato che viene inizializzato con un valore specificato.|
|[deallocare](#deallocate)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|
|[eliminare](#destroy)|Chiama un distruttore di oggetti senza deallocare la memoria in cui è stato archiviato l'oggetto.|
|[max_size](#max_size)|Restituisce il numero di elementi di tipo *Type* che possono essere allocati da un oggetto della classe allocator prima che la memoria libera si esaurisca.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<allocators>

**Spazio dei nomi:** stdext

## <a name="allocator_base_charalloc"></a><a name="charalloc"></a>allocator_base:: _Charalloc

Alloca lo spazio di archiviazione per una matrice di tipo **char**.

```cpp
char *_Charalloc(size_type count);
```

### <a name="parameters"></a>Parametri

|Parametro|Description|
|---------------|-----------------|
|*count*|Numero di elementi della matrice da allocare.|

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto allocato.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene usata dai contenitori compilati con un compilatore che non può compilare la riassociazione. Implementa `_Charalloc` per l'allocatore definito dall'utente restituendo il risultato di una chiamata alla funzione `allocate` del filtro di sincronizzazione.

## <a name="allocator_base_chardealloc"></a><a name="chardealloc"></a>allocator_base:: _Chardealloc

Libera lo spazio di archiviazione per la matrice contenente gli elementi di tipo **char**.

```cpp
void _Chardealloc(void* ptr, size_type count);
```

### <a name="parameters"></a>Parametri

|Parametro|Description|
|---------------|-----------------|
|*ptr*|Puntatore al primo oggetto che deve essere deallocato dall'archivio.|
|*count*|Numero di oggetti da deallocare dall'archivio.|

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene usata dai contenitori compilati con un compilatore che non può compilare la riassociazione. Implementa `_Chardealloc` per l'allocatore definito dall'utente chiamando la funzione `deallocate` del filtro di sincronizzazione. Il puntatore ptr deve essere stato restituito in precedenza da una chiamata a `_Charalloc` per un oggetto allocatore che risulta uguale a `*this`, allocando un oggetto matrice con dimensione e tipo corrispondenti. `_Chardealloc` non genera mai un'eccezione.

## <a name="allocator_baseaddress"></a><a name="address"></a>allocator_base:: Address

Trova l'indirizzo di un oggetto il cui valore è specificato.

```cpp
pointer address(reference val);

const_pointer address(const_reference val);
```

### <a name="parameters"></a>Parametri

*Val*\
Valore const o nonconst dell'oggetto di cui viene cercato l'indirizzo.

### <a name="return-value"></a>Valore restituito

Un puntatore const o nonconst all'oggetto trovato rispettivamente di valore const o nonconst.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene implementata per l'allocatore definito dall'utente restituendo `&val`.

## <a name="allocator_baseallocate"></a><a name="allocate"></a>allocator_base:: allocate

Alloca un blocco di memoria sufficiente a contenere almeno un numero specificato di elementi.

```cpp
template <class Other>
pointer allocate(size_type _Nx, const Other* _Hint = 0);

pointer allocate(size_type _Nx);
```

### <a name="parameters"></a>Parametri

|Parametro|Description|
|---------------|-----------------|
|*_Nx*|Numero di elementi della matrice da allocare.|
|*_Hint*|Questo parametro viene ignorato.|

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto allocato.

### <a name="remarks"></a>Osservazioni

La funzione membro implementa l'allocazione di memoria per l'allocatore definito dall'utente restituendo il risultato di una chiamata alla funzione `allocate` del filtro di sincronizzazione di tipo Type `*` se `_Nx == 1`; in caso contrario, restituendo il risultato di una chiamata al cast `operator new(_Nx * sizeof(Type))` al tipo Type `*`.

## <a name="allocator_baseallocator_base"></a><a name="allocator_base"></a>allocator_base:: allocator_base

Costruisce un oggetto di tipo `allocator_base`.

```cpp
allocator_base();

template <class Other>
allocator_base(const allocator_base<Other, Sync>& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Ok*|Oggetto allocatore da copiare.|

### <a name="remarks"></a>Osservazioni

Il primo costruttore crea un'istanza [allocator_base](allocator-base-class.md). Il secondo costruttore crea un'istanza `allocator_base` in modo che per qualsiasi istanza `allocator_base<Type, _Sync>``a`, `allocator_base<Type, Sync>(allocator_base<Other, Sync>(a)) == a`.

## <a name="allocator_baseconst_pointer"></a><a name="const_pointer"></a>allocator_base:: const_pointer

Tipo che fornisce un puntatore costante al tipo di oggetto gestito dall'allocatore.

```cpp
typedef const Type *const_pointer;
```

## <a name="allocator_baseconst_reference"></a><a name="const_reference"></a>allocator_base:: const_reference

Tipo che fornisce un riferimento costante al tipo di oggetto gestito dall'allocatore.

```cpp
typedef const Type& const_reference;
```

## <a name="allocator_baseconstruct"></a><a name="construct"></a>allocator_base:: Construct

Costruisce un tipo specifico di oggetto su un indirizzo specificato che viene inizializzato con un valore specificato.

```cpp
void construct(pointer ptr, const Type& val);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*ptr*|Puntatore al percorso in cui deve essere creato l'oggetto.|
|*Val*|Il valore con cui viene inizializzato l'oggetto costruito.|

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene implementata per l'allocatore definito dall'utente tramite una chiamata a `new((void*)ptr Type(val)`.

## <a name="allocator_basedeallocate"></a><a name="deallocate"></a>allocator_base::d eallocate

Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.

```cpp
void deallocate(pointer ptr, size_type _Nx);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*ptr*|Puntatore al primo oggetto che deve essere deallocato dall'archivio.|
|*_Nx*|Numero di oggetti da deallocare dall'archivio.|

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene implementata per l'allocatore definito dall'utente tramite una chiamata a `deallocate(ptr)` nel filtro di sincronizzazione `Sync` se `_Nx == 1`; in caso contrario, tramite una chiamata a `operator delete(_Nx * ptr)`.

## <a name="allocator_basedestroy"></a><a name="destroy"></a>allocator_base::d estroy

Chiama un distruttore di oggetti senza deallocare la memoria in cui è stato archiviato l'oggetto.

```cpp
void destroy(pointer ptr);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*ptr*|Un puntatore che indica l'indirizzo dell'oggetto da distruggere.|

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene implementata per l'allocatore definito dall'utente tramite una chiamata a `ptr->~Type()`.

## <a name="allocator_basedifference_type"></a><a name="difference_type"></a>allocator_base::d ifference_type

Tipo integrale con segno che può rappresentare la differenza tra valori di puntatori al tipo di oggetto gestito dall'allocatore.

```cpp
typedef std::ptrdiff_t difference_type;
```

## <a name="allocator_basemax_size"></a><a name="max_size"></a>allocator_base:: max_size

Restituisce il numero di elementi di tipo `Type` che potrebbe essere assegnata da un oggetto dell'allocatore della classe prima che la memoria libera si esaurisca.

```cpp
size_type max_size() const;
```

### <a name="return-value"></a>Valore restituito

Numero degli elementi che possono essere allocati.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene implementata per l'allocatore definito dall'utente restituendo `(size_t)-1 / sizeof(Type)` se `0 < (size_t)-1 / sizeof(Type)`: in caso contrario, restituendo `1`.

## <a name="allocator_basepointer"></a><a name="pointer"></a>allocator_base::p ointer

Tipo che fornisce un puntatore al tipo di oggetto gestito dall'allocatore.

```cpp
typedef Type *pointer;
```

## <a name="allocator_basereference"></a><a name="reference"></a>allocator_base:: Reference

Tipo che fornisce un riferimento al tipo di oggetto gestito dall'allocatore.

```cpp
typedef Type& reference;
```

## <a name="allocator_basesize_type"></a><a name="size_type"></a>allocator_base:: size_type

Tipo integrale senza segno che può rappresentare la lunghezza di qualsiasi sequenza che un oggetto di tipo `allocator_base` può allocare.

```cpp
typedef std::size_t size_type;
```

## <a name="allocator_basevalue_type"></a><a name="value_type"></a>allocator_base:: value_type

Tipo gestito dall'allocatore.

```cpp
typedef Type value_type;
```

## <a name="see-also"></a>Vedere anche

[\<allocators>](allocators-header.md)
