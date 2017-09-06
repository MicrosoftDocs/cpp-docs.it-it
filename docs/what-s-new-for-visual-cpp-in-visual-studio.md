---
title: "Novità di Visual C++ in Visual Studio | Microsoft Docs"
ms.custom: 
ms.date: 8/2/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- vs-ide-general
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 8801dbdb-ca0b-491f-9e33-01618bff5ae9
author: mblome
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
ms.translationtype: HT
ms.sourcegitcommit: b90891be2ca726bb6cdd28d024cda68494e69af4
ms.openlocfilehash: 9103da7fb4e10553d2558b15a24bc6a894dd1eff
ms.contentlocale: it-it
ms.lasthandoff: 08/15/2017

---

# <a name="whats-new-for-visual-c-in-includevsdev15mdmiscincludesvsdev15mdmd"></a>Novità di Visual C++ in [!INCLUDE[vs_dev15_md](misc/includes/vs_dev15_md.md)]

In [!INCLUDE[vs_dev15_md](misc/includes/vs_dev15_md.md)] sono stati inclusi numerosi aggiornamenti e correzioni per l'ambiente Visual C++. Sono stati corretti più di 250 bug e problemi nel compilatore e negli strumenti, molti dei quali sono stati segnalati dai clienti attraverso [Microsoft Connect](https://connect.microsoft.com/VisualStudio "Microsoft Connect"). Microsoft ringrazia i clienti per le segnalazioni inviate.  Per altre informazioni sulle novità in tutto Visual Studio, visitare la pagina [Novità in [!INCLUDE[vs_dev15_md](misc/includes/vs_dev15_md.md)]](https://go.microsoft.com/fwlink/?linkid=834481).

<!--The compiler and tools version number in [!INCLUDE[vs_dev15_md](misc/includes/vs_dev15_md.md)] is 14.10.24629. -->


## <a name="c-compiler"></a>Compilatore C++

### <a name="c-conformance-improvements"></a>Miglioramenti della conformità di C++
Questa versione include aggiornamenti al compilatore C++ e alla libreria standard, con supporto avanzato per funzionalità di C++11 e C++14, oltre al supporto preliminare per determinate funzionalità che si prevede verranno incluse nello standard C++17. Per informazioni dettagliate, vedere [Miglioramenti della conformità di C++ in Visual Studio 2017](cpp-conformance-improvements-2017.md).

### <a name="new-compiler-switches"></a>Nuove opzioni del compilatore  

 -**/std:c++14** e **/std:c++latest**: queste opzioni del compilatore controllano il consenso esplicito per versioni specifiche del linguaggio di programmazione ISO C++ in un progetto. Per altre informazioni, vedere [-std (specifica la versione standard del linguaggio)](build/reference/std-specify-language-standard-version.md). La maggior parte delle nuove funzionalità standard in fase di progettazione è protetta dall'opzione /std:c++latest. 

**Visual Studio 2017 versione 15.3**: l'opzione **/std:c++17** abilita il set di funzionalità C++17 implementate dal compilatore Visual C++. Questa opzione disabilita il supporto del compilatore e della libreria standard per le funzionalità modificate o nuove nelle versioni più recenti del documento di lavoro e degli aggiornamenti sui difetti dello standard C++.

-[/permissive-](build/reference/permissive-standards-conformance.md): consente di abilitare tutte le opzioni del compilatore relative alla conformità allo standard e disabilitare la maggior parte delle estensioni del compilatore specifiche di Microsoft (ma non __declspec(dllimport), ad esempio). L'opzione è disattivata per impostazione predefinita ma sarà attivata per impostazione predefinita in un determinato momento nel futuro.

-[/diagnostics](build/reference/diagnostics-compiler-diagnostic-options.md): consente di abilitare la visualizzazione di numero di riga, numero di riga e colonna o numero di riga e colonna e cursore sotto la riga di codice in cui è stato rilevato l'errore o l'avviso relativo alla diagnostica.

