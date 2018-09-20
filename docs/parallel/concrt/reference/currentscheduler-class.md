---
title: Classe CurrentScheduler | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- CurrentScheduler
- CONCRT/concurrency::CurrentScheduler
- CONCRT/concurrency::CurrentScheduler::Create
- CONCRT/concurrency::CurrentScheduler::CreateScheduleGroup
- CONCRT/concurrency::CurrentScheduler::Detach
- CONCRT/concurrency::CurrentScheduler::Get
- CONCRT/concurrency::CurrentScheduler::GetNumberOfVirtualProcessors
- CONCRT/concurrency::CurrentScheduler::GetPolicy
- CONCRT/concurrency::CurrentScheduler::Id
- CONCRT/concurrency::CurrentScheduler::IsAvailableLocation
- CONCRT/concurrency::CurrentScheduler::RegisterShutdownEvent
- CONCRT/concurrency::CurrentScheduler::ScheduleTask
dev_langs:
- C++
helpviewer_keywords:
- CurrentScheduler class
ms.assetid: 31c20e0e-4cdf-49b4-8220-d726130aad2b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 27c295f1cf8c6d02721a999c46ce02d961cc3702
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46419022"
---
# <a name="currentscheduler-class"></a>Classe CurrentScheduler

Rappresenta un'astrazione per l'utilità di pianificazione corrente associata al contesto di chiamata.

## <a name="syntax"></a>Sintassi

```
class CurrentScheduler;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[creare](#create)|Crea una nuova utilità di pianificazione il cui comportamento è descritto il `_Policy` parametro e la collega al contesto del chiamante. L'utilità di pianificazione appena creato diventerà l'utilità di pianificazione corrente per il contesto del chiama.|
|[CreateScheduleGroup](#createschedulegroup)|Di overload. Crea un nuovo gruppo di pianificazione all'interno di utilità di pianificazione associata al contesto di chiamata. La versione che accetta il parametro `_Placement` fa sì che le attività all'interno del gruppo di pianificazione appena creata venga data priorità all'esecuzione nella posizione specificata da quel parametro.|
|[Detach](#detach)|Consente di scollegare l'utilità di pianificazione corrente dal contesto del chiama e consente di ripristinare l'utilità di pianificazione precedentemente associata come utilità di pianificazione corrente, se presente. Quando termina, questo metodo al contesto di chiamata viene quindi gestito dall'utilità di pianificazione che in precedenza era associato al contesto tramite il `CurrentScheduler::Create` o `Scheduler::Attach` (metodo).|
|[Get](#get)|Restituisce un puntatore all'utilità di pianificazione associata al contesto di chiamata, noto anche come utilità di pianificazione corrente.|
|[GetNumberOfVirtualProcessors](#getnumberofvirtualprocessors)|Restituisce il numero corrente di processori virtuali per l'utilità di pianificazione associata al contesto di chiamata.|
|[GetPolicy](#getpolicy)|Restituisce una copia dei criteri creata con l'utilità di pianificazione corrente.|
|[Id](#id)|Restituisce un identificatore univoco per l'utilità di pianificazione corrente.|
|[IsAvailableLocation](#isavailablelocation)|Determina se una posizione specificata è disponibile nell'utilità di pianificazione corrente.|
|[RegisterShutdownEvent](#registershutdownevent)|Cause passato l'handle di eventi di Windows il `_ShutdownEvent` parametro venga segnalato quando si arresta e si distrugge l'utilità di pianificazione associata al contesto corrente. Al momento che l'evento viene segnalato, tutto il lavoro che è stato pianificato per l'utilità di pianificazione è stato completato. È possibile registrare più eventi di arresto del sistema tramite questo metodo.|
|[ScheduleTask](#scheduletask)|Di overload. Pianifica un'attività leggera entro l'utilità di pianificazione associata al contesto di chiamata. L'attività leggera sarà posizionata in un gruppo di pianificazione determinato dal runtime. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata.|

## <a name="remarks"></a>Note

Se è presente alcuna utilità di pianificazione (vedere [utilità di pianificazione](scheduler-class.md)) associato al contesto di chiamata, molti metodi all'interno di `CurrentScheduler` classe comporterà il collegamento dell'utilità di pianificazione predefinita del processo. Ciò può implicare l'utilità di pianificazione predefinita del processo viene creato durante questa chiamata.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CurrentScheduler`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

##  <a name="create"></a> creare

Crea una nuova utilità di pianificazione il cui comportamento è descritto il `_Policy` parametro e la collega al contesto del chiamante. L'utilità di pianificazione appena creato diventerà l'utilità di pianificazione corrente per il contesto del chiama.

```
static void __cdecl Create(const SchedulerPolicy& _Policy);
```

### <a name="parameters"></a>Parametri

