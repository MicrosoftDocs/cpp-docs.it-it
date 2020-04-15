---
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
ms.openlocfilehash: d0dd6176a34bd625069511106c491225d1467d08
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366749"
---
# <a name="cache_chunklist-class"></a>Classe cache_chunklist

Definisce un [allocatore di blocco](../standard-library/allocators-header.md) che alloca e dealloca blocchi di memoria di un'unica dimensione.

## <a name="syntax"></a>Sintassi

```cpp
template <std::size_t Sz, std::size_t Nelts = 20>
class cache_chunklist
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Sz*|Numero di elementi della matrice da allocare.|

## <a name="remarks"></a>Osservazioni

Questo modello di classe utilizza **operator new** per allocare blocchi di memoria non elaborata, suballocando blocchi per allocare spazio di archiviazione per un blocco di memoria quando necessario; archivia i blocchi di memoria deallocati in un elenco libero separato per ogni blocco e utilizza **operator delete** per deallocare un blocco quando nessuno dei relativi blocchi di memoria è in uso.

Ogni blocco di memoria contiene *Sz* byte di memoria utilizzabile e un puntatore al blocco a cui appartiene. Ogni blocco `Nelts` contiene blocchi di memoria, tre puntatori, un int e i dati che **l'operatore new** e **operator delete** richiedono.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[cache_chunklist](#cache_chunklist)|Costruisce un oggetto di tipo `cache_chunklist`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[Allocare](#allocate)|Alloca un blocco di memoria.|
|[Deallocare](#deallocate)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="cache_chunklistallocate"></a><a name="allocate"></a>cache_chunklist::allocare

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

## <a name="cache_chunklistcache_chunklist"></a><a name="cache_chunklist"></a>cache_chunklist::cache_chunklist

Costruisce un oggetto di tipo `cache_chunklist`.

```cpp
cache_chunklist();
```

### <a name="remarks"></a>Osservazioni

## <a name="cache_chunklistdeallocate"></a><a name="deallocate"></a>cache_chunklist::deallocate

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

## <a name="see-also"></a>Vedere anche

[\<allocatori>](../standard-library/allocators-header.md)
