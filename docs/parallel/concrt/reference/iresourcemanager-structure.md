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
- concrtrm/concurrency::IResourceManager
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
ms.sourcegitcommit: fa774c7f025b581d65c28d65d83e22ff2d798230
ms.openlocfilehash: fb523127f60c4e8cd45b2525749b536ad55849b0
ms.lasthandoff: 02/24/2017

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
|[Enumerazione IResourceManager:: OSVersion](#osversion)|Tipo enumerato che rappresenta la versione del sistema operativo.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo IResourceManager:: CreateNodeTopology](#createnodetopology)|Presente solo in modalità debug compilazioni del runtime, questo metodo è un hook di test progettato per semplificare il test di gestione risorse su topologie hardware, senza richiedere un hardware effettivo corrispondente alla configurazione. Con le compilazioni di vendita al dettaglio del runtime, questo metodo restituirà senza eseguire alcuna azione.|  
|[Metodo IResourceManager:: Getavailablenodecount](#getavailablenodecount)|Restituisce il numero di nodi disponibili per Gestione risorse.|  
|[Metodo IResourceManager:: Getfirstnode](#getfirstnode)|Restituisce il primo nodo nell'ordine dell'enumerazione come definito da Gestione risorse.|  
|[Metodo IResourceManager:: Reference](#reference)|Incrementa il conteggio dei riferimenti sull'istanza del gestore di risorse.|  
|[Metodo IResourceManager:: RegisterScheduler](#registerscheduler)|Registra un'utilità di pianificazione con Gestione risorse. Una volta registrato l'utilità di pianificazione, deve comunicare con il gestore delle risorse di `ISchedulerProxy` interfaccia restituita.|  
|[Metodo IResourceManager:: Release](#release)|Decrementa il conteggio dei riferimenti sull'istanza del gestore di risorse. Il gestore di risorse viene eliminato quando il conteggio dei riferimenti va a `0`.|  
  
## <a name="remarks"></a>Note  
 Utilizzare il [CreateResourceManager](concurrency-namespace-functions.md) funzione per ottenere un'interfaccia all'istanza singleton di gestione risorse. Il metodo incrementa un conteggio dei riferimenti su Gestione risorse e richiamare il [IResourceManager:: Release](#release) metodo per rilasciare il riferimento al termine con Gestione risorse. In genere, ogni utilità di pianificazione creata richiamare questo metodo durante la creazione e rilasciare il riferimento a Gestione risorse dopo l'arresto.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IResourceManager`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namecreatenodetopologya--iresourcemanagercreatenodetopology-method"></a><a name="createnodetopology"></a>Metodo IResourceManager:: CreateNodeTopology  
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
  
##  <a name="a-namegetavailablenodecounta--iresourcemanagergetavailablenodecount-method"></a><a name="getavailablenodecount"></a>Metodo IResourceManager:: Getavailablenodecount  
 Restituisce il numero di nodi disponibili per Gestione risorse.  
  
```
virtual unsigned int GetAvailableNodeCount() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di nodi disponibili per il gestore delle risorse.  
  
##  <a name="a-namegetfirstnodea--iresourcemanagergetfirstnode-method"></a><a name="getfirstnode"></a>Metodo IResourceManager:: Getfirstnode  
 Restituisce il primo nodo nell'ordine dell'enumerazione come definito da Gestione risorse.  
  
```
virtual ITopologyNode* GetFirstNode() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il primo nodo nell'ordine dell'enumerazione come definito da Gestione risorse.  
  
##  <a name="a-nameiresourcemanagerosversiona--iresourcemanagerosversion-enumeration"></a><a name="iresourcemanager__osversion"></a>Enumerazione IResourceManager:: OSVersion  
 Tipo enumerato che rappresenta la versione del sistema operativo.  
  
```
enum OSVersion;
```  
  
##  <a name="a-namereferencea--iresourcemanagerreference-method"></a><a name="reference"></a>Metodo IResourceManager:: Reference  
 Incrementa il conteggio dei riferimenti sull'istanza del gestore di risorse.  
  
```
virtual unsigned int Reference() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il conteggio dei riferimenti risultante.  
  
##  <a name="a-nameregisterschedulera--iresourcemanagerregisterscheduler-method"></a><a name="registerscheduler"></a>Metodo IResourceManager:: RegisterScheduler  
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
  
##  <a name="a-namereleasea--iresourcemanagerrelease-method"></a><a name="release"></a>Metodo IResourceManager:: Release  
 Decrementa il conteggio dei riferimenti sull'istanza del gestore di risorse. Il gestore di risorse viene eliminato quando il conteggio dei riferimenti va a `0`.  
  
```
virtual unsigned int Release() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il conteggio dei riferimenti risultante.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [ISchedulerProxy (struttura)](ischedulerproxy-structure.md)   
 [IScheduler (struttura)](ischeduler-structure.md)

