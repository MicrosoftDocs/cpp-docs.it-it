---
title: "Classe di utilità di pianificazione | Documenti di Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- concrt/concurrency::Scheduler
dev_langs:
- C++
helpviewer_keywords:
- Scheduler class
ms.assetid: 34cf7961-048d-4852-8a5c-a32f823e3506
caps.latest.revision: 19
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
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: ea4de856528305020e8b082da3a55fcd27df3a64
ms.lasthandoff: 02/24/2017

---
# <a name="scheduler-class"></a>Classe Scheduler
Rappresenta un'astrazione per un'utilità di pianificazione del runtime di concorrenza.  
  
## <a name="syntax"></a>Sintassi  
  
```
class Scheduler;
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Scheduler](#ctor)|Un oggetto della `Scheduler` classe può contenere solo creati tramite metodi factory, o in modo implicito.|  
|[~ Distruttore scheduler](#dtor)|Un oggetto della `Scheduler` classe viene eliminata in modo implicito quando tutti i riferimenti esterni a esso cessano di esistere.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Attach (metodo)](#attach)|Collega l'utilità di pianificazione al contesto di chiamata. Dopo che questo metodo restituisce, il contesto di chiamata viene gestito dall'utilità di pianificazione e l'utilità di pianificazione diventa l'utilità di pianificazione corrente.|  
|[Create (metodo)](#create)|Crea una nuova utilità di pianificazione il cui comportamento è descritto il `_Policy` parametro, inserisce un riferimento iniziale nell'utilità di pianificazione e restituisce un puntatore a esso.|  
|[CreateScheduleGroup (metodo)](#createschedulegroup)|Di overload. Crea un nuovo gruppo di pianificazione in utilità di pianificazione. La versione che accetta il parametro `_Placement` fa sì che le attività all'interno del gruppo di pianificazione appena creata venga data priorità all'esecuzione nella posizione specificata da quel parametro.|  
|[GetNumberOfVirtualProcessors (metodo)](#getnumberofvirtualprocessors)|Restituisce il numero corrente di processori virtuali per l'utilità di pianificazione.|  
|[GetPolicy (metodo)](#getpolicy)|Restituisce una copia del criterio creato con l'utilità di pianificazione.|  
|[ID (metodo)](#id)|Restituisce un identificatore univoco per l'utilità di pianificazione.|  
|[IsAvailableLocation (metodo)](#isavailablelocation)|Determina se una posizione specificata è disponibile nell'utilità di pianificazione.|  
|[Reference (metodo)](#reference)|Incrementa il conteggio dei riferimenti dell'utilità di pianificazione.|  
|[RegisterShutdownEvent (metodo)](#registershutdownevent)|Cause passato l'handle di eventi di Windows il `_Event` parametro da segnalare quando l'utilità di pianificazione arrestato e distrugge. Al momento che l'evento viene segnalato, tutte le operazioni che è stata pianificata per l'utilità di pianificazione sono stata completata. Tramite questo metodo possono essere registrati più eventi di arresto.|  
|[Release (metodo)](#release)|Decrementa il conteggio di riferimenti dell'utilità di pianificazione.|  
|[ResetDefaultSchedulerPolicy (metodo)](#resetdefaultschedulerpolicy)|Reimposta i criteri dell'utilità di pianificazione predefinita per il valore predefinito di runtime. Al successivo che viene creata un'utilità di pianificazione predefinita, utilizza le impostazioni dei criteri di runtime.|  
|[ScheduleTask (metodo)](#scheduletask)|Di overload. Pianifica un'attività leggera in utilità di pianificazione. L'attività leggera sarà posizionata in un gruppo di pianificazione determinato dal runtime. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata.|  
|[SetDefaultSchedulerPolicy (metodo)](#setdefaultschedulerpolicy)|Consente a un criterio definito dall'utente da utilizzare per creare l'utilità di pianificazione predefinita. Questo metodo può essere chiamato solo quando è presente alcuna utilità di pianificazione predefinita all'interno del processo. Dopo aver impostato un criterio predefinito, rimarrà attivo fino alla successiva chiamata valida per uno di `SetDefaultSchedulerPolicy` o [ResetDefaultSchedulerPolicy](#resetdefaultschedulerpolicy) metodo.|  
  
## <a name="remarks"></a>Note  
 L'utilità di pianificazione del Runtime di concorrenza utilizza contesti di esecuzione, eseguire il mapping ai contesti di esecuzione sistema operativo, ad esempio un thread, per eseguire il lavoro in coda a esso dall'applicazione. In qualsiasi momento, il livello di concorrenza un'utilità di pianificazione è uguale al numero di processore virtuale concesso da Gestione risorse. Un processore virtuale è un'astrazione per una risorsa di elaborazione e viene mappato a un thread di hardware sul sistema sottostante. Solo un contesto dell'utilità di pianificazione singolo può eseguire su un processore virtuale in un determinato momento.  
  
 Il Runtime di concorrenza creerà un'utilità di pianificazione predefinita per ogni processo per eseguire un lavoro parallelo. È inoltre possibile creare istanze dell'utilità di pianificazione e manipolarli utilizzando questa classe.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Scheduler`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-nameattacha-attach"></a><a name="attach"></a>Collegare 

 Collega l'utilità di pianificazione al contesto di chiamata. Dopo che questo metodo restituisce, il contesto di chiamata viene gestito dall'utilità di pianificazione e l'utilità di pianificazione diventa l'utilità di pianificazione corrente.  
  
