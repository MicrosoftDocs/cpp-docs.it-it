---
description: 'Altre informazioni su: classe CurrentScheduler'
title: Classe CurrentScheduler
ms.date: 11/04/2016
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
helpviewer_keywords:
- CurrentScheduler class
ms.assetid: 31c20e0e-4cdf-49b4-8220-d726130aad2b
ms.openlocfilehash: d2456513dba05f8e38035eb96709e540cb781629
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97115235"
---
# <a name="currentscheduler-class"></a>Classe CurrentScheduler

Rappresenta un'astrazione per l'utilità di pianificazione corrente associata al contesto di chiamata.

## <a name="syntax"></a>Sintassi

```cpp
class CurrentScheduler;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Creare](#create)|Crea una nuova utilità di pianificazione il cui comportamento è descritto dal `_Policy` parametro e lo collega al contesto chiamante. L'utilità di pianificazione appena creata diventerà l'utilità di pianificazione corrente per il contesto chiamante.|
|[CreateScheduleGroup](#createschedulegroup)|Di overload. Crea un nuovo gruppo di pianificazione nell'utilità di pianificazione associato al contesto chiamante. La versione che accetta il parametro `_Placement` determina la distorsione delle attività all'interno del gruppo di pianificazione appena creato per l'esecuzione nella posizione specificata da quel parametro.|
|[Scollega](#detach)|Scollega l'utilità di pianificazione corrente dal contesto chiamante e ripristina l'utilità di pianificazione precedentemente associata come utilità di pianificazione corrente, se esistente. Dopo la restituzione di questo metodo, il contesto chiamante viene quindi gestito dall'utilità di pianificazione precedentemente collegata al contesto tramite il `CurrentScheduler::Create` metodo o `Scheduler::Attach` .|
|[Ottieni](#get)|Restituisce un puntatore all'utilità di pianificazione associata al contesto chiamante, noto anche come utilità di pianificazione corrente.|
|[GetNumberOfVirtualProcessors](#getnumberofvirtualprocessors)|Restituisce il numero corrente di processori virtuali per l'utilità di pianificazione associata al contesto chiamante.|
|[GetPolicy](#getpolicy)|Restituisce una copia del criterio con cui è stata creata l'utilità di pianificazione corrente.|
|[Id](#id)|Restituisce un identificatore univoco per l'utilità di pianificazione corrente.|
|[IsAvailableLocation](#isavailablelocation)|Determina se una posizione specificata è disponibile nell'utilità di pianificazione corrente.|
|[RegisterShutdownEvent](#registershutdownevent)|Fa in modo che l'handle di evento di Windows passato nel `_ShutdownEvent` parametro venga segnalato quando l'utilità di pianificazione associata al contesto corrente viene arrestata e viene distrutta automaticamente. Nel momento in cui l'evento viene segnalato, tutto il lavoro pianificato per l'utilità di pianificazione è completo. Con questo metodo è possibile registrare più eventi di arresto.|
|[ScheduleTask](#scheduletask)|Di overload. Pianifica un'attività leggera nell'utilità di pianificazione associata al contesto chiamante. L'attività leggera sarà posizionata in un gruppo di pianificazione determinato dal runtime. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata.|

## <a name="remarks"></a>Commenti

Se non è presente alcuna utilità di pianificazione (vedere l' [utilità di pianificazione](scheduler-class.md)) associata al contesto chiamante, molti metodi all'interno della classe comporteranno `CurrentScheduler` l'allegato dell'utilità di pianificazione predefinita del processo. Questo può anche implicare che l'utilità di pianificazione predefinita del processo venga creata durante una chiamata di questo tipo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CurrentScheduler`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="create"></a><a name="create"></a> Creare

Crea una nuova utilità di pianificazione il cui comportamento è descritto dal `_Policy` parametro e lo collega al contesto chiamante. L'utilità di pianificazione appena creata diventerà l'utilità di pianificazione corrente per il contesto chiamante.

```cpp
static void __cdecl Create(const SchedulerPolicy& _Policy);
```

### <a name="parameters"></a>Parametri

*_Policy*<br/>
Criteri dell'utilità di pianificazione che descrivono il comportamento dell'utilità di pianificazione appena creata.

### <a name="remarks"></a>Commenti

L'allegato dell'utilità di pianificazione al contesto chiamante inserisce in modo implicito un conteggio dei riferimenti nell'utilità di pianificazione.

Dopo la creazione di un'utilità di pianificazione con il `Create` metodo, è necessario chiamare il metodo [CurrentScheduler::D etach](#detach) in un determinato momento in futuro, in modo da consentire l'arresto dell'utilità di pianificazione.

