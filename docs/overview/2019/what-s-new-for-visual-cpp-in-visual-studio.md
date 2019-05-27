---
title: Novità di C++ in Visual Studio 2019
ms.date: 05/13/2019
ms.technology: cpp-ide
ms.assetid: 8801dbdb-ca0b-491f-9e33-01618bff5ae9
author: mikeblome
ms.author: mblome
ms.openlocfilehash: 19eaa9d4ed1cf12e721825f998fa674363eda488
ms.sourcegitcommit: 61121faf879cc581a4d39e4baccabf7cf1f673a5
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/20/2019
ms.locfileid: "65934134"
---
# <a name="whats-new-for-c-in-visual-studio-2019"></a>Novità di C++ in Visual Studio 2019

In Visual Studio 2019 sono stati inclusi numerosi aggiornamenti e correzioni per l'ambiente Microsoft C++. Sono stati corretti numerosi bug e problemi nel compilatore e negli strumenti, molti inviati dai clienti tramite le opzioni [Segnala un problema](/visualstudio/how-to-report-a-problem-with-visual-studio-2017) e [Invia un suggerimento](https://developercommunity.visualstudio.com/spaces/62/index.html) in **Commenti e suggerimenti**. Microsoft ringrazia i clienti per le segnalazioni inviate. Per altre informazioni sulle novità in tutto Visual Studio, visitare la pagina [Novità in Visual Studio](/visualstudio/ide/whats-new-visual-studio-2019).

## <a name="c-compiler"></a>compilatore C++

- Supporto ottimizzato per le funzionalità di C++17 e le correzioni di correttezza e supporto sperimentale per le funzionalità di C++20 come i moduli e le coroutine. Per informazioni dettagliate, vedere [Miglioramenti della conformità di C++ in Visual Studio 2019](../cpp-conformance-improvements.md).

- L'opzione `/std:c++latest` include ora funzionalità di C++20 non necessariamente complete, incluso il supporto iniziale per l'operatore \<=> ("Spaceship") di C++20 per il confronto a tre livelli.

- L'opzione `/Gm` del compilatore C++ è ora deprecata. Provare a disabilitare l'opzione `/Gm` negli script di compilazione se è definita in modo esplicito. Tuttavia è anche possibile ignorare l'avviso di funzionalità deprecata per `/Gm`, perché non viene considerato un errore quando si usa l'opzione "Considera gli avvisi come errori" (`/WX`).

- Con l'avvio dell'implementazione di funzionalità da parte di MSVC dalla bozza standard di C++ 20 nel flag `/std:c++latest`, `/std:c++latest` è incompatibile con `/clr` (tutte le versioni), `/ZW` e `/Gm`. In Visual Studio 2019 usare le modalità `/std:c++17` oppure `/std:c++14` durante la compilazione con `/clr`, `/ZW` o `/Gm` (ma vedere il punto elenco precedente).

- Non vengono più generate intestazioni precompilate per app desktop e console C++ per impostazione predefinita.

### <a name="codegen-security-diagnostics-and-versioning"></a>Codegen, sicurezza, diagnostica e controllo delle versioni

Miglioramento dell'analisi con `/Qspectre` per fornire assistenza per la mitigazione per Spectre variante 1 (CVE-2017-5753). Per altre informazioni, vedere [Spectre mitigations in MSVC](https://devblogs.microsoft.com/cppblog/spectre-mitigations-in-msvc/) (Mitigazioni Spectre in MSVC).

## <a name="c-standard-library-improvements"></a>Miglioramenti della Libreria standard C++

- Implementazione di altre funzionalità delle librerie di C++17 e C++20 e correzioni di correttezza. Per informazioni dettagliate, vedere [Miglioramenti della conformità di C++ in Visual Studio 2019](../cpp-conformance-improvements.md).

- È stato applicato il formato Clang alle intestazioni della libreria standard di C++ per migliorare la leggibilità.

- Poiché Visual Studio supporta ora Just My Code per C++, la libreria standard non deve più fornire un sistema personalizzato affinché `std::function` e `std::visit` ottengano lo stesso effetto. La rimozione del sistema non ha alcun effetto visibile per l'utente, ad eccezione del fatto che il compilatore non produrrà più diagnostiche che indicano problemi nella riga 15732480 o 16707566 di \<type_traits> o \<variant>.

