---
title: "Opzioni del compilatore elencate per categoria | Microsoft Docs"
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
helpviewer_keywords: 
  - "opzioni del compilatore, C++"
ms.assetid: c4750dcf-dba0-4229-99b6-45cdecc11729
caps.latest.revision: 64
caps.handback.revision: 64
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Opzioni del compilatore elencate per categoria
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene fornito un elenco organizzato per categorie delle opzioni del compilatore. Per un elenco alfabetico, vedere [Opzioni del compilatore elencate in ordine alfabetico](../../build/reference/compiler-options-listed-alphabetically.md).  
  
### Ottimizzazione  
  
|Opzione|Scopo|  
|-------------|-----------|  
|[\/O1](../../build/reference/o1-o2-minimize-size-maximize-speed.md)|Effettua creazioni in base alla dimensione del codice.|  
|[\/O2](../../build/reference/o1-o2-minimize-size-maximize-speed.md)|Effettua creazioni in base alla velocità del codice.|  
|[\/Ob](../../build/reference/ob-inline-function-expansion.md)|Controlla l'espansione inline.|  
|[\/Od](../../build/reference/od-disable-debug.md)|Disabilita l'ottimizzazione.|  
|[\/Og](../../build/reference/og-global-optimizations.md)|Deprecato. Usa le ottimizzazioni globali.|  
|[\/Oi](../../build/reference/oi-generate-intrinsic-functions.md)|Genera funzioni intrinseche.|  
|[\/Os](../../build/reference/os-ot-favor-small-code-favor-fast-code.md)|Ottimizza per dimensione codice.|  
|[\/Ot](../../build/reference/os-ot-favor-small-code-favor-fast-code.md)|Ottimizza per velocità codice.|  
|[\/Ox](../../build/reference/ox-full-optimization.md)|Usa la massima ottimizzazione \(\/Ob2gity \/Gs\).|  
|[\/Oy](../../build/reference/oy-frame-pointer-omission.md)|Omette i puntatori ai frame. \(solo x86\)|  
|[\/favor](../../build/reference/favor-optimize-for-architecture-specifics.md)|Genera codice ottimizzato per un'architettura specifica o per una gamma di architetture.|  
  
### Generazione di codice  
  
