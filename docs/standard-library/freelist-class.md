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
ms.openlocfilehash: 8a504f58f9f64aa8b0d26b17090387c5c2b5de21
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68454134"
---
# <a name="freelist-class"></a>Classe freelist

Gestisce un elenco di blocchi di memoria.

## <a name="syntax"></a>Sintassi

```cpp
template <std::size_t Sz, class Max>
class freelist : public Max
```

### <a name="parameters"></a>Parametri

|Parametro|DESCRIZIONE|
|---------------|-----------------|
|*Sz*|Numero di elementi della matrice da allocare.|
|*Max*|Classe max che rappresenta il numero massimo di elementi da archiviare nell'elenco di disponibilità. La classe max può essere [max_none](../standard-library/max-none-class.md), [max_unbounded](../standard-library/max-unbounded-class.md), [max_fixed_size](../standard-library/max-fixed-size-class.md) o [max_variable_size](../standard-library/max-variable-size-class.md).|

## <a name="remarks"></a>Note

Questa classe modello gestisce un elenco di blocchi di memoria di dimensioni *SZ* con la lunghezza massima dell'elenco determinato dalla classe max passata in *Max*.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[freelist](#freelist)|Costruisce un oggetto di tipo `freelist`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|DESCRIZIONE|
|-|-|
|[pop](#pop)|Rimuove il primo blocco di memoria dall'elenco di disponibilità.|
|[push](#push)|Aggiunge un blocco di memoria all'elenco.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="freelist"></a>  freelist::freelist

Costruisce un oggetto di tipo `freelist`.

```cpp
freelist();
```

### <a name="remarks"></a>Note

## <a name="pop"></a>  freelist::pop

Rimuove il primo blocco di memoria dall'elenco di disponibilità.

```cpp
void *pop();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al blocco di memoria rimosso dall'elenco.

### <a name="remarks"></a>Note

La funzione membro restituisce NULL se l'elenco è vuoto. In caso contrario, rimuove il primo blocco di memoria dall'elenco.

## <a name="push"></a>  freelist::push

Aggiunge un blocco di memoria all'elenco.

```cpp
bool push(void* ptr);
```

### <a name="parameters"></a>Parametri

|Parametro|DESCRIZIONE|
|---------------|-----------------|
|*ptr*|Puntatore al blocco di memoria da aggiungere all'elenco di disponibilità.|

### <a name="return-value"></a>Valore restituito

**true** se la `full` funzione della classe max restituisce **false**. in caso contrario, `push` la funzione restituisce **false**.

### <a name="remarks"></a>Note

Se la `full` funzione della classe max restituisce **false**, questa funzione membro aggiunge il blocco di memoria a cui punta *ptr* all'inizio dell'elenco.

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)
