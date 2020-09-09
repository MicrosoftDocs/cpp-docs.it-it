---
title: Proprietà del progetto C/C++ (Visual Studio)
description: Guida di riferimento alle proprietà delle pagine delle proprietà del progetto Microsoft C/C++ in Visual Studio.
ms.date: 09/03/2020
ms.topic: article
ms.assetid: 16375038-4917-4bd0-9a2a-26343c1708b7
ms.openlocfilehash: a96400e27b48b734d4002d9cef13fd52f9ccc7a5
ms.sourcegitcommit: 0df2b7ab4e81284c5248e4584767591dcc1950c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/09/2020
ms.locfileid: "89609175"
---
# <a name="cc-property-pages"></a>Pagine delle proprietà C/C++

Le pagine delle proprietà seguenti sono disponibili nelle proprietà di configurazione delle proprietà del **progetto**  >  **Properties**  >  **Configuration Properties**  >  **C/C++**:

## <a name="cc-general-properties"></a>Proprietà generali C/C++

### <a name="additional-include-directories"></a>Directory di inclusione aggiuntive

Specifica una o più directory da aggiungere al percorso di inclusione. Usare il punto e virgola (;) come delimitatore per più percorsi. Imposta [ `/I` (directory di inclusione aggiuntive)](i-additional-include-directories.md).

### <a name="additional-using-directories"></a>Directory #using aggiuntive

Specifica una o più directory (nomi di directory separati con un punto e virgola) in cui eseguire la ricerca per risolvere i nomi passati a una direttiva #using. Imposta [`/AI`](ai-specify-metadata-directories.md) .

### <a name="debug-information-format"></a>Formato informazioni di debug

Specifica il tipo di informazioni di debug generate dal compilatore.  Questa proprietà richiede impostazioni compatibili del linker. Imposta [ `/Z7` , `/Zi` , `/ZI` (formato informazioni di debug)](z7-zi-zi-debug-information-format.md).

#### <a name="choices"></a>Opzioni

- **Nessuno**: non produce informazioni di debug, quindi la compilazione può risultare più veloce.
- **Compatibile con C7** : selezionare il tipo di informazioni di debug create per il programma e se queste informazioni vengono mantenute in file oggetto (obj) o in un database di programma (PDB).
- **Database di programma** : produce un database di programma (PDB) che contiene informazioni sul tipo e informazioni di debug simboliche da usare con il debugger. Le informazioni sul debug simbolico includono i nomi e i tipi di variabili e funzioni e i numeri di riga.
- **Database di programma per modifica e continuazione** : produce un database di programma, come descritto in precedenza, in un formato che supporta la funzionalità [modifica e continuazione](/visualstudio/debugger/edit-and-continue) .

### <a name="support-just-my-code-debugging"></a>Supporto del debug Just My Code

Aggiunge il codice di supporto per l'abilitazione del debug [Just My Code](/visualstudio/debugger/just-my-code) in questa unità di compilazione. Imposta [`/JMC`](jmc.md) .

### <a name="common-language-runtime-support"></a>Supporto Common Language RunTime

Usare il servizio di Runtime .NET.  Questa opzione non è compatibile con altre opzioni. per informazioni dettagliate, vedere la documentazione relativa alla [`/clr`](clr-common-language-runtime-compilation.md) famiglia di opzioni.

#### <a name="choices"></a>Opzioni

- **Nessun supporto Common Language Runtime** , nessun supporto Common Language Runtime
- **Supporto Common Language Runtime** : crea i metadati per l'applicazione che possono essere usati da altre applicazioni CLR. Consente inoltre all'applicazione di utilizzare tipi e dati nei metadati di altri componenti CLR.
- **Supporto Common Language Runtime pure MSIL** : produce un file di output solo [MSIL](/dotnet/standard/managed-code)senza codice eseguibile nativo, sebbene possa contenere tipi nativi compilati in MSIL.
- **Supporto Common Language Runtime safe MSIL** : produce un file di output verificabile e solo MSIL (nessun codice eseguibile nativo).

### <a name="consume-windows-runtime-extension"></a>Usa estensione Windows Runtime

Utilizzare le estensioni dei linguaggi di esecuzione di Windows. Imposta [`/ZW`](zw-windows-runtime-compilation.md) .

