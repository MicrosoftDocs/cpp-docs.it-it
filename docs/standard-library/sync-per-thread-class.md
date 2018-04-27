---
title: Classe sync_per_thread | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- allocators/stdext::sync_per_thread
- allocators/stdext::sync_per_thread::allocate
- allocators/stdext::sync_per_thread::deallocate
- allocators/stdext::sync_per_thread::equals
dev_langs:
- C++
helpviewer_keywords:
- stdext::sync_per_thread
- stdext::sync_per_thread [C++], allocate
- stdext::sync_per_thread [C++], deallocate
- stdext::sync_per_thread [C++], equals
ms.assetid: 47bf75f8-5b02-4760-b1d3-3099d08fe14c
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 815c36b50cb05c2d0677e9e3aa500d8874d4900a
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="syncperthread-class"></a>Classe sync_per_thread

Descrive un [filtro di sincronizzazione](../standard-library/allocators-header.md) che fornisce un oggetto cache separato per ogni thread.

## <a name="syntax"></a>Sintassi

```cpp
template <class Cache>
class sync_per_thread
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`Cache`|Tipo di cache associato al filtro di sincronizzazione. Può essere [cache_chunklist](../standard-library/cache-chunklist-class.md), [cache_freelist](../standard-library/cache-freelist-class.md) o [cache_suballoc](../standard-library/cache-suballoc-class.md).|

## <a name="remarks"></a>Note

Gli allocatori che usano `sync_per_thread` possono risultare uguali anche se i blocchi allocati in un thread non possono essere deallocati da un altro thread. Quando si usa uno di questi allocatori, i blocchi di memoria allocati in un thread non devono essere resi visibili agli altri thread. In pratica, questo significa che un contenitore che usa uno di questi allocatori deve risultare accessibile a un singolo thread.

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[allocate](#allocate)|Alloca un blocco di memoria.|
|[deallocate](#deallocate)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|
|[equals](#equals)|Confronta due cache per stabilirne l'uguaglianza.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="allocate"></a>  sync_per_thread::allocate

Alloca un blocco di memoria.

```cpp
void *allocate(std::size_t count);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`count`|Numero di elementi della matrice da allocare.|

### <a name="remarks"></a>Note

La funzione membro restituisce il risultato di una chiamata a `cache::allocate(count)` sull'oggetto cache appartenente al thread corrente. Se per il thread corrente non è stato allocato alcun oggetto cache, la funzione ne alloca subito uno.

## <a name="deallocate"></a>  sync_per_thread::deallocate

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

La funzione membro chiama `deallocate` sull'oggetto cache appartenente al thread corrente. Se per il thread corrente non è stato allocato alcun oggetto cache, la funzione ne alloca subito uno.

## <a name="equals"></a>  sync_per_thread::equals

Confronta due cache per stabilirne l'uguaglianza.

```cpp
bool equals(const sync<Cache>& Other) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`Cache`|Oggetto cache del filtro di sincronizzazione.|
|`Other`|Oggetto cache da confrontare per verificarne l'uguaglianza.|

### <a name="return-value"></a>Valore restituito

`false` se non è stato allocato alcun oggetto cache per questo oggetto o per l'oggetto `Other` nel thread corrente. In caso contrario, restituisce il risultato dell'applicazione di `operator==` ai due oggetti cache.

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)<br/>
