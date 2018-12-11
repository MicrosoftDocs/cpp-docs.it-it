---
title: Opzioni del compilatore elencate per categoria
ms.date: 11/12/2018
helpviewer_keywords:
- compiler options, C++
ms.assetid: c4750dcf-dba0-4229-99b6-45cdecc11729
ms.openlocfilehash: ef61ebbfad62e6a7bf764bad35204247e47d8ddb
ms.sourcegitcommit: 6990f842fefc27b522b15cf352f3517b319d78da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2018
ms.locfileid: "53248572"
---
# <a name="compiler-options-listed-by-category"></a>Opzioni del compilatore elencate per categoria

In questo articolo viene fornito un elenco organizzato per categorie delle opzioni del compilatore. Per un elenco alfabetico, vedere [Compiler Options Listed Alphabetically](compiler-options-listed-alphabetically.md).

### <a name="optimization"></a>Ottimizzazione

|Opzione|Scopo|
|------------|-------------|
|[/O1](o1-o2-minimize-size-maximize-speed.md)|Effettua creazioni in base alla dimensione del codice.|
|[/O2](o1-o2-minimize-size-maximize-speed.md)|Effettua creazioni in base alla velocità del codice.|
|[/Ob](ob-inline-function-expansion.md)|Controlla l'espansione inline.|
|[/Od](od-disable-debug.md)|Disabilita l'ottimizzazione.|
|[/Og](og-global-optimizations.md)|Deprecato. Usa le ottimizzazioni globali.|
|[/Oi](oi-generate-intrinsic-functions.md)|Genera funzioni intrinseche.|
|[/Os](os-ot-favor-small-code-favor-fast-code.md)|Ottimizza per dimensione codice.|
|[/Ot](os-ot-favor-small-code-favor-fast-code.md)|Ottimizza per velocità codice.|
|[/Ox](ox-full-optimization.md)|Usa la massima ottimizzazione (/Ob2gity /Gs).|
|[/Oy](oy-frame-pointer-omission.md)|Omette i puntatori ai frame. (solo x86)|
|[/favor](favor-optimize-for-architecture-specifics.md)|Genera codice ottimizzato per un'architettura specifica o per una gamma di architetture.|

### <a name="code-generation"></a>Generazione del codice