|Opzione|Scopo|  
|-------------|-----------|  
|[\/arch](../../build/reference/arch-x86.md)|Usa istruzioni SSE o SSE2 nella generazione di codice. \(solo x86\)|  
|[\/clr](../../build/reference/clr-common-language-runtime-compilation.md)|Genera un file di output da eseguire in Common Language Runtime.|  
|[\/EH](../../build/reference/eh-exception-handling-model.md)|Specifica il modello di gestione delle eccezioni.|  
|[\/fp](../../build/reference/fp-specify-floating-point-behavior.md)|Specifica il comportamento a virgola mobile.|  
|[\/GA](../../build/reference/ga-optimize-for-windows-application.md)|Ottimizza per le applicazioni Windows.|  
|[\/Gd](../../build/reference/gd-gr-gv-gz-calling-convention.md)|Usa la convezione di chiamata `__cdecl`. \(solo x86\)|  
|[\/Ge](../../build/reference/ge-enable-stack-probes.md)|Deprecato. Attiva le ricerche dello stack.|  
|[\/GF](../../build/reference/gf-eliminate-duplicate-strings.md)|Attiva la condivisione delle stringhe.|  
|[\/Gh](../../build/reference/gh-enable-penter-hook-function.md)|Chiama la funzione hook `_penter`.|  
|[\/GH](../../build/reference/gh-enable-pexit-hook-function.md)|Chiama la funzione hook `_pexit`.|  
|[\/GL](../../build/reference/gl-whole-program-optimization.md)|Attiva l'ottimizzazione dell'intero programma.|  
|[\/Gm](../../build/reference/gm-enable-minimal-rebuild.md)|Attiva una ricompilazione minima.|  
|[\/GR](../../build/reference/gr-enable-run-time-type-information.md)|Attiva RTTI \(Run\-Time Type Information\).|  
|[\/Gr](../../build/reference/gd-gr-gv-gz-calling-convention.md)|Usa la convezione di chiamata `__fastcall`. \(solo x86\)|  
|[\/GS](../../build/reference/gs-buffer-security-check.md)|Controlla la sicurezza del buffer.|  
|[\/Gs](../../build/reference/gs-control-stack-checking-calls.md)|Controlla le ricerche dello stack.|  
|[\/GT](../../build/reference/gt-support-fiber-safe-thread-local-storage.md)|Supporta l'indipendenza da fiber per i dati allocati usando l'archiviazione locale di thread statici.|  
|[\/guard:cf](../../build/reference/guard-enable-control-flow-guard.md)|Aggiunge controlli di sicurezza guard del flusso di controllo.|  
|[\/Gv](../../build/reference/gd-gr-gv-gz-calling-convention.md)|Usa la convezione di chiamata `__vectorcall`. \(solo x86 e x64\)|  
|[\/Gw](../../build/reference/gw-optimize-global-data.md)|Abilita l'ottimizzazione dei dati globale per l'intero programma|  
|[\/GX](../../build/reference/gx-enable-exception-handling.md)|Deprecato. Attiva la gestione sincrona delle eccezioni. Usare [\/EH](../../build/reference/eh-exception-handling-model.md).|  
|[\/Gy](../../build/reference/gy-enable-function-level-linking.md)|Attiva il collegamento a livello di funzione.|  
|[\/GZ](../../build/reference/gz-enable-stack-frame-run-time-error-checking.md)|Deprecato. Abilita controlli veloci. Equivale a [\/RTC1](../../build/reference/rtc-run-time-error-checks.md).|  
|[\/Gz](../../build/reference/gd-gr-gv-gz-calling-convention.md)|Usa la convezione di chiamata `__stdcall`. \(solo x86\)|  
|[\/homeparams](../../build/reference/homeparams-copy-register-parameters-to-stack.md)|Forza la scrittura di parametri passati nei registri nei rispettivi percorsi nello stack quando vengono immesse funzioni. Questa opzione del compilatore è solo per i compilatori [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] \(compilazione nativa e incrociata\).|  
|[\/hotpatch](../../build/reference/hotpatch-create-hotpatchable-image.md)|Crea un'immagine su cui è applicabile una hot patch|  
|[\/Qfast\_transcendentals](../../build/reference/qfast-transcendentals-force-fast-transcendentals.md)|Genera funzioni trascendenti veloci.|  
|[QIfist](../../build/reference/qifist-suppress-ftol.md)|Deprecato. Disattiva la chiamata della funzione helper `_ftol` quando è necessario eseguire una conversione da un tipo a virgola mobile a un tipo integrale. \(solo x86\)|  
|[\/Qimprecise\_fwaits](../../build/reference/qimprecise-fwaits-remove-fwaits-inside-try-blocks.md)|Rimuove i comandi `fwait` all'interno dei blocchi `try`.|  
|[\/Qpar](../../build/reference/qpar-auto-parallelizer.md)|Abilita la parallelizzazione automatica dei cicli.|  
|[\/Qpar\-report](../../build/reference/qpar-report-auto-parallelizer-reporting-level.md)|Abilita livelli di creazione rapporti per la parallelizzazione automatica.|  
|[\/Qsafe\_fp\_loads](../../build/reference/qsafe-fp-loads.md)|Usa istruzioni di spostamento Integer per i valori a virgola mobile e disabilita determinate ottimizzazioni di carico a virgola mobile.|  
|[\/Qvec\-report \(livello di segnalazione vettorizzazione automatica\)](../../build/reference/qvec-report-auto-vectorizer-reporting-level.md)|Abilita livelli di creazione rapporti per la vettorializzazione automatica.|  
|[\/RTC](../../build/reference/rtc-run-time-error-checks.md)|Attiva il controllo degli errori di runtime.|  
|[\/volatile](../../build/reference/volatile-volatile-keyword-interpretation.md)|Seleziona la modalità di interpretazione della parola chiave volatile.|  
  
