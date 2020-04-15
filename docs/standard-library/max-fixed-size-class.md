---
title: Classe max_fixed_size
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::max_fixed_size
- allocators/stdext::max_fixed_size::allocated
- allocators/stdext::max_fixed_size::deallocated
- allocators/stdext::max_fixed_size::full
- allocators/stdext::max_fixed_size::released
- allocators/stdext::max_fixed_size::saved
helpviewer_keywords:
- stdext::max_fixed_size
- stdext::max_fixed_size [C++], allocated
- stdext::max_fixed_size [C++], deallocated
- stdext::max_fixed_size [C++], full
- stdext::max_fixed_size [C++], released
- stdext::max_fixed_size [C++], saved
ms.assetid: 8c8f4588-37e9-4579-8168-ba3553800914
ms.openlocfilehash: 7f75dd71caa3cfcfec19264b1da62c6d47a3e01d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371002"
---
# <a name="max_fixed_size-class"></a>Classe max_fixed_size

Descrive un oggetto [classe max](../standard-library/allocators-header.md) che limita un oggetto [freelist](../standard-library/freelist-class.md) a una lunghezza massima fissa.

## <a name="syntax"></a>Sintassi

```cpp
template <std::size_t Max>
class max_fixed_size
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Massimo*|Classe max che determina il numero massimo di elementi da archiviare nell'oggetto `freelist`.|

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[max_fixed_size](#max_fixed_size)|Costruisce un oggetto di tipo `max_fixed_size`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[allocated](#allocated)|Incrementa il conteggio dei blocchi di memoria allocati.|
|[Deallocato](#deallocated)|Decrementa il conteggio dei blocchi di memoria allocati.|
|[Completo](#full)|Restituisce un valore che specifica se all'elenco di disponibilità devono essere aggiunti altri blocchi di memoria.|
|[Rilasciato](#released)|Decrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.|
|[saved](#saved)|Incrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="max_fixed_sizeallocated"></a><a name="allocated"></a>max_fixed_size::assegnato

Incrementa il conteggio dei blocchi di memoria allocati.

```cpp
void allocated(std::size_t _Nx = 1);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*_Nx*|Valore di incremento.|

### <a name="remarks"></a>Osservazioni

La funzione membro non esegue alcuna operazione. Questa funzione membro viene chiamata `cache_freelist::allocate` dopo ogni chiamata riuscita da all'operatore **new**. L'argomento *_Nx* è il numero di blocchi di memoria nel blocco allocato dall'operatore **new**.

## <a name="max_fixed_sizedeallocated"></a><a name="deallocated"></a>max_fixed_size::dallocata

Decrementa il conteggio dei blocchi di memoria allocati.

```cpp
void deallocated(std::size_t _Nx = 1);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*_Nx*|Valore di incremento.|

### <a name="remarks"></a>Osservazioni

La funzione membro non esegue alcuna operazione. Questa funzione membro viene chiamata `cache_freelist::deallocate` dopo ogni chiamata da per l'operatore **delete**. L'argomento *_Nx* è il numero di blocchi di memoria nel blocco deallocato dall'operatore **delete**.

## <a name="max_fixed_sizefull"></a><a name="full"></a>max_fixed_size::full

Restituisce un valore che specifica se all'elenco di disponibilità devono essere aggiunti altri blocchi di memoria.

```cpp
bool full();
```

### <a name="return-value"></a>Valore restituito

**true** `Max <= _Nblocks`se ; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata da `cache_freelist::deallocate`. Se la **true**chiamata `deallocate` restituisce true , inserisce il blocco di memoria nell'elenco libero; Se restituisce `deallocate` false, chiama operator **delete** per deallocare il blocco.

## <a name="max_fixed_sizemax_fixed_size"></a><a name="max_fixed_size"></a>max_fixed_size::max_fixed_size

Costruisce un oggetto di tipo `max_fixed_size`.

```cpp
max_fixed_size();
```

### <a name="remarks"></a>Osservazioni

Questo costruttore inizializza il valore archiviato `_Nblocks` su zero.

## <a name="max_fixed_sizereleased"></a><a name="released"></a>max_fixed_size::released

Decrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.

```cpp
void released();
```

### <a name="remarks"></a>Osservazioni

Decrementa il valore archiviato `_Nblocks`. La `released` funzione membro della [classe](../standard-library/allocators-header.md) max `cache_freelist::allocate` corrente viene chiamata da ogni volta che rimuove un blocco di memoria dall'elenco libero.

## <a name="max_fixed_sizesaved"></a><a name="saved"></a>max_fixed_size::salvato

Incrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.

```cpp
void saved();
```

### <a name="remarks"></a>Osservazioni

Questa funzione membro incrementa il valore archiviato `_Nblocks`. Viene chiamata da `cache_freelist::deallocate` ogni volta che inserisce un blocco di memoria nell'elenco di disponibilità.

## <a name="see-also"></a>Vedere anche

[\<allocatori>](../standard-library/allocators-header.md)
