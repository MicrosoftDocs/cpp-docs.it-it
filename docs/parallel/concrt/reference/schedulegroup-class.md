---
title: Classe ScheduleGroup
ms.date: 11/04/2016
f1_keywords:
- ScheduleGroup
- CONCRT/concurrency::ScheduleGroup
- CONCRT/concurrency::ScheduleGroup::Id
- CONCRT/concurrency::ScheduleGroup::Reference
- CONCRT/concurrency::ScheduleGroup::Release
- CONCRT/concurrency::ScheduleGroup::ScheduleTask
helpviewer_keywords:
- ScheduleGroup class
ms.assetid: 86d380ff-f2e8-411c-b1a8-22bd3079824a
ms.openlocfilehash: 8686b5ef0906e3188a1e683d1190bbe6124cd19e
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79417131"
---
# <a name="schedulegroup-class"></a>Classe ScheduleGroup

Rappresenta un'astrazione per un gruppo di pianificazione. I gruppi di pianificazione organizzano un set di lavoro correlato che trae vantaggio da una chiusura pianificata a livello temporaneo, eseguendo un'altra attività nello stesso gruppo prima di spostarsi in un altro gruppo, o a livello spaziale, eseguendo più elementi all'interno dello stesso gruppo sullo stesso nodo NUMA o sul socket fisico.

## <a name="syntax"></a>Sintassi

```cpp
class ScheduleGroup;
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[Distruttore ~ ScheduleGroup](#dtor)||

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Id](#id)|Restituisce un identificatore per il gruppo di pianificazione che è univoco all'interno dell'utilità di pianificazione a cui appartiene il gruppo.|
|[Riferimento](#reference)|Incrementa il conteggio riferimenti del gruppo di pianificazione.|
|[Versione](#release)|Decrementa il conteggio dei riferimenti del gruppo di pianificazione.|
|[ScheduleTask](#scheduletask)|Pianifica un'attività leggera all'interno del gruppo di pianificazione.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ScheduleGroup`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="id"></a>ID

Restituisce un identificatore per il gruppo di pianificazione che è univoco all'interno dell'utilità di pianificazione a cui appartiene il gruppo.

```cpp
virtual unsigned int Id() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore per il gruppo di pianificazione che è univoco all'interno dell'utilità di pianificazione a cui appartiene il gruppo.

## <a name="operator_delete"></a>operatore delete

Un oggetto `ScheduleGroup` viene eliminato internamente dal runtime quando vengono rilasciati tutti i riferimenti esterni. Non è possibile eliminarlo in modo esplicito.

```cpp
void operator delete(
    void* _PObject);

void operator delete(
    void* _PObject,
    int,
const char *,
    int);
```

### <a name="parameters"></a>Parametri

*_PObject*<br/>
Puntatore all'oggetto da eliminare.

## <a name="reference"></a>Riferimento

Incrementa il conteggio riferimenti del gruppo di pianificazione.

```cpp
virtual unsigned int Reference() = 0;
```

### <a name="return-value"></a>Valore restituito

Conteggio dei riferimenti appena incrementato.

### <a name="remarks"></a>Osservazioni

Questa operazione viene in genere utilizzata per gestire la durata del gruppo di pianificazione per la composizione. Quando il conteggio dei riferimenti di un gruppo di pianificazione scende a zero, il gruppo di pianificazione viene eliminato dal runtime. Un gruppo di pianificazione creato tramite il metodo [CurrentScheduler:: CreateScheduleGroup](currentscheduler-class.md#createschedulegroup) o il metodo [Scheduler:: CreateScheduleGroup](scheduler-class.md#createschedulegroup) inizia con un conteggio dei riferimenti di uno.

## <a name="release"></a>Versione

Decrementa il conteggio dei riferimenti del gruppo di pianificazione.

```cpp
virtual unsigned int Release() = 0;
```

### <a name="return-value"></a>Valore restituito

Conteggio dei riferimenti appena decrementato.

### <a name="remarks"></a>Osservazioni

Questa operazione viene in genere utilizzata per gestire la durata del gruppo di pianificazione per la composizione. Quando il conteggio dei riferimenti di un gruppo di pianificazione scende a zero, il gruppo di pianificazione viene eliminato dal runtime. Dopo aver chiamato il metodo `Release` per il numero specifico di volte per rimuovere il conteggio riferimenti di creazione e qualsiasi riferimento aggiuntivo inserito utilizzando il metodo `Reference`, non è possibile utilizzare ulteriormente il gruppo di pianificazione. Questa operazione comporterà un comportamento indefinito.

Un gruppo di pianificazione è associato a una particolare istanza dell'utilità di pianificazione. È necessario assicurarsi che tutti i riferimenti al gruppo di pianificazione vengano rilasciati prima del rilascio di tutti i riferimenti all'utilità di pianificazione, poiché questi ultimi potrebbero provocare la distruzione dell'utilità di pianificazione. In caso contrario, viene restituito un comportamento non definito.

## <a name="dtor"></a>~ ScheduleGroup

```cpp
virtual ~ScheduleGroup();
```

## <a name="scheduletask"></a>ScheduleTask

Pianifica un'attività leggera all'interno del gruppo di pianificazione.

```cpp
virtual void ScheduleTask(
    TaskProc _Proc,
    _Inout_opt_ void* _Data) = 0;
```

### <a name="parameters"></a>Parametri

*_Proc*<br/>
Puntatore alla funzione da eseguire per eseguire il corpo dell'attività leggera.

*_Data*<br/>
Puntatore void ai dati che verranno passati come parametro al corpo dell'attività.

### <a name="remarks"></a>Osservazioni

La chiamata al metodo `ScheduleTask` inserisce in modo implicito un conteggio dei riferimenti nel gruppo di pianificazione che viene rimosso dal runtime in un momento appropriato dopo l'esecuzione dell'attività.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe CurrentScheduler](currentscheduler-class.md)<br/>
[Classe Scheduler](scheduler-class.md)<br/>
[Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)
