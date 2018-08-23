---
title: Classe del contesto | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- Context
- CONCRT/concurrency::Context
- CONCRT/concurrency::Context::Block
- CONCRT/concurrency::Context::CurrentContext
- CONCRT/concurrency::Context::GetId
- CONCRT/concurrency::Context::GetScheduleGroupId
- CONCRT/concurrency::Context::GetVirtualProcessorId
- CONCRT/concurrency::Context::Id
- CONCRT/concurrency::Context::IsCurrentTaskCollectionCanceling
- CONCRT/concurrency::Context::IsSynchronouslyBlocked
- CONCRT/concurrency::Context::Oversubscribe
- CONCRT/concurrency::Context::ScheduleGroupId
- CONCRT/concurrency::Context::Unblock
- CONCRT/concurrency::Context::VirtualProcessorId
- CONCRT/concurrency::Context::Yield
dev_langs:
- C++
helpviewer_keywords:
- Context class
ms.assetid: c0d553f3-961d-4ecd-9a29-4fa4351673b8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c21ce766ed809a93ccf617ab1f76c438ac5be829
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42541023"
---
# <a name="context-class"></a>Classe Context
Rappresenta un'astrazione per un contesto di esecuzione.  
  
## <a name="syntax"></a>Sintassi  
  
```
class Context;
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[~ Distruttore contesto](#dtor)||  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Blocco](#block)|Blocca il contesto corrente.|  
|[CurrentContext](#currentcontext)|Restituisce un puntatore al contesto corrente.|  
|[GetId](#getid)|Restituisce un identificatore per il contesto che è univoco all'interno di utilità di pianificazione a cui appartiene il contesto.|  
|[GetScheduleGroupId](#getschedulegroupid)|Restituisce un identificatore per il gruppo di pianificazione che sta utilizzando il contesto.|  
|[GetVirtualProcessorId](#getvirtualprocessorid)|Restituisce un identificatore per il processore virtuale attualmente in esecuzione nel contesto.|  
|[Id](#id)|Restituisce un identificatore per il contesto corrente che è univoco all'interno di utilità di pianificazione a cui appartiene il contesto corrente.|  
|[IsCurrentTaskCollectionCanceling](#iscurrenttaskcollectioncanceling)|Restituisce un valore che indica se la raccolta di attività attualmente in esecuzione inline sul contesto corrente si trova nel mezzo di un annullamento attivo o sarà a breve.|  
|[IsSynchronouslyBlocked](#issynchronouslyblocked)|Determina se il contesto è bloccato in modo sincrono. Viene considerato come un contesto bloccato in modo sincrono se eseguito in modo esplicito un'azione che ha portato a blocco.|  
|[Abilitare l'oversubscription](#oversubscribe)|Inserisce un altro processore virtuale in un'utilità di pianificazione per la durata di un blocco di codice quando viene richiamato in un contesto di esecuzione in uno dei processori virtuali in tale utilità di pianificazione.|  
|[ScheduleGroupId](#schedulegroupid)|Restituisce un identificatore per il gruppo di pianificazione che sta lavorando per il contesto corrente.|  
|[Sblocco](#unblock)|Sblocca il contesto e lo rende eseguibile.|  
|[VirtualProcessorId](#virtualprocessorid)|Restituisce un identificatore per il processore virtuale è in esecuzione nel contesto corrente.|  
|[Yield](#yield)|Restituisce l'esecuzione in modo da poter eseguire un altro contesto. Se non è disponibile un altro contesto a cui cedere l'esecuzione, l'utilità di pianificazione può cedere l'esecuzione a un altro thread del sistema operativo.|  
  
## <a name="remarks"></a>Note  
 L'utilità di pianificazione del Runtime di concorrenza (vedere [utilità di pianificazione](scheduler-class.md)) contesti di esecuzione viene utilizzato per eseguire le operazioni accodate a esso da parte dell'applicazione. Un thread Win32 è riportato un esempio di un contesto di esecuzione in un sistema operativo Windows.  
  
 In qualsiasi momento, il livello di concorrenza un'utilità di pianificazione è uguale al numero di processori virtuali concesse da Gestione risorse. Un processore virtuale è un'astrazione per una risorsa di elaborazione e viene mappato a un thread hardware sul sistema sottostante. Solo un contesto dell'utilità di pianificazione singola può eseguire su un processore virtuale in un determinato momento.  
  
 L'utilità di pianificazione è cooperativa di natura e un contesto di esecuzione può restituire il processore virtuale per un contesto diverso in qualsiasi momento se desidera passare a uno stato di attesa. Durante l'attesa soddisfatta, è possibile ripristinarlo fino all'inizio di un processore virtuale disponibile dall'utilità di pianificazione dell'esecuzione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Context`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="block"></a> Block 

 Blocca il contesto corrente.  
  
