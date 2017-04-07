---
title: Classe structured_task_group | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- structured_task_group
- PPL/concurrency::structured_task_group
- PPL/concurrency::structured_task_group::structured_task_group
- PPL/concurrency::structured_task_group::cancel
- PPL/concurrency::structured_task_group::is_canceling
- PPL/concurrency::structured_task_group::run
- PPL/concurrency::structured_task_group::run_and_wait
- PPL/concurrency::structured_task_group::wait
dev_langs:
- C++
helpviewer_keywords:
- structured_task_group class
ms.assetid: 742afa8c-c7b6-482c-b0ba-04c809927b22
caps.latest.revision: 21
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
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: a1817080506150a8a25918988e18b76dd7a04def
ms.lasthandoff: 03/17/2017

---
# <a name="structuredtaskgroup-class"></a>Classe structured_task_group
La classe `structured_task_group` rappresenta una raccolta altamente strutturata di lavoro parallelo. È possibile mettere in coda attività parallele singole a un `structured_task_group` usando gli oggetti `task_handle`, e attenderne il completamento, oppure annullare il gruppo di attività prima di aver terminato l'esecuzione, interrompendo in tal modo qualsiasi attività che non abbia avviato l'esecuzione.  
  
## <a name="syntax"></a>Sintassi  
  
