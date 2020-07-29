---
title: Classe freelist
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::freelist
- allocators/stdext::freelist::pop
- allocators/stdext::freelist::push
helpviewer_keywords:
- stdext::freelist
- stdext::freelist [C++], pop
- stdext::freelist [C++], push
ms.assetid: 8ad7e35c-4c80-4479-8ede-1a2497b06d71
ms.openlocfilehash: 7425f99f7966548bdb1f94d3007382eeb99863df
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87193224"
---
# <a name="freelist-class"></a>Classe freelist

Gestisce un elenco di blocchi di memoria.

## <a name="syntax"></a>Sintassi

```cpp
template <std::size_t Sz, class Max>
class freelist : public Max
```

### <a name="parameters"></a>Parametri

|Parametro|Description|
|---------------|-----------------|
|*SZ*|Numero di elementi della matrice da allocare.|
|*Max*|Classe max che rappresenta il numero massimo di elementi da archiviare nell'elenco di disponibilità. La classe max può essere [max_none](../standard-library/max-none-class.md), [max_unbounded](../standard-library/max-unbounded-class.md), [max_fixed_size](../standard-library/max-fixed-size-class.md) o [max_variable_size](../standard-library/max-variable-size-class.md).|

## <a name="remarks"></a>Osservazioni

Questo modello di classe gestisce un elenco di blocchi di memoria di dimensioni *SZ* con la lunghezza massima dell'elenco determinato dalla classe max passata in *Max*.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[freelist](#freelist)|Costruisce un oggetto di tipo `freelist`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[popup](#pop)|Rimuove il primo blocco di memoria dall'elenco di disponibilità.|
|[push](#push)|Aggiunge un blocco di memoria all'elenco.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<allocators>

**Spazio dei nomi:** stdext

## <a name="freelistfreelist"></a><a name="freelist"></a>freename:: freename

Costruisce un oggetto di tipo `freelist`.

```cpp
freelist();
```

### <a name="remarks"></a>Osservazioni

## <a name="freelistpop"></a><a name="pop"></a>gratuito::p op

Rimuove il primo blocco di memoria dall'elenco di disponibilità.

```cpp
void *pop();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al blocco di memoria rimosso dall'elenco.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce NULL se l'elenco è vuoto. In caso contrario, rimuove il primo blocco di memoria dall'elenco.

## <a name="freelistpush"></a><a name="push"></a>gratuito::p USH

Aggiunge un blocco di memoria all'elenco.

```cpp
bool push(void* ptr);
```

### <a name="parameters"></a>Parametri

|Parametro|Description|
|---------------|-----------------|
|*ptr*|Puntatore al blocco di memoria da aggiungere all'elenco di disponibilità.|

### <a name="return-value"></a>Valore restituito

**`true`** Se la `full` funzione della classe max restituisce **`false`** ; in caso contrario, la `push` funzione restituisce **`false`** .

### <a name="remarks"></a>Osservazioni

Se la `full` funzione della classe max restituisce **`false`** , questa funzione membro aggiunge il blocco di memoria a cui punta *ptr* all'inizio dell'elenco.

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)
