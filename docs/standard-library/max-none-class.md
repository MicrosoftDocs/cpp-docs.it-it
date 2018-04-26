---
title: Classe max_none | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- allocators/stdext::max_none
- allocators/stdext::max_none::allocated
- allocators/stdext::max_none::deallocated
- allocators/stdext::max_none::full
- allocators/stdext::max_none::released
- allocators/stdext::max_none::saved
dev_langs:
- C++
helpviewer_keywords:
- stdext::max_none
- stdext::max_none [C++], allocated
- stdext::max_none [C++], deallocated
- stdext::max_none [C++], full
- stdext::max_none [C++], released
- stdext::max_none [C++], saved
ms.assetid: 12ab5376-412e-479c-86dc-2c3d6a3559b6
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7a730bbd3a51e444e2b30a6604ac195fab242cdf
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
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
|`Max`|Classe max che determina il numero massimo di elementi da archiviare nell'oggetto `freelist`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
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

|Parametro|Descrizione|
|---------------|-----------------|
|`_Nx`|Valore di incremento.|

### <a name="remarks"></a>Note

Questa funzione membro non esegue alcuna operazione. Viene chiamata dopo ogni chiamata eseguita da `cache_freelist::allocate` all'operatore `new`. L'argomento `_Nx` è il numero di blocchi di memoria inclusi nel blocco allocato dall'operatore `new`.

## <a name="deallocated"></a>  max_none::deallocated

Decrementa il conteggio dei blocchi di memoria allocati.

```cpp
void deallocated(std::size_t _Nx = 1);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`_Nx`|Valore di incremento.|

### <a name="remarks"></a>Note

La funzione membro non esegue alcuna operazione. Questa funzione viene chiamata dopo ogni chiamata eseguita da `cache_freelist::deallocate` all'operatore `delete`. L'argomento `_Nx` è il numero di blocchi di memoria inclusi nel blocco deallocato dall'operatore `delete`.

## <a name="full"></a>  max_none::full

Restituisce un valore che specifica se all'elenco di disponibilità devono essere aggiunti altri blocchi di memoria.

```cpp
bool full();
```

### <a name="return-value"></a>Valore restituito

Questa funzione membro restituisce sempre `true`.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata da `cache_freelist::deallocate`. Se la chiamata restituisce `true`, `deallocate` inserisce il blocco di memoria nell'elenco di disponibilità; se restituisce false, `deallocate` chiama l'operatore `delete` per deallocare il blocco.

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

[\<allocators>](../standard-library/allocators-header.md)<br/>
