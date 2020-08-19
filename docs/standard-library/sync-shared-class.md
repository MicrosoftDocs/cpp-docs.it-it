---
title: Classe sync_shared
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::sync_shared
- allocators/stdext::sync_shared::allocate
- allocators/stdext::sync_shared::deallocate
- allocators/stdext::sync_shared::equals
helpviewer_keywords:
- stdext::sync_shared
- stdext::sync_shared [C++], allocate
- stdext::sync_shared [C++], deallocate
- stdext::sync_shared [C++], equals
ms.assetid: cab3af9e-3d1a-4f2c-8580-0f89e5687d8e
ms.openlocfilehash: 8b516762f0ae2f6d25c4d5109cbc9870f1254b89
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88562077"
---
# <a name="sync_shared-class"></a>Classe sync_shared

Descrive un [filtro di sincronizzazione](../standard-library/allocators-header.md) che usa un mutex per controllare l'accesso a un oggetto della cache condiviso da tutti gli allocatori.

## <a name="syntax"></a>Sintassi

```cpp
template <class Cache>
class sync_shared
```

### <a name="parameters"></a>Parametri

*Cache*\
Tipo di cache associato al filtro di sincronizzazione. Può essere [`cache_chunklist`](../standard-library/cache-chunklist-class.md) , [`cache_freelist`](../standard-library/cache-freelist-class.md) o [`cache_suballoc`](../standard-library/cache-suballoc-class.md) .

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[allocare](#allocate)|Alloca un blocco di memoria.|
|[deallocare](#deallocate)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|
|[equals](#equals)|Confronta due cache per stabilirne l'uguaglianza.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<allocators>

**Spazio dei nomi:** stdext

## <a name="sync_sharedallocate"></a><a name="allocate"></a> sync_shared:: allocate

Alloca un blocco di memoria.

```cpp
void *allocate(std::size_t count);
```

### <a name="parameters"></a>Parametri

*conteggio*\
Numero di elementi della matrice da allocare.

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto allocato.

### <a name="remarks"></a>Osservazioni

La funzione membro blocca il mutex, chiama `cache.allocate(count)`, sblocca il mutex e restituisce il risultato della precedente chiamata a `cache.allocate(count)`. `cache` rappresenta l'oggetto cache corrente.

## <a name="sync_shareddeallocate"></a><a name="deallocate"></a> sync_shared::d eallocate

Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.

```cpp
void deallocate(void* ptr, std::size_t count);
```

### <a name="parameters"></a>Parametri

*PTR*\
Puntatore al primo oggetto che deve essere deallocato dall'archivio.

*conteggio*\
Numero di oggetti da deallocare dall'archivio.

### <a name="remarks"></a>Osservazioni

La funzione membro blocca il mutex, chiama `cache.deallocate(ptr, count)`, dove `cache` rappresenta l'oggetto cache, e quindi sblocca il mutex.

## <a name="sync_sharedequals"></a><a name="equals"></a> sync_shared:: Equals

Confronta due cache per stabilirne l'uguaglianza.

```cpp
bool equals(const sync_shared<Cache>& Other) const;
```

### <a name="parameters"></a>Parametri

*Cache*\
Tipo di cache associato al filtro di sincronizzazione.

*Altri*\
Cache da confrontare per verificarne l'uguaglianza.

### <a name="return-value"></a>Valore restituito

**`true`** Se il risultato di `cache.equals(Other.cache)` , dove `cache` rappresenta l'oggetto cache, è **`true`** ; in caso contrario, **`false`** .

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)