### File di output  
  
|Opzione|Scopo|  
|-------------|-----------|  
|[\/doc](../../build/reference/doc-process-documentation-comments-c-cpp.md)|Elabora commenti sulla documentazione in un file XML.|  
|[\/FA](../../build/reference/fa-fa-listing-file.md)|Configura un file di listato dell'assembly.|  
|[\/Fa](../../build/reference/fa-fa-listing-file.md)|Crea un file di listato dell'assembly.|  
|[\/Fd](../../build/reference/fd-program-database-file-name.md)|Rinomina il file del database di programma.|  
|[\/Fe](../../build/reference/fe-name-exe-file.md)|Rinomina il file eseguibile.|  
|[\/Fi](../../build/reference/fi-preprocess-output-file-name.md)|Specifica il nome del file di output pre\-elaborato.|  
|[\/Fm](../../build/reference/fm-name-mapfile.md)|Crea un file MAP.|  
|[\/Fo](../../build/reference/fo-object-file-name.md)|Crea un file oggetto.|  
|[\/Fp](../../build/reference/fp-name-dot-pch-file.md)|Specifica un nome del file di intestazione precompilato.|  
|[\/FR](../../build/reference/fr-fr-create-dot-sbr-file.md) [\/Fr](../../build/reference/fr-fr-create-dot-sbr-file.md)|Genera file del browser.|  
  
### Preprocessore  
  
