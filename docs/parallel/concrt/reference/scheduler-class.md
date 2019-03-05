---
title: Classe Scheduler
ms.date: 11/04/2016
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
helpviewer_keywords:
- Scheduler class
ms.assetid: 34cf7961-048d-4852-8a5c-a32f823e3506
ms.openlocfilehash: f27dace61b0764962a78695c2a4c6b180b09d7a3
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57287901"
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
|[Utilità di pianificazione](#ctor)|Un oggetto del `Scheduler` classe può essere solo creati utilizzando metodi factory o implicito.|
|[~ Distruttore scheduler](#dtor)|Un oggetto del `Scheduler` classe viene eliminata in modo implicito quando tutti i riferimenti esterni cessano di esistere.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Attach](#attach)|Collega l'utilità di pianificazione nel contesto di chiamata. Quando termina, questo metodo al contesto di chiamata viene gestito dall'utilità di pianificazione e l'utilità di pianificazione diventa l'utilità di pianificazione corrente.|
|[creare](#create)|Crea una nuova utilità di pianificazione il cui comportamento è descritto il `_Policy` parametro, inserisce un riferimento iniziale nell'utilità di pianificazione e restituisce un puntatore a esso.|
|[CreateScheduleGroup](#createschedulegroup)|Di overload. Crea un nuovo gruppo di pianificazione entro l'utilità di pianificazione. La versione che accetta il parametro `_Placement` fa sì che le attività all'interno del gruppo di pianificazione appena creata venga data priorità all'esecuzione nella posizione specificata da quel parametro.|
|[GetNumberOfVirtualProcessors](#getnumberofvirtualprocessors)|Restituisce il numero corrente di processori virtuali per l'utilità di pianificazione.|
|[GetPolicy](#getpolicy)|Restituisce una copia dei criteri creata con l'utilità di pianificazione.|
|[Id](#id)|Restituisce un identificatore univoco per l'utilità di pianificazione.|
|[IsAvailableLocation](#isavailablelocation)|Determina se una posizione specificata è disponibile nell'utilità di pianificazione.|
|[Riferimento](#reference)|Incrementa il conteggio dei riferimenti dell'utilità di pianificazione.|
|[RegisterShutdownEvent](#registershutdownevent)|Cause passato l'handle di eventi di Windows il `_Event` parametro venga segnalato quando l'utilità di pianificazione arrestato e distrugge. Al momento che l'evento viene segnalato, tutto il lavoro che è stato pianificato per l'utilità di pianificazione è stato completato. È possibile registrare più eventi di arresto del sistema tramite questo metodo.|
|[Rilascio](#release)|Decrementa il conteggio di riferimenti dell'utilità di pianificazione.|
|[ResetDefaultSchedulerPolicy](#resetdefaultschedulerpolicy)|Reimposta i criteri dell'utilità di pianificazione predefinita per il valore predefinito di runtime. Alla successiva che viene creata un'utilità di pianificazione predefinita, userà le impostazioni dei criteri di runtime.|
|[ScheduleTask](#scheduletask)|Di overload. Pianifica un'attività leggera entro l'utilità di pianificazione. L'attività leggera sarà posizionata in un gruppo di pianificazione determinato dal runtime. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata.|
|[SetDefaultSchedulerPolicy](#setdefaultschedulerpolicy)|Consente a un criterio definito dall'utente da utilizzare per creare l'utilità di pianificazione predefinita. Questo metodo può essere chiamato solo quando è presente alcuna utilità di pianificazione predefinita all'interno del processo. Dopo aver impostato un criterio predefinito, rimane attiva fino alla successiva chiamata a uno il `SetDefaultSchedulerPolicy` o il [ResetDefaultSchedulerPolicy](#resetdefaultschedulerpolicy) (metodo).|

## <a name="remarks"></a>Note

L'utilità di pianificazione del Runtime di concorrenza Usa i contesti di esecuzione, eseguire il mapping per i contesti di esecuzione del sistema operativo, ad esempio un thread, per eseguire il lavoro in coda a esso da parte dell'applicazione. In qualsiasi momento, il livello di concorrenza un'utilità di pianificazione è uguale al numero di processore virtuale concesso da Gestione risorse. Un processore virtuale è un'astrazione per una risorsa di elaborazione e viene mappato a un thread hardware sul sistema sottostante. Solo un contesto dell'utilità di pianificazione singola può eseguire su un processore virtuale in un determinato momento.

Il Runtime di concorrenza creerà un'utilità di pianificazione predefinita per ogni processo per eseguire un lavoro parallelo. È inoltre possibile creare istanze dell'utilità di pianificazione e manipolarli utilizzando questa classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Scheduler`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

##  <a name="attach"></a> Collegare

Collega l'utilità di pianificazione nel contesto di chiamata. Quando termina, questo metodo al contesto di chiamata viene gestito dall'utilità di pianificazione e l'utilità di pianificazione diventa l'utilità di pianificazione corrente.

```
virtual void Attach() = 0;
```

### <a name="remarks"></a>Note

Associare in modo implicito un'utilità di pianificazione inserisce un riferimento nell'utilità di pianificazione.

A un certo punto in futuro, è necessario chiamare il [CurrentScheduler:: Detach](currentscheduler-class.md#detach) metodo per consentire l'utilità di pianificazione arrestato.

Se questo metodo viene chiamato da un contesto che è già collegato a un'utilità di pianificazione diverso, l'utilità di pianificazione esistente viene memorizzata come la precedente utilità di pianificazione e l'utilità di pianificazione appena creato diventa l'utilità di pianificazione corrente. Quando si chiama il `CurrentScheduler::Detach` metodo in un secondo momento, l'utilità di pianificazione precedente viene ripristinato come utilità di pianificazione corrente.

Questo metodo genererà un' [improper_scheduler_attach](improper-scheduler-attach-class.md) eccezione se l'utilità di pianificazione è l'utilità di pianificazione corrente del contesto del chiamante.

##  <a name="create"></a> creare

Crea una nuova utilità di pianificazione il cui comportamento è descritto il `_Policy` parametro, inserisce un riferimento iniziale nell'utilità di pianificazione e restituisce un puntatore a esso.

```
static Scheduler* __cdecl Create(const SchedulerPolicy& _Policy);
```

### <a name="parameters"></a>Parametri

*_Policy*<br/>
I criteri dell'utilità di pianificazione che descrive il comportamento dell'utilità di pianificazione appena creata.

### <a name="return-value"></a>Valore restituito

Puntatore a un'utilità di pianificazione appena creata. Ciò `Scheduler` oggetto ha un conteggio di riferimento iniziale posizionato su di esso.

### <a name="remarks"></a>Note

Dopo la creazione di un'utilità di pianificazione con il `Create` metodo, è necessario chiamare il `Release` metodo a un certo punto in futuro per rimuovere il conteggio di riferimento iniziale e consentire l'utilità di pianificazione arrestato.

Un'utilità di pianificazione creata con questo metodo non è connesso al contesto di chiamata. Può essere collegato a un contesto utilizzando la [Attach](#attach) (metodo).

Questo metodo può generare un'ampia gamma di eccezioni, incluse [scheduler_resource_allocation_error](scheduler-resource-allocation-error-class.md) e [invalid_scheduler_policy_value](invalid-scheduler-policy-value-class.md).

##  <a name="createschedulegroup"></a> CreateScheduleGroup

Crea un nuovo gruppo di pianificazione entro l'utilità di pianificazione. La versione che accetta il parametro `_Placement` fa sì che le attività all'interno del gruppo di pianificazione appena creata venga data priorità all'esecuzione nella posizione specificata da quel parametro.

```
virtual ScheduleGroup* CreateScheduleGroup() = 0;

virtual ScheduleGroup* CreateScheduleGroup(location& _Placement) = 0;
```

### <a name="parameters"></a>Parametri

*_Placement*<br/>
Un riferimento a una posizione in cui le attività all'interno del gruppo di pianificazione verrà data priorità all'esecuzione.

### <a name="return-value"></a>Valore restituito

Puntatore al gruppo di pianificazione appena creata. Ciò `ScheduleGroup` oggetto ha un conteggio di riferimento iniziale posizionato su di esso.

### <a name="remarks"></a>Note

È necessario richiamare il [rilascio](schedulegroup-class.md#release) metodo su un gruppo di pianificazione dopo avere effettuato la pianificazione del lavoro a esso. L'utilità di pianificazione comporta l'eliminazione della pianificazione gruppo quando tutto il lavoro accodato a esso è stata completata.

Si noti che se è stato creato in modo esplicito questa utilità di pianificazione, è necessario rilasciare tutti i riferimenti per pianificare i gruppi all'interno di esso, prima di rilasciare i riferimenti nell'utilità di pianificazione.

##  <a name="getnumberofvirtualprocessors"></a> GetNumberOfVirtualProcessors

Restituisce il numero corrente di processori virtuali per l'utilità di pianificazione.

```
virtual unsigned int GetNumberOfVirtualProcessors() const = 0;
```

### <a name="return-value"></a>Valore restituito

Numero corrente di processori virtuali per l'utilità di pianificazione.

##  <a name="getpolicy"></a> GetPolicy

Restituisce una copia dei criteri creata con l'utilità di pianificazione.

```
virtual SchedulerPolicy GetPolicy() const = 0;
```

### <a name="return-value"></a>Valore restituito

Una copia dei criteri creata con l'utilità di pianificazione.

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

*_Placement*<br/>
Un riferimento al percorso per eseguire una query sull'utilità di pianificazione.

### <a name="return-value"></a>Valore restituito

Un'indicazione dei o meno il percorso specificato per il `_Placement` argomento è disponibile nell'utilità di pianificazione.

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

Ciò in genere viene usato per gestire la durata dell'utilità di pianificazione per la composizione. Quando il conteggio di riferimenti di un'utilità di pianificazione scende a zero, l'utilità di pianificazione si arresterà e si distruggerà dopo che tutto il lavoro nell'utilità di pianificazione sarà stato completato.

Il metodo genera un' [improper_scheduler_reference](improper-scheduler-reference-class.md) eccezione se il conteggio dei riferimenti prima di chiamare il `Reference` metodo è zero e viene effettuata la chiamata da un contesto che non è di proprietà dall'utilità di pianificazione.

##  <a name="registershutdownevent"></a> RegisterShutdownEvent

Cause passato l'handle di eventi di Windows il `_Event` parametro venga segnalato quando l'utilità di pianificazione arrestato e distrugge. Al momento che l'evento viene segnalato, tutto il lavoro che è stato pianificato per l'utilità di pianificazione è stato completato. È possibile registrare più eventi di arresto del sistema tramite questo metodo.

```
virtual void RegisterShutdownEvent(HANDLE _Event) = 0;
```

### <a name="parameters"></a>Parametri

*_Event*<br/>
Handle per un oggetto di eventi di Windows che viene segnalato dal runtime quando l'utilità di pianificazione arrestato e distrugge.

##  <a name="release"></a> Versione

Decrementa il conteggio di riferimenti dell'utilità di pianificazione.

```
virtual unsigned int Release() = 0;
```

### <a name="return-value"></a>Valore restituito

Il conteggio dei riferimenti appena decrementato.

### <a name="remarks"></a>Note

Ciò in genere viene usato per gestire la durata dell'utilità di pianificazione per la composizione. Quando il conteggio di riferimenti di un'utilità di pianificazione scende a zero, l'utilità di pianificazione si arresterà e si distruggerà dopo che tutto il lavoro nell'utilità di pianificazione sarà stato completato.

##  <a name="resetdefaultschedulerpolicy"></a> ResetDefaultSchedulerPolicy

Reimposta i criteri dell'utilità di pianificazione predefinita per il valore predefinito di runtime. Alla successiva che viene creata un'utilità di pianificazione predefinita, userà le impostazioni dei criteri di runtime.

```
static void __cdecl ResetDefaultSchedulerPolicy();
```

### <a name="remarks"></a>Note

Questo metodo può essere chiamato mentre è presente un'utilità di pianificazione predefinita all'interno del processo. Non avrà alcun effetto i criteri dell'utilità di pianificazione predefinito esistente. Tuttavia, se l'utilità di pianificazione predefinita è in arresto e un nuovo valore predefinito fosse stato creato in un secondo momento, la nuova utilità di pianificazione utilizzerebbe le impostazioni dei criteri di runtime.

##  <a name="ctor"></a> Utilità di pianificazione

Un oggetto del `Scheduler` classe può essere solo creati utilizzando metodi factory o implicito.

```
Scheduler();
```

### <a name="remarks"></a>Note

Utilità di pianificazione predefinita del processo viene creato in modo implicito quando si utilizzano molte delle funzioni di runtime che richiedono un'utilità di pianificazione da allegare al contesto del chiamante. I metodi all'interno di `CurrentScheduler` classe e le funzionalità dei livelli di PPL e gli agenti eseguono in genere allegati implicito.

È anche possibile creare un'utilità di pianificazione in modo esplicito tramite il `CurrentScheduler::Create` metodo o il `Scheduler::Create` (metodo).

##  <a name="dtor"></a> ~ Scheduler

Un oggetto del `Scheduler` classe viene eliminata in modo implicito quando tutti i riferimenti esterni cessano di esistere.

```
virtual ~Scheduler();
```

##  <a name="scheduletask"></a> ScheduleTask

Pianifica un'attività leggera entro l'utilità di pianificazione. L'attività leggera sarà posizionata in un gruppo di pianificazione determinato dal runtime. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata.

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

*_Proc*<br/>
Puntatore alla funzione da eseguire per utilizzare il corpo dell'attività leggera.

*_Data*<br/>
Un puntatore void per i dati che verranno passati come parametro al corpo dell'attività.

*_Placement*<br/>
Riferimento a una posizione in cui per l'attività leggera verrà data priorità all'esecuzione.

##  <a name="setdefaultschedulerpolicy"></a> SetDefaultSchedulerPolicy

Consente a un criterio definito dall'utente da utilizzare per creare l'utilità di pianificazione predefinita. Questo metodo può essere chiamato solo quando è presente alcuna utilità di pianificazione predefinita all'interno del processo. Dopo aver impostato un criterio predefinito, rimane attiva fino alla successiva chiamata a uno il `SetDefaultSchedulerPolicy` o il [ResetDefaultSchedulerPolicy](#resetdefaultschedulerpolicy) (metodo).

```
static void __cdecl SetDefaultSchedulerPolicy(const SchedulerPolicy& _Policy);
```

### <a name="parameters"></a>Parametri

*_Policy*<br/>
I criteri da impostare come i criteri dell'utilità di pianificazione predefinita.

### <a name="remarks"></a>Note

Se il `SetDefaultSchedulerPolicy` metodo viene chiamato quando un'utilità di pianificazione predefinito esiste già nell'ambito del processo, il runtime genera una [default_scheduler_exists](default-scheduler-exists-class.md) eccezione.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe Scheduler](scheduler-class.md)<br/>
[PolicyElementKey](concurrency-namespace-enums.md)<br/>
[Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)