|Opzione|Scopo|
|------------|-------------|
|[/arch](arch-x86.md)|Usa istruzioni SSE o SSE2 nella generazione di codice. (solo x86)|
|[/clr](clr-common-language-runtime-compilation.md)|Genera un file di output da eseguire in Common Language Runtime.|
|[/EH](eh-exception-handling-model.md)|Specifica il modello di gestione delle eccezioni.|
|[/fp](fp-specify-floating-point-behavior.md)|Specifica il comportamento a virgola mobile.|
|[/GA](ga-optimize-for-windows-application.md)|Ottimizza per le applicazioni Windows.|
|[/Gd](gd-gr-gv-gz-calling-convention.md)|Usa la convezione di chiamata `__cdecl` . (solo x86)|
|[/Ge](ge-enable-stack-probes.md)|Deprecato. Attiva le ricerche dello stack.|
|[/GF](gf-eliminate-duplicate-strings.md)|Attiva la condivisione delle stringhe.|
|[/Gh](gh-enable-penter-hook-function.md)|Chiama la funzione hook `_penter`.|
|[/GH](gh-enable-pexit-hook-function.md)|Chiama la funzione hook `_pexit`.|
|[/GL](gl-whole-program-optimization.md)|Attiva l'ottimizzazione dell'intero programma.|
|[/Gm](gm-enable-minimal-rebuild.md)|Deprecato. Attiva una ricompilazione minima.|
|[/GR](gr-enable-run-time-type-information.md)|Attiva RTTI (Run-Time Type Information).|
|[/Gr](gd-gr-gv-gz-calling-convention.md)|Usa la convezione di chiamata `__fastcall` . (solo x86)|
|[/GS](gs-buffer-security-check.md)|Controlla la sicurezza del buffer.|
|[/Gs](gs-control-stack-checking-calls.md)|Controlla le ricerche dello stack.|
|[/GT](gt-support-fiber-safe-thread-local-storage.md)|Supporta l'indipendenza da fiber per i dati allocati usando l'archiviazione locale di thread statici.|
|[/guard:cf](guard-enable-control-flow-guard.md)|Aggiunge controlli di sicurezza guard del flusso di controllo.|
|[/Gv](gd-gr-gv-gz-calling-convention.md)|Usa la convezione di chiamata `__vectorcall` . (solo x86 e x64)|
|[/Gw](gw-optimize-global-data.md)|Abilita l'ottimizzazione dei dati globale per l'intero programma|
|[/GX](gx-enable-exception-handling.md)|Deprecato. Attiva la gestione sincrona delle eccezioni. Usare [/EH](eh-exception-handling-model.md) .|
|[/Gy](gy-enable-function-level-linking.md)|Attiva il collegamento a livello di funzione.|
|[/GZ](gz-enable-stack-frame-run-time-error-checking.md)|Deprecato. Abilita controlli veloci. Equivale a [/RTC1](rtc-run-time-error-checks.md).|
|[/Gz](gd-gr-gv-gz-calling-convention.md)|Usa la convezione di chiamata `__stdcall` . (solo x86)|
|[/homeparams](homeparams-copy-register-parameters-to-stack.md)|Forza la scrittura di parametri passati nei registri nei rispettivi percorsi nello stack quando vengono immesse funzioni. Questa opzione del compilatore è solo per x64 compilatori (compilazione nativi e incrociata).|
|[/hotpatch](hotpatch-create-hotpatchable-image.md)|Crea un'immagine su cui è applicabile una hot patch|
|[/Qfast_transcendentals](qfast-transcendentals-force-fast-transcendentals.md)|Genera funzioni trascendenti veloci.|
|[/QIfist](qifist-suppress-ftol.md)|Deprecato. Disattiva la chiamata della funzione helper `_ftol` quando è necessario eseguire una conversione da un tipo a virgola mobile a un tipo integrale. (solo x86)|
|[/Qimprecise_fwaits](qimprecise-fwaits-remove-fwaits-inside-try-blocks.md)|Rimuove i comandi `fwait` all'interno dei blocchi `try` .|
|[/Qpar](qpar-auto-parallelizer.md)|Abilita la parallelizzazione automatica dei cicli.|
|[/Qpar-report](qpar-report-auto-parallelizer-reporting-level.md)|Abilita livelli di creazione rapporti per la parallelizzazione automatica.|
|[/Qsafe_fp_loads](qsafe-fp-loads.md)|Usa istruzioni di spostamento Integer per i valori a virgola mobile e disabilita determinate ottimizzazioni di carico a virgola mobile.|
|[/Qspectre](qspectre.md)|Abilitare mitigazioni per CVE 2017-5753, per una classe di attacchi di Spectre.|
|[/Qvec-report](qvec-report-auto-vectorizer-reporting-level.md)|Abilita livelli di creazione rapporti per la vettorializzazione automatica.|
|[/RTC](rtc-run-time-error-checks.md)|Attiva il controllo degli errori di runtime.|
|[/volatile](volatile-volatile-keyword-interpretation.md)|Seleziona la modalità di interpretazione della parola chiave volatile.|

### <a name="output-files"></a>File di output

|Opzione|Scopo|
|------------|-------------|
|[/doc](doc-process-documentation-comments-c-cpp.md)|Elabora commenti sulla documentazione in un file XML.|
|[/FA](fa-fa-listing-file.md)|Configura un file di listato dell'assembly.|
|[/Fa](fa-fa-listing-file.md)|Crea un file di listato dell'assembly.|
|[/Fd](fd-program-database-file-name.md)|Rinomina il file del database di programma.|
|[/Fe](fe-name-exe-file.md)|Rinomina il file eseguibile.|
|[/Fi](fi-preprocess-output-file-name.md)|Specifica il nome del file di output pre-elaborato.|
|[/Fm](fm-name-mapfile.md)|Crea un file MAP.|
|[/Fo](fo-object-file-name.md)|Crea un file oggetto.|
|[/Fp](fp-name-dot-pch-file.md)|Specifica un nome del file di intestazione precompilato.|
|[/FR, /Fr](fr-fr-create-dot-sbr-file.md)|Assegnare un nome generato del browser file SBR.|

### <a name="preprocessor"></a>Preprocessore

