---
title: Classe di utilità di pianificazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- Scheduler
- CONCRT/concurrency::Scheduler
- CONCRT/concurrency::Scheduler::Scheduler
- CONCRT/concurrency::Scheduler::Attach
- CONCRT/concurrency::Scheduler::Create
- CONCRT/concurrency::Scheduler::CreateScheduleGroup
- CONCRT/concurrency::Scheduler::GetNumberOfVirtualProcessors
- CONCRT/concurrency::Scheduler::GetPolicy
- CONCRT/concurrency::Scheduler::Id
- CONCRT/concurrency::Scheduler::IsAvailableLocation
- CONCRT/concurrency::Scheduler::Reference
- CONCRT/concurrency::Scheduler::RegisterShutdownEvent
- CONCRT/concurrency::Scheduler::Release
- CONCRT/concurrency::Scheduler::ResetDefaultSchedulerPolicy
- CONCRT/concurrency::Scheduler::ScheduleTask
- CONCRT/concurrency::Scheduler::SetDefaultSchedulerPolicy
dev_langs:
- C++
helpviewer_keywords:
- Scheduler class
ms.assetid: 34cf7961-048d-4852-8a5c-a32f823e3506
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 97abec33d5fa4b372bc26874fd37397a2b78bb29
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
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
|[Utilità di pianificazione](#ctor)|Un oggetto del `Scheduler` classe può essere solo creati utilizzando i metodi factory, o in modo implicito.|  
|[~ Distruttore scheduler](#dtor)|Un oggetto del `Scheduler` classe viene eliminata in modo implicito quando tutti i riferimenti esterni a esso cessano di esistere.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Attach](#attach)|Collega l'utilità di pianificazione nel contesto di chiamata. Dopo che questo metodo restituisce, il contesto di chiamata è gestito dall'utilità di pianificazione e l'utilità di pianificazione diventa l'utilità di pianificazione corrente.|  
|[Creare](#create)|Crea una nuova utilità di pianificazione il cui comportamento è descritto il `_Policy` parametro, inserisce un riferimento iniziale nell'utilità di pianificazione e restituisce un puntatore a esso.|  
|[CreateScheduleGroup](#createschedulegroup)|Di overload. Crea un nuovo gruppo di pianificazione in utilità di pianificazione. La versione che accetta il parametro `_Placement` fa sì che le attività all'interno del gruppo di pianificazione appena creata venga data priorità all'esecuzione nella posizione specificata da quel parametro.|  
|[GetNumberOfVirtualProcessors](#getnumberofvirtualprocessors)|Restituisce il numero corrente di processori virtuali per l'utilità di pianificazione.|  
|[GetPolicy](#getpolicy)|Restituisce una copia del criterio creato con l'utilità di pianificazione.|  
|[Id](#id)|Restituisce un identificatore univoco per l'utilità di pianificazione.|  
|[IsAvailableLocation](#isavailablelocation)|Determina se una posizione specificata è disponibile nell'utilità di pianificazione.|  
|[Riferimento](#reference)|Incrementa il conteggio dei riferimenti dell'utilità di pianificazione.|  
|[RegisterShutdownEvent](#registershutdownevent)|Cause passato l'handle di evento di `_Event` parametro venga segnalato quando viene chiuso e si distrugge l'utilità di pianificazione. Al momento che l'evento viene segnalato, tutte le operazioni che è stata pianificata per l'utilità di pianificazione sono stata completata. Tramite questo metodo è possibile registrare più eventi di arresto.|  
|[Rilascio](#release)|Decrementa il conteggio di riferimenti dell'utilità di pianificazione.|  
|[ResetDefaultSchedulerPolicy](#resetdefaultschedulerpolicy)|Reimposta i criteri dell'utilità di pianificazione predefinita per le impostazioni predefinite del runtime. Al successivo che viene creata un'utilità di pianificazione predefinita, utilizza le impostazioni dei criteri di runtime.|  
|[ScheduleTask](#scheduletask)|Di overload. Pianifica un'attività leggera all'interno di utilità di pianificazione. L'attività leggera sarà posizionata in un gruppo di pianificazione determinato dal runtime. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata.|  
|[SetDefaultSchedulerPolicy](#setdefaultschedulerpolicy)|Consente a un criterio definito dall'utente da utilizzare per creare l'utilità di pianificazione predefinita. Questo metodo può essere chiamato solo quando è presente alcuna utilità di pianificazione predefinita all'interno del processo. Dopo aver impostato un criterio predefinito, rimarrà attivo fino alla successiva chiamata a uno di `SetDefaultSchedulerPolicy` o [ResetDefaultSchedulerPolicy](#resetdefaultschedulerpolicy) metodo.|  
  
## <a name="remarks"></a>Note  
 L'utilità di pianificazione del Runtime di concorrenza Usa i contesti di esecuzione, eseguire il mapping ai contesti di esecuzione sistema operativo, ad esempio un thread, per eseguire il lavoro in coda a esso dall'applicazione. In qualsiasi momento, il livello di concorrenza un'utilità di pianificazione è uguale al numero di processore virtuale concesso da Gestione risorse. Un processore virtuale è un'astrazione per una risorsa di elaborazione e viene mappato a un thread hardware sul sistema sottostante. Solo un contesto singolo dell'utilità di pianificazione può eseguire su un processore virtuale in un determinato momento.  
  
 Il Runtime di concorrenza creerà un'utilità di pianificazione predefinita per ogni processo per eseguire un lavoro parallelo. Inoltre è possibile creare la propria utilità di pianificazione di istanze e modificare l'utilizzo di questa classe.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Scheduler`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="attach"></a> Collegare 

 Collega l'utilità di pianificazione nel contesto di chiamata. Dopo che questo metodo restituisce, il contesto di chiamata è gestito dall'utilità di pianificazione e l'utilità di pianificazione diventa l'utilità di pianificazione corrente.  
  
```
virtual void Attach() = 0;
```  
  
### <a name="remarks"></a>Note  
 Collegamento di un'utilità di pianificazione in modo implicito inserisce un riferimento nell'utilità di pianificazione.  
  
 A un certo punto in futuro, è necessario chiamare il [CurrentScheduler:: Detach](currentscheduler-class.md#detach) metodo per consentire l'arresto dell'utilità di pianificazione.  
  
 Se questo metodo viene chiamato da un contesto che è già collegato a una pianificazione diversa, l'utilità di pianificazione esistente viene memorizzata come utilità di pianificazione precedente e l'utilità di pianificazione appena creato diventa l'utilità di pianificazione corrente. Quando si chiama il `CurrentScheduler::Detach` metodo in un secondo momento, l'utilità di pianificazione precedente viene ripristinato come utilità di pianificazione corrente.  
  
 Questo metodo genererà un' [improper_scheduler_attach](improper-scheduler-attach-class.md) eccezione se l'utilità di pianificazione è l'utilità di pianificazione corrente del contesto del chiamante.  
  
##  <a name="create"></a> Creare 

 Crea una nuova utilità di pianificazione il cui comportamento è descritto il `_Policy` parametro, inserisce un riferimento iniziale nell'utilità di pianificazione e restituisce un puntatore a esso.  
  
```
static Scheduler* __cdecl Create(const SchedulerPolicy& _Policy);
```  
  
### <a name="parameters"></a>Parametri  
 `_Policy`  
 I criteri dell'utilità di pianificazione che descrive il comportamento dell'utilità di pianificazione appena creata.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'utilità di pianificazione appena creata. Questo `Scheduler` oggetto ha un conteggio dei riferimenti iniziali.  
  
### <a name="remarks"></a>Note  
 Dopo la creazione di un'utilità di pianificazione con il `Create` (metodo), è necessario chiamare il `Release` metodo a un certo punto in futuro per rimuovere il conteggio dei riferimenti iniziale e consentire l'arresto dell'utilità di pianificazione.  
  
 Un'utilità di pianificazione creato con questo metodo non è connesso al contesto di chiamata. Può essere collegato a un contesto utilizzando il [collegamento](#attach) metodo.  
  
 Questo metodo può generare un'ampia gamma di eccezioni, incluse [scheduler_resource_allocation_error](scheduler-resource-allocation-error-class.md) e [invalid_scheduler_policy_value](invalid-scheduler-policy-value-class.md).  
  
##  <a name="createschedulegroup"></a> CreateScheduleGroup 

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
 È necessario richiamare il [versione](schedulegroup-class.md#release) metodo su un gruppo di pianificazione di una volta la pianificazione del lavoro a esso. L'utilità di pianificazione eliminerà la pianificazione di gruppo quando tutto il lavoro in coda a esso è stata completata.  
  
 Si noti che, se è stato creato in modo esplicito questa utilità di pianificazione, è necessario rilasciare tutti i riferimenti ai gruppi all'interno di esso, di pianificazione prima di rilasciare i riferimenti nell'utilità di pianificazione.  
  
##  <a name="getnumberofvirtualprocessors"></a> GetNumberOfVirtualProcessors 

 Restituisce il numero corrente di processori virtuali per l'utilità di pianificazione.  
  
```
virtual unsigned int GetNumberOfVirtualProcessors() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero corrente di processori virtuali per l'utilità di pianificazione.  
  
##  <a name="getpolicy"></a> GetPolicy 

 Restituisce una copia del criterio creato con l'utilità di pianificazione.  
  
```
virtual SchedulerPolicy GetPolicy() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Una copia del criterio creato con l'utilità di pianificazione.  
  
##  <a name="id"></a> Id 

 Restituisce un identificatore univoco per l'utilità di pianificazione.  
  
```
virtual unsigned int Id() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore univoco per l'utilità di pianificazione.  
  
##  <a name="isavailablelocation"></a> IsAvailableLocation 

 Determina se una posizione specificata è disponibile nell'utilità di pianificazione.  
  
```
virtual bool IsAvailableLocation(const location& _Placement) const = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_Placement`  
 Un riferimento al percorso per eseguire una query sull'utilità di pianificazione.  
  
### <a name="return-value"></a>Valore restituito  
 Un'indicazione se il percorso specificato per il `_Placement` argomento è disponibile nell'utilità di pianificazione.  
  
### <a name="remarks"></a>Note  
 Si noti che il valore restituito è un campionamento istantaneo dell'eventuale disponibilità della posizione specificata. In presenza di più utilità di pianificazione, tramite la gestione delle risorse dinamiche è possibile aggiungere o sottrarre risorse dalle utilità di pianificazione in qualsiasi punto. In questo caso, la disponibilità della posizione specificata può cambiare.  
  
##  <a name="reference"></a> Riferimento 

 Incrementa il conteggio dei riferimenti dell'utilità di pianificazione.  
  
```
virtual unsigned int Reference() = 0 ;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il conteggio dei riferimenti appena incrementato.  
  
### <a name="remarks"></a>Note  
 Viene in genere utilizzato per gestire la durata dell'utilità di pianificazione per la composizione. Quando il conteggio di riferimenti di un'utilità di pianificazione scende a zero, l'utilità di pianificazione si arresterà e si distruggerà dopo che tutto il lavoro nell'utilità di pianificazione sarà stato completato.  
  
 Il metodo genererà un' [improper_scheduler_reference](improper-scheduler-reference-class.md) eccezione se il conteggio dei riferimenti prima di chiamare il `Reference` metodo zero e viene effettuata la chiamata da un contesto che non è di proprietà dall'utilità di pianificazione.  
  
##  <a name="registershutdownevent"></a> RegisterShutdownEvent 

 Cause passato l'handle di evento di `_Event` parametro venga segnalato quando viene chiuso e si distrugge l'utilità di pianificazione. Al momento che l'evento viene segnalato, tutte le operazioni che è stata pianificata per l'utilità di pianificazione sono stata completata. Tramite questo metodo è possibile registrare più eventi di arresto.  
  
```
virtual void RegisterShutdownEvent(HANDLE _Event) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_Event`  
 Handle per un oggetto evento di Windows che verrà segnalato dal runtime quando l'utilità di pianificazione viene chiuso e distrugge.  
  
##  <a name="release"></a> versione 

 Decrementa il conteggio di riferimenti dell'utilità di pianificazione.  
  
```
virtual unsigned int Release() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il conteggio dei riferimenti appena decrementato.  
  
### <a name="remarks"></a>Note  
 Viene in genere utilizzato per gestire la durata dell'utilità di pianificazione per la composizione. Quando il conteggio di riferimenti di un'utilità di pianificazione scende a zero, l'utilità di pianificazione si arresterà e si distruggerà dopo che tutto il lavoro nell'utilità di pianificazione sarà stato completato.  
  
##  <a name="resetdefaultschedulerpolicy"></a> ResetDefaultSchedulerPolicy 

 Reimposta i criteri dell'utilità di pianificazione predefinita per le impostazioni predefinite del runtime. Al successivo che viene creata un'utilità di pianificazione predefinita, utilizza le impostazioni dei criteri di runtime.  
  
```
static void __cdecl ResetDefaultSchedulerPolicy();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo può essere chiamato mentre è presente un'utilità di pianificazione predefinita all'interno del processo. Non avrà alcun effetto i criteri dell'utilità di pianificazione predefinito esistente. Tuttavia, se sono stati utilità di pianificazione predefinita per l'arresto e un nuovo valore predefinito è necessario creare in un momento successivo, la nuova utilità di pianificazione utilizzerebbe le impostazioni dei criteri di runtime.  
  
##  <a name="ctor"></a> Utilità di pianificazione 

 Un oggetto del `Scheduler` classe può essere solo creati utilizzando i metodi factory, o in modo implicito.  
  
```
Scheduler();
```  
  
### <a name="remarks"></a>Note  
 Utilità di pianificazione predefinita del processo viene creato in modo implicito quando si utilizzano molte delle funzioni di runtime che richiedono un'utilità di pianificazione da allegare al contesto di chiamata. Metodi all'interno di `CurrentScheduler` classe e le funzionalità di livelli della libreria PPL e gli agenti eseguono in genere l'allegato implicito.  
  
 È inoltre possibile creare un'utilità di pianificazione in modo esplicito tramite il `CurrentScheduler::Create` metodo o `Scheduler::Create` metodo.  
  
##  <a name="dtor"></a> ~ Scheduler 

 Un oggetto del `Scheduler` classe viene eliminata in modo implicito quando tutti i riferimenti esterni a esso cessano di esistere.  
  
```
virtual ~Scheduler();
```  
  
##  <a name="scheduletask"></a> ScheduleTask 

 Pianifica un'attività leggera all'interno di utilità di pianificazione. L'attività leggera sarà posizionata in un gruppo di pianificazione determinato dal runtime. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata.  
  
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
 Un puntatore void per i dati che verranno passati come parametro per il corpo dell'attività.  
  
 `_Placement`  
 Riferimento a una posizione in cui per l'attività leggera verrà data priorità all'esecuzione.  
  
##  <a name="setdefaultschedulerpolicy"></a> SetDefaultSchedulerPolicy 

 Consente a un criterio definito dall'utente da utilizzare per creare l'utilità di pianificazione predefinita. Questo metodo può essere chiamato solo quando è presente alcuna utilità di pianificazione predefinita all'interno del processo. Dopo aver impostato un criterio predefinito, rimarrà attivo fino alla successiva chiamata a uno di `SetDefaultSchedulerPolicy` o [ResetDefaultSchedulerPolicy](#resetdefaultschedulerpolicy) metodo.  
  
```
static void __cdecl SetDefaultSchedulerPolicy(const SchedulerPolicy& _Policy);
```  
  
### <a name="parameters"></a>Parametri  
 `_Policy`  
 I criteri da impostare come i criteri dell'utilità di pianificazione predefinita.  
  
### <a name="remarks"></a>Note  
 Se il `SetDefaultSchedulerPolicy` metodo viene chiamato quando un'utilità di pianificazione predefinita esiste già all'interno del processo, il runtime genererà un [default_scheduler_exists](default-scheduler-exists-class.md) eccezione.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe di utilità di pianificazione](scheduler-class.md)   
 [PolicyElementKey](concurrency-namespace-enums.md)   
 [Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)



