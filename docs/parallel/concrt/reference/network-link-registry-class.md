---
description: 'Altre informazioni su: network_link_registry Class'
title: Classe network_link_registry
ms.date: 11/04/2016
f1_keywords:
- network_link_registry
- AGENTS/concurrency::network_link_registry
- AGENTS/concurrency::network_link_registry::add
- AGENTS/concurrency::network_link_registry::begin
- AGENTS/concurrency::network_link_registry::contains
- AGENTS/concurrency::network_link_registry::count
- AGENTS/concurrency::network_link_registry::remove
helpviewer_keywords:
- network_link_registry class
ms.assetid: 3e7b4097-09f1-4252-964e-b15b8f7f7fc6
ms.openlocfilehash: d14ec5758b399d46d5a5f04200b9422b030305f8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97236594"
---
# <a name="network_link_registry-class"></a>Classe network_link_registry

La classe base astratta `network_link_registry` gestisce i collegamenti tra i blocchi di origine e blocchi di destinazione.

## <a name="syntax"></a>Sintassi

```cpp
template<class _Block>
class network_link_registry;
```

### <a name="parameters"></a>Parametri

*_Block*<br/>
Tipo di dati Block archiviato in `network_link_registry` .

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`const_pointer`|Tipo che fornisce un puntatore a un **`const`** elemento in un `network_link_registry` oggetto.|
|`const_reference`|Tipo che fornisce un riferimento a un **`const`** elemento archiviato in un `network_link_registry` oggetto per la lettura e l'esecuzione di operazioni const.|
|`iterator`|Tipo che fornisce un iteratore in grado di leggere o modificare qualsiasi elemento di un `network_link_registry` oggetto.|
|`type`|Tipo che rappresenta il tipo di blocco archiviato nell' `network_link_registry` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[add](#add)|Quando sottoposto a override in una classe derivata, aggiunge un collegamento all' `network_link_registry` oggetto.|
|[iniziare](#begin)|Quando ne viene eseguito l'override in una classe derivata, restituisce un iteratore al primo elemento dell' `network_link_registry` oggetto.|
|[contains](#contains)|Quando sottoposto a override in una classe derivata, Cerca `network_link_registry` un blocco specificato nell'oggetto.|
|[count](#count)|Quando sottoposto a override in una classe derivata, restituisce il numero di elementi nell' `network_link_registry` oggetto.|
|[remove](#remove)|Quando sottoposto a override in una classe derivata, rimuove un blocco specificato dall' `network_link_registry` oggetto.|

## <a name="remarks"></a>Commenti

`network link registry`Non è sicuro per l'accesso simultaneo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`network_link_registry`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="add"></a><a name="add"></a> aggiungere

Quando sottoposto a override in una classe derivata, aggiunge un collegamento all' `network_link_registry` oggetto.

```cpp
virtual void add(_EType _Link) = 0;
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco da aggiungere.

## <a name="begin"></a><a name="begin"></a> iniziare

Quando ne viene eseguito l'override in una classe derivata, restituisce un iteratore al primo elemento dell' `network_link_registry` oggetto.

```cpp
virtual iterator begin() = 0;
```

### <a name="return-value"></a>Valore restituito

Iteratore che punta al primo elemento dell' `network_link_registry` oggetto.

### <a name="remarks"></a>Commenti

Lo stato finale dell'iteratore è indicato da un `NULL` collegamento.

## <a name="contains"></a><a name="contains"></a> contiene

Quando sottoposto a override in una classe derivata, Cerca `network_link_registry` un blocco specificato nell'oggetto.

```cpp
virtual bool contains(_EType _Link) = 0;
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco cercato nell' `network_link_registry` oggetto.

### <a name="return-value"></a>Valore restituito

**`true`** Se il blocco è stato trovato; **`false`** in caso contrario,.

## <a name="count"></a><a name="count"></a> conteggio

Quando sottoposto a override in una classe derivata, restituisce il numero di elementi nell' `network_link_registry` oggetto.

```cpp
virtual size_t count() = 0;
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi nell'oggetto `network_link_registry`.

## <a name="remove"></a><a name="remove"></a> rimuovere

Quando sottoposto a override in una classe derivata, rimuove un blocco specificato dall' `network_link_registry` oggetto.

```cpp
virtual bool remove(_EType _Link) = 0;
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco da rimuovere, se trovato.

### <a name="return-value"></a>Valore restituito

**`true`** Se il collegamento è stato trovato e rimosso; **`false`** in caso contrario,.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe single_link_registry](single-link-registry-class.md)<br/>
[Classe multi_link_registry](multi-link-registry-class.md)
