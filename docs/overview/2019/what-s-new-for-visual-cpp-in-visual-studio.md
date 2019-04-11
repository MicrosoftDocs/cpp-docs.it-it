---
title: Novità di C++ in Visual Studio 2019
ms.date: 04/02/2019
ms.technology: cpp-ide
ms.assetid: 8801dbdb-ca0b-491f-9e33-01618bff5ae9
author: mikeblome
ms.author: mblome
ms.openlocfilehash: 493b96a8ce3359cc18287adbae8cbd6c374671ec
ms.sourcegitcommit: b72a10a7b12e722fd91a17406b91b270026f763a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/03/2019
ms.locfileid: "58899407"
---
<!--NOTE all https:// links to docs.microsoft.com need to be converted to site-relative links prior to publishing-->

# <a name="whats-new-for-c-in-visual-studio-2019"></a>Novità di C++ in Visual Studio 2019

In Visual Studio 2019 sono stati inclusi numerosi aggiornamenti e correzioni per l'ambiente Microsoft C++. Sono stati corretti numerosi bug e problemi segnalati per il compilatore e gli strumenti, molti inviati dai clienti tramite le opzioni [Segnala un problema](/visualstudio/how-to-report-a-problem-with-visual-studio-2017) e [Invia un suggerimento](https://developercommunity.visualstudio.com/spaces/62/index.html) in **Commenti e suggerimenti**. Microsoft ringrazia i clienti per le segnalazioni inviate. Per altre informazioni sulle novità in tutto Visual Studio, visitare la pagina [Novità in Visual Studio](/visualstudio/ide/whats-new-visual-studio-2019).

## <a name="c-compiler"></a>compilatore C++

- L'opzione `/std:c++latest` include ora funzionalità di C++20 non necessariamente complete, incluso il supporto iniziale per l'operatore <=> ("Spaceship") di C++20 per il confronto a tre livelli.

- Il documento [P0941R2 sulle macro dei test delle funzionalità](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0941r2.html) è stato completato, con il supporto per `__has_cpp_attribute`. Le macro dei test delle funzionalità sono supportate in tutte le modalità standard.

