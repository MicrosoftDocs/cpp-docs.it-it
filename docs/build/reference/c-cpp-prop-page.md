---
title: Proprietà CC++ /Project (Visual Studio)
ms.date: 7/18/2019
ms.topic: article
ms.assetid: 16375038-4917-4bd0-9a2a-26343c1708b7
ms.openlocfilehash: 91edf30ef0e5f38088727c0280d2edf07cdebfa5
ms.sourcegitcommit: 7b039b5f32f6c59be6c6bb1cffafd69c3bfadd35
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/26/2019
ms.locfileid: "68537564"
---
# <a name="cc-property-pages"></a>Pagine delleC++ proprietà C/

Le pagine delle proprietà seguenti sono disponibili nelle proprietà di**configurazione** > delle**Proprietà** > del **progetto** > **C/C++** :

## <a name="cc-general-properties"></a>C/C++ proprietà generali

### <a name="additional-include-directories"></a>Directory di inclusione aggiuntive

Specifica una o più directory da aggiungere al percorso di inclusione. Usare il punto e virgola (;) come delimitatore per più percorsi. Imposta [/i (directory di inclusione aggiuntive)](i-additional-include-directories.md).

### <a name="additional-using-directories"></a>Directory #using aggiuntive

Specifica una o più directory (nomi di directory separati con un punto e virgola) in cui eseguire la ricerca per risolvere i nomi passati a una direttiva #using. Imposta [/ai](ai-specify-metadata-directories.md).

### <a name="debug-information-format"></a>Formato informazioni di debug

Specifica il tipo di informazioni di debug generate dal compilatore.  Questa operazione richiede impostazioni compatibili del linker. Imposta [/Z7,/Zi,/Zi (formato informazioni di debug)](z7-zi-zi-debug-information-format.md).

**Scelte**

- **Nessuno**: non produce informazioni di debug, quindi la compilazione può risultare più veloce.
- **Compatibile con C7** : selezionare il tipo di informazioni di debug create per il programma e se queste informazioni vengono mantenute in file oggetto (obj) o in un database di programma (PDB).
- **Database di programma** : produce un database di programma (PDB) che contiene informazioni sul tipo e informazioni di debug simboliche da usare con il debugger. Le informazioni sul debug simbolico includono i nomi e i tipi di variabili, nonché le funzioni e i numeri di riga.
- **Database di programma per modifica e continuazione** : produce un database di programma, come descritto in precedenza, in un formato che supporta la funzionalità [modifica e continuazione](/visualstudio/debugger/edit-and-continue) .

### <a name="support-just-my-code-debugging"></a>Supporto del debug Just My Code

Aggiunge il codice di supporto per l'abilitazione del debug [Just My Code](/visualstudio/debugger/just-my-code) in questa unità di compilazione. Imposta [/JMC](jmc.md).

### <a name="common-language-runtime-support"></a>Supporto Common Language RunTime

Usare il servizio di Runtime .NET.  Questa opzione non è compatibile con altre opzioni. per informazioni dettagliate, vedere la documentazione relativa alla famiglia [/CLR](clr-common-language-runtime-compilation.md) di opzioni.

**Scelte**

- **Nessun supporto Common Language Runtime** , nessun supporto Common Language Runtime
- **Supporto Common Language Runtime** : crea i metadati per l'applicazione che possono essere utilizzati da altre applicazioni CLR e consente all'applicazione di utilizzare tipi e dati nei metadati di altri componenti CLR.
- **Supporto Common Language Runtime pure MSIL** : produce un file di output solo [MSIL](/dotnet/standard/managed-code)senza codice eseguibile nativo, sebbene possa contenere tipi nativi compilati in MSIL.
- **Supporto Common Language Runtime safe MSIL** : produce un file di output verificabile e solo MSIL (nessun codice eseguibile nativo).

### <a name="consume-windows-runtime-extension"></a>Usa estensione Windows Runtime

Utilizzare le estensioni dei linguaggi di esecuzione di Windows. Imposta [/ZW](zw-windows-runtime-compilation.md).

### <a name="suppress-startup-banner"></a>Non visualizzare messaggio di avvio