```
class structured_task_group;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[structured_task_group](#ctor)|Di overload. Costruisce un nuovo oggetto `structured_task_group`.|  
|[~ structured_task_group distruttore](#dtor)|Elimina un oggetto `structured_task_group`. È necessario chiamare il `wait` o `run_and_wait` metodo sull'oggetto prima dell'esecuzione del distruttore, a meno che il distruttore è in esecuzione come risultato di rimozione dello stack a causa di un'eccezione.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Annulla](#cancel)|Consente un migliore tentativo di annullamento della sottostruttura ad albero di lavoro con radice nel gruppo di attività. Ogni attività pianificata nel gruppo di attività sarà transitivamente annullata, se possibile.|  
|[is_canceling](#is_canceling)|Informa il chiamante se il gruppo di attività è attualmente in corso di annullamento. Ciò non indica necessariamente che il `cancel` metodo è stato chiamato sul `structured_task_group` oggetto (anche se tale qualifica sicuramente questo metodo per restituire `true`). Potrebbe essere il caso che il `structured_task_group` oggetto è in esecuzione inline e un gruppo di attività più in alto nell'albero del lavoro viene annullato. In casi come questi dove il runtime può determinare in anticipo che l'annullamento si propagherà tramite questo `structured_task_group` oggetto `true` verranno restituiti anche.|  
|[run](#run)|Di overload. Pianifica un'attività sul `structured_task_group` oggetto. Il chiamante gestisce la durata del `task_handle` oggetto passato nel `_Task_handle` parametro. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata da quel parametro.|  
|[run_and_wait](#run_and_wait)|Di overload. Pianifica un'attività in esecuzione inline nel contesto di chiamata con l'assistenza di `structured_task_group` oggetto per il supporto per l'annullamento completo. Se un `task_handle` oggetto viene passato come parametro per `run_and_wait`, il chiamante è responsabile della gestione della durata di `task_handle` oggetto. La funzione quindi attende che operano sul `structured_task_group` oggetto ha completato o annullato.|  
|[attesa](#wait)|Attende che operano sul `structured_task_group` è stata completata o annullata.|  
  
## <a name="remarks"></a>Note  
 Esistono una serie di restrizioni gravi per l'utilizzo di un `structured_task_group` oggetto per ottenere prestazioni:  
  
-   Un singolo `structured_task_group` oggetto non può essere utilizzato da più thread. Tutte le operazioni su un `structured_task_group` oggetto deve essere eseguito dal thread che ha creato l'oggetto. Le due eccezioni a questa regola sono le funzioni membro `cancel` e `is_canceling`. L'oggetto potrebbe non trovarsi nell'elenco di acquisizione di un'espressione lambda e utilizzato all'interno di un'attività, a meno che l'attività utilizza una delle operazioni di annullamento.  
  
-   Tutte le attività pianificate a un `structured_task_group` oggetto sono pianificate tramite l'utilizzo di `task_handle` che è necessario gestire in modo esplicito la durata degli oggetti.  
  
-   Più gruppi possono essere utilizzati solo in ordine assolutamente annidato. Se due `structured_task_group` gli oggetti vengono dichiarati, al secondo (l'interno) dichiarato deve distruggere prima di qualsiasi metodo eccetto `cancel` o `is_canceling` viene chiamato sul primo (quella più esterna). Questa condizione vale nel caso di semplice dichiarazione più `structured_task_group` gli oggetti all'interno degli ambiti stesso o funzionalmente annidati, nonché nel caso di un'attività in coda per il `structured_task_group` tramite il `run` o `run_and_wait` metodi.  
  
-   A differenza di generale `task_group` tutti gli stati nella classe di `structured_task_group` classe sono finali. Dopo aver accodato le attività nel gruppo e averne atteso il completamento, non è possibile utilizzare nuovamente lo stesso gruppo.  
  
 Per ulteriori informazioni, vedere [parallelismo delle attività](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `structured_task_group`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** PPL  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="cancel"></a>Annulla 

 Consente un migliore tentativo di annullamento della sottostruttura ad albero di lavoro con radice nel gruppo di attività. Ogni attività pianificata nel gruppo di attività sarà transitivamente annullata, se possibile.  
  
```
void cancel();
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [annullamento](../../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md#cancellation).  
  
##  <a name="is_canceling"></a>is_canceling 

 Informa il chiamante se il gruppo di attività è attualmente in corso di annullamento. Ciò non indica necessariamente che il `cancel` metodo è stato chiamato sul `structured_task_group` oggetto (anche se tale qualifica sicuramente questo metodo per restituire `true`). Potrebbe essere il caso che il `structured_task_group` oggetto è in esecuzione inline e un gruppo di attività più in alto nell'albero del lavoro viene annullato. In casi come questi dove il runtime può determinare in anticipo che l'annullamento si propagherà tramite questo `structured_task_group` oggetto `true` verranno restituiti anche.  
  
```
bool is_canceling();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un'indicazione di `structured_task_group` oggetto è in corso di annullamento (o è garantito a breve).  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [annullamento](../../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md#cancellation).  
  
##  <a name="run"></a>Correre 

 Pianifica un'attività sul `structured_task_group` oggetto. Il chiamante gestisce la durata del `task_handle` oggetto passato nel `_Task_handle` parametro. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata da quel parametro.  
  
```
template<class _Function>
void run(
    task_handle<_Function>& _Task_handle);

template<class _Function>
void run(
    task_handle<_Function>& _Task_handle,
    location& _Placement);
```  
  
### <a name="parameters"></a>Parametri  
 `_Function`  
 Il tipo dell'oggetto funzione che sarà richiamato per eseguire il corpo dell'handle di attività.  
  
 `_Task_handle`  
 Handle per il lavoro pianificato. Si noti che il chiamante ha la responsabilità della durata di questo oggetto. Il runtime continuerà a prevedere di esistere finché il `wait` o `run_and_wait` metodo è stato chiamato su questo `structured_task_group` oggetto.  
  
 `_Placement`  
 Riferimento alla posizione in cui deve essere eseguita l'attività rappresentata dal parametro `_Task_handle`.  
  
### <a name="remarks"></a>Note  
 Il runtime crea una copia della funzione lavoro passata a questo metodo. Le modifiche di stato che si verificano in un oggetto funzione passato a questo metodo non compariranno nella propria copia dell'oggetto funzione.  
  
 Se il `structured_task_group` distrugge come risultato di rimozione dello stack da un'eccezione, non è necessaria garantire che è stata effettuata una chiamata al metodo di `wait` o `run_and_wait` (metodo). In questo caso, il distruttore verrà in modo appropriato annullare e attendere l'attività rappresentata dall'istanza di `_Task_handle` parametro per il completamento.  
  
 Genera un [invalid_multiple_scheduling](invalid-multiple-scheduling-class.md) eccezione se l'attività di gestione forniti dal `_Task_handle` parametro è già stato pianificato su un oggetto gruppo di attività tramite il `run` (metodo) e non si è verificato alcun nuova chiamata al `wait` o `run_and_wait` metodo su tale gruppo di attività.  
  
##  <a name="run_and_wait"></a>run_and_wait 

 Pianifica un'attività in esecuzione inline nel contesto di chiamata con l'assistenza di `structured_task_group` oggetto per il supporto per l'annullamento completo. Se un `task_handle` oggetto viene passato come parametro per `run_and_wait`, il chiamante è responsabile della gestione della durata di `task_handle` oggetto. La funzione quindi attende che operano sul `structured_task_group` oggetto ha completato o annullato.  
  
```
template<class _Function>
task_group_status run_and_wait(task_handle<_Function>& _Task_handle);

template<class _Function>
task_group_status run_and_wait(const _Function& _Func);
```  
  
### <a name="parameters"></a>Parametri  
 `_Function`  
 Tipo dell'oggetto funzione che sarà richiamato per eseguire l'attività.  
  
 `_Task_handle`  
 Handle per l'attività che verrà eseguito inline nel contesto del chiamante. Si noti che il chiamante ha la responsabilità della durata di questo oggetto. Il runtime continuerà a prevedere di esistere fino a quando il `run_and_wait` metodo completa l'esecuzione.  
  
 `_Func`  
 Una funzione che verrà chiamata per richiamare il corpo del lavoro. Può trattarsi di un'espressione lambda o un altro oggetto che supporta una versione dell'operatore di chiamata di funzione con la firma `void operator()()`.  
  
### <a name="return-value"></a>Valore restituito  
 Un'indicazione se è stato soddisfatto l'attesa o il gruppo di attività è stato annullato a causa di un'operazione di annullamento esplicito o un'eccezione generata da una delle relative attività. Per ulteriori informazioni, vedere [task_group_status](concurrency-namespace-enums.md)  
  
### <a name="remarks"></a>Note  
 Si noti che uno o più delle attività pianificate su questo `structured_task_group` oggetto possono essere eseguite inline nel contesto di chiamata.  
  
 Se uno o più delle attività pianificate su questo `structured_task_group` oggetto genera un'eccezione, il runtime genera un'eccezione di questo tipo di scelta e propagherà dalla chiamata al `run_and_wait` metodo.  
  
 Dopo la restituzione da parte di questa funzione, lo stato dell'oggetto `structured_task_group` viene considerato finale e non deve essere utilizzato. Si noti che l'uso dopo il `run_and_wait` restituisce determineranno un comportamento indefinito.  
  
 Nel percorso di esecuzione non eccezionale, si dispone di un mandato per chiamare questo metodo o `wait` metodo prima del distruttore del `structured_task_group` esegue.  
  
##  <a name="ctor"></a>structured_task_group 

 Costruisce un nuovo oggetto `structured_task_group`.  
  
```
structured_task_group();

structured_task_group(cancellation_token _CancellationToken);
```  
  
### <a name="parameters"></a>Parametri  
 `_CancellationToken`  
 Token di annullamento da associare a questo gruppo di attività strutturate. Il gruppo di attività strutturate verrà annullato quando il token viene annullato.  
  
### <a name="remarks"></a>Note  
 Tramite il costruttore che accetta un token di annullamento viene creato un oggetto `structured_task_group` che verrà annullato quando l'origine associata al token viene annullata. Fornire un token di annullamento esplicito permette di isolare questo gruppo di attività strutturate dalla partecipazione a un annullamento implicito di un gruppo padre con un token diverso o non.  
  
##  <a name="dtor"></a>~ structured_task_group 

 Elimina un oggetto `structured_task_group`. È necessario chiamare il `wait` o `run_and_wait` metodo sull'oggetto prima dell'esecuzione del distruttore, a meno che il distruttore è in esecuzione come risultato di rimozione dello stack a causa di un'eccezione.  
  
```
~structured_task_group();
```  
  
### <a name="remarks"></a>Note  
 Se il distruttore viene eseguito come risultato dell'esecuzione normale (ad esempio, non la rimozione dello stack a causa di un'eccezione) e non il `wait` né `run_and_wait` è stato chiamato, il distruttore venga generata una [missing_wait](missing-wait-class.md) (eccezione).  
  
##  <a name="wait"></a>attesa 

 Attende che operano sul `structured_task_group` è stata completata o annullata.  
  
```
task_group_status wait();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un'indicazione se è stato soddisfatto l'attesa o il gruppo di attività è stato annullato a causa di un'operazione di annullamento esplicito o un'eccezione generata da una delle relative attività. Per ulteriori informazioni, vedere [task_group_status](concurrency-namespace-enums.md)  
  
### <a name="remarks"></a>Note  
 Si noti che uno o più delle attività pianificate su questo `structured_task_group` oggetto possono essere eseguite inline nel contesto di chiamata.  
  
 Se uno o più delle attività pianificate su questo `structured_task_group` oggetto genera un'eccezione, il runtime genera un'eccezione di questo tipo di scelta e propagherà dalla chiamata al `wait` metodo.  
  
 Dopo la restituzione da parte di questa funzione, lo stato dell'oggetto `structured_task_group` viene considerato finale e non deve essere utilizzato. Si noti che l'uso dopo il `wait` restituisce determineranno un comportamento indefinito.  
  
 Nel percorso di esecuzione non eccezionale, si dispone di un mandato per chiamare questo metodo o `run_and_wait` metodo prima del distruttore del `structured_task_group` esegue.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe task_group](task-group-class.md)   
 [Classe task_handle](task-handle-class.md)

