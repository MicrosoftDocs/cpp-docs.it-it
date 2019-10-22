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
ms.openlocfilehash: d7840d114acfa0f3daa01c8dfdb6c6114829d93d
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72689907"
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
|*SZ*|Numero di elementi della matrice da allocare.|
|*Max*|La classe max che rappresenta la dimensione massima dell'elenco di disponibilità. Può essere [max_none](../standard-library/max-fixed-size-class.md), [max_unbounded](../standard-library/max-none-class.md), [max_fixed_size](../standard-library/max-unbounded-class.md) o [max_variable_size](../standard-library/max-variable-size-class.md).|

## <a name="remarks"></a>Note

Il modello di classe cache_freelist gestisce un elenco di blocchi di memoria di dimensioni *SZ*. Quando l'elenco di disponibilità è pieno, USA **operator delete** per deallocare i blocchi di memoria. Quando l'elenco di disponibilità è vuoto, USA **operator new** per allocare nuovi blocchi di memoria. La dimensione massima dell'elenco di disponibilità è determinata dalla classe max passata nel parametro *Max* .

Ogni blocco di memoria include *SZ* byte di memoria utilizzabile e i dati necessari per **operator new** e **operator delete** .

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
|*count*|Numero di elementi della matrice da allocare.|

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
|*ptr*|Puntatore al primo oggetto da deallocare dall'archivio.|
|*count*|Numero di oggetti da deallocare dall'archivio.|

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)