Se questo metodo viene chiamato da un contesto già associato a un'utilità di pianificazione diversa, l'utilità di pianificazione esistente viene memorizzata come utilità di pianificazione precedente e l'utilità di pianificazione appena creata diventa l'utilità di pianificazione corrente. Quando si chiama il `CurrentScheduler::Detach` metodo in un secondo momento, l'utilità di pianificazione precedente viene ripristinata come utilità di pianificazione corrente.

Questo metodo può generare un'ampia gamma di eccezioni, tra cui [scheduler_resource_allocation_error](scheduler-resource-allocation-error-class.md) e [invalid_scheduler_policy_value](invalid-scheduler-policy-value-class.md).

## <a name="createschedulegroup"></a><a name="createschedulegroup"></a> CreateScheduleGroup

Crea un nuovo gruppo di pianificazione nell'utilità di pianificazione associato al contesto chiamante. La versione che accetta il parametro `_Placement` determina la distorsione delle attività all'interno del gruppo di pianificazione appena creato per l'esecuzione nella posizione specificata da quel parametro.

```cpp
static ScheduleGroup* __cdecl CreateScheduleGroup();

static ScheduleGroup* __cdecl CreateScheduleGroup(location& _Placement);
```

### <a name="parameters"></a>Parametri

*_Placement*<br/>
Riferimento a un percorso in cui le attività all'interno del gruppo di pianificazione verranno distorte per l'esecuzione in.

### <a name="return-value"></a>Valore restituito

Puntatore al gruppo di pianificazione appena creato. `ScheduleGroup`Per questo oggetto è stato inserito un conteggio di riferimenti iniziale.

### <a name="remarks"></a>Commenti

Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata.

