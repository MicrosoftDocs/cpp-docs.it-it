---
title: Classe cache_chunklist | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- allocators/stdext::cache_chunklist
- allocators/stdext::cache_chunklist::allocate
- allocators/stdext::cache_chunklist::deallocate
dev_langs:
- C++
helpviewer_keywords:
- stdext::cache_chunklist
- stdext::cache_chunklist [C++], allocate
- stdext::cache_chunklist [C++], deallocate
ms.assetid: af19eccc-4ae7-4a34-bbb2-81e397424cb9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 808340df89bb548fee57604f25409c117933cc4e
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38953260"
---
# <a name="cachechunklist-class"></a>Classe cache_chunklist

Definisce un [allocatore di blocco](../standard-library/allocators-header.md) che alloca e dealloca blocchi di memoria di un'unica dimensione.

## <a name="syntax"></a>Sintassi

```cpp
template <std::size_t Sz, std::size_t Nelts = 20>
class cache_chunklist
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*sz*|Numero di elementi della matrice da allocare.|

## <a name="remarks"></a>Note

Questa classe modello viene utilizzato **operatore new** per allocare porzioni di memoria non elaborata, con sottoallocazione dei blocchi per allocare memoria per un blocco di memoria quando necessario; archivia blocchi di memoria deallocati in un elenco di disponibilità separato per ogni porzione e Usa **operatore delete** per deallocare una porzione quando nessuno dei relativi blocchi di memoria è in uso.

Ogni blocco di memoria contiene *Sz* byte di memoria utilizzabile e un puntatore alla porzione a cui appartiene. Ogni porzione contiene `Nelts` blocchi di memoria, tre puntatori, un int e i dati che **operatore new** e **operatore delete** richiedono.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[cache_chunklist](#cache_chunklist)|Costruisce un oggetto di tipo `cache_chunklist`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[allocate](#allocate)|Alloca un blocco di memoria.|
|[deallocate](#deallocate)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="allocate"></a>  cache_chunklist::allocate

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

## <a name="cache_chunklist"></a>  cache_chunklist::cache_chunklist

Costruisce un oggetto di tipo `cache_chunklist`.

```cpp
cache_chunklist();
```

### <a name="remarks"></a>Note

## <a name="deallocate"></a>  cache_chunklist::deallocate

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
