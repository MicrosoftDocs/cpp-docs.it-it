---
title: Struttura IScheduler | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- IScheduler
- CONCRTRM/concurrency::IScheduler
- CONCRTRM/concurrency::IScheduler::IScheduler::AddVirtualProcessors
- CONCRTRM/concurrency::IScheduler::IScheduler::GetId
- CONCRTRM/concurrency::IScheduler::IScheduler::GetPolicy
- CONCRTRM/concurrency::IScheduler::IScheduler::NotifyResourcesExternallyBusy
- CONCRTRM/concurrency::IScheduler::IScheduler::NotifyResourcesExternallyIdle
- CONCRTRM/concurrency::IScheduler::IScheduler::RemoveVirtualProcessors
- CONCRTRM/concurrency::IScheduler::IScheduler::Statistics
dev_langs:
- C++
helpviewer_keywords:
- IScheduler structure
ms.assetid: 471de85a-2b1a-4b6d-ab81-2eff2737161e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9c78d02ccd5639369ad8b4d0183458da2ba85269
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="ischeduler-structure"></a>Struttura IScheduler
Un'interfaccia a un'astrazione di un'utilità di pianificazione del lavoro. Gestione risorse del runtime di concorrenza usa tale interfaccia per comunicare con le utilità di pianificazione del lavoro.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct IScheduler;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IScheduler:: AddVirtualProcessors](#addvirtualprocessors)|Fornisce un'utilità di pianificazione con un insieme di radici del processore virtuale per l'uso. Ogni `IVirtualProcessorRoot` interfaccia rappresenta il diritto di eseguire un solo thread che può operare per conto di utilità di pianificazione.|  
|[IScheduler:: GetID](#getid)|Restituisce un identificatore univoco per l'utilità di pianificazione.|  
|[IScheduler::GetPolicy](#getpolicy)|Restituisce una copia dei criteri dell'utilità di pianificazione. Per ulteriori informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).|  
|[IScheduler:: NotifyResourcesExternallyBusy](#notifyresourcesexternallybusy)|Invia una notifica di questa utilità di pianificazione thread di hardware rappresentati dal set di radici del processore virtuale nella matrice `ppVirtualProcessorRoots` vengono ora utilizzati da altre utilità di pianificazione.|  
|[IScheduler:: NotifyResourcesExternallyIdle](#notifyresourcesexternallyidle)|Invia una notifica di questa utilità di pianificazione thread di hardware rappresentati dal set di radici del processore virtuale nella matrice `ppVirtualProcessorRoots` non vengono utilizzati da altre utilità di pianificazione.|  
|[IScheduler:: RemoveVirtualProcessors](#removevirtualprocessors)|Avvia la rimozione di radici del processore virtuale che sono stati precedentemente allocato alle utilità di pianificazione corrente.|  
|[IScheduler:: STATISTICS](#statistics)|Fornisce informazioni relative alla velocità di arrivo e il completamento delle attività e modifica della lunghezza della coda per un'utilità di pianificazione.|  
  
## <a name="remarks"></a>Note  
 Se si implementa un'utilità di pianificazione personalizzata che comunica con il gestore delle risorse, è necessario fornire un'implementazione del `IScheduler` interfaccia. Questa interfaccia è un'estremità di un canale bidirezionale di comunicazione tra un'utilità di pianificazione e Gestione risorse. L'altra estremità è rappresentata dal `IResourceManager` e `ISchedulerProxy` interfacce implementate da Gestione risorse.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IScheduler`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="addvirtualprocessors"></a>  Metodo IScheduler:: AddVirtualProcessors  
 Fornisce un'utilità di pianificazione con un insieme di radici del processore virtuale per l'uso. Ogni `IVirtualProcessorRoot` interfaccia rappresenta il diritto di eseguire un solo thread che può operare per conto di utilità di pianificazione.  
  
```
virtual void AddVirtualProcessors(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `ppVirtualProcessorRoots`  
 Matrice di `IVirtualProcessorRoot` le radici di interfacce che rappresentano il processore virtuale da aggiungere all'utilità di pianificazione.  
  
 `count`  
 Il numero di `IVirtualProcessorRoot` interfacce nella matrice.  
  
### <a name="remarks"></a>Note  
 Richiama il gestore delle risorse di `AddVirtualProcessor` metodo per concedere a un set iniziale di radici del processore virtuale per un'utilità di pianificazione. Anche possibile richiamare il metodo per aggiungere radici del processore virtuale all'utilità di pianificazione quando eseguito il ribilanciamento delle risorse tra le utilità di pianificazione.  
  
##  <a name="getid"></a>  Metodo IScheduler:: GetID  
 Restituisce un identificatore univoco per l'utilità di pianificazione.  
  
```
virtual unsigned int GetId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore univoco di tipo integer.  
  
### <a name="remarks"></a>Note  
 È consigliabile utilizzare il [GetSchedulerId](concurrency-namespace-functions.md) funzione per ottenere un identificatore univoco per l'oggetto che implementa il `IScheduler` interfaccia, prima di utilizzare l'interfaccia come parametro ai metodi forniti da Gestione risorse. Devono restituire lo stesso identificatore quando il `GetId` funzione viene richiamata.  
  
 Un identificatore ottenuto da un'origine diversa potrebbe causare un comportamento indefinito.  
  
##  <a name="getpolicy"></a>  Metodo IScheduler:: GetPolicy  
 Restituisce una copia dei criteri dell'utilità di pianificazione. Per ulteriori informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).  
  
```
virtual SchedulerPolicy GetPolicy() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Una copia dei criteri dell'utilità di pianificazione.  
  
##  <a name="notifyresourcesexternallybusy"></a>  Metodo IScheduler:: NotifyResourcesExternallyBusy  
 Invia una notifica di questa utilità di pianificazione thread di hardware rappresentati dal set di radici del processore virtuale nella matrice `ppVirtualProcessorRoots` vengono ora utilizzati da altre utilità di pianificazione.  
  
```
virtual void NotifyResourcesExternallyBusy(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `ppVirtualProcessorRoots`  
 Matrice di `IVirtualProcessorRoot` interfacce associate al thread di hardware in cui altre utilità di pianificazione sono diventate occupato.  
  
 `count`  
 Il numero di `IVirtualProcessorRoot` interfacce nella matrice.  
  
### <a name="remarks"></a>Note  
 È possibile che un thread di hardware particolare per poter essere assegnati a più utilità di pianificazione allo stesso tempo. Un motivo potrebbe essere che non vi siano abbastanza thread hardware sul sistema per soddisfare la concorrenza minima per tutte le utilità di pianificazione, senza la condivisione delle risorse. Un'altra possibilità consiste nel fatto che le risorse vengono assegnate temporaneamente a altre utilità di pianificazione quando il proprietario dell'utilità di pianificazione non utilizza, in tutti i relativi radici del processore virtuale in tale thread hardware in corso la disattivazione.  
  
 Il livello di sottoscrizione di un thread di hardware è indicato il numero di thread sottoscritti e attivati radici del processore virtuale associate al thread di hardware. Dal punto di vista dell'utilità di pianificazione specifica, il livello di sottoscrizione esterno di un thread di hardware è la parte della altre utilità di pianificazione contribuiscono alla sottoscrizione. Le notifiche che le risorse sono esternamente occupate vengono inviate a un'utilità di pianificazione quando si sposta il livello di sottoscrizione esterno per un thread di hardware da zero a un territorio positivo.  
  
 Le notifiche tramite questo metodo vengono inviate solo a utilità di pianificazione che dispongono di criteri in cui il valore per il `MinConcurrency` chiave dei criteri è uguale al valore per il `MaxConcurrency` chiave dei criteri. Per ulteriori informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).  
  
 Un'utilità di pianificazione che qualifica le notifiche Ottiene un set di notifiche iniziali quando viene creato, che viene informato se le risorse che sono state appena assegnate sono esternamente inattivo o meno.  
  
##  <a name="notifyresourcesexternallyidle"></a>  Metodo IScheduler:: NotifyResourcesExternallyIdle  
 Invia una notifica di questa utilità di pianificazione thread di hardware rappresentati dal set di radici del processore virtuale nella matrice `ppVirtualProcessorRoots` non vengono utilizzati da altre utilità di pianificazione.  
  
```
virtual void NotifyResourcesExternallyIdle(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `ppVirtualProcessorRoots`  
 Matrice di `IVirtualProcessorRoot` interfacce associate al thread di hardware in cui altre utilità di pianificazione sono diventate inattive.  
  
 `count`  
 Il numero di `IVirtualProcessorRoot` interfacce nella matrice.  
  
### <a name="remarks"></a>Note  
 È possibile che un thread di hardware particolare per poter essere assegnati a più utilità di pianificazione allo stesso tempo. Un motivo potrebbe essere che non vi siano abbastanza thread hardware sul sistema per soddisfare la concorrenza minima per tutte le utilità di pianificazione, senza la condivisione delle risorse. Un'altra possibilità consiste nel fatto che le risorse vengono assegnate temporaneamente a altre utilità di pianificazione quando il proprietario dell'utilità di pianificazione non utilizza, in tutti i relativi radici del processore virtuale in tale thread hardware in corso la disattivazione.  
  
 Il livello di sottoscrizione di un thread di hardware è indicato il numero di thread sottoscritti e attivati radici del processore virtuale associate al thread di hardware. Dal punto di vista dell'utilità di pianificazione specifica, il livello di sottoscrizione esterno di un thread di hardware è la parte della altre utilità di pianificazione contribuiscono alla sottoscrizione. Le notifiche che le risorse sono esternamente occupate vengono inviate a un'utilità di pianificazione quando il livello di sottoscrizione esterno per un thread hardware scende a zero a un valore positivo precedente.  
  
 Le notifiche tramite questo metodo vengono inviate solo a utilità di pianificazione che dispongono di criteri in cui il valore per il `MinConcurrency` chiave dei criteri è uguale al valore per il `MaxConcurrency` chiave dei criteri. Per ulteriori informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).  
  
 Un'utilità di pianificazione che qualifica le notifiche Ottiene un set di notifiche iniziali quando viene creato, che viene informato se le risorse che sono state appena assegnate sono esternamente inattivo o meno.  
  
##  <a name="removevirtualprocessors"></a>  Metodo IScheduler:: RemoveVirtualProcessors  
 Avvia la rimozione di radici del processore virtuale che sono stati precedentemente allocato alle utilità di pianificazione corrente.  
  
```
virtual void RemoveVirtualProcessors(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `ppVirtualProcessorRoots`  
 Matrice di `IVirtualProcessorRoot` interfacce che rappresentano le radici del processore virtuale da rimuovere.  
  
 `count`  
 Il numero di `IVirtualProcessorRoot` interfacce nella matrice.  
  
### <a name="remarks"></a>Note  
 Richiama il gestore delle risorse di `RemoveVirtualProcessors` metodo per riportare un insieme di radici del processore virtuale da un'utilità di pianificazione. L'utilità di pianificazione deve richiamare il [rimuovere](iexecutionresource-structure.md#remove) metodo in ogni interfaccia è terminato con radici del processore virtuale. Non utilizzare un `IVirtualProcessorRoot` interfaccia dopo che è stato richiamato il `Remove` metodo su di esso.  
  
 Il parametro `ppVirtualProcessorRoots` punta a una matrice di interfacce. Tra l'insieme di radici del processore virtuale da rimuovere, non sono mai state attivate le radici possono essere restituite utilizzando immediatamente il `Remove` metodo. Le radici che sono state attivate ed eseguono il lavoro, o sono state disattivate e sono in attesa di lavoro in entrata, devono essere restituite in modo asincrono. L'utilità di pianificazione deve effettuare qualsiasi tentativo di rimuovere la radice del processore virtuale al più presto. La rimozione di radici del processore virtuale ritardata può comportare l'oversubscription non intenzionale all'interno di utilità di pianificazione.  
  
##  <a name="statistics"></a>  Metodo IScheduler:: STATISTICS  
 Fornisce informazioni relative alla velocità di arrivo e il completamento delle attività e modifica della lunghezza della coda per un'utilità di pianificazione.  
  
```
virtual void Statistics(
    _Out_ unsigned int* pTaskCompletionRate,
    _Out_ unsigned int* pTaskArrivalRate,
    _Out_ unsigned int* pNumberOfTasksEnqueued) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `pTaskCompletionRate`  
 Il numero di attività che sono stati completati dall'utilità di pianificazione dall'ultima chiamata a questo metodo.  
  
 `pTaskArrivalRate`  
 Il numero di attività che sono arrivati nell'utilità di pianificazione dall'ultima chiamata a questo metodo.  
  
 `pNumberOfTasksEnqueued`  
 Numero totale di attività in tutte le code dell'utilità di pianificazione.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene richiamato da Gestione risorse per raggruppare le statistiche per un'utilità di pianificazione. Le statistiche qui raccolte da utilizzare per l'unità di algoritmi di feedback dinamici per determinare quando è opportuno assegnare più risorse per l'utilità di pianificazione e quando sottrarre risorse. I valori forniti dall'utilità di pianificazione possono essere ottimistica e non sono necessariamente in modo da riflettere il numero corrente in modo accurato.  
  
 È necessario implementare questo metodo se si desidera che in Gestione risorse venga utilizzato un feedback in merito all'arrivo delle attività per determinare come bilanciare la risorsa tra la propria utilità di pianificazione e le altre registrate con Gestione risorse. Se si sceglie di non raccogliere statistiche, è possibile impostare le chiavi dei criteri `DynamicProgressFeedback` al valore `DynamicProgressFeedbackDisabled` criteri dell'utilità di pianificazione e la risorsa Manager non richiama questo metodo nell'utilità di pianificazione.  
  
 In assenza di informazioni statistiche, il gestore delle risorse utilizzerà i livelli di sottoscrizione di thread di hardware per prendere decisioni di allocazione e la migrazione di risorse. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [PolicyElementKey](concurrency-namespace-enums.md)   
 [Classe SchedulerPolicy](schedulerpolicy-class.md)   
 [Struttura IExecutionContext](iexecutioncontext-structure.md)   
 [Struttura IThreadProxy](ithreadproxy-structure.md)   
 [Struttura IVirtualProcessorRoot](ivirtualprocessorroot-structure.md)   
 [Struttura IResourceManager](iresourcemanager-structure.md)
