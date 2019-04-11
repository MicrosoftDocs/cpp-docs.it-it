---
title: Novità di C++ in Visual Studio
ms.date: 11/15/2017
ms.technology: cpp-ide
ms.assetid: 8801dbdb-ca0b-491f-9e33-01618bff5ae9
author: mikeblome
ms.author: mblome
ms.openlocfilehash: e74f8270d241b9725a24ee257fb846a7cc4e079e
ms.sourcegitcommit: b72a10a7b12e722fd91a17406b91b270026f763a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/03/2019
ms.locfileid: "58899457"
---
# <a name="whats-new-for-c-in-visual-studio-2017"></a>Novità di C++ in Visual Studio 2017

In Visual Studio 2017 sono stati inclusi numerosi aggiornamenti e correzioni per l'ambiente Visual C++. Sono stati corretti più di 250 bug e problemi segnalati per il compilatore e gli strumenti, molti inviati dai clienti tramite le opzioni [Segnala un problema e Invia un suggerimento](/visualstudio/how-to-report-a-problem-with-visual-studio-2017) in **Commenti e suggerimenti**. Microsoft ringrazia i clienti per le segnalazioni inviate. Per altre informazioni sulle novità in tutto Visual Studio, visitare la pagina [Novità in Visual Studio 2017](/visualstudio/ide/whats-new-in-visual-studio).

<!--The compiler and tools version number in Visual Studio 2017 is 14.10.24629. -->

## <a name="c-compiler"></a>compilatore C++

### <a name="c-conformance-improvements"></a>Miglioramenti della conformità di C++

Questa versione include aggiornamenti al compilatore C++ e alla libreria standard, con supporto avanzato per funzionalità di C++11 e C++14, oltre al supporto preliminare per determinate funzionalità che si prevede verranno incluse nello standard C++17. Per informazioni dettagliate, vedere [Miglioramenti della conformità di C++ in Visual Studio 2017](../cpp-conformance-improvements.md).

**Visual Studio 2017 versione 15.5**: Il compilatore supporta il 75% circa delle nuove funzionalità di C++17, inclusi binding strutturati, espressioni lambda `constexpr`, `if constexpr`, variabili inline, espressioni di riduzione e aggiunta di `noexcept` al sistema di tipi. Queste funzionalità sono disponibili con l'opzione **/std:c++17**. Per altre informazioni, vedere [Miglioramenti della conformità di C++ in Visual Studio 2017](../cpp-conformance-improvements.md).

