---
title: Novità di C++ in Visual Studio
description: Nuove funzionalità e correzioni del compilatore e degli strumenti di Microsoft C/C++ in Visual Studio.
ms.date: 02/08/2021
ms.technology: cpp-ide
ms.openlocfilehash: c17dd2981a455192715fb44e14e8b84d2d10e69c
ms.sourcegitcommit: 77235bff6a7b2621c501938e30d93cb15f5733cb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/09/2021
ms.locfileid: "100006085"
---
# <a name="whats-new-for-c-in-visual-studio"></a>Novità di C++ in Visual Studio

::: moniker range=">=msvc-160"

In Visual Studio 2019 sono stati inclusi numerosi aggiornamenti e correzioni per l'ambiente Microsoft C++. Sono stati corretti numerosi bug e problemi del compilatore e degli strumenti. Molti di questi problemi sono stati segnalati dai clienti tramite le opzioni [Segnala un problema](/visualstudio/ide/how-to-report-a-problem-with-visual-studio?view=vs-2019&preserve-view=true) e [Invia un suggerimento](https://aka.ms/feedback/suggest?space=62) in **Commenti e suggerimenti**. Microsoft ringrazia i clienti per le segnalazioni inviate. Per altre informazioni sulle novità in tutto Visual Studio, visitare la pagina [Novità in Visual Studio 2019](/visualstudio/ide/whats-new-visual-studio-2019). Per informazioni sulle novità per C++ in Visual Studio 2017, vedere [Novità di C++ in Visual Studio 2017](?preserve-view=true&view=msvc-150). Per informazioni sulle novità per C++ in Visual Studio 2015 e versioni precedenti, vedere [Visual C++: novità dalla versione 2003 alla 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md).

Per informazioni sulle novità della documentazione di C++, vedere [documentazione di Microsoft c++:](whats-new-cpp-docs.md)novità.

## <a name="c-compiler"></a>compilatore C++

- Supporto ottimizzato per le funzionalità di C++17 e le correzioni di correttezza e supporto sperimentale per le funzionalità di C++20 come i moduli e le coroutine. Per informazioni dettagliate, vedere [Miglioramenti della conformità di C++ in Visual Studio 2019](cpp-conformance-improvements.md).

- L' `/std:c++latest` opzione include ora funzionalità c++ 20 che non sono necessariamente complete, incluso il supporto iniziale per l'operatore c++ 20 \<=> ("spazio") per il confronto a tre vie.

- L'opzione `/Gm` del compilatore C++ è ora deprecata. Provare a disabilitare l'opzione `/Gm` negli script di compilazione se è definita in modo esplicito. Tuttavia è anche possibile ignorare l'avviso di funzionalità deprecata per `/Gm`, perché non viene considerato un errore quando si usa l'opzione "Considera gli avvisi come errori" (`/WX`).

- Con l'avvio dell'implementazione di funzionalità da parte di MSVC dalla bozza standard di C++ 20 nel flag `/std:c++latest`, `/std:c++latest` è incompatibile con `/clr` (tutte le versioni), `/ZW` e `/Gm`. In Visual Studio 2019 usare le modalità `/std:c++17` oppure `/std:c++14` durante la compilazione con `/clr`, `/ZW` o `/Gm` (ma vedere il punto elenco precedente).

- Non vengono più generate intestazioni precompilate per app desktop e console C++ per impostazione predefinita.

### <a name="codegen-security-diagnostics-and-versioning"></a>Codegen, sicurezza, diagnostica e controllo delle versioni

Miglioramento dell'analisi con `/Qspectre` per fornire assistenza per la mitigazione per Spectre variante 1 (CVE-2017-5753). Per altre informazioni, vedere [Spectre mitigations in MSVC](https://devblogs.microsoft.com/cppblog/spectre-mitigations-in-msvc/) (Mitigazioni Spectre in MSVC).

## <a name="c-standard-library-improvements"></a>Miglioramenti della libreria standard di C++

- Implementazione di altre funzionalità delle librerie di C++17 e C++20 e correzioni di correttezza. Per informazioni dettagliate, vedere [Miglioramenti della conformità di C++ in Visual Studio 2019](cpp-conformance-improvements.md).

- È stato applicato il formato Clang alle intestazioni della libreria standard di C++ per migliorare la leggibilità.

- Poiché Visual Studio supporta ora Just My Code per C++, la libreria standard non deve più fornire un sistema personalizzato affinché `std::function` e `std::visit` ottengano lo stesso effetto. La rimozione del sistema non ha alcun effetto visibile per l'utente, Un'eccezione è che il compilatore non produrrà più la diagnostica che indica i problemi alla riga 15732480 o 16707566 di \<type_traits> o \<variant> .

## <a name="performancethroughput-improvements-in-the-compiler-and-standard-library"></a>Miglioramenti di prestazioni/velocità effettiva nel compilatore e nella libreria standard

- Miglioramenti relativi alla velocità effettiva di compilazione, tra cui il modo in cui il linker gestisce l'I/O dei file e la fase di collegamento durante l'unione e la creazione di tipi PDB.

- È stato aggiunto il supporto di base per la vettorializzazione SIMD di OpenMP. È possibile abilitarla usando la nuova opzione del compilatore **`/openmp:experimental`** . Questa opzione permette la potenziale vettorializzazione dei cicli annotati con `#pragma omp simd`. La vettorializzazione non è garantita e per i cicli con annotazioni ma non vettorializzati verrà restituito un avviso. Nessuna clausola SIMD è supportata. Vengono ignorate e viene segnalato un avviso.

- È stata aggiunta una nuova opzione della riga di comando di incorporamento **`/Ob3`** , che è una versione più aggressiva di **`/Ob2`** . **`/O2`** (ottimizzare il binario per la velocità) implica ancora **`/Ob2`** per impostazione predefinita. Se si rileva che il compilatore non inline è sufficientemente aggressivo, provare a passare **`/O2 -Ob3`** .