Evita la visualizzazione del banner di accesso quando il compilatore viene avviato e Visualizza i messaggi informativi durante la compilazione.

### <a name="warning-level"></a>Livello avvisi

Specifica il grado di severità del controllo effettuato dal compilatore per trovare gli errori del codice. Imposta [/W0-/W4](compiler-option-warning-level.md).

**Scelte**

- **Disattiva tutti** gli avvisi. il livello 0 Disabilita tutti gli avvisi.
- **Level1** -Level 1 Visualizza avvisi gravi. Il livello 1 è il livello di avviso predefinito nella riga di comando.
- **Level2** -Level 2 Visualizza tutti gli avvisi e gli avvisi di livello 1 meno gravi del livello 1.
- **Level3** -Level 3 Visualizza tutti gli avvisi di livello 2 e tutti gli altri avvisi consigliati ai fini della produzione.
- **Level4** -Level 4 Visualizza tutti gli avvisi di livello 3 e gli avvisi informativi, che nella maggior parte dei casi possono essere ignorati in modo sicuro.
- **Abilita tutti gli avvisi**: abilita tutti gli avvisi, inclusi quelli disabilitati per impostazione predefinita.

### <a name="treat-warnings-as-errors"></a>Considera gli avvisi come errori

Considera tutti gli avvisi del compilatore come errori. Per un nuovo progetto, potrebbe essere preferibile usare [/WX](wx-treat-linker-warnings-as-errors.md) in tutte le compilazioni. la risoluzione di tutti gli avvisi garantirà il minor numero possibile di errori del codice di difficile individuazione.

### <a name="warning-version"></a>Versione di avviso

Nascondi gli avvisi introdotti dopo una versione specifica del compilatore. Imposta [/WV: XX\[. yy\[. zzzzz\]\]](wx-treat-linker-warnings-as-errors.md).

### <a name="diagnostics-format"></a>Formato di diagnostica

Abilita la diagnostica avanzata, con informazioni sulle colonne e contesto di origine nei messaggi di diagnostica.

**Scelte**

- **Accento circonflesso** : fornisce informazioni sulle colonne nel messaggio di diagnostica, nonché l'output della riga di codice sorgente pertinente con un accento circonflesso che indica la colonna che ha causato il danneggiamento.
- **Informazioni colonna** : fornisce inoltre il numero di colonna all'interno della riga in cui viene eseguita la diagnostica, ove applicabile.
- **Classica** : mantiene i messaggi di diagnostica precedenti e concisi con il numero di riga.

### <a name="sdl-checks"></a>Controlli SDL

Controlli consigliati per Security Development Lifecycle (SDL) aggiuntivi; include l'abilitazione di funzionalità aggiuntive per la generazione di codice sicuro e l'abilitazione di avvisi aggiuntivi relativi alla sicurezza come errori. Imposta [/SDL,/SDL-](sdl-enable-additional-security-checks.md).

### <a name="multi-processor-compilation"></a>Compilazione a più processori

Compilazione a più processori.

## <a name="cc-optimization-properties"></a>C/C++ proprietà di ottimizzazione

### <a name="optimization"></a>Ottimizzazione

Selezionare l'opzione per l'ottimizzazione del codice. scegliere personalizzata per utilizzare opzioni di ottimizzazione specifiche. Imposta [/od](od-disable-debug.md), [/O1,/O2](o-options-optimize-code.md).

**Scelte**

- **Personalizzato**: consente di personalizzare l'ottimizzazione.
- **Disabilitato**: disabilita l'ottimizzazione.
- **Ottimizzazione massima (predilige dimensioni)** -equivalente a/og/OS/Oy/Ob2/GS/GF/GY
- **Ottimizzazione massima (Ottimizza velocità)** -equivalente a/og/OI/OT/Oy/Ob2/GS/GF/GY
- **Ottimizzazioni (Ottimizza velocità)** -equivalente a/og/OI/OT/Oy/Ob2

### <a name="inline-function-expansion"></a>Espansione funzione inline

Consente di selezionare il livello di espansione della [funzione inline](../../cpp/inline-functions-cpp.md) per la compilazione. Imposta [/OB1,/Ob2](ob-inline-function-expansion.md).

