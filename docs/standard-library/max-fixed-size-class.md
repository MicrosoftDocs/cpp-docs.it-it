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
ms.openlocfilehash: bbc39a169f9a4bbac3e78b208b3a1a31e4e30ff2
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68456372"
---
# <a name="maxfixedsize-class"></a>Classe max_fixed_size

Descrive un oggetto [classe max](../standard-library/allocators-header.md) che limita un oggetto [freelist](../standard-library/freelist-class.md) a una lunghezza massima fissa.

## <a name="syntax"></a>Sintassi

```cpp
template <std::size_t Max>
class max_fixed_size
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Max*|Classe max che determina il numero massimo di elementi da archiviare nell'oggetto `freelist`.|

### <a name="constructors"></a>Costruttori

|Costruttore|DESCRIZIONE|
|-|-|
|[max_fixed_size](#max_fixed_size)|Costruisce un oggetto di tipo `max_fixed_size`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|DESCRIZIONE|
|-|-|
|[allocated](#allocated)|Incrementa il conteggio dei blocchi di memoria allocati.|
|[deallocated](#deallocated)|Decrementa il conteggio dei blocchi di memoria allocati.|
|[full](#full)|Restituisce un valore che specifica se all'elenco di disponibilità devono essere aggiunti altri blocchi di memoria.|
|[released](#released)|Decrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.|
|[saved](#saved)|Incrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="allocated"></a>  max_fixed_size::allocated

Incrementa il conteggio dei blocchi di memoria allocati.

```cpp
void allocated(std::size_t _Nx = 1);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*_Nx*|Valore di incremento.|

### <a name="remarks"></a>Note

La funzione membro non esegue alcuna operazione. Questa funzione membro viene chiamata dopo ogni chiamata eseguita da `cache_freelist::allocate` a Operator **New**. L'argomento *_Nx* è il numero di blocchi di memoria nel blocco allocato da operator **New**.

## <a name="deallocated"></a>  max_fixed_size::deallocated

Decrementa il conteggio dei blocchi di memoria allocati.

```cpp
void deallocated(std::size_t _Nx = 1);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*_Nx*|Valore di incremento.|

### <a name="remarks"></a>Note

La funzione membro non esegue alcuna operazione. Questa funzione membro viene chiamata dopo ogni chiamata da `cache_freelist::deallocate` a Operator **Delete**. L'argomento *_Nx* è il numero di blocchi di memoria nel blocco deallocato dall'operatore **Delete**.

## <a name="full"></a>  max_fixed_size::full

Restituisce un valore che specifica se all'elenco di disponibilità devono essere aggiunti altri blocchi di memoria.

```cpp
bool full();
```

### <a name="return-value"></a>Valore restituito

**true** se `Max <= _Nblocks`; in caso contrario, **false**.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata da `cache_freelist::deallocate`. Se la chiamata restituisce **true**, `deallocate` inserisce il blocco di memoria nell'elenco di disponibilità; se restituisce false, `deallocate` chiama l'operatore **Delete** per deallocare il blocco.

## <a name="max_fixed_size"></a>  max_fixed_size::max_fixed_size

Costruisce un oggetto di tipo `max_fixed_size`.

```cpp
max_fixed_size();
```

### <a name="remarks"></a>Note

Questo costruttore inizializza il valore archiviato `_Nblocks` su zero.

## <a name="released"></a>  max_fixed_size::released

Decrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.

```cpp
void released();
```

### <a name="remarks"></a>Note

Decrementa il valore archiviato `_Nblocks`. La funzione membro `released` della [classe max](../standard-library/allocators-header.md) corrente viene chiamata da `cache_freelist::allocate` ogni volta che rimuove un blocco di memoria dall'elenco di disponibilità.

## <a name="saved"></a>  max_fixed_size::saved

Incrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.

```cpp
void saved();
```

### <a name="remarks"></a>Note

Questa funzione membro incrementa il valore archiviato `_Nblocks`. Viene chiamata da `cache_freelist::deallocate` ogni volta che inserisce un blocco di memoria nell'elenco di disponibilità.

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)
