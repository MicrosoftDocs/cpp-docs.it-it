---
title: Annotazione del comportamento di blocco
ms.date: 11/04/2016
ms.topic: conceptual
f1_keywords:
- _Releases_nonreentrant_lock_
- _Lock_kind_mutex_
- _Lock_kind_critical_section_
- _Acquires_lock_
- _Releases_lock_
- _Has_lock_kind_
- _Releases_exclusive_lock_
- _Post_same_lock_
- _Requires_exclusive_lock_held_
- _Requires_shared_lock_held_
- _Lock_kind_semaphore_
- _Requires_lock_held_
- _Acquires_exclusive_lock_
- _Create_lock_level_
- _Acquires_nonreentrant_lock_
- _Releases_shared_lock_
- _Has_lock_level_
- _Lock_kind_spin_lock_
- _Requires_lock_not_held_
- _Acquires_shared_lock_
- _Requires_no_locks_held_
- _Lock_level_order_
- _Lock_kind_event_
ms.assetid: 07769c25-9b97-4ab7-b175-d1c450308d7a
ms.openlocfilehash: 371422275b965fd2ce12995b55221a011a4edae6
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232365"
---
# <a name="annotating-locking-behavior"></a>Annotazione del comportamento di blocco

Per evitare i bug di concorrenza in un programma multithread, seguire sempre un'appropriata disciplina di blocco e utilizzare le annotazioni SAL.

I bug di concorrenza sono notoriamente difficili da riprodurre, diagnosticare e sottoporre al debug perché sono non deterministici. Ragionare sull'interfoliazione dei thread è difficile idealmente e quindi praticamente quando si progetta un corpo di codice che dispone di più di un thread. Pertanto, è consigliabile seguire una disciplina di blocco nei programmi multithread. Ad esempio, obbedendo a un ordine di blocco mentre si acquisiscono molteplici blocchi aiuta ad evitare deadlock e acquisendo correttamente la guardia del blocco prima di accedere ad una risorsa condivisa aiuta a impedire una race condition.

Sfortunatamente, queste regole di blocco in apparenza semplici sono sorprendentemente difficili da utilizzare nella pratica. Una limitazione fondamentale nei linguaggi di programmazione e nei compilatori odierni consiste nel fatto che non supportano direttamente la specifica e l'analisi dei requisiti di concorrenza. I programmatori devono fare affidamento sui commenti informali del codice per esprime le intenzioni su come utilizzare i blocchi.

Le annotazioni di concorrenza SAL sono progettate per specificare gli effetti collaterali del blocco, la responsabilità del blocco, la tutela di dati, la gerarchia d'ordine e altri comportamenti previsti del blocco. Creando regole implicite esplicite, le annotazioni di concorrenza SAL forniscono un metodo coerente per documentare come il codice utilizza le regole di blocco. Le annotazioni di concorrenza migliorano anche la capacità degli strumenti di analisi del codice di trovare race condition, deadlock, operazioni di sincronizzazione non corrispondenti e altri difficili errori di concorrenza.

## <a name="general-guidelines"></a>Linee guida generali

Utilizzando le annotazioni è possibile indicare i contratti impliciti nelle definizioni di funzione tra le implementazioni (chiamati) e i client (chiamanti) ed esprimere invarianti e altre proprietà del programma che possono migliorare ulteriormente l'analisi.

SAL supporta molti tipi diversi di primitive di blocco, come ad esempio le sezioni critiche, i mutex, gli spinlock e altri oggetti risorsa. Molte annotazioni di concorrenza accettano un'espressione di blocco come parametro. Per convenzione, un blocco è indicato dall'espressione di percorso dell'oggetto blocco sottostante.

Alcune regole sulla proprietà dei thread da tenere in considerazione:

- Gli spinlock sono blocchi non contati che dispongono della proprietà dei thread.

- I mutex e le sezioni critiche sono blocchi contati che dispongono della proprietà dei thread.

- I semafori e gli eventi sono considerati blocchi contati che non che dispongono della proprietà dei thread.

## <a name="locking-annotations"></a>Annotazioni di blocco

Nella tabella seguente sono elencate le annotazioni di blocco.