**Scelte**

- **Default**
- **Disabled** : disattiva l'espansione inline, che è attiva per impostazione predefinita.
- **Solo __inline** : espande solo le funzioni contrassegnate come inline, __inline, __forceinline o __inline oppure, in C++ una funzione membro, definita all'interno di una dichiarazione di classe.
- **Any adatto** : espande le funzioni contrassegnate come inline o __inline e qualsiasi altra funzione scelta dal compilatore (l'espansione si verifica a discrezione del compilatore, spesso denominata incorporamento automatico).

### <a name="enable-intrinsic-functions"></a>Abilita funzioni intrinseche

Abilita le funzioni intrinseche.  L'utilizzo di funzioni intrinseche genera codice più veloce, ma possibilmente più grande. Imposta [/OI](oi-generate-intrinsic-functions.md).

### <a name="favor-size-or-speed"></a>Ottimizza dimensione o velocità

Indica se predilige le dimensioni del codice o la velocità del codice. ' Ottimizzazione globale ' deve essere attivata. Imposta [/OT,/OS](os-ot-favor-small-code-favor-fast-code.md).

**Scelte**

- **Favorisce** il codice di piccole dimensioni. Riduce al minimo le dimensioni di exe e DLL indicando al compilatore di preferire le dimensioni rispetto alla velocità.
- **Ottimizza** il codice rapido per accelerare il codice. Ottimizza la velocità di exe e DLL indicando al compilatore di preferire la velocità rispetto alla dimensione. (Impostazione predefinita).
- Nessuna delle dimensioni né ottimizzazione della velocità.

### <a name="omit-frame-pointers"></a>Omette i puntatori ai frame

Disabilita la creazione di puntatori ai frame nello stack di chiamate.

### <a name="enable-fiber-safe-optimizations"></a>Abilita ottimizzazioni indipendenti da Fiber

Abilita l'ottimizzazione dello spazio di memoria quando si usa Fiber e l'accesso all'archiviazione locale di thread. Imposta [/gt](gt-support-fiber-safe-thread-local-storage.md).

### <a name="whole-program-optimization"></a>Con ottimizzazione intero programma

Abilita le ottimizzazioni tra i moduli rimandando la generazione del codice alla fase di collegamento. richiede che l'opzione del linker ' generazione del codice in fase di collegamento ' sia attivata. Imposta [/GL](gl-whole-program-optimization.md).

## <a name="cc-preprocessor-properties"></a>Proprietà diC++ C/preprocessore

### <a name="preprocessor-definitions"></a>Definizioni del preprocessore

Definisce i simboli di pre-elaborazione per il file di origine.

### <a name="undefine-preprocessor-definitions"></a>Rimuovi definizioni per il preprocessore

Rimuove una o più definizioni per il preprocessore. Imposta [/u](u-u-undefine-symbols.md).

### <a name="undefine-all-preprocessor-definitions"></a>Rimuovi tutte le definizioni per il preprocessore

Rimuove tutti i valori precedentemente definiti per il preprocessore. Imposta [/u](u-u-undefine-symbols.md).

### <a name="ignore-standard-include-paths"></a>Ignora percorsi di inclusione standard

Impedisce al compilatore di cercare i file di inclusione nelle directory specificate nelle variabili di ambiente INCLUDE.

### <a name="preprocess-to-a-file"></a>Pre-elabora in un file

Pre-elabora i file C++ di origine C e e scrive l'output pre-elaborato in un file. Questa opzione Elimina la compilazione, pertanto non produce un file obj.

### <a name="preprocess-suppress-line-numbers"></a>Preprocesso-disattiva numeri di riga

Pre-elabora senza direttive #line.

### <a name="keep-comments"></a>Mantieni commenti

Elimina la rimozione di commenti dal codice sorgente. richiede l'impostazione di una delle opzioni di pre-elaborazione. Imposta [/c](c-preserve-comments-during-preprocessing.md).

## <a name="cc-code-generation-properties"></a>Proprietà diC++ generazione del codice C/

### <a name="enable-string-pooling"></a>Abilita pool di stringhe

Consente al compilatore di creare una sola copia di sola lettura delle stringhe identiche nell'immagine del programma e in memoria durante l'esecuzione, ottenendo programmi più piccoli, un'ottimizzazione denominata pool di stringhe. [/O1,/O2](o-options-optimize-code.md)e [/Zi](z7-zi-zi-debug-information-format.md) impostano automaticamente l'opzione [/GF](gf-eliminate-duplicate-strings.md) .

### <a name="enable-minimal-rebuild"></a>Abilita ricompilazione minima

Abilita la ricompilazione minima, che determina se è necessario ricompilare i file di origine C++ che includono modifiche alle definizioni delle classi C++ archiviate nei file di intestazione con estensione h.

### <a name="enable-c-exceptions"></a>Abilita eccezioni C++

Specifica il modello di gestione delle eccezioni che deve essere usato dal compilatore.

**Scelte**

- **Sì con eccezioni SEH** : il modello di gestione delle eccezioni che rileva le eccezioni asincrone (strutturate)C++e sincrone (). Imposta [/EHA](eh-exception-handling-model.md).
- **Sì** , il modello di gestione delle eccezioni che intercetta C++ solo le eccezioni e indica al compilatore di presumere che le funzioni extern C non C++ generino mai un'eccezione. Imposta [/EHsc](eh-exception-handling-model.md).
- **Sì con funzioni extern c** : il modello di gestione delle eccezioni che intercetta C++ solo le eccezioni e indica al compilatore di supporre che le funzioni extern c generino un'eccezione. Imposta [/EHS](eh-exception-handling-model.md).
- **No** , nessuna gestione delle eccezioni.

### <a name="smaller-type-check"></a>Controllo del tipo più piccolo

Consente di controllare la conversione in tipi più piccoli, incompatibile con qualsiasi tipo di ottimizzazione diverso da debug. Imposta [/RTCC](rtc-run-time-error-checks.md).

### <a name="basic-runtime-checks"></a>Controlli di runtime di base

Eseguire i controlli degli errori di runtime di base, incompatibili con qualsiasi tipo di ottimizzazione diverso da debug. Imposta [/RTCs,/RTCu,/RTC1](rtc-run-time-error-checks.md).

**Scelte**

- **Stack frame** : Abilita il controllo degli errori in fase di esecuzione stack frame.
- **Variabili** non inizializzate: segnala quando viene usata una variabile senza che sia stata inizializzata.
- **Both (/RTC1, equiv. to/RTCsu)** -equivalente a/RTCsu.
- **Default** : controlli runtime predefiniti.

### <a name="runtime-library"></a>Libreria di runtime

Specifica la libreria di runtime per il collegamento. Imposta [/mt,/MTD,/MD,/MDD](md-mt-ld-use-run-time-library.md).

**Scelte**

- Multithread **: fa** in modo che l'applicazione usi la versione statica multithread della libreria di Runtime.
- **Debug** multithread: definisce _ debug e _MT. Fa inoltre in modo che il compilatore inserisca il nome della libreria LIBCMTD.lib nel file .obj affinché il linker utilizzi LIBCMTD.lib per risolvere i simboli esterni.
- **Dll** multithread: fa in modo che l'applicazione usi la versione specifica MULTITHREAD e dll della libreria di Runtime. Definisce _MT e _DLL e fa inoltre in modo che il compilatore inserisca il nome della libreria MSVCRT.lib nel file con estensione obj.
- **Dll di debug** multithread: definisce _ debug, _MT e _DLL e fa in modo che l'applicazione usi la versione di debug della libreria di runtime multithread-and-specific per la dll. Fa inoltre in modo che il compilatore inserisca il nome della libreria MSVCRTD.lib nel file .obj.

### <a name="struct-member-alignment"></a>Allineamento membri struct

Specifica i limiti di 1, 2, 4 o 8 byte per l'allineamento dei membri struct. Imposta [/ZP](zp-struct-member-alignment.md).

**Scelte**

- **1 byte** comprime le strutture sui limiti di 1 byte. Uguale a/ZP.
- **2 byte** : comprime le strutture nei limiti di 2 byte.
- **4** strutture di byte in blocchi su limiti di 4 byte.
- **8 byte** : comprime le strutture nei limiti di 8 byte (impostazione predefinita).
- **16 byte** : comprime le strutture nei limiti di 16 byte.
- Impostazioni **di allineamento** predefinite.

### <a name="security-check"></a>Controllo di sicurezza

Il controllo di sicurezza facilita il rilevamento di sovraccarichi del buffer di stack, un attacco comunemente tentato alla sicurezza di un programma. 

**Scelte**

- **Disabilita controllo di sicurezza**: consente di disabilitare il controllo di sicurezza. Imposta [/GS-](gs-buffer-security-check.md).
- **Abilita controllo di sicurezza**: consente di abilitare il controllo di sicurezza. Imposta [/GS](gs-buffer-security-check.md).

### <a name="control-flow-guard"></a>Guard flusso di controllo

Guard Security Check consente di rilevare i tentativi di invio a un blocco di codice non valido. 

**Scelte**

- **Sì** , Abilita il controllo di sicurezza con i set di Guard [/Guard: CF](guard-enable-control-flow-guard.md).
- **No**

### <a name="enable-function-level-linking"></a>Abilita collegamento a livello di funzione

Consente al compilatore di assemblare le singole funzioni sotto forma di funzioni incluse nel pacchetto (COMDAT). Impostazione necessaria per le operazioni di modifica e continuazione. Imposta [/Gy](gy-enable-function-level-linking.md).

### <a name="enable-parallel-code-generation"></a>Abilitare la generazione di codice in parallelo

Consente al compilatore di generare codice parallelo per cicli identificati tramite #pragma loop (\[hint_parallel (n)]) quando è abilitata l'ottimizzazione.

### <a name="enable-enhanced-instruction-set"></a>Abilita set di istruzioni avanzate

Consente di utilizzare le istruzioni disponibili nei processori che supportano set di istruzioni avanzate, ad esempio i miglioramenti SSE, SSE2, AVX e AVX2 a IA-32; AVX e AVX2 a x64. Attualmente **/Arch: SSE** e **/Arch: SSE2** sono disponibili solo quando si compila per l'architettura x86. Se non si specifica alcuna opzione, il compilatore utilizzerà le istruzioni disponibili nei processori che supportano SSE2. L'uso di istruzioni avanzate può essere disabilitato con/Arch: IA32. Per altre informazioni, vedere [/Arch (x86)](arch-x86.md), [/Arch (x64)](arch-x64.md) e [/Arch (ARM)](arch-arm.md) .

**Scelte**

- **Streaming SIMD Extensions** Streaming SIMD Extensions. Imposta **/Arch: SSE**
- **Streaming SIMD Extensions 2** -Streaming SIMD Extensions 2. Imposta **/Arch: SSE2**
- **Advanced Vector Extensions** -Advanced Vector Extensions. Imposta **/Arch: AVX**
- **Advanced Vector Extensions 2** -Advanced Vector Extensions 2. Imposta **/Arch: AVX2**
- **Nessuna istruzione avanzata** : nessuna istruzione avanzata. Imposta **/Arch: IA32**
- **Non impostato** : non impostato.

### <a name="floating-point-model"></a>Modello a virgola mobile

Imposta il modello a virgola mobile. Imposta [/FP: precise,/FP: Strict,/FP: Fast](fp-specify-floating-point-behavior.md).

**Scelte**

- **Preciso** : valore predefinito. Migliora la coerenza dei test a virgola mobile per verificarne l'uguaglianza e la disuguaglianza.
- **Strict** : modello a virgola mobile più restrittivo. /FP: Strict causa la disattivazione di fp_contract e la fenv_access. /FP: except è implicito e può essere disabilitato specificando in modo esplicito/FP: except-. Se usato con/FP: except-,/FP: Strict applica una semantica a virgola mobile rigorosa, ma senza rispettare gli eventi eccezionali.
- **Fast** : crea il codice più veloce nella maggior parte dei casi.

### <a name="enable-floating-point-exceptions"></a>Abilita eccezioni a virgola mobile

Modello di eccezione a virgola mobile affidabile. Vengono generate eccezioni immediatamente dopo l'attivazione.  Imposta [/FP: except](fp-specify-floating-point-behavior.md).

### <a name="create-hotpatchable-image"></a>Crea immagine Hotpatchable

Quando patch a caldo è on, il compilatore garantisce che la prima istruzione di ogni funzione sia di due byte, operazione necessaria per l'applicazione di patch a caldo.  Imposta [/hotpatch](hotpatch-create-hotpatchable-image.md).

### <a name="spectre-mitigation"></a>Mitigazione Spectre

Mitigazioni Spectre per CVE 2017-5753. Imposta [/Qspectre](qspectre.md).

**Scelte**

- **Enabled** : Abilita la funzionalità di mitigazione Spectre per CVE 2017-5753
- **Disabled** : non impostato.

## <a name="cc-language-properties"></a>Proprietà CC++ /Language

### <a name="disable-language-extensions"></a>Disabilitare le estensioni del linguaggio

Disabilita o Abilita le estensioni del linguaggio. Imposta [/za](za-ze-disable-language-extensions.md).

### <a name="conformance-mode"></a>Modalità di conformità

Abilita o Disabilita la modalità di conformità. Imposta [/permissive-](permissive-standards-conformance.md).

### <a name="treat-wchart-as-built-in-type"></a>Considera WChar_t come tipo incorporato

Se specificato, il tipo wchar_t diventa un tipo nativo che esegue il mapping a __wchar_t nello stesso modo in cui viene eseguito il mapping a __int16. [/Zc: wchar_t](zc-wchar-t-wchar-t-is-native-type.md) è on per impostazione predefinita.

### <a name="force-conformance-in-for-loop-scope"></a>Imponi conformità nell'ambito di un ciclo for

Utilizzato per implementare il C++ comportamento standard per i cicli dell'istruzione for con le estensioni Microsoft. Imposta [/za,/ze (Disabilita le estensioni del linguaggio](za-ze-disable-language-extensions.md)). L'opzione[/Zc:forScope](zc-forscope-force-conformance-in-for-loop-scope.md) è abilitata per impostazione predefinita.

### <a name="remove-unreferenced-code-and-data"></a>Rimuovi codice e dati senza riferimenti

Quando specificato, il compilatore non genera più informazioni sui simboli per i dati e il codice senza riferimenti.

### <a name="enforce-type-conversion-rules"></a>Applicare regole di conversione dei tipi

Utilizzato per identificare un tipo di riferimento rvalue come risultato di un'operazione cast in base allo standard C++ 11.

### <a name="enable-run-time-type-information"></a>Abilita informazioni sui tipi in fase di esecuzione

Aggiunge codice per il controllo dei tipi di oggetto C++ in fase di esecuzione (informazioni sui tipi in fase di esecuzione). Imposta [/gr,/gr-](gr-enable-run-time-type-information.md).

### <a name="open-mp-support"></a>Apri supporto MP

Abilitare le estensioni del linguaggio OpenMP 2,0. Imposta [/OpenMP](openmp-enable-openmp-2-0-support.md).

### <a name="c-language-standard"></a>Standard del linguaggio C++

Determina lo C++ standard del linguaggio applicato dal compilatore. Quando possibile, è consigliabile usare la versione più recente. Imposta [/std: c++ 14,/std: c++ 17,/std: c + + Latest](std-specify-language-standard-version.md).

**Scelte**

- **Default**
- **Standard C++ 14 ISO**
- **Standard C++ 17 ISO**
- **Anteprima: funzionalità della bozza di C++ lavoro più recente**

### <a name="enable-c-modules-experimental"></a>Abilita C++ moduli (sperimentale)

Supporto sperimentale per C++ i moduli TS e moduli di libreria standard.

## <a name="cc-precompiled-headers-properties"></a>Proprietà delleC++ intestazioni C/precompilate

### <a name="precompiled-header"></a>Intestazione precompilata

Crea/Usa intestazione precompilata: Abilita la creazione o l'uso di un'intestazione precompilata durante la compilazione. Imposta [/YC](yc-create-precompiled-header-file.md), [/Yu](yu-use-precompiled-header-file.md).

**Scelte**

- **Create** : indica al compilatore di creare un file di intestazione precompilata (PCH) che rappresenta lo stato della compilazione in un determinato punto.
- **Use** : indica al compilatore di usare un file di intestazione precompilata (PCH) esistente nella compilazione corrente.
- **Non vengono usate intestazioni** precompilate, senza intestazioni precompilate.

### <a name="precompiled-header-file"></a>File di intestazione precompilato

Specifica il nome del file di intestazione da utilizzare quando si crea o si utilizza un file di intestazione precompilato. Imposta [/YC](yc-create-precompiled-header-file.md), [/Yu]] (Yu-use-precompilated-header-file.MD).

