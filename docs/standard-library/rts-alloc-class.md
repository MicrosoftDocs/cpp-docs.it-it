---
description: 'Altre informazioni su: rts_alloc Class'
title: Classe rts_alloc
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::rts_alloc
- allocators/stdext::rts_alloc::allocate
- allocators/stdext::rts_alloc::deallocate
- allocators/stdext::rts_alloc::equals
helpviewer_keywords:
- stdext::rts_alloc
- stdext::rts_alloc [C++], allocate
- stdext::rts_alloc [C++], deallocate
- stdext::rts_alloc [C++], equals
ms.assetid: ab41bffa-83d1-4a1c-87b9-5707d516931f
ms.openlocfilehash: b2fe4bf3fe3f54e8fe1de3d89605280b2ba2b857
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97148941"
---
# <a name="rts_alloc-class"></a>Classe rts_alloc

Il modello di classe rts_alloc descrive un [filtro](../standard-library/allocators-header.md) che contiene una matrice di istanze della cache e determina quale istanza usare per l'allocazione e la deallocazione in fase di esecuzione anziché in fase di compilazione.

## <a name="syntax"></a>Sintassi

```cpp
template <class Cache>
class rts_alloc
```

### <a name="parameters"></a>Parametri

*Cache*\
Il tipo delle istanze cache contenuto nell'array. Può essere [`cache_chunklist`](../standard-library/cache-chunklist-class.md) , [`cache_freelist`](../standard-library/cache-freelist-class.md) o [`cache_suballoc`](../standard-library/cache-suballoc-class.md) .

## <a name="remarks"></a>Commenti

Questo modello di classe include più istanze dell'allocatore di blocchi e determina quale istanza usare per l'allocazione o la deallocazione in fase di esecuzione anziché in fase di compilazione. Viene usata con i compilatori e non può compilare la riassociazione.

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[allocare](#allocate)|Alloca un blocco di memoria.|
|[deallocare](#deallocate)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|
|[equals](#equals)|Confronta due cache per stabilirne l'uguaglianza.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<allocators>

**Spazio dei nomi:** stdext

## <a name="rts_allocallocate"></a><a name="allocate"></a> rts_alloc:: allocate

Alloca un blocco di memoria.

```cpp
void *allocate(std::size_t count);
```

### <a name="parameters"></a>Parametri

*conteggio*\
Numero di elementi della matrice da allocare.

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto allocato.

### <a name="remarks"></a>Commenti

La funzione membro restituisce `caches[_IDX].allocate(count)` , in cui l'indice `_IDX` è determinato dal *numero* di dimensioni del blocco richiesto, oppure, se il *conteggio* è troppo grande, restituisce `operator new(count)` . Oggetto `cache` che rappresenta l'oggetto cache.

## <a name="rts_allocdeallocate"></a><a name="deallocate"></a> rts_alloc::d eallocate

Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.

```cpp
void deallocate(void* ptr, std::size_t count);
```

### <a name="parameters"></a>Parametri

*PTR*\
Puntatore al primo oggetto che deve essere deallocato dall'archivio.

*conteggio*\
Numero di oggetti da deallocare dall'archivio.

### <a name="remarks"></a>Commenti

La funzione membro chiama `caches[_IDX].deallocate(ptr, count)` , dove l'indice `_IDX` è determinato dal *numero* di dimensioni del blocco richiesto, oppure, se il *conteggio* è troppo grande, restituisce `operator delete(ptr)` .

## <a name="rts_allocequals"></a><a name="equals"></a> rts_alloc:: Equals

Confronta due cache per stabilirne l'uguaglianza.

```cpp
bool equals(const sync<_Cache>& _Other) const;
```

### <a name="parameters"></a>Parametri

*_Cache*\
Oggetto cache associato al filtro.

*_Other*\
Oggetto cache da confrontare per verificarne l'uguaglianza.

### <a name="remarks"></a>Commenti

**`true`** Se il risultato di `caches[0].equals(other.caches[0])` ; in caso contrario, **`false`** . `caches` rappresenta una matrice di oggetti cache.

## <a name="see-also"></a>Vedi anche

[ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl)\
[\<allocators>](../standard-library/allocators-header.md)
