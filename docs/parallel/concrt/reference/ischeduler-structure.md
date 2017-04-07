---
title: IScheduler (struttura) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 18
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
ms.openlocfilehash: 24305fbdded1709ec51270b3a29a239b345a5679
ms.lasthandoff: 03/17/2017

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
|[IScheduler:: AddVirtualProcessors](#addvirtualprocessors)|Fornisce un'utilità di pianificazione con un insieme di radici del processore virtuale per l'utilizzo. Ogni `IVirtualProcessorRoot` interfaccia rappresenta il diritto di eseguire un thread singolo che può eseguire operazioni per conto di utilità di pianificazione.|  
|[IScheduler:: GetID](#getid)|Restituisce un identificatore univoco per l'utilità di pianificazione.|  
|[IScheduler:: GetPolicy](#getpolicy)|Restituisce una copia dei criteri dell'utilità di pianificazione. Per ulteriori informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).|  
|[IScheduler:: NotifyResourcesExternallyBusy](#notifyresourcesexternallybusy)|Notifica all'utilità di pianificazione che i thread di hardware rappresentati dal set di radici del processore virtuale nella matrice `ppVirtualProcessorRoots` ora utilizzati da altre utilità di pianificazione.|  
|[IScheduler:: NotifyResourcesExternallyIdle](#notifyresourcesexternallyidle)|Notifica all'utilità di pianificazione che i thread di hardware rappresentati dal set di radici del processore virtuale nella matrice `ppVirtualProcessorRoots` non vengono utilizzati da altre utilità di pianificazione.|  
|[IScheduler:: RemoveVirtualProcessors](#removevirtualprocessors)|Avvia la rimozione di radici del processore virtuale che sono stati precedentemente allocato all'utilità di pianificazione.|  
|[IScheduler:: STATISTICS](#statistics)|Fornisce informazioni relative alla velocità di arrivo e il completamento delle attività e modifica della lunghezza della coda per un'utilità di pianificazione.|  
  
## <a name="remarks"></a>Note  
 Se si implementa un'utilità di pianificazione personalizzata che comunica con Gestione risorse, è necessario fornire un'implementazione del `IScheduler` interfaccia. Questa interfaccia è un'estremità di un canale di comunicazione tra un'utilità di pianificazione e Gestione risorse di bidirezionale. L'altra estremità è rappresentata dal `IResourceManager` e `ISchedulerProxy` le interfacce implementate dal gestore delle risorse.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IScheduler`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="addvirtualprocessors"></a>Metodo IScheduler:: AddVirtualProcessors  
 Fornisce un'utilità di pianificazione con un insieme di radici del processore virtuale per l'utilizzo. Ogni `IVirtualProcessorRoot` interfaccia rappresenta il diritto di eseguire un thread singolo che può eseguire operazioni per conto di utilità di pianificazione.  
  
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
 Richiama il gestore delle risorse di `AddVirtualProcessor` metodo per concedere a un insieme di radici del processore virtuale iniziale per un'utilità di pianificazione. Anche possibile richiamare il metodo per aggiungere le radici del processore virtuale per l'utilità di pianificazione quando eseguito il ribilanciamento delle risorse tra le utilità di pianificazione.  
  
##  <a name="getid"></a>Metodo IScheduler:: GetID  
 Restituisce un identificatore univoco per l'utilità di pianificazione.  
  
```
virtual unsigned int GetId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore univoco di tipo integer.  
  
### <a name="remarks"></a>Note  
 Si consiglia di utilizzare il [GetSchedulerId](concurrency-namespace-functions.md) funzione per ottenere un identificatore univoco per l'oggetto che implementa il `IScheduler` interfaccia, prima di utilizzare l'interfaccia come parametro ai metodi forniti da Gestione risorse. Devono restituire lo stesso identificatore quando il `GetId` funzione viene richiamata.  
  
 Un identificatore ottenuto da un'origine diversa potrebbe causare un comportamento indefinito.  
  
##  <a name="getpolicy"></a>Metodo IScheduler:: GetPolicy  
 Restituisce una copia dei criteri dell'utilità di pianificazione. Per ulteriori informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).  
  
```
virtual SchedulerPolicy GetPolicy() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Una copia dei criteri dell'utilità di pianificazione.  
  
##  <a name="notifyresourcesexternallybusy"></a>Metodo IScheduler:: NotifyResourcesExternallyBusy  
 Notifica all'utilità di pianificazione che i thread di hardware rappresentati dal set di radici del processore virtuale nella matrice `ppVirtualProcessorRoots` ora utilizzati da altre utilità di pianificazione.  
  
```
virtual void NotifyResourcesExternallyBusy(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `ppVirtualProcessorRoots`  
 Matrice di `IVirtualProcessorRoot` le interfacce associate al thread di hardware in cui altre utilità di pianificazione sono diventate occupato.  
  
 `count`  
 Il numero di `IVirtualProcessorRoot` interfacce nella matrice.  
  
### <a name="remarks"></a>Note  
 È possibile che un thread di hardware specifico da assegnare a più utilità di pianificazione allo stesso tempo. Una ragione potrebbe essere che non vi siano abbastanza thread di hardware sul sistema per soddisfare la concorrenza minima per tutte le utilità di pianificazione, senza la condivisione delle risorse. Un'altra possibilità è che le risorse siano temporaneamente assegnate alle altre utilità di pianificazione quando l'utilità di pianificazione proprietaria è non in uso, in tutte le sue radici del processore virtuale su tale thread hardware in corso la disattivazione.  
  
 Il livello di abbonamento di un thread di hardware è indicato il numero di thread sottoscritti e attivato le radici del processore virtuale associate al thread di hardware. Dal punto di vista dell'utilità di pianificazione specifica, il livello di abbonamento esterno di un thread di hardware è la parte della sottoscrizione di a che altre utilità di pianificazione contribuiscono. Le notifiche che le risorse sono esternamente occupate vengono inviate a un'utilità di pianificazione quando si sposta il livello di sottoscrizione esterno per un thread di hardware da zero a un territorio positivo.  
  
 Le notifiche tramite questo metodo vengono inviate solo a utilità di pianificazione che dispongono di un criterio in cui il valore per il `MinConcurrency` è uguale al valore di chiave dei criteri di `MaxConcurrency` chiave dei criteri. Per ulteriori informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).  
  
 Un'utilità di pianificazione che qualifica le notifiche Ottiene un set di notifiche iniziali quando viene creato, che viene informato se le risorse che sono state appena assegnate sono esternamente inattivo o meno.  
  
##  <a name="notifyresourcesexternallyidle"></a>Metodo IScheduler:: NotifyResourcesExternallyIdle  
 Notifica all'utilità di pianificazione che i thread di hardware rappresentati dal set di radici del processore virtuale nella matrice `ppVirtualProcessorRoots` non vengono utilizzati da altre utilità di pianificazione.  
  
```
virtual void NotifyResourcesExternallyIdle(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `ppVirtualProcessorRoots`  
 Matrice di `IVirtualProcessorRoot` le interfacce associate al thread di hardware in cui altre utilità di pianificazione sono diventate inattive.  
  
 `count`  
 Il numero di `IVirtualProcessorRoot` interfacce nella matrice.  
  
### <a name="remarks"></a>Note  
 È possibile che un thread di hardware specifico da assegnare a più utilità di pianificazione allo stesso tempo. Una ragione potrebbe essere che non vi siano abbastanza thread di hardware sul sistema per soddisfare la concorrenza minima per tutte le utilità di pianificazione, senza la condivisione delle risorse. Un'altra possibilità è che le risorse siano temporaneamente assegnate alle altre utilità di pianificazione quando l'utilità di pianificazione proprietaria è non in uso, in tutte le sue radici del processore virtuale su tale thread hardware in corso la disattivazione.  
  
 Il livello di abbonamento di un thread di hardware è indicato il numero di thread sottoscritti e attivato le radici del processore virtuale associate al thread di hardware. Dal punto di vista dell'utilità di pianificazione specifica, il livello di abbonamento esterno di un thread di hardware è la parte della sottoscrizione di a che altre utilità di pianificazione contribuiscono. Le notifiche che le risorse sono esternamente occupate vengono inviate a un'utilità di pianificazione quando il livello di sottoscrizione esterno per un thread di hardware scende a zero da un valore positivo precedente.  
  
 Le notifiche tramite questo metodo vengono inviate solo a utilità di pianificazione che dispongono di un criterio in cui il valore per il `MinConcurrency` è uguale al valore di chiave dei criteri di `MaxConcurrency` chiave dei criteri. Per ulteriori informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).  
  
 Un'utilità di pianificazione che qualifica le notifiche Ottiene un set di notifiche iniziali quando viene creato, che viene informato se le risorse che sono state appena assegnate sono esternamente inattivo o meno.  
  
##  <a name="removevirtualprocessors"></a>Metodo IScheduler:: RemoveVirtualProcessors  
 Avvia la rimozione di radici del processore virtuale che sono stati precedentemente allocato all'utilità di pianificazione.  
  
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
 Richiama il gestore delle risorse di `RemoveVirtualProcessors` metodo per riprendere un insieme di radici del processore virtuale da un'utilità di pianificazione. L'utilità di pianificazione deve richiamare il [rimuovere](iexecutionresource-structure.md#remove) metodo su ogni interfaccia quando avviene con le radici del processore virtuale. Non utilizzare un `IVirtualProcessorRoot` interfaccia dopo che è stato richiamato il `Remove` metodo su di esso.  
  
 Il parametro `ppVirtualProcessorRoots` punta a una matrice di interfacce. Tra l'insieme di radici del processore virtuale da rimuovere, non sono mai state attivate le radici possono essere restituite utilizzando immediatamente il `Remove` metodo. Le radici che sono state attivate ed eseguono il lavoro, o sono state disattivate e sono in attesa di lavoro in entrata, devono essere restituite in modo asincrono. L'utilità di pianificazione deve verificare ogni tentativo di eliminare la radice del processore virtuale al più presto. La rimozione ritardata delle radici del processore virtuale può comportare l'oversubscription non intenzionale in utilità di pianificazione.  
  
##  <a name="statistics"></a>Metodo IScheduler:: STATISTICS  
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
 Il numero di attività arrivate nell'utilità di pianificazione dall'ultima chiamata a questo metodo.  
  
 `pNumberOfTasksEnqueued`  
 Numero totale di attività in tutte le code dell'utilità di pianificazione.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene richiamato dal gestore delle risorse per raggruppare le statistiche per un'utilità di pianificazione. Le statistiche qui raccolte verranno utilizzate per guidare gli algoritmi di feedback dinamico per determinare quando è opportuno assegnare più risorse all'utilità di pianificazione e quando sottrarre risorse. I valori forniti dall'utilità di pianificazione possono essere ottimistici e non necessariamente in modo da riflettere il numero corrente in modo accurato.  
  
 È necessario implementare questo metodo se si desidera che in Gestione risorse venga utilizzato un feedback in merito all'arrivo delle attività per determinare come bilanciare la risorsa tra la propria utilità di pianificazione e le altre registrate con Gestione risorse. Se si sceglie di non raccogliere le statistiche, è possibile impostare la chiave di criterio `DynamicProgressFeedback` sul valore `DynamicProgressFeedbackDisabled` in criteri dell'utilità di pianificazione e la risorsa gestore non richiamerà questo metodo nell'utilità di pianificazione.  
  
 In assenza di informazioni statistiche, il gestore di risorse utilizzerà i livelli di abbonamento thread hardware per le decisioni risorse allocazione e la migrazione. Per ulteriori informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [PolicyElementKey](concurrency-namespace-enums.md)   
 [SchedulerPolicy (classe)](schedulerpolicy-class.md)   
 [IExecutionContext (struttura)](iexecutioncontext-structure.md)   
 [IThreadProxy (struttura)](ithreadproxy-structure.md)   
 [IVirtualProcessorRoot (struttura)](ivirtualprocessorroot-structure.md)   
 [Struttura IResourceManager](iresourcemanager-structure.md)

