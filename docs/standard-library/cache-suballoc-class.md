---
title: Classe cache_suballoc | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- allocators/stdext::cache_suballoc
- allocators/stdext::cache_suballoc::allocate
- allocators/stdext::cache_suballoc::deallocate
dev_langs:
- C++
helpviewer_keywords:
- stdext::cache_suballoc
- stdext::cache_suballoc [C++], allocate
- stdext::cache_suballoc [C++], deallocate
ms.assetid: 9ea9c5e9-1dcc-45d0-b3a7-a56a93d88898
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ccc01372d08edb997ed6b0aaa70be69fde60a1e2
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38954323"
---
# <a name="cachesuballoc-class"></a>Classe cache_suballoc

Definisce un [allocatore di blocco](../standard-library/allocators-header.md) che alloca e dealloca blocchi di memoria di un'unica dimensione.

## <a name="syntax"></a>Sintassi

```cpp
template <std::size_t Sz, size_t Nelts = 20>
class cache_suballoc
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*sz*|Numero di elementi della matrice da allocare.|

## <a name="remarks"></a>Note

La classe di modello cache_suballoc archivia blocchi di memoria deallocati in un elenco di disponibilità con lunghezza non associato, usando `freelist<sizeof(Type), max_unbounded>`e Sottoalloca blocchi di memoria da una porzione più grande allocata con **operatore new** quando è l'elenco di disponibilità vuoto.

Ogni porzione contiene `Sz * Nelts` byte di memoria utilizzabile e i dati che **operatore new** e **operatore delete** richiedono. Le porzioni allocate non vengono mai liberate.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[cache_suballoc](#cache_suballoc)|Costruisce un oggetto di tipo `cache_suballoc`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[allocate](#allocate)|Alloca un blocco di memoria.|
|[deallocate](#deallocate)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="allocate"></a>  cache_suballoc::allocate

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

### <a name="remarks"></a>Note

## <a name="cache_suballoc"></a>  cache_suballoc::cache_suballoc

Costruisce un oggetto di tipo `cache_suballoc`.

```cpp
cache_suballoc();
```

### <a name="remarks"></a>Note

## <a name="deallocate"></a>  cache_suballoc::deallocate

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

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)<br/>
