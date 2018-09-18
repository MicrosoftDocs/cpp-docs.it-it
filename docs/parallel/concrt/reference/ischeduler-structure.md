---
title: Struttura IScheduler | Microsoft Docs
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
ms.openlocfilehash: 31623b7315d05ac2a40ee9fae7d9103ca6b0e6c7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46017885"
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
|[IScheduler:: AddVirtualProcessors](#addvirtualprocessors)|Fornisce un'utilità di pianificazione con un insieme di radici del processore virtuale per l'uso. Ogni `IVirtualProcessorRoot` interfaccia rappresenta il diritto di eseguire un thread singolo che può eseguire operazioni per conto dell'utilità di pianificazione.|  
|[IScheduler:: GetID](#getid)|Restituisce un identificatore univoco per l'utilità di pianificazione.|  
|[IScheduler::GetPolicy](#getpolicy)|Restituisce una copia dei criteri dell'utilità di pianificazione. Per altre informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).|  
|[IScheduler:: NotifyResourcesExternallyBusy](#notifyresourcesexternallybusy)|Notifica all'utilità di pianificazione che i thread hardware rappresentati dal set di radici di processori virtuali nella matrice `ppVirtualProcessorRoots` vengono ora utilizzati da altre utilità di pianificazione.|  
|[IScheduler:: NotifyResourcesExternallyIdle](#notifyresourcesexternallyidle)|Notifica all'utilità di pianificazione che i thread hardware rappresentati dal set di radici di processori virtuali nella matrice `ppVirtualProcessorRoots` non vengono utilizzati da altre utilità di pianificazione.|  
|[IScheduler:: RemoveVirtualProcessors](#removevirtualprocessors)|Avvia la rimozione di radici di processori virtuali che sono stati precedentemente allocato a questa utilità di pianificazione.|  
|[IScheduler:: STATISTICS](#statistics)|Vengono fornite informazioni relative alle velocità di arrivo e il completamento di attività e modifica della lunghezza della coda per un'utilità di pianificazione.|  
  
## <a name="remarks"></a>Note  
 Se si sta implementando un'utilità di pianificazione personalizzate che comunica con Resource Manager, è necessario fornire un'implementazione del `IScheduler` interfaccia. Questa interfaccia è un'estremità di un canale di comunicazione tra un'utilità di pianificazione e Gestione risorse bidirezionale. L'altra estremità è rappresentata dal `IResourceManager` e `ISchedulerProxy` interfacce implementate da Resource Manager.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IScheduler`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="addvirtualprocessors"></a>  Metodo IScheduler:: AddVirtualProcessors  
 Fornisce un'utilità di pianificazione con un insieme di radici del processore virtuale per l'uso. Ogni `IVirtualProcessorRoot` interfaccia rappresenta il diritto di eseguire un thread singolo che può eseguire operazioni per conto dell'utilità di pianificazione.  
  
```
virtual void AddVirtualProcessors(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```  
  
### <a name="parameters"></a>Parametri  
*ppVirtualProcessorRoots*<br/>
Matrice di `IVirtualProcessorRoot` radici di interfacce che rappresenta il processore virtuale da aggiungere all'utilità di pianificazione.  
  
*count*<br/>
Il numero di `IVirtualProcessorRoot` interfacce nella matrice.  
  
### <a name="remarks"></a>Note  
 Richiama il gestore di risorse di `AddVirtualProcessor` metodo concedere un insieme di radici del processore virtuale iniziale a un'utilità di pianificazione. Anche possibile richiamare il metodo per aggiungere le radici del processore virtuale per l'utilità di pianificazione quando ribilancia le risorse tra le utilità di pianificazione.  
  
##  <a name="getid"></a>  Metodo IScheduler:: GetID  
 Restituisce un identificatore univoco per l'utilità di pianificazione.  
  
```
virtual unsigned int GetId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore univoco di tipo integer.  
  
### <a name="remarks"></a>Note  
 È consigliabile usare la [GetSchedulerId](concurrency-namespace-functions.md) funzione per ottenere un identificatore univoco per l'oggetto che implementa il `IScheduler` interfaccia, prima di usare l'interfaccia come parametro ai metodi forniti da Gestione risorse. Devono restituire lo stesso identificatore quando il `GetId` funzione viene richiamata.  
  
 Un identificatore ottenuto da un'origine diversa potrebbe causare un comportamento indefinito.  
  
##  <a name="getpolicy"></a>  Metodo IScheduler:: GetPolicy  
 Restituisce una copia dei criteri dell'utilità di pianificazione. Per altre informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).  
  
```
virtual SchedulerPolicy GetPolicy() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Una copia dei criteri dell'utilità di pianificazione.  
  
##  <a name="notifyresourcesexternallybusy"></a>  Metodo IScheduler:: NotifyResourcesExternallyBusy  
 Notifica all'utilità di pianificazione che i thread hardware rappresentati dal set di radici di processori virtuali nella matrice `ppVirtualProcessorRoots` vengono ora utilizzati da altre utilità di pianificazione.  
  
```
virtual void NotifyResourcesExternallyBusy(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```  
  
### <a name="parameters"></a>Parametri  
*ppVirtualProcessorRoots*<br/>
Matrice di `IVirtualProcessorRoot` interfacce associate i thread hardware sul quale altre utilità di pianificazione sono diventati occupato.  
  
*count*<br/>
Il numero di `IVirtualProcessorRoot` interfacce nella matrice.  
  
### <a name="remarks"></a>Note  
 È possibile che un thread di hardware specifico da assegnare all'utilità di pianificazione multiple allo stesso tempo. Uno dei motivi potrebbe essere che non siano presenti numero insufficiente di thread hardware sul sistema per soddisfare la concorrenza minima per tutte le utilità di pianificazione, senza la condivisione delle risorse. Un'altra possibilità è che le risorse vengono assegnate temporaneamente a altre utilità di pianificazione quando il proprietario dell'utilità di pianificazione non USA, in tutte le sue radici del processore virtuale su tale thread hardware viene disattivata.  
  
 Il livello di abbonamento di un thread di hardware è indicato il numero di thread sottoscritto e attivato radici del processore virtuale associate al thread hardware. Dal punto di vista dell'utilità di pianificazione particolare, il livello di abbonamento esterno di un thread di hardware è la parte di altre utilità di pianificazione contribuiscono alla sottoscrizione. Quando si sposta il livello di abbonamento esterno per un thread hardware da zero a un territorio positivo, vengono inviate notifiche che le risorse siano occupate esternamente a un'utilità di pianificazione.  
  
 Le notifiche tramite questo metodo vengono inviate solo per le utilità di pianificazione che dispongono di un criterio in cui il valore per il `MinConcurrency` è uguale al valore di chiave dei criteri di `MaxConcurrency` chiave dei criteri. Per altre informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).  
  
 Un'utilità di pianificazione che può fregiarsi notifiche Ottiene un set di notifiche iniziale al momento della creazione, che viene informato se le risorse che sono state appena assegnate sono inattivo o esternamente.  
  
##  <a name="notifyresourcesexternallyidle"></a>  Metodo IScheduler:: NotifyResourcesExternallyIdle  
 Notifica all'utilità di pianificazione che i thread hardware rappresentati dal set di radici di processori virtuali nella matrice `ppVirtualProcessorRoots` non vengono utilizzati da altre utilità di pianificazione.  
  
```
virtual void NotifyResourcesExternallyIdle(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```  
  
### <a name="parameters"></a>Parametri  
*ppVirtualProcessorRoots*<br/>
Matrice di `IVirtualProcessorRoot` interfacce associate al thread hardware sul quale altre utilità di pianificazione sono diventate inattive.  
  
*count*<br/>
Il numero di `IVirtualProcessorRoot` interfacce nella matrice.  
  
### <a name="remarks"></a>Note  
 È possibile che un thread di hardware specifico da assegnare all'utilità di pianificazione multiple allo stesso tempo. Uno dei motivi potrebbe essere che non siano presenti numero insufficiente di thread hardware sul sistema per soddisfare la concorrenza minima per tutte le utilità di pianificazione, senza la condivisione delle risorse. Un'altra possibilità è che le risorse vengono assegnate temporaneamente a altre utilità di pianificazione quando il proprietario dell'utilità di pianificazione non USA, in tutte le sue radici del processore virtuale su tale thread hardware viene disattivata.  
  
 Il livello di abbonamento di un thread di hardware è indicato il numero di thread sottoscritto e attivato radici del processore virtuale associate al thread hardware. Dal punto di vista dell'utilità di pianificazione particolare, il livello di abbonamento esterno di un thread di hardware è la parte di altre utilità di pianificazione contribuiscono alla sottoscrizione. Quando il livello di abbonamento esterno per un thread hardware scende a zero da un valore positivo precedente, vengono inviate notifiche che le risorse siano occupate esternamente a un'utilità di pianificazione.  
  
 Le notifiche tramite questo metodo vengono inviate solo per le utilità di pianificazione che dispongono di un criterio in cui il valore per il `MinConcurrency` è uguale al valore di chiave dei criteri di `MaxConcurrency` chiave dei criteri. Per altre informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](schedulerpolicy-class.md).  
  
 Un'utilità di pianificazione che può fregiarsi notifiche Ottiene un set di notifiche iniziale al momento della creazione, che viene informato se le risorse che sono state appena assegnate sono inattivo o esternamente.  
  
##  <a name="removevirtualprocessors"></a>  Metodo IScheduler:: RemoveVirtualProcessors  
 Avvia la rimozione di radici di processori virtuali che sono stati precedentemente allocato a questa utilità di pianificazione.  
  
```
virtual void RemoveVirtualProcessors(
    _In_reads_(count) IVirtualProcessorRoot** ppVirtualProcessorRoots,
    unsigned int count) = 0;
```  
  
### <a name="parameters"></a>Parametri  
*ppVirtualProcessorRoots*<br/>
Matrice di `IVirtualProcessorRoot` interfacce che rappresentano le radici di processori virtuali da rimuovere.  
  
*count*<br/>
Il numero di `IVirtualProcessorRoot` interfacce nella matrice.  
  
### <a name="remarks"></a>Note  
 Richiama il gestore di risorse di `RemoveVirtualProcessors` metodo portare indietro di un insieme di radici del processore virtuale da un'utilità di pianificazione. È previsto l'utilità di pianificazione per richiamare il [rimuovere](iexecutionresource-structure.md#remove) metodo in ogni interfaccia dopo che è stata eseguita con le radici del processore virtuale. Non usare un `IVirtualProcessorRoot` dell'interfaccia dopo che è stato richiamato il `Remove` metodo su di esso.  
  
 Il parametro `ppVirtualProcessorRoots` punta a una matrice di interfacce. Tra l'insieme di radici di processori virtuali da rimuovere, non sono state attivate le radici possono essere restituiti immediatamente usando la `Remove` (metodo). Le radici che sono state attivate ed eseguono il lavoro, o sono state disattivate e sono in attesa di lavoro in arrivo, devono essere restituite in modo asincrono. L'utilità di pianificazione deve verificare ogni tentativo di rimuovere la radice del processore virtuale nel minor tempo. La rimozione di radici del processore virtuale ritardata può comportare l'oversubscription accidentale entro l'utilità di pianificazione.  
  
##  <a name="statistics"></a>  Metodo IScheduler:: STATISTICS  
 Vengono fornite informazioni relative alle velocità di arrivo e il completamento di attività e modifica della lunghezza della coda per un'utilità di pianificazione.  
  
```
virtual void Statistics(
    _Out_ unsigned int* pTaskCompletionRate,
    _Out_ unsigned int* pTaskArrivalRate,
    _Out_ unsigned int* pNumberOfTasksEnqueued) = 0;
```  
  
### <a name="parameters"></a>Parametri  
*pTaskCompletionRate*<br/>
Il numero di attività che sono stati completati dall'utilità di pianificazione dall'ultima chiamata al metodo.  
  
*pTaskArrivalRate*<br/>
Il numero di attività che sono arrivati nell'utilità di pianificazione dall'ultima chiamata al metodo.  
  
*pNumberOfTasksEnqueued*<br/>
Numero totale di attività in tutte le code di utilità di pianificazione.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene richiamato da Resource Manager per raccogliere le statistiche per un'utilità di pianificazione. Le statistiche raccolte qui verranno utilizzate per guidare gli algoritmi di commenti e suggerimenti dinamica per determinare quando è appropriato assegnare più risorse per l'utilità di pianificazione e quando effettuare subito le risorse. I valori forniti dall'utilità di pianificazione possono essere ottimistica e non è necessariamente in modo da riflettere il numero corrente in modo accurato.  
  
 È necessario implementare questo metodo se si desidera che in Gestione risorse venga utilizzato un feedback in merito all'arrivo delle attività per determinare come bilanciare la risorsa tra la propria utilità di pianificazione e le altre registrate con Gestione risorse. Se si sceglie di non raccogliere le statistiche, è possibile impostare la chiave del criterio `DynamicProgressFeedback` sul valore `DynamicProgressFeedbackDisabled` nei criteri dell'utilità di pianificazione e la risorsa di gestione non richiama questo metodo su Utilità di pianificazione.  
  
 In assenza di informazioni statistiche, il gestore di risorse utilizzerà livelli di abbonamento thread hardware per prendere decisioni allocazione e la migrazione di risorse. Per altre informazioni sui livelli di sottoscrizione, vedere [IExecutionResource:: CurrentSubscriptionLevel](iexecutionresource-structure.md#currentsubscriptionlevel).  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [PolicyElementKey](concurrency-namespace-enums.md)   
 [Classe SchedulerPolicy](schedulerpolicy-class.md)   
 [Struttura IExecutionContext](iexecutioncontext-structure.md)   
 [Struttura IThreadProxy](ithreadproxy-structure.md)   
 [Struttura IVirtualProcessorRoot](ivirtualprocessorroot-structure.md)   
 [Struttura IResourceManager](iresourcemanager-structure.md)
