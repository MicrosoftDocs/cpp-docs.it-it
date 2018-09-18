---
title: Classe task_group | Microsoft Docs
ms.custom: ''
ms.date: 07/20/2018
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- task_group
- PPL/concurrency::task_group
- PPL/concurrency::task_group::task_group
dev_langs:
- C++
helpviewer_keywords:
- task_group class
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d7ee8fa674174d95c3e538889f6d5538be049b70
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46020720"
---
# <a name="taskgroup-class"></a>Classe task_group
La classe `task_group` rappresenta una raccolta di lavoro parallelo che può essere messa in attesa o annullata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class task_group;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[task_group](#ctor)|Di overload. Costruisce un nuovo oggetto `task_group`.|  
|[~ task_group distruttore](#dtor)|Elimina un oggetto `task_group`. È prevista la chiamata al `wait` o `run_and_wait` metodo sull'oggetto prima dell'esecuzione del distruttore, a meno che il distruttore è in esecuzione come risultato della rimozione a causa di un'eccezione dello stack.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[cancel](#cancel)|Tenta di annullare la sottostruttura ad albero di lavoro che ha origine nel gruppo di attività. Ogni attività pianificata nel gruppo di attività sarà transitivamente annullata se possibile.|  
|[is_canceling](#is_canceling)|Indica al chiamante se il gruppo di attività è attualmente in corso di annullamento. Ciò non indica necessariamente che il `cancel` metodo è stato chiamato sul `task_group` oggetto (anche se tale qualifica sicuramente questo metodo per restituire `true`). Potrebbe essere il caso che la `task_group` oggetto è in esecuzione inline e un gruppo di attività più in alto nell'albero del lavoro viene annullato. In casi come questi in cui il runtime può determinare in anticipo che annullamento passerà attraverso questa `task_group` oggetti, `true` verranno anche restituiti.|  
|[run](#run)|Di overload. Pianifica un'attività nel `task_group` oggetto. Se un `task_handle` oggetto viene passato come parametro al `run`, il chiamante è responsabile della gestione della durata del `task_handle` oggetto. La versione del metodo che accetta un riferimento a un oggetto funzione come parametro comporta l'allocazione di heap all'interno del runtime che potrà essere ottimali rispetto all'uso la versione che accetta un riferimento a un `task_handle` oggetto. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata da quel parametro.|  
|[run_and_wait](#run_and_wait)|Di overload. Pianifica un'attività in esecuzione inline sul contesto di chiamata con l'assistenza del `task_group` oggetto per il supporto per l'annullamento completo. La funzione quindi attende che tutti si cimentano il `task_group` oggetto ha completato o annullato. Se un `task_handle` oggetto viene passato come parametro al `run_and_wait`, il chiamante è responsabile della gestione della durata del `task_handle` oggetto.|  
|[wait](#wait)|Attende che tutti si cimentano il `task_group` oggetto ha completato o annullato.|  
  
## <a name="remarks"></a>Note  
 A differenza di frequente con restrizioni `structured_task_group` (classe), il `task_group` è un costrutto molto più generale. Non dispone di alcuna delle restrizioni descritte da [structured_task_group](structured-task-group-class.md). `task_group` gli oggetti in modo sicuro possono essere usati tra thread e utilizzati in formato libero modi. Lo svantaggio del `task_group` costrutto è che potrebbero non funzionare così come il `structured_task_group` costruire per le attività che consentono di eseguire piccole quantità di lavoro.  
  
 Per altre informazioni, vedere [Task Parallelism](../task-parallelism-concurrency-runtime.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `task_group`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** PPL  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="cancel"></a> Annulla 

 Tenta di annullare la sottostruttura ad albero di lavoro che ha origine nel gruppo di attività. Ogni attività pianificata nel gruppo di attività sarà transitivamente annullata se possibile.  
  
```  
void cancel();  
```  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [annullamento](../cancellation-in-the-ppl.md).  
  
##  <a name="is_canceling"></a> is_canceling 

 Indica al chiamante se il gruppo di attività è attualmente in corso di annullamento. Ciò non indica necessariamente che il `cancel` metodo è stato chiamato sul `task_group` oggetto (anche se tale qualifica sicuramente questo metodo per restituire `true`). Potrebbe essere il caso che la `task_group` oggetto è in esecuzione inline e un gruppo di attività più in alto nell'albero del lavoro viene annullato. In casi come questi in cui il runtime può determinare in anticipo che annullamento passerà attraverso questa `task_group` oggetti, `true` verranno anche restituiti.  
  
```  
bool is_canceling();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che indica se il `task_group` oggetto è in corso di annullamento (o è garantito che sia a breve).  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [annullamento](../cancellation-in-the-ppl.md).  
  
##  <a name="run"></a> Correre 

 Pianifica un'attività nel `task_group` oggetto. Se un `task_handle` oggetto viene passato come parametro al `run`, il chiamante è responsabile della gestione della durata del `task_handle` oggetto. La versione del metodo che accetta un riferimento a un oggetto funzione come parametro comporta l'allocazione di heap all'interno del runtime che potrà essere ottimali rispetto all'uso la versione che accetta un riferimento a un `task_handle` oggetto. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata da quel parametro.  
  
```  
template<  
   typename _Function  
>  
void run(  
   const _Function& _Func  
);  
  
template<  
   typename _Function  
>  
void run(  
   const _Function& _Func,  
   location& _Placement  
);  
  
template<  
   typename _Function  
>  
void run(  
   task_handle<_Function>& _Task_handle  
);  
  
template<  
   typename _Function  
>  
void run(  
   task_handle<_Function>& _Task_handle,  
   location& _Placement  
);  
```  
  
### <a name="parameters"></a>Parametri  
*_Function*<br/>
Il tipo dell'oggetto funzione che verrà richiamato per eseguire il corpo dell'handle di attività.  
  
*Func*<br/>
Una funzione che verrà chiamata per richiamare il corpo dell'attività. Potrebbe trattarsi di un'espressione lambda o un altro oggetto che supporta una versione dell'operatore di chiamata di funzione con la firma `void operator()()`.  
  
*Selezione*<br/>
Riferimento alla posizione in cui deve essere eseguita l'attività rappresentata dal parametro `_Func`.  
  
*Task_handle*<br/>
Handle per il lavoro pianificato. Si noti che il chiamante ha la responsabilità per la durata di questo oggetto. Il runtime continua a prevedere di esistere fino a quando non le `wait` oppure `run_and_wait` metodo è stato chiamato su questo `task_group` oggetto.  
  
### <a name="remarks"></a>Note  
 Il runtime consente di pianificare la funzione lavoro fornita per l'esecuzione in un secondo momento, che può essere dopo che restituisce la funzione chiamante. Questo metodo Usa una [task_handle](task-handle-class.md) oggetto per contenere una copia della funzione lavoro fornita. Di conseguenza, le modifiche di stato che si verificano in un oggetto funzione passato a questo metodo non compariranno nella propria copia di tale oggetto funzione. Inoltre, assicurarsi che la durata di tutti gli oggetti che si passano il puntatore o riferimento alla funzione lavoro rimanga valida finché non restituisce la funzione lavoro.  
  
 Se il `task_group` distrugge come risultato di rimozione dello stack da un'eccezione, non è necessario garantire che è stata effettuata una chiamata al metodo il `wait` o `run_and_wait` (metodo). In questo caso, il distruttore sarà in modo appropriato annullare e attendere l'attività rappresentata dal `_Task_handle` parametro per il completamento.  
  
 Il metodo genera un' [invalid_multiple_scheduling](invalid-multiple-scheduling-class.md) eccezione se l'attività di gestione fornito dal `_Task_handle` parametro è già stato pianificato su un oggetto gruppo di attività tramite la `run` (metodo) e si è verificato alcun chiamata intermedia a entrambi i `wait` o `run_and_wait` metodo su quel gruppo di attività.  
  
##  <a name="run_and_wait"></a> run_and_wait 

 Pianifica un'attività in esecuzione inline sul contesto di chiamata con l'assistenza del `task_group` oggetto per il supporto per l'annullamento completo. La funzione quindi attende che tutti si cimentano il `task_group` oggetto ha completato o annullato. Se un `task_handle` oggetto viene passato come parametro al `run_and_wait`, il chiamante è responsabile della gestione della durata del `task_handle` oggetto.  
  
```  
template<  
   class _Function  
>  
task_group_status run_and_wait(  
   task_handle<_Function>& _Task_handle  
);  
  
template<  
   class _Function  
>  
task_group_status run_and_wait(  
   const _Function& _Func  
);  
```  
  
### <a name="parameters"></a>Parametri  
*_Function*<br/>
Tipo dell'oggetto funzione che sarà richiamato per eseguire il corpo dell'attività.  
  
*Task_handle*<br/>
Handle per l'attività che verrà eseguita inline sul contesto di chiamata. Si noti che il chiamante ha la responsabilità per la durata di questo oggetto. Il runtime continua a prevedere di esistere fino al `run_and_wait` metodo completa l'esecuzione.  
  
*Func*<br/>
Una funzione che verrà chiamata per richiamare il corpo del lavoro. Potrebbe trattarsi di un'espressione lambda o un altro oggetto che supporta una versione dell'operatore di chiamata di funzione con la firma `void operator()()`.  
  
### <a name="return-value"></a>Valore restituito  
 Un'indicazione del fatto che l'attesa è stata soddisfatta o il gruppo di attività è stato annullato a causa di un'operazione di annullamento esplicito o un'eccezione generata da una delle relative attività. Per altre informazioni, vedere [task_group_status](concurrency-namespace-enums.md#task_group_status).  

  
### <a name="remarks"></a>Note  
 Si noti che uno o più delle attività pianificate per questa `task_group` oggetto può essere eseguita inline sul contesto di chiamata.  
  
 Se uno o più delle attività pianificate a questo `task_group` oggetto genera un'eccezione, il runtime selezionerà un'eccezione di questo tipo di a scelta e propagarlo dalla chiamata al `run_and_wait` (metodo).  
  
 Alla restituzione da parte di `run_and_wait` metodo su un `task_group` dell'oggetto, il runtime Reimposta l'oggetto allo stato originario in cui può essere riutilizzato. Include il caso in cui il `task_group` oggetto è stato annullato.  
  
 Nel percorso di esecuzione senza eccezioni, si dispone di un mandato di chiamare questo metodo o la `wait` metodo prima del distruttore del `task_group` esegue.  
  
##  <a name="ctor"></a> task_group 

 Costruisce un nuovo oggetto `task_group`.  
  
```  
task_group();  
  
task_group(  
   cancellation_token _CancellationToken  
);  
```  
  
### <a name="parameters"></a>Parametri  
*_CancellationToken*<br/>
Token di annullamento da associare a questo gruppo di attività. Il gruppo di attività verrà annullato quando il token viene annullato.  
  
### <a name="remarks"></a>Note  
 Tramite il costruttore che accetta un token di annullamento viene creato un oggetto `task_group` che verrà annullato quando l'origine associata al token viene annullata. Fornire un token di annullamento esplicito permette di isolare questo gruppo di attività dalla partecipazione a un annullamento implicito di un gruppo padre con un token diverso o senza token.  
  
##  <a name="dtor"></a> ~ task_group 

 Elimina un oggetto `task_group`. È prevista la chiamata al `wait` o `run_and_wait` metodo sull'oggetto prima dell'esecuzione del distruttore, a meno che il distruttore è in esecuzione come risultato della rimozione a causa di un'eccezione dello stack.  
  
```  
~task_group();  
```  
  
### <a name="remarks"></a>Note  
 Se il distruttore viene eseguito come risultato dell'esecuzione normale (ad esempio, non la rimozione dello stack a causa di un'eccezione) e né la `wait` né `run_and_wait` è stato chiamato, il distruttore venga generata una [missing_wait](missing-wait-class.md) eccezione.  
  
##  <a name="wait"></a> Attendere 

 Attende che tutti si cimentano il `task_group` oggetto ha completato o annullato.  
  
```  
task_group_status wait();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un'indicazione del fatto che l'attesa è stata soddisfatta o il gruppo di attività è stato annullato a causa di un'operazione di annullamento esplicito o un'eccezione generata da una delle relative attività. Per altre informazioni, vedere [task_group_status](concurrency-namespace-enums.md#task_group_status).  

  
### <a name="remarks"></a>Note  
 Si noti che uno o più delle attività pianificate per questa `task_group` oggetto può essere eseguita inline sul contesto di chiamata.  
  
 Se uno o più delle attività pianificate a questo `task_group` oggetto genera un'eccezione, il runtime selezionerà un'eccezione di questo tipo di a scelta e propagarlo dalla chiamata al `wait` (metodo).  
  
 La chiamata `wait` su un `task_group` oggetto ripristinarne uno stato originario in cui può essere riutilizzato. Include il caso in cui il `task_group` oggetto è stato annullato.  
  
 Nel percorso di esecuzione senza eccezioni, si dispone di un mandato di chiamare questo metodo o la `run_and_wait` metodo prima del distruttore del `task_group` esegue.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe structured_task_group](structured-task-group-class.md)   
 [Classe task_handle](task-handle-class.md)