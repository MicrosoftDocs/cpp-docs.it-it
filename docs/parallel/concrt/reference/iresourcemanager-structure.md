---
title: IResourceManager (struttura) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IResourceManager
- CONCRTRM/concurrency::IResourceManager
- CONCRTRM/concurrency::IResourceManager::IResourceManager::OSVersion
- CONCRTRM/concurrency::IResourceManager::IResourceManager::CreateNodeTopology
- CONCRTRM/concurrency::IResourceManager::IResourceManager::GetAvailableNodeCount
- CONCRTRM/concurrency::IResourceManager::IResourceManager::GetFirstNode
- CONCRTRM/concurrency::IResourceManager::IResourceManager::Reference
- CONCRTRM/concurrency::IResourceManager::IResourceManager::RegisterScheduler
- CONCRTRM/concurrency::IResourceManager::IResourceManager::Release
dev_langs:
- C++
helpviewer_keywords:
- IResourceManager structure
ms.assetid: 3dd5ec2c-fe53-4121-ae77-1bc1d1167ff4
caps.latest.revision: 20
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
translationtype: Machine Translation
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: 2d054bd632db90708d90fe8d791965b47f713493
ms.lasthandoff: 03/17/2017

---
# <a name="iresourcemanager-structure"></a>Struttura IResourceManager
Un'interfaccia alla Gestione risorse del runtime di concorrenza. Si tratta dell'interfaccia mediante la quale le utilità di pianificazione comunicano con Gestione risorse.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct IResourceManager;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-enumerations"></a>Enumerazioni pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IResourceManager:: OSVersion](#osversion)|Tipo enumerato che rappresenta la versione del sistema operativo.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IResourceManager:: CreateNodeTopology](#createnodetopology)|Presente solo in modalità debug compilazioni del runtime, questo metodo è un hook di test progettato per semplificare il test di gestione risorse su topologie hardware, senza richiedere un hardware effettivo corrispondente alla configurazione. Con le compilazioni di vendita al dettaglio del runtime, questo metodo restituirà senza eseguire alcuna azione.|  
|[IResourceManager:: Getavailablenodecount](#getavailablenodecount)|Restituisce il numero di nodi disponibili per Gestione risorse.|  
|[IResourceManager:: Getfirstnode](#getfirstnode)|Restituisce il primo nodo nell'ordine dell'enumerazione come definito da Gestione risorse.|  
|[IResourceManager:: Reference](#reference)|Incrementa il conteggio dei riferimenti sull'istanza del gestore di risorse.|  
|[IResourceManager:: RegisterScheduler](#registerscheduler)|Registra un'utilità di pianificazione con Gestione risorse. Una volta registrato l'utilità di pianificazione, deve comunicare con il gestore delle risorse di `ISchedulerProxy` interfaccia restituita.|  
|[IResourceManager:: Release](#release)|Decrementa il conteggio dei riferimenti sull'istanza del gestore di risorse. Il gestore di risorse viene eliminato quando il conteggio dei riferimenti va a `0`.|  
  
## <a name="remarks"></a>Note  
 Utilizzare il [CreateResourceManager](concurrency-namespace-functions.md) funzione per ottenere un'interfaccia all'istanza singleton di gestione risorse. Il metodo incrementa un conteggio dei riferimenti su Gestione risorse e richiamare il [IResourceManager:: Release](#release) metodo per rilasciare il riferimento al termine con Gestione risorse. In genere, ogni utilità di pianificazione creata richiamare questo metodo durante la creazione e rilasciare il riferimento a Gestione risorse dopo l'arresto.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IResourceManager`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="createnodetopology"></a>Metodo IResourceManager:: CreateNodeTopology  
 Presente solo in modalità debug compilazioni del runtime, questo metodo è un hook di test progettato per semplificare il test di gestione risorse su topologie hardware, senza richiedere un hardware effettivo corrispondente alla configurazione. Con le compilazioni di vendita al dettaglio del runtime, questo metodo restituirà senza eseguire alcuna azione.  
  
```
virtual void CreateNodeTopology(
    unsigned int nodeCount,
    _In_reads_(nodeCount) unsigned int* pCoreCount,
    _In_reads_opt_(nodeCount) unsigned int** pNodeDistance,
    _In_reads_(nodeCount) unsigned int* pProcessorGroups) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `nodeCount`  
 Il numero di nodi del processore viene simulata.  
  
 `pCoreCount`  
 Matrice che specifica il numero di core in ogni nodo.  
  
 `pNodeDistance`  
 Una matrice che specifica la distanza tra due nodi del nodo. Questo parametro può avere il valore `NULL`.  
  
 `pProcessorGroups`  
 Matrice che specifica il gruppo di processori a cui appartiene ogni nodo.  
  
### <a name="remarks"></a>Note  
 [invalid_argument](../../../standard-library/invalid-argument-class.md) viene generata se il parametro `nodeCount` ha il valore `0` è stata passata, o se il parametro `pCoreCount` ha il valore `NULL`.  
  
 [invalid_operation](invalid-operation-class.md) viene generata se questo metodo viene chiamato anche se sono disponibili altre utilità di pianificazione del processo.  
  
##  <a name="getavailablenodecount"></a>Metodo IResourceManager:: Getavailablenodecount  
 Restituisce il numero di nodi disponibili per Gestione risorse.  
  
```
virtual unsigned int GetAvailableNodeCount() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di nodi disponibili per il gestore delle risorse.  
  
##  <a name="getfirstnode"></a>Metodo IResourceManager:: Getfirstnode  
 Restituisce il primo nodo nell'ordine dell'enumerazione come definito da Gestione risorse.  
  
```
virtual ITopologyNode* GetFirstNode() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il primo nodo nell'ordine dell'enumerazione come definito da Gestione risorse.  
  
##  <a name="iresourcemanager__osversion"></a>Enumerazione IResourceManager:: OSVersion  
 Tipo enumerato che rappresenta la versione del sistema operativo.  
  
```
enum OSVersion;
```  
  
##  <a name="reference"></a>Metodo IResourceManager:: Reference  
 Incrementa il conteggio dei riferimenti sull'istanza del gestore di risorse.  
  
```
virtual unsigned int Reference() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il conteggio dei riferimenti risultante.  
  
##  <a name="registerscheduler"></a>Metodo IResourceManager:: RegisterScheduler  
 Registra un'utilità di pianificazione con Gestione risorse. Una volta registrato l'utilità di pianificazione, deve comunicare con il gestore delle risorse di `ISchedulerProxy` interfaccia restituita.  
  
```
virtual ISchedulerProxy *RegisterScheduler(
    _Inout_ IScheduler* pScheduler,
    unsigned int version) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `pScheduler`  
 Un `IScheduler` interfaccia all'utilità di pianificazione da registrare.  
  
 `version`  
 La versione dell'interfaccia di comunicazione l'utilità di pianificazione utilizza per comunicare con Gestione risorse. Utilizza una versione consente la gestione risorse di evolvere l'interfaccia di comunicazione, consentendo al contempo le utilità di pianificazione ottenere l'accesso alle funzionalità più obsolete. Utilità di pianificazione che intendono utilizzare le funzionalità di gestione risorse presenti in Visual Studio 2010 è necessario utilizzare la versione `CONCRT_RM_VERSION_1`.  
  
### <a name="return-value"></a>Valore restituito  
 Il `ISchedulerProxy` interfaccia con l'utilità di pianificazione associato il gestore di risorse. L'utilità di pianificazione deve utilizzare questa interfaccia per comunicare con Gestione risorse dal punto in.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per avviare la comunicazione con il gestore delle risorse. Il metodo associa il `IScheduler` interfaccia dell'utilità di pianificazione con un `ISchedulerProxy` interfaccia e restituisce all'utente. È possibile utilizzare l'interfaccia restituita per richiedere risorse di esecuzione per l'utilizzo dall'utilità di pianificazione o sottoscrivere i thread con Gestione risorse. Il gestore di risorse utilizzerà gli elementi dei criteri dell'utilità di pianificazione restituiti dal [IScheduler:: GetPolicy](ischeduler-structure.md#getpolicy) metodo per determinare il tipo di thread che l'utilità di pianificazione sarà necessario eseguire il lavoro. Se il `SchedulerKind` chiave dei criteri con il valore `UmsThreadDefault` e il valore viene letto più i criteri come valore `UmsThreadDefault`, `IScheduler` deve essere passato al metodo di interfaccia un' `IUMSScheduler` interfaccia.  
  
 Il metodo genera un `invalid_argument` eccezione se il parametro `pScheduler` ha il valore `NULL` o se il parametro `version` non è una versione valida per l'interfaccia di comunicazione.  
  
##  <a name="release"></a>Metodo IResourceManager:: Release  
 Decrementa il conteggio dei riferimenti sull'istanza del gestore di risorse. Il gestore di risorse viene eliminato quando il conteggio dei riferimenti va a `0`.  
  
```
virtual unsigned int Release() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il conteggio dei riferimenti risultante.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [ISchedulerProxy (struttura)](ischedulerproxy-structure.md)   
 [Struttura IScheduler](ischeduler-structure.md)

