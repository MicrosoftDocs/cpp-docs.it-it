---
title: Novità di C++ in Visual Studio
description: Nuove funzionalità e correzioni del compilatore e degli strumenti di Microsoft C/C++ in Visual Studio 2019.
ms.date: 03/03/2021
ms.technology: cpp-ide
ms.openlocfilehash: c48b733ad18d57917220b443bd18830441dc693c
ms.sourcegitcommit: f8ba5db09d05683b24c58505f0e57c21f85545dc
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2021
ms.locfileid: "103087181"
---
# <a name="whats-new-for-c-in-visual-studio"></a>Novità di C++ in Visual Studio

In Visual Studio 2019 sono stati inclusi numerosi aggiornamenti e correzioni per l'ambiente Microsoft C++. Sono stati corretti numerosi bug e problemi del compilatore e degli strumenti. Molti di questi problemi sono stati segnalati dai clienti tramite le opzioni [Segnala un problema](/visualstudio/ide/how-to-report-a-problem-with-visual-studio?view=vs-2019&preserve-view=true) e [Invia un suggerimento](https://aka.ms/feedback/suggest?space=62) in **Commenti e suggerimenti**. Microsoft ringrazia i clienti per le segnalazioni inviate.

Per altre informazioni sulle novità in tutto Visual Studio, visitare la pagina [Novità in Visual Studio 2019](/visualstudio/ide/whats-new-visual-studio-2019). Per informazioni sulle novità per C++ in Visual Studio 2017, vedere [Novità di C++ in Visual Studio 2017](what-s-new-for-cpp-2017.md). Per informazioni sulle novità per C++ in Visual Studio 2015 e versioni precedenti, vedere [Visual C++: novità dalla versione 2003 alla 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md). Per informazioni sulle novità della documentazione di C++, vedere [documentazione di Microsoft c++:](whats-new-cpp-docs.md)novità.

## <a name="whats-new-for-c-in-visual-studio-version-169"></a>Novità di C++ in Visual Studio versione 16,9