### <a name="precompiled-header-output-file"></a>File di output intestazione precompilata

Specifica il percorso e/o il nome del file di intestazione precompilato generato. Imposta [/FP](fp-name-dot-pch-file.md).

## <a name="cc-output-files-properties"></a>Proprietà deiC++ file di output C/

### <a name="expand-attributed-source"></a>Espandi origine con attributi

Crea un file di listato con attributi espansi inseriti nel file di origine. Imposta [/FX](fx-merge-injected-code.md).

### <a name="assembler-output"></a>Output assembler

Specifica il contenuto del file di output in linguaggio assembly. Imposta [/fa,/fac,/FAS,/FACS](fa-fa-listing-file.md).

**Scelte**

- **Nessun** elenco.
- **Elenco solo assembly** -codice assembly; ASM
- **Assembly con** codice macchina virtuale-macchina e codice assembly; Cod
- **Assembly con codice sorgente** -codice sorgente e assembly; ASM
- **Assembly, codice macchina e origine** -assembly, codice macchina e codice sorgente; Cod

### <a name="use-unicode-for-assembler-listing"></a>USA Unicode per l'elenco di assembler

Determina la creazione del file di output in formato UTF-8.

### <a name="asm-list-location"></a>Percorso elenco ASM

Specifica il percorso relativo e/o il nome per il file di listato ASM; può essere un nome di file o di directory. Imposta [/fa](fa-fa-listing-file.md).

