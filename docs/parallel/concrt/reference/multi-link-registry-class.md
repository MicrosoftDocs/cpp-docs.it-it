---
title: Classe multi_link_registry | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- multi_link_registry class
ms.assetid: b2aa73a8-e8a6-4255-b117-d07530c328b2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 26144fe1098e932512344550864c0949e5306238
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46401706"
---
# <a name="multilinkregistry-class"></a>Classe multi_link_registry

L'oggetto `multi_link_registry` è un `network_link_registry` che gestisce più blocchi di origine o più blocchi di destinazione.

## <a name="syntax"></a>Sintassi

```
template<class _Block>
class multi_link_registry : public network_link_registry<_Block>;
```

#### <a name="parameters"></a>Parametri

*_Block*<br/>
Tipo di dati di blocco vengano archiviate nel `multi_link_registry` oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[multi_link_registry](#ctor)|Costruisce un oggetto `multi_link_registry`.|
|[~ multi_link_registry distruttore](#dtor)|Elimina definitivamente il `multi_link_registry` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[add](#add)|Aggiunge un collegamento per il `multi_link_registry` oggetto. (Esegue l'override [network_link_registry:: Add](network-link-registry-class.md#add).)|
|[begin](#begin)|Restituisce un iteratore al primo elemento nel file di `multi_link_registry` oggetto. (Esegue l'override [network_link_registry:: Begin](network-link-registry-class.md#begin).)|
|[Contiene](#contains)|Le ricerche di `multi_link_registry` oggetto per un blocco specificato. (Esegue l'override [network_link_registry:: Contains](network-link-registry-class.md#contains).)|
|[count](#count)|Conta il numero di elementi nel `multi_link_registry` oggetto. (Esegue l'override [network_link_registry:: Count](network-link-registry-class.md#count).)|
|[remove](#remove)|Rimuove un collegamento dal `multi_link_registry` oggetto. (Esegue l'override [network_link_registry:: Remove](network-link-registry-class.md#remove).)|
|[set_bound](#set_bound)|Impostare un limite superiore al numero di collegamenti che i `multi_link_registry` oggetto può contenere.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[network_link_registry](network-link-registry-class.md)

`multi_link_registry`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

##  <a name="add"></a> Aggiungere

Aggiunge un collegamento per il `multi_link_registry` oggetto.

```
virtual void add(_EType _Link);
```

### <a name="parameters"></a>Parametri

*Collega*<br/>
Un puntatore a un blocco da aggiungere.

### <a name="remarks"></a>Note

Il metodo genera un' [invalid_link_target](invalid-link-target-class.md) eccezione se il collegamento è già presente nel Registro di sistema o se un limite è già stata impostata con il `set_bound` (funzione) e un collegamento è stato rimosso.

##  <a name="begin"></a> iniziare

Restituisce un iteratore al primo elemento nel file di `multi_link_registry` oggetto.

```
virtual iterator begin();
```

### <a name="return-value"></a>Valore restituito

Un iteratore che punta al primo elemento di `multi_link_registry` oggetto.

### <a name="remarks"></a>Note

Lo stato finale è indicato da un `NULL` collegamento.

##  <a name="contains"></a> Contiene

Le ricerche di `multi_link_registry` oggetto per un blocco specificato.

```
virtual bool contains(_EType _Link);
```

### <a name="parameters"></a>Parametri

*Collega*<br/>
Un puntatore a un blocco che deve essere eseguita la ricerca nel `multi_link_registry` oggetto.

### <a name="return-value"></a>Valore restituito

`true` Se il blocco specificato viene trovato, `false` in caso contrario.

##  <a name="count"></a> conteggio

Conta il numero di elementi nel `multi_link_registry` oggetto.

```
virtual size_t count();
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi nel `multi_link_registry` oggetto.

##  <a name="ctor"></a> multi_link_registry

Costruisce un oggetto `multi_link_registry`.

```
multi_link_registry();
```

##  <a name="dtor"></a> ~multi_link_registry

Elimina definitivamente il `multi_link_registry` oggetto.

```
virtual ~multi_link_registry();
```

### <a name="remarks"></a>Note

Il metodo genera un' [invalid_operation](invalid-operation-class.md) eccezione se viene chiamato prima che vengano rimossi tutti i collegamenti.

##  <a name="remove"></a> Rimuovi

Rimuove un collegamento dal `multi_link_registry` oggetto.

```
virtual bool remove(_EType _Link);
```

### <a name="parameters"></a>Parametri

*Collega*<br/>
Un puntatore a un blocco deve essere rimosso, se trovato.

### <a name="return-value"></a>Valore restituito

`true` Se il collegamento è stato trovato e rimosso, `false` in caso contrario.

##  <a name="set_bound"></a> set_bound

Impostare un limite superiore al numero di collegamenti che i `multi_link_registry` oggetto può contenere.

```
void set_bound(size_t _MaxLinks);
```

### <a name="parameters"></a>Parametri

*_MaxLinks*<br/>
Il numero massimo di collegamenti che i `multi_link_registry` oggetto può contenere.

### <a name="remarks"></a>Note

Una volta impostato un limite, lo scollegamento di una voce comporta l'impostazione dello stato non modificabile per l'oggetto `multi_link_registry`, pertanto tramite le chiamate successive a `add` verrà generata un'eccezione `invalid_link_target`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe single_link_registry](single-link-registry-class.md)