Per un riepilogo delle nuove funzionalità e correzioni di bug in Visual Studio versione 16,9, vedere Novità di [Visual studio 2019 versione 16,9](/visualstudio/releases/2019/release-notes#--visual-studio-2019-version-1690-).

- [Igienizzatore indirizzo](../sanitizers/asan.md):

  - Il supporto per il sanificatore degli indirizzi in Windows è fuori dalla modalità sperimentale e ha raggiunto la disponibilità a livello generale.

  - `RtlAllocateHeap`Supporto espanso, correzione di un problema di compatibilità con gli `RtlCreateHeap` `RtlAllocateHeap` intercettori e durante la creazione di pool di memoria eseguibili.

  - Aggiunta del supporto per le `GlobalAlloc` funzioni legacy e `LocalAlloc` della famiglia di memoria. È possibile abilitare questi intercettori impostando il flag dell'ambiente `ASAN_OPTIONS=windows_hook_legacy_allocators=true` .

  - Aggiornati i messaggi di errore per l'interleaving della memoria shadow e l'errore di intercettazione per rendere espliciti problemi e risoluzioni.

  - L'integrazione dell'IDE può ora gestire la raccolta completa di eccezioni che ASan è in grado di segnalare.

  - Il compilatore e il linker suggeriranno la creazione di informazioni di debug se rilevano la compilazione con ASan, ma non la creazione di informazioni di debug.

- È ora possibile usare come destinazione la versione LLVM del runtime OpenMP con il nuovo switch CL **`/openmp:llvm`** . Viene aggiunto il supporto per la `lastprivate` clausola nelle `#pragma omp` sezioni e nelle variabili di indice senza segno nei cicli paralleli `for` . L' **`/openmp:llvm`** opzione è attualmente disponibile solo per la destinazione AMD64 ed è ancora sperimentale.

- I progetti di Visual Studio CMake ora hanno un supporto di prima classe per lo sviluppo di Windows remoto. Sono inclusi la configurazione di un progetto CMake per la destinazione ARM64 in Windows, la distribuzione del progetto in un computer Windows remoto e il debug del progetto in un computer Windows remoto da Visual Studio.

- La versione di Ninja acclusa a Visual Studio in Windows è stata aggiornata alla versione 1.10. Per ulteriori informazioni su ciò che è incluso, vedere le [Note sulla versione di Ninja 1,10](https://groups.google.com/g/ninja-build/c/piOltAhywFA/m/zPfkrTtRCwAJ?pli=1).

- La versione di CMake disponibile con Visual Studio è stata aggiornata alla versione 3.19. Per ulteriori informazioni su ciò che è incluso, vedere le [Note sulla versione di cmake 3,19](https://cmake.org/cmake/help/latest/release/3.19.html).

- [Contrassegnati molti tipi di blocco/Guard in STL come `nodiscard` ](https://github.com/microsoft/STL/pull/1495).

- IntelliSense:

  - Miglioramento di stabilità e funzionalità delle procedure per la disponibilità dei moduli importati e il completamento delle unità di intestazione in IntelliSense.

  - Aggiunta di go-to-Definition sulle importazioni dei moduli, sul supporto per l'indicizzazione `export {...}` e sui riferimenti ai moduli più accurati per i moduli con lo stesso nome.

  - Miglioramento della conformità del linguaggio di IntelliSense per C++ mediante l'aggiunta del supporto per l' [inizializzazione della copia di un oggetto temporaneo nell'inizializzazione diretta di riferimento](https://wg21.link/P1358R0) `__builtin_memcpy` e `__builtin_memmove` , la correzione delle [incoerenze tra `constexpr` le `consteval` funzioni e](https://wg21.link/P1937R2), il [temporaries esteso per la durata nelle espressioni costanti](https://wg21.link/P1968R0)e [tipi simili e un'associazione di riferimento](https://wg21.link/P1358R0).

  - Aggiunto il completamento per make_unique, make_shared, emplace ed emplace_back che si basa sul parametro di tipo specificato.

- MSVC determina ora i runtime di Address Sanitizer corretti necessari per i file binari. Il progetto di Visual Studio otterrà automaticamente le nuove modifiche. Quando si usa l'igienizzatore degli indirizzi nella riga di comando, è ora sufficiente passare [`/fsanitize=address`](../build/reference/fsanitize.md) al compilatore.

- La gestione connessione di Visual Studio ora supporta chiavi private usando l'algoritmo di chiave pubblica ECDSA.

- Aggiornamento delle versioni di LLVM e Clang fornite nel programma di installazione alla versione 11. Per altre informazioni, leggere le note sulla versione per [LLVM](https://releases.llvm.org/11.0.0/docs/ReleaseNotes.html) e [Clang](https://releases.llvm.org/11.0.0/tools/clang/docs/ReleaseNotes.html).

- Visual Studio userà ora le variabili CMake dai file della toolchain per la configurazione di IntelliSense. Questo offrirà un'esperienza migliore per lo sviluppo incorporato e Android.

- Implementazione della [proposta più contenitori constExpr](https://wg21.link/P0784R7), che consente ai distruttori e alle nuove espressioni di essere **`constexpr`** . In questo modo viene spianata la strada per le utilità quali **`constexpr`** `std::vector` e `std::string` .

- Supporto esteso per i moduli IntelliSense di C++ 20, tra cui Vai a definizione, Vai al modulo e completamento dei membri.

- I [modelli di funzione abbreviati](https://en.cppreference.com/w/cpp/language/function_template#Abbreviated_function_template) sono ora supportati nel compilatore MSVC.

## <a name="whats-new-for-c-in-visual-studio-version-168"></a>Novità di C++ in Visual Studio versione 16,8

Per un riepilogo delle nuove funzionalità e correzioni di bug in Visual Studio versione 16,8, vedere Novità di [Visual studio 2019 versione 16,8](/visualstudio/releases/2019/release-notes-v16.8).

- Le coroutine c++ 20 sono ora supportate in [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) e nell' \<coroutine> intestazione.

- IntelliSense offre ora il supporto per le intestazioni C++20 \<concepts> e \<ranges>, nonché per la ridenominazione e l'esplorazione delle definizioni dei concetti.

- La libreria STL ora supporta la maggior parte degli intervalli C++20.

- In MSVC sono ora supportate le [funzioni membro speciali trivial in modo condizionale](https://wg21.link/P0848R3).

- C11 e C17 sono ora supportati con le opzioni [ `/std:c11` e `/std:c17` ](../build/reference/std-specify-language-standard-version.md) .

- Altri miglioramenti di STL includono il supporto [`std::atomic_ref`](https://wg21.link/p0019r8) completo [ `std::midpoint` per `std::lerp` ](https://wg21.link/p0811r3) e per e [`std::execution::unseq`](https://wg21.link/p1001r2) per e [`std::reverse_copy`](../standard-library/algorithm-functions.md#reverse_copy) altro ancora.

- Aggiornata a [CMake 3.18](https://cmake.org/cmake/help/latest/release/3.18.html) la versione di CMake acclusa a Visual Studio.

- Gli strumenti di analisi del codice supportano ora lo standard SARIF 2.1: il formato di log di analisi statica standard del settore.

- Per gli strumenti di compilazione mancanti nei progetti Linux verrà ora visualizzato un avviso sulla barra degli strumenti e sarà disponibile una descrizione chiara degli strumenti mancanti nell'elenco degli errori.

- È ora possibile eseguire il debug di dump core di Linux in un sistema Linux remoto o in WSL direttamente da Visual Studio.

- Per la generazione di commenti C++ doxygen, sono state aggiunte altre opzioni di stile del commento ( `/*!` e `//!` ).

- [Annunci vcpkg](https://aka.ms/vcpkg/team)aggiuntivi.

- Supporto del compilatore per le espressioni lambda nei contesti non valutati.

- [`/DEBUG:FULL`](../build/reference/debug-generate-debug-info.md) migliorare le prestazioni grazie alla creazione di PDB multithread. Diverse applicazioni di grandi dimensioni e giochi AAA usano collegamenti da 2 a 4 volte più veloci.

- Il debugger di Visual Studio ora dispone del supporto per **`char8_t`** .

- Supporto per i progetti ARM64 con clang-cl.

- Supporto per [gli oggetti intrinseci Intel AMX](https://software.intel.com/content/www/us/en/develop/documentation/cpp-compiler-developer-guide-and-reference/top/compiler-reference/intrinsics/intrinsics-for-intel-advanced-matrix-extensions-intel-amx-instructions.html).

## <a name="whats-new-for-c-in-visual-studio-version-167"></a>Novità di C++ in Visual Studio versione 16,7

Per un riepilogo delle nuove funzionalità e correzioni di bug in Visual Studio versione 16,7, vedere Novità di [Visual studio 2019 versione 16,7](/visualstudio/releases/2019/release-notes-v16.7).

- Il supporto di C++ remoto supporta ora una gamma più ampia di distribuzioni e shell Linux, tra cui sh, csh, bash, tsch, ksh, zsh e dash. È possibile ignorare la scelta di una shell per una connessione remota modificando la nuova proprietà "shell" tramite ConnectionManager.exe. Questo supporto è stato testato con i progetti Linux basati su MSBuild e i progetti CMake destinati a un sistema Linux remoto o a WSL.

- È ora possibile usare Ninja (un sistema di compilazione che valuta le compilazioni incrementali molto rapidamente) per migliorare i tempi di compilazione incrementali per i progetti Linux basati su MSBuild. È possibile acconsentire esplicitamente a questa funzionalità impostando "Abilita compilazioni incrementali" su "Con Ninja" nella pagina delle proprietà generali. Ninja (ninja-build) deve essere installato nel sistema Linux remoto o in WSL.

- Sono state implementate nuove funzionalità della libreria standard C++20. Per un elenco dettagliato, vedere il [log delle modifiche STL su GitHub](https://github.com/microsoft/STL/wiki/Changelog).

- È ora possibile modificare e impostare le connessioni SSH remote predefinite in [Gestione connessioni](../linux/connect-to-your-remote-linux-computer.md#set-up-the-remote-connection). Ciò significa che è possibile modificare una connessione remota esistente (ad esempio, se è stato modificato l'indirizzo IP) e impostare le connessioni predefinite da utilizzare in CMakeSettings.jsin e launch.vs.js. Le connessioni SSH remote consentono di eseguire direttamente da Visual Studio la compilazione e il debug di progetti C++ in un sistema Linux remoto.

- Supporto avanzato di IntelliSense per Clang in Windows (clang-cl) in Visual Studio. Il percorso di inclusione di Clang include ora le librerie Clang. È stata migliorata la visualizzazione della linea ondulata nell'editor quando si usa la libreria std ed è stato aggiunto il supporto per C++2a in modalità Clang.

- è ora possibile provare la sottolineatura degli errori del codice e visualizzare un numero maggiore di correzioni rapide suggerite nei progetti C++. Abilitare questa funzionalità in **strumenti > opzioni > editor di testo > C/C++ > sperimentale**. Impostare **Disable Experimental code pelucchi** su false. Per altre informazioni, vedere il [blog del team di C++](https://aka.ms/cpp/isensecodelinter).

- Sono state aggiunte quattro nuove regole di analisi codice per incorporare funzionalità di sicurezza aggiuntive in C++: [C26817](../code-quality/c26817.md), [C26818](../code-quality/c26818.md), [C26819](../code-quality/c26819.md) e [C26820](../code-quality/c26820.md).

- È stato aggiunto un supporto di livello avanzato per eseguire il debug di progetti CMake in sistemi remoti con gdbserver.

- Per i progetti nativi x64 è ora disponibile un'implementazione sperimentale di AddressSanitizer per C++ in Visual Studio che consente di rilevare facilmente errori di danneggiamento della memoria. È ora supportato anche l'uso di runtime di debug ( **`/MTd`** , **`/MDd`** , **`/LDd`** ).

- IntelliSense include ora il supporto di base per concetti, inizializzatori designati e varie altre funzionalità di C++ 20.

- *`.ixx`* i *`.cppm`* file e sono ora riconosciuti come C++ e vengono trattati come tali dall'evidenziatore della sintassi e da IntelliSense.

## <a name="whats-new-for-c-in-visual-studio-version-166"></a>Novità di C++ in Visual Studio versione 16,6

Per un riepilogo delle nuove funzionalità e correzioni di bug in Visual Studio versione 16,6, vedere Novità di [Visual studio 2019 versione 16,6](/visualstudio/releases/2019/release-notes-v16.6).

- **Generazione di commenti Doxygen/XML migliorata:** Generare automaticamente gli stub di commento di documenti Doxygen o XML digitando `///` o `/**` sopra le funzioni. Queste informazioni vengono ora visualizzate anche in Informazioni rapide.

- **Supporto di Ninja per CMake per Linux/WSL:** usare Ninja come generatore sottostante durante la creazione di progetti CMake in WSL o in un sistema remoto. Ninja è ora il generatore predefinito quando si aggiunge una nuova configurazione Linux o WSL.

- **Modelli di debug per il debug remoto di CMake**: sono stati semplificati i modelli per il debug di progetti CMake in un sistema Linux o WSL remoto con gdb.

- **Supporto iniziale per i concetti di C++20:** IntelliSense ora riconosce i [concetti di C++ 20](https://devblogs.microsoft.com/cppblog/c20-concepts-are-here-in-visual-studio-2019-version-16-3/) e li suggerisce nell'elenco dei membri.

## <a name="whats-new-for-c-in-visual-studio-version-165"></a>Novità di C++ in Visual Studio versione 16,5

Per un riepilogo delle nuove funzionalità e correzioni di bug in Visual Studio versione 16,5, vedere Novità di [Visual studio 2019 versione 16,5](/visualstudio/releases/2019/release-notes-v16.5).

- Il **modello di completamento del team di IntelliCode e le variabili membro supportano:**  Gli sviluppatori C++ possono ora eseguire il training dei modelli IntelliCode nelle proprie codebase. Questa condizione è denominata modello di team per i completamenti, perché consente di sfruttare i vantaggi delle procedure consolidate dei team. Sono stati inoltre migliorati i suggerimenti IntelliCode per le variabili membro.

- **Miglioramenti di IntelliSense:**
  -  IntelliSense ora visualizza i nomi dei tipi in modo più leggibile quando si utilizza la libreria standard.
  - È stata aggiunta la possibilità di attivare o meno la funzione di **invio**, **spazio** e **Tab** come caratteri di commit e di attivare o meno la **tabulazione** per inserire il frammento. Queste impostazioni sono disponibili in **strumenti > opzioni > editor di testo > C/C++ > Advanced > IntelliSense**.

- **Gestione connessione tramite la riga di comando:**  È ora possibile interagire con le connessioni remote archiviate tramite la riga di comando. È utile per attività come il provisioning di un nuovo computer di sviluppo o la configurazione di Visual Studio nell'integrazione continua.

- **Eseguire il debug e la distribuzione per WSL:** Usare il supporto nativo di Visual Studio per WSL per separare il sistema di compilazione dal sistema di distribuzione remota. A questo punto è possibile compilare in modo nativo in WSL e distribuire gli artefatti di compilazione in un secondo sistema remoto per il debug. Questo flusso di lavoro è supportato sia dai progetti CMake che dai progetti Linux basati su MSBuild.

- **Supporto per la modalità di conformità FIPS 140-2:** Visual Studio supporta ora la modalità di conformità FIPS 140-2 quando si sviluppano applicazioni C++ destinate a un sistema Linux remoto.

- **Servizi di linguaggio per i file di lingua CMake e manipolazione migliore del progetto CMake:**
  - La copia dei file di origine per i progetti CMake destinati a un sistema Linux remoto è stata ottimizzata. Visual Studio ora conserva un "file di impronte digitali" dell'ultimo set di origini copiate in modalità remota e ottimizza il comportamento in base al numero di file modificati.
  -  Le funzionalità di esplorazione del codice, ad esempio Vai alla definizione e Trova tutti i riferimenti sono ora supportate per funzioni, variabili e destinazioni nei file di script CMake.

  - È possibile aggiungere, rimuovere e rinominare i file di origine e le destinazioni nei progetti CMake dall'IDE senza modificare manualmente gli script CMake. Quando si aggiungono o rimuovono file con Esplora soluzioni, Visual Studio modifica automaticamente il progetto CMake. È anche possibile aggiungere, rimuovere e rinominare le destinazioni del progetto dalla visualizzazione Destinazioni di Esplora soluzioni.

- **Miglioramenti al progetto Linux:** I progetti di Visual Studio Linux ora hanno un IntelliSense più accurato e consentono di controllare la sincronizzazione dell'intestazione remota su base progetto.

## <a name="whats-new-for-c-in-visual-studio-version-164"></a>Novità di C++ in Visual Studio versione 16,4

Per un riepilogo delle nuove funzionalità e correzioni di bug in Visual Studio versione 16,4, vedere Novità di [Visual studio 2019 versione 16,4](/visualstudio/releases/2019/release-notes-v16.4).

- L'analisi del codice supporta ora [`Clang-Tidy`](https://aka.ms/cpp/clangtidy) in modo nativo per i progetti MSBuild e CMake, sia che si usi un set di strumenti Clang o MSVC. I controlli clang-tidy possono essere eseguiti come parte dell'analisi del codice in background, visualizzati come avvisi nell'editor (controllo ortografia) e visualizzati nell'Elenco errori.

- I progetti di Visual Studio CMake ora hanno pagine [Panoramica](https://devblogs.microsoft.com/cppblog/usability-improvements-for-cmake-in-visual-studio-2019-version-16-4-launch-target-selection-and-overview-pages/) con opzioni introduttive per lo sviluppo multipiattaforma. Queste pagine sono dinamiche e consentono di connettersi a un sistema Linux e di aggiungere una configurazione Linux o WSL al progetto CMake.

- Il [menu a discesa Avvia per i progetti CMake](https://devblogs.microsoft.com/cppblog/usability-improvements-for-cmake-in-visual-studio-2019-version-16-4-launch-target-selection-and-overview-pages/) ora Visualizza le destinazioni usate più di recente e può essere filtrato.

- [C++/CLI](https://devblogs.microsoft.com/cppblog/an-update-on-cpp-cli-and-dotnet-core/) supporta ora l'interoperabilità con .NET Core 3.1 e versioni successive in Windows.

- È ora possibile abilitare [ASan](https://aka.ms/cpp/asanmsvc) per i progetti compilati con MSVC in Windows per la strumentazione di runtime del codice C++, che consente di rilevare gli errori di memoria.

- Aggiornamenti alla libreria standard C++ di MSVC:
  - C++17: Implementazione della precisione generale`to_chars()`, con completamento di [P0067R5](https://wg21.link/P0067R5) Conversioni di stringhe elementari (charconv). Viene così completata l'implementazione di tutte le funzionalità della libreria nello standard C++17.
  - C++20: Implementazione di [P1754R1](https://wg21.link/P1754R1) Rinominare i concetti con standard_case. Per includere le funzionalità di anteprima della bozza di lavoro più recente di C++, usare l' **`/std:c++latest`** opzione del compilatore. L'opzione può essere impostata anche nelle proprietà di configurazione > pagina delle proprietà del progetto di **linguaggio C/C++ >** utilizzando la proprietà **standard del linguaggio C++** .

- È ora disponibile una nuova raccolta di strumenti denominati [C++ Build Insights](../build-insights/get-started-with-cpp-build-insights.md) . Per ulteriori informazioni sull'annuncio, vedere il [Blog del team di C++](https://devblogs.microsoft.com/cppblog/introducing-c-build-insights/).

## <a name="whats-new-for-c-in-visual-studio-version-163"></a>Novità di C++ in Visual Studio versione 16,3

Per un riepilogo delle nuove funzionalità e correzioni di bug in Visual Studio versione 16,3, vedere Novità di [Visual studio 2019 versione 16,3](/visualstudio/releases/2019/release-notes-v16.3).

- Gli sviluppatori C++ possono ora impostare i commenti della riga usando il tasto di scelta rapida **CTRL + K**, **CTRL +/**.

- Gli elenchi di membri IntelliSense vengono ora filtrati in base ai qualificatori di tipo, ad esempio, `const std::vector` ora filtra i metodi come `push_back` .

- Sono state aggiunte le funzionalità di anteprima della libreria standard C++ 20 (disponibili in **`/std:c++latest`** ):
  - [P0487R1](https://wg21.link/P0487R1): correzione di `operator>>(basic_istream&, CharT*)`
  - [P0616R0](https://wg21.link/P0616R0): uso di `move()` in `<numeric>`
  - [P0758R1](https://wg21.link/P0758R1): `is_nothrow_convertible`
  - [P0734R0](https://wg21.link/P0734R0): estensioni C++ per i concetti
  - [P0898R3](https://wg21.link/P0898R3): concetti della libreria standard
  - [P0919R3](https://wg21.link/P0919R3): ricerca eterogenea di contenitori non ordinati

- [Nuovi controlli delle linee guida di base di C++](https://devblogs.microsoft.com/cppblog/new-c-core-check-rules/), tra cui il nuovo set di regole "enum Rules" e altre `const` regole di `enum` tipo, e.

- Un nuovo schema di colorazione semantica predefinito consente agli utenti di comprendere meglio il codice a colpo d'occhio, la finestra dello stack di chiamate può essere configurata per nascondere gli argomenti dei modelli e IntelliCode per C++ è attivo per impostazione predefinita.

- Configurare le destinazioni di debug e le attività personalizzate con le variabili di ambiente tramite CMakeSettings.json o CppProperties.json oppure il nuovo tag "env" nelle singole destinazioni e attività in launch.vs.json e tasks.vs.json.

- Gli utenti possono ora usare un'azione rapida per i pacchetti vcpkg mancanti per aprire automaticamente una console ed eseguire l'installazione predefinita di vcpkg.

- La copia remota dell'intestazione eseguita dai progetti Linux ([CMake](../linux/cmake-linux-project.md) e [MSBuild](../linux/configure-a-linux-project.md)) è stata ottimizzata e ora viene eseguita in parallelo.

- Il [supporto nativo per WSL](https://devblogs.microsoft.com/cppblog/c-with-visual-studio-2019-and-windows-subsystem-for-linux-wsl/) di Visual Studio ora supporta le compilazioni parallele per i progetti Linux basati su MSBuild.

- Gli utenti possono ora specificare un elenco di output di compilazione locale da distribuire in un sistema remoto con progetti makefile di Linux.

- Le descrizioni delle impostazioni nell'[Editor impostazioni CMake](https://devblogs.microsoft.com/cppblog/introducing-the-new-cmake-project-settings-ui/) ora contengono più contesto e collegamenti alla documentazione utile.

- Il modello di base C++ per IntelliCode è ora abilitato per impostazione predefinita. Per modificare questa impostazione, passare a **Strumenti** > **Opzioni** > **IntelliCode**.

## <a name="whats-new-for-c-in-visual-studio-version-162"></a>Novità di C++ in Visual Studio versione 16,2

Per un riepilogo delle nuove funzionalità e correzioni di bug in Visual Studio versione 16,2, vedere Novità di [Visual studio 2019 versione 16,2](/visualstudio/releases/2019/release-notes-v16.2).

- Per i progetti CMake locali configurati con Clang, l'analisi codice esegue ora controlli Clang-Tidy, visualizzati come parte dell'analisi codice in background come avvisi nell'editor (linee a zigzag) e nell'elenco degli errori.

- Aggiornamento dell'intestazione `<charconv>` per conversioni di stringhe elementari [P0067R5](https://wg21.link/P0067R5) di C++17:
  - Aggiunta di overload `to_chars()` a virgola mobile per precisione `chars_format::fixed` e `chars_format::scientific` (`chars_format::general precision` è l'unica parte non ancora implementata)
  - Ottimizzato `chars_format::fixed` più breve

- Sono state aggiunte le funzionalità di anteprima della libreria standard C++ 20:
  - Disponibile in **`/std:c++latest`** :
    - [P0020R6](https://wg21.link/P0020R6): `atomic<floating-point>`
    - [P0463R1](https://wg21.link/P0463R1): enumerazione endian
    - [P0482R6](https://wg21.link/P0482R6): tipo `char8_t` per caratteri e stringhe UTF-8
    - [P0653R2](https://wg21.link/P0653R2):`to_address()` per la conversione di un puntatore in puntatore non elaborato
  - Disponibili in `/std:c++17` e `/std:c++latest`:
    - [P0600R1](https://wg21.link/P0600R1):`[[nodiscard]]` nella libreria
  - Disponibili sempre:
    - [P0754R2](https://wg21.link/P0754R2): intestazione `<version>`
    - [P0771R1](https://wg21.link/P0771R1): il costruttore di spostamento `std::function` deve essere `noexcept`

- Windows SDK non è più una dipendenza per CMake per Windows e CMake per componenti Linux.

- Miglioramenti al [linker C++](https://aka.ms/cpp/162linker) per migliorare significativamente i tempi di compilazione delle iterazioni per gli input di maggiori dimensioni. **`/DEBUG:FAST`** e le **`/INCREMENTAL`** ore sono in media due volte più veloci e sono **`/DEBUG:FULL`** ora da tre a sei volte più veloci.

## <a name="whats-new-for-c-in-visual-studio-version-161"></a>Novità di C++ in Visual Studio versione 16,1

Per un riepilogo delle nuove funzionalità e correzioni di bug in Visual Studio versione 16,1, vedere Novità di [Visual studio 2019 versione 16,1](/visualstudio/releases/2019/release-notes-v16.1).

### <a name="c-compiler"></a>compilatore C++

- Queste funzionalità di anteprima di C++ 20 sono state implementate nel compilatore C++, disponibile in **`/std:c++latest`** :
  - Capacità aumentata di trovare modelli di funzione tramite la ricerca dipendente dall'argomento di espressioni di chiamata di funzione con argomenti di modello espliciti ([P0846R0](http://wg21.link/p0846r0)).
  - Inizializzazione designata ([P0329R4](https://wg21.link/p0329r4)), che consente la selezione di membri specifici nell'inizializzazione aggregata, ad esempio utilizzando la `Type t { .member = expr }` sintassi.

- Il supporto lambda è stato rivisto e interessa ora un numero elevato di bug duraturi. Questa modifica è abilitata per impostazione predefinita quando si utilizza **`/std:c++latest`** . In **`/std:c++17`** modalità linguaggio e in modalità predefinita ( **`/std:c++14`** ), il nuovo parser può essere abilitato usando **`/experimental:newLambdaProcessor`** , ad esempio, `/std:c++17 /experimental:newLambdaProcessor` .

### <a name="c-standard-library-improvements"></a>Miglioramenti della libreria standard di C++

- Queste funzionalità di anteprima di C++ 20 sono state aggiunte all'implementazione della libreria standard C++, disponibile in **`/std:c++latest`** :
  - `starts_with` e `ends_with` per `basic_string` e `basic_string_view`.
  - `contains` per i contenitori associativi.
  - `remove`, `remove_if` e `unique` per `list` e `forward_list` ora restituiscono `size_type`.
  - `shift_left` e `shift_right` aggiunti a `<algorithm>`.

### <a name="c-ide"></a>IDE C++

#### <a name="intellicode-for-c"></a>IntelliCode per C++

IntelliCode è ora disponibile come componente facoltativo nel carico di lavoro **Sviluppo di applicazioni desktop con C++**. Per altre informazioni, vedere [Improved C++ IntelliCode now Ships with Visual Studio 2019](https://devblogs.microsoft.com/cppblog/improved-c-intellicode-now-ships-with-visual-studio-2019/) (IntelliCode di C++ è stato migliorato ed è ora disponibile con Visual Studio 2019).

IntelliCode usa il proprio training completo e il contesto del codice per inserire gli elementi che più probabilmente verranno usati nella parte superiore dell'elenco di completamento. Spesso riesce a eliminare la necessità di scorrere l'elenco verso il basso. Per C++, IntelliCode si rivela di massima utilità quando si usano le librerie più comuni, come la libreria standard.

Le funzionalità di anteprima IntelliCode (modelli personalizzati, supporto C++ e inferenza EditorConfig) sono disabilitate per impostazione predefinita. Per abilitarli, passare a **strumenti > opzioni > IntelliCode > generale**. Questa versione di IntelliCode è migliorata in termini di precisione e include il supporto per le funzioni libere. Per altre informazioni, vedere [AI-Assisted Code Completion Suggestions Come to C++ via IntelliCode](https://devblogs.microsoft.com/cppblog/cppintellicode/) (Suggerimenti di completamento del codice con supporto per intelligenza artificiale disponibili in C++ tramite IntelliCode).

#### <a name="quick-info-improvements"></a>Miglioramenti delle informazioni rapide

- Informazioni rapide rispetta ora la colorazione semantica dell'editor. Include anche un nuovo collegamento **Cerca online** che esegue la ricerca di documenti online per ottenere altre informazioni sul costrutto di codice al passaggio del mouse. Il collegamento fornito da informazioni rapide per il codice Red-squiggled consente di cercare l'errore online. In questo modo non è necessario digitare nuovamente il messaggio nel browser. Per altre informazioni, vedere [miglioramenti delle informazioni rapide in Visual Studio 2019: colorazione e ricerca online](https://devblogs.microsoft.com/cppblog/quick-info-improvements-in-visual-studio-2019-colorization-and-search-online/).

#### <a name="general-improvements"></a>Miglioramenti generali

- La barra modelli può immettere voci nel menu a discesa in base alla creazione di istanze del modello specifico nella codebase.

- Lampadine per `#include` le direttive mancanti che vcpkg può installare e il completamento automatico dei pacchetti disponibili per la direttiva CMake `find_package` .

- La pagina delle proprietà **generale** per i progetti C++ è stata modificata. Alcune opzioni sono ora elencate in una nuova pagina **Avanzate** . La pagina **Avanzate** include anche nuove proprietà per l'architettura del set di strumenti preferita, le librerie di debug, la versione secondaria del set di strumenti MSVC e le compilazioni di Unity (Jumbo).

### <a name="cmake-support"></a>Supporto per CMake

- È stata aggiornata la versione di CMake fornita con Visual Studio a 3,14. Questa versione aggiunge il supporto integrato per i generatori MSBuild destinati a progetti di Visual Studio 2019, nonché API di integrazione IDE basate su file.

- Sono stati apportati miglioramenti all'editor delle impostazioni CMake, incluso il supporto per il sottosistema Windows per Linux (WSL) e le configurazioni da cache esistenti, le modifiche alle radici di compilazione e installazione predefinite e il supporto per le variabili di ambiente nelle configurazioni CMake di Linux.

- I completamenti e le informazioni rapide per i comandi, le variabili e le proprietà di CMake predefinite semplificano la modifica dei *`CMakeLists.txt`* file.

- È stato integrato il supporto per la modifica, la compilazione e il debug di progetti CMake con Clang/LLVM. Per altre informazioni, vedere [Clang/LLVM Support in Visual Studio](https://devblogs.microsoft.com/cppblog/clang-llvm-support-in-visual-studio/) (Supporto per Clang/LLVM in Visual Studio).

### <a name="linux-and-the-windows-subsystem-for-linux"></a>Linux e il sottosistema Windows per Linux

- È ora supportato [AddressSanitizer (Asan)](https://github.com/google/sanitizers/wiki/AddressSanitizer) in progetti multipiattaforma Linux e CMake. Per altre informazioni, vedere [AddressSanitizer (ASan) for the Linux Workload in Visual Studio 2019](https://devblogs.microsoft.com/cppblog/addresssanitizer-asan-for-the-linux-workload-in-visual-studio-2019/) (AddressSanitizer (ASan) per i carichi di lavoro Linux in Visual Studio 2019).

- È stato integrato il supporto di Visual Studio per l'uso di C++ con il sottosistema Windows per Linux (WSL). Ora è possibile usare l'installazione locale del sottosistema Windows per Linux (WSL) con C++ in modo nativo in Visual Studio senza una configurazione aggiuntiva o una connessione SSH. Per altre informazioni, vedere [C++ with Visual Studio 2019 and Windows Subsystem for Linux (WSL)](https://devblogs.microsoft.com/cppblog/c-with-visual-studio-2019-and-windows-subsystem-for-linux-wsl/) (C++ con Visual Studio 2019 e Windows Subsystem for Linux (WSL)).

### <a name="code-analysis"></a>Analisi codice

- Sono stati aggiunti nuovi aggiornamenti rapidi per i controlli delle variabili non inizializzati. Avvisi di analisi del codice [C6001: uso di una &lt; variabile &gt; di memoria non inizializzata](../code-quality/c6001.md) e di [C26494 VAR_USE_BEFORE_INIT](../code-quality/c26494.md) sono disponibili nel menu a lampadina sulle righe pertinenti. Sono abilitate per impostazione predefinita nei RuleSet di tipo minimo Microsoft nativo e Regole di base di C++, rispettivamente. Per altre informazioni, vedere [New code analysis quick fixes for uninitialized memory (C6001) and use before init (C26494) warnings](https://devblogs.microsoft.com/cppblog/new-code-analysis-quick-fixes-for-uninitialized-memory-c6001-and-use-before-init-c26494-warnings/) (Nuove correzioni rapide di analisi del codice per avvisi di memoria non inizializzata (C6001) and use-before-init (C26494)).

### <a name="remote-builds"></a>Compilazioni Remote

- Gli utenti possono ora separare il computer di compilazione remoto dal computer di debug remoto quando la destinazione è Linux in progetti MSBuild e CMake.

- La registrazione migliorata per le connessioni remote consente di diagnosticare più facilmente i problemi di sviluppo multipiattaforma.

## <a name="whats-new-for-c-in-visual-studio-version-160"></a>Novità di C++ in Visual Studio versione 16,0

Per un riepilogo delle nuove funzionalità e correzioni di bug in Visual Studio versione 16,0, vedere Novità di [Visual studio 2019 versione 16,0](/visualstudio/releases/2019/release-notes-v16.0).

### <a name="c-compiler"></a>compilatore C++

- Supporto ottimizzato per le funzionalità di C++17 e le correzioni di correttezza e supporto sperimentale per le funzionalità di C++20 come i moduli e le coroutine. Per informazioni dettagliate, vedere [Miglioramenti della conformità di C++ in Visual Studio 2019](cpp-conformance-improvements.md).

- L' [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) opzione include ora funzionalità c++ 20 che non sono necessariamente complete, incluso il supporto iniziale per l'operatore c++ 20 **`<=>`** ("spazio") per il confronto a tre vie.

- L'opzione del compilatore C++ [`/Gm`](../build/reference/gm-enable-minimal-rebuild.md) è ora deprecata. Provare a disabilitare l' **`/Gm`** opzione negli script di compilazione se è definita in modo esplicito. Tuttavia, è anche possibile ignorare in modo sicuro l'avviso di deprecazione per **`/Gm`** , perché non viene considerato come un errore quando si usa "considera gli avvisi come errori" ( [`/WX`](../build/reference/compiler-option-warning-level.md) ).

- Quando MSVC inizia a implementare le funzionalità della bozza C++ 20 standard sotto il **`/std:c++latest`** flag, **`/std:c++latest`** è ora incompatibile con **`/clr`** (tutti i tipi), **`/ZW`** e **`/Gm`** . In Visual Studio 2019 usare le modalità `/std:c++17` oppure `/std:c++14` durante la compilazione con `/clr`, `/ZW` o `/Gm` (ma vedere il punto elenco precedente).

- Non vengono più generate intestazioni precompilate per app desktop e console C++ per impostazione predefinita.

#### <a name="codegen-security-diagnostics-and-versioning"></a>Codegen, sicurezza, diagnostica e controllo delle versioni

Analisi migliorata con [`/Qspectre`](../build/reference/qspectre.md) per fornire assistenza per mitigazione per Spectre Variant 1 ([CVE-2017-5753](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2017-5753)). Per altre informazioni, vedere [Spectre mitigations in MSVC](https://devblogs.microsoft.com/cppblog/spectre-mitigations-in-msvc/) (Mitigazioni Spectre in MSVC).

### <a name="c-standard-library-improvements"></a>Miglioramenti della libreria standard di C++

- Implementazione di altre funzionalità delle librerie di C++17 e C++20 e correzioni di correttezza. Per informazioni dettagliate, vedere [Miglioramenti della conformità di C++ in Visual Studio 2019](cpp-conformance-improvements.md).

- È stato applicato il formato Clang alle intestazioni della libreria standard di C++ per migliorare la leggibilità.

- Poiché Visual Studio supporta ora Just My Code per C++, la libreria standard non deve più fornire un sistema personalizzato affinché `std::function` e `std::visit` ottengano lo stesso effetto. La rimozione del sistema non ha alcun effetto visibile per l'utente, Un'eccezione è che il compilatore non produrrà più la diagnostica che indica i problemi alla riga 15732480 o 16707566 di \<type_traits> o \<variant> .

### <a name="performancethroughput-improvements-in-the-compiler-and-standard-library"></a>Miglioramenti di prestazioni/velocità effettiva nel compilatore e nella libreria standard

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

- Il `std::thread` costruttore non attende più l'avvio del thread e non inserisce più livelli di chiamate di funzione tra la libreria C sottostante `_beginthreadex` e l'oggetto chiamabile fornito. In precedenza `std::thread` sono state inserite sei funzioni tra `_beginthreadex` e l'oggetto chiamabile fornito. Questo numero è stato ridotto solo a tre, due dei quali sono semplicemente `std::invoke` . Questa modifica risolve anche un bug di temporizzazione oscuro, in cui un `std::thread` Costruttore smette di rispondere se l'orologio di sistema è stato modificato nel momento esatto in cui `std::thread` è stato creato.

- È stata corretta una regressione delle prestazioni in `std::hash` introdotta durante l'implementazione di `std::hash<std::filesystem::path>`.

- La libreria standard usa ora distruttori anziché blocchi catch in varie posizioni per ottenere la correttezza. Questa modifica comporta una migliore interazione del debugger: le eccezioni generate tramite la libreria standard nelle posizioni interessate vengono ora visualizzate come generate dal sito di generazione originale, anziché dalla rigenerazione. Non tutti i blocchi catch della libreria standard sono stati eliminati. Si prevede che il numero di blocchi catch venga ridotto nelle versioni successive di MSVC.

- Il codegen non ottimale in `std::bitset` causato da un'istruzione throw condizionale all'interno di una `noexcept` funzione è stato risolto eseguendo il factoring del percorso di generazione.

- Le famiglie `std::list` e `std::unordered_*` usano iteratori non di debug internamente in più posizioni.

- Alcuni membri di `std::list` sono stati modificati per riutilizzare i nodi elenco laddove possibile, anziché deallocandoli e riallocandoli. Ad esempio, dato un oggetto `list<int>` che ha già una dimensione di 3, una chiamata a `assign(4, 1729)` ora sovrascrive i `int` valori nei primi tre nodi dell'elenco e alloca un nuovo nodo di elenco con il valore 1729.

- Tutte le chiamate della libreria standard a `erase(begin(), end())` sono state modificate in `clear()`.

- `std::vector` inizializza e cancella ora gli elementi in modo più efficiente in alcuni casi.

- Sono stati apportati miglioramenti a `std::variant` per renderlo più adatto all'utilità di ottimizzazione e generare così un codice migliore. Miglioramento dell'inlining del codice con `std::visit`.

### <a name="c-ide"></a>IDE C++

#### <a name="live-share-c-support"></a>Supporto di Live Share per C++

[Live Share](/visualstudio/liveshare/) ora supporta C++, consentendo agli sviluppatori che usano Visual Studio o Visual Studio Code di collaborare in tempo reale. Per ulteriori informazioni, vedere [annuncio Live Share per C++: Real-Time condivisione e collaborazione](https://devblogs.microsoft.com/cppblog/cppliveshare/)

#### <a name="template-intellisense"></a>IntelliSense per i modelli

La **barra dei modelli** usa ora l'interfaccia utente **Finestra di anteprima** invece di una finestra modale, supporta modelli annidati e immette in anticipo tutti gli argomenti predefiniti in **Finestra di anteprima**. Per altre informazioni, vedere [Template IntelliSense Improvements for Visual Studio 2019 Preview 2](https://devblogs.microsoft.com/cppblog/template-intellisense-improvements-for-visual-studio-2019-preview-2/) (Miglioramenti di IntelliSense per i modelli per Visual Studio 2019 Preview 2). Un elenco a discesa **Usati di recente** nella **Barra modelli** consente di passare rapidamente da un set precedente di argomenti di esempio a un altro.

#### <a name="new-start-window-experience"></a>Nuova esperienza di finestra iniziale

Quando si avvia l'IDE, viene visualizzata una nuova finestra di avvio. Sono disponibili opzioni per aprire i progetti recenti, clonare codice dal controllo del codice sorgente, aprire codice locale come soluzione o cartella oppure creare un nuovo progetto. La finestra di dialogo Nuovo progetto è stata anche migliorata con l'esperienza filtrabile delle funzionalità di ricerca.

#### <a name="new-names-for-some-project-templates"></a>Nuovi nomi per alcuni modelli di progetto

Sono stati modificati diversi nomi e descrizioni dei modelli di progetto per adattarli alla finestra di dialogo Nuovo progetto aggiornata.

#### <a name="various-productivity-improvements"></a>Diversi miglioramenti della produttività

Visual Studio 2019 include le funzionalità seguenti che renderanno la codifica più semplice e intuitiva:

- Correzioni rapide per:
  - Aggiungi mancante `#include`
  - Da `NULL` a `nullptr`
  - Aggiunta del punto e virgola mancante
  - Risoluzione dello spazio dei nomi o dell'ambito mancante
  - Sostituisci operandi di riferimento indiretto errato ( `*` a `&` e `&` a `*` )
- Informazioni rapide su un blocco tramite il passaggio del puntatore sulla parentesi di chiusura
- Anteprima file di codice/intestazione
- Vai a definizione in `#include` apre il file

Per altre informazioni, vedere [C++ Productivity Improvements in Visual Studio 2019 Preview 2](https://devblogs.microsoft.com/cppblog/c-productivity-improvements-in-visual-studio-2019-preview-2/) (Miglioramenti della produttività di C++ in Visual Studio 2019 Preview 2).

### <a name="cmake-support"></a>Supporto per CMake

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

### <a name="incredibuild-integration"></a>Integrazione‎ di IncrediBuild

IncrediBuild è ora incluso come componente facoltativo nel carico di lavoro **Sviluppo di applicazioni desktop con C++**. Build Monitor di IncrediBuild è completamente integrato nell'IDE di Visual Studio. Per altre informazioni, vedere [visualizzare la compilazione con il monitoraggio di compilazione di IncrediBuild e Visual Studio 2019](https://devblogs.microsoft.com/cppblog/visualize-your-build-with-incredibuilds-build-monitor-and-visual-studio-2019/).

### <a name="debugging"></a>Debug

- Per le applicazioni C++ in esecuzione in Windows, i file PDB vengono ora caricati in un processo a 64 bit separato. Questa modifica risolve un intervallo di arresti anomali causati dal debugger che ha esaurito la memoria. Ad esempio, durante il debug di applicazioni che contengono un numero elevato di moduli e file PDB.

- La ricerca è abilitata nelle finestre **Espressioni di controllo**, **Auto** e **Variabili locali**.

### <a name="windows-desktop-development-with-c"></a>Sviluppo per Windows Desktop con C++

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

### <a name="mobile-development-with-c-android-and-ios"></a>Sviluppo di applicazioni per dispositivi mobili con C++ (Android e iOS)

Per impostazione predefinita, l'esperienza Android per C++ ora fa riferimento a Android SDK 25 e Android NDK 16b.

### <a name="clangc2-platform-toolset"></a>Set di strumenti della piattaforma Clang/C2

Il componente sperimentale Clang/C2 è stato rimosso. Usare il set di strumenti MSVC per la conformità agli standard C++ completa con `/permissive-` e `/std:c++17` oppure la toolchain Clang/LLVM per Windows.

### <a name="code-analysis"></a>Analisi codice

- L'analisi codice viene ora eseguita automaticamente in background. Gli avvisi vengono visualizzati come linee a zigzag di colore verde all'interno dell'editor durante la digitazione. Per altre informazioni, vedere [In-editor code analysis in Visual Studio 2019 Preview 2](https://devblogs.microsoft.com/cppblog/in-editor-code-analysis-in-visual-studio-2019-preview-2/) (Analisi del codice nell'editor in Visual Studio 2019 Preview 2).

- Nuove regole ConcurrencyCheck sperimentali per i tipi di libreria standard ben noti dall' \<mutex> intestazione. Per altre informazioni, vedere [Concurrency Code Analysis in Visual Studio 2019](https://devblogs.microsoft.com/cppblog/concurrency-code-analysis-in-visual-studio-2019/) (Analisi del codice di concorrenza in Visual Studio 2019).

- Implementazione parziale aggiornata del [controllo dei profili di durata](https://herbsutter.com/2018/09/20/lifetime-profile-v1-0-posted/), che rileva puntatori e riferimenti inesatti. Per altre informazioni, vedere [Lifetime Profile Update in Visual Studio 2019 Preview 2](https://devblogs.microsoft.com/cppblog/lifetime-profile-update-in-visual-studio-2019-preview-2/) (Aggiornamento dei profili di durata in Visual Studio 2019 Preview 2).

- Più controlli correlati a una coroutine, tra cui [C26138](../code-quality/c26138.md), [C26810](../code-quality/c26810.md), [C26811](../code-quality/c26811.md)e la regola sperimentale [C26800](../code-quality/c26800.md). Per altre informazioni, vedere [New Code Analysis Checks in Visual Studio 2019: use-after-move and coroutine](https://devblogs.microsoft.com/cppblog/new-code-analysis-checks-in-visual-studio-2019-use-after-move-and-coroutine/) (Nuovi controlli di analisi del codice in Visual Studio 2019: use-after-move e coroutine).

### <a name="unit-testing"></a>Unit test

Il modello di progetto di test C++ gestito non è più disponibile. È possibile continuare a usare il framework di test C++ gestito nei progetti esistenti. Per i nuovi unit test, è consigliabile usare uno dei framework di test nativi per cui Visual Studio fornisce modelli (MSTest, Google Test) o il modello di progetto di test C# gestito.
