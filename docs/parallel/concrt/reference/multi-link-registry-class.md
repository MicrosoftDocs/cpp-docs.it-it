---
title: Classe multi_link_registry
ms.date: 11/04/2016
f1_keywords:
- multi_link_registry
- AGENTS/concurrency::multi_link_registry
- AGENTS/concurrency::multi_link_registry::multi_link_registry
- AGENTS/concurrency::multi_link_registry::add
- AGENTS/concurrency::multi_link_registry::begin
- AGENTS/concurrency::multi_link_registry::contains
- AGENTS/concurrency::multi_link_registry::count
- AGENTS/concurrency::multi_link_registry::remove
- AGENTS/concurrency::multi_link_registry::set_bound
helpviewer_keywords:
- multi_link_registry class
ms.assetid: b2aa73a8-e8a6-4255-b117-d07530c328b2
ms.openlocfilehash: 777b3f5206b4a595b5dcac653d608255e92f4ef6
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87231702"
---
# <a name="multi_link_registry-class"></a>Classe multi_link_registry

L'oggetto `multi_link_registry` è un `network_link_registry` che gestisce più blocchi di origine o più blocchi di destinazione.

## <a name="syntax"></a>Sintassi

```cpp
template<class _Block>
class multi_link_registry : public network_link_registry<_Block>;
```

### <a name="parameters"></a>Parametri

*_Block*<br/>
Tipo di dati Block archiviato nell' `multi_link_registry` oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[multi_link_registry](#ctor)|Costruisce un oggetto `multi_link_registry`.|
|[Distruttore ~ multi_link_registry](#dtor)|Elimina definitivamente l' `multi_link_registry` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[add](#add)|Aggiunge un collegamento all' `multi_link_registry` oggetto. Esegue l'override di [network_link_registry:: Add](network-link-registry-class.md#add).|
|[iniziare](#begin)|Restituisce un iteratore al primo elemento dell' `multi_link_registry` oggetto. Esegue l'override di [network_link_registry:: Begin](network-link-registry-class.md#begin).|
|[contains](#contains)|Cerca `multi_link_registry` un blocco specificato nell'oggetto. (Esegue l'override di [network_link_registry:: Contains](network-link-registry-class.md#contains).)|
|[count](#count)|Conta il numero di elementi nell' `multi_link_registry` oggetto. Esegue l'override di [network_link_registry:: count](network-link-registry-class.md#count).|
|[remove](#remove)|Rimuove un collegamento dall' `multi_link_registry` oggetto. Esegue l'override di [network_link_registry:: Remove](network-link-registry-class.md#remove).|
|[set_bound](#set_bound)|Imposta un limite superiore per il numero di collegamenti che l' `multi_link_registry` oggetto può mantenere.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[network_link_registry](network-link-registry-class.md)

`multi_link_registry`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="add"></a><a name="add"></a>aggiungere

Aggiunge un collegamento all' `multi_link_registry` oggetto.

```cpp
virtual void add(_EType _Link);
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco da aggiungere.

### <a name="remarks"></a>Osservazioni

Il metodo genera un'eccezione [invalid_link_target](invalid-link-target-class.md) se il collegamento è già presente nel registro di sistema o se è già stato impostato un binding con la `set_bound` funzione e dopo che è stato rimosso un collegamento.

## <a name="begin"></a><a name="begin"></a>iniziare

Restituisce un iteratore al primo elemento dell' `multi_link_registry` oggetto.

```cpp
virtual iterator begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore che punta al primo elemento dell' `multi_link_registry` oggetto.

### <a name="remarks"></a>Osservazioni

Lo stato finale è indicato da un `NULL` collegamento.

## <a name="contains"></a><a name="contains"></a>contiene

Cerca `multi_link_registry` un blocco specificato nell'oggetto.

```cpp
virtual bool contains(_EType _Link);
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco da cercare nell' `multi_link_registry` oggetto.

### <a name="return-value"></a>Valore restituito

**`true`** Se il blocco specificato è stato trovato; **`false`** in caso contrario,.

## <a name="count"></a><a name="count"></a>conteggio

Conta il numero di elementi nell' `multi_link_registry` oggetto.

```cpp
virtual size_t count();
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi nell'oggetto `multi_link_registry`.

## <a name="multi_link_registry"></a><a name="ctor"></a>multi_link_registry

Costruisce un oggetto `multi_link_registry`.

```cpp
multi_link_registry();
```

## <a name="multi_link_registry"></a><a name="dtor"></a>~ multi_link_registry

Elimina definitivamente l' `multi_link_registry` oggetto.

```cpp
virtual ~multi_link_registry();
```

### <a name="remarks"></a>Osservazioni

Il metodo genera un'eccezione [invalid_operation](invalid-operation-class.md) se viene chiamato prima della rimozione di tutti i collegamenti.

## <a name="remove"></a><a name="remove"></a>rimuovere

Rimuove un collegamento dall' `multi_link_registry` oggetto.

```cpp
virtual bool remove(_EType _Link);
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco da rimuovere, se trovato.

### <a name="return-value"></a>Valore restituito

**`true`** Se il collegamento è stato trovato e rimosso; **`false`** in caso contrario,.

## <a name="set_bound"></a><a name="set_bound"></a>set_bound

Imposta un limite superiore per il numero di collegamenti che l' `multi_link_registry` oggetto può mantenere.

```cpp
void set_bound(size_t _MaxLinks);
```

### <a name="parameters"></a>Parametri

*_MaxLinks*<br/>
Numero massimo di collegamenti che l' `multi_link_registry` oggetto può mantenere.

### <a name="remarks"></a>Osservazioni

Una volta impostato un limite, lo scollegamento di una voce comporta l'impostazione dello stato non modificabile per l'oggetto `multi_link_registry`, pertanto tramite le chiamate successive a `add` verrà generata un'eccezione `invalid_link_target`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe single_link_registry](single-link-registry-class.md)