### <a name="suppress-startup-banner"></a>Non visualizzare messaggio di avvio

Evita la visualizzazione del banner di accesso quando il compilatore viene avviato e Visualizza i messaggi informativi durante la compilazione.

### <a name="warning-level"></a>Livello avvisi

Specifica il grado di severità del controllo effettuato dal compilatore per trovare gli errori del codice. Imposta [`/W0` - `/W4`](compiler-option-warning-level.md) .

#### <a name="choices"></a>Opzioni

- **Disattiva tutti** gli avvisi. il livello 0 Disabilita tutti gli avvisi.
- **Level1** -Level 1 Visualizza avvisi gravi. Il livello 1 è il livello di avviso predefinito nella riga di comando.
- **Level2** -Level 2 Visualizza tutti gli avvisi e gli avvisi di livello 1 meno gravi del livello 1.
- **Level3** -Level 3 Visualizza tutti gli avvisi di livello 2 e tutti gli altri avvisi consigliati ai fini della produzione.
- **Level4** -Level 4 Visualizza tutti gli avvisi di livello 3 e gli avvisi informativi, che nella maggior parte dei casi possono essere ignorati in modo sicuro.
- **EnableAllWarnings** -Abilita tutti gli avvisi, inclusi quelli disabilitati per impostazione predefinita.

### <a name="treat-warnings-as-errors"></a>Considera gli avvisi come errori

Considera gli avvisi del compilatore come errori. Per un nuovo progetto, può essere preferibile usare [`/WX`](wx-treat-linker-warnings-as-errors.md) in ogni compilazione. Risolvere tutti gli avvisi per ridurre al minimo i difetti del codice di difficile individuazione.

### <a name="warning-version"></a>Versione di avviso

Nascondi gli avvisi introdotti dopo una versione specifica del compilatore. Imposta [`/Wv:xx[.yy[.zzzzz]]`](wx-treat-linker-warnings-as-errors.md) .

### <a name="diagnostics-format"></a>Formato di diagnostica

Abilita la diagnostica avanzata, con informazioni sulle colonne e contesto di origine nei messaggi di diagnostica.

#### <a name="choices"></a>Opzioni

- **Accento circonflesso** : fornisce informazioni sulle colonne nel messaggio di diagnostica. E restituisce la riga di codice sorgente pertinente con un accento circonflesso che indica la colonna che causa il danneggiamento.
- **Informazioni colonna** : fornisce inoltre il numero di colonna all'interno della riga in cui viene eseguita la diagnostica, ove applicabile.
- **Classica** : restituisce solo i messaggi di diagnostica precedenti e concisi con il numero di riga.

### <a name="sdl-checks"></a>Controlli SDL

Controlli consigliati per Security Development Lifecycle (SDL) aggiuntivi; include l'abilitazione di funzionalità aggiuntive per la generazione di codice sicuro e l'abilitazione di avvisi aggiuntivi relativi alla sicurezza come errori. Imposta [ `/sdl` . `/sdl-` ](sdl-enable-additional-security-checks.md)

### <a name="multi-processor-compilation"></a>Compilazione a più processori

Compilazione a più processori.

## <a name="cc-optimization-properties"></a>Proprietà di ottimizzazione C/C++

### <a name="optimization"></a>Optimization

Selezionare l'opzione per l'ottimizzazione del codice. scegliere personalizzata per utilizzare opzioni di ottimizzazione specifiche. Imposta [`/Od`](od-disable-debug.md) , [ `/O1` , `/O2` ](o-options-optimize-code.md).

#### <a name="choices"></a>Opzioni

- **Personalizzato**: consente di personalizzare l'ottimizzazione.
- **Disabilitato**: disabilita l'ottimizzazione.
- **Ottimizzazione massima (predilige dimensioni)** -equivalente a **`/Os /Oy /Ob2 /Gs /GF /Gy`**
- **Ottimizzazione massima (Ottimizza velocità)** -equivalente a **`/Oi /Ot /Oy /Ob2 /Gs /GF /Gy`**
- **Ottimizzazioni (Ottimizza velocità)** -equivalente a **`/Oi /Ot /Oy /Ob2`**

### <a name="inline-function-expansion"></a>Espansione funzione inline

