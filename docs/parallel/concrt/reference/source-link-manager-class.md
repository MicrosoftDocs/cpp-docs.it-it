---
title: Classe source_link_manager | Documenti Microsoft
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
ms.openlocfilehash: f8e17626fc870242c97a9ad66a77e5e3b77b1ed1
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33691287"
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
|`const_reference`|Un tipo che fornisce un riferimento a un `const` elemento archiviato in un `source_link_manager` oggetto per la lettura e l'esecuzione di operazioni const.|  
|`iterator`|Un tipo che fornisce un iteratore che può leggere o modificare qualsiasi elemento di `source_link_manager` oggetto.|  
|`type`|Il tipo di registro di sistema del collegamento viene gestito mediante la `source_link_manager` oggetto.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[source_link_manager](#ctor)|Costruisce un oggetto `source_link_manager`.|  
|[~ source_link_manager distruttore](#dtor)|Elimina definitivamente il `source_link_manager` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[add](#add)|Aggiunge un collegamento di origine per il `source_link_manager` oggetto.|  
|[begin](#begin)|Restituisce un iteratore al primo elemento nel file di `source_link_manager` oggetto.|  
|[contiene](#contains)|Ricerche di `network_link_registry` all'interno di questa `source_link_manager` oggetto per un blocco specificato.|  
|[count](#count)|Conta il numero di blocchi collegati nel `source_link_manager` oggetto.|  
|[reference](#reference)|Acquisisce un riferimento nel `source_link_manager` oggetto.|  
|[register_target_block](#register_target_block)|Registra il blocco di destinazione che contiene questo oggetto `source_link_manager` oggetto.|  
|[release](#release)|Rilascia il riferimento nel `source_link_manager` oggetto.|  
|[remove](#remove)|Rimuove un collegamento dal `source_link_manager` oggetto.|  
|[set_bound](#set_bound)|Imposta il numero massimo di collegamenti di origine che possono essere aggiunti all'oggetto `source_link_manager` oggetto.|  
  
## <a name="remarks"></a>Note  
 I blocchi di origine non sono attualmente riferimento conteggiato. Si tratta di un wrapper in una `network_link_registry` oggetto che consente l'accesso simultaneo ai collegamenti e offre la possibilità di fare riferimento ai collegamenti tramite callback. Blocchi dei messaggi ( `target_block`s o `propagator_block`s) devono utilizzare questa classe per i collegamenti di origine.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `source_link_manager`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="add"></a> Aggiungere 

 Aggiunge un collegamento di origine per il `source_link_manager` oggetto.  
  
```
void add(_EType _Link);
```  
  
### <a name="parameters"></a>Parametri  
 `_Link`  
 Un puntatore a un blocco da aggiungere.  
  
##  <a name="begin"></a> Begin 

 Restituisce un iteratore al primo elemento nel file di `source_link_manager` oggetto.  
  
```
iterator begin();
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore che punta al primo elemento di `source_link_manager` oggetto.  
  
### <a name="remarks"></a>Note  
 Viene indicato lo stato finale dell'iteratore da un `NULL` collegamento.  
  
##  <a name="contains"></a> contiene 

 Ricerche di `network_link_registry` all'interno di questa `source_link_manager` oggetto per un blocco specificato.  
  
```
bool contains(_EType _Link);
```  
  
### <a name="parameters"></a>Parametri  
 `_Link`  
 Un puntatore a un blocco di cui eseguire la ricerca nel `source_link_manager` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il blocco specificato è stato trovato, `false` in caso contrario.  
  
##  <a name="count"></a> Conteggio 

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

 Registra il blocco di destinazione che contiene questo oggetto `source_link_manager` oggetto.  
  
```
void register_target_block(_Inout_ ITarget<typename _Block::source_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Blocco di destinazione contenente questo `source_link_manager` oggetto.  
  
##  <a name="release"></a> versione 

 Rilascia il riferimento nel `source_link_manager` oggetto.  
  
```
void release();
```  
  
##  <a name="remove"></a> Rimuovere 

 Rimuove un collegamento dal `source_link_manager` oggetto.  
  
```
bool remove(_EType _Link);
```  
  
### <a name="parameters"></a>Parametri  
 `_Link`  
 Un puntatore a un blocco da rimuovere, se trovato.  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il collegamento è stato trovato e rimosso, `false` in caso contrario.  
  
##  <a name="set_bound"></a> set_bound 

 Imposta il numero massimo di collegamenti di origine che possono essere aggiunti all'oggetto `source_link_manager` oggetto.  
  
```
void set_bound(size_t _MaxLinks);
```  
  
### <a name="parameters"></a>Parametri  
 `_MaxLinks`  
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
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe single_link_registry](single-link-registry-class.md)   
 [Classe multi_link_registry](multi-link-registry-class.md)
