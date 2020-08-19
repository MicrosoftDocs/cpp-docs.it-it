---
title: Classe cache_suballoc
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::cache_suballoc
- allocators/stdext::cache_suballoc::allocate
- allocators/stdext::cache_suballoc::deallocate
helpviewer_keywords:
- stdext::cache_suballoc
- stdext::cache_suballoc [C++], allocate
- stdext::cache_suballoc [C++], deallocate
ms.assetid: 9ea9c5e9-1dcc-45d0-b3a7-a56a93d88898
ms.openlocfilehash: 410cdc7bd45c54c252ce33c7d8e3e2f883ac0eb4
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88560621"
---
# <a name="cache_suballoc-class"></a>Classe cache_suballoc

Definisce un [allocatore di blocco](../standard-library/allocators-header.md) che alloca e dealloca blocchi di memoria di un'unica dimensione.

## <a name="syntax"></a>Sintassi

```cpp
template <std::size_t Sz, size_t Nelts = 20>
class cache_suballoc
```

### <a name="parameters"></a>Parametri

*SZ*\
Numero di elementi della matrice da allocare.

## <a name="remarks"></a>Osservazioni

Il modello di classe cache_suballoc archivia i blocchi di memoria deallocati in un elenco libero con lunghezza non vincolata, usando `freelist<sizeof(Type), max_unbounded>` e suballoca i blocchi di memoria da un blocco maggiore allocato con **operator new** quando l'elenco di disponibilità è vuoto.

Ogni blocco include `Sz * Nelts` byte di memoria utilizzabile e i dati necessari per **operator new** e **operator delete** . Le porzioni allocate non vengono mai liberate.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[cache_suballoc](#cache_suballoc)|Costruisce un oggetto di tipo `cache_suballoc`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[allocare](#allocate)|Alloca un blocco di memoria.|
|[deallocare](#deallocate)|Libera un numero specificato di oggetti dall'archiviazione iniziando da una posizione specificata.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<allocators>

**Spazio dei nomi:** stdext

## <a name="cache_suballocallocate"></a><a name="allocate"></a> cache_suballoc:: allocate

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

## <a name="cache_suballoccache_suballoc"></a><a name="cache_suballoc"></a> cache_suballoc:: cache_suballoc

Costruisce un oggetto di tipo `cache_suballoc`.

```cpp
cache_suballoc();
```

### <a name="remarks"></a>Osservazioni

## <a name="cache_suballocdeallocate"></a><a name="deallocate"></a> cache_suballoc::d eallocate

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

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)