- È stato aggiunto il supporto per le funzioni intrinseche SVML (short vector Math Library). Queste funzioni calcolano gli equivalenti dei vettori a 128, 256 o 512 bit. Sono stati aggiunti per supportare la vettorizzazione della mano dei cicli con chiamate alle funzioni della libreria matematica e alcune altre operazioni come la divisione di interi. Per le definizioni delle funzioni supportate, vedere la [guida alle funzioni intrinseche Intel](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#!=undefined&techs=SVML).

- Ottimizzazioni nuove e migliorate:

  - Semplificazioni aritmetiche e a riduzione costante per le espressioni tramite funzioni intrinseche vettoriali SIMD per formati sia a virgola mobile che interi.

  - Analisi più potente per l'estrazione di informazioni dal flusso di controllo (istruzioni if/else/switch) per rimuovere i rami sempre dimostrati come true o false.

  - Introduzione di memset migliorati per l'uso di istruzioni vettoriali SSE2.

  - Rimozione migliorata di copie di coppie struct/classe inutili, in particolare per programmi C++ con passaggio di parametri per valore.

  - Maggiore ottimizzazione del codice tramite `memmove`, ad esempio la costruzione di `std::copy` o di `std::vector` e `std::string`.

- La progettazione fisica della libreria standard è stata ottimizzata per evitare la compilazione di parti della libreria standard non direttamente incluse. Questa modifica consente di ridurre il tempo di compilazione di un file vuoto che include solo la \<vector> metà. Di conseguenza potrebbe essere necessario aggiungere direttive `#include` per le intestazioni in precedenza incluse indirettamente. Ad esempio, il codice che usa `std::out_of_range` potrebbe ora dover aggiungere `#include <stdexcept>`. Il codice che usa un operatore di inserimento del flusso potrebbe ora dover aggiungere `#include <ostream>`. Il vantaggio è che solo le unità di conversione che usano effettivamente \<stdexcept> \<ostream> i componenti o pagano il costo della velocità effettiva per compilarle.

- `if constexpr` è stato applicato in più posizioni nella libreria standard per garantire un aumento della velocità effettiva e una riduzione delle dimensioni del codice nelle operazioni di copia, in permutazioni come l'inversione e la rotazione e nella libreria di algoritmi paralleli.

- La libreria standard usa ora `if constexpr` internamente per ridurre i tempi di compilazione anche in modalità C++14.

- Il rilevamento del collegamento dinamico del runtime per la libreria di algoritmi paralleli non usa più una pagina intera per archiviare la matrice del puntatore a funzione. Non è più considerato rilevante ai fini della sicurezza contrassegnare questa memoria come di sola lettura.

- `std::thread` del costruttore non è più in attesa dell'avvio del thread e non inserisce più un numero elevato di livelli di chiamate di funzione tra la libreria C sottostante `_beginthreadex` e l'oggetto chiamabile specificato. In precedenza `std::thread` sono state inserite sei funzioni tra `_beginthreadex` e l'oggetto chiamabile fornito. Questo numero è stato ridotto solo a tre, due dei quali sono semplicemente `std::invoke` . Questa modifica risolve anche un bug di temporizzazione oscuro, in cui un `std::thread` Costruttore smette di rispondere se l'orologio di sistema è stato modificato nel momento esatto in cui `std::thread` è stato creato.

- È stata corretta una regressione delle prestazioni in `std::hash` introdotta durante l'implementazione di `std::hash<std::filesystem::path>`.

- La libreria standard usa ora distruttori anziché blocchi catch in varie posizioni per ottenere la correttezza. Questa modifica comporta una migliore interazione del debugger: le eccezioni generate tramite la libreria standard nelle posizioni interessate vengono ora visualizzate come generate dal sito di generazione originale, anziché dalla rigenerazione. Non tutti i blocchi catch della libreria standard sono stati eliminati. Si prevede che il numero di blocchi catch venga ridotto nelle versioni successive di MSVC.

- Un codegen non ottimale in `std::bitset` causato da una generazione condizionale all'interno di una funzione noexcept è stato corretto eseguendo il factoring del percorso di generazione.

- Le famiglie `std::list` e `std::unordered_*` usano iteratori non di debug internamente in più posizioni.

- Alcuni membri di `std::list` sono stati modificati per riutilizzare i nodi elenco laddove possibile, anziché deallocandoli e riallocandoli. Ad esempio, dato un oggetto `list<int>` che ha già una dimensione di 3, una chiamata a `assign(4, 1729)` ora sovrascrive gli int nei primi tre nodi elenco e alloca un nuovo nodo elenco con il valore 1729.

- Tutte le chiamate della libreria standard a `erase(begin(), end())` sono state modificate in `clear()`.

- `std::vector` inizializza e cancella ora gli elementi in modo più efficiente in alcuni casi.

- Sono stati apportati miglioramenti a `std::variant` per renderlo più adatto all'utilità di ottimizzazione e generare così un codice migliore. Miglioramento dell'inlining del codice con `std::visit`.

## <a name="c-ide"></a>IDE C++

### <a name="live-share-c-support"></a>Supporto di Live Share per C++

[Live Share](/visualstudio/liveshare/) ora supporta C++, consentendo agli sviluppatori che usano Visual Studio o Visual Studio Code di collaborare in tempo reale. Per ulteriori informazioni, vedere [annuncio Live Share per C++: Real-Time condivisione e collaborazione](https://devblogs.microsoft.com/cppblog/cppliveshare/)

### <a name="intellicode-for-c"></a>IntelliCode per C++

##### <a name="visual-studio-2019-version-161"></a>Visual Studio 2019 versione 16.1

IntelliCode usa il proprio training completo e il contesto del codice per inserire gli elementi che più probabilmente verranno usati nella parte superiore dell'elenco di completamento. Spesso riesce a eliminare la necessità di scorrere l'elenco verso il basso. Per C++, IntelliCode si rivela di massima utilità quando si usano le librerie più comuni, come la libreria standard. IntelliCode è un'estensione facoltativa disponibile come componente del carico di lavoro nel programma di installazione. Per altre informazioni, vedere [AI-Assisted Code Completion Suggestions Come to C++ via IntelliCode](https://devblogs.microsoft.com/cppblog/cppintellicode/) (Suggerimenti di completamento del codice con supporto per intelligenza artificiale disponibili in C++ tramite IntelliCode).

### <a name="template-intellisense"></a>IntelliSense per i modelli

La **barra dei modelli** usa ora l'interfaccia utente **Finestra di anteprima** invece di una finestra modale, supporta modelli annidati e immette in anticipo tutti gli argomenti predefiniti in **Finestra di anteprima**. Per altre informazioni, vedere [Template IntelliSense Improvements for Visual Studio 2019 Preview 2](https://devblogs.microsoft.com/cppblog/template-intellisense-improvements-for-visual-studio-2019-preview-2/) (Miglioramenti di IntelliSense per i modelli per Visual Studio 2019 Preview 2). Un elenco a discesa **Usati di recente** nella **Barra modelli** consente di passare rapidamente da un set precedente di argomenti di esempio a un altro.

### <a name="new-start-window-experience"></a>Nuova esperienza di finestra iniziale

Quando si avvia l'IDE, viene visualizzata una nuova finestra di avvio. Sono disponibili opzioni per aprire i progetti recenti, clonare codice dal controllo del codice sorgente, aprire codice locale come soluzione o cartella oppure creare un nuovo progetto. La finestra di dialogo Nuovo progetto è stata anche migliorata con l'esperienza filtrabile delle funzionalità di ricerca.

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

### <a name="quickinfo-improvements"></a>Miglioramenti in Informazioni rapide

##### <a name="visual-studio-2019-version-161"></a>Visual Studio 2019 versione 16.1

Informazioni rapide rispetta ora la colorazione semantica dell'editor. Include anche un nuovo collegamento **Cerca online** che esegue la ricerca di documenti online per ottenere altre informazioni sul costrutto di codice al passaggio del mouse. Il collegamento fornito da informazioni rapide per il codice Red-squiggled consente di cercare l'errore online. In questo modo non è necessario digitare nuovamente il messaggio nel browser. Per altre informazioni, vedere [miglioramenti delle informazioni rapide in Visual Studio 2019: colorazione e ricerca online](https://devblogs.microsoft.com/cppblog/quick-info-improvements-in-visual-studio-2019-colorization-and-search-online/).

### <a name="intellicode-available-in-c-workload"></a>IntelliCode disponibile nel carico di lavoro C++

##### <a name="visual-studio-2019-version-161"></a>Visual Studio 2019 versione 16.1

IntelliCode è ora disponibile come componente facoltativo nel carico di lavoro **Sviluppo di applicazioni desktop con C++**. Per altre informazioni, vedere [Improved C++ IntelliCode now Ships with Visual Studio 2019](https://devblogs.microsoft.com/cppblog/improved-c-intellicode-now-ships-with-visual-studio-2019/) (IntelliCode di C++ è stato migliorato ed è ora disponibile con Visual Studio 2019).

## <a name="cmake-support"></a>Supporto per CMake

- Supporto per CMake 3.14

- Visual Studio può ora aprire cache di CMake esistenti generate da strumenti esterni, come CMakeGUI, sistemi di meta-compilazione personalizzati o script di compilazione che richiamano cmake.exe.

- Prestazioni di IntelliSense migliorate.

- Un nuovo editor delle impostazioni offre un'alternativa alla modifica manuale del file CMakeSettings.json e una certa parità con CMakeGUI.

- Visual Studio permette il bootstrap dello sviluppo di C++ con CMake su Linux rilevando se è presente una versione di CMake compatibile nel computer Linux. In caso contrario, propone di installarla.

- Le impostazioni non compatibili in CMakeSettings, ad esempio le architetture non corrispondenti o le impostazioni del generatore CMake non compatibili, mostrano linee a zigzag nell'editor JSON e restituiscono errori nell'elenco degli errori.

- La toolchain vcpkg viene automaticamente rilevata e abilitata per i progetti CMake aperti nell'IDE una volta eseguito `vcpkg integrate install`. Questo comportamento può essere disattivato specificando un file di toolchain vuoto in CMakeSettings.

- I progetti CMake permettono ora il debug Just My Code per impostazione predefinita.

- Gli avvisi di analisi statica vengono ora elaborati in background e visualizzati nell'editor per i progetti CMake.

- Messaggi "begin" ed "end" di compilazione e configurazione più chiari per i progetti CMake e il supporto per l'interfaccia utente dello stato di compilazione di Visual Studio. Inoltre, è ora disponibile un'impostazione del livello di dettaglio di CMake in **Strumenti > Opzioni** per personalizzare il livello di dettaglio dei messaggi di compilazione e configurazione di CMake in Finestra di output.

- L'impostazione `cmakeToolchain` è ora supportata in CMakeSettings.json per specificare toolchain senza modificare manualmente la riga di comando di CMake.

- Nuova scelta rapida da tastiera **CTRL+MAIUSC+B** del menu **Compila tutto**.

##### <a name="visual-studio-2019-version-161"></a>Visual Studio 2019 versione 16.1

- Supporto integrato per la modifica, la compilazione e il debug di progetti CMake con Clang/LLVM. Per altre informazioni, vedere [Clang/LLVM Support in Visual Studio](https://devblogs.microsoft.com/cppblog/clang-llvm-support-in-visual-studio/) (Supporto per Clang/LLVM in Visual Studio).

## <a name="linux-and-the-windows-subsystem-for-linux"></a>Linux e il sottosistema Windows per Linux

##### <a name="visual-studio-2019-version-161"></a>Visual Studio 2019 versione 16.1

- Supporto per [AddressSanitizer (ASan)](https://github.com/google/sanitizers/wiki/AddressSanitizer) nei progetti multipiattaforma CMake e Linux. Per altre informazioni, vedere [AddressSanitizer (ASan) for the Linux Workload in Visual Studio 2019](https://devblogs.microsoft.com/cppblog/addresssanitizer-asan-for-the-linux-workload-in-visual-studio-2019/) (AddressSanitizer (ASan) per i carichi di lavoro Linux in Visual Studio 2019).

- Supporto integrato di Visual Studio per l'uso di C++ con Windows Subsystem for Linux (WSL). Per altre informazioni, vedere [C++ with Visual Studio 2019 and Windows Subsystem for Linux (WSL)](https://devblogs.microsoft.com/cppblog/c-with-visual-studio-2019-and-windows-subsystem-for-linux-wsl/) (C++ con Visual Studio 2019 e Windows Subsystem for Linux (WSL)).

## <a name="incredibuild-integration"></a>Integrazione‎ di IncrediBuild

IncrediBuild è ora incluso come componente facoltativo nel carico di lavoro **Sviluppo di applicazioni desktop con C++**. Build Monitor di IncrediBuild è completamente integrato nell'IDE di Visual Studio. Per altre informazioni, vedere [visualizzare la compilazione con il monitoraggio di compilazione di IncrediBuild e Visual Studio 2019](https://devblogs.microsoft.com/cppblog/visualize-your-build-with-incredibuilds-build-monitor-and-visual-studio-2019/).

## <a name="debugging"></a>Debug

- Per le applicazioni C++ in esecuzione in Windows, i file PDB vengono ora caricati in un processo a 64 bit separato. Questa modifica risolve un intervallo di arresti anomali causati dal debugger che ha esaurito la memoria. Ad esempio, durante il debug di applicazioni che contengono un numero elevato di moduli e file PDB.

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

- Il Software Development Kit (SDK) di Windows 8.1 non è più disponibile nel programma di installazione di Visual Studio. È consigliabile aggiornare i progetti C++ alla versione più recente di Windows 10 SDK. Se esiste una dipendenza rigida dalla versione 8.1, è possibile scaricare l'SDK dall'archivio di Windows SDK.

- Windows XP non sarà più disponibile come destinazione per il set di strumenti C++ più recente. Windows XP come destinazione con le librerie e il compilatore MSVC a livello di Visual Studio 2017 è ancora supportato e l'SDK può essere installato tramite "Singoli componenti".

- La documentazione sconsiglia fortemente l'uso di moduli di unione per la distribuzione del runtime di Visual C++. In questa versione è stato intrapreso il passaggio aggiuntivo di contrassegnare i moduli di unione (MSM) come deprecati. Provare a eseguire la migrazione della distribuzione centrale di VCRuntime da moduli di unione al pacchetto ridistribuibile.

## <a name="mobile-development-with-c-android-and-ios"></a>Sviluppo di applicazioni per dispositivi mobili con C++ (Android e iOS)

Per impostazione predefinita, l'esperienza Android per C++ ora fa riferimento a Android SDK 25 e Android NDK 16b.

## <a name="clangc2-platform-toolset"></a>Set di strumenti della piattaforma Clang/C2

Il componente sperimentale Clang/C2 è stato rimosso. Usare il set di strumenti MSVC per la conformità agli standard C++ completa con `/permissive-` e `/std:c++17` oppure la toolchain Clang/LLVM per Windows.

## <a name="code-analysis"></a>Analisi codice

- L'analisi codice viene ora eseguita automaticamente in background. Gli avvisi vengono visualizzati come linee a zigzag di colore verde all'interno dell'editor durante la digitazione. Per altre informazioni, vedere [In-editor code analysis in Visual Studio 2019 Preview 2](https://devblogs.microsoft.com/cppblog/in-editor-code-analysis-in-visual-studio-2019-preview-2/) (Analisi del codice nell'editor in Visual Studio 2019 Preview 2).

- Nuove regole ConcurrencyCheck sperimentali per i tipi di libreria standard ben noti dall' \<mutex> intestazione. Per altre informazioni, vedere [Concurrency Code Analysis in Visual Studio 2019](https://devblogs.microsoft.com/cppblog/concurrency-code-analysis-in-visual-studio-2019/) (Analisi del codice di concorrenza in Visual Studio 2019).

- Implementazione parziale aggiornata del [controllo dei profili di durata](https://herbsutter.com/2018/09/20/lifetime-profile-v1-0-posted/), che rileva puntatori e riferimenti inesatti. Per altre informazioni, vedere [Lifetime Profile Update in Visual Studio 2019 Preview 2](https://devblogs.microsoft.com/cppblog/lifetime-profile-update-in-visual-studio-2019-preview-2/) (Aggiornamento dei profili di durata in Visual Studio 2019 Preview 2).

- Altri controlli relativi alle coroutine, inclusi C26138, C26810, C26811 e la regola sperimentale C26800. Per altre informazioni, vedere [New Code Analysis Checks in Visual Studio 2019: use-after-move and coroutine](https://devblogs.microsoft.com/cppblog/new-code-analysis-checks-in-visual-studio-2019-use-after-move-and-coroutine/) (Nuovi controlli di analisi del codice in Visual Studio 2019: use-after-move e coroutine).

##### <a name="visual-studio-2019-version-161"></a>Visual Studio 2019 versione 16.1

- Nuove correzioni rapide per controlli di variabili non inizializzate. Per altre informazioni, vedere [New code analysis quick fixes for uninitialized memory (C6001) and use before init (C26494) warnings](https://devblogs.microsoft.com/cppblog/new-code-analysis-quick-fixes-for-uninitialized-memory-c6001-and-use-before-init-c26494-warnings/) (Nuove correzioni rapide di analisi del codice per avvisi di memoria non inizializzata (C6001) and use-before-init (C26494)).

## <a name="unit-testing"></a>Unit test

Il modello di progetto di test C++ gestito non è più disponibile. È possibile continuare a usare il framework di test C++ gestito nei progetti esistenti. Per i nuovi unit test, è consigliabile usare uno dei framework di test nativi per cui Visual Studio fornisce modelli (MSTest, Google Test) o il modello di progetto di test C# gestito.

::: moniker-end

::: moniker range="=msvc-150"

In Visual Studio 2017 sono stati inclusi numerosi aggiornamenti e correzioni per l'ambiente Visual C++. Sono stati corretti più di 250 bug e sono stati segnalati problemi nel compilatore e negli strumenti. Molti sono stati inviati dai clienti tramite il [segnala un problema e forniscono un'](/visualstudio/ide/how-to-report-a-problem-with-visual-studio?view=vs-2017&preserve-view=true) opzione di suggerimento in **Invia commenti** e suggerimenti. Microsoft ringrazia i clienti per le segnalazioni inviate. Per altre informazioni sulle novità in tutto Visual Studio, vedere [Novità in Visual Studio 2017](/visualstudio/ide/whats-new-visual-studio-2017?view=vs-2017&preserve-view=true). Per informazioni sulle novità per C++ in Visual Studio 2019, vedere [Novità di C++ in Visual Studio](?preserve-view=true&view=msvc-160). Per informazioni sulle novità per C++ in Visual Studio 2015 e versioni precedenti, vedere [Visual C++: novità dalla versione 2003 alla 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md).

## <a name="visual-studio-2017-c-compiler"></a>Compilatore C++ Visual Studio 2017

### <a name="c-conformance-improvements"></a>Miglioramenti della conformità di C++

Il compilatore C++ e la libreria standard sono stati aggiornati in questa versione con supporto avanzato per le funzionalità di C++ 11 e C++ 14. Include inoltre il supporto preliminare per determinate funzionalità previste nello standard C++ 17. Per informazioni dettagliate, vedere [Miglioramenti della conformità di C++ in Visual Studio 2017](cpp-conformance-improvements.md).

##### <a name="visual-studio-2017-version-155"></a>Visual Studio 2017 versione 15.5

Il compilatore supporta circa il 75% delle funzionalità nuove in C++ 17, inclusi binding strutturati, **`constexpr`** espressioni lambda, `if constexpr` , variabili inline, espressioni di riduzioni e aggiunta **`noexcept`** al sistema di tipi. Queste funzionalità sono disponibili con l' **`/std:c++17`** opzione. Per altre informazioni, vedere [miglioramenti della conformità di C++ in Visual Studio 2017](cpp-conformance-improvements.md)

##### <a name="visual-studio-2017-version-157"></a>Visual Studio 2017 versione 15.7

Il set di strumenti del compilatore MSVC in Visual Studio versione 15.7 è ora conforme allo standard C++. Per ulteriori informazioni, vedere [annuncio: MSVC è conforme alla conformità del](https://devblogs.microsoft.com/cppblog/announcing-msvc-conforms-to-the-c-standard/) linguaggio c++ standard e [Microsoft c++](./visual-cpp-language-conformance.md).

##### <a name="visual-studio-2017-version-158"></a>Visual Studio 2017 versione 15.8

L' [`/experimental:preprocessor`](../build/reference/experimental-preprocessor.md) opzione del compilatore Abilita il nuovo preprocessore MSVC sperimentale che alla fine sarà conforme a tutti gli standard C e C++ applicabili. Per altre informazioni, vedere [MSVC New Preprocessor Overview](../preprocessor/preprocessor-experimental-overview.md).

### <a name="new-compiler-options"></a>Nuove opzioni del compilatore

- [`/permissive-`](../build/reference/permissive-standards-conformance.md): Abilitare tutte le opzioni del compilatore per la conformità agli standard rigidi e disabilitare la maggior parte delle estensioni del compilatore specifiche di Microsoft (ma non `__declspec(dllimport)` , ad esempio). Questa opzione è attiva per impostazione predefinita in Visual Studio 2017 versione 15.5.  La **`/permissive-`** modalità di conformità include il supporto per la ricerca del nome in due fasi. Per altre informazioni, vedere [miglioramenti della conformità di C++ in Visual Studio](cpp-conformance-improvements.md).

- [`/diagnostics`](../build/reference/diagnostics-compiler-diagnostic-options.md): Abilita la visualizzazione dell'errore di diagnostica o della posizione di avviso in tre modi diversi: solo il numero di riga, il numero di riga e la colonna o il numero di riga e la colonna con un accento circonflesso sotto la riga di codice che causa il problema.

- [`/debug:fastlink`](../build/reference/debug-generate-debug-info.md): Abilita fino al 30% di tempi di collegamento incrementali più veloci (rispetto a Visual Studio 2015) non copiando tutte le informazioni di debug nel file PDB. Il file PDB punta invece alle informazioni di debug per i file di libreria e oggetto usati per creare il file eseguibile. Vedere il [ciclo di compilazione C++ più veloce in vs " `/Debug:fastlink` 15" con](https://devblogs.microsoft.com/cppblog/faster-c-build-cycle-in-vs-15-with-debugfastlink/) i [consigli e per velocizzare le compilazioni c++ in Visual Studio](https://devblogs.microsoft.com/cppblog/recommendations-to-speed-c-builds-in-visual-studio/).

- Visual Studio 2017 consente l'uso [`/sdl`](../build/reference/sdl-enable-additional-security-checks.md) di con [`/await`](../build/reference/await-enable-coroutine-support.md) . È stata rimossa la [`/RTC`](../build/reference/rtc-run-time-error-checks.md) limitazione con le coroutine.

##### <a name="visual-studio-2017-version-153"></a>Visual Studio 2017 versione 15.3

- [ `/std:c++14` e `/std:c++latest` ](../build/reference/std-specify-language-standard-version.md): queste opzioni del compilatore consentono di acconsentire esplicitamente a versioni specifiche del linguaggio di programmazione ISO C++ in un progetto. La maggior parte delle nuove funzionalità standard di progettazione sono sorvegliate dall' **`/std:c++latest`** opzione.

- [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) Abilita il set di funzionalità C++ 17 implementate dal compilatore. Questa opzione Disabilita il supporto del compilatore e della libreria standard per le funzionalità dopo C++ 17: quelle modificate o nuove nelle versioni successive della bozza di lavoro e gli aggiornamenti dei difetti dello standard C++. Per abilitare tali funzionalità, utilizzare **`/std:c++latest`** .

### <a name="codegen-security-diagnostics-and-versioning"></a>Codegen, sicurezza, diagnostica e controllo delle versioni

In questa versione sono stati introdotti numerosi miglioramenti per l'ottimizzazione, la generazione del codice, il controllo delle versioni del set di strumenti e la diagnostica. Ecco alcuni dei miglioramenti più rilevanti:

- Miglioramento della generazione del codice per i cicli: supporto della vettorializzazione automatica della divisione di interi costanti, migliore identificazione dei modelli memset.
- Sicurezza del codice migliorata: emissione migliorata della diagnostica del compilatore con sovraccarico del buffer e ora controlla le [`/guard:cf`](../build/reference/guard-enable-control-flow-guard.md) istruzioni switch che generano tabelle di salto.
- Controllo delle versioni: il valore della macro del preprocessore incorporata **\_ MSC \_ ver** viene ora aggiornato in forma monotona a ogni aggiornamento del set di strumenti Visual C++. Per altre informazioni, vedere il post relativo alla [versione del compilatore Visual C++](https://devblogs.microsoft.com/cppblog/visual-c-compiler-version/).
- Nuovo layout del set di strumenti: il compilatore e gli strumenti di compilazione correlati hanno un nuovo percorso e una nuova struttura di directory nel computer di sviluppo. Il nuovo layout consente installazioni side-by-side di più versioni del compilatore. Per altre informazioni, vedere il post [Compiler Tools Layout in Visual Studio 2017](https://devblogs.microsoft.com/cppblog/compiler-tools-layout-in-visual-studio-15/) (Layout degli strumenti del compilatore in Visual Studio 2017).
- Miglioramenti alla diagnostica: nella finestra di output ora appare la colonna in cui si verifica un errore. Per altre informazioni, vedere [miglioramenti della diagnostica del compilatore C++ in vs "15" Preview 5](https://devblogs.microsoft.com/cppblog/c-compiler-diagnostics-improvements-in-vs-15-rc/).
- Quando si usano le coroutine, la parola chiave sperimentale **yield** (disponibile con l' **`/await`** opzione) è stata rimossa. È necessario aggiornare il codice per l'uso di `co_yield`. Per altre informazioni, vedere [ `yield` parola chiave da diventare `co_yield` in vs 2017](https://devblogs.microsoft.com/cppblog/yield-keyword-to-become-co_yield-in-vs-2017/).

##### <a name="visual-studio-2017-version-153"></a>Visual Studio 2017 versione 15.3

Altri miglioramenti alla diagnostica nel compilatore. Per altre informazioni, vedere [Diagnostic Improvements in Visual Studio 2017 15.3.0](https://devblogs.microsoft.com/cppblog/diagnostic-improvements-in-vs2017-15-3-0/) (Miglioramenti della diagnostica in Visual Studio 2017 15.3.0).

##### <a name="visual-studio-2017-version-155"></a>Visual Studio 2017 versione 15.5

Visual C++ prestazioni di runtime continuano a migliorare grazie a una migliore qualità del codice generato. Ora è sufficiente ricompilare il codice e l'app viene eseguita più velocemente. Alcune ottimizzazioni del compilatore sono totalmente nuove, come la vettorizzazione di archivi scalari condizionali, la combinazione di chiamate `sin(x)` e `cos(x)` in una nuova funzione `sincos(x)` e l'eliminazione di istruzioni ridondanti dall'ottimizzatore SSA. Altre ottimizzazioni del compilatore sono miglioramenti apportati alle funzionalità esistenti, ad esempio: euristica Vectorizer per le espressioni condizionali, ottimizzazioni del ciclo migliori e codegen min/max float. Il linker ha un'implementazione nuova e più rapida **`/OPT:ICF`** , che può comportare fino al 9% di aumenti del tempo di collegamento e altre correzioni di prestazioni nel collegamento incrementale. Per altre informazioni, vedere [/OPT (Ottimizzazioni)](../build/reference/opt-optimizations.md) e [/INCREMENTAL (collegamento incrementale)](../build/reference/incremental-link-incrementally.md).

Il compilatore Microsoft C++ supporta Intel AVX-512. Include istruzioni per la lunghezza del vettore che riportano nuove funzioni in AVX-512 a registri estesi a 128 bit e 256 bit.

L'opzione [/Zc: noexceptTypes-](../build/reference/zc-noexcepttypes.md) può essere usata per ripristinare la versione c++ 14 di **`noexcept`** durante l'uso della modalità c++ 17 in generale. Questa opzione consente di aggiornare il codice sorgente per garantire la conformità a C++17 senza dover riscrivere contemporaneamente tutto il codice `throw()`. Per altre informazioni, vedere [Dynamic exception specification removal and noexcept](cpp-conformance-improvements.md#noexcept_removal) (Rimozione della specifica di eccezione dinamica e noexcept).

##### <a name="visual-studio-2017-version-157"></a>Visual Studio 2017 versione 15.7

- Nuovo switch del compilatore [/Qspectre](../build/reference/qspectre.md) per mitigare gli attacchi di esecuzione speculativa del canale laterale. Per altre informazioni, vedere [mitigazioni Spectre in MSVC](https://devblogs.microsoft.com/cppblog/spectre-mitigations-in-msvc/).
- Nuovo avviso di diagnostica per la mitigazione Spectre. Per altre informazioni, vedere [Spectre diagnostic in Visual Studio 2017 Version 15.7 Preview 4](https://devblogs.microsoft.com/cppblog/spectre-diagnostic-in-visual-studio-2017-version-15-7-preview-4/) (Diagnostica Spectre in Visual Studio 2017 versione 15.7 Preview 4).
- Un nuovo valore per/ZC, **`/Zc:__cplusplus`** , Abilita la creazione di report corretti del supporto standard C++. Ad esempio, quando l'opzione è impostata e il compilatore è in **`/std:c++17`** modalità, il valore si espande a **`201703L`** . Per altre informazioni, vedere [MSVC now correctly reports __cplusplus](https://devblogs.microsoft.com/cppblog/msvc-now-correctly-reports-__cplusplus/) (MSVC ora segnala correttamente __cplusplus).

## <a name="c-standard-library"></a>Libreria standard C++

### <a name="correctness-improvements"></a>Miglioramenti della correttezza

##### <a name="visual-studio-2017-rtm-version-150"></a>Visual Studio 2017 RTM (versione 15.0)

- `basic_string` `_ITERATOR_DEBUG_LEVEL != 0` Miglioramenti di diagnostica secondari. Quando un controllo IDL viene attivato nei macchinari di stringa, ora segnala il comportamento specifico che ha causato il viaggio. Ad esempio, anziché un messaggio del tipo "iteratore stringa non dereferenziabile" se ne otterrà uno del tipo "impossibile dereferenziare l'iteratore stringa perché non compreso nell'intervallo (potrebbe trattarsi ad esempio di un iteratore di fine)".
- È stato corretto l'operatore di assegnazione di spostamento di `std::promise`, che in precedenza causava il blocco irreversibile del codice.
- Sono stati corretti gli errori del compilatore relativi alla conversione implicita di `atomic<T*>` in `T*`.
- `pointer_traits<Ptr>` ora rileva correttamente `Ptr::rebind<U>`.
- Correzione di un **`const`** qualificatore mancante nell' `move_iterator` operatore di sottrazione.
- È stato corretto codegen non interattivo errato per gli allocatori definiti dall'utente con stato che richiedono `propagate_on_container_copy_assignment` e `propagate_on_container_move_assignment`.
- `atomic<T>` ora tollera `operator&()` con overload.
- La diagnostica del compilatore è stata leggermente migliorata per le chiamate a `bind()` non corrette.

In Visual Studio 2017 RTM sono disponibili ulteriori miglioramenti alla libreria standard. Per un elenco completo, vedere il post del Blog del team C++ [correzioni standard della libreria in VS 2017 RTM](https://devblogs.microsoft.com/cppblog/stl-fixes-in-vs-2017-rtm/).

##### <a name="visual-studio-2017-version-153"></a>Visual Studio 2017 versione 15.3

- I contenitori della libreria standard fissano ora `max_size()` a `numeric_limits<difference_type>::max()` anziché a `max()` di `size_type`. Questa modifica garantisce che il risultato di `distance()` per gli iteratori di tale contenitore sia rappresentabile nel tipo restituito di `distance()`.
- Correzione della specializzazione mancante `auto_ptr<void>`.
- Gli `for_each_n()` `generate_n()` algoritmi, e `search_n()` in precedenza non erano in grado di compilare se l'argomento length non era un tipo integrale. Ora tentano di convertire le lunghezze non integrali negli iteratori `difference_type` .
- `normal_distribution<float>` non genera più avvisi nella libreria standard in merito alla conversione da double a float.
- Sono state corrette alcune operazioni `basic_string` che usavano `npos` invece di `max_size()` durante il controllo dell'overflow delle dimensioni massime.
- `condition_variable::wait_for(lock, relative_time, predicate)` attenderebbe l'intero tempo relativo se era presente una riattivazione non falsa. Ora attende solo un singolo intervallo del tempo relativo.
- `future::get()` ora invalida `future`, come richiesto dallo standard.
- `iterator_traits<void *>` era un errore complesso perché indicava un tentativo di formare `void&`. Ora diventa semplicemente uno struct vuoto, consentendo l'uso di `iterator_traits` nelle condizioni SFINAE "is iterator".
- Sono stati corretti alcuni avvisi segnalati da Clang **-wsystem-Headers** .
- È stato corretto anche il problema "la specifica di eccezione nella dichiarazione non corrisponde alla dichiarazione precedente" segnalata da Clang **-Wmicrosoft-Exception-spec**.
- Sono stati corretti anche gli avvisi relativi all'ordinamento dell'elenco degli inizializzatori dei membri segnalati da Clang e C1XX.
- I contenitori non ordinati non scambiavano le funzioni hash o i predicati corrispondenti quando venivano scambiati i contenitori stessi. Ora lo fanno.
- Molte operazioni di scambio di contenitori sono ora contrassegnate **`noexcept`** (poiché la libreria standard non prevede mai di generare un'eccezione durante il rilevamento della `propagate_on_container_swap` condizione di comportamento non definito dell'allocatore non uguale a).
- Molte `vector<bool>` operazioni sono ora contrassegnate come **`noexcept`** .
- La libreria standard impone ora la corrispondenza di `value_type` dell'allocatore (in modalità C++17) con un'opzione di emergenza per il rifiuto esplicito.
- Sono state corrette alcune condizioni nelle quali un'operazione self-range-insert in `basic_string` compromette il contenuto delle stringhe. (Nota: lo standard proibisce ancora le operazioni self-range-insert in vettori.)
- `propagate_on_container_swap` dell'allocatore non influisce più su `basic_string::shrink_to_fit()`.
- `std::decay` gestisce ora i tipi di funzione abominevole, ovvero i tipi di funzione che sono qualificati CV, di riferimento o entrambi.
- Modifica delle direttive include per l'uso corretto della distinzione tra maiuscole e minuscole e delle barre, con miglioramento della portabilità.
- È stato corretto l'avviso C4061, relativo all'enumeratore '*enumerator*' nell'opzione dell'enum *enumeration*' non gestito da un'etichetta case in modo esplicito. Questo avviso è disattivato per impostazione predefinita ed è stato risolto come eccezione alle norme generali della libreria standard per gli avvisi. La libreria standard è **`/W4`** pulita, ma non tenta di essere **`/Wall`** pulita. Molti avvisi disattivati per impostazione predefinita sono insolitamente rumorosi e non sono destinati a essere usati a intervalli regolari.
- Sono stati migliorati i controlli di debug per `std::list`. Gli iteratori di elenco controllano ora `operator->()` e `list::unique()` contrassegna ora gli iteratori come invalidati.
- È stata corretta la metaprogrammazione uses-allocator in `tuple`.

##### <a name="visual-studio-2017-version-155"></a>Visual Studio 2017 versione 15.5

- `std::partition` chiama ora i tempi predicati `N` anziché `N + 1` le ore, come richiesto dallo standard.
- I tentativi di evitare asserzioni statiche magic nella versione 15.3 sono stati corretti nella versione 15.5.
- `std::atomic<T>` non richiede più che `T` sia costruibile per impostazione predefinita.
- Gli algoritmi di heap che accettano tempo logaritmico si comportano in modo diverso quando è abilitato il debug iteratore. Non eseguono più un'asserzione temporale lineare che l'input è effettivamente un heap.
- `__declspec(allocator)` viene mantenuta solo per C1XX, per evitare avvisi da Clang, che non la comprende.
- `basic_string::npos` è ora disponibile come costante della fase di compilazione.
- `std::allocator` in modalità C++ 17 ora gestisce correttamente l'allocazione dei tipi eccessivamente allineati, ovvero i tipi il cui allineamento è maggiore di `max_align_t` , a meno che non sia disabilitato da **`/Zc:alignedNew-`** .  Ad esempio, i vettori di oggetti con allineamento a 16 o 32 byte vengono ora correttamente allineati per le istruzioni SSE e AVX.

### <a name="conformance-improvements"></a>Miglioramenti della conformità

- Abbiamo aggiunto \<any\> , \<string_view\> , `apply()` , `make_from_tuple()` .
- Aggiunta di \<optional\> ,, \<variant\> `shared_ptr::weak_type` e \<cstdalign\> .
- Enabled C++ 14 **`constexpr`** in `min(initializer_list)` , `max(initializer_list)` , e `minmax(initializer_list)` , e `min_element()` , e `max_element()` `minmax_element()` .

Per ulteriori informazioni, vedere [tabella di conformità del linguaggio Microsoft C++](./visual-cpp-language-conformance.md).

##### <a name="visual-studio-2017-version-153"></a>Visual Studio 2017 versione 15.3

- Sono state implementate varie funzionalità aggiuntive C++17. Per ulteriori informazioni, vedere [tabella di conformità del linguaggio Microsoft C++](cpp-conformance-improvements.md#improvements_153).
- Implementazione di P0602R0 "variant e optional devono propagare trivially_move e trivially_copy".
- La libreria standard ora tollera ufficialmente la disabilitazione di RTTI dinamici tramite l'opzione [/gr-](../build/reference/gr-enable-run-time-type-information.md) . Sia `dynamic_pointer_cast()` che `rethrow_if_nested()` richiedono intrinsecamente **`dynamic_cast`** , quindi la libreria standard ora le contrassegna come `=delete` sotto **`/GR-`** .
- Anche quando la RTTI dinamica è stata disabilitata tramite **`/GR-`** , "static RTTI" nel formato `typeid(SomeType)` è ancora disponibile e alimenta diversi componenti della libreria standard. La libreria standard ora supporta anche la disabilitazione di questa funzionalità tramite **`/D_HAS_STATIC_RTTI=0`** . Questo flag disabilita anche le funzioni membro `std::any`, `target()` e `target_type()` di `std::function` e la funzione membro Friend `get_deleter()` di `std::shared_ptr` e `std::weak_ptr`.
- La libreria standard ora usa C++ 14 in modo non **`constexpr`** condizionale, anziché le macro definite in modo condizionale.
- La libreria standard ora usa modelli di alias internamente.
- La libreria standard ora usa **`nullptr`** internamente, anziché `nullptr_t{}` . (L'utilizzo interno di NULL è stato eliminato. L'utilizzo interno di 0 come null verrà rimosso gradualmente.)
- La libreria standard ora usa `std::move()` internamente, anziché usare `std::forward()` in modo stilisticamente non corretto.
- È stata effettuata la modifica di `static_assert(false, "message")` in `#error message`. Questa modifica migliora la diagnostica del compilatore, perché `#error` interrompe immediatamente la compilazione.
- La libreria standard non contrassegna più le funzioni con `__declspec(dllimport)`. Ciò non è più richiesto dalla tecnologia dei linker moderni.
- Estrazione di SFINAE negli argomenti del modello predefiniti, con conseguente riduzione della confusione rispetto ai tipi restituiti e ai tipi di argomenti delle funzioni.
- I controlli di debug in \<random\> ora usano il normale sistema della libreria standard, invece della funzione interna `_Rng_abort()` , chiamata `fputs()` a **stderr**. L'implementazione di questa funzione è stata mantenuta per la compatibilità binaria. Verrà rimosso nella successiva versione non compatibile binaria della libreria standard.

##### <a name="visual-studio-2017-version-155"></a>Visual Studio 2017 versione 15.5

- Diverse funzionalità della libreria standard sono state aggiunte, deprecate o rimosse in base allo standard C++ 17. Per altre informazioni, vedere [miglioramenti della conformità di C++ in Visual Studio](cpp-conformance-improvements.md#improvements_155).
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
- Le firme per gli algoritmi paralleli seguenti vengono aggiunte, ma non sono in fase di parallelismo. La profilatura non ha dimostrato alcun vantaggio negli algoritmi parallelizzazione che spostano solo gli elementi permute:
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

##### <a name="visual-studio-2017-version-156"></a>Visual Studio 2017 versione 15.6

- \<memory_resource>
- Library Fundamentals V1
- Eliminazione dell'assegnazione `polymorphic_allocator`
- Miglioramento della deduzione dell'argomento del modello della classe

##### <a name="visual-studio-2017-version-157"></a>Visual Studio 2017 versione 15.7

- il supporto per gli algoritmi paralleli non è più sperimentale
- Una nuova implementazione di \<filesystem>
- Conversioni di stringhe elementari (parziale)
- `std::launder()`
- `std::byte`
- `hypot(x,y,z)`
- Evitare il decadimento non necessario
- Funzioni matematiche speciali
- `constexpr char_traits`
- Guide alla deduzione per la libreria standard

Per ulteriori informazioni, vedere [tabella di conformità del linguaggio Microsoft C++](./visual-cpp-language-conformance.md).

### <a name="performance-and-throughput-fixes"></a>Correzioni per prestazioni e velocità effettiva

- Gli overload di `basic_string::find(char)` chiamano `traits::find` solo una volta. In precedenza questa funzione era implementata come una ricerca di stringa generale avente come obiettivo una stringa di lunghezza 1.
- `basic_string::operator==` ora controlla le dimensioni delle stringhe prima di confrontarne il contenuto.
- È stato rimosso l'accoppiamento dei controlli in `basic_string`, di difficile analisi per l'ottimizzatore del compilatore. Per tutte le stringhe brevi, una chiamata a `reserve` ha comunque un costo, anche se non viene eseguita alcuna operazione.
- `std::vector` è stata migliorata per correttezza e prestazioni: l'aliasing durante le operazioni INSERT e emplace è ora gestito correttamente come richiesto dallo standard, la garanzia di eccezione forte viene ora fornita quando richiesto dallo standard tramite `move_if_noexcept()` e da altre logiche e INSERT e emplace eseguono un minor numero di operazioni sugli elementi.
- La libreria standard C++ ora evita la dereferenziazione dei puntatori null ricercati.
- Sono state migliorate le prestazioni di `weak_ptr::lock()`.
- Per aumentare la velocità effettiva del compilatore, le intestazioni della libreria standard C++ evitano ora di includere dichiarazioni per le funzioni intrinseche del compilatore non indispensabili.
- Sono state migliorate più del triplo le prestazioni dei costruttori di spostamento di `std::string` e `std::wstring`.

##### <a name="visual-studio-2017-version-153"></a>Visual Studio 2017 versione 15.3

- Sono state aggirate **`noexcept`** le interazioni con, che hanno impedito l'incorporamento dell' `std::atomic` implementazione in funzioni che usano la gestione delle eccezioni strutturata (SEH).
- È stata modificata la funzione `_Deallocate()` interna della libreria standard per ottimizzare le dimensioni del codice, consentendone l'implementazione inline in più posizioni.
- Sono state apportate modifiche a `std::try_lock()` per consentire l'uso dell'espansione di pacchetto invece della ricorsione.
- È stato migliorato l'algoritmo per la prevenzione di deadlock di `std::lock()` con l'uso di operazioni `lock()` al posto della rotazione di `try_lock()` in tutti i blocchi.
- È stata abilitata l'ottimizzazione del valore restituito denominato in `system_category::message()`.
- `conjunction` e `disjunction` ora creano istanze `N + 1` di tipi, anziché di `2N + 2` tipi.
- `std::function` non crea più istanze del meccanismo di supporto degli allocatori per ogni chiamata di cancellazione dei tipi, con conseguente miglioramento della velocità e riduzione delle dimensioni dei file con estensione obj nei programmi che passano molte espressioni lambda distinte a `std::function`.
- `allocator_traits<std::allocator>`contiene operazioni `std::allocator` implementate inline manualmente, con conseguente riduzione delle dimensioni nel codice che interagisce con `std::allocator` solo tramite `allocator_traits` ovvero la maggior parte del codice.
- L'interfaccia minima dell'allocatore C++11 viene ora gestita dalla libreria standard che chiama direttamente `allocator_traits`, invece di eseguire il wrapping dell'allocatore in `_Wrap_alloc` di una classe interna. Questa modifica consente di ridurre le dimensioni del codice generato per il supporto dell'allocatore e di migliorare la capacità dell'ottimizzatore di interpretare i contenitori della libreria standard in alcuni casi. Consente anche una migliore esperienza di debug, perché è ora possibile vedere il tipo di allocatore anziché dover ricorrere a `_Wrap_alloc<your_allocator_type>` nel debugger.
- La metaprogrammazione è stata rimossa per personalizzato `allocator::reference` , che gli allocatori non sono autorizzati a personalizzare. (Gli allocatori possono fare in modo che i contenitori usino puntatori fantasiosi, ma non riferimenti fantasiosi.)
- Il front-end del compilatore è stato addestrato ad annullare il wrapping degli iteratori di debug nei cicli for basati su intervalli, con conseguente miglioramento delle prestazioni delle build di debug.
- Il percorso di riduzione interno di `basic_string` per `shrink_to_fit()` e `reserve()` non è più nel percorso delle operazioni di riallocazione, con conseguente riduzione delle dimensioni del codice per tutti i membri mutanti.
- Il percorso di crescita interno di `basic_string` non è più nel percorso di `shrink_to_fit()`.
- Le operazioni di mutazione di `basic_string` vengono ora sottoposte a factoring nelle funzioni del percorso veloce senza allocazione e del percorso lento con allocazione, quindi l'implementazione inline nei chiamanti del caso comune senza riallocazione diventa più probabile.
- Le `basic_string` operazioni di mutazione ora costruiscono buffer riallocati nello stato preferito anziché ridimensionare sul posto. Ad esempio, un inserimento all'inizio di una stringa ora sposta il contenuto dopo l'inserimento esattamente una volta. Viene spostato verso il basso o nel buffer appena allocato. Non viene più spostato due volte nel caso della riallocazione, prima nel buffer appena allocato e quindi in basso.
- Le operazioni che chiamano la libreria standard C in \<string\> ora memorizzano nella cache l' `errno` indirizzo per rimuovere l'interazione ripetuta con TLS.
- L'implementazione di `is_pointer` è stata semplificata.
- Fine della modifica dell'espressione basata su funzione SFINAE su **`struct`** e `void_t` su.
- Gli algoritmi della libreria standard ora evitano il post-incremento degli iteratori.
- Correzione degli avvisi di troncamento durante l'uso di allocatori a 32 bit in sistemi a 64 bit.
- L'assegnazione di spostamento di `std::vector` è ora più efficiente nel caso di allocatori non uguali e non POCMA, grazie al riutilizzo del buffer quando possibile.

##### <a name="visual-studio-2017-version-155"></a>Visual Studio 2017 versione 15.5

- `basic_string<char16_t>`a coinvolge ora le stesse ottimizzazioni `memcmp` e `memcpy`, nonché ottimizzazioni simili attivate da `basic_string<wchar_t>`.
- È stata corretta una limitazione dell'ottimizzatore che impediva ai puntatori a funzione di essere esposti inline tramite le "funzioni per evitare la copia" nell'aggiornamento 3 di Visual Studio 2015, ripristinando le prestazioni di `lower_bound(iter, iter, function pointer)`.
- È stato ridotto l'overhead della verifica degli ordini di input del debug dell'iteratore in `includes`, `set_difference`, `set_symmetric_difference` e `set_union`, tramite la rimozione del wrapping degli iteratori prima del controllo dell'ordine.
- `std::inplace_merge` ora ignora gli elementi che sono già in posizione.
- La costruzione di `std::random_device` non costruisce più e quindi distrugge `std::string`.
- `std::equal` e `std::partition` eseguivano un calcolo per l'ottimizzazione dei thread dei collegamenti che salvava un confronto di iteratori.
- Quando `std::reverse` riceve puntatori a `T` facilmente copiabili, ora li invia a un'implementazione vettorizzata scritta a mano.
- `std::fill`, `std::equal` e `std::lexicographical_compare` sono ora in grado di inviare `memset` e `memcmp` per `std::byte` e `gsl::byte` (e altre enumerazioni e classi di enumerazione di tipo char). Dato che `std::copy` esegue l'invio tramite `is_trivially_copyable` non ha richiesto alcuna modifica.
- La libreria standard non contiene più distruttori con parentesi graffe vuote il cui unico comportamento consisteva nel creare tipi non facilmente distruttibili.

## <a name="other-libraries"></a>Altre librerie

### <a name="open-source-library-support"></a>Supporto delle librerie open source

**Vcpkg** è un strumento open source da riga di comando che semplifica notevolmente il processo di acquisizione e di creazione di librerie statiche e DLL C++ open source in Visual Studio. Per altre informazioni, vedere [vcpkg: gestione pacchetti per C++](../build/vcpkg.md).

### <a name="cpprest-sdk-290"></a>CPPRestSDK 2.9.0

##### <a name="visual-studio-2017-version-155"></a>Visual Studio 2017 versione 15.5

CPPRestSDK, un'API Web multipiattaforma per C++, è stato aggiornato alla versione 2.9.0. Per altre informazioni, vedere il post sulla [disponibilità di CppRestSDK 2.9.0 su GitHub](https://devblogs.microsoft.com/cppblog/cpprestsdk-2-9-0-is-available-on-github/).

### <a name="atl"></a>ATL

##### <a name="visual-studio-2017-version-155"></a>Visual Studio 2017 versione 15.5

- Un altro set di correzioni per la conformità della ricerca dei nomi
- I costruttori di spostamento e gli operatori di assegnazione dello spostamento esistenti sono ora contrassegnati correttamente per non generare eccezioni
- Annullamento dell'eliminazione dell'avviso valido C4640 relativo all'inizializzazione thread-safe di elementi statici locali in atlstr.h
- L'inizializzazione thread-safe di elementi statici locali è stata disattivata automaticamente nel set di strumenti XP quando si usa ATL per compilare una DLL. A questo punto non lo è. È possibile aggiungere **`/Zc:threadSafeInit-`** le impostazioni del progetto se non si vuole l'inizializzazione thread-safe.

### <a name="visual-c-runtime"></a>Runtime di Visual C++

- Nuova intestazione "cfguard.h" per i simboli di protezione del flusso di controllo.

## <a name="visual-studio-2017-c-ide"></a>IDE di Visual Studio 2017 C++

- Le prestazioni di modifica della configurazione sono ora migliori per i progetti nativi C++ e molto migliori per i progetti C++/CLI. La prima attivazione di una configurazione della soluzione è ora più veloce e tutte le attivazioni successive saranno quasi immediate.

##### <a name="visual-studio-2017-version-153"></a>Visual Studio 2017 versione 15.3

- Sono state riscritte diverse procedure guidate per il progetto e il codice nello stile basato su finestre di dialogo.
- **Aggiungi classe** ora avvia direttamente la procedura guidata Aggiungi classe. Tutti gli altri elementi che in precedenza erano disponibili in questa posizione ora sono disponibili in **Aggiungi > Nuovo elemento**.
- I progetti Win32 sono ora sotto la categoria **desktop di Windows** nella finestra di dialogo **nuovo progetto** .
- I modelli di applicazione console e **Desktop** di **Windows** ora creano i progetti senza visualizzare una procedura guidata. Nella stessa categoria è presente una nuova **Creazione guidata applicazione desktop di Windows**, che visualizza le stesse opzioni della procedura guidata **Applicazione console Win32**.

##### <a name="visual-studio-2017-version-155"></a>Visual Studio 2017 versione 15.5

Diverse operazioni C++ che usano il motore IntelliSense per il refactoring e lo spostamento di codice vengono eseguite molto più velocemente. I numeri seguenti sono basati sulla soluzione di Visual Studio Chromium con i progetti 3500:

| Funzionalità | Miglioramento delle prestazioni |
|--|--|
| Rinominare | 5.3x |
| Modifica firma | 4.5x |
| Trova tutti i riferimenti | 4.7x |

C++ supporta ora Ctrl+ clic **Vai a definizione**, semplificando lo spostamento del mouse sulle definizioni. Anche il visualizzatore della struttura appartenente al pacchetto di strumenti di potenziamento della produttività è ora incluso nel prodotto per impostazione predefinita.

## <a name="intellisense"></a>IntelliSense

- Il nuovo motore di database basato su SQLite viene ora usato per impostazione predefinita. Il nuovo motore accelera le operazioni di database come **Vai a definizione** e **Trova tutti i riferimenti**. Migliora significativamente il tempo di analisi iniziale della soluzione. L'impostazione è stata spostata in **strumenti > opzioni > editor di testo > C/C++ > avanzate**. (In precedenza si trovava in... C/C++ > sperimentale).

- Le prestazioni di IntelliSense sono state migliorate su progetti e file senza intestazioni precompilate. Per le intestazioni nel file corrente verrà creata un'intestazione automatica precompilata.

- Sono state aggiunte funzioni di filtro e guida per gli errori di IntelliSense presenti nell'elenco errori. È ora possibile fare clic sulla colonna degli errori per applicare un filtro. È inoltre possibile fare clic su errori specifici o premere F1 per avviare la ricerca online del messaggio di errore.

  ![Elenco errori](media/ErrorList1.png "Elenco errori")

  ![Elenco errori filtrato](media/ErrorList2.png "Elenco errori filtrato")

- È stata aggiunta la possibilità di filtrare per tipo gli elementi dell'elenco dei membri.

  ![Filtro dell'elenco dei membri](media/mlfiltering.png "Filtro dell'elenco dei membri")

- È stata aggiunta una nuova funzionalità sperimentale IntelliSense predittiva che fornisce un elenco di risultati filtrato e compatibile con il contesto per l'elenco dei membri. Per altre informazioni, vedere [C++ IntelliSense Improvements - Predictive IntelliSense & Filtering](https://devblogs.microsoft.com/cppblog/c-intellisense-improvements-predictive-intellisense-filtering/) (Miglioramenti di IntelliSense per C++ - IntelliSense predittiva e filtri).
- **Trova tutti i riferimenti** (MAIUSC + F12) ora consente di spostarsi in modo semplice, anche nelle codebase complesse. Offre funzioni avanzate di raggruppamento, filtro, ordinamento, ricerca all'interno dei risultati e, per alcuni linguaggi, colorazione, che agevolano notevolmente la comprensione dei riferimenti. Per C++ la nuova interfaccia utente include informazioni che indicano se è in corso la lettura o la scrittura in una variabile.
- La funzionalità IntelliSense "da punto a freccia" è passata dalla fase sperimentale alla fase avanzata ed è ora abilitata per impostazione predefinita. Le funzionalità dell'editor **Espandi ambito** ed **Espandi precedenza** sono state spostate anche da sperimentale ad avanzata.
- Le funzionalità di refactoring sperimentale **Modifica firma** ed **Estrai funzione** sono ora disponibili per impostazione predefinita.
- È stata aggiunta una funzionalità sperimentale per il caricamento più rapido dei progetti C++. Alla prossima apertura, un progetto C++ verrà caricato *molto* più velocemente e la volta successiva ancora più velocemente.
- Alcune di queste funzionalità sono usate anche in altri linguaggi e alcune sono specifiche di C++. Per altre informazioni su queste nuove funzionalità, vedere [Announcing Visual Studio "15" Preview 5](https://devblogs.microsoft.com/visualstudio/announcing-visual-studio-15-preview-5/) (Annuncio di Visual Studio 15 Preview 5).

##### <a name="visual-studio-2017-version-157"></a>Visual Studio 2017 versione 15.7

- è stato aggiunto il supporto per ClangFormat. Per altre informazioni, vedere il post sul [supporto per ClangFormat in Visual Studio 2017](https://devblogs.microsoft.com/cppblog/clangformat-support-in-visual-studio-2017-15-7-preview-1/).

## <a name="non-msbuild-projects-with-open-folder"></a>Progetti non MSBuild con Apri cartella

Visual Studio 2017 introduce la funzionalità **Apri cartella** . Consente di scrivere codice, compilare ed eseguire il debug in una cartella contenente il codice sorgente senza dover creare soluzioni o progetti. È ora molto più semplice iniziare a usare Visual Studio anche se il progetto non è un progetto basato su MSBuild. **Apri cartella** ti permette di accedere a potenti funzionalità per la comprensione, la modifica, la compilazione e il debug di codice. Sono le stesse che Visual Studio fornisce già per i progetti MSBuild. Per altre informazioni, vedere [Progetti Apri cartella per C++](../build/open-folder-projects-cpp.md).

- Sono stati apportati miglioramenti all'esperienza Apri cartella. È possibile personalizzare l'esperienza usando i file con estensione json seguenti:
  - CppProperties.json per personalizzare l'esperienza IntelliSense e di esplorazione.
  - Tasks.json per personalizzare le procedure di compilazione.
  - Launch.json per personalizzare l'esperienza di debug.

##### <a name="visual-studio-2017-version-153"></a>Visual Studio 2017 versione 15.3

- Supporto migliorato per i compilatori alternativi e gli ambienti di compilazione, come MinGW e Cygwin. Per altre informazioni, vedere [Using MinGW and Cygwin with Visual C++ and Open Folder](https://devblogs.microsoft.com/cppblog/using-mingw-and-cygwin-with-visual-cpp-and-open-folder/) (Uso di MinGW e Cygwin con Visual C++ e Apri cartella).
- È stato aggiunto il supporto per la definizione di variabili di ambiente globali e specifiche della configurazione in CppProperties.json e CMakeSettings.json. Queste variabili di ambiente possono essere usate dalle configurazioni di debug definite in launch.vs.json e dalle attività in tasks.vs.json. Per altre informazioni, vedere [Customizing your Environment with Visual C++ and Open Folder](https://devblogs.microsoft.com/cppblog/customizing-your-environment-with-visual-c-and-open-folder/) (Personalizzazione dell'ambiente in uso con Visual C++ e Apri cartella).
- È stato migliorato il supporto del generatore Ninja di CMake, inclusa la possibilità di creare facilmente codice destinato alle piattaforme a 64 bit.

## <a name="cmake-support-via-open-folder"></a>Supporto CMake con Apri cartella

Visual Studio 2017 introduce il supporto per l'uso dei progetti CMake senza la conversione in file di progetto di MSBuild (con estensione vcxproj). Per altre informazioni, vedere [Progetti CMake in Visual Studio](../build/cmake-projects-in-visual-studio.md). L'apertura di progetti CMake con **Apri cartella** configura automaticamente l'ambiente per la modifica, la compilazione e il debug di C++.

- IntelliSense C++ funziona senza alcuna necessità di creare un file CppProperties.json nella cartella radice. È stato anche aggiunto un nuovo elenco a discesa per consentire agli utenti di passare facilmente tra le configurazioni fornite dai file CMake e CppProperties.json.

- Supporto per configurazione aggiuntiva tramite un file CMakeSettings.json che si trova nella stessa cartella del file CMakeLists.txt.

  ![Apri cartella di CMake](media/cmake-cpp.png "Apri cartella di CMake")

##### <a name="visual-studio-2017-version-153"></a>Visual Studio 2017 versione 15.3

- è stato aggiunto il supporto per il generatore Ninja CMake.

##### <a name="visual-studio-2017-version-154"></a>Visual Studio 2017 versione 15.4

- è stato aggiunto il supporto per l'importazione di cache CMake esistenti.

##### <a name="visual-studio-2017-version-155"></a>Visual Studio 2017 versione 15.5

- è stato aggiunto il supporto per CMake 3.11, analisi del codice nei progetti CMake, visualizzazione Destinazioni in Esplora soluzioni, opzioni per la generazione della cache e la compilazione di singoli file. Per altre informazioni, vedere [CMake Support in Visual Studio](https://devblogs.microsoft.com/cppblog/cmake-support-in-visual-studio-targets-view-single-file-compilation-and-cache-generation-settings/) (Supporto di CMake in Visual Studio) e [Progetti CMake in Visual Studio](../build/cmake-projects-in-visual-studio.md).

## <a name="windows-desktop-development"></a>Sviluppo per il desktop di Windows

È ora disponibile un'esperienza più granulare per l'installazione del carico di lavoro per C++ originario. Sono stati aggiunti componenti selezionabili che consentono di installare solo gli strumenti necessari. Le dimensioni di installazione indicate per i componenti elencati nell'interfaccia utente del programma di installazione non sono corrette e sottovalutano la dimensione totale.

Per creare progetti Win32 nel carico di lavoro per desktop C++, è necessario installare un set di strumenti e un SDK Windows. Installare i componenti consigliati (selezionati) **Set di strumenti VC++ 2017 versione 141 (x86, x64)** e **Windows 10 SDK (10.0.nnnnn)** per garantire il funzionamento. Se non sono installati gli strumenti necessari, i progetti non verranno creati correttamente e la procedura guidata smetterà di rispondere.

##### <a name="visual-studio-2017-version-155"></a>Visual Studio 2017 versione 15.5

Gli strumenti di compilazione di Visual C++ (in precedenza disponibili come prodotto autonomo) sono ora inclusi come carico di lavoro nel programma di installazione di Visual Studio. Questo carico di lavoro installa solo gli strumenti necessari per compilare progetti C++ senza installare l'IDE di Visual Studio. Sono inclusi entrambi i set di strumenti v140 e v141. Il set di strumenti versione 141 contiene i miglioramenti più recenti di Visual Studio 2017 versione 15.5. Per altre informazioni, vedere [Visual Studio Build Tools now include the VS2017 and VS2015 MSVC Toolset](https://devblogs.microsoft.com/cppblog/visual-studio-build-tools-now-include-the-vs2017-and-vs2015-msvc-toolsets/) (Gli strumenti di compilazione di Visual Studio ora includono i set di strumenti MSVC di VS2017 e VS2015).

## <a name="linux-development-with-c"></a>Sviluppo di applicazioni Linux con C++

L'estensione comune [Visual C++ for Linux Development](https://marketplace.visualstudio.com/items?itemName=VisualCppDevLabs.VisualCforLinuxDevelopment) ora fa parte di Visual Studio. Questa installazione include tutto il necessario per lo sviluppo e il debug di applicazioni C++ in esecuzione in un ambiente Linux.

##### <a name="visual-studio-2017-version-152"></a>Visual Studio 2017 versione 15.2

Sono stati apportati miglioramenti alla condivisione del codice e alla visualizzazione dei tipi tra piattaforme. Per altre informazioni vedere, [Linux C++ improvements for cross-platform code sharing and type visualization](https://devblogs.microsoft.com/cppblog/linux-cross-platform-and-type-visualization/) (Miglioramenti di Linux C++ per la condivisione del codice tra piattaforme e per la visualizzazione dei tipi).

##### <a name="visual-studio-2017-version-155"></a>Visual Studio 2017 versione 15.5

- Il carico di lavoro Linux ha aggiunto il supporto per **rsync** come alternativa a **SFTP** per la sincronizzazione dei file in computer Linux remoti.
- È stato aggiunto il supporto per la compilazione trasversale mirata ai microcontroller ARM. Per abilitarlo durante l'installazione, scegliere il carico di lavoro **Sviluppo di applicazioni Linux con C++** e selezionare l'opzione **Sviluppo incorporato e IoT**. Questa opzione aggiunge gli strumenti di compilazione incrociata ARM GCC e Make all'installazione. Per altre informazioni, vedere [ARM GCC Cross Compilation in Visual Studio](https://devblogs.microsoft.com/cppblog/arm-gcc-cross-compilation-in-visual-studio/) (Compilazione incrociata GCC ARM in Visual Studio).
- Supporto aggiunto per CMake. È ora possibile lavorare sulla base di codice CMake esistente senza la necessità di convertirlo in un progetto di Visual Studio. Per altre informazioni, vedere[Configurare un progetto CMake Linux](../linux/cmake-linux-project.md).
- Supporto aggiunto per l'esecuzione di attività remote. Questa funzionalità consente di eseguire qualsiasi comando in un sistema remoto definito nella gestione connessione di Visual Studio. Le attività remote consentono anche di copiare i file nel sistema remoto.
Per altre informazioni, vedere[Configurare un progetto CMake Linux](../linux/cmake-linux-project.md).

##### <a name="visual-studio-2017-version-157"></a>Visual Studio 2017 versione 15.7

- Vari miglioramenti apportati agli scenari di carico di lavoro Linux. Per altre informazioni, vedere il blog sui [miglioramenti del carico di lavoro di Linux C++ per sistema del progetto, finestra della console di Linux, rsync e Connetti a processo](https://devblogs.microsoft.com/cppblog/linux-c-workload-improvements-to-the-project-system-linux-console-window-rsync-and-attach-to-process/).
- IntelliSense per le intestazioni nelle connessioni remote di Linux. Per altre informazioni, vedere il blog [IntelliSense for Remote Linux Headers](https://devblogs.microsoft.com/cppblog/intellisense-for-remote-linux-headers/) (IntelliSense per intestazioni remote in Linux) e l'articolo [Configurare un progetto CMake per Linux](../linux/cmake-linux-project.md).

## <a name="game-development-with-c"></a>Sviluppo di giochi con C++

Usare tutta la potenza di C++ per compilare giochi professionali con tecnologia DirectX o Cocos2d.

## <a name="mobile-development-with-c-for-android-and-ios"></a>Sviluppo di applicazioni per dispositivi mobili con C++ per Android e iOS

Usando Visual Studio è ora possibile creare app per dispositivi mobili destinate ad Android e iOS ed eseguirne il debug.

## <a name="universal-windows-apps"></a>App di Windows universale

C++ viene fornito come componente facoltativo del carico di lavoro per lo sviluppo di app di Windows universale. Attualmente, è necessario aggiornare manualmente i progetti C++. È possibile aprire un progetto di piattaforma UWP (Universal Windows Platform) mirato a V140 in Visual Studio 2017. Tuttavia, se Visual Studio 2015 non è installato, è necessario selezionare il set di strumenti della piattaforma V141 nelle pagine delle proprietà del progetto.

## <a name="new-options-for-c-on-universal-windows-platform-uwp"></a>Nuove opzioni per C++ nella piattaforma UWP (Universal Windows Platform)

Sono ora disponibili nuove opzioni per la scrittura e la creazione di pacchetti di applicazioni C++ per il piattaforma UWP (Universal Windows Platform) e Windows Store: l'infrastruttura di desktop Bridge consente di creare il pacchetto dell'applicazione desktop o dell'oggetto COM esistente per la distribuzione tramite Windows Store. Oppure, per la distribuzione tramite i canali esistenti tramite il caricamento laterale. Nuove funzionalità in Windows 10 consentono di aggiungere funzionalità della piattaforma UWP all'applicazione desktop in vari modi. Per altre informazioni, vedere [Desktop Bridge](/windows/uwp/porting/desktop-to-uwp-root).

##### <a name="visual-studio-2017-version-155"></a>Visual Studio 2017 versione 15.5

È stato aggiunto un modello di **Progetto di creazione di pacchetti di applicazioni Windows** che semplifica notevolmente la creazione di pacchetti di applicazioni desktop con Desktop Bridge. È disponibile in **File > Nuovo > Progetto > Installati > Visual C++ > Piattaforma UWP**. Per altre informazioni, vedere [Creare un pacchetto dell'app con Visual Studio (Desktop Bridge)](/windows/uwp/porting/desktop-to-uwp-packaging-dot-net).

Quando si scrive nuovo codice, ora è possibile usare C++/WinRT, una proiezione standard del linguaggio C++ per Windows Runtime implementata esclusivamente nei file di intestazione. Consente di utilizzare e creare API Windows Runtime utilizzando un compilatore C++ conforme agli standard. C++/WinRT è progettato per offrire agli sviluppatori C++ un accesso di prima classe all'API Windows moderna. Per ulteriori informazioni, vedere [C++/WinRT](/windows/uwp/cpp-and-winrt-apis/).

A partire dalla Build 17025 dell'anteprima di Windows SDK Insider, C++/WinRT è incluso nel Windows SDK. Per altre informazioni, vedere [C++/WinRT is now included the Windows SDK](https://devblogs.microsoft.com/cppblog/cppwinrt-is-now-included-the-windows-sdk/) (C++/WinRT ora incluso in Windows SDK).

## <a name="the-clangc2-platform-toolset"></a>Set di strumenti della piattaforma Clang/C2

Il set di strumenti Clang/C2 fornito con Visual Studio 2017 supporta ora l' **`/bigobj`** opzione, essenziale per la compilazione di progetti di grandi dimensioni. Include anche diverse correzioni di bug importanti, sia nel front-end del compilatore che nel back-end.

## <a name="c-code-analysis"></a>Analisi del codice C++

I controlli di base per C++ per l'applicazione delle [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines) (Linee guida di base per C++) ora sono distribuiti con Visual Studio. Abilitare i controlli nella pagina delle **estensioni di analisi del codice** nelle pagine delle proprietà del progetto. Le estensioni vengono quindi incluse quando si esegue l'analisi del codice. Per altre informazioni, vedere [Using the C++ Core Guidelines checkers](../code-quality/using-the-cpp-core-guidelines-checkers.md) (Uso dei controlli delle linee guida di base per C++).

![Screenshot della finestra di dialogo Pagine delle proprietà in cui sono visualizzate le proprietà di configurazione > analisi codice > generale selezionato e una serie di controlli principali elencati nella sezione eseguire questo set di regole.](media/CppCoreCheck.png "Pagina delle proprietà di CppCoreCheck")

##### <a name="visual-studio-2017-version-153"></a>Visual Studio 2017 versione 15.3

- È stato aggiunto il supporto delle regole correlate alla gestione delle risorse.

##### <a name="visual-studio-2017-version-155"></a>Visual Studio 2017 versione 15.5

- I nuovi controlli Linee guida di base di C++ verificano la correttezza del puntatore intelligente, l'uso corretto degli inizializzatori globali e l'utilizzo di flag per gli utilizzi di costrutti come **`goto`** e cast non validi.

- Alcuni numeri di avviso che potrebbero essere presenti in 15.3 non sono più disponibili in 15.5. Questi avvisi sono stati sostituiti con controlli più specifici.

##### <a name="visual-studio-2017-version-156"></a>Visual Studio 2017 versione 15.6

- Aggiunto il supporto per l'analisi di singoli file e miglioramenti delle prestazioni dell'analisi in fase di esecuzione. Per altre informazioni, vedere il blog sui [miglioramenti dell'analisi statica di C++ per Visual Studio 2017 15.6 Preview 2](https://devblogs.microsoft.com/cppblog/c-static-analysis-improvements-for-visual-studio-2017-15-6-preview-2/)

##### <a name="visual-studio-2017-version-157"></a>Visual Studio 2017 versione 15.7

- È stato aggiunto [`/analyze:ruleset`](../build/reference/analyze-code-analysis.md) il supporto per, che consente di specificare le regole di analisi del codice da eseguire.
- Aggiunto il supporto per le regole aggiuntive delle Linee guida di base di C++.  Per altre informazioni, vedere [Using the C++ Core Guidelines checkers](../code-quality/using-the-cpp-core-guidelines-checkers.md) (Uso dei controlli delle linee guida di base per C++).

## <a name="unit-testing-in-visual-studio-2017"></a>Testing unità in Visual Studio 2017

##### <a name="visual-studio-2017-version-155"></a>Visual Studio 2017 versione 15.5

Google Test Adapter e l'adattatore Boost. test sono ora disponibili come componenti del carico di lavoro sviluppo di applicazioni **desktop con C++** . Sono integrati con **Esplora test**. È stato aggiunto il supporto CTest per i progetti CMake (tramite Apri cartella), anche se l'integrazione completa con **Esplora test** non è ancora disponibile. Per ulteriori informazioni, vedere [scrittura di unit test per C/C++](/visualstudio/test/writing-unit-tests-for-c-cpp).

##### <a name="visual-studio-2017-version-156"></a>Visual Studio 2017 versione 15.6

- Aggiunto il supporto per il `Boost.Test` supporto della libreria dinamica.
- Un `Boost.Test` modello di elemento è ora disponibile nell'IDE.

Per altre informazioni, vedere [ `Boost.Test` unit test: supporto della libreria dinamica e nuovo modello di elemento](https://devblogs.microsoft.com/cppblog/boost-test-unit-testing-dynamic-library-support-and-new-item-template/).

##### <a name="visual-studio-2017-version-157"></a>Visual Studio 2017 versione 15.7

Aggiunto il supporto di [CodeLens](/visualstudio/ide/find-code-changes-and-other-history-with-codelens) per progetti di unit test C++. Per altre informazioni, vedere [Announcing CodeLens for C++ Unit Testing](https://devblogs.microsoft.com/cppblog/announcing-codelens-for-c-unit-testing/) (Annuncio di CodeLens per unit test C++).

## <a name="visual-studio-graphics-diagnostics"></a>Diagnostica della grafica di Visual Studio

Visual Studio Diagnostica della grafica Tools: è possibile usarli per registrare e analizzare i problemi di prestazioni e di rendering nelle app Direct3D. Usarli in app eseguite localmente nel PC Windows, in un emulatore di dispositivi Windows o in un computer o un dispositivo remoto.

- **Input & output per shader Vertex e Geometry:** La possibilità di visualizzare l'input e l'output di vertex shader e geometry shader è stata una delle funzionalità più richieste. È ora supportata negli strumenti. Selezionare la fase VS o GS nella visualizzazione fasi pipeline per iniziare a controllare l'input e l'output nella tabella seguente.

  ![Input/output per shader](media/io-shaders.png)

- **Ricerca e filtro nella tabella degli oggetti:** un modo rapido e semplice per individuare le risorse che si stanno cercando.

  ![Screenshot della sezione tabella oggetti con l'elenco a discesa tipo e la casella di testo di ricerca denominata.](media/search.png)

- **Cronologia risorse:** consente di visualizzare con facilità l'intera cronologia delle modifiche di una risorsa usata durante il rendering di un frame acquisito. Per richiamare la cronologia per qualsiasi risorsa, fare clic sull'icona di clock accanto a qualsiasi collegamento ipertestuale della risorsa.

  ![Cronologia risorse](media/resource-history.png)

  Viene visualizzata la nuova finestra dello strumento **Cronologia risorse** , popolata con la cronologia delle modifiche della risorsa.

  ![Modifica della cronologia delle risorse](media/resource-history-change.png)

  È possibile acquisire frame con l'acquisizione dello stack di chiamate completa abilitata. Questo consente di dedurre rapidamente il contesto di ogni evento di modifica ed esaminarlo all'interno del progetto di Visual Studio. Impostare l'opzione di acquisizione dello stack completo nella finestra di dialogo **opzioni > strumenti** di Visual Studio nella **diagnostica della grafica**.

- **Statistiche API:** consente di visualizzare un riepilogo dettagliato dell'utilizzo dell'API nel frame. È utile per individuare le chiamate che potrebbero non essere realizzate o chiamate che si stanno facendo troppo spesso. Questa finestra è disponibile tramite **View > API Statistics** in analizzatore grafica di Visual Studio.

  ![Statistiche API](media/api-stats.png)

- **Statistiche memoria:** Visualizzare la quantità di memoria allocata dal driver per le risorse create nel frame. Questa finestra è disponibile tramite **visualizza > statistiche memoria** in **analizzatore grafica di Visual Studio**. Per copiare i dati in un file CSV per la visualizzazione in un foglio di calcolo, fare clic con il pulsante destro del mouse e scegliere **copia tutto**.

  ![Statistiche memoria](media/memory-stats.png)

- **Convalida frame:** il nuovo elenco di errori e avvisi consente di spostarsi con facilità nell'elenco di eventi in base a potenziali problemi rilevati dal livello di debug Direct3D. Fare clic su **visualizza > convalida dei frame** in analizzatore grafica di Visual Studio per aprire la finestra. Quindi fare clic su **Esegui convalida** per avviare l'analisi. L'operazione può richiedere alcuni minuti, a seconda della complessità del frame.

  ![Convalida frame](media/frame-validation.png)

- **Analisi dei frame per D3D12:** Usare l'analisi dei frame per analizzare le prestazioni delle chiamate di progetto con esperimenti di simulazione diretti. Passare alla scheda Analisi dei frame ed eseguire l'analisi per visualizzare il report. Per informazioni dettagliate, guardare il video [GoingNative 25](https://channel9.msdn.com/Shows/C9-GoingNative/GoingNative-25-Offline-Analysis-Graphics-Tool) sull'analisi dei frame di grafica di Visual Studio.

  ![Analisi dei frame](media/frame-analysis.png)

- **Miglioramenti dell'utilizzo della GPU:** Le tracce aperte possono essere eseguite tramite il profiler utilizzo GPU di Visual Studio con la visualizzazione GPU o lo strumento Windows Performance Analyzer (WPA) per un'analisi più dettagliata. Se è installato Windows Performance Toolkit, sono disponibili due collegamenti ipertestuali: uno per WPA e un altro per la visualizzazione GPU, nella parte inferiore destra della panoramica della sessione.

  ![Utilizzo GPU](media/gpu-usage.png)

  Le tracce aperte nella visualizzazione GPU tramite questo collegamento supportano lo zoom e la panoramica della sequenza temporale delle visualizzazioni sincronizzate e della GPU. Una casella di controllo in Visual Studio controlla se la sincronizzazione è abilitata o meno.

  ![Visualizzazione GPU](media/gpu-view.png)

::: moniker-end

::: moniker range="=msvc-140"

Per l'elenco completo delle novità per Visual Studio 2015 Update 3, vedere [Visual C++: novità dalla versione 2003 alla 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md).

Per ulteriori informazioni sulle novità di Visual Studio 2015, vedere le note sulla versione. Sono collegati dalla [cronologia delle note sulla versione di Visual Studio 2015](/visualstudio/releasenotes/vs2015-version-history).

Per informazioni sulle novità di C++ in Visual Studio 2019, vedere Novità di [c++ in Visual studio 2019](?preserve-view=true&view=msvc-160).

Per informazioni sulle novità per C++ in Visual Studio 2017, vedere [Novità di C++ in Visual Studio 2017](?preserve-view=true&view=msvc-150).

::: moniker-end