|Opzione|Scopo|  
|-------------|-----------|  
|[\/AI](../../build/reference/ai-specify-metadata-directories.md)|Specifica una directory in cui eseguire le ricerche per risolvere i riferimenti al file passati alla direttiva [\#using](../../preprocessor/hash-using-directive-cpp.md).|  
|[\/C](../../build/reference/c-preserve-comments-during-preprocessing.md)|Conserva i commenti durante la pre\-elaborazione.|  
|[\/D](../../build/reference/d-preprocessor-definitions.md)|Definisce costanti e macro.|  
|[\/E](../../build/reference/e-preprocess-to-stdout.md)|Copia l'output del preprocessore in un output standard.|  
|[\/EP](../../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md)|Copia l'output del preprocessore in un output standard.|  
|[\/FI](../../build/reference/fi-name-forced-include-file.md)|Pre\-elabora il file di inclusione specificato.|  
|[\/FU](../../build/reference/fu-name-forced-hash-using-file.md)|Impone l'utilizzo di un nome file, come se fosse stato passato alla direttiva [\#using](../../preprocessor/hash-using-directive-cpp.md).|  
|[\/Fx](../../build/reference/fx-merge-injected-code.md)|Unisce il codice inserito al file di origine.|  
|[\/I](../../build/reference/i-additional-include-directories.md)|Ricerca i file di inclusione in una directory.|  
|[\/P](../../build/reference/p-preprocess-to-a-file.md)|Scrive l'output del preprocessore in un file.|  
|[\/U](../../build/reference/u-u-undefine-symbols.md)|Rimuove una macro predefinita.|  
|[\/u](../../build/reference/u-u-undefine-symbols.md)|Rimuove tutte le macro predefinite.|  
|[\/X](../../build/reference/x-ignore-standard-include-paths.md)|Ignora la directory di inclusione standard.|  
  
### Linguaggio  
  
|Opzione|Scopo|  
|-------------|-----------|  
|[\/openmp](../../build/reference/openmp-enable-openmp-2-0-support.md)|Attiva [\#pragma omp](../../preprocessor/omp.md) nel codice sorgente.|  
|[\/vd](../../build/reference/vd-disable-construction-displacements.md)|Disabilita o abilita i membri della classe `vtordisp` nascosti.|  
|[\/vmb](../../build/reference/vmb-vmg-representation-method.md)|Usa la base migliore per i puntatori ai membri.|  
|[\/vmg](../../build/reference/vmb-vmg-representation-method.md)|Usa la generalità completa per i puntatori ai membri.|  
|[\/vmm](../../build/reference/vmm-vms-vmv-general-purpose-representation.md)|Dichiara l'ereditarietà multipla.|  
|[\/vms](../../build/reference/vmm-vms-vmv-general-purpose-representation.md)|Dichiara l'ereditarietà singola.|  
|[\/vmv](../../build/reference/vmm-vms-vmv-general-purpose-representation.md)|Dichiara l'ereditarietà virtuale.|  
|[\/Z7](../../build/reference/z7-zi-zi-debug-information-format.md)|Genera informazioni di debug compatibili con C 7.0.|  
|[\/Za](../../build/reference/za-ze-disable-language-extensions.md)|Disabilita le estensioni del linguaggio.|  
|[\/Zc](../../build/reference/zc-conformance.md)|Specifica il comportamento standard in [\/Ze](../../build/reference/za-ze-disable-language-extensions.md).|  
|[\/Ze](../../build/reference/za-ze-disable-language-extensions.md)|Deprecato. Attiva le estensioni del linguaggio.|  
|[\/ZI](../../build/reference/z7-zi-zi-debug-information-format.md)|Include informazioni di debug in un database di programma compatibile con Modifica e continuazione. \(solo x86\)|  
|[\/Zi](../../build/reference/z7-zi-zi-debug-information-format.md)|Genera informazioni di debug complete.|  
|[\/Zl](../../build/reference/zl-omit-default-library-name.md)|Rimuove il nome di libreria predefinito dal file obj.|  
|[\/Zp](../../build/reference/zp-struct-member-alignment.md) *n*|Comprime i membri della struttura.|  
|[\/Zs](../../build/reference/zs-syntax-check-only.md)|Controlla solo la sintassi.|  
|[\/ZW](../../build/reference/zw-windows-runtime-compilation.md)|Genera un file di output da eseguire in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].|  
  
### Collegamento  
  
|Opzione|Scopo|  
|-------------|-----------|  
|[\/F](../../build/reference/f-set-stack-size.md)|Imposta la dimensione dello stack.|  
|[\/LD](../../build/reference/md-mt-ld-use-run-time-library.md)|Crea una libreria a collegamento dinamico.|  
|[\/LDd](../../build/reference/md-mt-ld-use-run-time-library.md)|Crea una libreria a collegamento dinamico di debug.|  
|[\/link](../../build/reference/link-pass-options-to-linker.md)|Passa l'opzione specificata a LINK.|  
|[\/LN](../../build/reference/ln-create-msil-module.md)|Crea un modulo MSIL|  
|[\/MD](../../build/reference/md-mt-ld-use-run-time-library.md)|Esegue la compilazione per creare una DLL con multithreading, usando MSVCRT.lib.|  
|[\/MDd](../../build/reference/md-mt-ld-use-run-time-library.md)|Esegue la compilazione per creare una DLL con multithreading di debug, usando MSVCRTD.lib.|  
|[\/MT](../../build/reference/md-mt-ld-use-run-time-library.md)|Esegue la compilazione per creare un file eseguibile con multithreading, usando LIBCMT.lib.|  
|[\/MTd](../../build/reference/md-mt-ld-use-run-time-library.md)|Esegue la compilazione per creare un file eseguibile con multithreading di debug, usando LIBCMTD.lib.|  
  
### Intestazione precompilata  
  
|Opzione|Scopo|  
|-------------|-----------|  
|[\/Y\-](../../build/reference/y-ignore-precompiled-header-options.md)|Ignora tutte le altre opzioni del compilatore dell'intestazione precompilata nella generazione corrente.|  
|[\/Yc](../../build/reference/yc-create-precompiled-header-file.md)|Crea un file di intestazione precompilato.|  
|[\/Yd](../../build/reference/yd-place-debug-information-in-object-file.md)|Inserisce informazioni di debug complete in tutti i file oggetto.|  
|[\/Yu](../../build/reference/yu-use-precompiled-header-file.md)|Usa un file di intestazione precompilato durante la compilazione.|  
  
### Varie  
  
|Opzione|Scopo|  
|-------------|-----------|  
|[\/?](../../build/reference/help-compiler-command-line-help.md)|Elenca le opzioni del compilatore.|  
|[@](../../build/reference/at-specify-a-compiler-response-file.md)|Specifica un file di risposta.|  
|[\/analyze](../../build/reference/analyze-code-analysis.md)|Attiva l'analisi del codice|  
|[\/bigobj](../../build/reference/bigobj-increase-number-of-sections-in-dot-obj-file.md)|Aumenta il numero di sezioni indirizzabili in un file con estensione obj.|  
|[\/c](../../build/reference/c-compile-without-linking.md)|Effettua la compilazione senza collegamento.|  
|[\/cgthreads](../../build/reference/cgthreads-code-generation-threads.md)|Specifica il numero di thread cl.exe da usare per l'ottimizzazione e la generazione di codice.|  
|[\/errorReport](../../build/reference/errorreport-report-internal-compiler-errors.md)|Consente di inviare informazioni sugli errori interni del compilatore direttamente al team di Visual C\+\+.|  
|[\/FC](../../build/reference/fc-full-path-of-source-code-file-in-diagnostics.md)|Visualizza il percorso completo dei file di codice sorgente passati a cl.exe nel testo contenente informazioni di diagnostica.|  
|[\/FS](../../build/reference/fs-force-synchronous-pdb-writes.md)|Forza scritture nel file del database di programma \(PDB\) per la serializzazione tramite MSPDBSRV.EXE.|  
|[\/H](../../build/reference/h-restrict-length-of-external-names.md)|Deprecato. Limita la lunghezza dei nomi esterni \(pubblici\).|  
|[\/HELP](../../build/reference/help-compiler-command-line-help.md)|Elenca le opzioni del compilatore.|  
|[\/J](../../build/reference/j-default-char-type-is-unsigned.md)|Modifica il tipo `char` predefinito.|  
|[\/kernel](../../build/reference/kernel-create-kernel-mode-binary.md)|Il compilatore e il linker creeranno un file binario che può essere eseguito nel kernel di Windows.|  
|[\/MP](../../build/reference/mp-build-with-multiple-processes.md)|Compila contemporaneamente più file di origine.|  
|[\/nologo](../../build/reference/nologo-suppress-startup-banner-c-cpp.md)|Evita la visualizzazione dell'intestazione di iscrizione.|  
|[\/sdl](../../build/reference/sdl-enable-additional-security-checks.md)|Abilita funzionalità e avvisi di sicurezza aggiuntivi.|  
|[\/showIncludes](../../build/reference/showincludes-list-include-files.md)|Visualizza un elenco di tutti i file di inclusione durante la compilazione.|  
|[\/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) [\/TC](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md)|Specifica un file di origine C.|  
|[\/Tp](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) [\/TP](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md)|Specifica un file di origine C\+\+.|  
|[\/V](../../build/reference/v-version-number.md)|Deprecato. Imposta la stringa di versione.|  
|[\/w](../../build/reference/compiler-option-warning-level.md)|Disabilita tutti gli avvisi.|  
|[\/W0, \/W1, \/W2, \/W3, \/W4](../../build/reference/compiler-option-warning-level.md)|Imposta il livello di avviso di output.|  
|[\/w1, \/w2, \/w3, \/w4](../../build/reference/compiler-option-warning-level.md)|Imposta il livello di avviso per l'avviso specificato.|  
|[\/Wall](../../build/reference/compiler-option-warning-level.md)|Abilita tutti gli avvisi, inclusi quelli disabilitati per impostazione predefinita.|  
|[\/wd](../../build/reference/compiler-option-warning-level.md)|Disattiva l'avviso specificato.|  
|[\/we](../../build/reference/compiler-option-warning-level.md)|Considera l'avviso specificato come un errore.|  
|[\/WL](../../build/reference/wl-enable-one-line-diagnostics.md)|Attiva la diagnostica a riga singola dei messaggi di errore e di avviso durante la compilazione del codice sorgente C\+\+ dalla riga di comando.|  
|[\/wo](../../build/reference/compiler-option-warning-level.md)|Visualizza l'avviso specificato una sola volta.|  
|[\/Wp64](../../build/reference/wp64-detect-64-bit-portability-issues.md)|Obsoleta. Rileva i problemi di portabilità a 64 bit.|  
|[\/Wv](../../build/reference/compiler-option-warning-level.md)|Disattiva gli avvisi introdotti dalle versioni più recenti del compilatore.|  
|[\/WX](../../build/reference/compiler-option-warning-level.md)|Considera gli avvisi come errori.|  
|[\/Yd](../../build/reference/yd-place-debug-information-in-object-file.md)|Deprecato. Inserisce informazioni di debug complete in tutti i file oggetto. Usare [\/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).|  
|[\/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md)|Inserisce un riferimento PCH durante la creazione di una libreria di debug.|  
|[\/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md)|Specifica il limite di allocazione di memoria delle intestazioni precompilate.|  
  
### Opzioni del compilatore deprecate e rimosse  
  
|Opzione|Scopo|  
|-------------|-----------|  
|[\/clr:noAssembly](../../build/reference/clr-common-language-runtime-compilation.md)|Deprecato. In alternativa, usare [\/LN \(Crea modulo MSIL\)](../../build/reference/ln-create-msil-module.md).|  
|[\/Fr](../../build/reference/fr-fr-create-dot-sbr-file.md)|Deprecato. Crea un file informazioni di visualizzazione senza variabili locali.|  
|[\/Ge](../../build/reference/ge-enable-stack-probes.md)|Deprecato. Attiva le ricerche dello stack. Attivazione per impostazione predefinita.|  
|[\/GX](../../build/reference/gx-enable-exception-handling.md)|Deprecato. Attiva la gestione sincrona delle eccezioni. Usare [\/EH](../../build/reference/eh-exception-handling-model.md).|  
|[\/GZ](../../build/reference/gz-enable-stack-frame-run-time-error-checking.md)|Deprecato. Abilita controlli veloci. Usare [\/RTC1](../../build/reference/rtc-run-time-error-checks.md).|  
|[\/H](../../build/reference/h-restrict-length-of-external-names.md)|Deprecato. Limita la lunghezza dei nomi esterni \(pubblici\).|  
|[\/Og](../../build/reference/og-global-optimizations.md)|Deprecato. Usa le ottimizzazioni globali.|  
|[QIfist](../../build/reference/qifist-suppress-ftol.md)|Deprecato. Usato in passato per specificare come eseguire la conversione da un tipo a virgola mobile a un tipo integrale.|  
|[\/V](../../build/reference/v-version-number.md)|Deprecato. Imposta la stringa di versione del file OBJ.|  
|[\/Yd](../../build/reference/yd-place-debug-information-in-object-file.md)|Deprecato. Inserisce informazioni di debug complete in tutti i file oggetto. Usare [\/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).|  
|[\/Zc:forScope\-](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md)|Deprecato. Disattiva la conformità nell'ambito di un ciclo For.|  
|[\/Ze](../../build/reference/za-ze-disable-language-extensions.md)|Deprecato. Attiva le estensioni del linguaggio.|  
|[\/Zg](../../build/reference/zg-generate-function-prototypes.md)|Rimosso in Visual C\+\+ 2015. Genera prototipi di funzione.|  
  
## Vedere anche  
 [Riferimenti alla compilazione in C\/C\+\+](../../build/reference/c-cpp-building-reference.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)