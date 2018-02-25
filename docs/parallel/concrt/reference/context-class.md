---
title: Classe del contesto | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9195ec68a47e2ed528a42bb018cfba6316101a0c
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
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
|[GetId](#getid)|Restituisce un identificatore per il contesto univoco all'interno di utilità di pianificazione a cui appartiene il contesto.|  
|[GetScheduleGroupId](#getschedulegroupid)|Restituisce un identificatore per il gruppo di pianificazione che sta utilizzando il contesto.|  
|[GetVirtualProcessorId](#getvirtualprocessorid)|Restituisce un identificatore per il processore virtuale attualmente in esecuzione nel contesto.|  
|[Id](#id)|Restituisce un identificatore per il contesto corrente che è univoco all'interno di utilità di pianificazione a cui appartiene il contesto corrente.|  
|[IsCurrentTaskCollectionCanceling](#iscurrenttaskcollectioncanceling)|Restituisce un'indicazione se la raccolta di attività attualmente in esecuzione inline sul contesto corrente si trova nel mezzo di un annullamento attivo o sarà a breve.|  
|[IsSynchronouslyBlocked](#issynchronouslyblocked)|Determina se il contesto è bloccato in modo sincrono. Viene considerato un contesto bloccato in modo sincrono se eseguito in modo esplicito un'azione che ha portato a blocco.|  
|[Abilitare l'oversubscription](#oversubscribe)|Inserisce un processore virtuale aggiuntivo in un'utilità di pianificazione per la durata di un blocco di codice quando viene richiamato in un contesto di esecuzione in uno dei processori virtuali in tale utilità di pianificazione.|  
|[ScheduleGroupId](#schedulegroupid)|Restituisce un identificatore per il gruppo di pianificazione che sta elaborando il contesto corrente.|  
|[Sbloccare](#unblock)|Sblocca il contesto e fa sì che diventi eseguibile.|  
|[VirtualProcessorId](#virtualprocessorid)|Restituisce un identificatore per il processore virtuale è in esecuzione nel contesto corrente.|  
|[Yield](#yield)|Restituisce l'esecuzione in modo da poter eseguire un altro contesto. Se non è disponibile un altro contesto a cui cedere l'esecuzione, l'utilità di pianificazione può cedere l'esecuzione a un altro thread del sistema operativo.|  
  
## <a name="remarks"></a>Note  
 L'utilità di pianificazione del Runtime di concorrenza (vedere [dell'utilità di pianificazione](scheduler-class.md)) utilizza i contesti di esecuzione per eseguire il lavoro in coda a esso dall'applicazione. Un thread Win32 è un esempio di un contesto di esecuzione in un sistema operativo Windows.  
  
 In qualsiasi momento, il livello di concorrenza un'utilità di pianificazione è uguale al numero di processori virtuali alle da Gestione risorse. Un processore virtuale è un'astrazione per una risorsa di elaborazione e viene mappato a un thread hardware sul sistema sottostante. Solo un contesto singolo dell'utilità di pianificazione può eseguire su un processore virtuale in un determinato momento.  
  
 L'utilità di pianificazione è cooperativa di natura e un contesto di esecuzione può restituire il processore virtuale per un contesto diverso in qualsiasi momento se desidera passare a uno stato di attesa. Quando l'attesa soddisfatta, è possibile ripristinarlo fino all'inizio di un processore virtuale disponibile dall'utilità di pianificazione dell'esecuzione.  
  
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
  
 Se il contesto di chiamata è in esecuzione su un processore virtuale, il processore virtuale troverà un altro contesto eseguibile per l'esecuzione o potenzialmente possibile crearne uno nuovo.  
  
 Dopo il `Block` metodo è stato chiamato o verrà chiamato, è necessario abbinarlo con una chiamata al [Unblock](#unblock) metodo da un altro contesto di esecuzione in modo che per eseguire di nuovo. Tenere presente che vi sia un periodo critico tra il punto in cui il codice pubblica il contesto per un altro thread per essere in grado di chiamare il `Unblock` (metodo) e il punto in cui il chiamata effettiva al metodo `Block` viene eseguita. Durante questo periodo, non deve essere chiamare alcun metodo che può a sua volta bloccarsi e sbloccarsi per motivi propri (ad esempio acquisendo un blocco). Le chiamate al `Block` e `Unblock` metodo non consente di rilevare il motivo del blocco e sblocco. Un solo oggetto deve avere la proprietà di un `Block` -  `Unblock` coppia.  
  
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

 Restituisce un identificatore per il contesto univoco all'interno di utilità di pianificazione a cui appartiene il contesto.  
  
```
virtual unsigned int GetId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore per il contesto univoco all'interno di utilità di pianificazione a cui appartiene il contesto.  
  
##  <a name="getschedulegroupid"></a> GetScheduleGroupId 

 Restituisce un identificatore per il gruppo di pianificazione che sta utilizzando il contesto.  
  
```
virtual unsigned int GetScheduleGroupId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore per il gruppo di pianificazione il contesto sta lavorando.  
  
### <a name="remarks"></a>Note  
 Il valore restituito da questo metodo è un campionamento istantaneo del gruppo di pianificazione che è in esecuzione il contesto. Se questo metodo viene chiamato in un contesto diverso da quello corrente, è possibile che il valore non sia aggiornato nel momento in cui viene restituito e potrebbe non essere affidabile. In genere, questo metodo viene utilizzato per il debug o solo a scopo di analisi.  
  
##  <a name="getvirtualprocessorid"></a> GetVirtualProcessorId 

 Restituisce un identificatore per il processore virtuale attualmente in esecuzione nel contesto.  
  
```
virtual unsigned int GetVirtualProcessorId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il contesto è in esecuzione su un processore virtuale, un identificatore per il processore virtuale contesto attualmente in esecuzione. in caso contrario, il valore `-1`.  
  
### <a name="remarks"></a>Note  
 Il valore restituito da questo metodo è un campionamento istantaneo del processore virtuale in esecuzione sul contesto. Questo valore può essere non aggiornato nel momento in cui viene restituito e non può essere ritenuto affidabile. In genere, questo metodo viene utilizzato per il debug o solo a scopo di analisi.  
  
##  <a name="id"></a> Id 

 Restituisce un identificatore per il contesto corrente che è univoco all'interno di utilità di pianificazione a cui appartiene il contesto corrente.  
  
```
static unsigned int __cdecl Id();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il contesto corrente è associato a un'utilità di pianificazione, un identificatore per il contesto corrente che è univoco all'interno di utilità di pianificazione a cui appartiene il contesto corrente. in caso contrario, il valore `-1`.  
  
##  <a name="iscurrenttaskcollectioncanceling"></a> IsCurrentTaskCollectionCanceling 

 Restituisce un'indicazione se la raccolta di attività attualmente in esecuzione inline sul contesto corrente si trova nel mezzo di un annullamento attivo o sarà a breve.  
  
```
static bool __cdecl IsCurrentTaskCollectionCanceling();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se un'utilità di pianificazione è associata al contesto di chiamata e un gruppo di attività è in esecuzione un'attività inline in tale contesto, un valore che indica se questo gruppo di attività si trova nel mezzo di un annullamento attivo (o sarà a breve); in caso contrario, il valore `false`.  
  
##  <a name="issynchronouslyblocked">IsSynchronouslyBlocked</a> 

 Determina se il contesto è bloccato in modo sincrono. Viene considerato un contesto bloccato in modo sincrono se eseguito in modo esplicito un'azione che ha portato a blocco.  
  
```
virtual bool IsSynchronouslyBlocked() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il contesto è bloccato in modo sincrono.  
  
### <a name="remarks"></a>Note  
 Viene considerato un contesto bloccato in modo sincrono se eseguito in modo esplicito un'azione che ha portato a blocco. Nell'utilità di pianificazione del thread, questo indicherebbe una chiamata diretta al metodo `Context::Block` o un oggetto di sincronizzazione compilato utilizzando il metodo `Context::Block`.  
  
 Il valore restituito da questo metodo è un esempio istantaneo del se il contesto è bloccato in modo sincrono. Questo valore può essere aggiornato il momento in cui viene restituito e può essere utilizzato solo in circostanze molto specifiche.  
  
##  <a name="operator_delete"></a> operatore delete 

 Oggetto `Context` oggetto sia distrutto internamente dal runtime. Non è possibile eliminarlo in modo esplicito.  
  
```
void operator delete(void* _PObject);
```  
  
### <a name="parameters"></a>Parametri  
 `_PObject`  
 Un puntatore all'oggetto da eliminare.  
  
##  <a name="oversubscribe">Abilitare l'oversubscription</a> 

 Inserisce un processore virtuale aggiuntivo in un'utilità di pianificazione per la durata di un blocco di codice quando viene richiamato in un contesto di esecuzione in uno dei processori virtuali in tale utilità di pianificazione.  
  
```
static void __cdecl Oversubscribe(bool _BeginOversubscription);
```  
  
### <a name="parameters"></a>Parametri  
 `_BeginOversubscription`  
 Se `true`, un'indicazione che deve essere aggiunto un processore virtuale extra per la durata dell'oversubscription. Se `false`, l'indicazione che dovrebbe terminare l'oversubscription e il processore virtuale precedentemente aggiunto deve essere rimosso.  
  
##  <a name="schedulegroupid"></a> ScheduleGroupId 

 Restituisce un identificatore per il gruppo di pianificazione che sta elaborando il contesto corrente.  
  
```
static unsigned int __cdecl ScheduleGroupId();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il contesto corrente è connesso a un'utilità di pianificazione si lavora su un gruppo di pianificazione, un identificatore per l'utilità di pianificazione di gruppi e che il contesto corrente sta lavorando; in caso contrario, il valore `-1`.  
  
##  <a name="unblock">Sbloccare</a> 

 Sblocca il contesto e fa sì che diventi eseguibile.  
  
```
virtual void Unblock() = 0;
```  
  
### <a name="remarks"></a>Note  
 È perfettamente valido per una chiamata al `Unblock` precedere da una chiamata corrispondente al metodo di [blocco](#block) metodo. Fino a quando le chiamate al `Block` e `Unblock` metodi sono abbinati correttamente, il runtime gestisce correttamente la naturale corsa dell'ordinamento. Un `Unblock` chiamata proveniente prima un `Block` chiamata Nega semplicemente l'effetto del `Block` chiamare.  
  
 Esistono diverse eccezioni che possono essere generate da questo metodo. Se un contesto tenta di chiamare il `Unblock` metodo su se stesso, un [context_self_unblock](context-self-unblock-class.md) verrà generata l'eccezione. Se le chiamate a `Block` e `Unblock` non sono abbinate correttamente (ad esempio, due chiamate a `Unblock` vengono effettuate per un contesto che è attualmente in esecuzione), un [context_unblock_unbalanced](context-unblock-unbalanced-class.md) verrà generata l'eccezione.  
  
 Tenere presente che vi sia un periodo critico tra il punto in cui il codice pubblica il contesto per un altro thread per essere in grado di chiamare il `Unblock` (metodo) e il punto in cui il chiamata effettiva al metodo `Block` viene eseguita. Durante questo periodo, non deve essere chiamare alcun metodo che può a sua volta bloccarsi e sbloccarsi per motivi propri (ad esempio acquisendo un blocco). Le chiamate al `Block` e `Unblock` metodo non consente di rilevare il motivo del blocco e sblocco. Un solo oggetto deve avere la proprietà di un `Block` e `Unblock` coppia.  
  
##  <a name="virtualprocessorid"></a> VirtualProcessorId 

 Restituisce un identificatore per il processore virtuale è in esecuzione nel contesto corrente.  
  
```
static unsigned int __cdecl VirtualProcessorId();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il contesto corrente è associato a un'utilità di pianificazione, un identificatore per il processore virtuale in esecuzione il contesto corrente. in caso contrario, il valore `-1`.  
  
### <a name="remarks"></a>Note  
 Il valore restituito da questo metodo è un campionamento istantaneo del processore virtuale che è in esecuzione nel contesto corrente. Questo valore può essere non aggiornato nel momento in cui viene restituito e non può essere ritenuto affidabile. In genere, questo metodo viene utilizzato per il debug o solo a scopo di analisi.  
  
##  <a name="yield"></a> Yield 

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
  
 Questa funzione è stata introdotta in [!INCLUDE[vs_dev14](../../../ide/includes/vs_dev14_md.md)] ed è uguale al [Yield](#yield) funzionare, ma non in conflitto con la macro Yield in Windows. h.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe di utilità di pianificazione](scheduler-class.md)   
 [Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)



