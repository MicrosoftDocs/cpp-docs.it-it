---
title: Classe max_variable_size| Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- allocators/stdext::max_variable_size
- allocators/stdext::max_variable_size::allocated
- allocators/stdext::max_variable_size::deallocated
- allocators/stdext::max_variable_size::full
- allocators/stdext::max_variable_size::released
- allocators/stdext::max_variable_size::saved
dev_langs:
- C++
helpviewer_keywords:
- stdext::max_variable_size
- stdext::max_variable_size [C++], allocated
- stdext::max_variable_size [C++], deallocated
- stdext::max_variable_size [C++], full
- stdext::max_variable_size [C++], released
- stdext::max_variable_size [C++], saved
ms.assetid: 9f2e9df0-4148-4b37-bc30-f8eca0ef86ae
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 974cee757708b9f7b1e48ea3bec3c4af98ced558
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38957652"
---
# <a name="maxvariablesize-class"></a>Classe max_variable_size

Descrive un oggetto [max class](../standard-library/allocators-header.md) che limita un oggetto [freelist](../standard-library/freelist-class.md) a una lunghezza massima approssimativamente proporzionale al numero di blocchi di memoria allocati.

## <a name="syntax"></a>Sintassi

```cpp
class max_variable_size
```

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[max_variable_size](#max_variable_size)|Costruisce un oggetto di tipo `max_variable_size`.|

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

## <a name="allocated"></a>  max_variable_size::allocated

Incrementa il conteggio dei blocchi di memoria allocati.

```cpp
void allocated(std::size_t _Nx = 1);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*_Nx*|Valore di incremento.|

### <a name="remarks"></a>Note

Questa funzione membro aggiunge *_Nx* al valore archiviato `_Nallocs`. Questa funzione membro viene chiamata dopo ogni chiamata eseguita dal `cache_freelist::allocate` all'operatore **nuovi**. L'argomento *_Nx* è il numero di blocchi di memoria nel blocco allocato dall'operatore **nuove**.

## <a name="deallocated"></a>  max_variable_size::deallocated

Decrementa il conteggio dei blocchi di memoria allocati.

```cpp
void deallocated(std::size_t _Nx = 1);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*_Nx*|Valore di incremento.|

### <a name="remarks"></a>Note

La funzione membro sottrae *_Nx* dal valore archiviato `_Nallocs`. Questa funzione membro viene chiamata dopo ogni chiamata da `cache_freelist::deallocate` all'operatore **eliminare**. L'argomento *_Nx* è il numero di blocchi di memoria nel blocco deallocato dall'operatore **eliminare**.

## <a name="full"></a>  max_variable_size::full

Restituisce un valore che specifica se all'elenco di disponibilità devono essere aggiunti altri blocchi di memoria.

```cpp
bool full();
```

### <a name="return-value"></a>Valore restituito

**true** se `_Nallocs / 16 + 16 <= _Nblocks`.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata da `cache_freelist::deallocate`. Se la chiamata restituisce **true**, `deallocate` inserisce il blocco di memoria nell'elenco di disponibilità; se false, restituisce `deallocate` chiama l'operatore **Elimina** deallocare il blocco.

## <a name="max_variable_size"></a>  max_variable_size::max_variable_size

Costruisce un oggetto di tipo `max_variable_size`.

```cpp
max_variable_size();
```

### <a name="remarks"></a>Note

Il costruttore inizializza i valori archiviati `_Nblocks` e `_Nallocs` su zero.

## <a name="released"></a>  max_variable_size::released

Decrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.

```cpp
void released();
```

### <a name="remarks"></a>Note

Questa funzione membro decrementa il valore archiviato `_Nblocks`. La funzione membro `released` della classe max corrente viene chiamata da `cache_freelist::allocate` ogni volta che rimuove un blocco di memoria dall'elenco di disponibilità.

## <a name="saved"></a>  max_variable_size::saved

Incrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.

```cpp
void saved();
```

### <a name="remarks"></a>Note

Questa funzione membro incrementa il valore archiviato `_Nblocks`. Viene chiamata da `cache_freelist::deallocate` ogni volta che inserisce un blocco di memoria nell'elenco di disponibilità.

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)<br/>
