---
description: 'Altre informazioni su: max_none Class'
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
ms.openlocfilehash: 9d3f6bf2d7dda114ed7541b91da8081d501ddec5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97149253"
---
# <a name="max_none-class"></a>Classe max_none

Descrive un oggetto [classe max](../standard-library/allocators-header.md) che limita un oggetto [freelist](../standard-library/freelist-class.md) a una lunghezza massima pari a zero.

## <a name="syntax"></a>Sintassi

```cpp
template <std::size_t Max>
class max_none
```

### <a name="parameters"></a>Parametri

*Max*\
Classe max che determina il numero massimo di elementi da archiviare nell'oggetto `freelist`.

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[allocated](#allocated)|Incrementa il conteggio dei blocchi di memoria allocati.|
|[deallocati](#deallocated)|Decrementa il conteggio dei blocchi di memoria allocati.|
|[full](#full)|Restituisce un valore che specifica se all'elenco di disponibilità devono essere aggiunti altri blocchi di memoria.|
|[rilasciato](#released)|Decrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.|
|[saved](#saved)|Incrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<allocators>

**Spazio dei nomi:** stdext

## <a name="max_noneallocated"></a><a name="allocated"></a> max_none:: allocato

Incrementa il conteggio dei blocchi di memoria allocati.

```cpp
void allocated(std::size_t _Nx = 1);
```

### <a name="parameters"></a>Parametri

*_Nx*\
Valore di incremento.

### <a name="remarks"></a>Commenti

Questa funzione membro non esegue alcuna operazione. Viene chiamata dopo ogni chiamata eseguita da `cache_freelist::allocate` all'operatore **`new`** . L'argomento *_Nx* è il numero di blocchi di memoria nel blocco allocato dall'operatore **`new`** .

## <a name="max_nonedeallocated"></a><a name="deallocated"></a> max_none::d eallocated

Decrementa il conteggio dei blocchi di memoria allocati.

```cpp
void deallocated(std::size_t _Nx = 1);
```

### <a name="parameters"></a>Parametri

*_Nx*\
Valore di incremento.

### <a name="remarks"></a>Commenti

La funzione membro non esegue alcuna operazione. Questa funzione membro viene chiamata dopo ogni chiamata da `cache_freelist::deallocate` a Operator **`delete`** . L'argomento *_Nx* è il numero di blocchi di memoria nel blocco deallocato dall'operatore **`delete`** .

## <a name="max_nonefull"></a><a name="full"></a> max_none:: completo

Restituisce un valore che specifica se all'elenco di disponibilità devono essere aggiunti altri blocchi di memoria.

```cpp
bool full();
```

### <a name="return-value"></a>Valore restituito

Questa funzione membro restituisce sempre **`true`** .

### <a name="remarks"></a>Commenti

Questa funzione membro viene chiamata da `cache_freelist::deallocate`. Se la chiamata restituisce **`true`** , `deallocate` inserisce il blocco di memoria nell'elenco di disponibilità; se restituisce **`false`** , `deallocate` chiama operator **`delete`** per deallocare il blocco.

## <a name="max_nonereleased"></a><a name="released"></a> max_none:: rilasciata

Decrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.

```cpp
void released();
```

### <a name="remarks"></a>Commenti

Questa funzione membro non esegue alcuna operazione. La funzione membro `released` della classe max corrente viene chiamata da `cache_freelist::allocate` ogni volta che rimuove un blocco di memoria dall'elenco di disponibilità.

## <a name="max_nonesaved"></a><a name="saved"></a> max_none:: salvato

Incrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.

```cpp
void saved();
```

### <a name="remarks"></a>Commenti

Questa funzione membro non esegue alcuna operazione. Viene chiamata da `cache_freelist::deallocate` ogni volta che inserisce un blocco di memoria nell'elenco di disponibilità.

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)