### <a name="object-file-name"></a>Nome file oggetto

Consente di specificare un nome usato per eseguire l'override del nome del file oggetto predefinito. Può essere un nome di file o di directory. Imposta [/fo](fo-object-file-name.md).

### <a name="program-database-file-name"></a>Nome file del database di programma

Specifica un nome per un file PDB generato dal compilatore. specifica anche il nome di base per il file IDB richiesto generato dal compilatore. può essere un nome di file o di directory. Imposta [/FD](fd-program-database-file-name.md).

### <a name="generate-xml-documentation-files"></a>Genera file di documentazione XML

Specifica che il compilatore deve generare i file di commento della documentazione XML (. XDC). Imposta [/doc](doc-process-documentation-comments-c-cpp.md).

### <a name="xml-documentation-file-name"></a>Nome file di documentazione XML

Specifica il nome dei file di documentazione XML generati. può essere un nome di file o di directory. Imposta [/doc:\<Name >](doc-process-documentation-comments-c-cpp.md).

## <a name="cc-browse-information-properties"></a>Proprietà delleC++ informazioni di visualizzazione C/

### <a name="enable-browse-information"></a>Abilita informazioni di visualizzazione

Abilita informazioni di visualizzazione: Specifica il livello delle informazioni di visualizzazione nel file BSC. Imposta [/fr](fr-fr-create-dot-sbr-file.md).