- Il documento [C++20 P1008R1 su come vietare gli aggregati con i costruttori dichiarati dall'utente](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p1008r1.pdf) è stato completato.

- Supporto ottimizzato per le funzionalità di C++17 e supporto sperimentale per le funzionalità di C++20 come i moduli e le coroutine. Per informazioni dettagliate, vedere [Miglioramenti della conformità di C++ in Visual Studio 2019](../cpp-conformance-improvements.md).

- L'opzione `/Gm` del compilatore C++ è ora deprecata. Provare a disabilitare l'opzione `/Gm` negli script di compilazione se è definita in modo esplicito. Tuttavia è anche possibile ignorare l'avviso di funzionalità deprecata per `/Gm`, perché non viene considerato un errore quando si usa l'opzione "Considera gli avvisi come errori" (`/WX`).

- Non vengono più generate intestazioni precompilate per app desktop e console C++ per impostazione predefinita.

### <a name="codegen-security-diagnostics-and-versioning"></a>Codegen, sicurezza, diagnostica e controllo delle versioni

Miglioramento dell'analisi con `/Qspectre` per fornire assistenza per la mitigazione per Spectre variante 1 (CVE-2017-5753). Per altre informazioni, vedere [Spectre mitigations in MSVC](https://devblogs.microsoft.com/cppblog/spectre-mitigations-in-msvc/) (Mitigazioni Spectre in MSVC).

## <a name="c-standard-library-improvements"></a>Miglioramenti della Libreria standard C++

- Il documento [P0550R2 su C++20\(remove_cvref)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0550r2.pdf) è stato completato.

- Miglioramento del formato a virgola mobile to_chars() di \<charconv> di C++17: l'elemento chars_format::fixed più breve è più veloce del 60-80% e l'elemento più breve/di precisione chars_format::hex è completo.

- Più algoritmi hanno implementazioni parallelizzate: is_sorted(), is_sorted_until(), is_partitioned(), set_difference(), set_intersection(), is_heap(), is_heap_until().

- Sono stati apportati miglioramenti a `std::variant` per renderlo più adatto all'utilità di ottimizzazione e generare così un codice migliore. Miglioramento dell'inlining del codice con `std::visit`.

- È stato applicato il formato Clang alle intestazioni della libreria standard di C++ per migliorare la leggibilità.

- Aumento della velocità effettiva quando vengono compilate diverse funzionalità della libreria standard usando `if constexpr`.

- Ottimizzazione della progettazione fisica della libreria standard per evitare la compilazione di parti della libreria standard non incluse tramite #include, dimezzando così i tempi di compilazione di un file vuoto che include solo \<vector>.

## <a name="performancethroughput-fixes"></a>Correzioni per prestazioni e velocità

- Miglioramenti relativi alla velocità effettiva di compilazione, tra cui il modo in cui il linker gestisce l'I/O dei file e la fase di collegamento durante l'unione e la creazione di tipi PDB.

- È stato aggiunto il supporto di base per la vettorializzazione SIMD di OpenMP. È possibile abilitarla usando la nuova opzione `-openmp:experimental` della riga di comando. Questa opzione permette la potenziale vettorializzazione dei cicli annotati con `#pragma omp simd`. La vettorializzazione non è garantita e per i cicli con annotazioni ma non vettorializzati verrà restituito un avviso. Nessuna clausola SIMD è supportata. Vengono semplicemente ignorate e viene segnalato un avviso.

- È stata aggiunta la nuova opzione della riga di comando `-Ob3` per l'incorporamento, che è una versione più aggressiva dell'opzione `-Ob2`. `-O2` (ottimizzazione dei dati binari per la velocità) implica comunque `-Ob2` per impostazione predefinita. Se l'inlining del compilatore non è abbastanza aggressivo, provare a passare a `-O2 -Ob3`.

- Per supportare la vettorializzazione manuale dei cicli con chiamate a funzioni della libreria matematica e determinate altre operazioni come la divisione di interi, è stato aggiunto il supporto per funzioni intrinseche Short Vector Math Library (SVML). Queste funzioni calcolano gli equivalenti dei vettori a 128, 256 o 512 bit. Per le definizioni delle funzioni supportate, vedere la [guida alle funzioni intrinseche Intel](https://software.intel.com/sites/landingpage/IntrinsicsGuide/#!=undefined&techs=SVML).

- Ottimizzazioni nuove e migliorate:

  - Semplificazioni aritmetiche e a riduzione costante per le espressioni tramite funzioni intrinseche vettoriali SIMD per formati sia a virgola mobile che interi.

  - Analisi più potente per l'estrazione di informazioni dal flusso di controllo (istruzioni if/else/switch) per rimuovere i rami sempre dimostrati come true o false.

  - Introduzione di memset migliorati per l'uso di istruzioni vettoriali SSE2.

  - Rimozione migliorata di copie di coppie struct/classe inutili, in particolare per programmi C++ con passaggio di parametri per valore.

  - Maggiore ottimizzazione del codice tramite `memmove`, ad esempio la costruzione di `std::copy` o di `std::vector` e `std::string`.

## <a name="c-ide"></a>IDE C++

### <a name="live-share-c-support"></a>Supporto di Live Share per C++

[Live Share](/visualstudio/liveshare/) ora supporta C++, consentendo agli sviluppatori che usano Visual Studio o Visual Studio Code di collaborare in tempo reale. Per altre informazioni, vedere [Announcing Live Share for C++: Real-Time Sharing and Collaboration](https://devblogs.microsoft.com/cppblog/cppliveshare/) (Annuncio di Live Share per C++: condivisione e collaborazione in tempo reale)

### <a name="intellicode-for-c"></a>IntelliCode per C++

IntelliCode è un'estensione facoltativa che usa le proprie funzioni di formazione estesa e il contesto del codice per inserire nella parte superiore dell'elenco di completamento gli elementi che più probabilmente verranno usati. Spesso riesce a eliminare la necessità di scorrere l'elenco verso il basso. Per C++, IntelliCode si rivela di massima utilità quando si usano le librerie più comuni, come la libreria standard. Per altre informazioni, vedere [AI-Assisted Code Completion Suggestions Come to C++ via IntelliCode](https://devblogs.microsoft.com/cppblog/cppintellicode/) (Suggerimenti di completamento del codice con supporto per intelligenza artificiale disponibili in C++ tramite IntelliCode).

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

## <a name="cmake-support"></a>Supporto per CMake

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

## <a name="debugging"></a>Debug

- Per le applicazioni C++ in esecuzione in Windows, i file PDB vengono ora caricati in un processo a 64 bit separato. Questa modifica risolve una vasta gamma di arresti anomali causati dalla memoria insufficiente nel debugger durante l'esecuzione del debug di applicazioni che contengono un elevato numero di moduli e di file PDB.

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

## <a name="unit-testing"></a>Unit test

Il modello di progetto di test C++ gestito non è più disponibile. È possibile continuare a usare il framework di test C++ gestito nei progetti esistenti. Per i nuovi unit test, è consigliabile usare uno dei framework di test nativi per cui Visual Studio fornisce modelli (MSTest, Google Test) o il modello di progetto di test C# gestito.
