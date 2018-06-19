---
title: Classe single_link_registry | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- single_link_registry
- AGENTS/concurrency::single_link_registry
- AGENTS/concurrency::single_link_registry::single_link_registry
- AGENTS/concurrency::single_link_registry::add
- AGENTS/concurrency::single_link_registry::begin
- AGENTS/concurrency::single_link_registry::contains
- AGENTS/concurrency::single_link_registry::count
- AGENTS/concurrency::single_link_registry::remove
dev_langs:
- C++
helpviewer_keywords:
- single_link_registry class
ms.assetid: 09540a4e-c34e-4ff9-af49-21b8612b6ab3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3220156d201a4dcb7edb6281298d3f248f38fc83
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33690026"
---
# <a name="singlelinkregistry-class"></a>Classe single_link_registry
L'oggetto `single_link_registry` è un `network_link_registry` che gestisce solo un singolo blocco di origine o di destinazione.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class _Block>
class single_link_registry : public network_link_registry<_Block>;
```  
  
#### <a name="parameters"></a>Parametri  
 `_Block`  
 Tipo di dati di blocco memorizzato nel `single_link_registry` oggetto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[single_link_registry](#ctor)|Costruisce un oggetto `single_link_registry`.|  
|[~ single_link_registry distruttore](#dtor)|Elimina definitivamente il `single_link_registry` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[add](#add)|Aggiunge un collegamento per il `single_link_registry` oggetto. (Esegue l'override [network_link_registry:: Add](network-link-registry-class.md#add).)|  
|[begin](#begin)|Restituisce un iteratore al primo elemento nel file di `single_link_registry` oggetto. (Esegue l'override [network_link_registry:: Begin](network-link-registry-class.md#begin).)|  
|[contiene](#contains)|Ricerche di `single_link_registry` oggetto per un blocco specificato. (Esegue l'override [network_link_registry:: Contains](network-link-registry-class.md#contains).)|  
|[count](#count)|Conta il numero di elementi di `single_link_registry` oggetto. (Esegue l'override [network_link_registry:: Count](network-link-registry-class.md#count).)|  
|[remove](#remove)|Rimuove un collegamento dal `single_link_registry` oggetto. (Esegue l'override [network_link_registry:: Remove](network-link-registry-class.md#remove).)|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [network_link_registry](network-link-registry-class.md)  
  
 `single_link_registry`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="add"></a> Aggiungere 

 Aggiunge un collegamento per il `single_link_registry` oggetto.  
  
```
virtual void add(_EType _Link);
```  
  
### <a name="parameters"></a>Parametri  
 `_Link`  
 Un puntatore a un blocco da aggiungere.  
  
### <a name="remarks"></a>Note  
 Il metodo genera un [invalid_link_target](invalid-link-target-class.md) eccezione se è già presente un collegamento in questo registro di sistema.  
  
##  <a name="begin"></a> Begin 

 Restituisce un iteratore al primo elemento nel file di `single_link_registry` oggetto.  
  
```
virtual iterator begin();
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore che punta al primo elemento di `single_link_registry` oggetto.  
  
### <a name="remarks"></a>Note  
 Lo stato finale è indicato da un `NULL` collegamento.  
  
##  <a name="contains"></a> contiene 

 Ricerche di `single_link_registry` oggetto per un blocco specificato.  
  
```
virtual bool contains(_EType _Link);
```  
  
### <a name="parameters"></a>Parametri  
 `_Link`  
 Un puntatore a un blocco di cui eseguire la ricerca nel `single_link_registry` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il collegamento è stato trovato, `false` in caso contrario.  
  
##  <a name="count"></a> Conteggio 

 Conta il numero di elementi di `single_link_registry` oggetto.  
  
```
virtual size_t count();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi di `single_link_registry` oggetto.  
  
##  <a name="remove"></a> Rimuovere 

 Rimuove un collegamento dal `single_link_registry` oggetto.  
  
```
virtual bool remove(_EType _Link);
```  
  
### <a name="parameters"></a>Parametri  
 `_Link`  
 Un puntatore a un blocco da rimuovere, se trovato.  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il collegamento è stato trovato e rimosso, `false` in caso contrario.  
  
##  <a name="ctor"></a> single_link_registry 

 Costruisce un oggetto `single_link_registry`.  
  
```
single_link_registry();
```  
  
##  <a name="dtor"></a> ~single_link_registry 

 Elimina definitivamente il `single_link_registry` oggetto.  
  
```
virtual ~single_link_registry();
```  
  
### <a name="remarks"></a>Note  
 Il metodo genera un [invalid_operation](invalid-operation-class.md) eccezione se viene chiamato prima che venga rimosso il collegamento.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe multi_link_registry](multi-link-registry-class.md)