```
static void __cdecl Block();
```  
  
### <a name="remarks"></a>Note  
 Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata.  
  
 Se il contesto di chiamata è in esecuzione su un processore virtuale, il processore virtuale troverà un altro contesto eseguibile per l'esecuzione o possono potenzialmente crearne uno nuovo.  
  
 Dopo il `Block` metodo è stato chiamato o verrà chiamato, è necessario abbinarlo a una chiamata ai [Unblock](#unblock) metodo dal contesto di esecuzione un altro affinché possa eseguire di nuovo. Tenere presente che vi sia un periodo critico tra il punto in cui il codice pubblica il relativo contesto di un altro thread essere in grado di chiamare il `Unblock` metodo e il punto in cui il chiamata effettiva al metodo `Block` viene eseguita. Durante questo periodo, non deve essere chiamare alcun metodo che può a sua volta bloccarsi e sbloccarsi per motivi propri (ad esempio acquisendo un blocco). Le chiamate al `Block` e `Unblock` metodo non rilevare il motivo del blocco e sblocco. Un solo oggetto deve avere la proprietà di un `Block` -  `Unblock` coppia.  
  
 Questo metodo può generare un'ampia gamma di eccezioni, incluse [scheduler_resource_allocation_error](scheduler-resource-allocation-error-class.md).  
  
##  <a name="dtor"></a> ~Context 

```
virtual ~Context();
```  
  
##  <a name="currentcontext"></a> CurrentContext 

 Restituisce un puntatore al contesto corrente.  
  
```
static Context* __cdecl CurrentContext();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al contesto corrente.  
  
### <a name="remarks"></a>Note  
 Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata.  
  
##  <a name="getid"></a> GetId 

 Restituisce un identificatore per il contesto che è univoco all'interno di utilità di pianificazione a cui appartiene il contesto.  
  
```
virtual unsigned int GetId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore per il contesto che è univoco all'interno di utilità di pianificazione a cui appartiene il contesto.  
  
##  <a name="getschedulegroupid"></a> GetScheduleGroupId 

 Restituisce un identificatore per il gruppo di pianificazione che sta utilizzando il contesto.  
  
```
virtual unsigned int GetScheduleGroupId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore per il gruppo di pianificazione il contesto sta attualmente lavorando.  
  
### <a name="remarks"></a>Note  
 Il valore restituito da questo metodo è un campionamento istantaneo del gruppo di pianificazione che è in esecuzione nel contesto. Se questo metodo viene chiamato in un contesto diverso da quello corrente, è possibile che il valore non sia aggiornato nel momento in cui viene restituito e potrebbe non essere affidabile. In genere, questo metodo viene utilizzato per il debug o solo a scopo di analisi.  
  
##  <a name="getvirtualprocessorid"></a> GetVirtualProcessorId 

 Restituisce un identificatore per il processore virtuale attualmente in esecuzione nel contesto.  
  
```
virtual unsigned int GetVirtualProcessorId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il contesto è in esecuzione su un processore virtuale, un identificatore per il processore virtuale che il contesto è attualmente in esecuzione; in caso contrario, il valore `-1`.  
  
### <a name="remarks"></a>Note  
 Il valore restituito da questo metodo è un campionamento istantaneo del processore virtuale è in esecuzione nel contesto. Questo valore può essere non aggiornato nel momento in cui viene restituito e non può essere ritenuto affidabile. In genere, questo metodo viene utilizzato per il debug o solo a scopo di analisi.  
  
##  <a name="id"></a> Id 

 Restituisce un identificatore per il contesto corrente che è univoco all'interno di utilità di pianificazione a cui appartiene il contesto corrente.  
  
```
static unsigned int __cdecl Id();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il contesto corrente è collegato a un'utilità di pianificazione, un identificatore per il contesto corrente che è univoco all'interno di utilità di pianificazione a cui appartiene il contesto corrente. in caso contrario, il valore `-1`.  
  
##  <a name="iscurrenttaskcollectioncanceling"></a> IsCurrentTaskCollectionCanceling 

 Restituisce un valore che indica se la raccolta di attività attualmente in esecuzione inline sul contesto corrente si trova nel mezzo di un annullamento attivo o sarà a breve.  
  
```
static bool __cdecl IsCurrentTaskCollectionCanceling();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se un'utilità di pianificazione è associato al contesto del chiamante e un gruppo di attività è in esecuzione un'attività inline in tale contesto, un valore che indica se questo gruppo di attività si trova nel mezzo di un annullamento attivo (o sarà a breve); in caso contrario, il valore `false`.  
  
##  <a name="issynchronouslyblocked"></a> IsSynchronouslyBlocked 

 Determina se il contesto è bloccato in modo sincrono. Viene considerato come un contesto bloccato in modo sincrono se eseguito in modo esplicito un'azione che ha portato a blocco.  
  
```
virtual bool IsSynchronouslyBlocked() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Indica se il contesto è bloccato in modo sincrono.  
  
### <a name="remarks"></a>Note  
 Viene considerato come un contesto bloccato in modo sincrono se eseguito in modo esplicito un'azione che ha portato a blocco. Nell'utilità di pianificazione del thread, questo indicherebbe una chiamata diretta al metodo `Context::Block` o un oggetto di sincronizzazione compilato utilizzando il metodo `Context::Block`.  
  
 Il valore restituito da questo metodo è un'istantanea di esempio indica se il contesto è bloccato in modo sincrono. Questo valore può essere aggiornato il momento in cui viene restituito e può essere usato solo in circostanze molto specifiche.  
  
##  <a name="operator_delete"></a> operatore delete 

 Oggetto `Context` oggetto viene eliminato definitivamente internamente dal runtime. Non è possibile eliminarlo in modo esplicito.  
  
```
void operator delete(void* _PObject);
```  
  
### <a name="parameters"></a>Parametri  
 `_PObject`  
 Un puntatore all'oggetto da eliminare.  
  
##  <a name="oversubscribe"></a> Abilitare l'oversubscription 

 Inserisce un altro processore virtuale in un'utilità di pianificazione per la durata di un blocco di codice quando viene richiamato in un contesto di esecuzione in uno dei processori virtuali in tale utilità di pianificazione.  
  
```
static void __cdecl Oversubscribe(bool _BeginOversubscription);
```  
  
### <a name="parameters"></a>Parametri  
 `_BeginOversubscription`  
 Se `true`, un valore che indica che un processore virtuale aggiuntivi deve essere aggiunte per la durata dell'oversubscription. Se `false`, indica che deve terminare l'oversubscription e il processore virtuale aggiunto in precedenza deve essere rimossa.  
  
##  <a name="schedulegroupid"></a> ScheduleGroupId 

 Restituisce un identificatore per il gruppo di pianificazione che sta lavorando per il contesto corrente.  
  
```
static unsigned int __cdecl ScheduleGroupId();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il contesto corrente è connesso a un'utilità di pianificazione e l'utilizzo di un gruppo di pianificazione, un identificatore per l'utilità di pianificazione di gruppo che il contesto corrente sta lavorando; in caso contrario, il valore `-1`.  
  
##  <a name="unblock"></a> Sblocco 

 Sblocca il contesto e lo rende eseguibile.  
  
```
virtual void Unblock() = 0;
```  
  
### <a name="remarks"></a>Note  
 È perfettamente valido per una chiamata ai `Unblock` prima di una chiamata corrispondente al metodo il [blocco](#block) (metodo). Fino a quando le chiamate per il `Block` e `Unblock` metodi sono abbinati correttamente, il runtime gestisce correttamente la corsa naturale dell'ordinamento. Un' `Unblock` chiamata presto prima di un `Block` chiamata semplicemente Annulla l'effetto del `Block` chiamare.  
  
 Esistono varie eccezioni che possono essere generate da questo metodo. Se un contesto di prova a chiamare le `Unblock` metodo su se stesso, un [context_self_unblock](context-self-unblock-class.md) verrà generata l'eccezione. Se le chiamate a `Block` e `Unblock` non sono abbinate correttamente (ad esempio, due chiamate a `Unblock` vengono effettuate per un contesto che è attualmente in esecuzione), una [context_unblock_unbalanced](context-unblock-unbalanced-class.md) verrà generata l'eccezione.  
  
 Tenere presente che vi sia un periodo critico tra il punto in cui il codice pubblica il relativo contesto di un altro thread essere in grado di chiamare il `Unblock` metodo e il punto in cui il chiamata effettiva al metodo `Block` viene eseguita. Durante questo periodo, non deve essere chiamare alcun metodo che può a sua volta bloccarsi e sbloccarsi per motivi propri (ad esempio acquisendo un blocco). Le chiamate al `Block` e `Unblock` metodo non rilevare il motivo del blocco e sblocco. Un solo oggetto deve avere la proprietà di un `Block` e `Unblock` coppia.  
  
##  <a name="virtualprocessorid"></a> VirtualProcessorId 

 Restituisce un identificatore per il processore virtuale è in esecuzione nel contesto corrente.  
  
```
static unsigned int __cdecl VirtualProcessorId();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il contesto corrente è collegato a un'utilità di pianificazione, un identificatore per il processore virtuale che il contesto corrente è in esecuzione; in caso contrario, il valore `-1`.  
  
### <a name="remarks"></a>Note  
 Il valore restituito da questo metodo è un campionamento istantaneo del processore virtuale è in esecuzione nel contesto corrente. Questo valore può essere non aggiornato nel momento in cui viene restituito e non può essere ritenuto affidabile. In genere, questo metodo viene utilizzato per il debug o solo a scopo di analisi.  
  
##  <a name="yield"></a> yield 

 Restituisce l'esecuzione in modo da poter eseguire un altro contesto. Se non è disponibile un altro contesto a cui cedere l'esecuzione, l'utilità di pianificazione può cedere l'esecuzione a un altro thread del sistema operativo.  
  
```
static void __cdecl Yield();
```  
  
### <a name="remarks"></a>Note  
 Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata.  
  
##  <a name="yieldexecution"></a> YieldExecution 

 Restituisce l'esecuzione in modo da poter eseguire un altro contesto. Se non è disponibile un altro contesto a cui cedere l'esecuzione, l'utilità di pianificazione può cedere l'esecuzione a un altro thread del sistema operativo.  
  
```
static void __cdecl YieldExecution();
```  
  
### <a name="remarks"></a>Note  
 Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata.  
  
 Questa funzione è stata introdotta in Visual Studio 2015 ed è identica per le [Yield](#yield) a funzionare ma non in conflitto con la macro Yield in Windows. h.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe Scheduler](scheduler-class.md)   
 [Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)



