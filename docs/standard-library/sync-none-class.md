---
title: Classe sync_none
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::sync_none
- allocators/stdext::sync_none::allocate
- allocators/stdext::sync_none::deallocate
- allocators/stdext::sync_none::equals
helpviewer_keywords:
- stdext::sync_none
- stdext::sync_none [C++], allocate
- stdext::sync_none [C++], deallocate
- stdext::sync_none [C++], equals
ms.assetid: f7473cee-14f3-4fe1-88bc-68cd085e59e1
ms.openlocfilehash: 4caf2cc2b6aa7494f343d10709f3190cb41631be
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232911"
---
# <a name="sync_none-class"></a>Classe sync_none

Descrive un [filtro di sincronizzazione](../standard-library/allocators-header.md) che non fornisce alcuna sincronizzazione.

## <a name="syntax"></a>Sintassi

```cpp
template <class Cache>
class sync_none
```

### <a name="parameters"></a>Parametri

|Parametro|Description|
|---------------|-----------------|
|`Cache`|Tipo di cache associato al filtro di sincronizzazione. Può essere [cache_chunklist](../standard-library/cache-chunklist-class.md), [cache_freelist](../standard-library/cache-freelist-class.md) o [cache_suballoc](../standard-library/cache-suballoc-class.md).|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[allocate](#allocate)|Alloca un blocco di memoria.|
|[deallocare](#deallocate)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|
|[equals](#equals)|Confronta due cache per stabilirne l'uguaglianza.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<allocators>

**Spazio dei nomi:** stdext

## <a name="sync_noneallocate"></a><a name="allocate"></a>sync_none:: allocate

Alloca un blocco di memoria.

```cpp
void *allocate(std::size_t count);
```

### <a name="parameters"></a>Parametri

|Parametro|Description|
|---------------|-----------------|
|*count*|Numero di elementi della matrice da allocare.|

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce `cache.allocate(count)`, dove `cache` è l'oggetto cache.

## <a name="sync_nonedeallocate"></a><a name="deallocate"></a>sync_none::d eallocate

Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.

```cpp
void deallocate(void* ptr, std::size_t count);
```

### <a name="parameters"></a>Parametri

|Parametro|Description|
|---------------|-----------------|
|*ptr*|Puntatore al primo oggetto che deve essere deallocato dall'archivio.|
|*count*|Numero di oggetti da deallocare dall'archivio.|

### <a name="remarks"></a>Osservazioni

La funzione membro chiama `cache.deallocate(ptr, count)`, dove `cache` rappresenta l'oggetto cache.

## <a name="sync_noneequals"></a><a name="equals"></a>sync_none:: Equals

Confronta due cache per stabilirne l'uguaglianza.

```cpp
bool equals(const sync<Cache>& Other) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Description|
|---------------|-----------------|
|*Cache*|Oggetto cache del filtro di sincronizzazione.|
|*Altro*|Oggetto cache da confrontare per verificarne l'uguaglianza.|

### <a name="return-value"></a>Valore restituito

La funzione membro restituisce sempre **`true`** .

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)
