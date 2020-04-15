---
title: Classe cache_freelist
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::cache_freelist
- allocators/stdext::cache_freelist::allocate
- allocators/stdext::cache_freelist::deallocate
helpviewer_keywords:
- stdext::cache_freelist
- stdext::cache_freelist [C++], allocate
- stdext::cache_freelist [C++], deallocate
ms.assetid: 840694de-36ba-470f-8dae-2b723d5a8cd9
ms.openlocfilehash: d757909d3e54fed35bf42b943b9f9740dffee115
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366742"
---
# <a name="cache_freelist-class"></a>Classe cache_freelist

Definisce un [allocatore di blocco](../standard-library/allocators-header.md) che alloca e dealloca blocchi di memoria di un'unica dimensione.

## <a name="syntax"></a>Sintassi

```cpp
template <std::size_t Sz, class Max>
class cache_freelist
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Sz*|Numero di elementi della matrice da allocare.|
|*Massimo*|La classe max che rappresenta la dimensione massima dell'elenco di disponibilità. Può essere [max_none](../standard-library/max-fixed-size-class.md), [max_unbounded](../standard-library/max-none-class.md), [max_fixed_size](../standard-library/max-unbounded-class.md) o [max_variable_size](../standard-library/max-variable-size-class.md).|

## <a name="remarks"></a>Osservazioni

Il modello di classe cache_freelist gestisce un elenco libero di blocchi di memoria di dimensioni *Sz*. Quando l'elenco libero è pieno utilizza **operator delete** per deallocare i blocchi di memoria. Quando l'elenco libero è vuoto utilizza **operator new** per allocare nuovi blocchi di memoria. La dimensione massima dell'elenco libero è determinata dalla classe max passata nel parametro *Max.*

Ogni blocco di memoria contiene *sz* byte di memoria utilizzabile e i dati che **operator new** e **operator delete** richiedono.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[cache_freelist](#cache_freelist)|Costruisce un oggetto di tipo `cache_freelist`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[Allocare](#allocate)|Alloca un blocco di memoria.|
|[Deallocare](#deallocate)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="cache_freelistallocate"></a><a name="allocate"></a>cache_freelist::allocare

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

## <a name="cache_freelistcache_freelist"></a><a name="cache_freelist"></a>cache_freelist::cache_freelist

Costruisce un oggetto di tipo `cache_freelist`.

```cpp
cache_freelist();
```

### <a name="remarks"></a>Osservazioni

## <a name="cache_freelistdeallocate"></a><a name="deallocate"></a>cache_freelist::deallocate

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
