---
title: Struttura IExecutionResource | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IExecutionResource
- CONCRTRM/concurrency::IExecutionResource
- CONCRTRM/concurrency::IExecutionResource::IExecutionResource::CurrentSubscriptionLevel
- CONCRTRM/concurrency::IExecutionResource::IExecutionResource::GetExecutionResourceId
- CONCRTRM/concurrency::IExecutionResource::IExecutionResource::GetNodeId
- CONCRTRM/concurrency::IExecutionResource::IExecutionResource::Remove
dev_langs:
- C++
helpviewer_keywords:
- IExecutionResource structure
ms.assetid: 6b27042b-b98c-4f7f-b831-566950af84cd
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: eb4ad0b6f9038d78ae94b5ab1dcb148ebd628edc
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="iexecutionresource-structure"></a>Struttura IExecutionResource
Un'astrazione per un thread hardware.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct IExecutionResource;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IExecutionResource::CurrentSubscriptionLevel](#currentsubscriptionlevel)|Restituisce il numero del processore virtuale attivato radici e sottoscritto thread esterni attualmente associato al thread di hardware sottostante che rappresenta la risorsa di esecuzione.|  
|[IExecutionResource::GetExecutionResourceId](#getexecutionresourceid)|Restituisce un identificatore univoco per il thread di hardware che rappresenta questa risorsa di esecuzione.|  
|[IExecutionResource::GetNodeId](#getnodeid)|Restituisce un identificatore univoco per il nodo del processore a cui appartiene questa risorsa di esecuzione.|  
|[IExecutionResource::Remove](#remove)|Restituisce la risorsa di esecuzione per il gestore delle risorse.|  
  
## <a name="remarks"></a>Note  
 Risorse di esecuzione può essere autonomo o associata a radici del processore virtuale. Quando un thread nell'applicazione crea una sottoscrizione di thread, viene creata una risorsa di esecuzione autonomo. I metodi [ISchedulerProxy:: SubscribeThread](ischedulerproxy-structure.md#subscribecurrentthread) e [ISchedulerProxy:: RequestInitialVirtualProcessors](ischedulerproxy-structure.md#requestinitialvirtualprocessors) creare sottoscrizioni di thread e restituisce un `IExecutionResource` interfaccia che rappresenta il sottoscrizione. Creazione di una sottoscrizione di thread è un modo per informare il gestore delle risorse che farà parte di un determinato thread di lavoro in coda un'utilità di pianificazione, insieme di radici del processore virtuale Gestione risorse assegna all'utilità di pianificazione. Il gestore di risorse utilizza le informazioni per evitare la sovrascrittura della thread hardware quando possibile.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IExecutionResource`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="currentsubscriptionlevel"></a>  Metodo IExecutionResource:: CurrentSubscriptionLevel  
 Restituisce il numero del processore virtuale attivato radici e sottoscritto thread esterni attualmente associato al thread di hardware sottostante che rappresenta la risorsa di esecuzione.  
  
```
virtual unsigned int CurrentSubscriptionLevel() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Livello della sottoscrizione corrente.  
  
### <a name="remarks"></a>Note  
 Il livello di sottoscrizione indica il numero di thread in esecuzione è associato al thread di hardware. Include solo i thread di gestione risorse viene comunicata sotto forma di thread sottoscritti e radici del processore virtuale che eseguono proxy del thread.  
  
 La chiamata al metodo [ISchedulerProxy::](ischedulerproxy-structure.md#subscribecurrentthread), o il metodo [ISchedulerProxy:: RequestInitialVirtualProcessors](ischedulerproxy-structure.md#requestinitialvirtualprocessors) con il parametro `doSubscribeCurrentThread` impostato sul valore `true`incrementando il livello di sottoscrizione di un thread di hardware di uno. Restituiscono anche un `IExecutionResource` interfaccia che rappresenta la sottoscrizione. Una chiamata corrispondente al [IExecutionResource:: Remove](#remove) decrementa il livello di sottoscrizione del thread hardware da uno.  
  
 L'atto di attivare una radice del processore virtuale utilizzando il metodo [IVirtualProcessorRoot:: Activate](ivirtualprocessorroot-structure.md#activate) incrementando il livello di sottoscrizione di un thread di hardware di uno. I metodi [IVirtualProcessorRoot:: Deactivate](ivirtualprocessorroot-structure.md#deactivate), o [IExecutionResource:: Remove](#remove) diminuire il livello di sottoscrizione di un'unità quando viene richiamato su una radice del processore virtuale attivata.  
  
 Il gestore di risorse utilizza informazioni a livello di sottoscrizione come uno dei modi in cui si desidera determinare il momento spostare le risorse tra le utilità di pianificazione.  
  
##  <a name="getexecutionresourceid"></a>  Metodo IExecutionResource:: GetExecutionResourceId  
 Restituisce un identificatore univoco per il thread di hardware che rappresenta questa risorsa di esecuzione.  
  
```
virtual unsigned int GetExecutionResourceId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Identificatore univoco per il thread di hardware sottostante questa risorsa di esecuzione.  
  
### <a name="remarks"></a>Note  
 Ogni thread di hardware viene assegnato un identificatore univoco dal Runtime di concorrenza. Se più risorse di esecuzione sono associati hardware thread, tutti hanno lo stesso identificatore di risorsa di esecuzione.  
  
##  <a name="getnodeid"></a>  Metodo IExecutionResource:: GetNodeId  
 Restituisce un identificatore univoco per il nodo del processore a cui appartiene questa risorsa di esecuzione.  
  
```
virtual unsigned int GetNodeId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore univoco per un nodo del processore.  
  
### <a name="remarks"></a>Note  
 Il Runtime di concorrenza rappresenta i thread hardware sul sistema in gruppi di nodi del processore. I nodi vengono in genere derivati dalla topologia hardware del sistema. Ad esempio, tutti i processori di un socket specifico o un nodo NUMA specifico possono appartenere allo stesso nodo del processore. Gestione risorse assegna identificatori univoci per tali nodi a partire da `0` alla `nodeCount - 1`, dove `nodeCount` rappresenta il numero totale di nodi di processori nel sistema.  
  
 Il numero di nodi può essere ottenuto dalla funzione [GetProcessorNodeCount](concurrency-namespace-functions.md).  
  
##  <a name="remove"></a>  Metodo IExecutionResource:: Remove  
 Restituisce la risorsa di esecuzione per il gestore delle risorse.  
  
```
virtual void Remove(_Inout_ IScheduler* pScheduler) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `pScheduler`  
 Interfaccia per l'utilità di pianificazione effettua la richiesta di rimuovere questa risorsa di esecuzione.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per restituire le risorse di esecuzione autonoma, nonché le risorse di esecuzione associate radici del processore virtuale per Gestione risorse.  
  
 Se si tratta di una risorsa di esecuzione autonoma ricevuto da uno dei metodi [ISchedulerProxy::](ischedulerproxy-structure.md#subscribecurrentthread) o [ISchedulerProxy:: RequestInitialVirtualProcessors](ischedulerproxy-structure.md#requestinitialvirtualprocessors), la chiamata di metodo `Remove` terminerà la sottoscrizione del thread che la risorsa è stata creata per rappresentare. È necessario terminare tutte le sottoscrizioni del thread prima della chiusura di un proxy dell'utilità di pianificazione e deve chiamare `Remove` dal thread che ha creato la sottoscrizione.  
  
 Anche le radici del processore virtuale possono essere restituite a Gestione risorse richiamando il metodo `Remove`, poiché l'interfaccia `IVirtualProcessorRoot` eredita dall'interfaccia `IExecutionResource`. Potrebbe essere necessario restituire il valore in risposta a una chiamata a una radice del processore virtuale il [IScheduler:: RemoveVirtualProcessors](ischeduler-structure.md#removevirtualprocessors) , metodo o una volta con una radice del processore virtuale oversubscription ottenuta dal [ ISchedulerProxy:: CreateOversubscriber](ischedulerproxy-structure.md#createoversubscriber) metodo. Per le radici del processore virtuale, non sono previste restrizioni thread in cui è possibile richiamare il `Remove` metodo.  
  
 `invalid_argument` viene generata se il parametro `pScheduler` è impostato su `NULL`.  
  
 `invalid_operation` viene generata se il parametro `pScheduler` è diverso dall'utilità di pianificazione che questa risorsa di esecuzione è stata creata per, oppure con una risorsa di esecuzione autonoma, se il thread corrente è diverso dal thread che ha creato la sottoscrizione di thread.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Struttura IVirtualProcessorRoot](ivirtualprocessorroot-structure.md)
