---
title: Strutture di dati di sincronizzazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: synchronization data structures
ms.assetid: d612757d-e4b7-4019-a627-f853af085b8b
caps.latest.revision: "26"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: aee9abf10646df6395984607544755dcb0ed802a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="synchronization-data-structures"></a>Strutture di dati di sincronizzazione
Il Runtime di concorrenza fornisce diverse strutture di dati che consentono di sincronizzare l'accesso ai dati condivisi da più thread. Queste strutture di dati sono utili quando si condividono i dati che vengono modificati raramente. Un oggetto di sincronizzazione, ad esempio, una sezione critica, causando altri thread in attesa fino a quando non è disponibile la risorsa condivisa. Pertanto, se si utilizza tale tipo di oggetto per sincronizzare l'accesso ai dati utilizzate di frequente, è possibile perdere la scalabilità dell'applicazione. Il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) fornisce il [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) (classe), che consente di condividere una risorsa tra diversi thread o attività senza la necessità di sincronizzazione. Per ulteriori informazioni sul `combinable` classe, vedere [contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md).  
  
##  <a name="top"></a> Sezioni  
 In questo argomento vengono descritti i seguenti tipi di blocchi di messaggi asincroni in dettaglio:  
  
-   [critical_section](#critical_section)  
  
-   [reader_writer_lock](#reader_writer_lock)  
  
-   [scoped_lock e scoped_lock_read](#scoped_lock)  
  
-   [event](#event)  
  
##  <a name="critical_section"></a>critical_section  
 Il [Concurrency:: critical_section](../../parallel/concrt/reference/critical-section-class.md) classe rappresenta un oggetto cooperativo a esclusione reciproca che passa ad altre attività anziché annullarle. Le sezioni critiche sono utili quando più thread richiedono esclusivo accesso in lettura e scrittura ai dati condivisi.  

 La `critical_section` classe non è rientrante. Il [concurrency::critical_section::lock](reference/critical-section-class.md#lock) metodo genera un'eccezione di tipo [Concurrency:: improper_lock](../../parallel/concrt/reference/improper-lock-class.md) se viene chiamato dal thread già proprietario del blocco.  


  
### <a name="methods-and-features"></a>Metodi e le funzionalità  
 La tabella seguente illustra i metodi importanti definiti per il `critical_section` classe.  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[lock](reference/critical-section-class.md#lock)|Acquisisce la sezione critica. Blocchi di contesto chiamante, fino a quando non viene acquisito il blocco.|  
|[try_lock](reference/critical-section-class.md#try_lock)|Tenta di acquisire la sezione critica, ma non è bloccata.|  
|[unlock](reference/critical-section-class.md#unlock)|Rilascia la sezione critica.|  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="reader_writer_lock"></a>reader_writer_lock  
 Il [Concurrency:: reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) classe fornisce le operazioni di lettura/scrittura thread-safe ai dati condivisi. Utilizzare blocchi in lettura/scrittura quando più thread richiedono l'accesso simultaneo in lettura a una risorsa condivisa ma raramente scrittura nella risorsa condivisa. Questa classe fornisce l'accesso in scrittura un solo thread a un oggetto in qualsiasi momento.  
  
 Il `reader_writer_lock` classe può eseguire migliore di `critical_section` classe perché un `critical_section` oggetto acquisisce l'accesso esclusivo a una risorsa condivisa, impedendo l'accesso simultaneo in lettura.  
  
 Ad esempio il `critical_section` (classe), la `reader_writer_lock` classe rappresenta un oggetto cooperativo a esclusione reciproca che passa ad altre attività anziché annullarle.  
  
 Quando un thread in cui è necessario scrivere una risorsa condivisa acquisisce un blocco di lettura/scrittura, altri thread che devono accedere alla risorsa vengono bloccati fino a quando il writer rilascia il blocco. Il `reader_writer_lock` classe è un esempio di un *scrittura preferenza* blocco, ovvero un blocco che sblocca i writer in attesa prima di sbloccare i reader in attesa.  
  
 Ad esempio il `critical_section` (classe), la `reader_writer_lock` classe non è rientrante. Il [concurrency::reader_writer_lock::lock](reference/reader-writer-lock-class.md#lock) e [concurrency::reader_writer_lock::lock_read](reference/reader-writer-lock-class.md#lock_read) metodi generano un'eccezione di tipo `improper_lock` se vengono chiamati da un thread già proprietario il blocco.  


  
> [!NOTE]
>  Poiché la `reader_writer_lock` classe non è rientrante, non è possibile eseguire l'aggiornamento di un blocco di sola lettura a un blocco di lettura/scrittura o il downgrade di un blocco di lettura/scrittura a un blocco di sola lettura. L'esecuzione di una di queste operazioni produce un comportamento non specificato.  
  
### <a name="methods-and-features"></a>Metodi e le funzionalità  
 La tabella seguente illustra i metodi importanti definiti per il `reader_writer_lock` classe.  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[lock](reference/reader-writer-lock-class.md#lock)|Acquisisce l'accesso in lettura/scrittura per il blocco.|  
|[try_lock](reference/reader-writer-lock-class.md#try_lock)|Tenta di acquisire l'accesso in lettura/scrittura per il blocco, ma non è bloccata.|  
|[lock_read](reference/reader-writer-lock-class.md#lock_read)|Acquisisce l'accesso in sola lettura per il blocco.|  
|[try_lock_read](reference/reader-writer-lock-class.md#try_lock_read)|Tenta di acquisire l'accesso in sola lettura al blocco, ma non è bloccata.|  
|[unlock](reference/reader-writer-lock-class.md#unlock)|Rilascia il blocco.|  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="scoped_lock"></a>scoped_lock e scoped_lock_read  
 Il `critical_section` e `reader_writer_lock` classi forniscono classi di supporto annidate che semplificano il modo di lavorare con gli oggetti a esclusione reciproca. Queste classi di supporto sono note come *blocchi con ambito*.  
  
 Il `critical_section` classe contiene il [concurrency::critical_section::scoped_lock](reference/critical-section-class.md#critical_section__scoped_lock_class) classe. Il costruttore acquisisce l'accesso a fornito `critical_section` oggetto; il distruttore versioni l'accesso a tale oggetto. Il `reader_writer_lock` classe contiene il [concurrency::reader_writer_lock::scoped_lock](reference/reader-writer-lock-class.md#scoped_lock_class) (classe), che è simile a `critical_section::scoped_lock`, ad eccezione del fatto che gestisce l'accesso in scrittura per l'oggetto fornito `reader_writer_lock` oggetto. Il `reader_writer_lock` classe contiene inoltre il [concurrency::reader_writer_lock::scoped_lock_read](reference/reader-writer-lock-class.md#scoped_lock_read_class) classe. Questa classe gestisce l'accesso in lettura forniti `reader_writer_lock` oggetto.  

  
 I blocchi con ambito offrono numerosi vantaggi quando si lavora con `critical_section` e `reader_writer_lock` oggetti manualmente. In genere, si assegna un blocco con ambito nello stack. Un blocco con ambito rilascia automaticamente l'accesso al relativo oggetto esclusione reciproca quando viene eliminato definitivamente; Pertanto, si manualmente Sblocca l'oggetto sottostante. Ciò è utile quando una funzione contiene più `return` istruzioni. I blocchi con ambito consente inoltre di scrivere codice indipendente dalle eccezioni. Quando un `throw` istruzione comporta la rimozione dello stack, viene chiamato il distruttore di un blocco con ambito attivo e pertanto l'oggetto a esclusione reciproca viene sempre rilasciato correttamente.  
  
> [!NOTE]
>  Quando si utilizza il `critical_section::scoped_lock`, `reader_writer_lock::scoped_lock`, e `reader_writer_lock::scoped_lock_read` classi, non rilasciare manualmente l'accesso all'oggetto sottostante l'esclusione reciproca. Questo può inserire il runtime in uno stato non valido.  
  
##  <a name="event"></a>evento  
 Il [Concurrency:: event](../../parallel/concrt/reference/event-class.md) classe rappresenta un oggetto di sincronizzazione il cui stato può essere segnalato o non segnalato. A differenza degli oggetti di sincronizzazione, ad esempio le sezioni critiche, il cui scopo è proteggere l'accesso ai dati condivisi, gli eventi sincronizzano il flusso di esecuzione.  
  
 La `event` classe è utile quando un'attività ha completato il lavoro per un'altra attività. Ad esempio, un'attività potrebbe segnalare a un'altra attività che ha letto i dati da una connessione di rete o da un file.  
  
### <a name="methods-and-features"></a>Metodi e le funzionalità  
 Nella tabella seguente vengono illustrati diversi metodi principali definiti per il `event` classe.  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[attesa](reference/event-class.md#wait)|Attende l'evento venga segnalato.|  
|[set](reference/event-class.md#set)|Imposta l'evento di stato segnalato.|  
|[reset](reference/event-class.md#reset)|Imposta l'evento su non segnalato.|  
|[wait_for_multiple](reference/event-class.md#wait_for_multiple)|Attende più eventi vengano segnalati.|  

  
### <a name="example"></a>Esempio  
 Per un esempio in cui viene illustrato come utilizzare il `event` classe, vedere [il confronto delle strutture di dati sincronizzazione all'API Windows](../../parallel/concrt/comparing-synchronization-data-structures-to-the-windows-api.md).  
  
 [[Torna all'inizio](#top)]  
  
## <a name="related-sections"></a>Sezioni correlate  
 [Confronto delle strutture di dati di sincronizzazione con l'API Windows](../../parallel/concrt/comparing-synchronization-data-structures-to-the-windows-api.md)  
 Viene confrontato il comportamento delle strutture di dati di sincronizzazione a quelli forniti dall'API di Windows.  
  
 [Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)  
 Descrive il runtime di concorrenza che semplifica la programmazione parallela e contiene i collegamenti ad argomenti correlati.

