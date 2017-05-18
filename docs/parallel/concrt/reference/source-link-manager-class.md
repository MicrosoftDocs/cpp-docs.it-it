---
title: Classe source_link_manager | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 17
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: 8e875fdd02a42e1cb1c144b0b7da07a1f4e9a184
ms.contentlocale: it-it
ms.lasthandoff: 03/17/2017

---
# <a name="sourcelinkmanager-class"></a>Classe source_link_manager
L'oggetto `source_link_manager` gestisce i collegamenti di rete dei blocchi della messaggistica nei blocchi `ISource`.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class _LinkRegistry>
class source_link_manager;
```  
  
#### <a name="parameters"></a>Parametri  
 `_LinkRegistry`  
 Registro di sistema del collegamento di rete.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`const_pointer`|Un tipo che fornisce un puntatore a un `const` elemento in un `source_link_manager` oggetto.|  
|`const_reference`|Tipo che fornisce un riferimento a un `const` elemento archiviato in un `source_link_manager` oggetto per la lettura e l'esecuzione di operazioni const.|  
|`iterator`|In grado di leggere o modificare qualsiasi elemento in un tipo che fornisce un iteratore che il `source_link_manager` oggetto.|  
|`type`|Il tipo di registro di sistema del collegamento viene gestito mediante la `source_link_manager` oggetto.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[source_link_manager](#ctor)|Costruisce un oggetto `source_link_manager`.|  
|[~ source_link_manager distruttore](#dtor)|Elimina il `source_link_manager` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[add](#add)|Aggiunge un collegamento di origine per il `source_link_manager` oggetto.|  
|[begin](#begin)|Restituisce un iteratore al primo elemento di `source_link_manager` oggetto.|  
|[contiene](#contains)|Ricerche di `network_link_registry` all'interno di questo `source_link_manager` oggetto per un blocco specificato.|  
|[count](#count)|Conta il numero di blocchi collegati nel `source_link_manager` oggetto.|  
|[reference](#reference)|Acquisisce un riferimento nel `source_link_manager` oggetto.|  
|[register_target_block](#register_target_block)|Registra il blocco di destinazione che contiene questo oggetto `source_link_manager` oggetto.|  
|[release](#release)|Rilascia il riferimento nel `source_link_manager` oggetto.|  
|[remove](#remove)|Rimuove un collegamento di `source_link_manager` oggetto.|  
|[set_bound](#set_bound)|Imposta il numero massimo di collegamenti di origine che possono essere aggiunti all'oggetto `source_link_manager` oggetto.|  
  
## <a name="remarks"></a>Note  
 I blocchi di origine sono attualmente riferimenti. Questo è un wrapper su un `network_link_registry` oggetto che consente l'accesso simultaneo ai collegamenti e offre la possibilità di fare riferimento ai collegamenti tramite callback. Blocchi dei messaggi ( `target_block`s o `propagator_block`s) devono utilizzare questa classe per i collegamenti di origine.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `source_link_manager`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="add"></a>aggiungere 

 Aggiunge un collegamento di origine per il `source_link_manager` oggetto.  
  
```
void add(_EType _Link);
```  
  
### <a name="parameters"></a>Parametri  
 `_Link`  
 Un puntatore a un blocco da aggiungere.  
  
##  <a name="begin"></a>iniziare 

 Restituisce un iteratore al primo elemento di `source_link_manager` oggetto.  
  
```
iterator begin();
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore che punta al primo elemento di `source_link_manager` oggetto.  
  
### <a name="remarks"></a>Note  
 Lo stato finale dell'iteratore è indicato da un `NULL` collegamento.  
  
##  <a name="contains"></a>contiene 

 Ricerche di `network_link_registry` all'interno di questo `source_link_manager` oggetto per un blocco specificato.  
  
```
bool contains(_EType _Link);
```  
  
### <a name="parameters"></a>Parametri  
 `_Link`  
 Un puntatore a un blocco che deve essere cercata nel `source_link_manager` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il blocco specificato è stato trovato, `false` in caso contrario.  
  
##  <a name="count"></a>conteggio 

 Conta il numero di blocchi collegati nel `source_link_manager` oggetto.  
  
```
size_t count();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di blocchi collegati nel `source_link_manager` oggetto.  
  
##  <a name="reference"></a>riferimento 

 Acquisisce un riferimento nel `source_link_manager` oggetto.  
  
```
void reference();
```  
  
##  <a name="register_target_block"></a>register_target_block 

 Registra il blocco di destinazione che contiene questo oggetto `source_link_manager` oggetto.  
  
```
void register_target_block(_Inout_ ITarget<typename _Block::source_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Blocco di destinazione contenente questo `source_link_manager` oggetto.  
  
##  <a name="release"></a>versione 

 Rilascia il riferimento nel `source_link_manager` oggetto.  
  
```
void release();
```  
  
##  <a name="remove"></a>rimuovere 

 Rimuove un collegamento di `source_link_manager` oggetto.  
  
```
bool remove(_EType _Link);
```  
  
### <a name="parameters"></a>Parametri  
 `_Link`  
 Un puntatore a un blocco deve essere rimosso, se trovato.  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il collegamento è stato trovato e rimosso, `false` in caso contrario.  
  
##  <a name="set_bound"></a>set_bound 

 Imposta il numero massimo di collegamenti di origine che possono essere aggiunti all'oggetto `source_link_manager` oggetto.  
  
```
void set_bound(size_t _MaxLinks);
```  
  
### <a name="parameters"></a>Parametri  
 `_MaxLinks`  
 Il numero massimo di collegamenti.  
  
##  <a name="ctor"></a>source_link_manager 

 Costruisce un oggetto `source_link_manager`.  
  
```
source_link_manager();
```  
  
##  <a name="dtor"></a>~ source_link_manager 

 Elimina il `source_link_manager` oggetto.  
  
```
~source_link_manager();
```  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe single_link_registry](single-link-registry-class.md)   
 [Classe multi_link_registry](multi-link-registry-class.md)

