---
description: 'Altre informazioni su: cache_chunklist Class'
title: Classe cache_chunklist
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::cache_chunklist
- allocators/stdext::cache_chunklist::allocate
- allocators/stdext::cache_chunklist::deallocate
helpviewer_keywords:
- stdext::cache_chunklist
- stdext::cache_chunklist [C++], allocate
- stdext::cache_chunklist [C++], deallocate
ms.assetid: af19eccc-4ae7-4a34-bbb2-81e397424cb9
ms.openlocfilehash: 264713ed12727d45928f40f2bc6a790e0e3b1db1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325398"
---
# <a name="cache_chunklist-class"></a>Classe cache_chunklist

Definisce un [allocatore di blocco](../standard-library/allocators-header.md) che alloca e dealloca blocchi di memoria di un'unica dimensione.

## <a name="syntax"></a>Sintassi

```cpp
template <std::size_t Sz, std::size_t Nelts = 20>
class cache_chunklist
```

### <a name="parameters"></a>Parametri

*SZ*\
Numero di elementi della matrice da allocare.

## <a name="remarks"></a>Commenti

Questo modello di classe USA **operator new** per allocare blocchi di memoria RAW, sottoallocando blocchi per allocare spazio di archiviazione per un blocco di memoria quando necessario; Archivia i blocchi di memoria deallocati in un elenco libero separato per ogni blocco e USA **operator delete** per deallocare un blocco quando nessuno dei blocchi di memoria è in uso.

Ogni blocco di memoria include *SZ* byte di memoria utilizzabile e un puntatore al blocco a cui appartiene. Ogni blocco include `Nelts` blocchi di memoria, tre puntatori, int e i dati necessari per **operator new** e **operator delete** .

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[cache_chunklist](#cache_chunklist)|Costruisce un oggetto di tipo `cache_chunklist`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[allocare](#allocate)|Alloca un blocco di memoria.|
|[deallocare](#deallocate)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<allocators>

**Spazio dei nomi:** stdext

## <a name="cache_chunklistallocate"></a><a name="allocate"></a> cache_chunklist:: allocate

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

## <a name="cache_chunklistcache_chunklist"></a><a name="cache_chunklist"></a> cache_chunklist:: cache_chunklist

Costruisce un oggetto di tipo `cache_chunklist`.

```cpp
cache_chunklist();
```

### <a name="remarks"></a>Commenti

## <a name="cache_chunklistdeallocate"></a><a name="deallocate"></a> cache_chunklist::d eallocate

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

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)