|Opzione|Scopo|
|------------|-------------|
|[/AI](ai-specify-metadata-directories.md)|Specifica una directory in cui eseguire le ricerche per risolvere i riferimenti al file passati alla direttiva [#using](../../preprocessor/hash-using-directive-cpp.md) .|
|[/C](c-preserve-comments-during-preprocessing.md)|Conserva i commenti durante la pre-elaborazione.|
|[/D](d-preprocessor-definitions.md)|Definisce costanti e macro.|
|[/E](e-preprocess-to-stdout.md)|Copia l'output del preprocessore in un output standard.|
|[/EP](ep-preprocess-to-stdout-without-hash-line-directives.md)|Copia l'output del preprocessore in un output standard.|
|[/FI](fi-name-forced-include-file.md)|Pre-elabora il file di inclusione specificato.|
|[/FU](fu-name-forced-hash-using-file.md)|Impone l'utilizzo di un nome file, come se fosse stato passato alla direttiva [#using](../../preprocessor/hash-using-directive-cpp.md) .|
|[/Fx](fx-merge-injected-code.md)|Unisce il codice inserito al file di origine.|
|[/I](i-additional-include-directories.md)|Ricerca i file di inclusione in una directory.|
|[/P](p-preprocess-to-a-file.md)|Scrive l'output del preprocessore in un file.|
|[/U](u-u-undefine-symbols.md)|Rimuove una macro predefinita.|
|[/u](u-u-undefine-symbols.md)|Rimuove tutte le macro predefinite.|
|[/X](x-ignore-standard-include-paths.md)|Ignora la directory di inclusione standard.|

### <a name="language"></a>Linguaggio

|Opzione|Scopo|
|------------|-------------|
|[/constexpr](constexpr-control-constexpr-evaluation.md)|Controlla la valutazione di constexpr in fase di compilazione.|
|[/openmp](openmp-enable-openmp-2-0-support.md)|Attiva [#pragma omp](../../preprocessor/omp.md) nel codice sorgente.|
|[/vd](vd-disable-construction-displacements.md)|Disabilita o abilita i membri della classe `vtordisp` nascosti.|
|[/vmb](vmb-vmg-representation-method.md)|Usa la base migliore per i puntatori ai membri.|
|[/vmg](vmb-vmg-representation-method.md)|Usa la generalità completa per i puntatori ai membri.|
|[/vmm](vmm-vms-vmv-general-purpose-representation.md)|Dichiara l'ereditarietà multipla.|
|[/vms](vmm-vms-vmv-general-purpose-representation.md)|Dichiara l'ereditarietà singola.|
|[/vmv](vmm-vms-vmv-general-purpose-representation.md)|Dichiara l'ereditarietà virtuale.|
|[/Z7](z7-zi-zi-debug-information-format.md)|Genera l'errore compatibile C 7.0 le informazioni di debug.|
|[/Za](za-ze-disable-language-extensions.md)|Disabilita le estensioni del linguaggio.|
|[/Zc](zc-conformance.md)|Specifica il comportamento standard in [/Ze](za-ze-disable-language-extensions.md).|
|[/Ze](za-ze-disable-language-extensions.md)|Deprecato. Attiva le estensioni del linguaggio.|
|[/Zf](zf.md)|Consente di migliorare tempo nelle compilazioni parallele per la generazione di PDB.|
|[/ZI](z7-zi-zi-debug-information-format.md)|Include informazioni di debug in un database di programma compatibile con Modifica e continuazione. (solo x86)|
|[/Zi](z7-zi-zi-debug-information-format.md)|Genera informazioni di debug complete.|
|[/Zl](zl-omit-default-library-name.md)|Rimuove il nome di libreria predefinito dal file obj.|
|[/Zp](zp-struct-member-alignment.md) *n*|Comprime i membri della struttura.|
|[/Zs](zs-syntax-check-only.md)|Controlla solo la sintassi.|
|[/ZW](zw-windows-runtime-compilation.md)|Produce un file di output per l'esecuzione nel Runtime di Windows.|

### <a name="linking"></a>Collegamento

|Opzione|Scopo|
|------------|-------------|
|[/F](f-set-stack-size.md)|Imposta la dimensione dello stack.|
|[/LD](md-mt-ld-use-run-time-library.md)|Crea una libreria a collegamento dinamico.|
|[/LDd](md-mt-ld-use-run-time-library.md)|Crea una libreria a collegamento dinamico di debug.|
|[/link](link-pass-options-to-linker.md)|Passa l'opzione specificata a LINK.|
|[/LN](ln-create-msil-module.md)|Crea un modulo MSIL|
|[/MD](md-mt-ld-use-run-time-library.md)|Esegue la compilazione per creare una DLL con multithreading, usando MSVCRT.lib.|
|[/MDd](md-mt-ld-use-run-time-library.md)|Esegue la compilazione per creare una DLL con multithreading di debug, usando MSVCRTD.lib.|
|[/MT](md-mt-ld-use-run-time-library.md)|Esegue la compilazione per creare un file eseguibile con multithreading, usando LIBCMT.lib.|
|[/MTd](md-mt-ld-use-run-time-library.md)|Esegue la compilazione per creare un file eseguibile con multithreading di debug, usando LIBCMTD.lib.|

### <a name="miscellaneous"></a>Varie

|Opzione|Scopo|
|------------|-------------|
|[/?](help-compiler-command-line-help.md)|Elenca le opzioni del compilatore.|
|[@](at-specify-a-compiler-response-file.md)|Specifica un file di risposta.|
|[/analyze](analyze-code-analysis.md)|Attiva l'analisi del codice|
|[/bigobj](bigobj-increase-number-of-sections-in-dot-obj-file.md)|Aumenta il numero di sezioni indirizzabili in un file con estensione obj.|
|[/c](c-compile-without-linking.md)|Effettua la compilazione senza collegamento.|
|[/cgthreads](cgthreads-code-generation-threads.md)|Specifica il numero di thread cl.exe da usare per l'ottimizzazione e la generazione di codice.|
|[/errorReport](errorreport-report-internal-compiler-errors.md)|Consente di inviare informazioni sugli errori interni del compilatore direttamente al team di Visual C++.|
|[/FC](fc-full-path-of-source-code-file-in-diagnostics.md)|Visualizza il percorso completo dei file di codice sorgente passati a cl.exe nel testo contenente informazioni di diagnostica.|
|[/FS](fs-force-synchronous-pdb-writes.md)|Forza scritture nel file del database di programma (PDB) per la serializzazione tramite MSPDBSRV.EXE.|
|[/H](h-restrict-length-of-external-names.md)|Deprecato. Limita la lunghezza dei nomi esterni (pubblici).|
|[/HELP](help-compiler-command-line-help.md)|Elenca le opzioni del compilatore.|
|[/J](j-default-char-type-is-unsigned.md)|Modifica il tipo `char` predefinito.|
|[/ JMC](jmc.md)|Supporta il debug nativo C++ Just My Code.|
|[/kernel](kernel-create-kernel-mode-binary.md)|Il compilatore e il linker creeranno un file binario che può essere eseguito nel kernel di Windows.|
|[/MP](mp-build-with-multiple-processes.md)|Compila contemporaneamente più file di origine.|
|[/nologo](nologo-suppress-startup-banner-c-cpp.md)|Evita la visualizzazione dell'intestazione di iscrizione.|
|[/sdl](sdl-enable-additional-security-checks.md)|Abilita funzionalità e avvisi di sicurezza aggiuntivi.|
|[/showIncludes](showincludes-list-include-files.md)|Visualizza un elenco di tutti i file di inclusione durante la compilazione.|
|[/Tc](tc-tp-tc-tp-specify-source-file-type.md)|Specifica un file di origine C.|
|[/TC](tc-tp-tc-tp-specify-source-file-type.md)|Specifica che tutti i file di origine sono C.|
|[/Tp](tc-tp-tc-tp-specify-source-file-type.md)|Specifica un file di origine C++.|
|[/TP](tc-tp-tc-tp-specify-source-file-type.md)|Specifica tutti i file di origine C++.|
|[/V](v-version-number.md)|Deprecato. Imposta la stringa di versione.|
|[/w](compiler-option-warning-level.md)|Disabilita tutti gli avvisi.|
|[/W0, /W1, /W2, /W3, /W4](compiler-option-warning-level.md)|Imposta il livello di avviso di output.|
|[/w1, /w2, /w3, /w4](compiler-option-warning-level.md)|Imposta il livello di avviso per l'avviso specificato.|
|[/Wall](compiler-option-warning-level.md)|Abilita tutti gli avvisi, inclusi quelli disabilitati per impostazione predefinita.|
|[/wd](compiler-option-warning-level.md)|Disattiva l'avviso specificato.|
|[/we](compiler-option-warning-level.md)|Considera l'avviso specificato come un errore.|
|[/WL](wl-enable-one-line-diagnostics.md)|Attiva la diagnostica a riga singola dei messaggi di errore e di avviso durante la compilazione del codice sorgente C++ dalla riga di comando.|
|[/wo](compiler-option-warning-level.md)|Visualizza l'avviso specificato una sola volta.|
|[/Wv](compiler-option-warning-level.md)|Disattiva gli avvisi introdotti dalle versioni più recenti del compilatore.|
|[/WX](compiler-option-warning-level.md)|Considera gli avvisi come errori.|
|[/Yc](yc-create-precompiled-header-file.md)|Creare. File PCH.|
|[/Yd](yd-place-debug-information-in-object-file.md)|Deprecato. Inserisce informazioni di debug complete in tutti i file oggetto. Usare [/Zi](z7-zi-zi-debug-information-format.md) .|
|[/Yl](yl-inject-pch-reference-for-debug-library.md)|Inserisce un riferimento PCH durante la creazione di una libreria di debug.|
|[/Yu](yu-use-precompiled-header-file.md)|Usa un file di intestazione precompilato durante la compilazione.|
|[/Y-](y-ignore-precompiled-header-options.md)|Ignora tutte le altre opzioni del compilatore dell'intestazione precompilata nella generazione corrente.|
|[/Zm](zm-specify-precompiled-header-memory-allocation-limit.md)|Specifica il limite di allocazione di memoria delle intestazioni precompilate.|
|[/await](await-enable-coroutine-support.md)|Abilitare le estensioni di coroutine (funzioni ripristinabili).|
|[/source-charset](source-charset-set-source-character-set.md)|Set di set di caratteri di origine.|
|[/execution-charset](execution-charset-set-execution-character-set.md)|Set esecuzione character set.|
|[/utf-8](utf-8-set-source-and-executable-character-sets-to-utf-8.md)|Set di caratteri di origine e l'esecuzione di set in UTF-8.|
|[/validate-charset](validate-charset-validate-for-compatible-characters.md)|Convalidare i file UTF-8 per solo i caratteri compatibili.|
|[/diagnostics](diagnostics-compiler-diagnostic-options.md)|Controlla il formato dei messaggi di diagnostica.|
|[/permissive-](permissive-standards-conformance.md)|Impostare la modalità standard-operazioni di conformità.|
|[/std](std-specify-language-standard-version.md)|Selettore di compatibilità di versione standard C++.|

### <a name="deprecated-and-removed-compiler-options"></a>Opzioni del compilatore deprecate e rimosse

|Opzione|Scopo|
|------------|-------------|
|[/clr:noAssembly](clr-common-language-runtime-compilation.md)|Deprecato. In alternativa, usare [/LN (Create MSIL Module)](ln-create-msil-module.md) .|
|[/Fr](fr-fr-create-dot-sbr-file.md)|Deprecato. Crea un file informazioni di visualizzazione senza variabili locali.|
|[/Ge](ge-enable-stack-probes.md)|Deprecato. Attiva le ricerche dello stack. Attivazione per impostazione predefinita.|
|[/Gm](gm-enable-minimal-rebuild.md)|Deprecato. Attiva una ricompilazione minima.|
|[/GX](gx-enable-exception-handling.md)|Deprecato. Attiva la gestione sincrona delle eccezioni. Usare [/EH](eh-exception-handling-model.md) .|
|[/GZ](gz-enable-stack-frame-run-time-error-checking.md)|Deprecato. Abilita controlli veloci. Usare [/RTC1](rtc-run-time-error-checks.md) .|
|[/H](h-restrict-length-of-external-names.md)|Deprecato. Limita la lunghezza dei nomi esterni (pubblici).|
|[/Og](og-global-optimizations.md)|Deprecato. Usa le ottimizzazioni globali.|
|[/QIfist](qifist-suppress-ftol.md)|Deprecato. Usato in passato per specificare come eseguire la conversione da un tipo a virgola mobile a un tipo integrale.|
|[/V](v-version-number.md)|Deprecato. Imposta la stringa di versione del file OBJ.|
|[/Wp64](wp64-detect-64-bit-portability-issues.md)|Obsoleta. Rileva i problemi di portabilità a 64 bit.|
|[/Yd](yd-place-debug-information-in-object-file.md)|Deprecato. Inserisce informazioni di debug complete in tutti i file oggetto. Usare [/Zi](z7-zi-zi-debug-information-format.md) .|
|[/Zc:forScope-](zc-forscope-force-conformance-in-for-loop-scope.md)|Deprecato. Disattiva la conformità nell'ambito di un ciclo For.|
|[/Ze](za-ze-disable-language-extensions.md)|Deprecato. Attiva le estensioni del linguaggio.|
|[/Zg](zg-generate-function-prototypes.md)|Rimosso in Visual C++ 2015. Genera prototipi di funzione.|

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](c-cpp-building-reference.md)<br/>
[Opzioni del compilatore](compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](setting-compiler-options.md)<br/>
