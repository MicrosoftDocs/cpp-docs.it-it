---
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
ms.openlocfilehash: 430190c11ec06a4f26eb9d8c4237552848420ad7
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77138885"
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
Tipo di dati Block archiviato nel `network_link_registry`.

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`const_pointer`|Tipo che fornisce un puntatore a un elemento `const` in un oggetto `network_link_registry`.|
|`const_reference`|Tipo che fornisce un riferimento a un elemento `const` archiviato in un oggetto `network_link_registry` per la lettura e l'esecuzione di operazioni const.|
|`iterator`|Tipo che fornisce un iteratore in grado di leggere o modificare qualsiasi elemento in un oggetto `network_link_registry`.|
|`type`|Tipo che rappresenta il tipo di blocco archiviato nell'oggetto `network_link_registry`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[add](#add)|Quando sottoposto a override in una classe derivata, aggiunge un collegamento all'oggetto `network_link_registry`.|
|[begin](#begin)|Quando ne viene eseguito l'override in una classe derivata, restituisce un iteratore al primo elemento dell'oggetto `network_link_registry`.|
|[contains](#contains)|Quando sottoposto a override in una classe derivata, Cerca un blocco specificato nell'oggetto `network_link_registry`.|
|[count](#count)|Quando ne viene eseguito l'override in una classe derivata, restituisce il numero di elementi nell'oggetto `network_link_registry`.|
|[remove](#remove)|Quando sottoposto a override in una classe derivata, rimuove un blocco specificato dall'oggetto `network_link_registry`.|

## <a name="remarks"></a>Osservazioni

Il `network link registry` non è sicuro per l'accesso simultaneo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`network_link_registry`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="add"></a>aggiungere

Quando sottoposto a override in una classe derivata, aggiunge un collegamento all'oggetto `network_link_registry`.

```cpp
virtual void add(_EType _Link) = 0;
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco da aggiungere.

## <a name="begin"></a>iniziare

Quando ne viene eseguito l'override in una classe derivata, restituisce un iteratore al primo elemento dell'oggetto `network_link_registry`.

```cpp
virtual iterator begin() = 0;
```

### <a name="return-value"></a>Valore restituito

Iteratore che punta al primo elemento dell'oggetto `network_link_registry`.

### <a name="remarks"></a>Osservazioni

Lo stato finale dell'iteratore è indicato da un collegamento `NULL`.

## <a name="contains"></a>contiene

Quando sottoposto a override in una classe derivata, Cerca un blocco specificato nell'oggetto `network_link_registry`.

```cpp
virtual bool contains(_EType _Link) = 0;
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco cercato nell'oggetto `network_link_registry`.

### <a name="return-value"></a>Valore restituito

**true** se il blocco è stato trovato; in caso contrario, **false** .

## <a name="count"></a>conteggio

Quando ne viene eseguito l'override in una classe derivata, restituisce il numero di elementi nell'oggetto `network_link_registry`.

```cpp
virtual size_t count() = 0;
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi nell'oggetto `network_link_registry`.

## <a name="remove"></a>rimuovere

Quando sottoposto a override in una classe derivata, rimuove un blocco specificato dall'oggetto `network_link_registry`.

```cpp
virtual bool remove(_EType _Link) = 0;
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco da rimuovere, se trovato.

### <a name="return-value"></a>Valore restituito

**true** se il collegamento è stato trovato e rimosso; in caso contrario, **false** .

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe single_link_registry](single-link-registry-class.md)<br/>
[Classe multi_link_registry](multi-link-registry-class.md)
