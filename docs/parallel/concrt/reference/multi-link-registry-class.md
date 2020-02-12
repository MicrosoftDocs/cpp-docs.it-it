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
ms.openlocfilehash: e22df5ee65d0219a46065044385dca46aac297a3
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142365"
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
Tipo di dati Block archiviato nell'oggetto `multi_link_registry`.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[multi_link_registry](#ctor)|Costruisce un oggetto `multi_link_registry`.|
|[Distruttore ~ multi_link_registry](#dtor)|Elimina definitivamente l'oggetto `multi_link_registry`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[add](#add)|Aggiunge un collegamento all'oggetto `multi_link_registry`. Esegue l'override di [network_link_registry:: Add](network-link-registry-class.md#add).|
|[begin](#begin)|Restituisce un iteratore al primo elemento dell'oggetto `multi_link_registry`. Esegue l'override di [network_link_registry:: Begin](network-link-registry-class.md#begin).|
|[contains](#contains)|Cerca un blocco specificato nell'oggetto `multi_link_registry`. (Esegue l'override di [network_link_registry:: Contains](network-link-registry-class.md#contains).)|
|[count](#count)|Conta il numero di elementi nell'oggetto `multi_link_registry`. Esegue l'override di [network_link_registry:: count](network-link-registry-class.md#count).|
|[remove](#remove)|Rimuove un collegamento dall'oggetto `multi_link_registry`. Esegue l'override di [network_link_registry:: Remove](network-link-registry-class.md#remove).|
|[set_bound](#set_bound)|Imposta un limite superiore per il numero di collegamenti che l'oggetto `multi_link_registry` può mantenere.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[network_link_registry](network-link-registry-class.md)

`multi_link_registry`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="add"></a>aggiungere

Aggiunge un collegamento all'oggetto `multi_link_registry`.

```cpp
virtual void add(_EType _Link);
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco da aggiungere.

### <a name="remarks"></a>Osservazioni

Il metodo genera un'eccezione [invalid_link_target](invalid-link-target-class.md) se il collegamento è già presente nel registro di sistema o se è già stato impostato un binding con la funzione `set_bound` e dopo la rimozione di un collegamento.

## <a name="begin"></a>iniziare

Restituisce un iteratore al primo elemento dell'oggetto `multi_link_registry`.

```cpp
virtual iterator begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore che punta al primo elemento dell'oggetto `multi_link_registry`.

### <a name="remarks"></a>Osservazioni

Lo stato finale è indicato da un collegamento `NULL`.

## <a name="contains"></a>contiene

Cerca un blocco specificato nell'oggetto `multi_link_registry`.

```cpp
virtual bool contains(_EType _Link);
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco che deve essere cercato nell'oggetto `multi_link_registry`.

### <a name="return-value"></a>Valore restituito

**true** se il blocco specificato è stato trovato; in caso contrario, **false** .

## <a name="count"></a>conteggio

Conta il numero di elementi nell'oggetto `multi_link_registry`.

```cpp
virtual size_t count();
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi nell'oggetto `multi_link_registry`.

## <a name="ctor"></a>multi_link_registry

Costruisce un oggetto `multi_link_registry`.

```cpp
multi_link_registry();
```

## <a name="dtor"></a>~ multi_link_registry

Elimina definitivamente l'oggetto `multi_link_registry`.

```cpp
virtual ~multi_link_registry();
```

### <a name="remarks"></a>Osservazioni

Il metodo genera un'eccezione [invalid_operation](invalid-operation-class.md) se viene chiamato prima della rimozione di tutti i collegamenti.

## <a name="remove"></a>rimuovere

Rimuove un collegamento dall'oggetto `multi_link_registry`.

```cpp
virtual bool remove(_EType _Link);
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco da rimuovere, se trovato.

### <a name="return-value"></a>Valore restituito

**true** se il collegamento è stato trovato e rimosso; in caso contrario, **false** .

## <a name="set_bound"></a>set_bound

Imposta un limite superiore per il numero di collegamenti che l'oggetto `multi_link_registry` può mantenere.

```cpp
void set_bound(size_t _MaxLinks);
```

### <a name="parameters"></a>Parametri

*_MaxLinks*<br/>
Numero massimo di collegamenti che l'oggetto `multi_link_registry` può mantenere.

### <a name="remarks"></a>Osservazioni

Una volta impostato un limite, lo scollegamento di una voce comporta l'impostazione dello stato non modificabile per l'oggetto `multi_link_registry`, pertanto tramite le chiamate successive a `add` verrà generata un'eccezione `invalid_link_target`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe single_link_registry](single-link-registry-class.md)