### <a name="browse-information-file"></a>File di informazioni di visualizzazione

Sfoglia file: Specifica il nome facoltativo per il file di informazioni del browser. Imposta [>\<nome/fr](fr-fr-create-dot-sbr-file.md).

## <a name="cc-advanced-properties"></a>Proprietà CC++ /avanzate

### <a name="calling-convention"></a>Convenzione di chiamata

Selezionare la convenzione di chiamata predefinita per l'applicazione (può essere sottoposta a override dalla funzione). Imposta [/GD,/gr,/GZ,/Gv](gd-gr-gv-gz-calling-convention.md).

**Scelte**

- **__cdecl** : specifica la convenzione di chiamata __cdecl per tutte le C++ funzioni ad eccezione delle funzioni membro e delle funzioni contrassegnate come stdcall o __fastcall.
- **__fastcall** : specifica la convenzione di chiamata __fastcall per tutte le C++ funzioni ad eccezione delle funzioni membro e delle funzioni contrassegnate come __cdecl o stdcall. Tutte le funzioni __fastcall devono avere prototipi.
- **stdcall** : specifica la convenzione di chiamata stdcall per tutte le C++ funzioni ad eccezione delle funzioni membro e delle funzioni contrassegnate come __cdecl o __fastcall. Tutte le funzioni stdcall devono avere prototipi.
- **__vectorcall** : specifica la convenzione di chiamata __vectorcall per tutte le C++ funzioni ad eccezione delle funzioni membro e delle funzioni contrassegnate come __cdecl, __fastcall o stdcall. Tutte le funzioni __vectorcall devono avere prototipi.

