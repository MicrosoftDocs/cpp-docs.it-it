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
ms.openlocfilehash: 77ad876b8352ab1ae86fde622b05712ec5f2cea9
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79422115"
---
# <a name="scheduler-class"></a>Classe Scheduler

Rappresenta un'astrazione per un'utilità di pianificazione del runtime di concorrenza.

## <a name="syntax"></a>Sintassi

```cpp
class Scheduler;
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[Utilità di pianificazione](#ctor)|Un oggetto della classe `Scheduler` può essere creato solo usando metodi factory o in modo implicito.|
|[~ Distruttore utilità di pianificazione](#dtor)|Un oggetto della classe `Scheduler` viene eliminato in modo implicito quando tutti i riferimenti esterni a tale classe cessano di esistere.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Collega](#attach)|Connette l'utilità di pianificazione al contesto chiamante. Dopo la restituzione di questo metodo, il contesto chiamante viene gestito dall'utilità di pianificazione e l'utilità di pianificazione diventa l'utilità di pianificazione corrente.|
|[Creare](#create)|Crea una nuova utilità di pianificazione il cui comportamento è descritto dal parametro `_Policy`, inserisce un riferimento iniziale nell'utilità di pianificazione e restituisce un puntatore a tale utilità.|
|[CreateScheduleGroup](#createschedulegroup)|Di overload. Consente di creare un nuovo gruppo di pianificazione all'interno dell'utilità di pianificazione. La versione che accetta il parametro `_Placement` causa la distorsione delle attività all'interno del gruppo di pianificazione appena creato per l'esecuzione nella posizione specificata dal parametro.|
|[GetNumberOfVirtualProcessors](#getnumberofvirtualprocessors)|Restituisce il numero corrente di processori virtuali per l'utilità di pianificazione.|
|[GetPolicy](#getpolicy)|Restituisce una copia del criterio con cui è stata creata l'utilità di pianificazione.|
|[Id](#id)|Restituisce un identificatore univoco per l'utilità di pianificazione.|
|[IsAvailableLocation](#isavailablelocation)|Determina se una determinata posizione è disponibile nell'utilità di pianificazione.|
|[Riferimento](#reference)|Incrementa il conteggio dei riferimenti dell'utilità di pianificazione.|
|[RegisterShutdownEvent](#registershutdownevent)|Fa in modo che l'handle di evento di Windows passato nel parametro `_Event` venga segnalato quando l'utilità di pianificazione viene arrestata e viene distrutta automaticamente. Nel momento in cui l'evento viene segnalato, tutto il lavoro pianificato per l'utilità di pianificazione è completo. Con questo metodo è possibile registrare più eventi di arresto.|
|[Versione](#release)|Decrementa il conteggio di riferimenti dell'utilità di pianificazione.|
|[ResetDefaultSchedulerPolicy](#resetdefaultschedulerpolicy)|Reimposta i criteri dell'utilità di pianificazione predefiniti sul valore predefinito di Runtime. Alla successiva creazione di un'utilità di pianificazione predefinita, utilizzerà le impostazioni predefinite dei criteri di Runtime.|
|[ScheduleTask](#scheduletask)|Di overload. Pianifica un'attività leggera all'interno dell'utilità di pianificazione. L'attività leggera sarà posizionata in un gruppo di pianificazione determinato dal runtime. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata.|
|[SetDefaultSchedulerPolicy](#setdefaultschedulerpolicy)|Consente di usare un criterio definito dall'utente per creare l'utilità di pianificazione predefinita. Questo metodo può essere chiamato solo quando nel processo non è presente alcuna utilità di pianificazione predefinita. Dopo aver impostato un criterio predefinito, rimane attivo fino alla successiva chiamata valida al metodo `SetDefaultSchedulerPolicy` o [ResetDefaultSchedulerPolicy](#resetdefaultschedulerpolicy) .|

## <a name="remarks"></a>Osservazioni

L'utilità di pianificazione runtime di concorrenza usa i contesti di esecuzione, che eseguono il mapping ai contesti di esecuzione del sistema operativo, ad esempio un thread, per eseguire il lavoro in coda da parte dell'applicazione. In qualsiasi momento, il livello di concorrenza di un'utilità di pianificazione è uguale al numero di processore virtuale concesso dal Gestione risorse. Un processore virtuale è un'astrazione per una risorsa di elaborazione e viene mappato a un thread hardware sul sistema sottostante. È possibile eseguire un solo contesto dell'utilità di pianificazione in un processore virtuale in un determinato momento.

Il runtime di concorrenza creerà un'utilità di pianificazione predefinita per processo per eseguire operazioni parallele. Inoltre, è possibile creare istanze dell'utilità di pianificazione personalizzate e manipolarle utilizzando questa classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Scheduler`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="attach"></a>Collegare

