---
title: Classe source_link_manager | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- source_link_manager class
ms.assetid: 287487cf-e0fe-4c35-aa3c-24f081d1ddae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 94c3e3c43f573cde22c9818752544eb18bf32191
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49162269"
---
# <a name="sourcelinkmanager-class"></a>Classe source_link_manager

L'oggetto `source_link_manager` gestisce i collegamenti di rete dei blocchi della messaggistica nei blocchi `ISource`.

## <a name="syntax"></a>Sintassi

```
template<class _LinkRegistry>
class source_link_manager;
```

#### <a name="parameters"></a>Parametri

*_LinkRegistry*<br/>
Il Registro di collegamento di rete.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`const_pointer`|Tipo che fornisce un puntatore a un `const` elemento in un `source_link_manager` oggetto.|
|`const_reference`|Tipo che fornisce un riferimento a un `const` elemento archiviato in un `source_link_manager` oggetto per la lettura e l'esecuzione di operazioni di const.|
|`iterator`|Tipo che fornisce un iteratore che può leggere o modificare qualsiasi elemento nel `source_link_manager` oggetto.|
|`type`|Il tipo del Registro di sistema di collegamento viene gestito mediante la `source_link_manager` oggetto.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[source_link_manager](#ctor)|Costruisce un oggetto `source_link_manager`.|
|[~ source_link_manager distruttore](#dtor)|Elimina definitivamente il `source_link_manager` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[add](#add)|Aggiunge un collegamento all'origine per il `source_link_manager` oggetto.|
|[begin](#begin)|Restituisce un iteratore al primo elemento nel file di `source_link_manager` oggetto.|
|[Contiene](#contains)|Cerca il `network_link_registry` all'interno di questo `source_link_manager` oggetto per un blocco specificato.|
|[count](#count)|Conta il numero di blocchi collegati nel `source_link_manager` oggetto.|
|[reference](#reference)|Acquisisce un riferimento nel `source_link_manager` oggetto.|
|[register_target_block](#register_target_block)|Registra il blocco di destinazione che contiene questo `source_link_manager` oggetto.|
|[release](#release)|Rilascia il riferimento nel `source_link_manager` oggetto.|
|[remove](#remove)|Rimuove un collegamento dal `source_link_manager` oggetto.|
|[set_bound](#set_bound)|Imposta il numero massimo di collegamenti di origine che possono essere aggiunti all'oggetto `source_link_manager` oggetto.|

## <a name="remarks"></a>Note

Attualmente, i blocchi di origine sono riferimenti. Si tratta di un wrapper su un `network_link_registry` oggetto che consente l'accesso simultaneo ai collegamenti e offre la possibilità di fare riferimento ai collegamenti tramite callback. Blocchi del messaggio ( `target_block`s o `propagator_block`s) devono utilizzare questa classe per i collegamenti di origine.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`source_link_manager`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

##  <a name="add"></a> Aggiungere

Aggiunge un collegamento all'origine per il `source_link_manager` oggetto.

```
void add(_EType _Link);
```

### <a name="parameters"></a>Parametri

*Collega*<br/>
Un puntatore a un blocco da aggiungere.

##  <a name="begin"></a> iniziare

Restituisce un iteratore al primo elemento nel file di `source_link_manager` oggetto.

```
iterator begin();
```

### <a name="return-value"></a>Valore restituito

Un iteratore che punta al primo elemento di `source_link_manager` oggetto.

### <a name="remarks"></a>Note

Lo stato finale dell'iteratore è indicato da un `NULL` collegamento.

##  <a name="contains"></a> Contiene

Cerca il `network_link_registry` all'interno di questo `source_link_manager` oggetto per un blocco specificato.

```
bool contains(_EType _Link);
```

### <a name="parameters"></a>Parametri

*Collega*<br/>
Un puntatore a un blocco che deve essere eseguita la ricerca nel `source_link_manager` oggetto.

### <a name="return-value"></a>Valore restituito

**true** se il blocco specificato è stato trovato **false** in caso contrario.

##  <a name="count"></a> conteggio

Conta il numero di blocchi collegati nel `source_link_manager` oggetto.

```
size_t count();
```

### <a name="return-value"></a>Valore restituito

Il numero di blocchi collegati nel `source_link_manager` oggetto.

##  <a name="reference"></a> Riferimento

Acquisisce un riferimento nel `source_link_manager` oggetto.

```
void reference();
```

##  <a name="register_target_block"></a> register_target_block

Registra il blocco di destinazione che contiene questo `source_link_manager` oggetto.

```
void register_target_block(_Inout_ ITarget<typename _Block::source_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*PTarget*<br/>
Il blocco di destinazione che contiene questo `source_link_manager` oggetto.

##  <a name="release"></a> Versione

Rilascia il riferimento nel `source_link_manager` oggetto.

```
void release();
```

##  <a name="remove"></a> Rimuovi

Rimuove un collegamento dal `source_link_manager` oggetto.

```
bool remove(_EType _Link);
```

### <a name="parameters"></a>Parametri

*Collega*<br/>
Un puntatore a un blocco deve essere rimosso, se trovato.

### <a name="return-value"></a>Valore restituito

**true** se è stato trovato e rimosso, il collegamento **false** in caso contrario.

##  <a name="set_bound"></a> set_bound

Imposta il numero massimo di collegamenti di origine che possono essere aggiunti all'oggetto `source_link_manager` oggetto.

```
void set_bound(size_t _MaxLinks);
```

### <a name="parameters"></a>Parametri

*_MaxLinks*<br/>
Il numero massimo di collegamenti.

##  <a name="ctor"></a> source_link_manager

Costruisce un oggetto `source_link_manager`.

```
source_link_manager();
```

##  <a name="dtor"></a> ~source_link_manager

Elimina definitivamente il `source_link_manager` oggetto.

```
~source_link_manager();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe single_link_registry](single-link-registry-class.md)<br/>
[Classe multi_link_registry](multi-link-registry-class.md)
