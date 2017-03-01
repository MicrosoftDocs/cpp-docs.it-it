---
title: ScheduleGroup (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- concrt/concurrency::ScheduleGroup
dev_langs:
- C++
helpviewer_keywords:
- ScheduleGroup class
ms.assetid: 86d380ff-f2e8-411c-b1a8-22bd3079824a
caps.latest.revision: 20
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
ms.openlocfilehash: 424b2f53f39bce57c85e44f0df54928acdac399a
ms.lasthandoff: 02/24/2017

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
|[ID (metodo)](#id)|Restituisce un identificatore per il gruppo di pianificazione che è univoco all'interno di utilità di pianificazione a cui appartiene il gruppo.|  
|[Reference (metodo)](#reference)|Incrementa il conteggio riferimenti del gruppo di pianificazione.|  
|[Release (metodo)](#release)|Decrementa il conteggio dei riferimenti del gruppo di pianificazione.|  
|[ScheduleTask (metodo)](#scheduletask)|Pianifica un'attività leggera all'interno del gruppo di pianificazione.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ScheduleGroup`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-nameida-id"></a><a name="id"></a>ID 

 Restituisce un identificatore per il gruppo di pianificazione che è univoco all'interno di utilità di pianificazione a cui appartiene il gruppo.  
  
```
virtual unsigned int Id() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore per il gruppo di pianificazione che è univoco all'interno di utilità di pianificazione a cui appartiene il gruppo.  
  
##  <a name="a-nameoperatordeletea-operator-delete"></a><a name="operator_delete"></a>operatore delete 

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
 Puntatore all'oggetto da eliminare.  
  
##  <a name="a-namereferencea-reference"></a><a name="reference"></a>Riferimento 

 Incrementa il conteggio riferimenti del gruppo di pianificazione.  
  
```
virtual unsigned int Reference() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il conteggio dei riferimenti appena incrementato.  
  
### <a name="remarks"></a>Note  
 Viene in genere utilizzato per gestire la durata del gruppo di pianificazione per la composizione. Quando il conteggio dei riferimenti di un gruppo di pianificazione scende a zero, il gruppo di pianificazione viene eliminato dal runtime. Un gruppo di pianificazione creato utilizzando il [CurrentScheduler:: CreateScheduleGroup](currentscheduler-class.md#createschedulegroup) (metodo), o [Scheduler:: CreateScheduleGroup](scheduler-class.md#createschedulegroup) metodo inizia con un conteggio dei riferimenti di uno.  
  
##  <a name="a-namereleasea-release"></a><a name="release"></a>Versione 

 Decrementa il conteggio dei riferimenti del gruppo di pianificazione.  
  
```
virtual unsigned int Release() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il conteggio dei riferimenti appena decrementato.  
  
### <a name="remarks"></a>Note  
 Viene in genere utilizzato per gestire la durata del gruppo di pianificazione per la composizione. Quando il conteggio dei riferimenti di un gruppo di pianificazione scende a zero, il gruppo di pianificazione viene eliminato dal runtime. Dopo aver chiamato il metodo `Release` per il numero specifico di volte per rimuovere il conteggio riferimenti di creazione e qualsiasi riferimento aggiuntivo inserito utilizzando il metodo `Reference`, non è possibile utilizzare ulteriormente il gruppo di pianificazione. Questa operazione provocherà un comportamento non definito.  
  
 Un gruppo di pianificazione è associato a un'istanza di utilità di pianificazione specifica. È necessario assicurarsi che tutti i riferimenti al gruppo di pianificazione vengano rilasciati prima del rilascio di tutti i riferimenti all'utilità di pianificazione, poiché questi ultimi potrebbero provocare la distruzione dell'utilità di pianificazione. In caso contrario potrebbe un comportamento non definito.  
  
##  <a name="a-namedtora-schedulegroup"></a><a name="dtor"></a>~ ScheduleGroup 

```
virtual ~ScheduleGroup();
```  
  
##  <a name="a-namescheduletaska-scheduletask"></a><a name="scheduletask"></a>ScheduleTask 

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
 Un puntatore void per i dati che verranno passati come parametro nel corpo dell'attività.  
  
### <a name="remarks"></a>Note  
 La chiamata di `ScheduleTask` metodo inserisce in modo implicito un conteggio dei riferimenti nel gruppo di pianificazione che è stata rimossa dal runtime in un momento appropriato dopo l'esecuzione dell'attività.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [CurrentScheduler (classe)](currentscheduler-class.md)   
 [Scheduler (classe)](scheduler-class.md)   
 [Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)