*C_riteri per il*<br/>
I criteri dell'utilità di pianificazione che descrive il comportamento dell'utilità di pianificazione appena creata.

### <a name="remarks"></a>Note

L'allegato dell'utilità di pianificazione nel contesto di chiamata inserisce in modo implicito un conteggio dei riferimenti nell'utilità di pianificazione.

Dopo la creazione di un'utilità di pianificazione con il `Create` metodo, è necessario chiamare il [CurrentScheduler:: Detach](#detach) metodo a un certo punto in futuro per consentire l'utilità di pianificazione arrestato.

Se questo metodo viene chiamato da un contesto che è già collegato a un'utilità di pianificazione diverso, l'utilità di pianificazione esistente viene memorizzata come la precedente utilità di pianificazione e l'utilità di pianificazione appena creato diventa l'utilità di pianificazione corrente. Quando si chiama il `CurrentScheduler::Detach` metodo in un secondo momento, l'utilità di pianificazione precedente viene ripristinato come utilità di pianificazione corrente.

Questo metodo può generare un'ampia gamma di eccezioni, incluse [scheduler_resource_allocation_error](scheduler-resource-allocation-error-class.md) e [invalid_scheduler_policy_value](invalid-scheduler-policy-value-class.md).

##  <a name="createschedulegroup"></a> CreateScheduleGroup

Crea un nuovo gruppo di pianificazione all'interno di utilità di pianificazione associata al contesto di chiamata. La versione che accetta il parametro `_Placement` fa sì che le attività all'interno del gruppo di pianificazione appena creata venga data priorità all'esecuzione nella posizione specificata da quel parametro.

```
static ScheduleGroup* __cdecl CreateScheduleGroup();

static ScheduleGroup* __cdecl CreateScheduleGroup(location& _Placement);
```

### <a name="parameters"></a>Parametri

*Selezione*<br/>
Un riferimento a una posizione in cui le attività all'interno del gruppo di pianificazione verranno data priorità in esecuzione.

### <a name="return-value"></a>Valore restituito

Puntatore al gruppo di pianificazione appena creata. Ciò `ScheduleGroup` oggetto ha un conteggio di riferimento iniziale posizionato su di esso.

### <a name="remarks"></a>Note

Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata.

