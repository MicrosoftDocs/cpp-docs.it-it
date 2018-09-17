---
title: Suggerimenti per migliorare il codice critico | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- _lsearch function
- qsort function
- background tasks
- standard sort routines
- clock cycle losses
- code, time-critical
- memory [C++], monitoring usage
- execution, speed improvements
- local heap performance
- optimization [C++], time-critical code
- performance [C++], time-critical code
- threading [C++], performance
- cache [C++], hits and misses
- linear search performance
- page faults
- best practices, time-critical code
- searching [C++], improving performance
- sorting data, improving performance
- threading [C++], best practices
- threading [C++], background tasks
- lists, sorting
- bsearch function
- MFC [C++], performance
- sort routines
- programs [C++], performance
- _lfind function
- heap allocation, time-critical code performance
ms.assetid: 3e95a8cc-6239-48d1-9d6d-feb701eccb54
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ded526198ce983124f3aca67cdc6be3e9bd9b6a5
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45723216"
---
# <a name="tips-for-improving-time-critical-code"></a>Suggerimenti per il miglioramento del codice critico

Per scrivere codice che deve essere eseguito rapidamente è necessario comprendere tutti gli aspetti dell'applicazione e come essa interagisce con il sistema. In questo argomento verranno suggerite alternative ad alcune delle più comuni tecniche di scrittura del codice, al fine di garantire che le parti di codice che devono essere eseguite rapidamente offrano prestazioni soddisfacenti.

In breve, per migliorare la scrittura di codice da eseguire rapidamente è necessario:

- Sapere quali sono le parti del programma che devono essere eseguite velocemente.

- Conoscere le dimensioni e la velocità di esecuzione del codice.

- Conoscere l'impatto delle nuove funzionalità.

- Sapere quali sono le operazioni minime che consentono di eseguire il processo.

Per ottenere informazioni sulle prestazioni del codice, è possibile usare Performance Monitor (perfmon.exe).

## <a name="sections-in-this-article"></a>Sezioni incluse in questo articolo

