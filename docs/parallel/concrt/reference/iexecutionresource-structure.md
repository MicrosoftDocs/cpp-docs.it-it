---
title: IExecutionResource (struttura) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 16
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
ms.openlocfilehash: fa3c65780ac9e001e6f6b8a015dc7f70df47181f
ms.lasthandoff: 03/17/2017

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
|[IExecutionResource:: CurrentSubscriptionLevel](#currentsubscriptionlevel)|Restituisce il numero di processore virtuale attivato le radici e sottoscritto thread esterni attualmente associato al thread di hardware sottostante che rappresenta la risorsa di esecuzione.|  
|[IExecutionResource:: GetExecutionResourceId](#getexecutionresourceid)|Restituisce un identificatore univoco per il thread di hardware che rappresenta la risorsa di esecuzione.|  
|[IExecutionResource:: GetNodeId](#getnodeid)|Restituisce un identificatore univoco per il nodo del processore a cui appartiene questa risorsa di esecuzione.|  
|[IExecutionResource:: Remove](#remove)|Restituisce la risorsa di esecuzione per il gestore delle risorse.|  
  
## <a name="remarks"></a>Note  
 Risorse di esecuzione possono essere autonome o associate le radici del processore virtuale. Quando un thread nell'applicazione viene creata una sottoscrizione di thread, viene creata una risorsa di esecuzione autonoma. I metodi [ISchedulerProxy:: SubscribeThread](ischedulerproxy-structure.md#subscribecurrentthread) e [ISchedulerProxy:: RequestInitialVirtualProcessors](ischedulerproxy-structure.md#requestinitialvirtualprocessors) creare le sottoscrizioni del thread e restituire un `IExecutionResource` interfaccia che rappresenta la sottoscrizione. Creazione di una sottoscrizione di thread è un modo per informare il gestore delle risorse che un determinato thread farà parte del lavoro in coda a un'utilità di pianificazione, insieme di radici del processore virtuale Gestione risorse assegna all'utilità di pianificazione. Gestione risorse utilizza le informazioni per evitare di eseguire l'oversubscription dei thread hardware quando possibile.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IExecutionResource`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="currentsubscriptionlevel"></a>Metodo IExecutionResource:: CurrentSubscriptionLevel  
 Restituisce il numero di processore virtuale attivato le radici e sottoscritto thread esterni attualmente associato al thread di hardware sottostante che rappresenta la risorsa di esecuzione.  
  
```
virtual unsigned int CurrentSubscriptionLevel() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il livello di abbonamento corrente.  
  
### <a name="remarks"></a>Note  
 Il livello di abbonamento indica il numero di thread in esecuzione è associato al thread di hardware. Include solo i thread di gestione risorse è a conoscenza di in forma di thread sottoscritti e radici del processore virtuale che eseguono attivamente proxy del thread.  
  
 La chiamata al metodo [ISchedulerProxy::](ischedulerproxy-structure.md#subscribecurrentthread), o il metodo [ISchedulerProxy:: RequestInitialVirtualProcessors](ischedulerproxy-structure.md#requestinitialvirtualprocessors) con il parametro `doSubscribeCurrentThread` impostata sul valore `true` incrementando il livello di abbonamento di un thread di hardware di uno. Restituiscono anche un `IExecutionResource` interfaccia che rappresenta la sottoscrizione. Una chiamata corrispondente al [IExecutionResource:: Remove](#remove) decrementa il livello di sottoscrizione del thread di hardware da uno.  
  
 L'atto di attivare una radice del processore virtuale utilizzando il metodo [IVirtualProcessorRoot:: Activate](ivirtualprocessorroot-structure.md#activate) incrementando il livello di abbonamento di un thread di hardware di uno. I metodi [IVirtualProcessorRoot:: Deactivate](ivirtualprocessorroot-structure.md#deactivate), o [IExecutionResource:: Remove](#remove) diminuire il livello di sottoscrizione di un'unità quando viene richiamato su una radice del processore virtuale attivata.  
  
 Gestione risorse utilizza informazioni a livello di sottoscrizione come uno dei modi in cui determinare quando spostare le risorse tra le utilità di pianificazione.  
  
##  <a name="getexecutionresourceid"></a>Metodo IExecutionResource:: GetExecutionResourceId  
 Restituisce un identificatore univoco per il thread di hardware che rappresenta la risorsa di esecuzione.  
  
```
virtual unsigned int GetExecutionResourceId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Identificatore univoco per il thread di hardware sottostante questa risorsa di esecuzione.  
  
### <a name="remarks"></a>Note  
 Ogni thread di hardware viene assegnato un identificatore univoco dal Runtime di concorrenza. Se più risorse di esecuzione sono associati hardware thread, tutti hanno lo stesso identificatore di risorsa di esecuzione.  
  
##  <a name="getnodeid"></a>Metodo IExecutionResource:: GetNodeId  
 Restituisce un identificatore univoco per il nodo del processore a cui appartiene questa risorsa di esecuzione.  
  
```
virtual unsigned int GetNodeId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Identificatore univoco per un nodo del processore.  
  
### <a name="remarks"></a>Note  
 Il Runtime di concorrenza rappresenta thread hardware sul sistema in gruppi di nodi del processore. I nodi sono in genere derivati dalla topologia hardware del sistema. Ad esempio, tutti i processori di un socket specifico o un nodo NUMA specifico possono appartenere allo stesso nodo del processore. Gestione risorse assegna identificatori univoci a questi nodi a partire da `0` alla `nodeCount - 1`, dove `nodeCount` rappresenta il numero totale di nodi di processori nel sistema.  
  
 Il numero dei nodi può essere ottenuto dalla funzione [GetProcessorNodeCount](concurrency-namespace-functions.md).  
  
##  <a name="remove"></a>Metodo IExecutionResource:: Remove  
 Restituisce la risorsa di esecuzione per il gestore delle risorse.  
  
```
virtual void Remove(_Inout_ IScheduler* pScheduler) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `pScheduler`  
 Un'interfaccia per l'utilità di pianificazione che effettua la richiesta di rimuovere la risorsa di esecuzione.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per restituire risorse esecuzione autonome, nonché le risorse di esecuzione associate le radici del processore virtuale per Gestione risorse.  
  
 Se si tratta di una risorsa di esecuzione autonoma ricevuto da uno dei metodi [ISchedulerProxy::](ischedulerproxy-structure.md#subscribecurrentthread) o [ISchedulerProxy:: RequestInitialVirtualProcessors](ischedulerproxy-structure.md#requestinitialvirtualprocessors), la chiamata al metodo `Remove` terminerà la sottoscrizione del thread che la risorsa è stata creata per rappresentare. È necessario terminare tutte le sottoscrizioni del thread prima di arrestare un proxy dell'utilità di pianificazione e deve chiamare `Remove` dal thread che ha creato la sottoscrizione.  
  
 Anche le radici del processore virtuale possono essere restituite a Gestione risorse richiamando il metodo `Remove`, poiché l'interfaccia `IVirtualProcessorRoot` eredita dall'interfaccia `IExecutionResource`. Potrebbe essere necessario tornare in risposta a una chiamata a una radice del processore virtuale il [IScheduler:: RemoveVirtualProcessors](ischeduler-structure.md#removevirtualprocessors) (metodo), o una volta con una radice del processore virtuale in condizione di oversubscription ottenuta dal [ISchedulerProxy:: CreateOversubscriber](ischedulerproxy-structure.md#createoversubscriber) metodo. Per le radici del processore virtuale, non esistono restrizioni su quale thread può richiamare il `Remove` metodo.  
  
 `invalid_argument`viene generata se il parametro `pScheduler` è impostato su `NULL`.  
  
 `invalid_operation`viene generata se il parametro `pScheduler` è diverso dall'utilità di pianificazione è stata creata questa risorsa di esecuzione per o, a una risorsa di esecuzione autonoma, se il thread corrente è diverso dal thread che ha creato la sottoscrizione del thread.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Struttura IVirtualProcessorRoot](ivirtualprocessorroot-structure.md)