Consente di selezionare il livello di espansione della [funzione inline](../../cpp/inline-functions-cpp.md) per la compilazione. Imposta [`/Ob`](ob-inline-function-expansion.md) .

#### <a name="choices"></a>Opzioni

- **Default**
- **Disabled** : disattiva l'espansione inline, che è attiva per impostazione predefinita.
- **Solo __inline** -espande solo le funzioni contrassegnate come **`inline`** , **`__forceinline`** o **`__inline`** . In alternativa, in una funzione membro C++, definita all'interno di una dichiarazione di classe.
- **Any adatto** : espande le funzioni contrassegnate come **`inline`** o **`__inline`** e qualsiasi altra funzione scelta dal compilatore. L'espansione viene eseguita a discrezione del compilatore, spesso definita *incorporamento automatico*.

### <a name="enable-intrinsic-functions"></a>Abilita funzioni intrinseche

Abilita le funzioni intrinseche.  L'utilizzo di funzioni intrinseche genera codice più veloce, ma possibilmente più grande. Imposta [`/Oi`](oi-generate-intrinsic-functions.md) .

### <a name="favor-size-or-speed"></a>Ottimizza dimensione o velocità

Indica se predilige le dimensioni del codice o la velocità del codice. ' Ottimizzazione globale ' deve essere attivata. Imposta [ `/Ot` . `/Os` ](os-ot-favor-small-code-favor-fast-code.md)

#### <a name="choices"></a>Opzioni

