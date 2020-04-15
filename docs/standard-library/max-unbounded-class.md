---
title: Classe max_unbounded
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::max_unbounded
- allocators/stdext::max_unbounded::allocated
- allocators/stdext::max_unbounded::deallocated
- allocators/stdext::max_unbounded::full
- allocators/stdext::max_unbounded::released
- allocators/stdext::max_unbounded::saved
helpviewer_keywords:
- stdext::max_unbounded
- stdext::max_unbounded [C++], allocated
- stdext::max_unbounded [C++], deallocated
- stdext::max_unbounded [C++], full
- stdext::max_unbounded [C++], released
- stdext::max_unbounded [C++], saved
ms.assetid: e34627a9-c231-4031-a483-cbb0514fff46
ms.openlocfilehash: fbc4351297ab8a3cc90a2a77fa31c3b134f10eab
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370990"
---
# <a name="max_unbounded-class"></a>Classe max_unbounded

Descrive un oggetto [classe max](../standard-library/allocators-header.md) che non limita la lunghezza massima di un oggetto [freelist](../standard-library/freelist-class.md).

## <a name="syntax"></a>Sintassi

```cpp
class max_unbounded
```

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

## <a name="max_unboundedallocated"></a><a name="allocated"></a>max_unbounded:: allocato

Incrementa il conteggio dei blocchi di memoria allocati.

```cpp
void allocated(std::size_t _Nx = 1);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*_Nx*|Valore di incremento.|

### <a name="remarks"></a>Osservazioni

Questa funzione membro non esegue alcuna operazione. Viene chiamato dopo ogni `cache_freelist::allocate` chiamata riuscita da all'operatore **new**. L'argomento *_Nx* è il numero di blocchi di memoria nel blocco allocato dall'operatore **new**.

## <a name="max_unboundeddeallocated"></a><a name="deallocated"></a>max_unbounded::dallocazione

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

## <a name="max_unboundedfull"></a><a name="full"></a>max_unbounded::full

Restituisce un valore che specifica se all'elenco di disponibilità devono essere aggiunti altri blocchi di memoria.

```cpp
bool full();
```

### <a name="return-value"></a>Valore restituito

La funzione membro restituisce sempre **false**.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata da `cache_freelist::deallocate`. Se la **true**chiamata `deallocate` restituisce true , inserisce il blocco di memoria nell'elenco libero; Se restituisce `deallocate` false, chiama operator **delete** per deallocare il blocco.

## <a name="max_unboundedreleased"></a><a name="released"></a>max_unbounded::rilasciato

Decrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.

```cpp
void released();
```

### <a name="remarks"></a>Osservazioni

Questa funzione membro non esegue alcuna operazione. La funzione membro `released` della classe max corrente viene chiamata da `cache_freelist::allocate` ogni volta che rimuove un blocco di memoria dall'elenco di disponibilità.

## <a name="max_unboundedsaved"></a><a name="saved"></a>max_unbounded::salvato

Incrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.

```cpp
void saved();
```

### <a name="remarks"></a>Osservazioni

Questa funzione membro non esegue alcuna operazione. Viene chiamata da `cache_freelist::deallocate` ogni volta che inserisce un blocco di memoria nell'elenco di disponibilità.

## <a name="see-also"></a>Vedere anche

[\<allocatori>](../standard-library/allocators-header.md)
