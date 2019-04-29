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
ms.openlocfilehash: 2537ed857651b5210b104a270b3d827246b8339a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62385232"
---
# <a name="networklinkregistry-class"></a>Classe network_link_registry

La classe base astratta `network_link_registry` gestisce i collegamenti tra i blocchi di origine e blocchi di destinazione.

## <a name="syntax"></a>Sintassi

```
template<class _Block>
class network_link_registry;
```

#### <a name="parameters"></a>Parametri

*_Block*<br/>
Tipo di dati di blocco vengano archiviate nel `network_link_registry`.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`const_pointer`|Tipo che fornisce un puntatore a un `const` elemento in un `network_link_registry` oggetto.|
|`const_reference`|Tipo che fornisce un riferimento a un `const` elemento archiviato in un `network_link_registry` oggetto per la lettura e l'esecuzione di operazioni di const.|
|`iterator`|Tipo che fornisce un iteratore che può leggere o modificare qualsiasi elemento in un `network_link_registry` oggetto.|
|`type`|Un tipo che rappresenta il tipo di blocco archiviato nel `network_link_registry` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[add](#add)|Quando sottoposto a override in una classe derivata, aggiunge un collegamento per il `network_link_registry` oggetto.|
|[begin](#begin)|Quando sottoposto a override in una classe derivata, restituisce un iteratore al primo elemento nel file di `network_link_registry` oggetto.|
|[contains](#contains)|Quando sottoposto a override in una classe derivata, Cerca il `network_link_registry` oggetto per un blocco specificato.|
|[count](#count)|Quando sottoposto a override in una classe derivata, restituisce il numero di elementi nel `network_link_registry` oggetto.|
|[remove](#remove)|Quando sottoposto a override in una classe derivata, rimuove un blocco specificato da di `network_link_registry` oggetto.|

## <a name="remarks"></a>Note

Il `network link registry` non è sicuro per l'accesso simultaneo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`network_link_registry`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

##  <a name="add"></a> Aggiungere

Quando sottoposto a override in una classe derivata, aggiunge un collegamento per il `network_link_registry` oggetto.

```
virtual void add(_EType _Link) = 0;
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Un puntatore a un blocco da aggiungere.

##  <a name="begin"></a> begin

Quando sottoposto a override in una classe derivata, restituisce un iteratore al primo elemento nel file di `network_link_registry` oggetto.

```
virtual iterator begin() = 0;
```

### <a name="return-value"></a>Valore restituito

Un iteratore che punta al primo elemento di `network_link_registry` oggetto.

### <a name="remarks"></a>Note

Lo stato finale dell'iteratore è indicato da un `NULL` collegamento.

##  <a name="contains"></a> Contiene

Quando sottoposto a override in una classe derivata, Cerca il `network_link_registry` oggetto per un blocco specificato.

```
virtual bool contains(_EType _Link) = 0;
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Un puntatore a un blocco che viene cercato nel `network_link_registry` oggetto.

### <a name="return-value"></a>Valore restituito

**true** se il blocco è stato trovato **false** in caso contrario.

##  <a name="count"></a> count

Quando sottoposto a override in una classe derivata, restituisce il numero di elementi nel `network_link_registry` oggetto.

```
virtual size_t count() = 0;
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi nel `network_link_registry` oggetto.

##  <a name="remove"></a> Rimuovi

Quando sottoposto a override in una classe derivata, rimuove un blocco specificato da di `network_link_registry` oggetto.

```
virtual bool remove(_EType _Link) = 0;
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Un puntatore a un blocco deve essere rimosso, se trovato.

### <a name="return-value"></a>Valore restituito

**true** se è stato trovato e rimosso, il collegamento **false** in caso contrario.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe single_link_registry](single-link-registry-class.md)<br/>
[Classe multi_link_registry](multi-link-registry-class.md)