```
virtual void Attach() = 0;
```  
  
### <a name="remarks"></a>Note  
 Collegamento di un'utilità di pianificazione in modo implicito inserisce un riferimento nell'utilità di pianificazione.  
  
 A un certo punto in futuro, è necessario chiamare il [CurrentScheduler:: Detach](currentscheduler-class.md#detach) metodo per consentire l'utilità di pianificazione arrestato.  
  
 Se questo metodo viene chiamato da un contesto che è già collegato a un'utilità di pianificazione diverso, l'utilità di pianificazione esistente viene memorizzata come utilità di pianificazione precedente, e l'utilità di pianificazione appena creato diventa l'utilità di pianificazione corrente. Quando si chiama il `CurrentScheduler::Detach` metodo in un secondo momento, l'utilità di pianificazione precedente viene ripristinato come utilità di pianificazione corrente.  
  
 Questo metodo genererà un [improper_scheduler_attach](improper-scheduler-attach-class.md) eccezione se l'utilità di pianificazione è l'utilità di pianificazione corrente del contesto del chiamante.  
  
##  <a name="a-namecreatea-create"></a><a name="create"></a>Creare 

 Crea una nuova utilità di pianificazione il cui comportamento è descritto il `_Policy` parametro, inserisce un riferimento iniziale nell'utilità di pianificazione e restituisce un puntatore a esso.  
  
```
static Scheduler* __cdecl Create(const SchedulerPolicy& _Policy);
```  
  
### <a name="parameters"></a>Parametri  
 `_Policy`  
 I criteri dell'utilità di pianificazione che descrive il comportamento dell'utilità di pianificazione appena creata.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un'utilità di pianificazione appena creata. Questo `Scheduler` oggetto ha un conteggio dei riferimenti iniziali.  
  
### <a name="remarks"></a>Note  
 Dopo la creazione di un'utilità di pianificazione con il `Create` (metodo), è necessario chiamare il `Release` metodo a un certo punto in futuro per rimuovere il conteggio dei riferimenti iniziale e consentire l'utilità di pianificazione arrestato.  
  
 Un'utilità di pianificazione creata con questo metodo non è connesso al contesto di chiamata. Può essere collegato a un contesto utilizzando il [Attach](#attach) metodo.  
  
 Questo metodo può generare una varietà di eccezioni, tra cui [scheduler_resource_allocation_error](scheduler-resource-allocation-error-class.md) e [invalid_scheduler_policy_value](invalid-scheduler-policy-value-class.md).  
  
##  <a name="a-namecreateschedulegroupa-createschedulegroup"></a><a name="createschedulegroup"></a>CreateScheduleGroup 

 Crea un nuovo gruppo di pianificazione in utilità di pianificazione. La versione che accetta il parametro `_Placement` fa sì che le attività all'interno del gruppo di pianificazione appena creata venga data priorità all'esecuzione nella posizione specificata da quel parametro.  
  
```
virtual ScheduleGroup* CreateScheduleGroup() = 0;

virtual ScheduleGroup* CreateScheduleGroup(location& _Placement) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_Placement`  
 Un riferimento a una posizione in cui le attività all'interno del gruppo di pianificazione verrà data priorità all'esecuzione.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al gruppo di pianificazione appena creata. Questo `ScheduleGroup` oggetto ha un conteggio dei riferimenti iniziali.  
  
### <a name="remarks"></a>Note  
 È necessario richiamare il [versione](schedulegroup-class.md#release) metodo su un gruppo di pianificazione dopo aver completato la pianificazione del lavoro a esso. L'utilità di pianificazione rimuoverà la pianificazione di gruppo quando tutto il lavoro posti in coda è stata completata.  
  
 Si noti che se è stato creato in modo esplicito questa utilità di pianificazione, è necessario rilasciare tutti i riferimenti ai gruppi all'interno di esso, di pianificazione prima di rilasciare i riferimenti nell'utilità di pianificazione.  
  
##  <a name="a-namegetnumberofvirtualprocessorsa-getnumberofvirtualprocessors"></a><a name="getnumberofvirtualprocessors"></a>GetNumberOfVirtualProcessors 

 Restituisce il numero corrente di processori virtuali per l'utilità di pianificazione.  
  
```
virtual unsigned int GetNumberOfVirtualProcessors() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero corrente di processori virtuali per l'utilità di pianificazione.  
  
##  <a name="a-namegetpolicya-getpolicy"></a><a name="getpolicy"></a>GetPolicy 

 Restituisce una copia del criterio creato con l'utilità di pianificazione.  
  
```
virtual SchedulerPolicy GetPolicy() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Una copia del criterio creato con l'utilità di pianificazione.  
  
##  <a name="a-nameida-id"></a><a name="id"></a>ID 

 Restituisce un identificatore univoco per l'utilità di pianificazione.  
  
```
virtual unsigned int Id() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Identificatore univoco per l'utilità di pianificazione.  
  
##  <a name="a-nameisavailablelocationa-isavailablelocation"></a><a name="isavailablelocation"></a>IsAvailableLocation 

 Determina se una posizione specificata è disponibile nell'utilità di pianificazione.  
  
```
virtual bool IsAvailableLocation(const location& _Placement) const = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_Placement`  
 Un riferimento al percorso per eseguire una query sull'utilità di pianificazione.  
  
### <a name="return-value"></a>Valore restituito  
 Un'indicazione o meno il percorso specificato per il `_Placement` argomento è disponibile nell'utilità di pianificazione.  
  
### <a name="remarks"></a>Note  
 Si noti che il valore restituito è un campionamento istantaneo dell'eventuale disponibilità della posizione specificata. In presenza di più utilità di pianificazione, tramite la gestione delle risorse dinamiche è possibile aggiungere o sottrarre risorse dalle utilità di pianificazione in qualsiasi punto. In questo caso, la disponibilità della posizione specificata può cambiare.  
  
##  <a name="a-namereferencea-reference"></a><a name="reference"></a>Riferimento 

 Incrementa il conteggio dei riferimenti dell'utilità di pianificazione.  
  
```
virtual unsigned int Reference() = 0 ;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il conteggio dei riferimenti appena incrementato.  
  
### <a name="remarks"></a>Note  
 Viene in genere utilizzato per gestire la durata dell'utilità di pianificazione per la composizione. Quando il conteggio di riferimenti di un'utilità di pianificazione scende a zero, l'utilità di pianificazione si arresterà e si distruggerà dopo che tutto il lavoro nell'utilità di pianificazione sarà stato completato.  
  
 Il metodo genererà un [improper_scheduler_reference](improper-scheduler-reference-class.md) eccezione se il conteggio dei riferimenti prima di chiamare il `Reference` metodo zero e la chiamata viene effettuata da un contesto non posseduto dall'utilità di pianificazione.  
  
##  <a name="a-nameregistershutdowneventa-registershutdownevent"></a><a name="registershutdownevent"></a>RegisterShutdownEvent 

 Cause passato l'handle di eventi di Windows il `_Event` parametro da segnalare quando l'utilità di pianificazione arrestato e distrugge. Al momento che l'evento viene segnalato, tutte le operazioni che è stata pianificata per l'utilità di pianificazione sono stata completata. Tramite questo metodo possono essere registrati più eventi di arresto.  
  
```
virtual void RegisterShutdownEvent(HANDLE _Event) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_Event`  
 Handle per un oggetto evento di Windows che verrà segnalato dal runtime quando l'utilità di pianificazione arrestato e distrugge.  
  
##  <a name="a-namereleasea-release"></a><a name="release"></a>Versione 

 Decrementa il conteggio di riferimenti dell'utilità di pianificazione.  
  
```
virtual unsigned int Release() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il conteggio dei riferimenti appena decrementato.  
  
### <a name="remarks"></a>Note  
 Viene in genere utilizzato per gestire la durata dell'utilità di pianificazione per la composizione. Quando il conteggio di riferimenti di un'utilità di pianificazione scende a zero, l'utilità di pianificazione si arresterà e si distruggerà dopo che tutto il lavoro nell'utilità di pianificazione sarà stato completato.  
  
##  <a name="a-nameresetdefaultschedulerpolicya-resetdefaultschedulerpolicy"></a><a name="resetdefaultschedulerpolicy"></a>ResetDefaultSchedulerPolicy 

 Reimposta i criteri dell'utilità di pianificazione predefinita per il valore predefinito di runtime. Al successivo che viene creata un'utilità di pianificazione predefinita, utilizza le impostazioni dei criteri di runtime.  
  
```
static void __cdecl ResetDefaultSchedulerPolicy();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo può essere chiamato mentre è presente un'utilità di pianificazione predefinita all'interno del processo. Non avrà alcun effetto i criteri dell'utilità di pianificazione predefinita esistente. Tuttavia, se sono state utilità di pianificazione predefinita per la chiusura e un nuovo valore predefinito è necessario creare in un secondo momento, la nuova pianificazione utilizzerebbe le impostazioni dei criteri di runtime.  
  
##  <a name="a-namectora-scheduler"></a><a name="ctor"></a>Utilità di pianificazione 

 Un oggetto della `Scheduler` classe può contenere solo creati tramite metodi factory, o in modo implicito.  
  
```
Scheduler();
```  
  
### <a name="remarks"></a>Note  
 Utilità di pianificazione predefinita il processo viene creato in modo implicito quando si utilizzano molte delle funzioni di runtime che richiedono un'utilità di pianificazione da collegare al contesto di chiamata. I metodi all'interno di `CurrentScheduler` classe e le funzionalità dei livelli di PPL e gli agenti eseguono in genere l'allegato implicito.  
  
 È inoltre possibile creare un'utilità di pianificazione in modo esplicito tramite il `CurrentScheduler::Create` metodo o `Scheduler::Create` (metodo).  
  
##  <a name="a-namedtora-scheduler"></a><a name="dtor"></a>~ Scheduler 

 Un oggetto della `Scheduler` classe viene eliminata in modo implicito quando tutti i riferimenti esterni a esso cessano di esistere.  
  
```
virtual ~Scheduler();
```  
  
##  <a name="a-namescheduletaska-scheduletask"></a><a name="scheduletask"></a>ScheduleTask 

 Pianifica un'attività leggera in utilità di pianificazione. L'attività leggera sarà posizionata in un gruppo di pianificazione determinato dal runtime. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata.  
  
```
virtual void ScheduleTask(
    TaskProc _Proc,
    _Inout_opt_ void* _Data) = 0;

virtual void ScheduleTask(
    TaskProc _Proc,
    _Inout_opt_ void* _Data,
    location& _Placement) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_Proc`  
 Puntatore alla funzione da eseguire per utilizzare il corpo dell'attività leggera.  
  
 `_Data`  
 Un puntatore void per i dati che verranno passati come parametro nel corpo dell'attività.  
  
 `_Placement`  
 Riferimento a una posizione in cui per l'attività leggera verrà data priorità all'esecuzione.  
  
##  <a name="a-namesetdefaultschedulerpolicya-setdefaultschedulerpolicy"></a><a name="setdefaultschedulerpolicy"></a>SetDefaultSchedulerPolicy 

 Consente a un criterio definito dall'utente da utilizzare per creare l'utilità di pianificazione predefinita. Questo metodo può essere chiamato solo quando è presente alcuna utilità di pianificazione predefinita all'interno del processo. Dopo aver impostato un criterio predefinito, rimarrà attivo fino alla successiva chiamata valida per uno di `SetDefaultSchedulerPolicy` o [ResetDefaultSchedulerPolicy](#resetdefaultschedulerpolicy) metodo.  
  
```
static void __cdecl SetDefaultSchedulerPolicy(const SchedulerPolicy& _Policy);
```  
  
### <a name="parameters"></a>Parametri  
 `_Policy`  
 I criteri da impostare come i criteri dell'utilità di pianificazione predefinita.  
  
### <a name="remarks"></a>Note  
 Se il `SetDefaultSchedulerPolicy` viene chiamato quando un'utilità di pianificazione predefinita esiste già all'interno del processo, il runtime genererà un [default_scheduler_exists](default-scheduler-exists-class.md) (eccezione).  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Scheduler (classe)](scheduler-class.md)   
 [PolicyElementKey (enumerazione)](concurrency-namespace-enums.md)   
 [Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)