## <a name="performancethroughput-improvements-in-the-compiler-and-standard-library"></a>Miglioramenti di prestazioni/velocità effettiva nel compilatore e nella libreria standard

- Miglioramenti relativi alla velocità effettiva di compilazione, tra cui il modo in cui il linker gestisce l'I/O dei file e la fase di collegamento durante l'unione e la creazione di tipi PDB.

- È stato aggiunto il supporto di base per la vettorializzazione SIMD di OpenMP. È possibile abilitarla usando la nuova opzione `-openmp:experimental` del compilatore. Questa opzione permette la potenziale vettorializzazione dei cicli annotati con `#pragma omp simd`. La vettorializzazione non è garantita e per i cicli con annotazioni ma non vettorializzati verrà restituito un avviso. Nessuna clausola SIMD è supportata. Vengono semplicemente ignorate e viene segnalato un avviso.

- È stata aggiunta la nuova opzione della riga di comando `-Ob3` per l'incorporamento, che è una versione più aggressiva dell'opzione `-Ob2`. `-O2` (ottimizzazione dei dati binari per la velocità) implica comunque `-Ob2` per impostazione predefinita. Se l'inlining del compilatore non è abbastanza aggressivo, provare a passare a `-O2 -Ob3`.

- Per supportare la vettorializzazione manuale dei cicli con chiamate a funzioni della libreria matematica e determinate altre operazioni come la divisione di interi, è stato aggiunto il supporto per funzioni intrinseche Short Vector Math Library (SVML). Queste funzioni calcolano gli equivalenti dei vettori a 128, 256 o 512 bit. Per le definizioni delle funzioni supportate, vedere la [guida alle funzioni intrinseche Intel](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#!=undefined&techs=SVML).

- Ottimizzazioni nuove e migliorate:

  - Semplificazioni aritmetiche e a riduzione costante per le espressioni tramite funzioni intrinseche vettoriali SIMD per formati sia a virgola mobile che interi.

  - Analisi più potente per l'estrazione di informazioni dal flusso di controllo (istruzioni if/else/switch) per rimuovere i rami sempre dimostrati come true o false.

  - Introduzione di memset migliorati per l'uso di istruzioni vettoriali SSE2.

  - Rimozione migliorata di copie di coppie struct/classe inutili, in particolare per programmi C++ con passaggio di parametri per valore.

  - Maggiore ottimizzazione del codice tramite `memmove`, ad esempio la costruzione di `std::copy` o di `std::vector` e `std::string`.

- Ottimizzazione della progettazione fisica della libreria standard per evitare la compilazione di parti della libreria standard non incluse tramite #include, dimezzando così i tempi di compilazione di un file vuoto che include solo \<vector>. In seguito a questa modifica, potrebbe essere necessario includere tramite #include le direttive per le intestazioni in precedenza indirettamente incluse. Ad esempio, il codice che usa `std::out_of_range` potrebbe ora dover includere tramite #include \<stdexcept>. Il codice che usa un operatore di inserimento del flusso potrebbe ora dover includere tramite #include \<ostream>. Il vantaggio è rappresentato dal fatto che solo le unità di conversione che usano effettivamente i componenti \<stdexcept> o \<ostream> effettuano il pagamento della velocità effettiva per la compilazione.

- `if constexpr` è stato applicato in più posizioni nella libreria standard per garantire un aumento della velocità effettiva e una riduzione delle dimensioni del codice nelle operazioni di copia, in permutazioni come l'inversione e la rotazione e nella libreria di algoritmi paralleli. 

- La libreria standard usa ora `if constexpr` internamente per ridurre i tempi di compilazione anche in modalità C++14.

- Il rilevamento del collegamento dinamico del runtime per la libreria di algoritmi paralleli non usa più una pagina intera per archiviare la matrice del puntatore a funzione. Non è più considerato rilevante ai fini della sicurezza contrassegnare questa memoria come di sola lettura.

- `std::thread` del costruttore non è più in attesa dell'avvio del thread e non inserisce più un numero elevato di livelli di chiamate di funzione tra la libreria C sottostante `_beginthreadex` e l'oggetto chiamabile specificato. In precedenza, `std::thread` inseriva 6 funzioni tra `_beginthreadex` e l'oggetto chiamabile specificato, ridotto a soli 3 elementi (2 dei quali sono semplicemente `std::invoke`). In questo modo viene anche risolto un bug di temporizzazione poco chiaro, in cui `std::thread` del costruttore si bloccava se l'orologio di sistema cambiava al momento della creazione di un `std::thread`.

- È stata corretta una regressione delle prestazioni in `std::hash` introdotta durante l'implementazione di `std::hash<std::filesystem::path>`.

- In alcune posizioni la libreria standard usa ora distruttori anziché blocchi catch per conseguire livelli di correttezza. Ciò si traduce in un'interazione più efficiente con il debugger. Le eccezioni generate tramite la libreria standard nelle posizioni interessate verranno ora visualizzate come generate dal relativo sito di generazione originale, anziché dal sito di rigenerazione. Non tutti i blocchi catch della libreria standard sono stati eliminati. Il numero di blocchi catch dovrebbe essere ulteriormente ridotto nelle successive versioni di MSVC.

- Un codegen non ottimale in `std::bitset` causato da una generazione condizionale all'interno di una funzione noexcept è stato corretto eseguendo il factoring del percorso di generazione.

- Le famiglie `std::list` e `std::unordered_*` usano iteratori non di debug internamente in più posizioni.

- Alcuni membri di `std::list` sono stati modificati per riutilizzare i nodi elenco laddove possibile, anziché deallocandoli e riallocandoli. Ad esempio, se `list<int>` ha già una dimensione pari a 3, una chiamata a `assign(4, 1729)` sovrascriverà ora gli int nei primi 3 nodi elenco e allocherà un nuovo nodo elenco con il valore 1729, anziché deallocare tutti e 3 i nodi elenco e allocare 4 nuovi nodi con il valore 1729.

- Tutte le chiamate della libreria standard a `erase(begin(), end())` sono state modificate in `clear()`.

- `std::vector` inizializza e cancella ora gli elementi in modo più efficiente in alcuni casi.

- Sono stati apportati miglioramenti a `std::variant` per renderlo più adatto all'utilità di ottimizzazione e generare così un codice migliore. Miglioramento dell'inlining del codice con `std::visit`.

## <a name="c-ide"></a>IDE C++

### <a name="live-share-c-support"></a>Supporto di Live Share per C++

[Live Share](/visualstudio/liveshare/) ora supporta C++, consentendo agli sviluppatori che usano Visual Studio o Visual Studio Code di collaborare in tempo reale. Per altre informazioni, vedere [Announcing Live Share for C++: Real-Time Sharing and Collaboration](https://devblogs.microsoft.com/cppblog/cppliveshare/) (Annuncio di Live Share per C++: condivisione e collaborazione in tempo reale)

### <a name="intellicode-for-c"></a>IntelliCode per C++

IntelliCode è un'estensione facoltativa aggiunta come componente di un carico di lavoro in 16.1 che usa le proprie funzioni di training esteso e il contesto del codice per inserire nella parte superiore dell'elenco di completamento gli elementi che più probabilmente verranno usati. Spesso riesce a eliminare la necessità di scorrere l'elenco verso il basso. Per C++, IntelliCode si rivela di massima utilità quando si usano le librerie più comuni, come la libreria standard. Per altre informazioni, vedere [AI-Assisted Code Completion Suggestions Come to C++ via IntelliCode](https://devblogs.microsoft.com/cppblog/cppintellicode/) (Suggerimenti di completamento del codice con supporto per intelligenza artificiale disponibili in C++ tramite IntelliCode).

### <a name="template-intellisense"></a>IntelliSense per i modelli

La **barra dei modelli** usa ora l'interfaccia utente **Finestra di anteprima** invece di una finestra modale, supporta modelli annidati e immette in anticipo tutti gli argomenti predefiniti in **Finestra di anteprima**. Per altre informazioni, vedere [Template IntelliSense Improvements for Visual Studio 2019 Preview 2](https://devblogs.microsoft.com/cppblog/template-intellisense-improvements-for-visual-studio-2019-preview-2/) (Miglioramenti di IntelliSense per i modelli per Visual Studio 2019 Preview 2). Un elenco a discesa **Usati di recente** nella **Barra modelli** consente di passare rapidamente da un set precedente di argomenti di esempio a un altro.

### <a name="new-start-window-experience"></a>Nuova esperienza di finestra iniziale

Quando si avvia l'IDE, viene visualizzata una nuova finestra iniziale con le opzioni per aprire i progetti recenti, clonare il codice dal controllo del codice sorgente, aprire il codice locale come soluzione o cartella oppure creare un nuovo progetto. La finestra di dialogo Nuovo progetto è stata anche migliorata con l'esperienza filtrabile delle funzionalità di ricerca.

### <a name="new-names-for-some-project-templates"></a>Nuovi nomi per alcuni modelli di progetto

Sono stati modificati diversi nomi e descrizioni dei modelli di progetto per adattarli alla finestra di dialogo Nuovo progetto aggiornata.

### <a name="various-productivity-improvements"></a>Diversi miglioramenti della produttività

Visual Studio 2019 include le funzionalità seguenti che renderanno la codifica più semplice e intuitiva:

- Correzioni rapide per:
  - Aggiunta della direttiva #include mancante
  - Passaggio da NULL a nullptr
  - Aggiunta del punto e virgola mancante
  - Risoluzione dello spazio dei nomi o dell'ambito mancante
  - Sostituzione degli operandi di riferimento indiretto non validi (da \* a & e da & a \*)
- Informazioni rapide su un blocco tramite il passaggio del puntatore sulla parentesi di chiusura
- Anteprima file di codice/intestazione
- Vai alla definizione in #include apre il file

Per altre informazioni, vedere [C++ Productivity Improvements in Visual Studio 2019 Preview 2](https://devblogs.microsoft.com/cppblog/c-productivity-improvements-in-visual-studio-2019-preview-2/) (Miglioramenti della produttività di C++ in Visual Studio 2019 Preview 2).

**Visual Studio 2019 versione 16.1**

### <a name="quickinfo-improvements"></a>Miglioramenti in Informazioni rapide

Informazioni rapide rispetta ora la colorazione semantica dell'editor. Include anche un nuovo collegamento **Cerca online** che esegue la ricerca di documenti online per ottenere altre informazioni sul costrutto di codice al passaggio del mouse. Per il codice con sottolineatura rossa, il collegamento in Informazioni rapide cercherà l'errore online. In questo modo non sarà necessario digitare nuovamente il messaggio nel browser. Per altre informazioni, vedere [Quick Info Improvements in Visual Studio 2019: Colorization and Search Online](https://devblogs.microsoft.com/cppblog/quick-info-improvements-in-visual-studio-2019-colorization-and-search-online/) (Miglioramenti in Informazioni rapide in Visual Studio 2019: colorazione e Cerca online).

### <a name="intellicode-available-in-c-workload"></a>IntelliCode disponibile nel carico di lavoro C++

IntelliCode è ora disponibile come componente facoltativo nel carico di lavoro **Sviluppo di applicazioni desktop con C++**. Per altre informazioni, vedere [Improved C++ IntelliCode now Ships with Visual Studio 2019](https://devblogs.microsoft.com/cppblog/) (IntelliCode di C++ è stato migliorato ed è ora disponibile con Visual Studio 2019).

## <a name="cmake-support"></a>Supporto per CMake

- Supporto per CMake 3.14

- Visual Studio può ora aprire cache di CMake esistenti generate da strumenti esterni, come CMakeGUI, sistemi di meta-compilazione personalizzati o script di compilazione che richiamano cmake.exe.

- Prestazioni di IntelliSense migliorate.

- Un nuovo editor delle impostazioni offre un'alternativa alla modifica manuale del file CMakeSettings.json e una certa parità con CMakeGUI.

- Visual Studio permette il bootstrap dello sviluppo di C++ con CMake su Linux rilevando se è presente una versione di CMake compatibile nel computer Linux e, se non è presente, consente di installarla automaticamente.

- Le impostazioni non compatibili in CMakeSettings, ad esempio le architetture non corrispondenti o le impostazioni del generatore CMake non compatibili, mostrano linee a zigzag nell'editor JSON e restituiscono errori nell'elenco degli errori.

- La toolchain vcpkg viene automaticamente rilevata e abilitata per i progetti CMake aperti nell'IDE una volta eseguito `vcpkg integrate install`. Questo comportamento può essere disattivato specificando un file di toolchain vuoto in CMakeSettings.

- I progetti CMake permettono ora il debug Just My Code per impostazione predefinita.

- Gli avvisi di analisi statica possono ora essere elaborati in background e visualizzati nell'editor per i progetti CMake.

- Messaggi "begin" ed "end" di compilazione e configurazione più chiari per i progetti CMake e il supporto per l'interfaccia utente dello stato di compilazione di Visual Studio. Inoltre, è ora disponibile un'impostazione del livello di dettaglio di CMake in **Strumenti > Opzioni** per personalizzare il livello di dettaglio dei messaggi di compilazione e configurazione di CMake in Finestra di output.

- L'impostazione `cmakeToolchain` è ora supportata in CMakeSettings.json per specificare toolchain senza modificare manualmente la riga di comando di CMake.

- Nuova scelta rapida da tastiera **CTRL+MAIUSC+B** del menu **Compila tutto**.

**Visual Studio 2019 versione 16.1**

- Supporto integrato per la modifica, la compilazione e il debug di progetti CMake con Clang/LLVM. Per altre informazioni, vedere [Clang/LLVM Support in Visual Studio](https://devblogs.microsoft.com/cppblog/clang-llvm-support-in-visual-studio/) (Supporto per Clang/LLVM in Visual Studio).

## <a name="linux-and-wsl"></a>Linux e WSL

**Visual Studio 2019 versione 16.1**

- Supporto per [AddressSanitizer (ASan)](https://github.com/google/sanitizers/wiki/AddressSanitizer) nei progetti multipiattaforma CMake e Linux. Per altre informazioni, vedere [AddressSanitizer (ASan) for the Linux Workload in Visual Studio 2019](https://devblogs.microsoft.com/cppblog/addresssanitizer-asan-for-the-linux-workload-in-visual-studio-2019/) (AddressSanitizer (ASan) per i carichi di lavoro Linux in Visual Studio 2019).

- Supporto integrato di Visual Studio per l'uso di C++ con Windows Subsystem for Linux (WSL). Per altre informazioni, vedere [C++ with Visual Studio 2019 and Windows Subsystem for Linux (WSL)](https://devblogs.microsoft.com/cppblog/c-with-visual-studio-2019-and-windows-subsystem-for-linux-wsl/) (C++ con Visual Studio 2019 e Windows Subsystem for Linux (WSL)).

## <a name="incredibuild-integration"></a>Integrazione‎ di IncrediBuild

IncrediBuild è ora incluso come componente facoltativo nel carico di lavoro **Sviluppo di applicazioni desktop con C++**. Build Monitor di IncrediBuild è completamente integrato nell'IDE di Visual Studio. Per altre informazioni, vedere [Visualize your build with IncrediBuild’s Build Monitor and Visual Studio 2019](https://devblogs.microsoft.com/cppblog/visualize-your-build-with-incredibuilds-build-monitor-and-visual-studio-2019/) (Visualizzazione della compilazione con Build Monitor di IncrediBuild e Visual Studio 2019).
 
## <a name="debugging"></a>Debug

- Per le applicazioni C++ in esecuzione in Windows, i file PDB vengono ora caricati in un processo a 64 bit separato. Questa modifica risolve una vasta gamma di arresti anomali causati dalla memoria insufficiente nel debugger durante l'esecuzione del debug di applicazioni che contengono un elevato numero di moduli e di file PDB.

- La ricerca è abilitata nelle finestre **Espressioni di controllo**, **Auto** e **Variabili locali**.

## <a name="windows-desktop-development-with-c"></a>Sviluppo per Windows Desktop con C++

- Queste procedure guidate ATL/MFC per C++ non sono più disponibili:

  - Creazione guidata componente ATL COM+ 1.0
  - Creazione guidata componente ASP ATL
  - Creazione guidata provider OLE DB ATL
  - Creazione guidata pagina delle proprietà ATL
  - Creazione guidata consumer OLE DB ATL
  - Consumer ODBC MFC
  - Classe MFC da controllo ActiveX
  - Classe MFC da libreria di tipi.

  Il codice di esempio per queste tecnologie è archiviato in Microsoft Docs e nel repository GitHub VCSamples.

- Windows 8.1 SDK non è più disponibile nel programma di installazione di Visual Studio. È consigliabile aggiornare i progetti C++ alla versione più recente di Windows 10 SDK. Se esiste una dipendenza rigida dalla versione 8.1, è possibile scaricare l'SDK dall'archivio di Windows SDK.

- Windows XP non sarà più disponibile come destinazione per il set di strumenti C++ più recente. Windows XP come destinazione con le librerie e il compilatore MSVC a livello di Visual Studio 2017 è ancora supportato e l'SDK può essere installato tramite "Singoli componenti".

- La documentazione sconsiglia fortemente l'uso di moduli di unione per la distribuzione del runtime di Visual C++. In questa versione è stato intrapreso il passaggio aggiuntivo di contrassegnare i moduli di unione (MSM) come deprecati. Provare a eseguire la migrazione della distribuzione centrale di VCRuntime da moduli di unione al pacchetto ridistribuibile.

## <a name="mobile-development-with-c-android-and-ios"></a>Sviluppo di applicazioni per dispositivi mobili con C++ (Android e iOS)

Per impostazione predefinita, l'esperienza Android per C++ ora fa riferimento a Android SDK 25 e Android NDK 16b.

## <a name="clangc2-platform-toolset"></a>Set di strumenti della piattaforma Clang/C2

Il componente sperimentale Clang/C2 è stato rimosso. Usare il set di strumenti MSVC per la conformità agli standard C++ completa con `/permissive-` e `/std:c++17` oppure la toolchain Clang/LLVM per Windows.

## <a name="code-analysis"></a>Analisi codice

- L'analisi codice viene ora eseguita automaticamente in background. Gli avvisi vengono visualizzati come linee a zigzag di colore verde all'interno dell'editor durante la digitazione. Per altre informazioni, vedere [In-editor code analysis in Visual Studio 2019 Preview 2](https://devblogs.microsoft.com/cppblog/in-editor-code-analysis-in-visual-studio-2019-preview-2/) (Analisi del codice nell'editor in Visual Studio 2019 Preview 2).

- Nuove regole ConcurrencyCheck sperimentali per i tipi noti della libreria standard dall'intestazione \<mutex>. Per altre informazioni, vedere [Concurrency Code Analysis in Visual Studio 2019](https://devblogs.microsoft.com/cppblog/concurrency-code-analysis-in-visual-studio-2019/) (Analisi del codice di concorrenza in Visual Studio 2019).

- Implementazione parziale aggiornata del [controllo dei profili di durata](https://herbsutter.com/2018/09/20/lifetime-profile-v1-0-posted/), che rileva puntatori e riferimenti inesatti. Per altre informazioni, vedere [Lifetime Profile Update in Visual Studio 2019 Preview 2](https://devblogs.microsoft.com/cppblog/lifetime-profile-update-in-visual-studio-2019-preview-2/) (Aggiornamento dei profili di durata in Visual Studio 2019 Preview 2).

- Altri controlli relativi alle coroutine, inclusi C26138, C26810, C26811 e la regola sperimentale C26800. Per altre informazioni, vedere [New Code Analysis Checks in Visual Studio 2019: use-after-move and coroutine](https://devblogs.microsoft.com/cppblog/new-code-analysis-checks-in-visual-studio-2019-use-after-move-and-coroutine/) (Nuovi controlli di analisi del codice in Visual Studio 2019: use-after-move e coroutine).

**Visual Studio 2019 versione 16.1**

Nuove correzioni rapide per controlli di variabili non inizializzate. Per altre informazioni, vedere [New code analysis quick fixes for uninitialized memory (C6001) and use before init (C26494) warnings](https://devblogs.microsoft.com/cppblog/new-code-analysis-quick-fixes-for-uninitialized-memory-c6001-and-use-before-init-c26494-warnings/) (Nuove correzioni rapide di analisi del codice per avvisi di memoria non inizializzata (C6001) and use-before-init (C26494)).

## <a name="unit-testing"></a>Unit test

Il modello di progetto di test C++ gestito non è più disponibile. È possibile continuare a usare il framework di test C++ gestito nei progetti esistenti. Per i nuovi unit test, è consigliabile usare uno dei framework di test nativi per cui Visual Studio fornisce modelli (MSTest, Google Test) o il modello di progetto di test C# gestito.