### <a name="compile-as"></a>Compila come

Specifica il linguaggio di compilazione per i file con estensione c e cpp. Imposta [/TC,/TP](tc-tp-tc-tp-specify-source-file-type.md).

**Scelte**

- **Predefinita**: impostazione predefinita.
- **Compila come codice C**: consente di compilare come codice C.
- **Compila come codice C++** : consente di compilare come codice C++.

### <a name="disable-specific-warnings"></a>Disabilita avvisi specifici

Disabilitare i numeri di avviso desiderati; inserire i numeri in un elenco delimitato da punto e virgola. Imposta [/WD.\<NUM >](compiler-option-warning-level.md).

### <a name="forced-include-file"></a>File di inclusione forzata

Uno o più file di inclusione il cui uso è forzato. Imposta [>\<nome/Fi](fi-name-forced-include-file.md).

### <a name="forced-using-file"></a>File #using forzato

Specifica uno o più file di #using forzati. Imposta [>\<nome/fu](fu-name-forced-hash-using-file.md).

### <a name="show-includes"></a>Mostra inclusioni

Indica al compilatore di generare un elenco dei file di inclusione. Imposta [/showIncludes](showincludes-list-include-files.md).

### <a name="use-full-paths"></a>USA percorsi completi

Usare percorsi completi nei messaggi di diagnostica. Imposta [/FC](fc-full-path-of-source-code-file-in-diagnostics.md).