Connette l'utilità di pianificazione al contesto chiamante. Dopo la restituzione di questo metodo, il contesto chiamante viene gestito dall'utilità di pianificazione e l'utilità di pianificazione diventa l'utilità di pianificazione corrente.

```cpp
virtual void Attach() = 0;
```

### <a name="remarks"></a>Osservazioni

Se si connette un'utilità di pianificazione, viene inserito in modo implicito un riferimento nell'utilità di pianificazione.

A un certo punto in futuro, è necessario chiamare il metodo [CurrentScheduler::D etach](currentscheduler-class.md#detach) per consentire l'arresto dell'utilità di pianificazione.

Se questo metodo viene chiamato da un contesto già associato a un'utilità di pianificazione diversa, l'utilità di pianificazione esistente viene memorizzata come utilità di pianificazione precedente e l'utilità di pianificazione appena creata diventa l'utilità di pianificazione corrente. Quando si chiama il metodo `CurrentScheduler::Detach` in un secondo momento, l'utilità di pianificazione precedente viene ripristinata come utilità di pianificazione corrente.

Questo metodo genererà un'eccezione [improper_scheduler_attach](improper-scheduler-attach-class.md) se questa utilità di pianificazione è l'utilità di pianificazione corrente del contesto chiamante.

## <a name="create"></a> Create

Crea una nuova utilità di pianificazione il cui comportamento è descritto dal parametro `_Policy`, inserisce un riferimento iniziale nell'utilità di pianificazione e restituisce un puntatore a tale utilità.

```cpp
static Scheduler* __cdecl Create(const SchedulerPolicy& _Policy);
```

### <a name="parameters"></a>Parametri

*_Policy*<br/>
Criteri dell'utilità di pianificazione che descrivono il comportamento dell'utilità di pianificazione appena creata.

### <a name="return-value"></a>Valore restituito

Puntatore a un'utilità di pianificazione appena creata. A questo oggetto `Scheduler` viene applicato un conteggio di riferimenti iniziale.

### <a name="remarks"></a>Osservazioni

Dopo aver creato un'utilità di pianificazione con il metodo `Create`, è necessario chiamare il metodo `Release` in un determinato momento in futuro per rimuovere il conteggio dei riferimenti iniziale e consentire l'arresto dell'utilità di pianificazione.

Un'utilità di pianificazione creata con questo metodo non è associata al contesto chiamante. Può essere collegato a un contesto usando il metodo [Attach](#attach) .

Questo metodo può generare un'ampia gamma di eccezioni, tra cui [scheduler_resource_allocation_error](scheduler-resource-allocation-error-class.md) e [invalid_scheduler_policy_value](invalid-scheduler-policy-value-class.md).

## <a name="createschedulegroup"></a>CreateScheduleGroup

Consente di creare un nuovo gruppo di pianificazione all'interno dell'utilità di pianificazione. La versione che accetta il parametro `_Placement` causa la distorsione delle attività all'interno del gruppo di pianificazione appena creato per l'esecuzione nella posizione specificata dal parametro.

```cpp
virtual ScheduleGroup* CreateScheduleGroup() = 0;

virtual ScheduleGroup* CreateScheduleGroup(location& _Placement) = 0;
```

### <a name="parameters"></a>Parametri

*_Placement*<br/>
Un riferimento a un percorso in cui le attività all'interno del gruppo di pianificazione diverrebbeno parziali per l'esecuzione in.

### <a name="return-value"></a>Valore restituito

Puntatore al gruppo di pianificazione appena creato. A questo oggetto `ScheduleGroup` viene applicato un conteggio di riferimenti iniziale.

### <a name="remarks"></a>Osservazioni

Al termine della pianificazione del lavoro, è necessario richiamare il metodo [Release](schedulegroup-class.md#release) in un gruppo di pianificazione. L'utilità di pianificazione eliminerà il gruppo pianificato dopo il completamento di tutto il lavoro in coda.

Si noti che se l'utilità di pianificazione è stata creata in modo esplicito, è necessario rilasciare tutti i riferimenti a gruppi di pianificazione al suo interno, prima di rilasciare i riferimenti nell'utilità di pianificazione.

## <a name="getnumberofvirtualprocessors"></a>GetNumberOfVirtualProcessors

Restituisce il numero corrente di processori virtuali per l'utilità di pianificazione.

```cpp
virtual unsigned int GetNumberOfVirtualProcessors() const = 0;
```

### <a name="return-value"></a>Valore restituito

Numero corrente di processori virtuali per l'utilità di pianificazione.

## <a name="getpolicy"></a>GetPolicy

Restituisce una copia del criterio con cui è stata creata l'utilità di pianificazione.

```cpp
virtual SchedulerPolicy GetPolicy() const = 0;
```

### <a name="return-value"></a>Valore restituito

Una copia del criterio con cui è stata creata l'utilità di pianificazione.

## <a name="id"></a>ID

Restituisce un identificatore univoco per l'utilità di pianificazione.

```cpp
virtual unsigned int Id() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore univoco per l'utilità di pianificazione.

## <a name="isavailablelocation"></a>IsAvailableLocation

Determina se una determinata posizione è disponibile nell'utilità di pianificazione.

```cpp
virtual bool IsAvailableLocation(const location& _Placement) const = 0;
```

### <a name="parameters"></a>Parametri

*_Placement*<br/>
Riferimento alla posizione in cui eseguire una query sull'utilità di pianificazione.

### <a name="return-value"></a>Valore restituito

Indica se il percorso specificato dall'argomento `_Placement` è disponibile nell'utilità di pianificazione.

### <a name="remarks"></a>Osservazioni

Si noti che il valore restituito è un campionamento istantaneo dell'eventuale disponibilità della posizione specificata. In presenza di più utilità di pianificazione, tramite la gestione delle risorse dinamiche è possibile aggiungere o sottrarre risorse dalle utilità di pianificazione in qualsiasi punto. In questo caso, la disponibilità della posizione specificata può cambiare.

## <a name="reference"></a>Riferimento

Incrementa il conteggio dei riferimenti dell'utilità di pianificazione.

```cpp
virtual unsigned int Reference() = 0 ;
```

### <a name="return-value"></a>Valore restituito

Conteggio dei riferimenti appena incrementato.

### <a name="remarks"></a>Osservazioni

Questa operazione viene in genere utilizzata per gestire la durata dell'utilità di pianificazione per la composizione. Quando il conteggio di riferimenti di un'utilità di pianificazione scende a zero, l'utilità di pianificazione si arresterà e si distruggerà dopo che tutto il lavoro nell'utilità di pianificazione sarà stato completato.

Il metodo genererà un'eccezione [improper_scheduler_reference](improper-scheduler-reference-class.md) se il conteggio dei riferimenti prima della chiamata al metodo `Reference` era zero e la chiamata viene eseguita da un contesto che non è di proprietà dell'utilità di pianificazione.

## <a name="registershutdownevent"></a>RegisterShutdownEvent

Fa in modo che l'handle di evento di Windows passato nel parametro `_Event` venga segnalato quando l'utilità di pianificazione viene arrestata e viene distrutta automaticamente. Nel momento in cui l'evento viene segnalato, tutto il lavoro pianificato per l'utilità di pianificazione è completo. Con questo metodo è possibile registrare più eventi di arresto.

```cpp
virtual void RegisterShutdownEvent(HANDLE _Event) = 0;
```

### <a name="parameters"></a>Parametri

*_Event*<br/>
Handle per un oggetto evento di Windows che verrà segnalato dal runtime quando l'utilità di pianificazione si arresta ed Elimina se stesso.

## <a name="release"></a>Versione

Decrementa il conteggio di riferimenti dell'utilità di pianificazione.

```cpp
virtual unsigned int Release() = 0;
```

### <a name="return-value"></a>Valore restituito

Conteggio dei riferimenti appena decrementato.

### <a name="remarks"></a>Osservazioni

Questa operazione viene in genere utilizzata per gestire la durata dell'utilità di pianificazione per la composizione. Quando il conteggio di riferimenti di un'utilità di pianificazione scende a zero, l'utilità di pianificazione si arresterà e si distruggerà dopo che tutto il lavoro nell'utilità di pianificazione sarà stato completato.

## <a name="resetdefaultschedulerpolicy"></a>ResetDefaultSchedulerPolicy

Reimposta i criteri dell'utilità di pianificazione predefiniti sul valore predefinito di Runtime. Alla successiva creazione di un'utilità di pianificazione predefinita, utilizzerà le impostazioni predefinite dei criteri di Runtime.

```cpp
static void __cdecl ResetDefaultSchedulerPolicy();
```

### <a name="remarks"></a>Osservazioni

Questo metodo può essere chiamato mentre un'utilità di pianificazione predefinita esiste nel processo. Non avrà alcun effetto sui criteri dell'utilità di pianificazione predefinita esistente. Tuttavia, se l'utilità di pianificazione predefinita è stata arrestata ed è stato creato un nuovo valore predefinito in un secondo momento, la nuova utilità di pianificazione utilizzerà le impostazioni predefinite dei criteri di Runtime.

## <a name="ctor"></a>Scheduler

Un oggetto della classe `Scheduler` può essere creato solo usando metodi factory o in modo implicito.

```cpp
Scheduler();
```

### <a name="remarks"></a>Osservazioni

L'utilità di pianificazione predefinita del processo viene creata in modo implicito quando si utilizzano molte delle funzioni di runtime che richiedono che un'utilità di pianificazione venga collegata al contesto chiamante. I metodi all'interno della classe `CurrentScheduler` e le funzionalità dei livelli PPL e Agents eseguono in genere un allegato implicito.

È anche possibile creare un'utilità di pianificazione in modo esplicito tramite il metodo `CurrentScheduler::Create` o il metodo `Scheduler::Create`.

## <a name="dtor"></a>~ Utilità di pianificazione

Un oggetto della classe `Scheduler` viene eliminato in modo implicito quando tutti i riferimenti esterni a tale classe cessano di esistere.

```cpp
virtual ~Scheduler();
```

## <a name="scheduletask"></a>ScheduleTask

Pianifica un'attività leggera all'interno dell'utilità di pianificazione. L'attività leggera sarà posizionata in un gruppo di pianificazione determinato dal runtime. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata.

```cpp
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
Puntatore alla funzione da eseguire per eseguire il corpo dell'attività leggera.

*_Data*<br/>
Puntatore void ai dati che verranno passati come parametro al corpo dell'attività.

*_Placement*<br/>
Riferimento a una posizione in cui per l'attività leggera verrà data priorità all'esecuzione.

## <a name="setdefaultschedulerpolicy"></a>SetDefaultSchedulerPolicy

Consente di usare un criterio definito dall'utente per creare l'utilità di pianificazione predefinita. Questo metodo può essere chiamato solo quando nel processo non è presente alcuna utilità di pianificazione predefinita. Dopo aver impostato un criterio predefinito, rimane attivo fino alla successiva chiamata valida al metodo `SetDefaultSchedulerPolicy` o [ResetDefaultSchedulerPolicy](#resetdefaultschedulerpolicy) .

```cpp
static void __cdecl SetDefaultSchedulerPolicy(const SchedulerPolicy& _Policy);
```

### <a name="parameters"></a>Parametri

*_Policy*<br/>
Criterio da impostare come criterio dell'utilità di pianificazione predefinito.

### <a name="remarks"></a>Osservazioni

Se il metodo `SetDefaultSchedulerPolicy` viene chiamato quando un'utilità di pianificazione predefinita esiste già nel processo, il runtime genererà un'eccezione [default_scheduler_exists](default-scheduler-exists-class.md) .

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe Scheduler](scheduler-class.md)<br/>
[PolicyElementKey](concurrency-namespace-enums.md)<br/>
[Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)
