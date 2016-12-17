---
title: "Novit&#224; relative a Visual C++ in Visual Studio 2015 | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 1cc09fad-85a2-43c2-b022-bb99f5fe0ad7
caps.latest.revision: 101
caps.handback.revision: 101
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Novit&#224; relative a Visual C++ in Visual Studio 2015
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In Visual Studio 2015 il compilatore C\+\+ e la libreria standard sono stati aggiornati con un supporto migliorato per C\+\+11 e con il supporto iniziale per alcune funzionalità di C\+\+14.  È inoltre incluso il supporto preliminare per determinate funzionalità previste per lo standard C\+\+17.  
  
 Sono stati anche aggiunti modelli di progetto per lo sviluppo multipiattaforma per più dispositivi in [Android e iOS](../Topic/Visual%20C++%20for%20Cross-Platform%20Mobile%20Development.md), sono stati apportati vari miglioramenti correlati a [diagnostica](#BK_Diagnostics) e [produttività](#BK_IDE) e, infine, i [tempi di compilazione](#BK_FasterBuildTimes) sono stati ridotti in modo significativo.  
  
> [!WARNING]
>  In Visual Studio 2015, Visual C\+\+ non è installato per impostazione definita.  Durante l'installazione, assicurarsi di scegliere l’installazione **Personalizzata**, quindi selezionare i componenti C\+\+ necessari.  In alternativa, se Visual Studio è già installato, scegliere **File &#124; Nuovo &#124; Progetto &#124; C\+\+** e verrà richiesto di installare i componenti necessari.  
  
 Per informazioni sulle altre aggiunte disponibili in Visual Studio 2015, vedere [Novità di Visual Studio 2015](../Topic/What's%20New%20in%20Visual%20Studio%202015.md).  
  
 In questo argomento:  
  
1.  [Compilatore](#BK_Compiler)  
  
2.  [Libreria standard C++](#BK_CppStdLib)  
  
3.  [Libreria di runtime C](#BK_CRT)  
  
4.  [Tempi di compilazione ridotti](#BK_FasterBuildTimes)  
  
5.  [Prestazioni e qualità del codice](#BK_PerfCodeQuality)  
  
6.  [Produttività, debug e diagnostica](#BK_IDE)  
  
    1.  [IntelliSense con singolo file](#BK_SingleFileIntelliSense)  
  
    2.  [Refactoring](#BK_Refactoring)  
  
    3.  [Miglioramenti del database di programma](#BK_PDB)  
  
    4.  [Diagnostica](#BK_Diagnostics)  
  
7.  [Destinazione Windows 10](#BK_Win10)  
  
8.  [Diagnostica grafica](#BK_GraphicsDiagnostics)  
  
9. [Nuovo strumento Utilizzo della GPU](#BK_GPUUsage)  
  
10. [Nuove funzionalità MFC](#BK_MFC)  
  
## Supporto degli standard ISO C\/C\+\+  
  
###  <a name="BK_Compiler"></a> Compilatore  
  
-   **Funzioni ripristinabili \(resume\/await\)** Le parole chiave resume e await forniscono il supporto del livello di linguaggio per funzioni di programmazione asincrone e abilitano le funzioni ripristinabili.  Attualmente questa funzionalità è ancora in fase sperimentale ed è disponibile solo per destinazioni x64.  **Proposta per C\+\+17 \[N3858\].**  
  
-   **Espressioni lambda generiche \(polimorfiche\)** È ora possibile specificare i tipi di parametro delle funzioni lambda usando la parola chiave auto. In questo contesto, l'interpretazione del compilatore per auto è che l'operatore della chiamata alla funzione della chiusura è un modello di funzione membro e che ciascuna occorrenza di auto nell'espressione lambda corrisponde a un parametro di tipo di un modello distinto.  **\(C\+\+14\)**  
  
-   **Espressioni generalizzate di acquisizione delle espressioni lambda** Anche note come init\-capture.  Il risultato di un'espressione arbitraria ora può essere assegnato a una variabile nella clausola di acquisizione di un'espressione lambda.  Questo consente ai tipi di solo spostamento di essere acquisiti in base al valore e consente a un'espressione lambda di definire membri dati arbitrari nel relativo oggetto di chiusura.  **\(C\+\+14\)**  
  
-   **Valori letterali binari** Sono ora supportati i valori letterali binari.  Tali valori letterali sono preceduti da 0B o 0b e comprendono solo le cifre 0 e 1.  **\(C\+\+14\)**  
  
-   **Deduzione del tipo restituito** Il tipo restituito di normali funzioni può ora essere dedotto, anche per funzioni con più istruzioni return e funzioni ricorsive.  Tali definizioni di funzione sono precedute dalla parola chiave auto come avviene per le definizioni di funzione con un tipo restituito finale, ma omettendo tale tipo restituito finale.  **\(C\+\+14\)**  
  
-   **decltype\(auto\)** La deduzione dei tipi tramite la parola chiave auto per l'inizializzazione di espressioni rimuove dall'espressione i qualificatori di riferimento e i qualificatori CV di primo livello.  decltype\(auto\) mantiene i qualificatori ref e cv e può ora essere usato ovunque sia possibile usare auto, tranne per introdurre una funzione con un tipo restituito derivato o finale.  **\(C\+\+14\)**  
  
-   **Generazione implicita di funzioni membro speciali move** I costruttori e gli operatori di assegnazione move vengono ora generati in modo implicito quando le condizioni lo consentono, rendendo il compilatore pienamente conforme ai riferimenti rvalue di C\+\+11.  **\(C\+\+11\)**  
  
-   **Eredità dei costruttori** Una classe derivata può ora specificare che erediterà i costruttori della relativa classe base, Base, mediante l'inclusione dell'istruzione usando Base::Base; nella relativa definizione.  Una classe derivata può ereditare solo tutti i costruttori della relativa classe base, non è possibile ereditare solo determinati costruttori base.  Una classe derivata non può ereditare da più classi base se dispongono di costruttori che dispongono di una firma identica, né può la classe di derivazione definisce un costruttore che ha una firma identica a uno dei costruttori ereditati.  **\(C\+\+11\)**  
  
-   **Query sull'allineamento e controllo** È possibile eseguire query sull'allineamento di una variabile usando l'operatore alignof\(\) e quindi controllare tale allineamento tramite l'identificatore alignas\(\).  alignof\(\) restituisce il limite di byte su cui devono essere allocate le istanze del tipo. Per i riferimenti viene restituito l'allineamento del tipo cui viene fatto riferimento e per le matrici viene restituito l'allineamento del tipo dell'elemento.  alignas\(\) controlla l'allineamento di una variabile. Accetta una costante o un tipo, dove un tipo è una sintassi abbreviata per alignas\(alignof\(type\)\).  **\(C\+\+11\)**  
  
-   **sized deallocation** È ora possibile eseguire l'overload delle funzioni globali  `void operator delete(void *, std::size_t) noexcept` e `void operator delete[](void *, std::size_t) noexcept`.  
  
-   **Sizeof esteso** le dimensioni di una variabile membro di classe o struttura ora possono essere determinate senza un'istanza della classe o della struttura usando sizeof\(\).**\(C\+\+11\)**  
  
-   Gli **attributi** consentono di estendere la sintassi su funzioni, variabili e altri elementi di programma senza definire nuove parole chiave.**\(C\+\+11\)**  
  
-   **constexpr** Per la creazione di variabili costanti, funzioni e tipi definiti dall'utente in fase di compilazione.  **\(C\+\+11\)**  
  
-   **Valori letterali definiti dall'utente \(UDL, User Defined Literals\)** È ora possibile aggiungere suffissi significativi ai valori letterali numerici e stringa per concedere a questi semantiche specifiche.  Il compilatore interpreta i valori letterali suffissi come chiamate all'operatore UDL appropriato.  **\(C\+\+11\)**  
  
-   **Statistiche "magiche" thread\-safe** le variabili locali statiche sono ora inizializzate in modo thread\-safe, eliminando la necessità di sincronizzazione manuale.  Solo l'inizializzazione è thread\-safe, mentre per l'uso delle variabili locali statiche da parte di più thread è ancora necessario eseguire manualmente la sincronizzazione.  La funzionalità di elementi statici thread\-safe può essere disabilitata usando il contrassegno \/Zc:threadSafeInit\- per evitare di creare una dipendenza da CRT.  **\(C\+\+11\)**  
  
-   **Archiviazione locale dei thread** Usare la parola chiave thread\_local per dichiarare che deve essere creato un oggetto indipendente per ogni thread.  **\(C\+\+11\)**  
  
-   **noexcept** L'operatore noexcept ora può essere usato per verificare se un'espressione potrebbe generare un'eccezione.  L'identificatore noexcept può ora essere usato per specificare che una funzione non genera eccezioni.  **\(C\+\+11\)**  
  
-   **Spazi dei nomi inline** Uno spazio dei nomi può ora essere specificato come inline per eseguire il contenuto nello spazio dei nomi che lo contiene.  Gli spazi dei nomi inline possono essere usati per creare librerie con versione che espongono la versione più recente per impostazione predefinita, pur mantenendo in modo esplicito la disponibilità di versioni precedenti dell'API.  **\(C\+\+11\)**  
  
-   **Unioni senza restrizioni** Un tipo di unione può ora contenere tipi con costruttori non comuni.  È necessario definire costruttori per tali unioni.  **\(C\+\+11\)**  
  
-   **Nuovi tipi di carattere e i valori letterali Unicode** Sono ora supportati valori letterali stringa e carattere UTF\-8, UTF\-16 e UTF\-32 e sono stati introdotti nuovi tipi di carattere char16\_t e char32\_t.  I valori letterali carattere possono essere preceduti da u8 \(UTF\-8\), u \(UTF\-16\) o U \(UTF\-32\) come in U'a', mentre i valori letterali stringa possono essere preceduti dagli equivalenti in formato stringa non elaborata u8R \(UTF\-8 stringa non elaborata\), uR \(UTF\-16 stringa non elaborata\) o UR \(UTF\-32 stringa non elaborata\).  I nomi di caratteri universali possono essere usati liberamente nei valori letterali unicode come in u'\\u00EF', u8"\\u00EF is i" e u"\\U000000ef is I".  **\(C\+\+11\)**  
  
-   **separatori di cifre** È possibile inserire virgolette singole a intervalli regolari per facilitare la lettura dei valori letterali numerici lunghi:  `int x = 1'000'000;` **C\+\+ 14**  
  
-   **\_\_func\_\_** L'identificatore predefinito \_\_func\_\_ viene definito in modo implicito come una stringa che contiene il nome non qualificato e non decorato della funzione contenitore.  
  
-   **\_\_restrict \_\_** È ora possibile applicare restrict ai riferimenti.  
  
###  <a name="BK_CppStdLib"></a> Libreria standard C\+\+  
  
-   **Valori letterali definiti dall'utente \(UDL\) per i tipi di libreria standard** Le intestazioni \<chrono\>, \<string\> e \<complex\> forniscono ora operatori UDL per praticità.  Ad esempio, 123ms significa std::chrono::milliseconds\(123\), "hello"s significa std::string\("hello"\) e 3.14i significa std::complex\(0.0, 3.14\).  
  
-   **Iteratori in avanti Null** La libreria standard ora consente di creare iteratori in avanti che non fanno riferimento a un'istanza del contenitore.  Tali iteratori sono inizializzati dal valore e risultano uguali per un tipo di contenitore specifico.  Il confronto tra un iteratore inizializzato da un valore e uno non inizializzato da un valore non è definito.  **\(C\+\+14\)**  
  
-   **quoted\(\)** La libreria standard supporta ora la funzione quoted\(\) per semplificare l'I\/O e l'uso di valori di stringa tra virgolette.  Con quoted\(\), un'intera stringa tra virgolette viene considerata come una singola entità \(come lo sono le stringhe di caratteri diversi da spazi vuoti nei flussi I\/O\). Inoltre, le sequenze di escape vengono mantenute tramite operazioni di I\/O.  **\(C\+\+14\)**  
  
-   **Ricerca eterogenea di associativi** La libreria standard ora supporta funzioni di ricerca eterogenee per funzioni relative a contenitori associativi.  Tali funzioni abilitano la ricerca per tipi diversi da key\_type, purché il tipo sia paragonabile a key\_type.  **\(C\+\+14\)**  
  
-   **Sequenze di valori Integer in fase di compilazione** La libreria standard supporta ora il tipo integer\_sequence che rappresenta una sequenza di valori integer che può essere valutata in fase di compilazione per semplificare l'uso di pacchetti di parametri nonché alcuni modelli di programmazione.  **\(C\+\+14\)**  
  
-   **exchange\(\)** La libreria standard ora supporta la funzione di utilità std::exchange\(\) per assegnare un nuovo valore a un oggetto e restituisce il valore precedente.  Per i tipi complessi, exchange\(\) evita di copiare il valore precedente quando un costruttore di spostamento è disponibile, evita di copiare il nuovo valore se temporaneo o spostato e accetta qualsiasi tipo come nuovo valore usufruendo di qualsiasi operatore di assegnazione di conversione.  **\(C\+\+14\)**  
  
-   **Dual\-Range equal\(\), is\_permutation\(\), mismatch\(\)** La libreria standard supporta ora gli overload per std::equal\(\), std::is\_permutation\(\) e std::mismatch\(\) che accettano due intervalli.  Questi overload verificano che le due sequenze siano della stessa lunghezza, il che rimuove questa responsabilità dal codice chiamante. Per le sequenze che non supportano i requisiti di un iteratore casuale, questi overload verificano la lunghezza durante il confronto di elementi, tecnica che risulta più efficiente.  **\(C\+\+14\)**  
  
-   **get\<T\>\(\)** La libreria standard supporta ora la funzione get\<T\>\(\) per consentire l'indirizzamento degli elementi della tupla in base al relativo tipo.  Se una tupla contiene due o più elementi dello stesso tipo, get\<T\>\(\), non sarà possibile indirizzare la tupla in base a quel tipo, mentre sarà comunque possibile indirizzare altri elementi tipizzati in modo univoco.  **\(C\+\+14\)**  
  
-   **tuple\_element\_t** La libreria standard ora supporta l'alias di tipo tuple\_element\_t\<I, T\> che è un alias per il nome di tipo tuple\_element\<I, T\>::type.  Questo risulta pratico per i programmatori di modelli, come avviene per altri alias di tipo metafunzione in \<type\_traits\>.  **\(C\+\+14\)**  
  
-   **Specifica tecnica del file system "V3"** L'implementazione inclusa della specifica tecnica del file system è stata aggiornata alla versione 3 della specifica.  \[N3940\]  
  
-   **Allocatori minimi** la libreria standard supporta ora l'interfaccia dell'allocatore minimo ovunque. Tra le correzioni più importanti std::function, shared\_ptr, allocate\_shared\(\) e basic\_string.  **\(C\+\+11\)**  
  
-   **\<chrono\>** I tipi chrono high\_resolution\_clock e steady\_clock sono stati corretti.  **\(C\+\+11\)**  
  
-   **N2761 Elementi atomici nei gestori di segnale \(C\+\+11\)**  
  
-   **N3922 Nuove regole per l'automazione con braced\-init\-list. \(C\+\+17\)**  
  
-   **N4051 typename in parametri di modello, \(C\+\+17\)**  
  
-   **N4259 std::uncaught\_exceptions\(\)**  
  
-   **N4266 Attributi per spazi dei nomi ed enumeratori**  
  
-   **N4267 Valori letterali carattere u8**  
  
###  <a name="BK_CRT"></a> Libreria di runtime C  
 **Refactoring della libreria CRT**La libreria CRT è stata sottoposta a refactoring in due parti.  **Universal CRT** contiene il codice che implementa la libreria di runtime C standard.  vcruntime140.dll \(o .lib\) contiene codice specifico della versione per l'avvio dei processi e la gestione delle eccezioni.  Universal CRT ha un'API stabile, quindi può essere usato senza modificare il numero di versione in ogni versione di Visual Studio.  Ora è un componente del sistema operativo che viene gestito da Windows Update.  È già installato in Windows 10.  Usando Visual C\+\+ Redistributable Package \(vcredist\) è possibile distribuirlo con le applicazioni per le versioni precedenti di Windows.  
  
 **Conformità C99** [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)] implementa completamente la libreria standard C99, ad eccezione di eventuali funzionalità della libreria che dipendono da funzionalità del compilatore non ancora supportate dal compilatore Visual C\+\+ \(ad esempio, \<tgmath.h\> non è implementato\).  
  
 **Prestazioni** Gran parte della libreria è stata sottoposta a refactoring per ottimizzare e semplificare l'uso di macro di file di intestazione.  Ciò accelera la compilazione e IntelliSense, e migliora la leggibilità.  Inoltre, molte funzioni stdio sono state riscritte per la conformità agli standard e prestazioni migliorate.  
  
### Modifiche di interruzione  
 Questo supporto migliorato per gli standard ISO C\/C\+\+ può richiedere modifiche al codice esistente in modo che sia conforme a C\+\+11 e C99, e venga compilato correttamente in Visual Studio 2015.  Per altre informazioni, vedere [Modifiche importanti in Visual C\+\+ 2015](../porting/visual-cpp-change-history-2003-20151.md).  
  
 La classe concurrency::task e i tipi correlati in ppltasks.h non sono più basati su runtime ConcRT.  Ora viene usato il pool di thread di Windows come utilità di pianificazione.  Questo ha effetto solo su codice che usa primitive di sincronizzazione ConcRT in operazioni concurrency::task.  Tale codice deve invece usare le primitive di sincronizzazione di Windows.  
  
 Le primitive di sincronizzazione nella libreria STL non sono più basate su ConcRT.  Per evitare deadlock, non usare le primitive di sincronizzazione STL all'interno di funzioni quali **concurrency::parallel\_for** o con i tipi di agente asincrono PPL.  
  
##  <a name="BK_FasterBuildTimes"></a> Tempi di compilazione ridotti  
  
-   **Generazione di codice fase di collegamento \(LTCG\) incrementale** Il collegamento incrementale può ora essere usato con LTCG per ridurre i tempi di collegamento delle applicazioni che usano LTCG.  Attivare questa funzionalità usando le opzioni \/LTCG:incremental e \/LTCG:incremental\_rebuild.  \\  
  
-   **Collegamento incrementale per librerie statiche** Le modifiche alle librerie statiche a cui viene fatto riferimento da altri moduli di codice ora vengono collegate in modo incrementale.  
  
-   **\/Debug:FastLink** Riduce notevolmente i tempi di collegamento usando nuove tecniche di creazione di PDB.  
  
-   Sono stati apportati miglioramenti algoritmici al linker di ridurre i tempi di collegamento.  
  
-   Sono stati apportati miglioramenti che consentono di creare codice complesso per modelli più rapidamente.  
  
-   **Rapida strumentazione per ottimizzazioni guidate da profilo \(PGO\)** È stato introdotto in PGO un metodo nuovo e leggero di strumentazione per giochi e sistemi in tempo reale.  Insieme alle altre nuove funzionalità disponibili tramite le opzioni del linker \/GENPROFILE e \/FASTGETPROFILE è ora possibile bilanciare qualità del codice e velocità di compilazione quando si usa PGO.  
  
-   **Riduzione delle dimensioni dei file dell'oggetto** miglioramenti della libreria standard del compilatore e C\+\+ comportare significativamente più piccoli file oggetto e le librerie statiche.  Questi miglioramenti non influenzano le dimensioni di librerie collegate in modo dinamico \(DLL\) o file eseguibili \(EXE\) perché il codice ridondante è stato rimosso dal linker.  
  
##  <a name="BK_PerfCodeQuality"></a> Prestazioni e qualità del codice  
  
-   **Miglioramenti alla vettorializzazione automatica** Include ora la vettorializzazione del flusso di controllo \(if\-then\-else\), la vettorializzazione durante la compilazione con \/O1 \(Riduci dimensione\) e miglioramenti alla qualità del codice vettoriale in generale, incluso il supporto per la libreria STL parallela, la vettorializzazione maggiormente basata su intervallo per i cicli e il supporto per \#pragma loop\(ivdep\).  
  
-   **Miglioramenti all'ottimizzazione scalare** Migliore generazione di codice per operazioni di test dei bit, controllo dell'unione dei flussi e delle ottimizzazioni \(commutazione loop\-if\) e altre ottimizzazioni scalari \(ad esempio una migliore generazione di codice per std::min e std::max\).  
  
-   **Ottimizzazione PGO \(Profile Guided Optimization\)** È stato apportato un numero di miglioramenti a PGO, compresi set di riferimento migliorati, migliori funzionalità di layout dei dati, la possibilità di riutilizzare incorporamenti effettuati in precedenza relativi al rapporto velocità\/dimensioni  e alle preferenze di layout.  
  
##  <a name="BK_IDE"></a> Produttività, debug e diagnostica  
  
###  <a name="BK_SingleFileIntelliSense"></a> IntelliSense con singolo file  
 È ora possibile ottenere IntelliSense quando si apre un singolo file di codice sorgente nell'editor, senza dover aprire alcun file di progetto.  
  
###  <a name="BK_Refactoring"></a> Refactoring  
 È stato aggiunto il supporto del refactoring per C\+\+ con le funzionalità seguenti:  
  
-   **Rinomina simbolo** Modifica tutte le occorrenze di un simbolo con un nuovo nome.  
  
-   **Estrazione di funzioni** Sposta il codice selezionato nella propria funzione.  Questo refactoring è disponibile come un'estensione di Visual Studio in Visual Studio Gallery.  
  
-   **Implementa elementi virtuali puri** Genera le definizioni di funzione per le funzioni virtuali pure ereditate da una classe o struttura.  Sono supportate eredità sia multiple che ricorsive.  Attivare questo refactoring dalla definizione della classe a eredità per implementare tutte le funzioni virtuali pure ereditate oppure da un identificatore di classe base per implementare funzioni virtuali pure solo da tale classe base.  
  
-   **Crea dichiarazione o definizione** Genera una dichiarazione dalla definizione esistente o predefinita di una dichiarazione esistente.  Accedere a questo refactoring dalla definizione o dichiarazione esistente o dall'indicatore con l'icona di una lampadina.  
  
-   **Sposta definizione di funzione** Sposta il corpo di una funzione tra il codice sorgente e i file di intestazione.  Attivare questo refactoring dalla firma della funzione.  
  
-   **Converti in valore letterale stringa non elaborata** Converte una stringa che contiene le sequenze di escape in un valore letterale stringa non elaborata.  Le sequenze di escape supportate sono \\\\ \(barra rovesciata\), \\n \(nuova riga\), \\t \(tabulazione\), \\' \(virgoletta singola\), \\ " \(virgolette doppie\) e \\?  \(punto interrogativo\).  Attivare questa funzionalità facendo clic in un punto qualsiasi all'interno di una stringa.  
  
 La ricerca nei file è stata migliorata abilitando l'aggiunta dei risultati successivi a quelli precedenti; è ora possibile eliminare i risultati accumulati.  
  
 **Miglioramenti della leggibilità di IntelliSense** Le creazioni di istanze del modello complesse e i typedef sono stati semplificati nella Guida ai parametri e nelle informazioni rapide per semplificarne la lettura.  
  
###  <a name="BK_PDB"></a> Miglioramenti del database di programma  
  
-   La velocità di analisi della soluzione è stata migliorata, in particolare per quanto riguarda soluzioni di grandi dimensioni.  
  
-   Operazioni quali Vai a definizione non vengono più bloccate nel corso dell'analisi della soluzione ad eccezione delle analisi iniziali, quando una soluzione viene ad esempio aperta per la prima volta.  
  
##  <a name="BK_Diagnostics"></a> Diagnostica  
  
1.  **Visualizzazioni debugger** Aggiunta di visualizzazioni Nativs al progetto Visual Studio per una gestione semplificata e una maggiore integrazione del controllo del codice sorgente.  I file Natvis possono essere modificati e salvati durante una sessione di debug e il debugger rileverà automaticamente le modifiche.  Per altre informazioni, vedere questo [post del blog](http://blogs.msdn.com/b/vcblog/archive/2014/06/12/project-support-for-natvis.aspx).  
  
2.  **Diagnostica della memoria nativa**  
  
    1.  **Sessioni di diagnostica della memoria** \(Ctrl\+Alt\+F2\) Consente di eseguire il monitoraggio in tempo reale dell'uso di memoria dell'applicazione nativa durante una sessione di debug.  
  
    2.  **Snapshot di memoria** Acquisizione di immagini temporanee del contenuto heap dell'applicazione.  Le differenze nello stato dell'heap possono essere esaminate confrontando due snapshot di memoria.  Consente di visualizzare tipi di oggetto, valori delle istanze e stack di chiamate di allocazione per ogni istanza dopo l'arresto dell'applicazione.  È possibile visualizzare l'albero delle chiamate per stack frame per ogni snapshot.  
  
3.  **Rilevamento e ripristino dei deadlock migliorati** durante le chiamate di funzioni C\+\+ dalle finestre Espressioni di controllo e Controllo immediato.  
  
4.  **Miglioramenti alla diagnostica del compilatore** Il compilatore fornisce avvisi migliorati sul codice sospetto.  Sono stati aggiunti nuovi avvisi \(ad esempio per variabili nascoste e stringhe di formato printf non corrispondenti\).  I messaggi di avviso esistenti sono stati resi più chiari.  
  
5.  **Flag \/Wv** Gli avvisi introdotti dopo una specifica versione del compilatore XX.YY.ZZZZ possono ora essere disabilitati usando il flag \/Wv:XX.YY.ZZZZ.  Altri avvisi possono essere disabilitati in modo specifico, oltre a quelli specificati tramite il flag \/Wv.  
  
6.  **Supporto migliorato per il debug di codice ottimizzato** È possibile eseguire il debug del codice con i flag \/Zi, \/Zo o \/Z7 abilitati.  
  
##  <a name="BK_Win10"></a> Destinazione Windows 10  
 Visual Studio ora supporta la destinazione Windows 10 in C\+\+.  Nuovi modelli di progetto per lo sviluppo di applicazioni universali di Windows supportano dispositivi con destinazione Windows 10, quali computer desktop, telefoni cellulari, tablet, HoloLens e altri dispositivi.  Per altre informazioni, vedere [Creare un'app "hello world" in Windows 10](https://msdn.microsoft.com/en-us/library/windows/apps/dn996906.aspx).  
  
##  <a name="BK_GraphicsDiagnostics"></a> Diagnostica grafica  
 La diagnostica grafica è stata migliorata con le funzionalità seguenti:  
  
-   **Supporto della diagnostica grafica per DirectX12.** Lo strumento di diagnostica grafica di Visual Studio supporta ora il debug dei problemi di rendering nelle applicazioni DirectX12.  
  
-   **Acquisizione consecutiva** Acquisizione fino a 30 frame consecutivi in un'unica operazione.  
  
-   **Acquisizione a livello di codice** Avvio dell'acquisizione di frame a livello di codice.  L'acquisizione a livello di codice è particolarmente utile per il debug di compute shader in programmi che non chiamano mai Present oppure quando un problema di rendering è difficile da acquisire manualmente, ma può essere previsto a livello di codice usando lo stato dell'app in fase di esecuzione.  
  
-   **Elenco eventi grafici migliorato** Aggiunta di una nuova visualizzazione Chiamate di disegno, che visualizza gli eventi acquisiti e il relativo stato in una gerarchia organizzata dalle chiamate di disegno.  È possibile espandere le chiamate di disegno per visualizzare lo stato del dispositivo al momento della chiamata di disegno ed espandere ulteriormente ogni tipo di stato per visualizzare gli eventi che ne hanno impostato i valori.  
  
-   **Supporto per Windows Phone 8.1** La diagnostica grafica fornisce ora supporto completo per il debug di app di Windows Phone 8.1 nell'emulatore di Windows Phone o in Windows Phone con tethering.  
  
-   **Analisi dei Frame di grafica** Questo strumento consente di raccogliere misurazioni delle prestazioni dei frame acquisiti. Inoltre, lo strumento esegue una serie di esperimenti predefiniti che forniscono informazioni relative all'influenza di varie tecniche di trama sulle prestazioni all'applicazione.  L'analisi dei frame raccoglie inoltre contatori delle prestazioni provenienti dall'hardware.  
  
-   **Interfaccia utente dedicata per l'analisi grafica** La nuova finestra Analizzatore grafica di Visual Studio è un'area di lavoro dedicata per l'analisi dei frame di grafica.  
  
-   **Funzionalità Modifica e applicazione dello shader** È possibile visualizzare l'impatto delle modifiche al codice dello shader in un log acquisito senza eseguire nuovamente l'app.  
  
-   Configurare le opzioni di acquisizione in Strumenti \-\> Opzioni \-\> Diagnostica grafica.  
  
-   Strumento da riga di comando per l'acquisizione e la riproduzione di frame.  
  
 Per altre informazioni, vedere [Diagnostica grafica \(Debug grafica DirectX\)](../Topic/Visual%20Studio%20Graphics%20Diagnostics.md).  
  
##  <a name="BK_GPUUsage"></a> Nuovo strumento Utilizzo della GPU  
 Lo strumento Utilizzo della GPU in Visual Studio 2015 consente di comprendere l'utilizzo della GPU delle applicazioni DirectX.  Durante l'esecuzione dell'applicazione sono disponibili grafici in tempo reale per durata e frequenza dei frame e uso della GPU.  Inoltre, la raccolta e l'analisi dei dati dettagliati sull'utilizzo della GPU consentono allo strumento di fornire informazioni sui tempi di esecuzione di CPU e GPU per singoli eventi DirectX e pertanto può essere utile per determinare se la CPU o GPU è il collo di bottiglia delle prestazioni.  Vedere [Utilizzo GPU](../Topic/GPU%20Usage.md).  
  
##  <a name="BK_MFC"></a> Nuove funzionalità MFC  
 È ora possibile specificare come i controlli vengono ridimensionati e spostati automaticamente quando un utente modifica le dimensioni di una finestra di dialogo.  Per altre informazioni, vedere [Layout dinamico](../mfc/dynamic-layout.md).  
  
## Vedere anche  
 [Novità di Visual Studio 2015](../Topic/What's%20New%20in%20Visual%20Studio%202015.md)   
 [Blog del team di Visual C\+\+](http://blogs.msdn.com/b/vcblog/)