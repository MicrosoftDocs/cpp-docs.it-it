---
title: Struttura ISchedulerProxy | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- ISchedulerProxy
- CONCRTRM/concurrency::ISchedulerProxy
- CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::BindContext
- CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::CreateOversubscriber
- CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::RequestInitialVirtualProcessors
- CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::Shutdown
- CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::SubscribeCurrentThread
- CONCRTRM/concurrency::ISchedulerProxy::ISchedulerProxy::UnbindContext
dev_langs:
- C++
helpviewer_keywords:
- ISchedulerProxy structure
ms.assetid: af416973-7a1c-4c30-aa3b-4161c2aaea54
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 65198998666391763ef32a55cd12e86529e619ed
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33693923"
---
# <a name="ischedulerproxy-structure"></a>Struttura ISchedulerProxy
L'interfaccia mediante la quale le utilità di pianificazione comunicano con Gestione risorse del runtime di concorrenza per negoziare l'allocazione delle risorse.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct ISchedulerProxy;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ISchedulerProxy::BindContext](#bindcontext)|Associa un contesto di esecuzione con un proxy del thread, se non è già associato a uno.|  
|[ISchedulerProxy::CreateOversubscriber](#createoversubscriber)|Crea una nuova radice del processore virtuale nel thread di hardware, associato a una risorsa di esecuzione esistente.|  
|[ISchedulerProxy:: RequestInitialVirtualProcessors](#requestinitialvirtualprocessors)|Richiede un'allocazione iniziale di radici del processore virtuale. Ogni radice del processore virtuale rappresenta la possibilità di eseguire un thread che è possibile eseguire lavoro per l'utilità di pianificazione.|  
|[ISchedulerProxy::Shutdown](#shutdown)|Notifica al gestore di risorse che l'utilità di pianificazione è in fase di chiusura. In questo modo, il gestore delle risorse per recuperare immediatamente tutte le risorse concesse all'utilità di pianificazione.|  
|[ISchedulerProxy::SubscribeCurrentThread](#subscribecurrentthread)|Registra il thread corrente con Gestione risorse associandolo all'utilità di pianificazione.|  
|[ISchedulerProxy::UnbindContext](#unbindcontext)|Rimuove l'associazione dal contesto di esecuzione specificato da un proxy del thread di `pContext` parametro e lo restituisce al pool libero della factory di proxy thread. Questo metodo può essere chiamato solo su un contesto di esecuzione che è stato associato tramite il [ISchedulerProxy:: BindContext](#bindcontext) (metodo) e non è ancora stato avviato tramite il `pContext` parametro di un [IThreadProxy:: SwitchTo ](ithreadproxy-structure.md#switchto) chiamata al metodo.|  
  
## <a name="remarks"></a>Note  
 Gestione risorse passa un `ISchedulerProxy` interfaccia per ogni utilità di pianificazione che esegue la registrazione con il [IResourceManager:: RegisterScheduler](iresourcemanager-structure.md#registerscheduler) metodo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ISchedulerProxy`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="bindcontext"></a>  Metodo ISchedulerProxy:: BindContext  
 Associa un contesto di esecuzione con un proxy del thread, se non è già associato a uno.  
  
```
virtual void BindContext(_Inout_ IExecutionContext* pContext) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `pContext`  
 Interfaccia per il contesto di esecuzione da associare a un proxy del thread.  
  
### <a name="remarks"></a>Note  
 In genere, il [IThreadProxy:: SwitchTo](ithreadproxy-structure.md#switchto) metodo assocerà un proxy del thread a un contesto di esecuzione su richiesta. Vi sono, tuttavia, circostanze in cui è necessario associare un contesto in anticipo per assicurarsi che il `SwitchTo` metodo passa a un contesto già associato. Ciò avviene in un contesto di pianificazione, poiché non può chiamare metodi che allocano memoria UMS e associazione di un proxy del thread può comportare l'allocazione della memoria se un proxy del thread non è immediatamente disponibile nel pool libero della factory di proxy del thread.  
  
 `invalid_argument` viene generata se il parametro `pContext` ha il valore `NULL`.  
  
##  <a name="createoversubscriber"></a>  Metodo ISchedulerProxy:: CreateOversubscriber  
 Crea una nuova radice del processore virtuale nel thread di hardware, associato a una risorsa di esecuzione esistente.  
  
```
virtual IVirtualProcessorRoot* CreateOversubscriber(_Inout_ IExecutionResource* pExecutionResource) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `pExecutionResource`  
 Un `IExecutionResource` interfaccia che rappresenta il thread di hardware che si desidera abilitare l'oversubscription.  
  
### <a name="return-value"></a>Valore restituito  
 Interfaccia di `IVirtualProcessorRoot`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo quando si desidera abilitare l'oversubscription di un particolare thread di hardware per un periodo di tempo limitato all'utilità di pianificazione. Termine con la radice del processore virtuale, è necessario restituirla al gestore di risorse chiamando il [rimuovere](iexecutionresource-structure.md#remove) metodo il `IVirtualProcessorRoot` interfaccia.  
  
 È anche possibile eseguire l'oversubscription di una radice del processore virtuale esistente, poiché l'interfaccia `IVirtualProcessorRoot` eredita dall'interfaccia `IExecutionResource`.  
  
##  <a name="requestinitialvirtualprocessors"></a>  Metodo ISchedulerProxy:: RequestInitialVirtualProcessors  
 Richiede un'allocazione iniziale di radici del processore virtuale. Ogni radice del processore virtuale rappresenta la possibilità di eseguire un thread che è possibile eseguire lavoro per l'utilità di pianificazione.  
  
```
virtual IExecutionResource* RequestInitialVirtualProcessors(bool doSubscribeCurrentThread) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `doSubscribeCurrentThread`  
 Indica se il thread corrente di sottoscrizioni e account per tale durante l'allocazione delle risorse.  
  
### <a name="return-value"></a>Valore restituito  
 Il `IExecutionResource` interfaccia per il thread corrente, se il parametro `doSubscribeCurrentThread` ha il valore `true`. Se il valore è `false`, il metodo restituisce `NULL`.  
  
### <a name="remarks"></a>Note  
 Prima di un'utilità di pianificazione viene eseguita alcuna operazione, è necessario utilizzare questo metodo per richiedere radici del processore virtuale da Gestione risorse. Gestione risorse accederà criteri dell'utilità di pianificazione utilizzando [IScheduler:: GetPolicy](ischeduler-structure.md#getpolicy) e utilizzare i valori per le chiavi dei criteri `MinConcurrency`, `MaxConcurrency` e `TargetOversubscriptionFactor` per determinare il numero di thread hardware di assegnare il utilità di pianificazione iniziale e il numero di radici del processore virtuale da creare per ogni thread di hardware. Per ulteriori informazioni su come utilizzare i criteri dell'utilità di pianificazione per determinare l'allocazione iniziale di un'utilità di pianificazione, vedere [PolicyElementKey](concurrency-namespace-enums.md).  
  
 Gestione risorse concede risorse a un'utilità di pianificazione chiamando il metodo [IScheduler:: AddVirtualProcessors](ischeduler-structure.md#addvirtualprocessors) con un elenco di radici del processore virtuale. Il metodo viene richiamato un callback nell'utilità di pianificazione prima di questo metodo restituisce.  
  
 Se l'utilità di pianificazione ha richiesto una sottoscrizione per il thread corrente impostando il parametro `doSubscribeCurrentThread` a `true`, il metodo restituisce un `IExecutionResource` interfaccia. La sottoscrizione deve terminare in un momento successivo tramite il [IExecutionResource:: Remove](iexecutionresource-structure.md#remove) metodo.  
  
 Quando si stabilisce quali thread hardware vengono selezionate, il gestore delle risorse tenterà di ottimizzare l'affinità del nodo del processore. Se viene richiesta sottoscrizione per il thread corrente, è un'indicazione che il thread corrente intende partecipare il lavoro assegnato a questa utilità di pianificazione. In tal caso, le radici di processori virtuali allocate si trovano nel nodo del processore, che il thread corrente è in esecuzione, se possibile.  
  
 L'atto di sottoscrivere un thread aumenta il livello di sottoscrizione del thread di hardware sottostante da uno. Quando la sottoscrizione viene terminata, il livello di sottoscrizione viene ridotto di uno. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).  
  
##  <a name="shutdown"></a>  Metodo ISchedulerProxy:: Shutdown  
 Notifica al gestore di risorse che l'utilità di pianificazione è in fase di chiusura. In questo modo, il gestore delle risorse per recuperare immediatamente tutte le risorse concesse all'utilità di pianificazione.  
  
```
virtual void Shutdown() = 0;
```  
  
### <a name="remarks"></a>Note  
 Tutti `IExecutionContext` interfacce l'utilità di pianificazione ricevuto come risultato di un thread esterno utilizzando i metodi di sottoscrizione `ISchedulerProxy::RequestInitialVirtualProcessors` o `ISchedulerProxy::SubscribeCurrentThread` deve essere restituito per il gestore delle risorse tramite `IExecutionResource::Remove` prima di un'utilità di pianificazione viene chiuso.  
  
 Se l'utilità di pianificazione qualsiasi disattivato radici del processore virtuale, è necessario attivarle utilizzando [IVirtualProcessorRoot:: Activate](ivirtualprocessorroot-structure.md#activate), in modo che il proxy del thread in esecuzione su di essi lasciare il `Dispatch` dell'esecuzione (metodo) contesti che stanno inviando prima di richiamare `Shutdown` su un proxy dell'utilità di pianificazione.  
  
 Non è necessario che tramite l'utilità di pianificazione vengano restituite singolarmente tutte le radici del processore virtuale concesse da Gestione risorse tramite chiamate al metodo `Remove` poiché tutte le radici del processore virtuale saranno restituite a Gestione risorse all'arresto.  
  
##  <a name="subscribecurrentthread"></a>  Metodo ISchedulerProxy::  
 Registra il thread corrente con Gestione risorse associandolo all'utilità di pianificazione.  
  
```
virtual IExecutionResource* SubscribeCurrentThread() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `IExecutionResource` interazione che rappresenta il thread corrente in fase di esecuzione.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo se si desidera che il gestore delle risorse per l'account per il thread corrente durante l'allocazione di risorse per l'utilità di pianificazione e altre utilità di pianificazione. È particolarmente utile quando il thread intende partecipare al lavoro in coda all'utilità di pianificazione, insieme di radici del processore virtuale, che l'utilità di pianificazione riceve da Gestione risorse. Il gestore delle risorse utilizza le informazioni per evitare inutili oversubscription dei thread hardware sul sistema.  
  
 La risorsa di esecuzione ricevuta tramite questo metodo deve essere restituita per il gestore delle risorse tramite il [IExecutionResource:: Remove](iexecutionresource-structure.md#remove) metodo. Il thread che chiama il `Remove` metodo deve essere stesso thread in cui è stato chiamato in precedenza il `SubscribeCurrentThread` metodo.  
  
 L'atto di sottoscrivere un thread aumenta il livello di sottoscrizione del thread di hardware sottostante da uno. Quando la sottoscrizione viene terminata, il livello di sottoscrizione viene ridotto di uno. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).  
  
##  <a name="unbindcontext"></a>  Metodo ISchedulerProxy:: UnbindContext  
 Rimuove l'associazione dal contesto di esecuzione specificato da un proxy del thread di `pContext` parametro e lo restituisce al pool libero della factory di proxy thread. Questo metodo può essere chiamato solo su un contesto di esecuzione che è stato associato tramite il [ISchedulerProxy:: BindContext](#bindcontext) (metodo) e non è ancora stato avviato tramite il `pContext` parametro di un [IThreadProxy:: SwitchTo ](ithreadproxy-structure.md#switchto) chiamata al metodo.  
  
```
virtual void UnbindContext(_Inout_ IExecutionContext* pContext) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `pContext`  
 Il contesto di esecuzione da dissociare dal relativo proxy del thread.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Struttura IScheduler](ischeduler-structure.md)   
 [Struttura IThreadProxy](ithreadproxy-structure.md)   
 [Struttura IVirtualProcessorRoot](ivirtualprocessorroot-structure.md)   
 [Struttura IResourceManager](iresourcemanager-structure.md)
