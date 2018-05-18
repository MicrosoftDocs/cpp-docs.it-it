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
|[~ task_group distruttore](#dtor)|Elimina un oggetto `task_group`. È prevista la chiamata al `wait` o `run_and_wait` metodo sull'oggetto prima dell'esecuzione del distruttore, a meno che il distruttore è in esecuzione come risultato di rimozione a causa di un'eccezione dello stack.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[cancel](#cancel)|Rende migliore tentativo di annullamento della sottostruttura ad albero di lavoro con radice in questo gruppo di attività. Ogni attività pianificata nel gruppo di attività sarà transitivamente annullata, se possibile.|  
|[is_canceling](#is_canceling)|Informa il chiamante o meno il gruppo di attività è attualmente in corso di annullamento. Ciò non indica necessariamente che il `cancel` metodo è stato chiamato sul `task_group` oggetto (anche se questo metodo per restituire modo si qualifica sicuramente `true`). Potrebbe essere il caso che la `task_group` oggetto è in esecuzione inline e un gruppo di attività più in alto nell'albero del lavoro viene annullato. In casi come questi dove il runtime può determinare in anticipo che passa attraverso questo annullamento `task_group` oggetto `true` verranno anche restituiti.|  
|[run](#run)|Di overload. Pianifica un'attività sul `task_group` oggetto. Se un `task_handle` oggetto viene passato come parametro a `run`, il chiamante è responsabile della gestione della durata del `task_handle` oggetto. La versione del metodo che accetta un riferimento a un oggetto funzione come parametro comporta l'allocazione di heap nel runtime che può essere eseguire inferiori rispetto all'uso la versione che accetta un riferimento a un `task_handle` oggetto. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata da quel parametro.|  
|[run_and_wait](#run_and_wait)|Di overload. Pianifica un'attività in esecuzione inline sul contesto di chiamata con l'assistenza del `task_group` oggetto per il supporto completo di annullamento. La funzione attende fino a quando non usati per il `task_group` oggetto è stata annullata o completata. Se un `task_handle` oggetto viene passato come parametro a `run_and_wait`, il chiamante è responsabile della gestione della durata del `task_handle` oggetto.|  
|[wait](#wait)|Attende fino a quando tutte le attività nel `task_group` oggetto è stata annullata o completata.|  
  
## <a name="remarks"></a>Note  
 A differenza di ampiamente limitata `structured_task_group` (classe), il `task_group` è un costrutto molto più generale. Non dispone di alcuna delle restrizioni descritte da [structured_task_group](structured-task-group-class.md). `task_group` gli oggetti in modo sicuro possono essere utilizzati tra thread ed utilizzati in modi in formato libero. Lo svantaggio del `task_group` costrutto è che potrebbero non funzionare, nonché `structured_task_group` costruire per attività che eseguono piccole quantità di lavoro.  
  
 Per ulteriori informazioni, vedere [parallelismo delle attività](../task-parallelism-concurrency-runtime.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `task_group`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** PPL  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="cancel"></a> Annulla 

 Rende migliore tentativo di annullamento della sottostruttura ad albero di lavoro con radice in questo gruppo di attività. Ogni attività pianificata nel gruppo di attività sarà transitivamente annullata, se possibile.  
  
```  
void cancel();  
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [annullamento](../cancellation-in-the-ppl.md).  
  
##  <a name="is_canceling"></a> is_canceling 

 Informa il chiamante o meno il gruppo di attività è attualmente in corso di annullamento. Ciò non indica necessariamente che il `cancel` metodo è stato chiamato sul `task_group` oggetto (anche se questo metodo per restituire modo si qualifica sicuramente `true`). Potrebbe essere il caso che la `task_group` oggetto è in esecuzione inline e un gruppo di attività più in alto nell'albero del lavoro viene annullato. In casi come questi dove il runtime può determinare in anticipo che passa attraverso questo annullamento `task_group` oggetto `true` verranno anche restituiti.  
  
```  
bool is_canceling();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che indica se il `task_group` oggetto è in corso di annullamento (o è garantito a breve).  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [annullamento](../cancellation-in-the-ppl.md).  
  
##  <a name="run"></a> Correre 

 Pianifica un'attività sul `task_group` oggetto. Se un `task_handle` oggetto viene passato come parametro a `run`, il chiamante è responsabile della gestione della durata del `task_handle` oggetto. La versione del metodo che accetta un riferimento a un oggetto funzione come parametro comporta l'allocazione di heap nel runtime che può essere eseguire inferiori rispetto all'uso la versione che accetta un riferimento a un `task_handle` oggetto. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata da quel parametro.  
  
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
 `_Function`  
 Il tipo dell'oggetto funzione che sarà richiamato per eseguire il corpo dell'handle di attività.  
  
 `_Func`  
 Una funzione che verrà chiamata per richiamare il corpo dell'attività. Può trattarsi di un'espressione lambda o un altro oggetto che supporta una versione dell'operatore di chiamata di funzione con la firma `void operator()()`.  
  
 `_Placement`  
 Riferimento alla posizione in cui deve essere eseguita l'attività rappresentata dal parametro `_Func`.  
  
 `_Task_handle`  
 Handle per il lavoro pianificato. Si noti che il chiamante ha la responsabilità per la durata di questo oggetto. Il runtime continuerà a prevedere di esistere finché il `wait` o `run_and_wait` metodo è stato chiamato su questo `task_group` oggetto.  
  
### <a name="remarks"></a>Note  
 Il runtime consente di pianificare la funzione lavoro fornita per l'esecuzione in un secondo momento, che può essere dopo la restituzione della funzione chiamante. Questo metodo utilizza un [task_handle](task-handle-class.md) oggetto per mantenere una copia della funzione lavoro fornita. Pertanto, le modifiche di stato che si verificano in un oggetto funzione passato a questo metodo non compariranno nella propria copia dell'oggetto funzione. Inoltre, assicurarsi che la durata di tutti gli oggetti che si passa dal puntatore o riferimento alla funzione lavoro rimanga valida finché non restituisce la funzione lavoro.  
  
 Se il `task_group` distrugge come risultato di rimozione dello stack da un'eccezione, non è necessaria garantire che è stata effettuata una chiamata al metodo di `wait` o `run_and_wait` metodo. In questo caso, il distruttore verrà correttamente annullare e attendere l'attività rappresentata dal `_Task_handle` parametro per il completamento.  
  
 Il metodo genera un [invalid_multiple_scheduling](invalid-multiple-scheduling-class.md) eccezione se l'attività di gestione da parte il `_Task_handle` parametro è già stato pianificato su un oggetto gruppo di attività tramite il `run` (metodo) e si è verificato alcun nuova chiamata al metodo di `wait` o `run_and_wait` metodo su questo gruppo di attività.  
  
##  <a name="run_and_wait"></a> run_and_wait 

 Pianifica un'attività in esecuzione inline sul contesto di chiamata con l'assistenza del `task_group` oggetto per il supporto completo di annullamento. La funzione attende fino a quando non usati per il `task_group` oggetto è stata annullata o completata. Se un `task_handle` oggetto viene passato come parametro a `run_and_wait`, il chiamante è responsabile della gestione della durata del `task_handle` oggetto.  
  
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
 `_Function`  
 Tipo dell'oggetto funzione che sarà richiamato per eseguire il corpo dell'attività.  
  
 `_Task_handle`  
 Handle per l'attività che sarà in esecuzione inline sul contesto di chiamata. Si noti che il chiamante ha la responsabilità per la durata di questo oggetto. Il runtime continuerà a prevedere di esistere fino a quando il `run_and_wait` metodo completa l'esecuzione.  
  
 `_Func`  
 Una funzione che verrà chiamata per richiamare il corpo del lavoro. Può trattarsi di un'espressione lambda o un altro oggetto che supporta una versione dell'operatore di chiamata di funzione con la firma `void operator()()`.  
  
### <a name="return-value"></a>Valore restituito  
 Un'indicazione se l'attesa è stata soddisfatta o il gruppo di attività è stato annullato a causa di un'operazione di annullamento esplicito o un'eccezione generata da una delle relative attività. Per ulteriori informazioni, vedere [task_group_status](concurrency-namespace-enums.md#task_group_status).  

  
### <a name="remarks"></a>Note  
 Si noti che una o più delle attività pianificate su questo `task_group` oggetto possono essere eseguite inline nel contesto di chiamata.  
  
 Se uno o più delle attività pianificate su questo `task_group` oggetto genera un'eccezione, il runtime un'eccezione di questo tipo di scelta e propagherà dalla chiamata al `run_and_wait` metodo.  
  
 Al momento della restituzione dal `run_and_wait` metodo su un `task_group` dell'oggetto, il runtime Reimposta l'oggetto in cui può essere riutilizzato lo stato originario. Include il caso in cui il `task_group` oggetto è stato annullato.  
  
 Nel percorso di esecuzione non eccezionale, si avranno l'incarico di chiamare questo metodo o `wait` metodo prima di quello del `task_group` esegue.  
  
##  <a name="ctor"></a> task_group 

 Costruisce un nuovo oggetto `task_group`.  
  
```  
task_group();  
  
task_group(  
   cancellation_token _CancellationToken  
);  
```  
  
### <a name="parameters"></a>Parametri  
 `_CancellationToken`  
 Token di annullamento da associare a questo gruppo di attività. Il gruppo di attività verrà annullato quando il token viene annullato.  
  
### <a name="remarks"></a>Note  
 Tramite il costruttore che accetta un token di annullamento viene creato un oggetto `task_group` che verrà annullato quando l'origine associata al token viene annullata. Fornire un token di annullamento esplicito permette di isolare questo gruppo di attività dalla partecipazione a un annullamento implicito di un gruppo padre con un token diverso o senza token.  
  
##  <a name="dtor"></a> ~ task_group 

 Elimina un oggetto `task_group`. È prevista la chiamata al `wait` o `run_and_wait` metodo sull'oggetto prima dell'esecuzione del distruttore, a meno che il distruttore è in esecuzione come risultato di rimozione a causa di un'eccezione dello stack.  
  
```  
~task_group();  
```  
  
### <a name="remarks"></a>Note  
 Se il distruttore viene eseguito come risultato di esecuzione normale (ad esempio, non la rimozione dello stack a causa di un'eccezione) e non il `wait` né `run_and_wait` è stato chiamato, il distruttore venga generata una [missing_wait](missing-wait-class.md) eccezione.  
  
##  <a name="wait"></a> attesa 

 Attende fino a quando tutte le attività nel `task_group` oggetto è stata annullata o completata.  
  
```  
task_group_status wait();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un'indicazione se l'attesa è stata soddisfatta o il gruppo di attività è stato annullato a causa di un'operazione di annullamento esplicito o un'eccezione generata da una delle relative attività. Per ulteriori informazioni, vedere [task_group_status](concurrency-namespace-enums.md#task_group_status).  

  
### <a name="remarks"></a>Note  
 Si noti che una o più delle attività pianificate su questo `task_group` oggetto possono essere eseguite inline nel contesto di chiamata.  
  
 Se uno o più delle attività pianificate su questo `task_group` oggetto genera un'eccezione, il runtime un'eccezione di questo tipo di scelta e propagherà dalla chiamata al `wait` metodo.  
  
 La chiamata `wait` su un `task_group` oggetto viene reimpostato lo stato originario in cui può essere riutilizzato. Include il caso in cui il `task_group` oggetto è stato annullato.  
  
 Nel percorso di esecuzione non eccezionale, si avranno l'incarico di chiamare questo metodo o `run_and_wait` metodo prima di quello del `task_group` esegue.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe structured_task_group](structured-task-group-class.md)   
 [Classe task_handle](task-handle-class.md)