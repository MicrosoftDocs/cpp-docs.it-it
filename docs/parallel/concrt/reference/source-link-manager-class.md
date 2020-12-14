---
description: 'Altre informazioni su: source_link_manager Class'
title: Classe source_link_manager
ms.date: 11/04/2016
f1_keywords:
- source_link_manager
- AGENTS/concurrency::source_link_manager
- AGENTS/concurrency::source_link_manager::source_link_manager
- AGENTS/concurrency::source_link_manager::add
- AGENTS/concurrency::source_link_manager::begin
- AGENTS/concurrency::source_link_manager::contains
- AGENTS/concurrency::source_link_manager::count
- AGENTS/concurrency::source_link_manager::reference
- AGENTS/concurrency::source_link_manager::register_target_block
- AGENTS/concurrency::source_link_manager::release
- AGENTS/concurrency::source_link_manager::remove
- AGENTS/concurrency::source_link_manager::set_bound
helpviewer_keywords:
- source_link_manager class
ms.assetid: 287487cf-e0fe-4c35-aa3c-24f081d1ddae
ms.openlocfilehash: 132dc2db07a1c9abeeb04672f97e262761764feb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188508"
---
# <a name="source_link_manager-class"></a>Classe source_link_manager

L'oggetto `source_link_manager` gestisce i collegamenti di rete dei blocchi della messaggistica nei blocchi `ISource`.

## <a name="syntax"></a>Sintassi

```cpp
template<class _LinkRegistry>
class source_link_manager;
```

### <a name="parameters"></a>Parametri

*_LinkRegistry*<br/>
Registro del collegamento di rete.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`const_pointer`|Tipo che fornisce un puntatore a un **`const`** elemento in un `source_link_manager` oggetto.|
|`const_reference`|Tipo che fornisce un riferimento a un **`const`** elemento archiviato in un `source_link_manager` oggetto per la lettura e l'esecuzione di operazioni const.|
|`iterator`|Tipo che fornisce un iteratore in grado di leggere o modificare qualsiasi elemento nell' `source_link_manager` oggetto.|
|`type`|Tipo di registro di collegamento gestito dall' `source_link_manager` oggetto.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[source_link_manager](#ctor)|Costruisce un oggetto `source_link_manager`.|
|[distruttore ~ source_link_manager](#dtor)|Elimina definitivamente l' `source_link_manager` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[add](#add)|Aggiunge un collegamento di origine all' `source_link_manager` oggetto.|
|[iniziare](#begin)|Restituisce un iteratore al primo elemento dell' `source_link_manager` oggetto.|
|[contains](#contains)|Cerca `network_link_registry` `source_link_manager` un blocco specificato all'interno di questo oggetto.|
|[count](#count)|Conta il numero di blocchi collegati nell' `source_link_manager` oggetto.|
|[reference](#reference)|Acquisisce un riferimento per l' `source_link_manager` oggetto.|
|[register_target_block](#register_target_block)|Registra il blocco di destinazione che include questo `source_link_manager` oggetto.|
|[versione](#release)|Rilascia il riferimento all' `source_link_manager` oggetto.|
|[remove](#remove)|Rimuove un collegamento dall' `source_link_manager` oggetto.|
|[set_bound](#set_bound)|Imposta il numero massimo di collegamenti di origine che è possibile aggiungere a questo `source_link_manager` oggetto.|

## <a name="remarks"></a>Commenti

Attualmente, i blocchi di origine sono conteggiati come riferimenti. Si tratta di un wrapper di un `network_link_registry` oggetto che consente l'accesso simultaneo ai collegamenti e fornisce la possibilità di fare riferimento ai collegamenti tramite callback. I blocchi `target_block` `propagator_block` di messaggi devono usare questa classe per i collegamenti di origine.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`source_link_manager`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="add"></a><a name="add"></a> aggiungere

Aggiunge un collegamento di origine all' `source_link_manager` oggetto.

```cpp
void add(_EType _Link);
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco da aggiungere.

## <a name="begin"></a><a name="begin"></a> iniziare

Restituisce un iteratore al primo elemento dell' `source_link_manager` oggetto.

```cpp
iterator begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore che punta al primo elemento dell' `source_link_manager` oggetto.

### <a name="remarks"></a>Commenti

Lo stato finale dell'iteratore è indicato da un `NULL` collegamento.

## <a name="contains"></a><a name="contains"></a> contiene

Cerca `network_link_registry` `source_link_manager` un blocco specificato all'interno di questo oggetto.

```cpp
bool contains(_EType _Link);
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco da cercare nell' `source_link_manager` oggetto.

### <a name="return-value"></a>Valore restituito

**`true`** Se il blocco specificato è stato trovato; **`false`** in caso contrario,.

## <a name="count"></a><a name="count"></a> conteggio

Conta il numero di blocchi collegati nell' `source_link_manager` oggetto.

```cpp
size_t count();
```

### <a name="return-value"></a>Valore restituito

Numero di blocchi collegati nell' `source_link_manager` oggetto.

## <a name="reference"></a><a name="reference"></a> riferimento

Acquisisce un riferimento per l' `source_link_manager` oggetto.

```cpp
void reference();
```

## <a name="register_target_block"></a><a name="register_target_block"></a> register_target_block

Registra il blocco di destinazione che include questo `source_link_manager` oggetto.

```cpp
void register_target_block(_Inout_ ITarget<typename _Block::source_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Il blocco di destinazione che contiene questo `source_link_manager` oggetto.

## <a name="release"></a><a name="release"></a> versione

Rilascia il riferimento all' `source_link_manager` oggetto.

```cpp
void release();
```

## <a name="remove"></a><a name="remove"></a> rimuovere

Rimuove un collegamento dall' `source_link_manager` oggetto.

```cpp
bool remove(_EType _Link);
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco da rimuovere, se trovato.

### <a name="return-value"></a>Valore restituito

**`true`** Se il collegamento è stato trovato e rimosso; **`false`** in caso contrario,.

## <a name="set_bound"></a><a name="set_bound"></a> set_bound

Imposta il numero massimo di collegamenti di origine che è possibile aggiungere a questo `source_link_manager` oggetto.

```cpp
void set_bound(size_t _MaxLinks);
```

### <a name="parameters"></a>Parametri

*_MaxLinks*<br/>
Numero massimo di collegamenti.

## <a name="source_link_manager"></a><a name="ctor"></a> source_link_manager

Costruisce un oggetto `source_link_manager`.

```cpp
source_link_manager();
```

## <a name="source_link_manager"></a><a name="dtor"></a> ~ source_link_manager

Elimina definitivamente l' `source_link_manager` oggetto.

```cpp
~source_link_manager();
```

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe single_link_registry](single-link-registry-class.md)<br/>
[Classe multi_link_registry](multi-link-registry-class.md)
