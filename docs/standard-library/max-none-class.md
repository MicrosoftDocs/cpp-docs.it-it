---
title: Classe max_none
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::max_none
- allocators/stdext::max_none::allocated
- allocators/stdext::max_none::deallocated
- allocators/stdext::max_none::full
- allocators/stdext::max_none::released
- allocators/stdext::max_none::saved
helpviewer_keywords:
- stdext::max_none
- stdext::max_none [C++], allocated
- stdext::max_none [C++], deallocated
- stdext::max_none [C++], full
- stdext::max_none [C++], released
- stdext::max_none [C++], saved
ms.assetid: 12ab5376-412e-479c-86dc-2c3d6a3559b6
ms.openlocfilehash: 0d409928de4bf66bcc6d6dda3008131f87e790c3
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68460165"
---
# <a name="maxnone-class"></a>Classe max_none

Descrive un oggetto [classe max](../standard-library/allocators-header.md) che limita un oggetto [freelist](../standard-library/freelist-class.md) a una lunghezza massima pari a zero.

## <a name="syntax"></a>Sintassi

```cpp
template <std::size_t Max>
class max_none
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Max*|Classe max che determina il numero massimo di elementi da archiviare nell'oggetto `freelist`.|

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

## <a name="allocated"></a>  max_none::allocated

Incrementa il conteggio dei blocchi di memoria allocati.

```cpp
void allocated(std::size_t _Nx = 1);
```

### <a name="parameters"></a>Parametri

|Parametro|DESCRIZIONE|
|---------------|-----------------|
|*_Nx*|Valore di incremento.|

### <a name="remarks"></a>Note

Questa funzione membro non esegue alcuna operazione. Viene chiamata dopo ogni chiamata eseguita da `cache_freelist::allocate` a Operator **New**. L'argomento *_Nx* è il numero di blocchi di memoria nel blocco allocato da operator **New**.

## <a name="deallocated"></a>  max_none::deallocated

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

## <a name="full"></a>  max_none::full

Restituisce un valore che specifica se all'elenco di disponibilità devono essere aggiunti altri blocchi di memoria.

```cpp
bool full();
```

### <a name="return-value"></a>Valore restituito

Questa funzione membro restituisce sempre **true**.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata da `cache_freelist::deallocate`. Se la chiamata restituisce **true**, `deallocate` inserisce il blocco di memoria nell'elenco di disponibilità; se restituisce false, `deallocate` chiama l'operatore **Delete** per deallocare il blocco.

## <a name="released"></a>  max_none::released

Decrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.

```cpp
void released();
```

### <a name="remarks"></a>Note

Questa funzione membro non esegue alcuna operazione. La funzione membro `released` della classe max corrente viene chiamata da `cache_freelist::allocate` ogni volta che rimuove un blocco di memoria dall'elenco di disponibilità.

## <a name="saved"></a>  max_none::saved

Incrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.

```cpp
void saved();
```

### <a name="remarks"></a>Note

Questa funzione membro non esegue alcuna operazione. Viene chiamata da `cache_freelist::deallocate` ogni volta che inserisce un blocco di memoria nell'elenco di disponibilità.

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)