È necessario richiamare il [rilascio](schedulegroup-class.md#release) metodo su un gruppo di pianificazione dopo avere effettuato la pianificazione del lavoro a esso. L'utilità di pianificazione comporta l'eliminazione della pianificazione gruppo quando tutto il lavoro accodato a esso è stata completata.

Si noti che se è stato creato in modo esplicito questa utilità di pianificazione, è necessario rilasciare tutti i riferimenti per pianificare i gruppi all'interno di esso, prima di rilasciare il riferimento nell'utilità di pianificazione, scollegando il contesto corrente da quest'ultimo.

##  <a name="detach"></a> Scollegamento

Consente di scollegare l'utilità di pianificazione corrente dal contesto del chiama e consente di ripristinare l'utilità di pianificazione precedentemente associata come utilità di pianificazione corrente, se presente. Quando termina, questo metodo al contesto di chiamata viene quindi gestito dall'utilità di pianificazione che in precedenza era associato al contesto tramite il `CurrentScheduler::Create` o `Scheduler::Attach` (metodo).

```
static void __cdecl Detach();
```

### <a name="remarks"></a>Note

Il `Detach` metodo rimuove in modo implicito un conteggio dei riferimenti dall'utilità di pianificazione.

Se non è presente alcuna utilità di pianificazione associata al contesto di chiamata, chiamare questo metodo comporterà un' [scheduler_not_attached](scheduler-not-attached-class.md) eccezione generata.

Chiamare questo metodo da un contesto che è interno e gestito da un'utilità di pianificazione o un contesto che è stato collegato con un metodo diverso il [Scheduler:: Attach](scheduler-class.md#attach) oppure [CurrentScheduler:: Create](#create) metodi, verrà generato un [improper_scheduler_detach](improper-scheduler-detach-class.md) eccezione generata.

##  <a name="get"></a> Ottieni

Restituisce un puntatore all'utilità di pianificazione associata al contesto di chiamata, noto anche come utilità di pianificazione corrente.

```
static Scheduler* __cdecl Get();
```

### <a name="return-value"></a>Valore restituito

Un puntatore all'utilità di pianificazione associata al contesto di chiamata (utilità di pianificazione corrente).

### <a name="remarks"></a>Note

Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata. Nessun riferimento aggiuntivo viene posizionato su di `Scheduler` oggetto restituito da questo metodo.

##  <a name="getnumberofvirtualprocessors"></a> GetNumberOfVirtualProcessors

Restituisce il numero corrente di processori virtuali per l'utilità di pianificazione associata al contesto di chiamata.

```
static unsigned int __cdecl GetNumberOfVirtualProcessors();
```

### <a name="return-value"></a>Valore restituito

Se un'utilità di pianificazione è associata al contesto di chiamata, il numero corrente di processori virtuali per utilità in questione; in caso contrario, il valore `-1`.

### <a name="remarks"></a>Note

Questo metodo non comporterà allegato dell'utilità di pianificazione se il contesto di chiamata non è già associato a un'utilità di pianificazione.

Il valore restituito da questo metodo è un campionamento istantaneo del numero di processori virtuali per l'utilità di pianificazione associata al contesto di chiamata. Questo valore può non essere aggiornato nel momento in cui viene restituito.

##  <a name="getpolicy"></a> GetPolicy

Restituisce una copia dei criteri creata con l'utilità di pianificazione corrente.

```
static SchedulerPolicy __cdecl GetPolicy();
```

### <a name="return-value"></a>Valore restituito

Una copia dei criteri creata con l'utilità di pianificazione corrente.

### <a name="remarks"></a>Note

Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata.

##  <a name="id"></a> Id

Restituisce un identificatore univoco per l'utilità di pianificazione corrente.

```
static unsigned int __cdecl Id();
```

### <a name="return-value"></a>Valore restituito

Se un'utilità di pianificazione è associata al contesto di chiamata, un identificatore univoco per l'utilità in questione; in caso contrario, il valore `-1`.

### <a name="remarks"></a>Note

Questo metodo non comporterà allegato dell'utilità di pianificazione se il contesto di chiamata non è già associato a un'utilità di pianificazione.

##  <a name="isavailablelocation"></a> IsAvailableLocation

Determina se una posizione specificata è disponibile nell'utilità di pianificazione corrente.

```
static bool __cdecl IsAvailableLocation(const location& _Placement);
```

### <a name="parameters"></a>Parametri

*Selezione*<br/>
Riferimento alla posizione riguardo alla quale eseguire una query sull'utilità di pianificazione corrente.

### <a name="return-value"></a>Valore restituito

Indicazione dell'eventuale disponibilità della posizione specificata dall'argomento `_Placement` nell'utilità di pianificazione corrente.

### <a name="remarks"></a>Note

Questo metodo non comporterà allegato dell'utilità di pianificazione se il contesto di chiamata non è già associato a un'utilità di pianificazione.

Si noti che il valore restituito è un campionamento istantaneo dell'eventuale disponibilità della posizione specificata. In presenza di più utilità di pianificazione, tramite la gestione delle risorse dinamiche è possibile aggiungere o sottrarre risorse dalle utilità di pianificazione in qualsiasi punto. In questo caso, la disponibilità della posizione specificata può cambiare.

##  <a name="registershutdownevent"></a> RegisterShutdownEvent

Cause passato l'handle di eventi di Windows il `_ShutdownEvent` parametro venga segnalato quando si arresta e si distrugge l'utilità di pianificazione associata al contesto corrente. Al momento che l'evento viene segnalato, tutto il lavoro che è stato pianificato per l'utilità di pianificazione è stato completato. È possibile registrare più eventi di arresto del sistema tramite questo metodo.

```
static void __cdecl RegisterShutdownEvent(HANDLE _ShutdownEvent);
```

### <a name="parameters"></a>Parametri

*ShutdownEvent*<br/>
Handle per un oggetto di eventi di Windows che viene segnalato dal runtime quando l'utilità di pianificazione associata al contesto corrente è arrestato e distrugge.

### <a name="remarks"></a>Note

Se non è presente alcuna utilità di pianificazione associata al contesto di chiamata, chiamare questo metodo comporterà un' [scheduler_not_attached](scheduler-not-attached-class.md) eccezione generata.

##  <a name="scheduletask"></a> ScheduleTask

Pianifica un'attività leggera entro l'utilità di pianificazione associata al contesto di chiamata. L'attività leggera sarà posizionata in un gruppo di pianificazione determinato dal runtime. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata.

```
static void __cdecl ScheduleTask(
    TaskProc _Proc,
    _Inout_opt_ void* _Data);

static void __cdecl ScheduleTask(
    TaskProc _Proc,
    _Inout_opt_ void* _Data,
    location& _Placement);
```

### <a name="parameters"></a>Parametri

*_Proc*<br/>
Puntatore alla funzione da eseguire per utilizzare il corpo dell'attività leggera.

*Data*<br/>
Un puntatore void per i dati che verranno passati come parametro al corpo dell'attività.

*Selezione*<br/>
Riferimento a una posizione in cui per l'attività leggera verrà data priorità all'esecuzione.

### <a name="remarks"></a>Note

Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe Scheduler](scheduler-class.md)<br/>
[PolicyElementKey](concurrency-namespace-enums.md)<br/>
[Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)