Al termine della pianificazione del lavoro, è necessario richiamare il metodo [Release](schedulegroup-class.md#release) in un gruppo di pianificazione. L'utilità di pianificazione eliminerà il gruppo pianificato dopo il completamento di tutto il lavoro in coda.

Si noti che se l'utilità di pianificazione è stata creata in modo esplicito, è necessario rilasciare tutti i riferimenti ai gruppi di pianificazione al suo interno, prima di rilasciare il riferimento nell'utilità di pianificazione, scollegando il contesto corrente.

## <a name="detach"></a><a name="detach"></a> Scollegare

Scollega l'utilità di pianificazione corrente dal contesto chiamante e ripristina l'utilità di pianificazione precedentemente associata come utilità di pianificazione corrente, se esistente. Dopo la restituzione di questo metodo, il contesto chiamante viene quindi gestito dall'utilità di pianificazione precedentemente collegata al contesto tramite il `CurrentScheduler::Create` metodo o `Scheduler::Attach` .

```cpp
static void __cdecl Detach();
```

### <a name="remarks"></a>Commenti

Il `Detach` metodo rimuove in modo implicito un conteggio dei riferimenti dall'utilità di pianificazione.

Se non è presente alcuna utilità di pianificazione collegata al contesto chiamante, la chiamata a questo metodo comporterà la generazione di un'eccezione [scheduler_not_attached](scheduler-not-attached-class.md) .

La chiamata di questo metodo da un contesto che è interno e gestito da un'utilità di pianificazione o da un contesto collegato tramite un metodo diverso dai metodi [Scheduler:: Attach](scheduler-class.md#attach) o [CurrentScheduler:: create](#create) , comporterà la generazione di un'eccezione [improper_scheduler_detach](improper-scheduler-detach-class.md) .

## <a name="get"></a><a name="get"></a> Ottieni

Restituisce un puntatore all'utilità di pianificazione associata al contesto chiamante, noto anche come utilità di pianificazione corrente.

```cpp
static Scheduler* __cdecl Get();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'utilità di pianificazione associata al contesto chiamante (l'utilità di pianificazione corrente).

### <a name="remarks"></a>Commenti

Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata. Nessun riferimento aggiuntivo viene inserito nell' `Scheduler` oggetto restituito da questo metodo.

## <a name="getnumberofvirtualprocessors"></a><a name="getnumberofvirtualprocessors"></a> GetNumberOfVirtualProcessors

Restituisce il numero corrente di processori virtuali per l'utilità di pianificazione associata al contesto chiamante.

```cpp
static unsigned int __cdecl GetNumberOfVirtualProcessors();
```

### <a name="return-value"></a>Valore restituito

Se un'utilità di pianificazione è associata al contesto chiamante, il numero corrente di processori virtuali per l'utilità di pianificazione; in caso contrario, il valore `-1` .

### <a name="remarks"></a>Commenti

Questo metodo non comporterà l'allegato dell'utilità di pianificazione se il contesto chiamante non è già associato a un'utilità di pianificazione.

Il valore restituito da questo metodo è un campionamento istantaneo del numero di processori virtuali per l'utilità di pianificazione associata al contesto chiamante. Questo valore può non essere aggiornato nel momento in cui viene restituito.

## <a name="getpolicy"></a><a name="getpolicy"></a> GetPolicy

Restituisce una copia del criterio con cui è stata creata l'utilità di pianificazione corrente.

```cpp
static SchedulerPolicy __cdecl GetPolicy();
```

### <a name="return-value"></a>Valore restituito

Una copia del criterio con cui è stata creata l'utilità di pianificazione corrente.

### <a name="remarks"></a>Commenti

Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata.

## <a name="id"></a><a name="id"></a> ID

Restituisce un identificatore univoco per l'utilità di pianificazione corrente.

```cpp
static unsigned int __cdecl Id();
```

### <a name="return-value"></a>Valore restituito

Se un'utilità di pianificazione è associata al contesto chiamante, un identificatore univoco per l'utilità di pianificazione; in caso contrario, il valore `-1` .

### <a name="remarks"></a>Commenti

Questo metodo non comporterà l'allegato dell'utilità di pianificazione se il contesto chiamante non è già associato a un'utilità di pianificazione.

## <a name="isavailablelocation"></a><a name="isavailablelocation"></a> IsAvailableLocation

Determina se una posizione specificata è disponibile nell'utilità di pianificazione corrente.

```cpp
static bool __cdecl IsAvailableLocation(const location& _Placement);
```

### <a name="parameters"></a>Parametri

*_Placement*<br/>
Riferimento alla posizione riguardo alla quale eseguire una query sull'utilità di pianificazione corrente.

### <a name="return-value"></a>Valore restituito

Indicazione dell'eventuale disponibilità della posizione specificata dall'argomento `_Placement` nell'utilità di pianificazione corrente.

### <a name="remarks"></a>Commenti

Questo metodo non comporterà l'allegato dell'utilità di pianificazione se il contesto chiamante non è già associato a un'utilità di pianificazione.

Si noti che il valore restituito è un campionamento istantaneo dell'eventuale disponibilità della posizione specificata. In presenza di più utilità di pianificazione, tramite la gestione delle risorse dinamiche è possibile aggiungere o sottrarre risorse dalle utilità di pianificazione in qualsiasi punto. In questo caso, la disponibilità della posizione specificata può cambiare.

## <a name="registershutdownevent"></a><a name="registershutdownevent"></a> RegisterShutdownEvent

Fa in modo che l'handle di evento di Windows passato nel `_ShutdownEvent` parametro venga segnalato quando l'utilità di pianificazione associata al contesto corrente viene arrestata e viene distrutta automaticamente. Nel momento in cui l'evento viene segnalato, tutto il lavoro pianificato per l'utilità di pianificazione è completo. Con questo metodo è possibile registrare più eventi di arresto.

```cpp
static void __cdecl RegisterShutdownEvent(HANDLE _ShutdownEvent);
```

### <a name="parameters"></a>Parametri

*_ShutdownEvent*<br/>
Handle per un oggetto evento di Windows che verrà segnalato dal runtime quando l'utilità di pianificazione associata al contesto corrente si arresta ed Elimina se stesso.

### <a name="remarks"></a>Commenti

Se non è presente alcuna utilità di pianificazione collegata al contesto chiamante, la chiamata a questo metodo comporterà la generazione di un'eccezione [scheduler_not_attached](scheduler-not-attached-class.md) .

## <a name="scheduletask"></a><a name="scheduletask"></a> ScheduleTask

Pianifica un'attività leggera nell'utilità di pianificazione associata al contesto chiamante. L'attività leggera sarà posizionata in un gruppo di pianificazione determinato dal runtime. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata.

```cpp
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
Puntatore alla funzione da eseguire per eseguire il corpo dell'attività leggera.

*_Data*<br/>
Puntatore void ai dati che verranno passati come parametro al corpo dell'attività.

*_Placement*<br/>
Riferimento a una posizione in cui per l'attività leggera verrà data priorità all'esecuzione.

### <a name="remarks"></a>Commenti

Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe Scheduler](scheduler-class.md)<br/>
[PolicyElementKey](concurrency-namespace-enums.md)<br/>
[Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)
