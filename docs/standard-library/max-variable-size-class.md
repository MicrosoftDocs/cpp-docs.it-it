---
title: Classe max_variable_size
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::max_variable_size
- allocators/stdext::max_variable_size::allocated
- allocators/stdext::max_variable_size::deallocated
- allocators/stdext::max_variable_size::full
- allocators/stdext::max_variable_size::released
- allocators/stdext::max_variable_size::saved
helpviewer_keywords:
- stdext::max_variable_size
- stdext::max_variable_size [C++], allocated
- stdext::max_variable_size [C++], deallocated
- stdext::max_variable_size [C++], full
- stdext::max_variable_size [C++], released
- stdext::max_variable_size [C++], saved
ms.assetid: 9f2e9df0-4148-4b37-bc30-f8eca0ef86ae
ms.openlocfilehash: 79e37d8c464a009e4a5196aeacc8d4a718e355b9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370961"
---
# <a name="max_variable_size-class"></a>Classe max_variable_size

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
|[Deallocato](#deallocated)|Decrementa il conteggio dei blocchi di memoria allocati.|
|[Completo](#full)|Restituisce un valore che specifica se all'elenco di disponibilità devono essere aggiunti altri blocchi di memoria.|
|[Rilasciato](#released)|Decrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.|
|[saved](#saved)|Incrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="max_variable_sizeallocated"></a><a name="allocated"></a>max_variable_size::assegnato

Incrementa il conteggio dei blocchi di memoria allocati.

```cpp
void allocated(std::size_t _Nx = 1);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*_Nx*|Valore di incremento.|

### <a name="remarks"></a>Osservazioni

Questa funzione *_Nx* membro aggiunge _Nx `_Nallocs`al valore archiviato. Questa funzione membro viene chiamata `cache_freelist::allocate` dopo ogni chiamata riuscita da all'operatore **new**. L'argomento *_Nx* è il numero di blocchi di memoria nel blocco allocato dall'operatore **new**.

## <a name="max_variable_sizedeallocated"></a><a name="deallocated"></a>max_variable_size::dallocata

Decrementa il conteggio dei blocchi di memoria allocati.

```cpp
void deallocated(std::size_t _Nx = 1);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*_Nx*|Valore di incremento.|

### <a name="remarks"></a>Osservazioni

La funzione membro *_Nx* sottrae `_Nallocs`_Nx dal valore archiviato. Questa funzione membro viene chiamata `cache_freelist::deallocate` dopo ogni chiamata da per l'operatore **delete**. L'argomento *_Nx* è il numero di blocchi di memoria nel blocco deallocato dall'operatore **delete**.

## <a name="max_variable_sizefull"></a><a name="full"></a>max_variable_size::full

Restituisce un valore che specifica se all'elenco di disponibilità devono essere aggiunti altri blocchi di memoria.

```cpp
bool full();
```

### <a name="return-value"></a>Valore restituito

**true** `_Nallocs / 16 + 16 <= _Nblocks`se .

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata da `cache_freelist::deallocate`. Se la **true**chiamata `deallocate` restituisce true , inserisce il blocco di memoria nell'elenco libero; Se restituisce `deallocate` false, chiama operator **delete** per deallocare il blocco.

## <a name="max_variable_sizemax_variable_size"></a><a name="max_variable_size"></a>max_variable_size::max_variable_size

Costruisce un oggetto di tipo `max_variable_size`.

```cpp
max_variable_size();
```

### <a name="remarks"></a>Osservazioni

Il costruttore inizializza i valori archiviati `_Nblocks` e `_Nallocs` su zero.

## <a name="max_variable_sizereleased"></a><a name="released"></a>max_variable_size::rilasciato

Decrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.

```cpp
void released();
```

### <a name="remarks"></a>Osservazioni

Questa funzione membro decrementa il valore archiviato `_Nblocks`. La funzione membro `released` della classe max corrente viene chiamata da `cache_freelist::allocate` ogni volta che rimuove un blocco di memoria dall'elenco di disponibilità.

## <a name="max_variable_sizesaved"></a><a name="saved"></a>max_variable_size:: salvato

Incrementa il conteggio dei blocchi di memoria nell'elenco di disponibilità.

```cpp
void saved();
```

### <a name="remarks"></a>Osservazioni

Questa funzione membro incrementa il valore archiviato `_Nblocks`. Viene chiamata da `cache_freelist::deallocate` ogni volta che inserisce un blocco di memoria nell'elenco di disponibilità.

## <a name="see-also"></a>Vedere anche

[\<allocatori>](../standard-library/allocators-header.md)
