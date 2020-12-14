---
description: 'Altre informazioni su: single_link_registry Class'
title: Classe single_link_registry
ms.date: 11/04/2016
f1_keywords:
- single_link_registry
- AGENTS/concurrency::single_link_registry
- AGENTS/concurrency::single_link_registry::single_link_registry
- AGENTS/concurrency::single_link_registry::add
- AGENTS/concurrency::single_link_registry::begin
- AGENTS/concurrency::single_link_registry::contains
- AGENTS/concurrency::single_link_registry::count
- AGENTS/concurrency::single_link_registry::remove
helpviewer_keywords:
- single_link_registry class
ms.assetid: 09540a4e-c34e-4ff9-af49-21b8612b6ab3
ms.openlocfilehash: 415dcaf8062eaf47a3e92cf4a949790eb364d0c4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188638"
---
# <a name="single_link_registry-class"></a>Classe single_link_registry

L'oggetto `single_link_registry` è un `network_link_registry` che gestisce solo un singolo blocco di origine o di destinazione.

## <a name="syntax"></a>Sintassi

```cpp
template<class _Block>
class single_link_registry : public network_link_registry<_Block>;
```

### <a name="parameters"></a>Parametri

*_Block*<br/>
Tipo di dati Block archiviato nell' `single_link_registry` oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[single_link_registry](#ctor)|Costruisce un oggetto `single_link_registry`.|
|[Distruttore ~ single_link_registry](#dtor)|Elimina definitivamente l' `single_link_registry` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[add](#add)|Aggiunge un collegamento all' `single_link_registry` oggetto. Esegue l'override di [network_link_registry:: Add](network-link-registry-class.md#add).|
|[iniziare](#begin)|Restituisce un iteratore al primo elemento dell' `single_link_registry` oggetto. Esegue l'override di [network_link_registry:: Begin](network-link-registry-class.md#begin).|
|[contains](#contains)|Cerca `single_link_registry` un blocco specificato nell'oggetto. (Esegue l'override di [network_link_registry:: Contains](network-link-registry-class.md#contains).)|
|[count](#count)|Conta il numero di elementi nell' `single_link_registry` oggetto. Esegue l'override di [network_link_registry:: count](network-link-registry-class.md#count).|
|[remove](#remove)|Rimuove un collegamento dall' `single_link_registry` oggetto. Esegue l'override di [network_link_registry:: Remove](network-link-registry-class.md#remove).|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[network_link_registry](network-link-registry-class.md)

`single_link_registry`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="add"></a><a name="add"></a> aggiungere

Aggiunge un collegamento all' `single_link_registry` oggetto.

```cpp
virtual void add(_EType _Link);
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco da aggiungere.

### <a name="remarks"></a>Commenti

Il metodo genera un'eccezione [invalid_link_target](invalid-link-target-class.md) se è già presente un collegamento nel registro di sistema.

## <a name="begin"></a><a name="begin"></a> iniziare

Restituisce un iteratore al primo elemento dell' `single_link_registry` oggetto.

```cpp
virtual iterator begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore che punta al primo elemento dell' `single_link_registry` oggetto.

### <a name="remarks"></a>Commenti

Lo stato finale è indicato da un `NULL` collegamento.

## <a name="contains"></a><a name="contains"></a> contiene

Cerca `single_link_registry` un blocco specificato nell'oggetto.

```cpp
virtual bool contains(_EType _Link);
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco da cercare nell' `single_link_registry` oggetto.

### <a name="return-value"></a>Valore restituito

**`true`** Se il collegamento è stato trovato; **`false`** in caso contrario,.

## <a name="count"></a><a name="count"></a> conteggio

Conta il numero di elementi nell' `single_link_registry` oggetto.

```cpp
virtual size_t count();
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi nell'oggetto `single_link_registry`.

## <a name="remove"></a><a name="remove"></a> rimuovere

Rimuove un collegamento dall' `single_link_registry` oggetto.

```cpp
virtual bool remove(_EType _Link);
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco da rimuovere, se trovato.

### <a name="return-value"></a>Valore restituito

**`true`** Se il collegamento è stato trovato e rimosso; **`false`** in caso contrario,.

## <a name="single_link_registry"></a><a name="ctor"></a> single_link_registry

Costruisce un oggetto `single_link_registry`.

```cpp
single_link_registry();
```

## <a name="single_link_registry"></a><a name="dtor"></a> ~ single_link_registry

Elimina definitivamente l' `single_link_registry` oggetto.

```cpp
virtual ~single_link_registry();
```

### <a name="remarks"></a>Commenti

Il metodo genera un'eccezione [invalid_operation](invalid-operation-class.md) se viene chiamata prima della rimozione del collegamento.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe multi_link_registry](multi-link-registry-class.md)
