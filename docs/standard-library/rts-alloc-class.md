---
title: Classe rts_alloc | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- allocators/stdext::rts_alloc
- allocators/stdext::rts_alloc::allocate
- allocators/stdext::rts_alloc::deallocate
- allocators/stdext::rts_alloc::equals
dev_langs:
- C++
helpviewer_keywords:
- stdext::rts_alloc
- stdext::rts_alloc [C++], allocate
- stdext::rts_alloc [C++], deallocate
- stdext::rts_alloc [C++], equals
ms.assetid: ab41bffa-83d1-4a1c-87b9-5707d516931f
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 86d634aabe8b4efa566f9ceb147214807e09cbea
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
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
|`Cache`|Il tipo delle istanze cache contenuto nell'array. Può essere la [classe cache_chunklist](../standard-library/cache-chunklist-class.md), [cache_freelist](../standard-library/cache-freelist-class.md) o [cache_suballoc](../standard-library/cache-suballoc-class.md).|

## <a name="remarks"></a>Note

Questa classe modello contiene più istanze allocator di blocchi e determina quale istanza usare per l'allocazione e la deallocazione in fase di esecuzione piuttosto che in quella di compilazione. Viene usata con i compilatori e non può compilare la riassociazione.

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
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

|Parametro|Descrizione|
|---------------|-----------------|
|`count`|Numero di elementi della matrice da allocare.|

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto allocato.

### <a name="remarks"></a>Note

La funzione membro restituisce `caches[_IDX].allocate(count)`, dove l'indice `_IDX` è determinato dalla dimensione del blocco richiesto `count`, oppure, se `count` è troppo grande, restituisce `operator new(count)`. Oggetto `cache` che rappresenta l'oggetto cache.

## <a name="deallocate"></a>  rts_alloc::deallocate

Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.

```cpp
void deallocate(void* ptr, std::size_t count);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`ptr`|Puntatore al primo oggetto da deallocare dall'archivio.|
|`count`|Numero di oggetti da deallocare dall'archivio.|

### <a name="remarks"></a>Note

La funzione membro chiama `caches[_IDX].deallocate(ptr, count)`, dove l'indice `_IDX` è determinato dalla dimensione del blocco richiesto `count`, oppure, se `count` è troppo grande, restituisce `operator delete(ptr)`.

## <a name="equals"></a>  rts_alloc::equals

Confronta due cache per stabilirne l'uguaglianza.

```cpp
bool equals(const sync<_Cache>& _Other) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`_Cache`|Oggetto cache associato al filtro.|
|`_Other`|Oggetto cache da confrontare per verificarne l'uguaglianza.|

### <a name="remarks"></a>Note

`true` se il risultato di `caches[0].equals(other.caches[0])`; in caso contrario, `false`. `caches` rappresenta una matrice di oggetti cache.

## <a name="see-also"></a>Vedere anche

[ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl)<br/>
[\<allocators>](../standard-library/allocators-header.md)<br/>