-[/debug:fastlink](build/reference/debug-generate-debug-info.md):  
consente di abilitare fasi di collegamento incrementali fino al 30% più veloci (rispetto a Visual Studio 2015) evitando di copiare tutte le informazioni di debug nel file PDB. Il file PDB punta invece alle informazioni di debug per i file di libreria e oggetto usati per creare il file eseguibile. Vedere i post relativi [al ciclo di build di C++ più rapido in Visual Studio "15" con /Debug:fastlink](https://blogs.msdn.microsoft.com/vcblog/2016/10/05/faster-c-build-cycle-in-vs-15-with-debugfastlink/) e i [consigli per velocizzare le compilazioni di C++ in Visual Studio](https://blogs.msdn.microsoft.com/vcblog/2016/10/26/recommendations-to-speed-c-builds-in-visual-studio/).

[!INCLUDE[vs_dev15_md](misc/includes/vs_dev15_md.md)] consente l'uso di /sdl con /await. È stata rimossa la limitazione /RTC con le coroutine. 

### <a name="codegen-security-diagnostics-and-versioning"></a>Codegen, sicurezza, diagnostica e controllo delle versioni
In questa versione sono stati introdotti numerosi miglioramenti per l'ottimizzazione, la generazione del codice, il controllo delle versioni del set di strumenti e la diagnostica. Ecco alcuni dei miglioramenti più rilevanti:  

- Miglioramento della generazione del codice per i cicli: supporto della vettorializzazione automatica della divisione di interi costanti, migliore identificazione dei modelli memset.
- Maggiore sicurezza del codice: è stata migliorata l'emissione della diagnostica del compilatore per i sovraccarichi del buffer e /guard:cf ora protegge le istruzioni switch che generano tabelle di collegamento.
- Controllo delle versioni: il valore del preprocessore predefinito macro_MSC_VER ora viene monotonicamente aggiornato ad ogni aggiornamento del set di strumenti di Visual C++. Per altre informazioni, vedere il post relativo alla [versione del compilatore Visual C++](https://blogs.msdn.microsoft.com/vcblog/2016/10/05/visual-c-compiler-version/).
- Nuovo layout del set di strumenti: il compilatore e gli strumenti di compilazione correlati hanno un nuovo percorso e una nuova struttura di directory nel computer di sviluppo. Il nuovo layout consente installazioni side-by-side di più versioni del compilatore. Per altre informazioni, vedere il post [Compiler Tools Layout in Visual Studio "15"](https://blogs.msdn.microsoft.com/vcblog/2016/10/07/compiler-tools-layout-in-visual-studio-15/) (Layout degli strumenti del compilatore in Visual Studio "15").
- Miglioramenti alla diagnostica: nella finestra di output ora appare la colonna in cui si verifica un errore. Per altre informazioni, vedere il post [C++ compiler diagnostics improvements in VS "15" Preview 5](https://blogs.msdn.microsoft.com/vcblog/2016/10/05/c-compiler-diagnostics-improvements-in-vs-15-rc/) (Miglioramenti della diagnostica del compilatore C++ in VS "15" anteprima 5).
- Quando si usano coroutine, la parola chiave sperimentale "yield" (disponibile con l'opzione /await) è stata rimossa. È necessario aggiornare il codice per l'uso di `co_yield`. Per altre informazioni, vedere il [blog del team di Visual C++](https://blogs.msdn.microsoft.com/vcblog/). 

**Visual Studio 2017 versione 15.3**: ulteriori miglioramenti alla diagnostica nel compilatore. Per altre informazioni, vedere [Diagnostic Improvements in Visual Studio 2017 15.3.0](https://blogs.msdn.microsoft.com/vcblog/2017/07/21/diagnostic-improvements-in-vs2017-15-3-0/) (Miglioramenti della diagnostica in Visual Studio 2017 15.3.0).

## <a name="c-libraries"></a>Librerie C++

### <a name="standard-library-improvements"></a>Miglioramenti della libreria standard:

* Piccoli miglioramenti della diagnostica basic_string _ITERATOR_DEBUG_LEVEL != 0. L'attivazione di un controllo IDL in una struttura basata su stringhe ora segnalerà il comportamento specifico che ha causato l'attivazione. Ad esempio, anziché un messaggio del tipo "iteratore stringa non dereferenziabile" se ne otterrà uno del tipo "impossibile dereferenziare l'iteratore stringa perché non compreso nell'intervallo (potrebbe trattarsi ad esempio di un iteratore di fine)".
* Miglioramento delle prestazioni: gli overload di basic_string::find(char) ora possono chiamare traits::find solo una volta. In precedenza questa funzione era implementata come una ricerca di stringa generale avente come obiettivo una stringa di lunghezza 1.
* Miglioramento delle prestazioni: basic_string::operator== ora controlla la dimensione della stringa prima di confrontare il contenuto delle stringhe.
* Miglioramento delle prestazioni: è stato rimosso l'accoppiamento dei controlli in basic_string che era difficile da analizzare per l'utilità di ottimizzazione del compilatore. Risolve l'errore VSO n. 262848 "\<string\>: reserve() esegue troppe operazioni". Si noti che, per tutte le stringhe brevi, la chiamata di reserve ha comunque un costo senza eseguire alcuna operazione.
* Sono stati aggiunti \<any\>, \<string_view\>, apply() e make_from_tuple().
* std::vector è stata migliorata nella correttezza e nelle prestazioni: l'uso di alias durante l'inserimento/ubicazione è ora gestito correttamente come richiesto dallo Standard, la solida garanzia di eccezione viene ora fornita quando richiesto dallo Standard tramite move_if_noexcept() e altra logica e l'inserimento/ubicazione eseguono meno operazioni sugli elementi.
* La libreria dello standard C++ ora evita la dereferenziazione dei puntatori null ricercati.
* Aggiunta di \<optional\>, \<variant\>, shared_ptr::weak_type e \<cstdalign\>.
* Abilitazione di constexpr C++14 in min/max/minmax(initializer_list) e min_element/max_element/minmax_element().
* Miglioramento delle prestazioni weak_ptr::lock().
* Correzione dell'operatore di assegnazione per lo spostamento di std::promise, che in precedenza causava il blocco definitivo del codice.
* Correzione di errori del compilatore con la conversione implicita di atomic\<T \*\> in T \*.
* pointer_traits\<Ptr\> ora rileva correttamente Ptr::rebind\<U\>.
* Correzione di un qualificatore di costante mancante nell'operatore di sottrazione di move_iterator.
* Correzione del codegen silenzioso errato per gli allocatori con stato definiti dall'utente che richiedono propagate_on_container_copy_assignment e propagate_on_container_move_assignment.
* atomic\<T\> ora tollera operator&() in overload.
* Per aumentare la velocità effettiva del compilatore, le intestazioni della libreria standard C++ evitano di includere dichiarazioni per le funzioni intrinseche del compilatore non indispensabili.
* Diagnostica del compilatore leggermente migliorata per le chiamate bind() non corrette.
* Miglioramento delle prestazioni (più che triplicate) per i costruttori di spostamento di std::string/std::wstring
* Per l'elenco completo dei miglioramenti apportati alla libreria standard, vedere [Standard Library Fixes In VS 2017 RTM](https://blogs.msdn.microsoft.com/vcblog/2017/02/06/stl-fixes-in-vs-2017-rtm/) (Correzioni alla libreria standard in Visual Studio 2017 RTM).

#### <a name="visual-studio-2017-version-153"></a>Visual Studio 2017 versione 15.3

##### <a name="c17-features"></a>Funzionalità C++17 
Sono state implementate varie funzionalità aggiuntive C++17. Per altre informazioni, vedere [Conformità al linguaggio di Visual C++](visual-cpp-language-conformance.md).

##### <a name="other-new-features"></a>Altre nuove funzionalità
* Implementazione di P0602R0 "variant e optional devono propagare trivially_move e trivially_copy".
* La libreria standard ora tollera ufficialmente la disabilitazione dell'opzione RTTI dinamica tramite /GR-. Le funzioni dynamic_pointer_cast() e rethrow_if_nested() richiedono intrinsecamente dynamic_cast, quindi la libreria standard le contrassegna ora come =delete in /GR-.
* Anche quando l'opzione RTTI dinamica viene disabilitata tramite /GR-, l'opzione "RTTI statica" (sotto forma di typeid(Tipo)) è ancora disponibile e interagisce con vari componenti della libreria standard. La libreria standard ora supporta anche la disabilitazione di questa opzione, tramite /D_HAS_STATIC_RTTI=0. *Si noti che verranno così disabilitati std::any, target() e target_type() di std::function e get_deleter() di shared_ptr.*

##### <a name="correctness-fixes"></a>Correzioni di correttezza
* I contenitori della libreria standard fissano ora max_size() a numeric_limits\<tipo_differenza\>::max() invece che al valore max di size_type. Ciò garantisce che il risultato di distance() sugli iteratori da tale contenitore sia rappresentabile nel tipo restituito di distance().
* Correzione della specializzazione mancante auto_ptr\<void\>.
* Gli algoritmi meow_n() generavano in precedenza errori di compilazione se l'argomento della lunghezza non era un tipo integrale. Ora viene tentata la conversione delle lunghezze non integrali nel difference_type degli iteratori.
* normal_distribution\<float\> non genera più avvisi nella libreria standard in merito alla conversione da double a float.
* Correzione di alcune operazioni basic_string che eseguivano il confronto con npos anziché max_size() durante il controllo dell'overflow delle dimensioni massime.
* condition_variable::wait_for(lock, relative_time, predicate) rispettava tutto il tempo relativo di attesa in caso di riattivazione spuria. Ora l'attesa corrisponde a un singolo intervallo del tempo relativo.
* future::get() ora invalida future, come richiesto dallo standard.
* iterator_traits\<void \*\> era un errore complesso perché veniva eseguito un tentativo di formare void&;. Ora diventa in modo fluido uno struct vuoto per consentire l'uso di iterator_traits nelle condizioni "is iterator" SFINAE.
* Sono stati corretti alcuni avvisi segnalati da Clang -Wsystem-headers.
* È stato corretto anche il problema "la specifica dell'eccezione nella dichiarazione non corrisponde alla dichiarazione precedente" segnalato da Clang -Wmicrosoft-exception-spec.
* Sono stati corretti anche gli avvisi relativi all'ordinamento dell'elenco degli inizializzatori dei membri segnalati da Clang e C1XX.
* I contenitori non ordinati non scambiavano i rispettivi hasher o predicati quando venivano scambiati i contenitori stessi. Ora lo fanno.
* Molte operazioni di scambio del contenitore sono ora contrassegnate noexcept (dato che la libreria standard non intende mai generare un'eccezione quando rileva la condizione di comportamento indefinito non-propagate_on_container_swap non-equal-allocator).
* Molte operazioni vector\<bool\> sono ora contrassegnate noexcept.
* La libreria standard impone ora la corrispondenza di value_types dell'allocatore (in modalità C++17) con un'opzione per il rifiuto esplicito.
* Correzione di alcune condizioni nelle quali un'operazione self-range-insert in basic_string compromette il contenuto delle stringhe. (Nota: lo standard proibisce ancora le operazioni self-range-insert in vettori.)
* propagate_on_container_swap dell'allocatore non influisce più su basic_string::shrink_to_fit().
* std::decay gestisce ora i tipi di funzione abominable, ovvero i tipi di funzione qualificati con cv e/o ref.
* Modifica delle direttive include per l'uso corretto della distinzione tra maiuscole e minuscole e delle barre, con miglioramento della portabilità.
* Correzione dell'avviso C4061: "l'enumeratore 'miao' nell'istruzione switch dell'enum 'gatti' non viene gestito da un'etichetta case in modo esplicito". Questo avviso è disattivato per impostazione predefinita ed è stato risolto come eccezione alle norme generali della libreria standard per gli avvisi. (La libreria standard garantisce il livello /W4, ma non tenta di offrire il livello /Wall. Molti avvisi disattivati per impostazione predefinita sono estremamente fastidiosi e non sono progettati per essere usati regolarmente.)
* Controlli di debug migliorati per std::list. Gli iteratori di elenco controllano ora operator->() e list::unique() contrassegna ora gli iteratori come invalidati.
* Correzione della metaprogrammazione uses-allocator nella tupla.

##### <a name="performancethroughput-fixes"></a>Correzioni per prestazioni e velocità
* Correzione delle interazioni con noexcept che impedivano l'implementazione inline di std::atomic nelle funzioni che usano la gestione delle eccezioni strutturata.
* Modifica della funzione _Deallocate() interna della libreria standard per l'ottimizzazione in codice più ridotto, consentendone l'implementazione inline in più posizioni.
* Modifica di std::try_lock() per l'uso dell'espansione di pacchetto invece della ricorsione.
* Miglioramento dell'algoritmo per la prevenzione di deadlock di std::lock() con l'uso di operazioni lock() al posto della rotazione di tutti i try_lock() dei blocchi.
* Abilitazione dell'ottimizzazione del valore restituito denominato in system_category::message().
* La congiunzione e la disgiunzione ora creano istanze di tipi N + 1, invece di tipi 2N + 2.
* std::function non crea più istanze del meccanismo di supporto degli allocatori per ogni chiamata di cancellazione dei tipi, con conseguente miglioramento della velocità e riduzione delle dimensioni dei file obj nei programmi che passano molte espressioni lambda distinte a std::function.
* allocator_traits\<std:: allocator\> contiene operazioni std::allocator implementate manualmente inline, con conseguente riduzione delle dimensioni nel codice che interagisce con std::allocator solo tramite allocator_traits, ovvero la maggior parte del codice.
* L'interfaccia minima dell'allocatore C++11 viene ora gestita dalla libreria standard che chiama direttamente allocator_traits, invece di eseguire il wrapping dell'allocatore in un _Wrap_alloc della classe interna. Ciò consente di ridurre le dimensioni del codice generato per il supporto dell'allocatore, migliorare la capacità dell'ottimizzatore di interpretare i contenitori della libreria standard in alcuni casi e offre una migliore esperienza di debug, perché è ora possibile vedere il tipo di allocatore anziché dover ricorrere a _Wrap_alloc\<tipo allocatore\> nel debugger.
* Rimozione della metaprogrammazione per versioni personalizzate di allocator::reference, che gli allocatori non sono in effetti autorizzati a personalizzare. (Gli allocatori possono fare in modo che i contenitori usino puntatori fantasiosi, ma non riferimenti fantasiosi.)
* Il front-end del compilatore è stato addestrato ad annullare il wrapping degli iteratori di debug nei cicli for basati su intervalli, con conseguente miglioramento delle build di debug.
* Il percorso di riduzione interno di basic_string per shrink_to_fit() e reserve() non è più nel percorso delle operazioni di riallocazione, con conseguente riduzione delle dimensioni del codice per tutti i membri mutanti.
* Il percorso di crescita interno di basic_string non è più nel percorso di shrink_to_fit().
* Le operazioni di mutazione di basic_string vengono ora sottoposte a factoring nelle funzioni del percorso veloce senza allocazione e del percorso lento con allocazione, quindi l'implementazione inline nei chiamanti del caso comune senza riallocazione diventa più probabile.
* Le operazioni di mutazione di basic_string costruiscono ora i buffer riallocati nello stato desiderato anziché eseguire il ridimensionamento in loco. Ad esempio, un'operazione di inserimento all'inizio di una stringa ora sposta il contenuto dopo l'inserimento una sola volta (verso il basso o nel nuovo buffer allocato) invece di due come nel caso della riallocazione (nel nuovo buffer allocato e poi verso il basso).
* Le operazioni che chiamano la libreria standard C in \<string\> ora memorizzano nella cache l'indirizzo di errno per evitare interazioni ripetute con TLS.
* Implementazione semplificata di is_pointer.
* Completamento della modifica dell'espressione SFINAE da basata su funzioni a basata su struct/void_t.
* Gli algoritmi della libreria standard ora evitano il post-incremento degli iteratori.
* Correzione degli avvisi di troncamento durante l'uso di allocatori a 32 bit in sistemi a 64 bit.
* L'assegnazione di spostamento di std::vector è ora più efficiente nel caso di allocatori non uguali e non POCMA, grazie al riutilizzo del buffer quando possibile.

##### <a name="readability-and-other-improvements"></a>Miglioramenti della leggibilità e altri miglioramenti
* La libreria standard ora usa constexpr C++14 incondizionatamente, anziché le macro definite in modo condizionale.
* La libreria standard ora usa modelli di alias internamente.
* La libreria standard ora usa nullptr internamente, invece di nullptr_t{}. (L'utilizzo interno di NULL è stato eliminato. L'utilizzo interno di 0 come null verrà rimosso gradualmente.)
* La libreria standard ora usa std::move() internamente invece di usare std::forward() in modo stilisticamente non corretto.
* Modifica di static_assert(false, "messaggio") in messaggio #error. Ciò migliora la diagnostica del compilatore perché #error interrompe immediatamente la compilazione.
* La libreria standard non contrassegna più le funzioni come __declspec(dllimport). Ciò non è più richiesto dalla tecnologia dei linker moderni.
* Estrazione di SFINAE negli argomenti del modello predefiniti, con conseguente riduzione della confusione rispetto ai tipi restituiti e ai tipi di argomenti delle funzioni.
* I controlli di debug in \<random\> usano ora i normali meccanismi della libreria standard, invece della funzione interna _Rng_abort() che chiamava fputs() per stderr. L'implementazione di questa funzione viene mantenuta per la compatibilità binaria, ma verrà rimossa nella prossima versione della libreria standard non compatibile dal punto di vista binario. 

### <a name="open-source-library-support"></a>Supporto librerie open source  
Vcpkg è un strumento open source da riga di comando che semplifica notevolmente il processo di acquisizione e di creazione di librerie statiche e DLL C++ open source in Visual Studio. Per altre informazioni, vedere [vcpkg: gestione pacchetti per C++](vcpkg.md).

### <a name="cpprest-sdk-290"></a>CPPRestSDK 2.9.0  
CPPRestSDK, un'API Web multipiattaforma per C++, è stato aggiornato alla versione 2.9.0. Per altre informazioni, vedere il post sulla [disponibilità di CppRestSDK 2.9.0 su GitHub](https://blogs.msdn.microsoft.com/vcblog/2016/10/21/cpprestsdk-2-9-0-is-available-on-github/).

### <a name="atl"></a>ATL
* Un altro set di correzioni per la conformità della ricerca dei nomi
* I costruttori di spostamento e gli operatori di assegnazione dello spostamento esistenti sono ora contrassegnati correttamente per non generare eccezioni
* Annullamento dell'eliminazione dell'avviso valido C4640 relativo all'inizializzazione thread-safe di elementi statici locali in atlstr.h
* L'inizializzazione thread-safe di elementi statici locali veniva disattivata automaticamente nel set di strumenti XP quando [si usava ATL e si compilava una DLL]. Questa procedura non è più necessaria. È possibile aggiungere /Zc:threadSafeInit- nelle impostazioni del progetto se si desidera disattivare l'inizializzazione thread-safe. 

### <a name="visual-c-runtime"></a>Runtime di Visual C++
* Nuova intestazione "cfguard.h" per i simboli di protezione del flusso di controllo. 

## <a name="c-ide"></a>IDE C++

* Le prestazioni di modifica della configurazione sono ora migliori per i progetti nativi C++ e molto migliori per i progetti C++/CLI. La prima attivazione di una configurazione della soluzione è ora più veloce e tutte le attivazioni successive saranno quasi immediate.

**Visual Studio 2017 versione 15.3**:
* Sono state riscritte diverse procedure guidate per il progetto e il codice nello stile basato su finestre di dialogo.
* **Aggiungi classe** ora avvia direttamente la procedura guidata Aggiungi classe. Tutti gli altri elementi che in precedenza erano disponibili in questa posizione ora sono disponibili in **Aggiungi > Nuovo elemento**.
* I progetti Win32 ora sono inclusi nella categoria Desktop di Windows nella finestra di dialogo **Nuovo progetto**.
* I modelli Applicazione console di Windows e Applicazione desktop di Windows ora creano i progetti senza visualizzare una procedura guidata. Nella stessa categoria ora è presente una nuova Creazione guidata applicazione desktop di Windows, che visualizza le stesse opzioni disponibili in precedenza.

### <a name="intellisense"></a>IntelliSense  
* Il nuovo motore di database basato su SQLite viene ora usato per impostazione predefinita. Questo consente di velocizzare le operazioni di database come Vai a definizione e Trova tutti i riferimenti e migliorerà significativamente il tempo di analisi iniziale. L'impostazione è stata spostata in Strumenti > Opzioni > Editor di testo -> C/C++ -> Avanzate. Nelle versioni precedenti si trova in ...C/C++ > Sperimentale.

* Le prestazioni di IntelliSense sono state migliorate su progetti e file senza intestazioni precompilate. Per le intestazioni nel file corrente verrà creata un'intestazione automatica precompilata.

* Sono state aggiunte funzioni di filtro e guida per gli errori di IntelliSense presenti nell'elenco errori. È ora possibile fare clic sulla colonna degli errori per applicare un filtro. È inoltre possibile fare clic su errori specifici o premere F1 per avviare la ricerca online del messaggio di errore.

  ![Elenco errori](media/ErrorList1.png "Elenco errori")

  ![Elenco errori filtrato](media/ErrorList2.png "Elenco errori filtrato")

* È stata aggiunta la possibilità di filtrare per tipo gli elementi dell'elenco dei membri.

  ![Filtro elenco membri](media/mlfiltering.png "Filtro elenco membri")

* È stata aggiunta una nuova funzionalità sperimentale IntelliSense predittivo che fornisce un elenco di risultati filtrato e compatibile con il contesto per l'elenco dei membri. Vedere [C++ IntelliSense Improvements - Predictive IntelliSense & Filtering](https://blogs.msdn.microsoft.com/vcblog/2016/10/05/c-intellisense-improvements-predictive-intellisense-filtering/) (Miglioramenti di IntelliSense per C++ - IntelliSense predittiva e filtri)

* Trova tutti i riferimenti (MAIUSC+F12) ora consente di spostarsi con facilità, anche nelle codebase complesse. Offre funzioni avanzate di raggruppamento, filtro, ordinamento, ricerca all'interno dei risultati e, per alcuni linguaggi, colorazione, che agevolano notevolmente la comprensione dei riferimenti. Per C++ la nuova interfaccia utente include informazioni che indicano se è in corso la lettura o la scrittura in una variabile.

* La funzionalità IntelliSense "da punto a freccia" è passata dalla fase sperimentale alla fase avanzata ed è ora abilitata per impostazione predefinita. Anche le funzionalità di espansione ambito e di espansione precedenza dell'editor sono passate dalla fase sperimentale alla fase avanzata.

* Le funzionalità di refactoring sperimentale Cambia firma ed Estrai funzione ora sono disponibili per impostazione predefinita.

* La funzionalità sperimentale per il caricamento più rapido dei progetti C++. Alla successiva apertura di un progetto C++, questo verrà caricato più velocemente e la volta successiva ciò avverrà in modo rapidissimo.

Alcune di queste funzionalità sono usate anche in altri linguaggi e alcune sono specifiche di C++. Per altre informazioni su queste nuove funzionalità, vedere il post che [annuncia Visual Studio "15"](https://blogs.msdn.microsoft.com/visualstudio/2016/10/05/announcing-visual-studio-15-preview-5/). 


### <a name="support-for-non-msbuild-projects-with-open-folder"></a>Supporto per i progetti non MSBuild con Apri cartella
Visual Studio 2017 introduce la funzionalità "Apri cartella", che consente di codificare, compilare ed eseguire il debug in un cartella contenente il codice sorgente senza dover creare soluzioni o progetti. Questo rende molto più semplice iniziare a usare Visual Studio anche se il progetto non è un progetto basato su MSBuild. Con "Apri cartella" è possibile accedere alle potenti funzionalità per la comprensione, la modifica, la compilazione e il debug del codice già offerte da Visual Studio per i progetti MSBuild. Per altre informazioni, vedere [Open Folder projects in Visual C++](ide/non-msbuild-projects.md) (Aprire una cartella di progetti in Visual C++).

* Sono stati apportati miglioramenti all'esperienza Apri cartella. È possibile personalizzare l'esperienza usando i file JSON seguenti:
  - CppProperties.json per personalizzare l'esperienza IntelliSense e di esplorazione.
  - Tasks.json per personalizzare le procedure di compilazione. 
  - Launch.json per personalizzare l'esperienza di debug.

**Visual Studio 2017 versione 15.3**: 
* Supporto migliorato per i compilatori alternativi e gli ambienti di compilazione, come MinGW e Cygwin. Per altre informazioni, vedere [Using MinGW and Cygwin with Visual C++ and Open Folder](https://blogs.msdn.microsoft.com/vcblog/2017/07/19/using-mingw-and-cygwin-with-visual-cpp-and-open-folder/) (Uso di MinGW e Cygwin con Visual C++ e Apri cartella).
* È stato aggiunto il supporto per la definizione di variabili di ambiente globali e specifiche della configurazione in "CppProperties.json" e "CMakeSettings.json". Queste variabili di ambiente possono essere usate dalle configurazioni di debug definite in "launch.vs.json" e dalle attività in "tasks.vs.json".
* È stato migliorato il supporto del generatore Ninja di CMake, inclusa la possibilità di creare facilmente codice destinato alle piattaforme a 64 bit.

### <a name="cmake-support-via-open-folder"></a>Supporto CMake con Apri cartella
Visual Studio 2017 introduce il supporto per l'uso dei progetti CMake senza la conversione in file di progetto di MSBuild (con estensione vcxproj). Per altre informazioni, vedere [Progetti CMake in Visual C++](ide/cmake-tools-for-visual-cpp.md). Se si aprono i progetti CMake con "Apri cartella", l'ambiente viene automaticamente configurato per la modifica, la compilazione e il debug in C++.

* IntelliSense C++ funzionerà senza necessità di creare un file CppProperties.json nella cartella radice. È stato anche aggiunto un nuovo elenco a discesa per consentire agli utenti di passare facilmente tra le configurazioni fornite dai file CMake e CppProperties.json.

* Supporto per configurazione aggiuntiva tramite un file CMakeSettings.json che si trova nella stessa cartella del file CMakeLists.txt.

  ![Apri cartella Cmake](media/cmake_cpp.png "Apri cartella Cmake")

**Visual Studio 2017 versione 15.3**: è stato aggiunto il supporto per il generatore Ninja CMake. Per altre informazioni, vedere [CMake support in Visual Studio – what’s new in 2017 15.3 Preview 2](https://blogs.msdn.microsoft.com/vcblog/2017/06/14/cmake-support-in-visual-studio-whats-new-in-2017-15-3-preview-2/) (Supporto di CMake in Visual Studio – Novità nella versione 2017 15.3 Preview 2). 

## <a name="c-installation-workloads"></a>Carichi di lavoro di installazione per C++ 

### <a name="windows-desktop-development-with-c"></a>Sviluppo per Windows Desktop con C++:  
È ora disponibile un'esperienza più granulare per l'installazione del carico di lavoro per C++ originario. Sono stati aggiunti componenti selezionabili che consentono di installare solo gli strumenti necessari.  Si noti che le dimensioni di installazione indicate per i componenti elencati nell'interfaccia utente del programma di installazione non sono precise e sottovalutano la dimensione totale.

Per creare progetti Win32 nel carico di lavoro per desktop C++, è necessario installare un set di strumenti e un SDK Windows. L'installazione dei componenti consigliati (selezionati) "Set di strumenti VC++ 2017 versione 141 (x86, x64)" e "Windows 10 SDK (10.0.14393)" ne garantirà il funzionamento. Se gli strumenti necessari non vengono installati, i progetti non verranno creati e la procedura guidata verrà interrotta.

### <a name="linux-development-with-c"></a>Sviluppo per Linux con C++:  
L'estensione comune [Visual C++ for Linux Development](https://visualstudiogallery.msdn.microsoft.com/725025cf-7067-45c2-8d01-1e0fd359ae6e) ora fa parte di Visual Studio. Questa installazione include tutto il necessario per lo sviluppo e il debug di applicazioni C++ in esecuzione in un ambiente Linux.  

**Visual Studio 2017 versione 15.2**: miglioramenti per la condivisione del codice tra piattaforme e per la visualizzazione dei tipi. Per altre informazioni vedere, [Linux C++ improvements for cross-platform code sharing and type visualization](https://blogs.msdn.microsoft.com/vcblog/2017/05/10/linux-cross-platform-and-type-visualization/) (Miglioramenti di Linux C++ per la condivisione del codice tra piattaforme e per la visualizzazione dei tipi).

### <a name="game-development-with-c"></a>Sviluppo di giochi con C++:  
Usare tutta la potenza di C++ per compilare giochi professionali con tecnologia DirectX o Cocos2d.  

### <a name="mobile-development-with-c-android-and-ios"></a>Sviluppo di app per dispositivi mobili con C++ (Android e iOS):  
Usando Visual Studio è ora possibile creare app per dispositivi mobili destinate ad Android e iOS ed eseguirne il debug.  

### <a name="universal-windows-apps"></a>App di Windows universale:  
C++ viene fornito come componente facoltativo del carico di lavoro per lo sviluppo di app di Windows universale.  Attualmente l'aggiornamento di progetti C++ deve essere eseguito manualmente. Quando si apre un progetto UWP destinato a v140 in Visual Studio 2017, se Visual Studio 2015 non è installato è necessario selezionare il set di strumenti della piattaforma v141 nelle pagine delle proprietà del progetto.

## <a name="new-options-for-c-on-universal-windows-platform"></a>Nuove opzioni per C++ nella piattaforma UWP (Universal Windows Platform)
Sono ora disponibili nuove opzioni per la scrittura e la creazione di pacchetti di applicazioni C++ per la piattaforma UWP e Windows Store: è possibile usare Desktop App Converter per creare un pacchetto dell'applicazione desktop esistente per la distribuzione nel Windows Store. Per altre informazioni, vedere i post relativi all'[uso del runtime di Visual C++ nel progetto Centennial](https://blogs.msdn.microsoft.com/vcblog/2016/07/07/using-visual-c-runtime-in-centennial-project/) e al [trasferimento dell'app desktop sulla piattaforma UWP con Desktop Bridge](https://msdn.microsoft.com/en-us/windows/uwp/porting/desktop-to-uwp-root).

Quando si scrive nuovo codice, ora è possibile usare C++/WinRT, una proiezione standard del linguaggio C++ per Windows Runtime implementata esclusivamente nei file di intestazione. Consente sia di creare che di consumare le API di Windows Runtime usando qualsiasi compilatore C++ conforme agli standard. C++/WinRT è progettato per offrire agli sviluppatori C++ un accesso di prima classe all'API Windows moderna. Per altre informazioni, vedere il post sulla [disponibilità di C++/WinRT su GitHub](https://moderncpp.com/).


## <a name="clangc2-platform-toolset"></a>Set di strumenti della piattaforma Clang/C2
Il set di strumenti Clang/C2 incluso in [!INCLUDE[vs_dev15_md](misc/includes/vs_dev15_md.md)] supporta ora l'opzione /bigobj, essenziale per lo sviluppo di progetti di grandi dimensioni. Include inoltre alcune importanti correzioni di bug sia sul front-end che sul back-end del compilatore.

## <a name="c-code-analysis"></a>Analisi del codice C++

I controlli di base per C++ per l'applicazione delle [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines) (Linee guida di base per C++) ora sono distribuiti con Visual Studio. È sufficiente abilitare i controlli nella finestra di dialogo delle estensioni di analisi del codice nelle pagine di proprietà del progetto per includere le estensioni durante l'esecuzione dell'analisi del codice. 

![CppCoreCheck](media/CppCoreCheck.png "Pagina delle proprietà di CppCoreCheck") 

**Visual Studio 2017 versione 15.3**: è stato aggiunto il supporto di regole correlate alla gestione delle risorse. Per altre informazioni, vedere [Using the C++ Core Guidelines checkers](/visualstudio/code-quality/using-the-cpp-core-guidelines-checkers) (Uso dei controlli delle linee guida di base per C++).

## <a name="unit-testing"></a>Testing unità

Le nuove estensioni di Visual Studio consentono di eseguire gli unit test in base a Google Test e Boost.Test direttamente in Visual Studio. Per altre informazioni, vedere [C++ Unit Testing Updates: Announcing Boost.Test Adapter and Improved Google Test Support](https://blogs.msdn.microsoft.com/vcblog/2017/08/04/c-unit-testing-updates-announcing-boost-test-adapter-and-improved-google-test-support/) (Aggiornamenti degli unit test C++: annuncio dell'adattatore Boost.Test e miglioramento del supporto di Google Test).

## <a name="visual-studio-graphics-diagnostics"></a>Diagnostica della grafica di Visual Studio

Diagnostica della grafica di Visual Studio è un set di strumenti per la registrazione e l'analisi dei problemi di prestazioni e di rendering nelle app Direct3D. Le funzionalità di Diagnostica della grafica possono essere usate con app eseguite localmente in un computer Windows, in un emulatore di dispositivo Windows oppure in un computer o un dispositivo remoto.

* **Input e output per vertex e geometry shader:** la possibilità di visualizzare input e output di vertex shader e geometry shader era una delle funzionalità più richieste ed è ora supportata negli strumenti. È sufficiente selezionare la fase VS o GS nella visualizzazione Fasi pipeline per avviare la verifica dell'input e dell'output nella tabella che segue.

  ![Input/output per shader](media/io-shaders.png)

* **Ricerca e filtro nella tabella degli oggetti:** un modo rapido e semplice per individuare le risorse che si stanno cercando.

  ![Cerca](media/search.png)
   
* **Cronologia risorse:** consente di visualizzare con facilità l'intera cronologia delle modifiche di una risorsa usata durante il rendering di un frame acquisito. Per richiamare la cronologia per una risorsa, basta fare clic sull'icona orologio accanto al collegamento ipertestuale della risorsa.

  ![Cronologia risorse](media/resource-history.png)

  Viene visualizzata la nuova finestra dello strumento Cronologia risorse, che contiene la cronologia delle modifiche della risorsa.

  ![Modifica della cronologia delle risorse](media/resource-history-change.png)

  Notare che se il frame è stato acquisito con l'acquisizione dello stack di chiamate completo abilitata (**Visual Studio > Strumenti > Opzioni > Diagnostica della grafica**), il contesto di ogni evento di modifica può essere rapidamente dedotto e verificato all'interno del progetto di Visual Studio.  

* **Statistiche API:** consente di visualizzare un riepilogo dettagliato dell'utilizzo dell'API nel frame. Può essere utile per individuare chiamate che si stanno effettuando senza saperlo o chiamate che si effettuano in quantità eccessiva. Questa finestra è disponibile da **Visualizza > Statistiche API** in Analizzatore grafica di Visual Studio.

  ![Statistiche API](media/api-stats.png)

* **Statistiche memoria:** consente di visualizzare la quantità di memoria allocata dal driver per le risorse create nel frame. Questa finestra è disponibile da Visualizza > Statistiche memoria in Analizzatore grafica di Visual Studio. I dati possono essere copiati in un file CSV per la visualizzazione in un foglio di calcolo facendo clic con il pulsante destro e scegliendo Copia tutto.

  ![Statistiche memoria](media/memory-stats.png)
 
* **Convalida frame:** il nuovo elenco di errori e avvisi consente di spostarsi con facilità nell'elenco di eventi in base a potenziali problemi rilevati dal livello di debug Direct3D. Fare clic su Visualizza-> Convalida frame in Analizzatore grafica di Visual Studio per aprire la finestra. Quindi fare clic su Esegui convalida per avviare l'analisi. L'operazione può richiedere alcuni minuti, a seconda della complessità del frame.

  ![Convalida frame](media/frame-validation.png)
 
* **Analisi dei frame per D3D12:** usare Analisi dei Frame per analizzare le prestazioni delle chiamate di disegno con esperimenti di simulazione diretti. Passare alla scheda Analisi dei frame ed eseguire l'analisi per visualizzare il report. Per informazioni dettagliate, guardare il video [GoingNative 25](https://channel9.msdn.com/Shows/C9-GoingNative/GoingNative-25-Offline-Analysis-Graphics-Tool) sull'analisi dei frame di grafica di Visual Studio.

  ![Analisi dei frame](media/frame-analysis.png)

* **Miglioramenti dell'utilizzo della GPU:** aprire le tracce eseguite con il profiler Utilizzo GPU di Visual Studio dalla visualizzazione GPU o con lo strumento Windows Performance Analyzer (WPA) per eseguire analisi più dettagliate. Se Windows Performance Toolkit è installato, sono disponibili due collegamenti ipertestuali, uno per WPA e altro per la visualizzazione GPU, in basso a destra nella panoramica della sessione.

  ![Utilizzo GPU](media/gpu-usage.png)
 
  Le tracce aperte nella visualizzazione GPU usando questo collegamento supportano lo zoom e la panoramica sincronizzati nella sequenza temporale tra Visual Studio e la visualizzazione GPU. Viene usata una casella di controllo in Visual Studio per verificare se la sincronizzazione è abilitata o meno. 

  ![Visualizzazione GPU](media/gpu-view.png) 


 

