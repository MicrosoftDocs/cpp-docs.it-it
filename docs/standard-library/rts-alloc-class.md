---
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
ms.openlocfilehash: 6ed84d906944a09fa355e281640e9480f3173554
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373418"
---
# <a name="rts_alloc-class"></a>Classe rts_alloc

Il modello di classe rts_alloc descrive un [filtro](../standard-library/allocators-header.md) che contiene una matrice di istanze della cache e determina l'istanza da utilizzare per l'allocazione e la deallocazione in fase di esecuzione anziché in fase di compilazione.

## <a name="syntax"></a>Sintassi

```cpp
template <class Cache>
class rts_alloc
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Cache*|Il tipo delle istanze cache contenuto nell'array. Può essere la [classe cache_chunklist](../standard-library/cache-chunklist-class.md), [cache_freelist](../standard-library/cache-freelist-class.md) o [cache_suballoc](../standard-library/cache-suballoc-class.md).|

## <a name="remarks"></a>Osservazioni

Questo modello di classe contiene più istanze di allocatore di blocchi e determina l'istanza da utilizzare per l'allocazione o la deallocazione in fase di esecuzione anziché in fase di compilazione. Viene usata con i compilatori e non può compilare la riassociazione.

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[Allocare](#allocate)|Alloca un blocco di memoria.|
|[Deallocare](#deallocate)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|
|[equals](#equals)|Confronta due cache per stabilirne l'uguaglianza.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="rts_allocallocate"></a><a name="allocate"></a>rts_alloc::allocare

Alloca un blocco di memoria.

```cpp
void *allocate(std::size_t count);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*count*|Numero di elementi della matrice da allocare.|

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto allocato.

### <a name="remarks"></a>Osservazioni

La funzione `caches[_IDX].allocate(count)`membro restituisce `_IDX` , dove l'indice è determinato dal *conteggio*delle dimensioni `operator new(count)`del blocco richiesto o, se *count* è troppo grande, restituisce . Oggetto `cache` che rappresenta l'oggetto cache.

## <a name="rts_allocdeallocate"></a><a name="deallocate"></a>rts_alloc::deallocate

Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.

```cpp
void deallocate(void* ptr, std::size_t count);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Ptr*|Puntatore al primo oggetto che deve essere deallocato dall'archivio.|
|*count*|Numero di oggetti da deallocare dall'archivio.|

### <a name="remarks"></a>Osservazioni

La funzione `caches[_IDX].deallocate(ptr, count)`membro chiama `_IDX` , dove l'indice è determinato dal *conteggio*delle dimensioni `operator delete(ptr)`del blocco richiesto o, se *count* è troppo grande, restituisce .

## <a name="rts_allocequals"></a><a name="equals"></a>rts_alloc::uguale a

Confronta due cache per stabilirne l'uguaglianza.

```cpp
bool equals(const sync<_Cache>& _Other) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*_Cache*|Oggetto cache associato al filtro.|
|*_Other*|Oggetto cache da confrontare per verificarne l'uguaglianza.|

### <a name="remarks"></a>Osservazioni

**true** se il `caches[0].equals(other.caches[0])`risultato di ; in caso contrario, **false**. `caches` rappresenta una matrice di oggetti cache.

## <a name="see-also"></a>Vedere anche

[ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl)\
[\<allocatori>](../standard-library/allocators-header.md)