|Annotazione|Descrizione|
|----------------|-----------------|
|`_Acquires_exclusive_lock_(expr)`|Annota una funzione e indica lo stato successivo della funzione incrementando di uno il conteggio dei blocchi esclusivi dell'oggetto di blocco denominato da `expr`.|
|`_Acquires_lock_(expr)`|Annota una funzione e indica lo stato successivo della funzione incrementando di uno il conteggio dei blocchi dell'oggetto di blocco denominato da `expr`.|
|`_Acquires_nonreentrant_lock_(expr)`|Il blocco denominato da `expr` viene acquisito.  Viene restituito un errore se il blocco è già utilizzato.|
|`_Acquires_shared_lock_(expr)`|Annota una funzione e indica lo stato successivo della funzione incrementando di uno il conteggio dei blocchi condivisi dell'oggetto di blocco denominato da `expr`.|
|`_Create_lock_level_(name)`|Un'istruzione che dichiara il simbolo `name` come un livello di blocco in modo che possa essere utilizzato nelle annotazioni `_Has_Lock_level_` e `_Lock_level_order_`.|
|`_Has_lock_kind_(kind)`|Annota qualsiasi oggetto per perfezionare le informazioni sul tipo di un oggetto risorsa. A volte viene usato un tipo comune per diversi tipi di risorse e il tipo di overload non è sufficiente per distinguere i requisiti semantici tra le varie risorse. Di seguito è riportato un elenco di parametri `kind` predefiniti:<br /><br /> `_Lock_kind_mutex_`<br /> ID del tipo di blocco per mutex.<br /><br /> `_Lock_kind_event_`<br /> ID del tipo di blocco per gli eventi.<br /><br /> `_Lock_kind_semaphore_`<br /> ID del tipo di blocco per i semafori.<br /><br /> `_Lock_kind_spin_lock_`<br /> ID del tipo di blocco per i blocchi di rotazione.<br /><br /> `_Lock_kind_critical_section_`<br /> ID del tipo di blocco per le sezioni critiche.|
|`_Has_lock_level_(name)`|Annota un oggetto di blocco e lo fornisce al livello di blocco `name`.|
|`_Lock_level_order_(name1, name2)`|Istruzione che fornisce l'ordinamento dei blocchi tra `name1` e `name2` .  I blocchi con livello `name1` devono essere acquisiti prima di quelli con livello `name2` .|
|`_Post_same_lock_(expr1, expr2)`|Annota una funzione e indica che lo stato successivo dei due blocchi `expr1` e `expr2`, verrà considerato come se fosse lo stesso oggetto di blocco.|
|`_Releases_exclusive_lock_(expr)`|Annota una funzione e indica lo stato successivo della funzione riducendo di uno il conteggio dei blocchi esclusivi dell'oggetto di blocco denominato da `expr`.|
|`_Releases_lock_(expr)`|Annota una funzione e indica lo stato successivo della funzione riducendo di uno il conteggio dei blocchi dell'oggetto di blocco denominato da `expr`.|
|`_Releases_nonreentrant_lock_(expr)`|Il blocco denominato da `expr` viene rilasciato. Viene restituito un errore se il blocco non è attualmente utilizzato.|
|`_Releases_shared_lock_(expr)`|Annota una funzione e indica lo stato successivo della funzione riducendo di uno il conteggio dei blocchi condivisi dell'oggetto di blocco denominato da `expr`.|
|`_Requires_lock_held_(expr)`|Annota una funzione e indica che nello stato precedente il conteggio dei blocchi dell'oggetto denominato da `expr` è di almeno uno.|
|`_Requires_lock_not_held_(expr)`|Annota una funzione e indica che nello stato precedente il conteggio del blocco dell'oggetto denominato da `expr` è zero.|
|`_Requires_no_locks_held_`|Annota una funzione e indica che il conteggio del blocco è zero in tutti i blocchi noti al controllore.|
|`_Requires_shared_lock_held_(expr)`|Annota una funzione e indica che nello stato precedente il conteggio dei blocchi condivisi dell'oggetto denominato da `expr` è di almeno uno.|
|`_Requires_exclusive_lock_held_(expr)`|Annota una funzione e indica che nello stato precedente il conteggio dei blocchi esclusivi dell'oggetto denominato da `expr` è di almeno uno.|

## <a name="sal-intrinsics-for-unexposed-locking-objects"></a>Intrinseci SAL per oggetti di blocco non esposti

Determinati oggetti Lock non vengono esposti dall'implementazione delle funzioni di blocco associate.  Nella tabella seguente sono elencate le variabili intrinseche SAL che abilitano le annotazioni sulle funzioni che operano sugli oggetti di blocco non esposti.

|Annotazione|Descrizione|
|----------------|-----------------|
|`_Global_cancel_spin_lock_`|Viene descritto lo spin lock di annullamento.|
|`_Global_critical_region_`|Viene descritta l'area critica.|
|`_Global_interlock_`|Vengono descritte le operazioni con interlock.|
|`_Global_priority_region_`|Viene descritta la regione di prioritaria.|

## <a name="shared-data-access-annotations"></a>Annotazioni di accesso ai dati condivise