### <a name="omit-default-library-name"></a>Omette il nome della libreria predefinita

Non includere i nomi delle librerie predefinite nei file obj. Imposta [/ZL](zl-omit-default-library-name.md).

### <a name="internal-compiler-error-reporting"></a>Segnalazione errori interni del compilatore

Specifica la modalità di segnalazione degli errori interni degli strumenti a Microsoft.  Il valore predefinito nell'IDE è prompt.  Il valore predefinito dalle compilazioni della riga di comando è Queue. Imposta [/errorreport:\[method]] (errorreport-report-Internal-Compiler-Errors.MD).

**Scelte**

- Non **inviare report** : i report sugli errori interni del compilatore non verranno raccolti né inviati a Microsoft.
- **Richiedi immediatamente** : richiede di inviare un report quando si riceve un errore interno del compilatore.
- **Coda per accesso successivo** : Accoda la segnalazione errori. Quando si esegue l'accesso con privilegi di amministratore, viene visualizzata una finestra popup che consente di segnalare eventuali errori dall'ultimo accesso. non verrà richiesto di inviare i report per gli errori più di una volta ogni tre giorni. Queue è l'impostazione predefinita quando si compila un'applicazione dalla riga di comando.
- **Invia automaticamente** : Invia automaticamente i report degli errori interni del compilatore a Microsoft. Per abilitare questa opzione, è prima di tutto necessario accettare i criteri di raccolta dati di Microsoft% 27s. La prima volta che si specifica/errorReport: Send in un computer, un messaggio del compilatore fa riferimento a un sito Web che contiene i criteri di raccolta dati Microsoft% 27s.

### <a name="treat-specific-warnings-as-errors"></a>Considera gli avvisi specifici come errori

Considera l'avviso del compilatore specifico come un errore dove n è un avviso del compilatore.

### <a name="additional-options"></a>Opzioni aggiuntive

Opzioni aggiuntive.
