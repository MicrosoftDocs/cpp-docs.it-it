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
ms.openlocfilehash: 712c1f1638b954d1580eb527dd9eab7401917517
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317197"
---
# <a name="freelist-class"></a>Classe freelist

Gestisce un elenco di blocchi di memoria.

## <a name="syntax"></a>Sintassi

```cpp
template <std::size_t Sz, class Max>
class freelist : public Max
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Sz*|Numero di elementi della matrice da allocare.|
|*Massimo*|Classe max che rappresenta il numero massimo di elementi da archiviare nell'elenco di disponibilità. La classe max può essere [max_none](../standard-library/max-none-class.md), [max_unbounded](../standard-library/max-unbounded-class.md), [max_fixed_size](../standard-library/max-fixed-size-class.md) o [max_variable_size](../standard-library/max-variable-size-class.md).|

## <a name="remarks"></a>Osservazioni

Questo modello di classe gestisce un elenco di blocchi di memoria di dimensioni *Sz* con la lunghezza massima dell'elenco determinata dalla classe max passata in *Max*.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[freelist](#freelist)|Costruisce un oggetto di tipo `freelist`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[Pop](#pop)|Rimuove il primo blocco di memoria dall'elenco di disponibilità.|
|[push](#push)|Aggiunge un blocco di memoria all'elenco.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="freelistfreelist"></a><a name="freelist"></a>freelist::freelist

Costruisce un oggetto di tipo `freelist`.

```cpp
freelist();
```

### <a name="remarks"></a>Osservazioni

## <a name="freelistpop"></a><a name="pop"></a>freelist::pop

Rimuove il primo blocco di memoria dall'elenco di disponibilità.

```cpp
void *pop();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al blocco di memoria rimosso dall'elenco.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce NULL se l'elenco è vuoto. In caso contrario, rimuove il primo blocco di memoria dall'elenco.

## <a name="freelistpush"></a><a name="push"></a>freelist::push

Aggiunge un blocco di memoria all'elenco.

```cpp
bool push(void* ptr);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Ptr*|Puntatore al blocco di memoria da aggiungere all'elenco di disponibilità.|

### <a name="return-value"></a>Valore restituito

**true** se `full` la funzione della classe max restituisce **false**; in caso `push` contrario, la funzione restituisce **false**.

### <a name="remarks"></a>Osservazioni

Se `full` la funzione della classe max restituisce **false**, questa funzione membro aggiunge il blocco di memoria a cui punta *ptr* all'intestazione dell'elenco.

## <a name="see-also"></a>Vedere anche

[\<allocatori>](../standard-library/allocators-header.md)
