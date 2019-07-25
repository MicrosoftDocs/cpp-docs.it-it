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
ms.openlocfilehash: 065c0eaf936a438f48dbb8aa28704e0f53926a03
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68451129"
---
# <a name="rtsalloc-class"></a>Classe rts_alloc

La classe modello rts_alloc descrive un [filtro](../standard-library/allocators-header.md) che contiene una matrice di istanze cache e determina quale istanza usare per l'allocazione e la deallocazione in fase di esecuzione anziché in quella di compilazione.

## <a name="syntax"></a>Sintassi

```cpp
template <class Cache>
class rts_alloc
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Cache*|Il tipo delle istanze cache contenuto nell'array. Può essere la [classe cache_chunklist](../standard-library/cache-chunklist-class.md), [cache_freelist](../standard-library/cache-freelist-class.md) o [cache_suballoc](../standard-library/cache-suballoc-class.md).|

## <a name="remarks"></a>Note

Questa classe modello contiene più istanze allocator di blocchi e determina quale istanza usare per l'allocazione e la deallocazione in fase di esecuzione piuttosto che in quella di compilazione. Viene usata con i compilatori e non può compilare la riassociazione.

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|DESCRIZIONE|
|-|-|
|[allocate](#allocate)|Alloca un blocco di memoria.|
|[deallocate](#deallocate)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|
|[equals](#equals)|Confronta due cache per stabilirne l'uguaglianza.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="allocate"></a>  rts_alloc::allocate

Alloca un blocco di memoria.

```cpp
void *allocate(std::size_t count);
```

### <a name="parameters"></a>Parametri

|Parametro|DESCRIZIONE|
|---------------|-----------------|
|*count*|Numero di elementi della matrice da allocare.|

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto allocato.

### <a name="remarks"></a>Note

La funzione membro restituisce `caches[_IDX].allocate(count)`, in cui l' `_IDX` indice è determinato dal *numero*di dimensioni del blocco richiesto, oppure, se il *conteggio* è troppo grande `operator new(count)`, restituisce. Oggetto `cache` che rappresenta l'oggetto cache.

## <a name="deallocate"></a>  rts_alloc::deallocate

Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.

```cpp
void deallocate(void* ptr, std::size_t count);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*ptr*|Puntatore al primo oggetto da deallocare dall'archivio.|
|*count*|Numero di oggetti da deallocare dall'archivio.|

### <a name="remarks"></a>Note

La funzione membro chiama `caches[_IDX].deallocate(ptr, count)`, dove l'indice `_IDX` è determinato dal *numero*di dimensioni del blocco richiesto, oppure, se il *conteggio* è troppo grande, `operator delete(ptr)`restituisce.

## <a name="equals"></a>  rts_alloc::equals

Confronta due cache per stabilirne l'uguaglianza.

```cpp
bool equals(const sync<_Cache>& _Other) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*_Cache*|Oggetto cache associato al filtro.|
|*_Other*|Oggetto cache da confrontare per verificarne l'uguaglianza.|

### <a name="remarks"></a>Note

**true** se il risultato di `caches[0].equals(other.caches[0])`; in caso contrario, **false**. `caches` rappresenta una matrice di oggetti cache.

## <a name="see-also"></a>Vedere anche

[ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl)\
[\<allocators>](../standard-library/allocators-header.md)