Nella tabella seguente sono elencate le annotazioni per l'accesso ai dati condivisi.

|Annotazione|Descrizione|
|----------------|-----------------|
|`_Guarded_by_(expr)`|Annota una variabile e indica se la variabile è accessibile, il conteggio dei blocchi dell'oggetto di blocco denominato da `expr` è di almeno uno.|
|`_Interlocked_`|Annota una variabile ed è equivalente a `_Guarded_by_(_Global_interlock_)` .|
|`_Interlocked_operand_`|Il parametro della funzione con annotazioni è l'operando di destinazione di una delle varie funzioni Interlocked.  Tali operandi devono disporre di proprietà aggiuntive specifiche.|
|`_Write_guarded_by_(expr)`|Annota una variabile e indica se la variabile è modificata, il conteggio dei blocchi dell'oggetto di blocco denominato da `expr` è di almeno uno.|

## <a name="smart-lock-and-raii-annotations"></a>Annotazioni Smart Lock e RAII

I blocchi intelligenti in genere avvolgono i blocchi nativi e ne gestiscono la durata. La tabella seguente elenca le annotazioni che possono essere usate con i blocchi intelligenti e i modelli di codifica RAII con il supporto per la `move` semantica.

|Annotazione|Descrizione|
|----------------|-----------------|
|`_Analysis_assume_smart_lock_acquired_`|Indica all'analizzatore di presumere che sia stato acquisito uno Smart Lock. Questa annotazione prevede un tipo di blocco di riferimento come parametro.|
|`_Analysis_assume_smart_lock_released_`|Indica all'analizzatore di presumere che sia stato rilasciato uno Smart Lock. Questa annotazione prevede un tipo di blocco di riferimento come parametro.|
|`_Moves_lock_(target, source)`|Descrive `move constructor` l'operazione che trasferisce lo stato di blocco dall' `source` oggetto a `target` . `target`Viene considerato un oggetto appena costruito, quindi qualsiasi stato precedente viene perso e sostituito con lo `source` stato. `source`Viene inoltre reimpostato sullo stato Clean senza conteggi dei blocchi o destinazioni di aliasing, ma gli alias che vi fanno riferimento rimangono invariati.|
|`_Replaces_lock_(target, source)`|Descrive la `move assignment operator` semantica in cui viene rilasciato il blocco di destinazione prima di trasferire lo stato dall'origine. Questo può essere considerato come una combinazione di `_Moves_lock_(target, source)` preceduta da un `_Releases_lock_(target)` .|
|`_Swaps_locks_(left, right)`|Descrive il `swap` comportamento standard che presuppone che gli oggetti `left` e `right` scambino il proprio stato. Lo stato scambiato include il conteggio dei blocchi e la destinazione di alias, se presenti. Gli alias che puntano agli `left` `right` oggetti e rimangono invariati.|
|`_Detaches_lock_(detached, lock)`|Descrive uno scenario in cui un tipo di wrapper di blocco consente la dissociazione con la relativa risorsa contenuta. Questo approccio è simile al `std::unique_ptr` funzionamento con il puntatore interno: consente ai programmatori di estrarre il puntatore e lasciare il contenitore del puntatore intelligente in uno stato pulito. Una logica simile è supportata da `std::unique_lock` e può essere implementata nei wrapper di blocco personalizzati. Il blocco scollegato mantiene il proprio stato (se presente, il numero di blocchi e la destinazione di aliasing), mentre il wrapper viene reimpostato in modo da contenere zero blocchi e nessuna destinazione di alias, mantenendo i propri alias. Non viene eseguita alcuna operazione sui conteggi dei blocchi (rilascio e acquisizione). Questa annotazione si comporta esattamente come `_Moves_lock_` ad eccezione del fatto che l'argomento scollegato deve essere **`return`** anziché **`this`** .|

## <a name="see-also"></a>Vedere anche

- [Uso delle annotazioni SAL per ridurre gli errori del codice C/C++](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md)
- [Informazioni su SAL](../code-quality/understanding-sal.md)
- [Annotazione di parametri di funzione e valori restituiti](../code-quality/annotating-function-parameters-and-return-values.md)
- [Annotazione del comportamento delle funzioni](../code-quality/annotating-function-behavior.md)
- [Annotazioni di struct e classi](../code-quality/annotating-structs-and-classes.md)
- [Specificare dove e quando applicare un'annotazione](../code-quality/specifying-when-and-where-an-annotation-applies.md)
- [Funzioni intrinseche](../code-quality/intrinsic-functions.md)
- [Suggerimenti ed esempi](../code-quality/best-practices-and-examples-sal.md)