- [Mancati riscontri nella cache ed errori di pagina](#_core_cache_hits_and_page_faults)

- [Ordinamento e ricerca](#_core_sorting_and_searching)

- [MFC e le librerie di classi](#_core_mfc_and_class_libraries)

- [Librerie condivise](#vcovrsharedlibraries)

- [Heap](#_core_heaps)

- [Thread](#_core_threads)

- [Piccoli Working Set](#_core_small_working_set)

##  <a name="_core_cache_hits_and_page_faults"></a> Mancati riscontri nella cache ed errori di pagina

Le richieste non soddisfatte dalla cache, sia interna che esterna, nonché gli errori di pagina (le chiamate a supporti di archiviazione secondari per istruzioni e dati dei programmi) rallentano le prestazioni di un programma.

Un riscontro nella cache della CPU può richiedere al programma 10 e 20 cicli di clock. Un riscontro nella cache esterna può richiedere cicli di clock 20-40. Con un processore che gestisce 500 milioni di istruzioni al secondo e un tempo di 2 millisecondi per un errore di pagina, un errore di pagina può richiedere un milione di cicli di clock. È quindi importante, per ottimizzare l'esecuzione del programma, scrivere codice che consenta di ridurre il più possibile il numero delle richieste non soddisfatte dalla cache e degli errori di pagina.

Uno dei motivi della lentezza di alcuni programmi è il fatto che si verifica un numero di errori di pagina o di richieste non soddisfatte dalla cache più alto del necessario. Per evitare che questo accada, è importante far uso di strutture con posizione dei riferimenti ottimale, ovvero mantenendo gli elementi correlati vicini. Talvolta una struttura di dati che sembra rappresentare la soluzione migliore non fornisce i risultati sperati proprio a causa del cattivo posizionamento dei riferimenti, e viceversa. Di seguito sono riportati due esempi:

- Gli elenchi collegati allocati in modo dinamico possono ridurre le prestazioni del programma in quanto, quando si esegue la ricerca di un elemento o si passa alla fine dell'elenco, ogni collegamento ignorato potrebbe determinare una richiesta non soddisfatta dalla cache o un errore di pagina. L'implementazione di un elenco basato su semplici matrici può risultare molto più veloce perché la memorizzazione nella cache risulta migliorata e gli errori di pagina vengono ridotti. Nonostante l'aumento di dimensioni della matrice sia più difficile da gestire, il risultato può comunque rivelarsi più veloce.

- Le prestazioni di tabelle hash che usano elenchi collegati allocati in modo dinamico possono risultare ridotte. Per estensione, le tabelle hash che usano elenchi collegati allocati in modo dinamico per l'archiviazione dei contenuti possono subire un'ulteriore riduzione di prestazioni. Una semplice ricerca lineare all'interno di una matrice potrebbe, in ultima analisi e a seconda delle circostanze, risultare più rapida. Le tabelle hash basate su matrici a volte non vengono prese in considerazione sebbene offrano spesso prestazioni superiori.

##  <a name="_core_sorting_and_searching"></a> Ordinamento e ricerca

In confronto ad altre operazioni comuni, l'ordinamento è un'operazione che richiede molto tempo. Il modo migliore per evitare rallentamenti non necessari è quello di non eseguire le operazioni di ordinamento nei momenti critici. Potrebbe essere possibile:

- Rimandare l'ordinamento fino a un momento non critici per le prestazioni.

- Ordinare i dati in un momento precedente, non-performance-critical.

- Ordinare solo la parte di dati necessaria.

Talvolta è possibile creare un elenco già ordinato. Prestare attenzione perché, per l'inserimento di dati già ordinati potrebbe essere necessaria una struttura di dati più complessa con un posizionamento dei riferimenti non ottimale, che può causare richieste della cache non soddisfatte o errori di pagina. Non esiste una soluzione perfetta per tutti i casi. È sempre necessario provare diversi approcci e valutarne le differenze.

Di seguito sono riportati alcuni suggerimenti generici per l'ordinamento:

- Usare un ordinamento predefinito per ridurre al minimo i bug.

- Per ridurre la complessità dell'ordinamento è sempre consigliabile eseguire in anticipo tutte le operazioni possibili. Se un unico passaggio sui dati semplifica il confronto e riduce l'ordinamento da O(n log n) a O(n), quasi certamente i tempi complessivi risulteranno ridotti.

- Tenere sempre presente la posizione dei riferimenti dell'algoritmo di ordinamento e i dati su cui questo verrà eseguito.

Per le ricerche sono disponibili meno alternative che per l'ordinamento. Se la velocità della ricerca è un fattore critico, una ricerca binaria o una ricerca in una tabella hash rappresenta quasi sempre il metodo preferibile, ma, come per l'ordinamento, è necessario tenere presente anche il problema della posizione dei dati. Una ricerca lineare in una matrice di piccole dimensioni può essere più veloce rispetto a una ricerca binaria in una struttura di dati con numerosi puntatori, con conseguenti errori di pagina o richieste della cache non soddisfatte.

##  <a name="_core_mfc_and_class_libraries"></a> MFC e le librerie di classi

Le classi MFC (Microsoft Foundation Classes) possono semplificare notevolmente la scrittura del codice. Quando si scrive codice che deve essere eseguito rapidamente, è opportuno essere consapevoli dell'overhead specifico di alcune classi. Esaminare il codice MFC usato dal codice che deve essere eseguito rapidamente per verificare che soddisfi i requisiti richiesti. Nell'elenco seguente sono riportate le funzioni e le classi MFC che è opportuno conoscere:

- `CString` MFC chiama la libreria di runtime C per allocare memoria per un [CString](../../atl-mfc-shared/reference/cstringt-class.md) in modo dinamico. In termini generali, l'efficacienza di `CString` non è diversa da quella di qualsiasi altra stringa allocata in modo dinamico. Come le altre stringhe allocate in modo dinamico, infatti, presenta l'overhead dovuto all'allocazione dinamica e al conseguente rilascio. Una semplice matrice `char` sullo stack spesso può servire al medesimo scopo e garantire maggiore velocità. Non usare `CString` per archiviare una stringa costante. In alternativa, utilizzare `const char *`. Qualsiasi operazione effettuata con un oggetto `CString` presenta un determinato overhead. Usando la libreria run-time [funzioni stringa](../../c-runtime-library/string-manipulation-crt.md) può risultare più veloce.

- `CArray` Oggetto [CArray](../../mfc/reference/carray-class.md) offre flessibilità che una matrice standard, ma il programma potrebbe non essere necessario che. Se si conoscono i limiti specifici della matrice, è possibile usare una matrice fissa globale. Se si usa `CArray`, usare `CArray::SetSize` per impostarne le dimensioni e specificare il numero di elementi che è possibile aggiungere quando sarà necessaria una riallocazione. In caso contrario, l'aggiunta di elementi potrebbe causare una frequente riallocazione e copia della matrice, con conseguente riduzione delle prestazioni e frammentazione della memoria. Tenere inoltre presente che se si inserisce una voce in una matrice, `CArray` sposta le voci successive nella memoria e potrebbe essere necessario aumentare le dimensioni della matrice. Queste operazioni possono causare richieste non soddisfatte dalla cache ed errori di pagina. Attraverso un esame preventivo del codice MFC ci si potrebbe quindi rendere conto della necessità di scrivere codice più specifico in base alle proprie esigenze al fine di ottenere prestazioni migliori. Dal momento che, ad esempio, `CArray` è un modello, sarà possibile fornire specifiche `CArray` più particolari per i singoli casi.

- `CList` [CList](../../mfc/reference/clist-class.md) è un elenco a doppio collegamento, in modo che l'inserimento di elementi è veloce all'inizio, nella parte finale e in una posizione nota (`POSITION`) nell'elenco. La ricerca di un elemento in base al valore o all'indice richiede tuttavia una ricerca sequenziale che può essere lenta se l'elenco è lungo. Se il codice non richiede un elenco con doppio collegamento, può essere opportuno riconsiderare l'utilizzo di `CList`. Il ricorso a un elenco con singolo collegamento evita infatti l'overhead dovuto all'aggiornamento di un puntatore supplementare per tutte le operazioni, nonché la memoria necessaria per tale puntatore. La memoria supplementare richiesta non è molta, ma può rappresentare un'ulteriore causa di richieste della cache non soddisfatte o errori di pagina.

- `IsKindOf` Questa funzione può generare numerose chiamate e accedere a una grande quantità di memoria in diverse aree di dati, causando errato posizionamento dei riferimenti. È utile nel caso di una build di debug, ad esempio in una chiamata ASSERT, ma è preferibile non usarla in una build di rilascio.

- `PreTranslateMessage` Usare `PreTranslateMessage` quando una determinata struttura di windows deve diversi tasti di scelta rapida o quando è necessario inserire la gestione dei messaggi nel message pump. `PreTranslateMessage` modifica i messaggi di invio MFC. Eseguire l'override di `PreTranslateMessage` se necessario, solo al livello richiesto. Se, ad esempio, si è interessati solo ai messaggi indirizzati agli elementi figlio di una determinata visualizzazione, non è necessario eseguire l'override di `CMainFrame::PreTranslateMessage`. Eseguire invece l'override di `PreTranslateMessage` per la classe di visualizzazione.

   Non cercare di escludere il normale percorso di invio usando `PreTranslateMessage` per gestire i messaggi inviati a qualsiasi finestra. Uso [routine della finestra](../../mfc/registering-window-classes.md) e mappe messaggi MFC a tale scopo.

- `OnIdle` Gli eventi di inattività possono verificarsi in momenti imprevisti, ad esempio tra `WM_KEYDOWN` e `WM_KEYUP` eventi. I timer possono rappresentare un modo più efficace per attivare il codice. Non forzare chiamate ripetute di `OnIdle` generando messaggi falsi o restituendo sempre `TRUE` da un override di `OnIdle`, perché in questo modo il thread non sarebbe mai inattivo. Anche in questo caso sarebbe più appropriato usare un timer o un thread separato.

##  <a name="vcovrsharedlibraries"></a> Librerie condivise

Riutilizzare il codice può essere utile. Tuttavia, se il codice che si vuole riutilizzare è stato scritto da altri, sarà opportuno verificarne l'esatto funzionamento nei casi in cui le prestazioni sono essenziali. Il metodo migliore consiste nell'esaminare il codice sorgente un'istruzione alla volta o nell'eseguire misurazioni mediante strumenti quali PView o Performance Monitor.

##  <a name="_core_heaps"></a> Heap

È consigliabile ricorrere all'utilizzo di più heap solo in casi particolari. Gli heap aggiuntivi creati con `HeapCreate` e `HeapAlloc` consentono di gestire e quindi eliminare un set di allocazioni correlato. Non impegnare una quantità eccessiva di memoria. Se si usano più heap, prestare particolare attenzione alla quantità di memoria inizialmente impegnata.

Anziché più heap, è possibile usare funzioni di supporto come collegamento tra il codice e l'heap predefinito. Le funzioni di supporto facilitano eventuali strategie di allocazione personalizzate che possono migliorare le prestazioni dell'applicazione. Se ad esempio si eseguono frequentemente piccole allocazioni, sarà possibile confinare queste allocazioni a una parte dell'heap predefinito. È possibile allocare un blocco di memoria di grandi dimensioni, quindi usare una funzione di supporto per effettuare sottoallocazioni da tale blocco. In questo modo non verranno prodotti heap aggiuntivi con memoria inutilizzata, perché l'allocazione ha origine dall'heap predefinito.

In alcuni casi, tuttavia, il ricorso all'heap predefinito può ridurre la vicinanza dei riferimenti. Usare Process Viewer, Spy++ o Performance Monitor per misurare gli effetti dello spostamento degli oggetti da un heap all'altro.

Misurare gli heap in modo da controllare ogni allocazione su di essi. Utilizza run-time di C [routine dell'heap di debug](/visualstudio/debugger/crt-debug-heap-details) checkpoint ed eseguire il dump dell'heap. È possibile esportare l'output in un programma di foglio di calcolo, ad esempio Microsoft Excel, e usare tabelle pivot per visualizzare i risultati. Verificare il numero totale, la dimensione e la distribuzione delle allocazioni. Confrontare questi valori con le dimensioni dei working set. Esaminare inoltre i cluster degli oggetti di dimensioni correlate.

È anche possibile usare i contatori delle prestazioni per monitorare l'utilizzo della memoria.

##  <a name="_core_threads"></a> Thread

Per le attività eseguite in background, un'efficace gestione dell'inattività degli eventi può risultare più veloce rispetto all'utilizzo dei thread. È più facile comprendere i concetti relativi alla posizione dei riferimenti in un programma a thread singolo.

In genere è buona norma usare un thread solo se la notifica del sistema operativo in base a cui si esegue il blocco costituisce la base delle attività in background. In questo caso,i thread rappresentano la migliore soluzione perché non è pratico bloccare un thread principale su un evento.

I thread presentano inoltre problemi di comunicazione. È necessario gestire il collegamento di comunicazione tra i thread mediante un elenco di messaggi oppure allocando e usando la memoria condivisa. La gestione del collegamento di comunicazione richiede in genere una sincronizzazione al fine di evitare race condition e problemi di deadlock. Questa complessità può facilmente determinare bug e problemi di prestazioni.

Per altre informazioni, vedere [elaborazione di cicli di inattività](../../mfc/idle-loop-processing.md) e [Multithreading](../../parallel/multithreading-support-for-older-code-visual-cpp.md).

##  <a name="_core_small_working_set"></a> Piccoli Working Set

I working set di dimensioni inferiori sono caratterizzati da posizionamento ottimale dei riferimenti, un numero inferiore di errori di pagina e un maggior numero di richieste soddisfatte dalla cache. Il working set del processo è la metrica più precisa fornita direttamente dal sistema operativo per valutare la posizione dei riferimenti.

- Per impostare i limiti superiori e inferiori del working set, usare [SetProcessWorkingSetSize](/windows/desktop/api/winbase/nf-winbase-getprocessworkingsetsize).

- Per ottenere i limiti superiori e inferiori del working set, usare [GetProcessWorkingSetSize](/windows/desktop/api/winbase/nf-winbase-setprocessworkingsetsize).

- Per visualizzare le dimensioni del working set, usare Spy++.

## <a name="see-also"></a>Vedere anche

[Ottimizzazione del codice](../../build/reference/optimizing-your-code.md)