---
title: Classe single_link_registry | Microsoft Docs
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
ms.openlocfilehash: 60820d2dc6b4fe0ab5c27ad746ee3f922fc39780
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46045783"
---
# <a name="singlelinkregistry-class"></a>Classe single_link_registry
L'oggetto `single_link_registry` è un `network_link_registry` che gestisce solo un singolo blocco di origine o di destinazione.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class _Block>
class single_link_registry : public network_link_registry<_Block>;
```  
  
#### <a name="parameters"></a>Parametri  
*_Block*<br/>
Tipo di dati di blocco vengano archiviate nel `single_link_registry` oggetto.  
  
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
|[Contiene](#contains)|Le ricerche di `single_link_registry` oggetto per un blocco specificato. (Esegue l'override [network_link_registry:: Contains](network-link-registry-class.md#contains).)|  
|[count](#count)|Conta il numero di elementi nel `single_link_registry` oggetto. (Esegue l'override [network_link_registry:: Count](network-link-registry-class.md#count).)|  
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
*Collega*<br/>
Un puntatore a un blocco da aggiungere.  
  
### <a name="remarks"></a>Note  
 Il metodo genera un' [invalid_link_target](invalid-link-target-class.md) eccezione se è già presente un collegamento in questo registro di sistema.  
  
##  <a name="begin"></a> iniziare 

 Restituisce un iteratore al primo elemento nel file di `single_link_registry` oggetto.  
  
```
virtual iterator begin();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore che punta al primo elemento di `single_link_registry` oggetto.  
  
### <a name="remarks"></a>Note  
 Lo stato finale è indicato da un `NULL` collegamento.  
  
##  <a name="contains"></a> Contiene 

 Le ricerche di `single_link_registry` oggetto per un blocco specificato.  
  
```
virtual bool contains(_EType _Link);
```  
  
### <a name="parameters"></a>Parametri  
*Collega*<br/>
Un puntatore a un blocco che deve essere eseguita la ricerca nel `single_link_registry` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il collegamento è stato trovato, `false` in caso contrario.  
  
##  <a name="count"></a> conteggio 

 Conta il numero di elementi nel `single_link_registry` oggetto.  
  
```
virtual size_t count();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi nel `single_link_registry` oggetto.  
  
##  <a name="remove"></a> Rimuovi 

 Rimuove un collegamento dal `single_link_registry` oggetto.  
  
```
virtual bool remove(_EType _Link);
```  
  
### <a name="parameters"></a>Parametri  
*Collega*<br/>
Un puntatore a un blocco deve essere rimosso, se trovato.  
  
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
 Il metodo genera un' [invalid_operation](invalid-operation-class.md) eccezione se viene chiamato prima della rimozione del collegamento.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe multi_link_registry](multi-link-registry-class.md)
