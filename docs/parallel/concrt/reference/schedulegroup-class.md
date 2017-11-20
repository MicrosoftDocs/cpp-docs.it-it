---
title: Classe ScheduleGroup | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ScheduleGroup
- CONCRT/concurrency::ScheduleGroup
- CONCRT/concurrency::ScheduleGroup::Id
- CONCRT/concurrency::ScheduleGroup::Reference
- CONCRT/concurrency::ScheduleGroup::Release
- CONCRT/concurrency::ScheduleGroup::ScheduleTask
dev_langs: C++
helpviewer_keywords: ScheduleGroup class
ms.assetid: 86d380ff-f2e8-411c-b1a8-22bd3079824a
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: ac169e7cc01682b8ecd0dc4fb5dd387f3be38504
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="schedulegroup-class"></a>Classe ScheduleGroup
Rappresenta un'astrazione per un gruppo di pianificazione. I gruppi di pianificazione organizzano un set di lavoro correlato che trae vantaggio da una chiusura pianificata a livello temporaneo, eseguendo un'altra attività nello stesso gruppo prima di spostarsi in un altro gruppo, o a livello spaziale, eseguendo più elementi all'interno dello stesso gruppo sullo stesso nodo NUMA o sul socket fisico.  
  
## <a name="syntax"></a>Sintassi  
  
```
class ScheduleGroup;
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[~ Distruttore ScheduleGroup](#dtor)||  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ID](#id)|Restituisce un identificatore per il gruppo di pianificazione che è univoco all'interno di utilità di pianificazione a cui appartiene il gruppo.|  
|[Riferimento](#reference)|Incrementa il conteggio riferimenti del gruppo di pianificazione.|  
|[Rilascio](#release)|Decrementa il conteggio dei riferimenti del gruppo di pianificazione.|  
|[ScheduleTask](#scheduletask)|Pianifica un'attività leggera all'interno del gruppo di pianificazione.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ScheduleGroup`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="id"></a>ID 

 Restituisce un identificatore per il gruppo di pianificazione che è univoco all'interno di utilità di pianificazione a cui appartiene il gruppo.  
  
```
virtual unsigned int Id() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore per il gruppo di pianificazione che è univoco all'interno di utilità di pianificazione a cui appartiene il gruppo.  
  
##  <a name="operator_delete"></a>operatore delete 

 Oggetto `ScheduleGroup` oggetto sia distrutto internamente dal runtime quando vengono rilasciati tutti i riferimenti esterni a esso. Non è possibile eliminarlo in modo esplicito.  
  
```
void operator delete(
    void* _PObject);

void operator delete(
    void* _PObject,
    int,
 const char *,
    int);
```    
  
### <a name="parameters"></a>Parametri  
 `_PObject`  
 Un puntatore all'oggetto da eliminare.  
  
##  <a name="reference"></a>Riferimento 

 Incrementa il conteggio riferimenti del gruppo di pianificazione.  
  
```
virtual unsigned int Reference() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il conteggio dei riferimenti appena incrementato.  
  
### <a name="remarks"></a>Note  
 Viene in genere utilizzato per gestire la durata del gruppo di pianificazione per la composizione. Quando il conteggio dei riferimenti di un gruppo di pianificazione scende a zero, il gruppo di pianificazione viene eliminato dal runtime. Un gruppo di pianificazione creato utilizzando il [CurrentScheduler:: CreateScheduleGroup](currentscheduler-class.md#createschedulegroup) metodo, o [Scheduler:: CreateScheduleGroup](scheduler-class.md#createschedulegroup) metodo inizia con un conteggio dei riferimenti di uno.  
  
##  <a name="release"></a>Versione 

 Decrementa il conteggio dei riferimenti del gruppo di pianificazione.  
  
```
virtual unsigned int Release() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il conteggio dei riferimenti appena decrementato.  
  
### <a name="remarks"></a>Note  
 Viene in genere utilizzato per gestire la durata del gruppo di pianificazione per la composizione. Quando il conteggio dei riferimenti di un gruppo di pianificazione scende a zero, il gruppo di pianificazione viene eliminato dal runtime. Dopo aver chiamato il metodo `Release` per il numero specifico di volte per rimuovere il conteggio riferimenti di creazione e qualsiasi riferimento aggiuntivo inserito utilizzando il metodo `Reference`, non è possibile utilizzare ulteriormente il gruppo di pianificazione. Questa operazione provocherà un comportamento indefinito.  
  
 Un gruppo di pianificazione è associato a un'istanza di utilità di pianificazione specifica. È necessario assicurarsi che tutti i riferimenti al gruppo di pianificazione vengano rilasciati prima del rilascio di tutti i riferimenti all'utilità di pianificazione, poiché questi ultimi potrebbero provocare la distruzione dell'utilità di pianificazione. In caso contrario potrebbe un comportamento indefinito.  
  
##  <a name="dtor"></a>~ ScheduleGroup 

```
virtual ~ScheduleGroup();
```  
  
##  <a name="scheduletask"></a>ScheduleTask 

 Pianifica un'attività leggera all'interno del gruppo di pianificazione.  
  
```
virtual void ScheduleTask(
    TaskProc _Proc,
    _Inout_opt_ void* _Data) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_Proc`  
 Puntatore alla funzione da eseguire per utilizzare il corpo dell'attività leggera.  
  
 `_Data`  
 Un puntatore void per i dati che verranno passati come parametro per il corpo dell'attività.  
  
### <a name="remarks"></a>Note  
 La chiamata di `ScheduleTask` metodo posiziona in modo implicito un conteggio dei riferimenti nel gruppo di pianificazione che è stata rimossa dal runtime in un momento appropriato dopo l'esecuzione dell'attività.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe CurrentScheduler](currentscheduler-class.md)   
 [Classe di utilità di pianificazione](scheduler-class.md)   
 [Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)



