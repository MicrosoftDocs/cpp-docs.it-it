---
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
ms.openlocfilehash: 35c7cc72520cdb0675abf9c15574a49e33741d0b
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142693"
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

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`const_pointer`|Tipo che fornisce un puntatore a un elemento `const` in un oggetto `source_link_manager`.|
|`const_reference`|Tipo che fornisce un riferimento a un elemento `const` archiviato in un oggetto `source_link_manager` per la lettura e l'esecuzione di operazioni const.|
|`iterator`|Tipo che fornisce un iteratore in grado di leggere o modificare qualsiasi elemento nell'oggetto `source_link_manager`.|
|`type`|Tipo di registro di collegamento gestito dall'oggetto `source_link_manager`.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[source_link_manager](#ctor)|Costruisce un oggetto `source_link_manager`.|
|[distruttore ~ source_link_manager](#dtor)|Elimina definitivamente l'oggetto `source_link_manager`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[add](#add)|Aggiunge un collegamento di origine all'oggetto `source_link_manager`.|
|[begin](#begin)|Restituisce un iteratore al primo elemento dell'oggetto `source_link_manager`.|
|[contains](#contains)|Cerca in un blocco specificato la `network_link_registry` all'interno di questo `source_link_manager` oggetto.|
|[count](#count)|Conta il numero di blocchi collegati nell'oggetto `source_link_manager`.|
|[reference](#reference)|Acquisisce un riferimento nell'oggetto `source_link_manager`.|
|[register_target_block](#register_target_block)|Registra il blocco di destinazione che include questo oggetto `source_link_manager`.|
|[release](#release)|Rilascia il riferimento nell'oggetto `source_link_manager`.|
|[remove](#remove)|Rimuove un collegamento dall'oggetto `source_link_manager`.|
|[set_bound](#set_bound)|Imposta il numero massimo di collegamenti di origine che è possibile aggiungere a questo oggetto `source_link_manager`.|

## <a name="remarks"></a>Osservazioni

Attualmente, i blocchi di origine sono conteggiati come riferimenti. Si tratta di un wrapper su un oggetto `network_link_registry` che consente l'accesso simultaneo ai collegamenti e fornisce la possibilità di fare riferimento ai collegamenti tramite callback. Per i collegamenti di origine, i blocchi di messaggi (`target_block`s o `propagator_block`s) devono usare questa classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`source_link_manager`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="add"></a>aggiungere

Aggiunge un collegamento di origine all'oggetto `source_link_manager`.

```cpp
void add(_EType _Link);
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco da aggiungere.

## <a name="begin"></a>iniziare

Restituisce un iteratore al primo elemento dell'oggetto `source_link_manager`.

```cpp
iterator begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore che punta al primo elemento dell'oggetto `source_link_manager`.

### <a name="remarks"></a>Osservazioni

Lo stato finale dell'iteratore è indicato da un collegamento `NULL`.

## <a name="contains"></a>contiene

Cerca in un blocco specificato la `network_link_registry` all'interno di questo `source_link_manager` oggetto.

```cpp
bool contains(_EType _Link);
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco che deve essere cercato nell'oggetto `source_link_manager`.

### <a name="return-value"></a>Valore restituito

**true** se il blocco specificato è stato trovato; in caso contrario, **false** .

## <a name="count"></a>conteggio

Conta il numero di blocchi collegati nell'oggetto `source_link_manager`.

```cpp
size_t count();
```

### <a name="return-value"></a>Valore restituito

Numero di blocchi collegati nell'oggetto `source_link_manager`.

## <a name="reference"></a>riferimento

Acquisisce un riferimento nell'oggetto `source_link_manager`.

```cpp
void reference();
```

## <a name="register_target_block"></a>register_target_block

Registra il blocco di destinazione che include questo oggetto `source_link_manager`.

```cpp
void register_target_block(_Inout_ ITarget<typename _Block::source_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Il blocco di destinazione che contiene questo oggetto `source_link_manager`.

## <a name="release"></a>versione

Rilascia il riferimento nell'oggetto `source_link_manager`.

```cpp
void release();
```

## <a name="remove"></a>rimuovere

Rimuove un collegamento dall'oggetto `source_link_manager`.

```cpp
bool remove(_EType _Link);
```

### <a name="parameters"></a>Parametri

*_Link*<br/>
Puntatore a un blocco da rimuovere, se trovato.

### <a name="return-value"></a>Valore restituito

**true** se il collegamento è stato trovato e rimosso; in caso contrario, **false** .

## <a name="set_bound"></a>set_bound

Imposta il numero massimo di collegamenti di origine che è possibile aggiungere a questo oggetto `source_link_manager`.

```cpp
void set_bound(size_t _MaxLinks);
```

### <a name="parameters"></a>Parametri

*_MaxLinks*<br/>
Numero massimo di collegamenti.

## <a name="ctor"></a>source_link_manager

Costruisce un oggetto `source_link_manager`.

```cpp
source_link_manager();
```

## <a name="dtor"></a>~ source_link_manager

Elimina definitivamente l'oggetto `source_link_manager`.

```cpp
~source_link_manager();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe single_link_registry](single-link-registry-class.md)<br/>
[Classe multi_link_registry](multi-link-registry-class.md)
