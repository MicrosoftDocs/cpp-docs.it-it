---
title: Classe CurrentScheduler | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d973b9ad7c5c7f81b5db85b3f8c5ccc49b5049b0
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
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
|[Creare](#create)|Crea una nuova utilità di pianificazione il cui comportamento è descritto il `_Policy` parametro e lo associa al contesto di chiamata. L'utilità di pianificazione appena creato sarà l'utilità di pianificazione corrente per il contesto di chiamata.|  
|[CreateScheduleGroup](#createschedulegroup)|Di overload. Crea un nuovo gruppo di pianificazione in utilità di pianificazione associata al contesto di chiamata. La versione che accetta il parametro `_Placement` fa sì che le attività all'interno del gruppo di pianificazione appena creata venga data priorità all'esecuzione nella posizione specificata da quel parametro.|  
|[Detach](#detach)|Disconnette l'utilità di pianificazione corrente dal contesto di chiamata e ripristina l'utilità di pianificazione associata in precedenza come utilità di pianificazione corrente, se presente. Dopo che questo metodo restituisce, il contesto di chiamata viene quindi gestito dall'utilità di pianificazione che in precedenza era associato al contesto utilizzando il `CurrentScheduler::Create` o `Scheduler::Attach` metodo.|  
|[Get](#get)|Restituisce un puntatore all'utilità di pianificazione associata al contesto di chiamata, detto anche l'utilità di pianificazione corrente.|  
|[GetNumberOfVirtualProcessors](#getnumberofvirtualprocessors)|Restituisce il numero corrente di processori virtuali per l'utilità di pianificazione associata al contesto di chiamata.|  
|[GetPolicy](#getpolicy)|Restituisce una copia del criterio creato con l'utilità di pianificazione corrente.|  
|[Id](#id)|Restituisce un identificatore univoco per l'utilità di pianificazione corrente.|  
|[IsAvailableLocation](#isavailablelocation)|Determina se una posizione specificata è disponibile nell'utilità di pianificazione corrente.|  
|[RegisterShutdownEvent](#registershutdownevent)|Cause passato l'handle di evento di `_ShutdownEvent` parametro venga segnalato quando viene chiuso e si distrugge l'utilità di pianificazione associata al contesto corrente. Al momento che l'evento viene segnalato, tutte le operazioni che è stata pianificata per l'utilità di pianificazione sono stata completata. Tramite questo metodo è possibile registrare più eventi di arresto.|  
|[ScheduleTask](#scheduletask)|Di overload. Pianifica un'attività leggera all'interno di utilità di pianificazione associata al contesto di chiamata. L'attività leggera sarà posizionata in un gruppo di pianificazione determinato dal runtime. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata.|  
  
## <a name="remarks"></a>Note  
 Se è presente alcuna utilità di pianificazione (vedere [dell'utilità di pianificazione](scheduler-class.md)) associato al contesto di chiamata, molti metodi all'interno di `CurrentScheduler` classe comporterà allegato dell'utilità di pianificazione predefinita del processo. Ciò può implicare l'utilità di pianificazione predefinita del processo viene creato durante la chiamata.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CurrentScheduler`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="create"></a> Creare 

 Crea una nuova utilità di pianificazione il cui comportamento è descritto il `_Policy` parametro e lo associa al contesto di chiamata. L'utilità di pianificazione appena creato sarà l'utilità di pianificazione corrente per il contesto di chiamata.  
  
```
static void __cdecl Create(const SchedulerPolicy& _Policy);
```  
  
### <a name="parameters"></a>Parametri  
 `_Policy`  
 I criteri dell'utilità di pianificazione che descrive il comportamento dell'utilità di pianificazione appena creata.  
  
### <a name="remarks"></a>Note  
 L'allegato dell'utilità di pianificazione nel contesto di chiamata posiziona in modo implicito un conteggio dei riferimenti nell'utilità di pianificazione.  
  
 Dopo la creazione di un'utilità di pianificazione con il `Create` (metodo), è necessario chiamare il [CurrentScheduler:: Detach](#detach) metodo a un certo punto in futuro per consentire l'arresto dell'utilità di pianificazione.  
  
 Se questo metodo viene chiamato da un contesto che è già collegato a una pianificazione diversa, l'utilità di pianificazione esistente viene memorizzata come utilità di pianificazione precedente e l'utilità di pianificazione appena creato diventa l'utilità di pianificazione corrente. Quando si chiama il `CurrentScheduler::Detach` metodo in un secondo momento, l'utilità di pianificazione precedente viene ripristinato come utilità di pianificazione corrente.  
  
 Questo metodo può generare un'ampia gamma di eccezioni, incluse [scheduler_resource_allocation_error](scheduler-resource-allocation-error-class.md) e [invalid_scheduler_policy_value](invalid-scheduler-policy-value-class.md).  
  
##  <a name="createschedulegroup"></a> CreateScheduleGroup 

 Crea un nuovo gruppo di pianificazione in utilità di pianificazione associata al contesto di chiamata. La versione che accetta il parametro `_Placement` fa sì che le attività all'interno del gruppo di pianificazione appena creata venga data priorità all'esecuzione nella posizione specificata da quel parametro.  
  
```
static ScheduleGroup* __cdecl CreateScheduleGroup();

static ScheduleGroup* __cdecl CreateScheduleGroup(location& _Placement);
```  
  
### <a name="parameters"></a>Parametri  
 `_Placement`  
 Un riferimento a una posizione in cui le attività all'interno del gruppo di pianificazione verranno data priorità all'esecuzione.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al gruppo di pianificazione appena creata. Questo `ScheduleGroup` oggetto ha un conteggio dei riferimenti iniziali.  
  
### <a name="remarks"></a>Note  
 Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata.  
  
 È necessario richiamare il [versione](schedulegroup-class.md#release) metodo su un gruppo di pianificazione di una volta la pianificazione del lavoro a esso. L'utilità di pianificazione eliminerà la pianificazione di gruppo quando tutto il lavoro in coda a esso è stata completata.  
  
 Si noti che, se è stato creato in modo esplicito questa utilità di pianificazione, è necessario rilasciare tutti i riferimenti ai gruppi all'interno di esso, di pianificazione prima di rilasciare il riferimento nell'utilità di pianificazione, scollegare il contesto corrente da esso.  
  
##  <a name="detach"></a> Disconnetti 

 Disconnette l'utilità di pianificazione corrente dal contesto di chiamata e ripristina l'utilità di pianificazione associata in precedenza come utilità di pianificazione corrente, se presente. Dopo che questo metodo restituisce, il contesto di chiamata viene quindi gestito dall'utilità di pianificazione che in precedenza era associato al contesto utilizzando il `CurrentScheduler::Create` o `Scheduler::Attach` metodo.  
  
```
static void __cdecl Detach();
```  
  
### <a name="remarks"></a>Note  
 Il `Detach` metodo rimuove in modo implicito un conteggio dei riferimenti dall'utilità di pianificazione.  
  
 Se è presente alcuna utilità di pianificazione associata al contesto di chiamata, questo metodo comporterà un [scheduler_not_attached](scheduler-not-attached-class.md) venga generata un'eccezione.  
  
 Chiamare questo metodo da un contesto è interno ed è gestito da un'utilità di pianificazione o un contesto che è stato collegato con un metodo diverso di [Scheduler:: Attach](scheduler-class.md#attach) o [CurrentScheduler:: Create](#create) metodi, comporterà un [improper_scheduler_detach](improper-scheduler-detach-class.md) venga generata un'eccezione.  
  
##  <a name="get"></a> Ottieni 

 Restituisce un puntatore all'utilità di pianificazione associata al contesto di chiamata, detto anche l'utilità di pianificazione corrente.  
  
```
static Scheduler* __cdecl Get();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'utilità di pianificazione associata al contesto di chiamata (utilità di pianificazione corrente).  
  
### <a name="remarks"></a>Note  
 Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata. Nessun riferimento aggiuntivo viene posizionato sul `Scheduler` oggetto restituito da questo metodo.  
  
##  <a name="getnumberofvirtualprocessors"></a> GetNumberOfVirtualProcessors 

 Restituisce il numero corrente di processori virtuali per l'utilità di pianificazione associata al contesto di chiamata.  
  
```
static unsigned int __cdecl GetNumberOfVirtualProcessors();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se un'utilità di pianificazione è associata al contesto di chiamata, il numero corrente di processori virtuali per l'utilità di pianificazione; in caso contrario, il valore `-1`.  
  
### <a name="remarks"></a>Note  
 Questo metodo non comporterà allegato dell'utilità di pianificazione se il contesto di chiamata non è già associato a un'utilità di pianificazione.  
  
 Il valore restituito da questo metodo è un campionamento istantaneo del numero di processori virtuali per l'utilità di pianificazione associata al contesto di chiamata. Questo valore può non essere aggiornato nel momento in cui viene restituito.  
  
##  <a name="getpolicy"></a> GetPolicy 

 Restituisce una copia del criterio creato con l'utilità di pianificazione corrente.  
  
```
static SchedulerPolicy __cdecl GetPolicy();
```  
  
### <a name="return-value"></a>Valore restituito  
 Una copia dei criteri che è stato creato con l'utilità di pianificazione corrente.  
  
### <a name="remarks"></a>Note  
 Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata.  
  
##  <a name="id"></a> Id 

 Restituisce un identificatore univoco per l'utilità di pianificazione corrente.  
  
```
static unsigned int __cdecl Id();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se un'utilità di pianificazione è associata al contesto di chiamata, un identificatore univoco per l'utilità di pianificazione; in caso contrario, il valore `-1`.  
  
### <a name="remarks"></a>Note  
 Questo metodo non comporterà allegato dell'utilità di pianificazione se il contesto di chiamata non è già associato a un'utilità di pianificazione.  
  
##  <a name="isavailablelocation"></a> IsAvailableLocation 

 Determina se una posizione specificata è disponibile nell'utilità di pianificazione corrente.  
  
```
static bool __cdecl IsAvailableLocation(const location& _Placement);
```  
  
### <a name="parameters"></a>Parametri  
 `_Placement`  
 Riferimento alla posizione riguardo alla quale eseguire una query sull'utilità di pianificazione corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Indicazione dell'eventuale disponibilità della posizione specificata dall'argomento `_Placement` nell'utilità di pianificazione corrente.  
  
### <a name="remarks"></a>Note  
 Questo metodo non comporterà allegato dell'utilità di pianificazione se il contesto di chiamata non è già associato a un'utilità di pianificazione.  
  
 Si noti che il valore restituito è un campionamento istantaneo dell'eventuale disponibilità della posizione specificata. In presenza di più utilità di pianificazione, tramite la gestione delle risorse dinamiche è possibile aggiungere o sottrarre risorse dalle utilità di pianificazione in qualsiasi punto. In questo caso, la disponibilità della posizione specificata può cambiare.  
  
##  <a name="registershutdownevent"></a> RegisterShutdownEvent 

 Cause passato l'handle di evento di `_ShutdownEvent` parametro venga segnalato quando viene chiuso e si distrugge l'utilità di pianificazione associata al contesto corrente. Al momento che l'evento viene segnalato, tutte le operazioni che è stata pianificata per l'utilità di pianificazione sono stata completata. Tramite questo metodo è possibile registrare più eventi di arresto.  
  
```
static void __cdecl RegisterShutdownEvent(HANDLE _ShutdownEvent);
```  
  
### <a name="parameters"></a>Parametri  
 `_ShutdownEvent`  
 Un handle a un oggetto evento di Windows che verrà segnalato dal runtime quando l'utilità di pianificazione associata al contesto corrente viene chiuso e distrugge.  
  
### <a name="remarks"></a>Note  
 Se è presente alcuna utilità di pianificazione associata al contesto di chiamata, questo metodo comporterà un [scheduler_not_attached](scheduler-not-attached-class.md) venga generata un'eccezione.  
  
##  <a name="scheduletask"></a> ScheduleTask 

 Pianifica un'attività leggera all'interno di utilità di pianificazione associata al contesto di chiamata. L'attività leggera sarà posizionata in un gruppo di pianificazione determinato dal runtime. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata.  
  
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
 `_Proc`  
 Puntatore alla funzione da eseguire per utilizzare il corpo dell'attività leggera.  
  
 `_Data`  
 Un puntatore void per i dati che verranno passati come parametro per il corpo dell'attività.  
  
 `_Placement`  
 Riferimento a una posizione in cui per l'attività leggera verrà data priorità all'esecuzione.  
  
### <a name="remarks"></a>Note  
 Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe di utilità di pianificazione](scheduler-class.md)   
 [PolicyElementKey](concurrency-namespace-enums.md)   
 [Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)



