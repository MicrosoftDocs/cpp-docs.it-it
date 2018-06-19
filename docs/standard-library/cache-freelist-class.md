---
title: Classe cache_freelist | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- allocators/stdext::cache_freelist
- allocators/stdext::cache_freelist::allocate
- allocators/stdext::cache_freelist::deallocate
dev_langs:
- C++
helpviewer_keywords:
- stdext::cache_freelist
- stdext::cache_freelist [C++], allocate
- stdext::cache_freelist [C++], deallocate
ms.assetid: 840694de-36ba-470f-8dae-2b723d5a8cd9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8478490914a6f9049cd54ec78c8de8a1e519f36f
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33845674"
---
# <a name="cachefreelist-class"></a>Classe cache_freelist

Definisce un [allocatore di blocco](../standard-library/allocators-header.md) che alloca e dealloca blocchi di memoria di un'unica dimensione.

## <a name="syntax"></a>Sintassi

```cpp
template <std::size_t Sz, class Max>
class cache_freelist
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`Sz`|Numero di elementi della matrice da allocare.|
|`Max`|La classe max che rappresenta la dimensione massima dell'elenco di disponibilità. Può essere [max_none](../standard-library/max-fixed-size-class.md), [max_unbounded](../standard-library/max-none-class.md), [max_fixed_size](../standard-library/max-unbounded-class.md) o [max_variable_size](../standard-library/max-variable-size-class.md).|

## <a name="remarks"></a>Note

La classe di modello cache_freelist gestisce un elenco di disponibilità dei blocchi di memoria di dimensioni `Sz`. Quando l'elenco di disponibilità è pieno usa `operator delete` per deallocare i blocchi di memoria. Quando l'elenco di disponibilità è vuoto usa `operator new` per allocare nuovi blocchi di memoria. La dimensione massima dell'elenco di disponibilità è determinata dalla classe max passata nel parametro `Max`.

Ogni blocco di memoria contiene `Sz` byte di memoria utilizzabile e i dati richiesti da `operator new` e `operator delete`.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[cache_freelist](#cache_freelist)|Costruisce un oggetto di tipo `cache_freelist`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[allocate](#allocate)|Alloca un blocco di memoria.|
|[deallocate](#deallocate)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="allocate"></a>  cache_freelist::allocate

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

## <a name="cache_freelist"></a>  cache_freelist::cache_freelist

Costruisce un oggetto di tipo `cache_freelist`.

```cpp
cache_freelist();
```

### <a name="remarks"></a>Note

## <a name="deallocate"></a>  cache_freelist::deallocate

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

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)<br/>