- **Ottimizza il codice piccolo** : riduce al minimo le dimensioni di exe e DLL indicando al compilatore di preferire le dimensioni rispetto alla velocità.
- Ottimizza la velocità del **codice** : ottimizza la velocità di exe e DLL indicando al compilatore di preferire la velocità rispetto alla dimensione. (Questo valore è l'impostazione predefinita).
- **Nessuna delle** dimensioni e ottimizzazione della velocità.

### <a name="omit-frame-pointers"></a>Omette i puntatori ai frame

Disabilita la creazione di puntatori ai frame nello stack di chiamate.

### <a name="enable-fiber-safe-optimizations"></a>Abilita ottimizzazioni indipendenti da Fiber

Abilita l'ottimizzazione dello spazio di memoria quando si usa Fiber e l'accesso all'archiviazione locale di thread. Imposta [`/GT`](gt-support-fiber-safe-thread-local-storage.md) .

### <a name="whole-program-optimization"></a>Con ottimizzazione intero programma

Abilita le ottimizzazioni tra i moduli rimandando la generazione del codice alla fase di collegamento. Richiede la **generazione del codice in fase di collegamento**dell'opzione del linker. Imposta [`/GL`](gl-whole-program-optimization.md) .

## <a name="cc-preprocessor-properties"></a>Proprietà del preprocessore C/C++

### <a name="preprocessor-definitions"></a>Definizioni del preprocessore

Definisce i simboli di pre-elaborazione per il file origine.

### <a name="undefine-preprocessor-definitions"></a>Rimuovi definizioni per il preprocessore

Rimuove una o più definizioni per il preprocessore. Imposta [`/U`](u-u-undefine-symbols.md) .

### <a name="undefine-all-preprocessor-definitions"></a>Rimuovi tutte le definizioni per il preprocessore

Rimuove tutti i valori precedentemente definiti per il preprocessore. Imposta [`/u`](u-u-undefine-symbols.md) .

### <a name="ignore-standard-include-paths"></a>Ignora percorsi di inclusione standard

Impedisce al compilatore di cercare i file di inclusione nelle directory specificate nelle variabili di ambiente INCLUDE.

### <a name="preprocess-to-a-file"></a>Pre-elabora in un file

Pre-elabora i file di origine C e C++ e scrive l'output pre-elaborato in un file. Questa opzione Elimina la compilazione e non genera un *`.obj`* file.

### <a name="preprocess-suppress-line-numbers"></a>Preprocesso-disattiva numeri di riga

Pre-elabora senza direttive #line.

### <a name="keep-comments"></a>Mantieni commenti

Elimina la rimozione di commenti dal codice sorgente. richiede l'impostazione di almeno una delle opzioni di **pre-elaborazione** . Imposta [`/C`](c-preserve-comments-during-preprocessing.md) .

## <a name="cc-code-generation-properties"></a>Proprietà di generazione del codice C/C++

### <a name="enable-string-pooling"></a>Abilita pool di stringhe

Il compilatore crea solo una copia di sola lettura delle stringhe identiche nell'immagine del programma. Produce programmi più piccoli, un'ottimizzazione denominata *pooling di stringhe*. [ `/O1` , `/O2` ](o-options-optimize-code.md)e [`/ZI`](z7-zi-zi-debug-information-format.md) impostano automaticamente l' [`/GF`](gf-eliminate-duplicate-strings.md) opzione.

### <a name="enable-minimal-rebuild"></a>Abilita ricompilazione minima

Abilita la ricompilazione minima, che determina se ricompilare i file di origine C++ che includono modifiche alle definizioni delle classi C++, archiviate nei file di intestazione *`.h`* .

### <a name="enable-c-exceptions"></a>Abilita eccezioni C++

Specifica il modello di gestione delle eccezioni che deve essere usato dal compilatore.

#### <a name="choices"></a>Opzioni

- **Sì con eccezioni SEH** : il modello di gestione delle eccezioni che rileva le eccezioni asincrone (strutturate) e sincrone (C++). Imposta [`/EHa`](eh-exception-handling-model.md) .
- **Sì** , il modello di gestione delle eccezioni che intercetta solo le eccezioni c++ e indica al compilatore di supporre che le funzioni extern C non generino mai un'eccezione c++. Imposta [`/EHsc`](eh-exception-handling-model.md) .
- **Sì con funzioni extern c** : il modello di gestione delle eccezioni che intercetta solo le eccezioni C++ e indica al compilatore di presumere che le funzioni extern c generino un'eccezione. Imposta [`/EHs`](eh-exception-handling-model.md) .
- **No** , nessuna gestione delle eccezioni.

### <a name="smaller-type-check"></a>Controllo del tipo più piccolo

Consente di controllare la conversione in tipi più piccoli, incompatibile con qualsiasi tipo di ottimizzazione diverso da debug. Imposta [`/RTCc`](rtc-run-time-error-checks.md) .

### <a name="basic-runtime-checks"></a>Controlli di runtime di base

Abilitare i controlli degli errori di runtime di base, incompatibili con qualsiasi tipo di ottimizzazione diverso da debug. Imposta [ `/RTCs` , `/RTCu` , `/RTC1` ](rtc-run-time-error-checks.md).

#### <a name="choices"></a>Opzioni

- **Stack frame** : Abilita il controllo degli errori in fase di esecuzione stack frame.
- **Variabili non inizializzate** : segnala quando viene usata una variabile senza che sia stata inizializzata.
- **Both (/RTC1, equiv. to/RTCsu)** -equivalente a **`/RTCsu`** .
- **Default** : controlli runtime predefiniti.

### <a name="runtime-library"></a>Libreria di runtime

Specifica la libreria di runtime per il collegamento. Imposta [ `/MT` , `/MTd` , `/MD` , `/MDd` ](md-mt-ld-use-run-time-library.md).

#### <a name="choices"></a>Opzioni

- **Multithread: fa** in modo che l'applicazione usi la versione statica multithread della libreria di Runtime.
- **Debug** multithread: definisce _DEBUG e _MT. Questa opzione fa sì che il compilatore inserisca il nome della libreria *libcmtd. lib* nel *`.obj`* file in modo che il linker utilizzi *libcmtd. lib* per risolvere i simboli esterni.
- **Dll** multithread: fa in modo che l'applicazione usi la versione specifica MULTITHREAD e dll della libreria di Runtime. Definisce `_MT` e `_DLL` e fa in modo che il compilatore inserisca il nome della libreria *Msvcrt. lib* nel *`.obj`* file.
- **Dll di debug** multithread: definisce, e `_DEBUG` `_MT` `_DLL` e fa in modo che l'applicazione usi la versione di debug della libreria di runtime multithread e DLL specifica. Fa anche in modo che il compilatore inserisca il nome della libreria *msvcrtd. lib* nel *`.obj`* file.

### <a name="struct-member-alignment"></a>Allineamento membri struct

Specifica i limiti di 1, 2, 4 o 8 byte per l'allineamento dei membri struct. Imposta [`/Zp`](zp-struct-member-alignment.md) .

#### <a name="choices"></a>Opzioni

- **1 byte** comprime le strutture sui limiti di 1 byte. Uguale a **`/Zp`** .
- **2 byte** : comprime le strutture nei limiti di 2 byte.
- **4 byte** : comprime le strutture nei limiti di 4 byte.
- **8 byte** : comprime le strutture nei limiti di 8 byte (impostazione predefinita).
- **16 byte** : comprime le strutture nei limiti di 16 byte.
- Impostazioni **di allineamento predefinite.**

### <a name="security-check"></a>Controllo di sicurezza

Il controllo di sicurezza facilita il rilevamento di sovraccarichi del buffer di stack, un attacco comunemente tentato alla sicurezza di un programma.

#### <a name="choices"></a>Opzioni

- **Disabilita controllo di sicurezza**: consente di disabilitare il controllo di sicurezza. Imposta [`/GS-`](gs-buffer-security-check.md) .
- **Abilita controllo di sicurezza**: consente di abilitare il controllo di sicurezza. Imposta [`/GS`](gs-buffer-security-check.md) .

### <a name="control-flow-guard"></a>Protezione del flusso di controllo

Guard Security Check consente di rilevare i tentativi di invio a un blocco di codice non valido.

#### <a name="choices"></a>Opzioni

- **Sì** : Abilita il controllo di sicurezza con i set di Guard [`/guard:cf`](guard-enable-control-flow-guard.md) .
- **No**

### <a name="enable-function-level-linking"></a>Abilita collegamento a livello di funzione

Consente al compilatore di assemblare le singole funzioni sotto forma di funzioni incluse nel pacchetto (COMDAT). Impostazione necessaria per le operazioni di modifica e continuazione. Imposta [`/Gy`](gy-enable-function-level-linking.md) .

### <a name="enable-parallel-code-generation"></a>Abilitare la generazione di codice in parallelo

Consente al compilatore di generare codice parallelo per cicli identificati utilizzando `#pragma loop(hint_parallel[(n)])` quando l'ottimizzazione è abilitata.

### <a name="enable-enhanced-instruction-set"></a>Abilita set di istruzioni avanzate

Consente di utilizzare le istruzioni disponibili nei processori che supportano set di istruzioni avanzate. Ad esempio, i miglioramenti SSE, SSE2, AVX e AVX2 apportati a IA-32. E i miglioramenti apportati a AVX e AVX2 a x64. Attualmente **`/arch:SSE`** e **`/arch:SSE2`** sono disponibili solo quando si compila per l'architettura x86. Se non si specifica alcuna opzione, il compilatore utilizzerà le istruzioni disponibili nei processori che supportano SSE2. L'uso di istruzioni avanzate può essere disabilitato con **`/arch:IA32`** . Per ulteriori informazioni, vedere [`/arch (x86)`](arch-x86.md) , [`/arch (x64)`](arch-x64.md) e [`/arch (ARM)`](arch-arm.md) .

#### <a name="choices"></a>Opzioni

- **Streaming SIMD Extensions** Streaming SIMD Extensions. Imposta  **`/arch:SSE`**
- **Streaming SIMD Extensions 2** -Streaming SIMD Extensions 2. Imposta  **`/arch:SSE2`**
- **Advanced Vector Extensions** -Advanced Vector Extensions. Imposta  **`/arch:AVX`**
- **Advanced Vector Extensions 2** -Advanced Vector Extensions 2. Imposta  **`/arch:AVX2`**
- **Nessuna istruzione avanzata** : nessuna istruzione avanzata. Imposta  **`/arch:IA32`**
- **Non impostato** : non impostato.

### <a name="floating-point-model"></a>Modello a virgola mobile

Imposta il modello a virgola mobile. Imposta [ `/fp:precise` , `/fp:strict` , `/fp:fast` ](fp-specify-floating-point-behavior.md).

#### <a name="choices"></a>Opzioni

- **Preciso** : valore predefinito. Migliora la coerenza dei test a virgola mobile per verificarne l'uguaglianza e la disuguaglianza.
- **Strict** : modello a virgola mobile più restrittivo. **`/fp:strict`** fa in **`fp_contract`** modo che sia disattivato e **`fenv_access`** che sia attivo. **`/fp:except`** è implicito e può essere disabilitato specificando esplicitamente **`/fp:except-`** . Quando viene usato con **`/fp:except-`** , **`/fp:strict`** applica una semantica a virgola mobile rigorosa, ma senza rispettare gli eventi eccezionali.
- **Fast** : crea il codice più veloce nella maggior parte dei casi.

### <a name="enable-floating-point-exceptions"></a>Abilita eccezioni a virgola mobile

Modello di eccezione a virgola mobile affidabile. Le eccezioni verranno generate immediatamente dopo l'attivazione. Imposta [`/fp:except`](fp-specify-floating-point-behavior.md) .

### <a name="create-hotpatchable-image"></a>Crea immagine Hotpatchable

Quando patch a caldo è on, il compilatore garantisce che la prima istruzione di ogni funzione sia di due byte, come richiesto per l'applicazione di patch a caldo. Imposta [`/hotpatch`](hotpatch-create-hotpatchable-image.md) .

### <a name="spectre-mitigation"></a>Mitigazione Spectre

Mitigazioni Spectre per CVE 2017-5753. Imposta [`/Qspectre`](qspectre.md) .

#### <a name="choices"></a>Opzioni

- **Enabled** : Abilita la funzionalità di mitigazione Spectre per CVE 2017-5753
- **Disabled** : non impostato.

## <a name="cc-language-properties"></a>Proprietà del linguaggio C/C++

### <a name="disable-language-extensions"></a>Disabilitare le estensioni del linguaggio

Disabilita o Abilita le estensioni del linguaggio. Imposta [`/Za`](za-ze-disable-language-extensions.md) .

### <a name="conformance-mode"></a>Modalità di conformità

Abilita o Disabilita la modalità di conformità. Imposta [`/permissive-`](permissive-standards-conformance.md) .

### <a name="treat-wchar_t-as-built-in-type"></a>Considera wchar_t come tipo incorporato

Quando specificato, il tipo **`wchar_t`** diventa un tipo nativo mappato a **`__wchar_t`** in modo analogo **`short`** al mapping a **`__int16`** . [`/Zc:wchar_t`](zc-wchar-t-wchar-t-is-native-type.md) è on per impostazione predefinita.

### <a name="force-conformance-in-for-loop-scope"></a>Imponi conformità nell'ambito di un ciclo for

Implementa il comportamento C++ standard per i `for` cicli di istruzione con le estensioni Microsoft. Imposta [ `/Za` `/Ze` (Disabilita le estensioni del linguaggio](za-ze-disable-language-extensions.md)). [`/Zc:forScope`](zc-forscope-force-conformance-in-for-loop-scope.md) è on per impostazione predefinita.

### <a name="remove-unreferenced-code-and-data"></a>Rimuovi codice e dati senza riferimenti

Quando specificato, il compilatore non genera più informazioni sui simboli per il codice e i dati senza riferimenti.

### <a name="enforce-type-conversion-rules"></a>Applicare regole di conversione dei tipi

Utilizzato per identificare un tipo di riferimento rvalue come risultato di un'operazione cast in base allo standard C++ 11.

### <a name="enable-run-time-type-information"></a>Abilita informazioni sui tipi in fase di esecuzione

Aggiunge codice per il controllo dei tipi di oggetto C++ in fase di esecuzione (*informazioni sul tipo di runtime*o RTTI). Imposta [ `/GR` . `/GR-` ](gr-enable-run-time-type-information.md)

### <a name="open-mp-support"></a>Apri supporto MP

Abilita le estensioni del linguaggio OpenMP 2,0. Imposta [`/openmp`](openmp-enable-openmp-2-0-support.md) .

### <a name="c-language-standard"></a>Standard del linguaggio C++

Determina lo standard del linguaggio C++ abilitato dal compilatore. Usare la versione più recente, se possibile. Imposta [ `/std:c++14` , `/std:c++17` , `/std:c++latest` ](std-specify-language-standard-version.md).

#### <a name="choices"></a>Opzioni

- **Default**
- **Standard C++ 14 ISO**
- **Standard C++ 17 ISO**
- **Anteprima: funzionalità della bozza di lavoro C++ più recente**

### <a name="enable-c-modules-experimental"></a>Abilita moduli C++ (sperimentale)

Supporto sperimentale per i moduli C++ TS e moduli di libreria standard.

## <a name="cc-precompiled-headers-properties"></a>Proprietà intestazioni precompilate C/C++

### <a name="createuse-precompiled-header"></a>Crea/Usa intestazione precompilata

Abilita la creazione o l'uso di un'intestazione precompilata durante la compilazione. Imposta [`/Yc`](yc-create-precompiled-header-file.md) [`/Yu`](yu-use-precompiled-header-file.md) .

#### <a name="choices"></a>Opzioni

- **Create** : indica al compilatore di creare un file di intestazione precompilata ( *`.pch`* ) che rappresenta lo stato della compilazione in un determinato punto.
- **Use** : indica al compilatore di usare un file di intestazione precompilata ( *`.pch`* ) esistente nella compilazione corrente.
- **Non vengono usate intestazioni precompilate** , senza intestazioni precompilate.

### <a name="precompiled-header-file"></a>File di intestazione precompilato

Specifica il nome del file di intestazione da utilizzare quando si crea o si utilizza un file di intestazione precompilato. Imposta [`/Yc`](yc-create-precompiled-header-file.md) [`/Yu`](yu-use-precompiled-header-file.md) .

### <a name="precompiled-header-output-file"></a>File di output intestazione precompilata

Specifica il percorso o il nome del file di intestazione precompilato generato. Imposta [`/Fp`](fp-name-dot-pch-file.md) .

## <a name="cc-output-files-properties"></a>Proprietà dei file di output C/C++

### <a name="expand-attributed-source"></a>Espandi origine con attributi

Crea un file di listato con attributi espansi inseriti nel file di origine. Imposta [`/Fx`](fx-merge-injected-code.md) .

### <a name="assembler-output"></a>Output assembler

Specifica il contenuto del file di output in linguaggio assembly. Imposta [ `/FA` , `/FAc` , `/FAs` , `/FAcs` ](fa-fa-listing-file.md).

#### <a name="choices"></a>Opzioni

- **Nessun** elenco.
- **Elenco solo assembly** -codice assembly; *`.asm`*
- **Assembly con** codice macchina del computer e codice assembly. *`.cod`*
- **Assembly con codice sorgente** : codice sorgente e assembly. *`.asm`*
- **Assembly, codice macchina e codice sorgente** assembly, codice macchina e codice sorgente; *`.cod`*

### <a name="use-unicode-for-assembler-listing"></a>USA Unicode per l'elenco di assembler

Determina la creazione del file di output in formato UTF-8.

### <a name="asm-list-location"></a>Percorso elenco ASM

Specifica il percorso relativo o il nome per il file di listato ASM; può essere un nome di file o di directory. Imposta [`/Fa`](fa-fa-listing-file.md) .

### <a name="object-file-name"></a>Nome file oggetto

Consente di specificare un nome usato per eseguire l'override del nome del file oggetto predefinito. Può essere un nome di file o di directory. Imposta [`/Fo`](fo-object-file-name.md) .

### <a name="program-database-file-name"></a>Nome file del database di programma

Specifica un nome per un file PDB generato dal compilatore. specifica anche il nome di base per il file IDB richiesto generato dal compilatore. può essere un nome di file o di directory. Imposta [`/Fd`](fd-program-database-file-name.md) .

### <a name="generate-xml-documentation-files"></a>Genera file di documentazione XML

Specifica che il compilatore deve generare i file di commento della documentazione XML (. XDC). Imposta [`/doc`](doc-process-documentation-comments-c-cpp.md) .

### <a name="xml-documentation-file-name"></a>Nome file di documentazione XML

Specifica il nome dei file di documentazione XML generati. può essere un nome di file o di directory. Imposta [`/doc:`\<name>](doc-process-documentation-comments-c-cpp.md) .

## <a name="cc-browse-information-properties"></a>Proprietà informazioni di visualizzazione C/C++

### <a name="enable-browse-information"></a>Abilita informazioni di visualizzazione

Specifica il livello delle informazioni di visualizzazione nel *`.bsc`* file. Imposta [`/FR`](fr-fr-create-dot-sbr-file.md) .

### <a name="browse-information-file"></a>File di informazioni di visualizzazione

Specifica il nome facoltativo per il file di informazioni del browser. Imposta [`/FR`\<name>](fr-fr-create-dot-sbr-file.md) .

## <a name="cc-advanced-properties"></a>Proprietà avanzate C/C++

### <a name="calling-convention"></a>Convenzione di chiamata

Selezionare la convenzione di chiamata predefinita per l'applicazione (può essere sottoposta a override dalla funzione). Imposta [ `/Gd` , `/Gr` , `/Gz` , `/Gv` ](gd-gr-gv-gz-calling-convention.md).

#### <a name="choices"></a>Opzioni

- **`__cdecl`** : Specifica la **`__cdecl`** convenzione di chiamata per tutte le funzioni ad eccezione delle funzioni membro C++ e delle funzioni contrassegnate come **`__stdcall`** o **`__fastcall`** .
- **`__fastcall`** : Specifica la **`__fastcall`** convenzione di chiamata per tutte le funzioni ad eccezione delle funzioni membro C++ e delle funzioni contrassegnate come **`__cdecl`** o **`__stdcall`** . Tutte le **`__fastcall`** funzioni devono avere prototipi.
- **`__stdcall`** : Specifica la **`__stdcall`** convenzione di chiamata per tutte le funzioni ad eccezione delle funzioni membro C++ e delle funzioni contrassegnate come **`__cdecl`** o **`__fastcall`** . Tutte le **`__stdcall`** funzioni devono avere prototipi.
- **`__vectorcall`** : Specifica la **`__vectorcall`** convenzione di chiamata per tutte le funzioni ad eccezione delle funzioni membro C++ e delle funzioni contrassegnate come **`__cdecl`** , **`__fastcall`** o **`__stdcall`** . Tutte le **`__vectorcall`** funzioni devono avere prototipi.

### <a name="compile-as"></a>Compila come

Selezionare l'opzione linguaggio di compilazione per *`.c`* *`.cpp`* i file e. Imposta [ `/TC` . `/TP` ](tc-tp-tc-tp-specify-source-file-type.md)

#### <a name="choices"></a>Opzioni

- **Predefinita**: impostazione predefinita.
- **Compila come codice C**: consente di compilare come codice C.
- **Compila come codice c++** : Compila come codice c++.

### <a name="disable-specific-warnings"></a>Disabilita avvisi specifici

Disabilitare i numeri di avviso specificati. Inserire i numeri di avviso in un elenco delimitato da punto e virgola. Imposta [`/wd`\<number>](compiler-option-warning-level.md) .

### <a name="forced-include-file"></a>File di inclusione forzata

Uno o più file di inclusione il cui uso è forzato. Imposta [`/FI`\<name>](fi-name-forced-include-file.md) .

### <a name="forced-using-file"></a>File #using forzato

Specifica uno o più file di #using forzati. Imposta [`/FU`\<name>](fu-name-forced-hash-using-file.md) .

### <a name="show-includes"></a>Mostra inclusioni

Indica al compilatore di generare un elenco dei file di inclusione. Imposta [`/showIncludes`](showincludes-list-include-files.md) .

### <a name="use-full-paths"></a>USA percorsi completi

Usare percorsi completi nei messaggi di diagnostica. Imposta [`/FC`](fc-full-path-of-source-code-file-in-diagnostics.md) .

### <a name="omit-default-library-name"></a>Omette il nome della libreria predefinita

Non include i nomi delle librerie predefinite nei *`.obj`* file. Imposta [`/Zl`](zl-omit-default-library-name.md) .

### <a name="internal-compiler-error-reporting"></a>Segnalazione errori interni del compilatore

> [!NOTE]
> Questa opzione è deprecata. A partire da Windows Vista, la segnalazione degli errori è controllata dalle impostazioni di [segnalazione errori Windows (WER)](/windows/win32/wer/windows-error-reporting) .

### <a name="treat-specific-warnings-as-errors"></a>Considera gli avvisi specifici come errori

Considera l'avviso del compilatore specifico come un errore dove n è un avviso del compilatore.

### <a name="additional-options"></a>Opzioni aggiuntive

Opzioni aggiuntive.