**Visual Studio 2017 versione 15.7**: Il set di strumenti del compilatore MSVC in Visual Studio versione 15.7 è ora conforme allo standard C++. Per altre informazioni, vedere [Announcing: MSVC Conforms to the C++ Standard](https://blogs.msdn.microsoft.com/vcblog/2018/05/07/announcing-msvc-conforms-to-the-c-standard/) (Annuncio: MSVC è conforme allo standard C++) e [Conformità al linguaggio C++ di Microsoft](../visual-cpp-language-conformance.md).

### <a name="new-compiler-options"></a>Nuove opzioni del compilatore

- [/permissive-](../../build/reference/permissive-standards-conformance.md): consente di abilitare tutte le opzioni del compilatore relative alla conformità allo standard e di disabilitare la maggior parte delle estensioni del compilatore specifiche di Microsoft (ma non `__declspec(dllimport)`, ad esempio). Questa opzione è attiva per impostazione predefinita in Visual Studio 2017 versione 15.5.  La modalità di conformità **/permissive-** include il supporto della ricerca del nome in due fasi. Per altre informazioni, vedere [Miglioramenti della conformità di C++ in Visual Studio](../cpp-conformance-improvements.md).

- [/diagnostics](../../build/reference/diagnostics-compiler-diagnostic-options.md): consente di abilitare la visualizzazione di numero di riga, numero di riga e colonna o numero di riga, colonna e cursore per la riga di codice per la quale è stato rilevato l'errore o l'avviso di diagnostica.

- [/debug:fastlink](../../build/reference/debug-generate-debug-info.md): consente di abilitare fasi di collegamento incrementali fino al 30% più veloci (rispetto a Visual Studio 2015) evitando di copiare tutte le informazioni di debug nel file PDB. Il file PDB punta invece alle informazioni di debug per i file di libreria e oggetto usati per creare il file eseguibile. Vedere [Faster C++ build cycle in VS "15" with /Debug:fastlink](https://blogs.msdn.microsoft.com/vcblog/2016/10/05/faster-c-build-cycle-in-vs-15-with-debugfastlink/) (Ciclo di build di C++ più rapido in Visual Studio "15" con /Debug:fastlink) e [Recommendations to speed C++ builds in Visual Studio](https://blogs.msdn.microsoft.com/vcblog/2016/10/26/recommendations-to-speed-c-builds-in-visual-studio/) (Consigli per velocizzare le compilazioni di C++ in Visual Studio).

- Visual Studio 2017 consente l'uso di [/sdl](../../build/reference/sdl-enable-additional-security-checks.md) con [/await](../../build/reference/await-enable-coroutine-support.md). È stata rimossa la limitazione [/RTC](../../build/reference/rtc-run-time-error-checks.md) con le coroutine.

   **Visual Studio 2017 versione 15.3**:

- [/std:c++14 e /std:c++latest](../../build/reference/std-specify-language-standard-version.md): queste opzioni del compilatore controllano il consenso esplicito per versioni specifiche del linguaggio di programmazione ISO C++ in un progetto. La maggior parte delle nuove funzionalità standard in fase di progettazione è protetta dall'opzione **/std:c++latest**.

- [/std:c++17](../../build/reference/std-specify-language-standard-version.md) abilita il set di funzionalità C++17 implementate dal compilatore. Questa opzione disabilita il supporto del compilatore e della libreria standard per le funzionalità modificate o nuove nelle versioni del documento di lavoro, nonché degli aggiornamenti per i difetti dello standard C++ dopo C++17. Per abilitare queste funzionalità, usare **/std:c++latest**.

### <a name="codegen-security-diagnostics-and-versioning"></a>Codegen, sicurezza, diagnostica e controllo delle versioni

In questa versione sono stati introdotti numerosi miglioramenti per l'ottimizzazione, la generazione del codice, il controllo delle versioni del set di strumenti e la diagnostica. Ecco alcuni dei miglioramenti più rilevanti:

- Miglioramento della generazione del codice per i cicli: supporto della vettorializzazione automatica della divisione di interi costanti, migliore identificazione dei modelli memset.
- Maggiore sicurezza del codice: è stata migliorata l'emissione della diagnostica del compilatore per i sovraccarichi del buffer e [/guard:cf](../../build/reference/guard-enable-control-flow-guard.md) protegge ora le istruzioni switch che generano tabelle di collegamento.
- Controllo delle versioni: il valore della macro del preprocessore predefinita **\_MSC\_VER** ora viene aggiornato monotonicamente ad ogni aggiornamento del set di strumenti di Visual C++. Per altre informazioni, vedere il post relativo alla [versione del compilatore Visual C++](https://blogs.msdn.microsoft.com/vcblog/2016/10/05/visual-c-compiler-version/).
- Nuovo layout del set di strumenti: il compilatore e gli strumenti di compilazione correlati hanno un nuovo percorso e una nuova struttura di directory nel computer di sviluppo. Il nuovo layout consente installazioni side-by-side di più versioni del compilatore. Per altre informazioni, vedere il post [Compiler Tools Layout in Visual Studio "15"](https://blogs.msdn.microsoft.com/vcblog/2016/10/07/compiler-tools-layout-in-visual-studio-15/) (Layout degli strumenti del compilatore in Visual Studio "15").
- Miglioramenti alla diagnostica: la finestra di output ora visualizza la colonna in cui si verifica un errore. Per altre informazioni, vedere il post [C++ compiler diagnostics improvements in VS "15" Preview 5](https://blogs.msdn.microsoft.com/vcblog/2016/10/05/c-compiler-diagnostics-improvements-in-vs-15-rc/) (Miglioramenti della diagnostica del compilatore C++ in VS "15" anteprima 5).
- Quando si usano coroutine, la parola chiave sperimentale **yield** (disponibile con l'opzione **/await**) non è più disponibile. È necessario aggiornare il codice per l'uso di `co_yield`. Per altre informazioni, vedere il [blog del team di Visual C++](https://blogs.msdn.microsoft.com/vcblog/).

**Visual Studio 2017 versione 15.3**:

Altri miglioramenti alla diagnostica nel compilatore. Per altre informazioni, vedere [Diagnostic Improvements in Visual Studio 2017 15.3.0](https://blogs.msdn.microsoft.com/vcblog/2017/07/21/diagnostic-improvements-in-vs2017-15-3-0/) (Miglioramenti della diagnostica in Visual Studio 2017 15.3.0).

**Visual Studio 2017 versione 15.5**:

Le prestazioni di runtime di Visual C++ continuano a migliorare grazie a una maggiore qualità del codice generato. Ciò significa che è sufficiente ricompilare il codice e l'app viene eseguita più velocemente. Alcune ottimizzazioni del compilatore sono totalmente nuove, come la vettorizzazione di archivi scalari condizionali, la combinazione di chiamate `sin(x)` e `cos(x)` in una nuova funzione `sincos(x)` e l'eliminazione di istruzioni ridondanti dall'ottimizzatore SSA. Altre ottimizzazioni del compilatore sono miglioramenti delle funzionalità esistenti, quali euristica della vettorizzazione per le espressioni condizionali, migliori ottimizzazioni di ciclo e codegen min/max float. Il linker ha un'implementazione di **/OPT:ICF** nuova e più veloce che può comportare fino al 9% di speedup del tempo di collegamento. Sono state effettuate anche altre correzioni di prestazioni nel collegamento incrementale. Per altre informazioni, vedere [/OPT (Ottimizzazioni)](../../build/reference/opt-optimizations.md) e [/INCREMENTAL (collegamento incrementale)](../../build/reference/incremental-link-incrementally.md).

Il compilatore Microsoft C++ supporta Intel AVX-512, comprese le istruzioni per la lunghezza del vettore che offrono nuove funzioni in AVX-512 nei registri a 128 e 256 bit.

L'opzione [/Zc:noexceptTypes-](../../build/reference/zc-noexcepttypes.md) può essere usata per ripristinare la versione C++14 di `noexcept` durante l'uso della modalità C++ 17 in generale. In questo modo è possibile aggiornare il codice sorgente per garantire la conformità a C++17 senza dover riscrivere contemporaneamente tutto il codice `throw()`. Per altre informazioni, vedere [Dynamic exception specification removal and noexcept](../cpp-conformance-improvements.md#noexcept_removal) (Rimozione della specifica di eccezione dinamica e noexcept).

**Visual Studio 2017 versione 15.7**:

- Nuova opzione del compilatore [/Qspectre ](../../build/reference/qspectre.md) che consente di ridurre i rischi di minacce Speculative Execution Side Channel. Per altre informazioni, vedere [Spectre mitigations in MSVC](https://blogs.msdn.microsoft.com/vcblog/2018/01/15/spectre-mitigations-in-msvc/) (Mitigazioni Spectre in MSVC).
- Nuovo avviso di diagnostica per la mitigazione Spectre. Per altre informazioni, vedere [Spectre diagnostic in Visual Studio 2017 Version 15.7 Preview 4](https://blogs.msdn.microsoft.com/vcblog/2018/04/20/spectre-diagnostic-in-visual-studio-2017-version-15-7-preview-4/) (Diagnostica Spectre in Visual Studio 2017 versione 15.7 Preview 4).
- Un nuovo valore per /Zc, **/Zc:__cplusplus**, consente la generazione di report corretti da parte del supporto tecnico Standard di C++. Ad esempio, quando l'opzione è impostata e il compilatore è in modalità /std:c++17 il valore si espande in **201703L**. Per altre informazioni, vedere il blog [MSVC now correctly reports __cplusplus](https://blogs.msdn.microsoft.com/vcblog/2018/04/09/msvc-now-correctly-reports-__cplusplus/) (MSVC ora segnala correttamente __cplusplus).

## <a name="c-standard-library-improvements"></a>Miglioramenti della Libreria standard C++

- Miglioramenti secondari della diagnostica `basic_string` `_ITERATOR_DEBUG_LEVEL != 0`. L'attivazione di un controllo IDL in una struttura basata su stringhe ora segnalerà il comportamento specifico che ha causato l'attivazione. Ad esempio, anziché un messaggio del tipo "iteratore stringa non dereferenziabile" se ne otterrà uno del tipo "impossibile dereferenziare l'iteratore stringa perché non compreso nell'intervallo (potrebbe trattarsi ad esempio di un iteratore di fine)".
- Miglioramento delle prestazioni: ora gli overload `basic_string::find(char)` chiamano `traits::find` una sola volta. In precedenza questa funzione era implementata come una ricerca di stringa generale avente come obiettivo una stringa di lunghezza 1.
- Miglioramento delle prestazioni: `basic_string::operator==` ora controlla la dimensione delle stringhe prima di confrontare il contenuto di queste.
- Miglioramento delle prestazioni: è stato rimosso l'accoppiamento dei controlli in `basic_string`, di difficile analisi per l'ottimizzatore del compilatore. Si noti che, per tutte le stringhe brevi, una chiamata a `reserve` ha comunque un costo, anche se non viene eseguita alcuna operazione.
- Sono stati aggiunti \<any\>, \<string_view\>, `apply()`, `make_from_tuple()`.
- `std::vector` - La correttezza e le prestazioni sono state migliorate: l'uso di alias durante l'inserimento e l'ubicazione è ora gestito correttamente come richiesto dallo standard, una solida garanzia di eccezione viene ora fornita quando richiesto dallo standard tramite `move_if_noexcept()` e altra logica e l'inserimento o l'ubicazione esegue meno operazioni sugli elementi.
- La libreria dello standard C++ ora evita la dereferenziazione dei puntatori null ricercati.
- Sono stati aggiunti \<optional\>, \<variant\>, `shared_ptr::weak_type` e \<cstdalign\>.
- È stato abilitato C++ 14 `constexpr` in `min(initializer_list)`, `max(initializer_list)` e `minmax(initializer_list)` e `min_element()`, `max_element()` e `minmax_element()`.
- Sono state migliorate le prestazioni di `weak_ptr::lock()`.
- È stato corretto l'operatore di assegnazione di spostamento di `std::promise`, che in precedenza causava il blocco irreversibile del codice.
- Sono stati corretti gli errori del compilatore relativi alla conversione implicita di `atomic<T*>` in `T*`.
- `pointer_traits<Ptr>` ora rileva correttamente `Ptr::rebind<U>`.
- È stata corretta la mancanza di un qualificatore `const` nell'operatore di sottrazione `move_iterator`.
- È stato corretto codegen non interattivo errato per gli allocatori definiti dall'utente con stato che richiedono `propagate_on_container_copy_assignment` e `propagate_on_container_move_assignment`.
- `atomic<T>` ora tollera `operator&()` con overload.
- Per aumentare la velocità effettiva del compilatore, le intestazioni della libreria standard C++ evitano di includere dichiarazioni per le funzioni intrinseche del compilatore non indispensabili.
- La diagnostica del compilatore è stata leggermente migliorata per le chiamate a `bind()` non corrette.
- Sono state migliorate più del triplo le prestazioni dei costruttori di spostamento di `std::string` e `std::wstring`.

Per l'elenco completo dei miglioramenti apportati alla libreria standard, vedere [Standard Library Fixes In VS 2017 RTM](https://blogs.msdn.microsoft.com/vcblog/2017/02/06/stl-fixes-in-vs-2017-rtm/) (Correzioni alla libreria standard in Visual Studio 2017 RTM).

### <a name="visual-studio-2017-version-153"></a>Visual Studio 2017 versione 15.3

#### <a name="c17-features"></a>Funzionalità C++17

Sono state implementate varie funzionalità aggiuntive C++17. Per altre informazioni, vedere [Conformità al linguaggio Visual C++](../cpp-conformance-improvements.md#improvements_153).

#### <a name="other-new-features"></a>Altre nuove funzionalità

- Implementazione di P0602R0 "variant e optional devono propagare trivially_move e trivially_copy".
- La libreria standard ora tollera ufficialmente la disabilitazione dell'opzione RTTI dinamica tramite l'opzione [/GR-](../../build/reference/gr-enable-run-time-type-information.md). Sia `dynamic_pointer_cast()` che `rethrow_if_nested()` richiedono intrinsecamente `dynamic_cast`. La libreria standard, quindi, ora li contrassegna con `=delete` in **/GR-**.
- Anche se l'opzione RTTI dinamica è stata disabilitata tramite **/GR-**, l'opzione "RTTI statica" (sotto forma di `typeid(SomeType)`) è ancora disponibile e costituisce la base di vari componenti della libreria standard. La libreria standard ora supporta la disabilitazione anche di questa opzione tramite **/D\_HAS\_STATIC\_RTTI=0**. Si noti che questa operazione disabilita le funzioni membro `std::any`, `target()` e `target_type()` di `std::function` e la funzione membro Friend `get_deleter()` di `std::shared_ptr` e `std::weak_ptr`.

#### <a name="correctness-fixes-in-visual-studio-2017-version-153"></a>Correzioni di correttezza in Visual Studio 2017 versione 15.3

- I contenitori della libreria standard fissano ora `max_size()` a `numeric_limits<difference_type>::max()` anziché a `max()` di `size_type`. Ciò garantisce che il risultato di `distance()` per gli iteratori di tale contenitore sia rappresentabile nel tipo restituito di `distance()`.
- Correzione della specializzazione mancante `auto_ptr<void>`.
- Gli algoritmi `for_each_n()`, `generate_n()` e `search_n()` generavano in precedenza errori di compilazione se l'argomento relativo alla lunghezza non era un tipo integrale. Ora tentano di convertire le lunghezze non integrali nel `difference_type` degli iteratori.
- `normal_distribution<float>` non genera più avvisi nella libreria standard in merito alla conversione da double a float.
- Sono state corrette alcune operazioni `basic_string` che eseguivano il confronto con `npos` anziché con `max_size()` durante il controllo dell'overflow delle dimensioni massime.
- `condition_variable::wait_for(lock, relative_time, predicate)` attendeva per l'intera durata del tempo relativo di attesa in caso di riattivazione spuria. Ora l'attesa corrisponde a un singolo intervallo del tempo relativo.
- `future::get()` ora invalida `future`, come richiesto dallo standard.
- `iterator_traits<void *>` era un errore complesso perché indicava un tentativo di formare `void&`. Ora diventa semplicemente uno struct vuoto, consentendo l'uso di `iterator_traits` nelle condizioni SFINAE "is iterator".
- Sono stati corretti alcuni avvisi segnalati da Clang **-Wsystem-headers**.
- È stato corretto anche il problema relativo alla specifica dell'eccezione nella dichiarazione non corrispondente alla dichiarazione precedente, segnalato da Clang **-Wmicrosoft-exception-spec**.
- Sono stati corretti anche gli avvisi relativi all'ordinamento dell'elenco degli inizializzatori dei membri segnalati da Clang e C1XX.
- I contenitori non ordinati non scambiavano i rispettivi hasher o predicati quando venivano scambiati i contenitori stessi. Ora lo fanno.
- Molte operazioni di scambio del contenitore sono ora contrassegnate con `noexcept`. La libreria standard infatti non intende mai generare un'eccezione quando rileva una condizione di comportamento non definita non-equal-allocator `propagate_on_container_swap`.
- Molte operazioni `vector<bool>` sono ora contrassegnate con `noexcept`.
- La libreria standard impone ora la corrispondenza di `value_type` dell'allocatore (in modalità C++17) con un'opzione di emergenza per il rifiuto esplicito.
- Sono state corrette alcune condizioni nelle quali un'operazione self-range-insert in `basic_string` compromette il contenuto delle stringhe. (Nota: lo standard proibisce ancora le operazioni self-range-insert in vettori.)
- `basic_string::shrink_to_fit()` non è più interessato da `propagate_on_container_swap` dell'allocatore.
- `std::decay` gestisce ora i tipi di funzione abominable, ovvero i tipi di funzione qualificati con cv e/o ref.
- Modifica delle direttive include per l'uso corretto della distinzione tra maiuscole e minuscole e delle barre, con miglioramento della portabilità.
- È stato corretto l'avviso C4061, relativo all'enumeratore '*enumerator*' nell'opzione dell'enum *enumeration*' non gestito da un'etichetta case in modo esplicito. Questo avviso è disattivato per impostazione predefinita ed è stato risolto come eccezione alle norme generali della libreria standard per gli avvisi. (La libreria standard garantisce il livello **/W4**, ma non tenta di garantire il livello **/Wall**. Molti avvisi disattivati per impostazione predefinita sono estremamente fastidiosi e non sono progettati per essere usati regolarmente.)
- Sono stati migliorati i controlli di debug per `std::list`. Gli iteratori di elenco controllano ora `operator->()` e `list::unique()` contrassegna ora gli iteratori come invalidati.
- È stata corretta la metaprogrammazione uses-allocator in `tuple`.

#### <a name="performancethroughput-fixes"></a>Correzioni per prestazioni e velocità

- Sono state trovate soluzioni alternative per le interazioni con `noexcept` che impedivano l'implementazione inline di `std::atomic` nelle funzioni che usano la gestione delle eccezioni strutturata (SEH, Structured Exception Handling).
- È stata modificata la funzione `_Deallocate()` interna della libreria standard per ottimizzare le dimensioni del codice, consentendone l'implementazione inline in più posizioni.
- Sono state apportate modifiche a `std::try_lock()` per consentire l'uso dell'espansione di pacchetto invece della ricorsione.
- È stato migliorato l'algoritmo per la prevenzione di deadlock di `std::lock()` con l'uso di operazioni `lock()` al posto della rotazione di `try_lock()` in tutti i blocchi.
- È stata abilitata l'ottimizzazione del valore restituito denominato in `system_category::message()`.
- `conjunction` e `disjunction` ora creano istanze di tipi N + 1, anziché di tipi 2N + 2.
- `std::function` non crea più istanze del meccanismo di supporto degli allocatori per ogni chiamata di cancellazione dei tipi, con conseguente miglioramento della velocità e riduzione delle dimensioni dei file con estensione obj nei programmi che passano molte espressioni lambda distinte a `std::function`.
- `allocator_traits<std::allocator>` contiene operazioni `std::allocator` implementate inline manualmente, con conseguente riduzione delle dimensioni nel codice che interagisce con `std::allocator` solo tramite `allocator_traits`, ovvero la maggior parte del codice.
- L'interfaccia minima dell'allocatore C++11 viene ora gestita dalla libreria standard che chiama direttamente `allocator_traits`, invece di eseguire il wrapping dell'allocatore in `_Wrap_alloc` di una classe interna. Ciò consente di ridurre le dimensioni del codice generato per il supporto dell'allocatore e di migliorare la capacità dell'ottimizzatore di interpretare i contenitori della libreria standard in alcuni casi. Consente anche una migliore esperienza di debug, perché è ora possibile vedere il tipo di allocatore anziché dover ricorrere a `_Wrap_alloc<your_allocator_type>` nel debugger.
- Rimozione della metaprogrammazione per versioni personalizzate di `allocator::reference`, che gli allocatori non sono in effetti autorizzati a personalizzare. (Gli allocatori possono fare in modo che i contenitori usino puntatori fantasiosi, ma non riferimenti fantasiosi.)
- Il front-end del compilatore è stato addestrato ad annullare il wrapping degli iteratori di debug nei cicli for basati su intervalli, con conseguente miglioramento delle build di debug.
- Il percorso di riduzione interno di `basic_string` per `shrink_to_fit()` e `reserve()` non è più nel percorso delle operazioni di riallocazione, con conseguente riduzione delle dimensioni del codice per tutti i membri mutanti.
- Il percorso di crescita interno di `basic_string` non è più nel percorso di `shrink_to_fit()`.
- Le operazioni di mutazione di `basic_string` vengono ora sottoposte a factoring nelle funzioni del percorso veloce senza allocazione e del percorso lento con allocazione, quindi l'implementazione inline nei chiamanti del caso comune senza riallocazione diventa più probabile.
- Le operazioni di mutazione di `basic_string` costruiscono ora i buffer riallocati nello stato voluto anziché eseguire il ridimensionamento in loco. Ad esempio, un'operazione di inserimento all'inizio di una stringa ora sposta il contenuto dopo l'inserimento una sola volta (verso il basso o nel nuovo buffer allocato) invece di due come nel caso della riallocazione (nel nuovo buffer allocato e poi verso il basso).
- Le operazioni che chiamano la libreria standard C in \<string\> ora memorizzano nella cache l'indirizzo di `errno` per evitare interazioni ripetute con TLS.
- L'implementazione di `is_pointer` è stata semplificata.
- È stata completata la modifica dell'espressione SFINAE da basata su funzioni a basata su `struct` e `void_t`.
- Gli algoritmi della libreria standard ora evitano il post-incremento degli iteratori.
- Correzione degli avvisi di troncamento durante l'uso di allocatori a 32 bit in sistemi a 64 bit.
- `std::vector` - L'assegnazione di spostamento è ora più efficiente nel caso di allocatori non uguali e non POCMA, grazie al riutilizzo del buffer quando possibile.

#### <a name="readability-and-other-improvements"></a>Miglioramenti della leggibilità e altri miglioramenti

- La libreria standard ora usa `constexpr` di C++14 in modo non condizionale, anziché usare macro definite in modo condizionale.
- La libreria standard ora usa modelli di alias internamente.
- La libreria standard ora usa `nullptr` internamente, anziché usare `nullptr_t{}`. (L'utilizzo interno di NULL è stato eliminato. L'utilizzo interno di 0 come null verrà rimosso gradualmente.)
- La libreria standard ora usa `std::move()` internamente, anziché usare `std::forward()` in modo stilisticamente non corretto.
- È stata effettuata la modifica di `static_assert(false, "message")` in `#error message`. Ciò migliora la diagnostica del compilatore, perché `#error` interrompe immediatamente la compilazione.
- La libreria standard non contrassegna più le funzioni con `__declspec(dllimport)`. Ciò non è più richiesto dalla tecnologia dei linker moderni.
- Estrazione di SFINAE negli argomenti del modello predefiniti, con conseguente riduzione della confusione rispetto ai tipi restituiti e ai tipi di argomenti delle funzioni.
- I controlli di debug in \<random\> usano ora i normali meccanismi della libreria standard, invece della funzione interna `_Rng_abort()`, che chiamava `fputs()` per **stderr**. L'implementazione di questa funzione viene mantenuta per la compatibilità binaria, ma verrà rimossa nella prossima versione della libreria standard non compatibile dal punto di vista binario.

### <a name="visual-studio-2017-version-155"></a>Visual Studio 2017 versione 15.5

Sono state aggiunte, deprecate o rimosse diverse funzionalità della libreria standard, in conformità allo standard C++17. Per altre informazioni, vedere [Miglioramenti della conformità di C++ in Visual Studio 2017](../cpp-conformance-improvements.md#improvements_155).

#### <a name="new-experimental-features"></a>Nuove funzionalità sperimentali

- Supporto sperimentale per gli algoritmi paralleli seguenti:
  - `all_of`
  - `any_of`
  - `for_each`
  - `for_each_n`
  - `none_of`
  - `reduce`
  - `replace`
  - `replace_if`
  - `sort`
- Le firme per gli algoritmi paralleli seguenti vengono aggiunte ma non parallelizzate in questa fase; la profilatura non ha rivelato alcun vantaggio nella parallelizzazione di algoritmi che spostano o permutano soltanto gli elementi:
  - `copy`
  - `copy_n`
  - `fill`
  - `fill_n`
  - `move`
  - `reverse`
  - `reverse_copy`
  - `rotate`
  - `rotate_copy`
  - `swap_ranges`

#### <a name="performance-fixes-and-improvements"></a>Correzioni e miglioramenti delle prestazioni

- `basic_string<char16_t>` coinvolge ora le stesse ottimizzazioni `memcmp`, `memcpy` e simili attivate da `basic_string<wchar_t>`.
- È stata corretta una limitazione dell'ottimizzatore che impediva ai puntatori a funzione di essere esposti inline tramite le "funzioni per evitare la copia" nell'aggiornamento 3 di Visual Studio 2015, ripristinando le prestazioni di `lower_bound(iter, iter, function pointer)`.
- È stato ridotto l'overhead della verifica degli ordini di input del debug dell'iteratore in `includes`, `set_difference`, `set_symmetric_difference` e `set_union`, tramite la rimozione del wrapping degli iteratori prima del controllo dell'ordine.
- `std::inplace_merge` ora ignora gli elementi che sono già in posizione.
- La costruzione di `std::random_device` non costruisce più e quindi distrugge `std::string`.
- `std::equal` e `std::partition` eseguivano un calcolo per l'ottimizzazione dei thread dei collegamenti che salvava un confronto di iteratori.
- Quando `std::reverse` riceve puntatori a `T` facilmente copiabili, ora li invia a un'implementazione vettorizzata scritta a mano.
- `std::fill`, `std::equal` e `std::lexicographical_compare` riescono ora a inviare `memset` e `memcmp` per `std::byte` e `gsl::byte` (e altre enumerazioni e classi di enumerazione di tipo char). Si noti che `std::copy` esegue l'invio tramite `is_trivially_copyable` e che quindi non ha richiesto alcuna modifica.
- La libreria standard non contiene più distruttori con parentesi graffe vuote il cui unico comportamento consisteva nel creare tipi non facilmente distruttibili.

#### <a name="correctness-fixes-in-visual-studio-2017-version-155"></a>Correzioni di correttezza in Visual Studio 2017 versione 15.5

- `std::partition` ora chiama il predicato N volte anziché N + 1 volte, come richiesto dallo standard.
- I tentativi di evitare asserzioni statiche magic nella versione 15.3 sono stati corretti nella versione 15.5.
- `std::atomic<T>` non richiede più che `T` sia costruibile per impostazione predefinita.
- Gli algoritmi di heap che assumono un tempo logaritmico non effettuano più un'asserzione di tempo lineare secondo cui l'input è in realtà un heap quando è abilitato il debug dell'iteratore.
- `__declspec(allocator)` viene mantenuta solo per C1XX, per evitare avvisi da Clang, che non la comprende.
- `basic_string::npos` è ora disponibile come costante della fase di compilazione.
- `std::allocator` ora gestisce correttamente l'allocazione dei tipi eccessivamente allineati (tipi il cui allineamento è maggiore di `max_align_t`) in modalità C++17 (tranne se disabilitati da **/Zc:alignedNew-**).  Ad esempio, i vettori di oggetti con allineamento a 16 o 32 byte vengono ora correttamente allineati per le istruzioni SSE e AVX.

### <a name="visual-studio-2017-version-156"></a>Visual Studio 2017 versione 15.6

- \<memory_resource>
- Library Fundamentals V1
- Eliminazione assegnazione di polymorphic_allocator
- Miglioramento della deduzione dell'argomento del modello della classe

### <a name="visual-studio-2017-version-157"></a>Visual Studio 2017 versione 15.7

- il supporto per gli algoritmi paralleli non è più sperimentale
- nuova implementazione di \<filesystem>
- conversioni di stringhe elementari (parziale)
- std::launder()
- std::byte
- hypot(x,y,z)
- evitare il decadimento non necessario
- funzioni matematiche speciali
- char_traits constexpr
- guide alla deduzione per STL

Per altre informazioni, vedere [Conformità al linguaggio Visual C++](../visual-cpp-language-conformance.md).

## <a name="other-libraries"></a>Altre librerie

### <a name="open-source-library-support"></a>Supporto librerie open source

**Vcpkg** è un strumento open source da riga di comando che semplifica notevolmente il processo di acquisizione e di creazione di librerie statiche e DLL C++ open source in Visual Studio. Per altre informazioni, vedere [vcpkg: gestione pacchetti per C++](../../build/vcpkg.md).

**Visual Studio 2017 versione 15.5**:

### <a name="cpprest-sdk-290"></a>CPPRestSDK 2.9.0

CPPRestSDK, un'API Web multipiattaforma per C++, è stato aggiornato alla versione 2.9.0. Per altre informazioni, vedere il post sulla [disponibilità di CppRestSDK 2.9.0 su GitHub](https://blogs.msdn.microsoft.com/vcblog/2016/10/21/cpprestsdk-2-9-0-is-available-on-github/).

### <a name="atl"></a>ATL

- Un altro set di correzioni per la conformità della ricerca dei nomi
- I costruttori di spostamento e gli operatori di assegnazione dello spostamento esistenti sono ora contrassegnati correttamente per non generare eccezioni
- Annullamento dell'eliminazione dell'avviso valido C4640 relativo all'inizializzazione thread-safe di elementi statici locali in atlstr.h
- L'inizializzazione thread-safe di elementi statici locali veniva disattivata automaticamente nel set di strumenti XP quando [si usava ATL e si compilava una DLL]. Questa procedura non è più necessaria. È possibile aggiungere /**Zc:threadSafeInit-** nelle impostazioni del progetto se si vuole disattivare l'inizializzazione thread-safe.

### <a name="visual-c-runtime"></a>Runtime di Visual C++

- Nuova intestazione "cfguard.h" per i simboli di protezione del flusso di controllo.

## <a name="c-ide"></a>IDE C++

- Le prestazioni di modifica della configurazione sono ora migliori per i progetti nativi C++ e molto migliori per i progetti C++/CLI. La prima attivazione di una configurazione della soluzione è ora più veloce e tutte le attivazioni successive saranno quasi immediate.

**Visual Studio 2017 versione 15.3**:

- Sono state riscritte diverse procedure guidate per il progetto e il codice nello stile basato su finestre di dialogo.
- **Aggiungi classe** ora avvia direttamente la procedura guidata Aggiungi classe. Tutti gli altri elementi che in precedenza erano disponibili in questa posizione ora sono disponibili in **Aggiungi > Nuovo elemento**.
- I progetti Win32 ora sono inclusi nella categoria **Windows Desktop** nella finestra di dialogo **Nuovo progetto**.
- I modelli **Applicazione console di Windows** e **Applicazione desktop di Windows** ora creano i progetti senza visualizzare una procedura guidata. Nella stessa categoria è presente una nuova **Creazione guidata applicazione desktop di Windows**, che visualizza le stesse opzioni della procedura guidata **Applicazione console Win32**.

**Visual Studio 2017 versione 15.5**:

Diverse operazioni C++ che usano il motore IntelliSense per il refactoring e lo spostamento di codice vengono eseguite molto più velocemente. I numeri seguenti sono basati sulla soluzione di Visual Studio Chromium con i progetti 3500:

|||
|-|-|
|Funzionalità|Miglioramento delle prestazioni|
|Rinomina|5.3x|
|Modifica firma |4.5x|
|Trova tutti i riferimenti|4.7x|

C++ supporta ora Ctrl+ clic **Vai a definizione**, semplificando lo spostamento del mouse sulle definizioni. Anche il visualizzatore della struttura appartenente al pacchetto di strumenti di potenziamento della produttività è ora incluso nel prodotto per impostazione predefinita.

## <a name="intellisense"></a>IntelliSense

- Il nuovo motore di database basato su SQLite viene ora usato per impostazione predefinita. Questo consente di velocizzare le operazioni sui database, ad esempio come **Vai a definizione** e **Trova tutti i riferimenti**, e migliora significativamente il tempo di analisi iniziale della soluzione. L'impostazione è stata spostata in **Strumenti > Opzioni > Editor di testo -> C/C++ -> Avanzate**. Nelle versioni precedenti si trovava in ...C/C++ > Sperimentale.

- Le prestazioni di IntelliSense sono state migliorate su progetti e file senza intestazioni precompilate. Per le intestazioni nel file corrente verrà creata un'intestazione automatica precompilata.

- Sono state aggiunte funzioni di filtro e guida per gli errori di IntelliSense presenti nell'elenco errori. È ora possibile fare clic sulla colonna degli errori per applicare un filtro. È inoltre possibile fare clic su errori specifici o premere F1 per avviare la ricerca online del messaggio di errore.

  ![Elenco errori](media/ErrorList1.png "Elenco errori")

  ![Elenco errori filtrato](media/ErrorList2.png "Elenco errori filtrato")

- È stata aggiunta la possibilità di filtrare per tipo gli elementi dell'elenco dei membri.

  ![Filtro elenco membri](media/mlfiltering.png "Filtro elenco membri")

- È stata aggiunta una nuova funzionalità sperimentale IntelliSense predittivo che fornisce un elenco di risultati filtrato e compatibile con il contesto per l'elenco dei membri. Vedere [C++ IntelliSense Improvements - Predictive IntelliSense & Filtering](https://blogs.msdn.microsoft.com/vcblog/2016/10/05/c-intellisense-improvements-predictive-intellisense-filtering/) (Miglioramenti di IntelliSense per C++ - IntelliSense predittiva e filtri)
- **Trova tutti i riferimenti** (Maiusc+F12) ora consente di spostarsi con facilità, anche nelle codebase complesse. Offre funzioni avanzate di raggruppamento, filtro, ordinamento, ricerca all'interno dei risultati e, per alcuni linguaggi, colorazione, che agevolano notevolmente la comprensione dei riferimenti. Per C++ la nuova interfaccia utente include informazioni che indicano se è in corso la lettura o la scrittura in una variabile.
- La funzionalità IntelliSense "da punto a freccia" è passata dalla fase sperimentale alla fase avanzata ed è ora abilitata per impostazione predefinita. Anche le funzionalità dell'editor **Espandi ambito** ed **Expand Precedence** (Espandi precedenza) sono passate dalla fase sperimentale alla fase avanzata.
- Le funzionalità di refactoring sperimentali **Cambia firma** ed **Estrai funzione** sono ora disponibili per impostazione predefinita.
- Funzionalità sperimentale per il caricamento più rapido dei progetti C++. Alla successiva apertura di un progetto C++, questo verrà caricato più velocemente e la volta successiva ciò avverrà in modo rapidissimo.
- Alcune di queste funzionalità sono usate anche in altri linguaggi e alcune sono specifiche di C++. Per altre informazioni su queste nuove funzionalità, vedere [Announcing Visual Studio "15"](https://blogs.msdn.microsoft.com/visualstudio/2016/10/05/announcing-visual-studio-15-preview-5/) (Annuncio di Visual Studio 15).

**Visual Studio 2017 versione 15.7**: è stato aggiunto il supporto per ClangFormat. Per altre informazioni, vedere il post sul [supporto per ClangFormat in Visual Studio 2017](https://blogs.msdn.microsoft.com/vcblog/2018/03/13/clangformat-support-in-visual-studio-2017-15-7-preview-1/).

## <a name="non-msbuild-projects-with-open-folder"></a>Progetti non MSBuild con Apri cartella

Visual Studio 2017 introduce la funzionalità **Apri cartella**, che consente di scrivere codice, compilarlo ed eseguire il debug in una cartella contenente il codice sorgente senza dover creare soluzioni o progetti. Questo rende molto più semplice iniziare a usare Visual Studio anche se il progetto non è un progetto basato su MSBuild. Con **Apri cartella** è possibile accedere alle funzionalità avanzate per la comprensione, la modifica, la compilazione e il debug del codice già offerte da Visual Studio per i progetti MSBuild. Per altre informazioni, vedere [Progetti Apri cartella per C++](../../build/open-folder-projects-cpp.md).

- Sono stati apportati miglioramenti all'esperienza Apri cartella. È possibile personalizzare l'esperienza usando i file con estensione json seguenti:
  - CppProperties.json per personalizzare l'esperienza IntelliSense e di esplorazione.
  - Tasks.json per personalizzare le procedure di compilazione.
  - Launch.json per personalizzare l'esperienza di debug.

**Visual Studio 2017 versione 15.3**:

- Supporto migliorato per i compilatori alternativi e gli ambienti di compilazione, come MinGW e Cygwin. Per altre informazioni, vedere [Using MinGW and Cygwin with Visual C++ and Open Folder](https://blogs.msdn.microsoft.com/vcblog/2017/07/19/using-mingw-and-cygwin-with-visual-cpp-and-open-folder/) (Uso di MinGW e Cygwin con Visual C++ e Apri cartella).
- È stato aggiunto il supporto per la definizione di variabili di ambiente globali e specifiche della configurazione in CppProperties.json e CMakeSettings.json. Queste variabili di ambiente possono essere usate dalle configurazioni di debug definite in launch.vs.json e dalle attività in tasks.vs.json. Per altre informazioni, vedere [Customizing your Environment with Visual C++ and Open Folder](https://blogs.msdn.microsoft.com/vcblog/2017/11/02/customizing-your-environment-with-visual-c-and-open-folder/) (Personalizzazione dell'ambiente in uso con Visual C++ e Apri cartella).
- È stato migliorato il supporto del generatore Ninja di CMake, inclusa la possibilità di creare facilmente codice destinato alle piattaforme a 64 bit.

## <a name="cmake-support-via-open-folder"></a>Supporto CMake con Apri cartella

Visual Studio 2017 introduce il supporto per l'uso dei progetti CMake senza la conversione in file di progetto di MSBuild (con estensione vcxproj). Per altre informazioni, vedere [Progetti CMake in Visual Studio](../../build/cmake-projects-in-visual-studio.md). Se si aprono progetti CMake con **Apri cartella**, l'ambiente viene automaticamente configurato per la modifica, la compilazione e il debug in C++.

- IntelliSense C++ funziona senza alcuna necessità di creare un file CppProperties.json nella cartella radice. È stato anche aggiunto un nuovo elenco a discesa per consentire agli utenti di passare facilmente tra le configurazioni fornite dai file CMake e CppProperties.json.

- Supporto per configurazione aggiuntiva tramite un file CMakeSettings.json che si trova nella stessa cartella del file CMakeLists.txt.

  ![Apri cartella Cmake](media/cmake_cpp.png "Apri cartella Cmake")

**Visual Studio 2017 versione 15.3**: è stato aggiunto il supporto per il generatore Ninja CMake.

**Visual Studio 2017 versione 15.5**: è stato aggiunto il supporto per l'importazione di cache CMake esistenti.

**Visual Studio 2017 versione 15.7**: è stato aggiunto il supporto per CMake 3.11, analisi del codice nei progetti CMake, visualizzazione Destinazioni in Esplora soluzioni, opzioni per la generazione della cache e la compilazione di singoli file. Per altre informazioni, vedere [CMake Support in Visual Studio](https://blogs.msdn.microsoft.com/vcblog/2018/04/09/cmake-support-in-visual-studio-targets-view-single-file-compilation-and-cache-generation-settings/) (Supporto di CMake in Visual Studio) e [Progetti CMake in Visual Studio](../../build/cmake-projects-in-visual-studio.md).

## <a name="windows-desktop-development-with-c"></a>Sviluppo per Windows Desktop con C++

È ora disponibile un'esperienza più granulare per l'installazione del carico di lavoro per C++ originario. Sono stati aggiunti componenti selezionabili che consentono di installare solo gli strumenti necessari.  Si noti che le dimensioni di installazione indicate per i componenti elencati nell'interfaccia utente del programma di installazione non sono precise e sottovalutano la dimensione totale.

Per creare progetti Win32 nel carico di lavoro per desktop C++, è necessario installare un set di strumenti e un SDK Windows. L'installazione dei componenti consigliati (selezionati) **Set di strumenti VC++ 2017 versione 141 (x86, x64)** e **Windows 10 SDK (10.0.nnnnn)** ne garantisce il funzionamento. Se gli strumenti necessari non vengono installati, i progetti non verranno creati e la procedura guidata verrà interrotta.

**Visual Studio 2017 versione 15.5**:

Gli strumenti di compilazione di Visual C++ (in precedenza disponibili come prodotto autonomo) sono ora inclusi come carico di lavoro nel programma di installazione di Visual Studio. Questo carico di lavoro installa solo gli strumenti necessari per compilare progetti C++ senza installare l'IDE di Visual Studio. Sono inclusi entrambi i set di strumenti v140 e v141. Il set di strumenti versione 141 contiene i miglioramenti più recenti di Visual Studio 2017 versione 15.5. Per altre informazioni, vedere [Visual Studio Build Tools now include the VS2017 and VS2015 MSVC Toolset](https://blogs.msdn.microsoft.com/vcblog/2017/11/02/visual-studio-build-tools-now-include-the-vs2017-and-vs2015-msvc-toolsets/) (Gli strumenti di compilazione di Visual Studio ora includono i set di strumenti MSVC di VS2017 e VS2015).

## <a name="linux-development-with-c"></a>Sviluppo di applicazioni Linux con C++

L'estensione comune [Visual C++ for Linux Development](https://visualstudiogallery.msdn.microsoft.com/725025cf-7067-45c2-8d01-1e0fd359ae6e) ora fa parte di Visual Studio. Questa installazione include tutto il necessario per lo sviluppo e il debug di applicazioni C++ in esecuzione in un ambiente Linux.

**Visual Studio 2017 versione 15.2**:

Sono stati apportati miglioramenti alla condivisione del codice e alla visualizzazione dei tipi tra piattaforme. Per altre informazioni vedere, [Linux C++ improvements for cross-platform code sharing and type visualization](https://blogs.msdn.microsoft.com/vcblog/2017/05/10/linux-cross-platform-and-type-visualization/) (Miglioramenti di Linux C++ per la condivisione del codice tra piattaforme e per la visualizzazione dei tipi).

**Visual Studio 2017 versione 15.5**:

- Il carico di lavoro Linux ha aggiunto il supporto per **rsync** come alternativa a **sftp** per la sincronizzazione di file nei computer Linux remoti.
- È stato aggiunto il supporto per la compilazione trasversale mirata ai microcontroller ARM. Per abilitarlo durante l'installazione, scegliere il carico di lavoro **Sviluppo di applicazioni Linux con C++** e selezionare l'opzione **Sviluppo incorporato e IoT**. In questo modo vengono aggiunti gli strumenti di compilazione incrociata ARM GCC e Make all'installazione. Per altre informazioni, vedere [ARM GCC Cross Compilation in Visual Studio](https://blogs.msdn.microsoft.com/vcblog/2017/10/23/arm-gcc-cross-compilation-in-visual-studio/) (Compilazione incrociata GCC ARM in Visual Studio).
- Supporto aggiunto per CMake. È ora possibile lavorare sulla base di codice CMake esistente senza la necessità di convertirlo in un progetto di Visual Studio. Per altre informazioni, vedere[Configurare un progetto CMake Linux](../../linux/cmake-linux-project.md).
- Supporto aggiunto per l'esecuzione di attività remote. Questa funzionalità consente di eseguire qualsiasi comando in un sistema remoto definito nella gestione connessione di Visual Studio. Le attività remote consentono anche di copiare i file nel sistema remoto.
Per altre informazioni, vedere[Configurare un progetto CMake Linux](../../linux/cmake-linux-project.md).

**Visual Studio 2017 versione 15.7**:

- Vari miglioramenti apportati agli scenari di carico di lavoro Linux. Per altre informazioni, vedere il blog sui [miglioramenti del carico di lavoro di Linux C++ per sistema del progetto, finestra della console di Linux, rsync e Connetti a processo](https://blogs.msdn.microsoft.com/vcblog/2018/03/13/linux-c-workload-improvements-to-the-project-system-linux-console-window-rsync-and-attach-to-process/).
- IntelliSense per le intestazioni nelle connessioni remote di Linux. Per altre informazioni, vedere il blog [IntelliSense for Remote Linux Headers](https://blogs.msdn.microsoft.com/vcblog/2018/04/09/intellisense-for-remote-linux-headers/) (IntelliSense per intestazioni remote in Linux) e l'articolo [Configurare un progetto CMake per Linux](../../linux/cmake-linux-project.md).

## <a name="game-development-with-c"></a>Sviluppo di giochi con C++

Usare tutta la potenza di C++ per compilare giochi professionali con tecnologia DirectX o Cocos2d.

## <a name="mobile-development-with-c-android-and-ios"></a>Sviluppo di applicazioni per dispositivi mobili con C++ (Android e iOS)

Usando Visual Studio è ora possibile creare app per dispositivi mobili destinate ad Android e iOS ed eseguirne il debug.

## <a name="universal-windows-apps"></a>App di Windows universale

C++ viene fornito come componente facoltativo del carico di lavoro per lo sviluppo di app di Windows universale.  Attualmente l'aggiornamento di progetti C++ deve essere eseguito manualmente. Quando si apre un progetto UWP destinato a v140 in Visual Studio 2017, se Visual Studio 2015 non è installato è necessario selezionare il set di strumenti della piattaforma v141 nelle pagine delle proprietà del progetto.

## <a name="new-options-for-c-on-universal-windows-platform-uwp"></a>Nuove opzioni per C++ nella piattaforma UWP (Universal Windows Platform)
Ora sono disponibili nuove opzioni per la scrittura e la creazione di pacchetti di applicazioni C++ per la piattaforma UWP (Universal Windows Platform) e Windows Store: è possibile usare l'infrastruttura Desktop Bridge per creare un pacchetto dell'applicazione desktop esistente o un oggetto COM per la distribuzione tramite Windows Store o su altri canali esistenti tramite sideload. Nuove funzionalità in Windows 10 consentono di aggiungere funzionalità della piattaforma UWP all'applicazione desktop in vari modi. Per altre informazioni, vedere [Desktop Bridge](/windows/uwp/porting/desktop-to-uwp-root).

**Visual Studio 2017 versione 15.5**: È stato aggiunto un modello di **Progetto di creazione di pacchetti di applicazioni Windows** che semplifica notevolmente le operazioni per creare pacchetti di applicazioni desktop tramite Desktop Bridge. È disponibile in **File > Nuovo > Progetto > Installato > Visual C++ > Piattaforma UWP**. Per altre informazioni, vedere [Creare un pacchetto dell'app con Visual Studio (Desktop Bridge)](/windows/uwp/porting/desktop-to-uwp-packaging-dot-net).

Quando si scrive nuovo codice, ora è possibile usare C++/WinRT, una proiezione standard del linguaggio C++ per Windows Runtime implementata esclusivamente nei file di intestazione. Consente sia di creare che di consumare le API di Windows Runtime usando qualsiasi compilatore C++ conforme agli standard. C++/WinRT è progettato per offrire agli sviluppatori C++ un accesso di prima classe all'API Windows moderna. Per altre informazioni, vedere il post sulla [disponibilità di C++/WinRT su GitHub](https://moderncpp.com/).

A partire dal build 17025 di Windows SDK Insider Preview, C++/WinRT è incluso in Windows SDK. Per altre informazioni, vedere [C++/WinRT is now included the Windows SDK](https://blogs.msdn.microsoft.com/vcblog/2017/11/01/cppwinrt-is-now-included-the-windows-sdk/) (C++/WinRT ora incluso in Windows SDK).

## <a name="clangc2-platform-toolset"></a>Set di strumenti della piattaforma Clang/C2

Il set di strumenti Clang/C2 incluso in Visual Studio 2017 supporta ora l'opzione **/bigobj**, essenziale per lo sviluppo di progetti di grandi dimensioni. Include inoltre alcune importanti correzioni di bug sia sul front-end che sul back-end del compilatore.

## <a name="c-code-analysis"></a>Analisi del codice C++

I controlli di base per C++ per l'applicazione delle [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines) (Linee guida di base per C++) ora sono distribuiti con Visual Studio. È sufficiente abilitare i controlli nella pagina **Code Analysis Extensions** (Estensioni di analisi del codice) nelle pagine delle proprietà del progetto per includere le estensioni durante l'esecuzione dell'analisi del codice. Per altre informazioni, vedere [Using the C++ Core Guidelines checkers](/visualstudio/code-quality/using-the-cpp-core-guidelines-checkers) (Uso dei controlli delle linee guida di base per C++).

![CppCoreCheck](media/CppCoreCheck.png "Pagina delle proprietà di CppCoreCheck")

**Visual Studio 2017 versione 15.3**: È stato aggiunto il supporto delle regole correlate alla gestione delle risorse.

**Visual Studio 2017 versione 15.5**: I nuovi controlli delle linee guida di base di C++ riguardano la correttezza del puntatore intelligente, l'uso corretto degli inizializzatori globali e l'uso di flag per i costrutti come `goto` e cast non corretti.

Alcuni numeri di avviso che potrebbero essere presenti in 15.3 non sono più disponibili in 15.5. Questi avvisi sono stati sostituiti con controlli più specifici.

**Visual Studio 2017 versione 15.6**:

- Aggiunto il supporto per l'analisi di singoli file e miglioramenti delle prestazioni dell'analisi in fase di esecuzione. Per altre informazioni, vedere il blog sui [miglioramenti dell'analisi statica di C++ per Visual Studio 2017 15.6 Preview 2](https://blogs.msdn.microsoft.com/vcblog/2018/01/10/c-static-analysis-improvements-for-visual-studio-2017-15-6-preview-2/)

**Visual Studio 2017 versione 15.7**:

- Aggiunto il supporto per [/analyze: ruleset](../../build/reference/analyze-code-analysis.md) che consente di specificare le regole di analisi codice da eseguire.
- Aggiunto il supporto per le regole aggiuntive delle Linee guida di base di C++.  Per altre informazioni, vedere [Using the C++ Core Guidelines checkers](/visualstudio/code-quality/using-the-cpp-core-guidelines-checkers) (Uso dei controlli delle linee guida di base per C++).

## <a name="unit-testing"></a>Unit test

**Visual Studio 2017 versione 15.5**:

L'adattatore per Google Test e quello per Boost.Test sono ora disponibili come componenti del carico di lavoro **Sviluppo di applicazioni desktop con C++**. Questi adattatori sono integrati con **Esplora test**. Viene aggiunto il supporto CTest per i progetti Cmake (tramite Apri cartella) sebbene non sia ancora disponibile l'integrazione completa con **Esplora test**. Per altre informazioni, vedere [Scrittura di unit test per C/C++](/visualstudio/test/writing-unit-tests-for-c-cpp).

**Visual Studio 2017 versione 15.6**:

- Aggiunto il supporto per il supporto delle librerie dinamiche Boost.Test.
- Un modello di elemento Boost.Test è ora disponibile nell'IDE.

Per altre informazioni, vedere [Boost.Test Unit Testing: Dynamic Library support and New Item Template](https://blogs.msdn.microsoft.com/vcblog/2018/01/10/boost-test-unit-testing-dynamic-library-support-and-new-item-template/) (Unit test Boost.Test: supporto della libreria dinamica e nuovo modello di elemento).

**Visual Studio 2017 versione 15.7**:

[CodeLens](/visualstudio/ide/find-code-changes-and-other-history-with-codelens) supportato per progetti di unit test C++. Per altre informazioni, vedere [Announcing CodeLens for C++ Unit Testing](https://blogs.msdn.microsoft.com/vcblog/2018/04/09/announcing-codelens-for-c-unit-testing/) (Annuncio di CodeLens per unit test C++).

## <a name="visual-studio-graphics-diagnostics"></a>Diagnostica della grafica di Visual Studio

Diagnostica della grafica di Visual Studio è un set di strumenti per la registrazione e l'analisi dei problemi di prestazioni e di rendering nelle app Direct3D. Le funzionalità di Diagnostica della grafica possono essere usate con app eseguite localmente in un computer Windows, in un emulatore di dispositivo Windows oppure in un computer o un dispositivo remoto.

- **Input e output per vertex e geometry shader:** la possibilità di visualizzare input e output di vertex shader e geometry shader era una delle funzionalità più richieste ed è ora supportata negli strumenti. È sufficiente selezionare la fase VS o GS nella visualizzazione Fasi pipeline per avviare la verifica dell'input e dell'output nella tabella che segue.

  ![Input/output per shader](media/io-shaders.png)

- **Ricerca e filtro nella tabella degli oggetti:** un modo rapido e semplice per trovare le risorse che si stanno cercando.

  ![Cerca](media/search.png)

- **Cronologia risorse:** consente di visualizzare con facilità l'intera cronologia delle modifiche di una risorsa usata durante il rendering di un frame acquisito. Per richiamare la cronologia per una risorsa, basta fare clic sull'icona orologio accanto al collegamento ipertestuale della risorsa.

  ![Cronologia risorse](media/resource-history.png)

  Verrà visualizzata la nuova finestra dello strumento **Cronologia risorse**, contenente la cronologia delle modifiche della risorsa.

  ![Modifica della cronologia delle risorse](media/resource-history-change.png)

  Si noti che se il frame è stato acquisito con l'acquisizione dello stack di chiamate completo abilitata (**Visual Studio > Strumenti > Opzioni** in **Diagnostica della grafica**), il contesto di ogni evento di modifica può essere rapidamente dedotto e verificato all'interno del progetto di Visual Studio.

- **Statistiche API:** consente di visualizzare un riepilogo dettagliato dell'uso dell'API nel frame. Può essere utile per individuare chiamate che si stanno effettuando senza saperlo o chiamate che si effettuano in quantità eccessiva. Questa finestra è disponibile da **Visualizza > Statistiche API** in Analizzatore grafica di Visual Studio.

  ![Statistiche API](media/api-stats.png)

- **Statistiche memoria:** consente di visualizzare la quantità di memoria allocata dal driver per le risorse create nel frame. Questa finestra è disponibile tramite **Visualizza > Statistiche memoria** in **Analizzatore grafica di Visual Studio**. È possibile copiare i dati in un file CSV per la visualizzazione in un foglio di calcolo. A tale scopo, fare clic con il pulsante destro del mouse e scegliere **Copia tutto**.

  ![Statistiche memoria](media/memory-stats.png)

- **Convalida frame:** il nuovo elenco di errori e avvisi consente di spostarsi con facilità nell'elenco di eventi in base a potenziali problemi rilevati dal livello di debug Direct3D. Fare clic su **Visualizza > Convalida frame** in Analizzatore grafica di Visual Studio per aprire la finestra. Quindi fare clic su **Esegui convalida** per avviare l'analisi. L'operazione può richiedere alcuni minuti, a seconda della complessità del frame.

  ![Convalida frame](media/frame-validation.png)

- **Analisi dei frame per D3D12:** usare Analisi dei frame per analizzare le prestazioni delle chiamate di disegno con esperimenti di simulazione diretti. Passare alla scheda Analisi dei frame ed eseguire l'analisi per visualizzare il report. Per altre informazioni, guardare il video [GoingNative 25: Visual Studio Graphics Frame Analysis](https://channel9.msdn.com/Shows/C9-GoingNative/GoingNative-25-Offline-Analysis-Graphics-Tool) (GoingNative 25: Analisi dei frame di grafica di Visual Studio).

  ![Analisi dei frame](media/frame-analysis.png)

- **Miglioramenti dell'uso della GPU:** è possibile aprire le tracce eseguite con il profiler Utilizzo GPU di Visual Studio dalla visualizzazione GPU o con lo strumento Windows Performance Analyzer (WPA) per eseguire analisi più dettagliate. Se Windows Performance Toolkit è installato, sono disponibili due collegamenti ipertestuali, uno per WPA e altro per la visualizzazione GPU, in basso a destra nella panoramica della sessione.

  ![Utilizzo GPU](media/gpu-usage.png)

  Le tracce aperte nella visualizzazione GPU usando questo collegamento supportano lo zoom e la panoramica sincronizzati nella sequenza temporale tra Visual Studio e la visualizzazione GPU. Viene usata una casella di controllo in Visual Studio per verificare se la sincronizzazione è abilitata o meno.

  ![Visualizzazione GPU](media/gpu-view.png)
