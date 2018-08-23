---
title: Opzioni del compilatore elencate in ordine alfabetico | Microsoft Docs
ms.custom: ''
ms.date: 08/20/2018
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- compiler options, C++
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 985232af68daebe924cd51300974d614bf6d6756
ms.sourcegitcommit: 7f3df9ff0310a4716b8136ca20deba699ca86c6c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/21/2018
ms.locfileid: "42573102"
---
# <a name="compiler-options-listed-alphabetically"></a>Opzioni del compilatore elencate in ordine alfabetico

Di seguito viene riportato un elenco completo in ordine alfabetico delle opzioni del compilatore. Per un elenco organizzato per categorie, vedere la [opzioni del compilatore elencate per categoria](compiler-options-listed-by-category.md).

|Opzione|Scopo|
|------------|-------------|
|[@](at-specify-a-compiler-response-file.md)|Specifica un file di risposta.|
|[/?](help-compiler-command-line-help.md)|Elenca le opzioni del compilatore.|
|[/AI](ai-specify-metadata-directories.md)|Specifica una directory in cui eseguire le ricerche per risolvere i riferimenti al file passati alla direttiva [#using](../../preprocessor/hash-using-directive-cpp.md) .|
|[/analyze](analyze-code-analysis.md)|Attiva l'analisi del codice|
|[/arch](arch-minimum-cpu-architecture.md)|Specifica l'architettura per la generazione di codice.|
|[/await](await-enable-coroutine-support.md)|Abilitare le estensioni di coroutine (funzioni ripristinabili).|
|[/bigobj](bigobj-increase-number-of-sections-in-dot-obj-file.md)|Aumenta il numero di sezioni indirizzabili in un file con estensione obj.|
|[/C](c-preserve-comments-during-preprocessing.md)|Conserva i commenti durante la pre-elaborazione.|
|[/c](c-compile-without-linking.md)|Effettua la compilazione senza collegamento.|
|[/cgthreads](cgthreads-code-generation-threads.md)|Specifica il numero di thread cl.exe da usare per l'ottimizzazione e la generazione di codice.|
|[/clr](clr-common-language-runtime-compilation.md)|Genera un file di output da eseguire in Common Language Runtime.|
|[/constexpr](constexpr-control-constexpr-evaluation.md)|Controlla la valutazione di constexpr in fase di compilazione.|
|[/D](d-preprocessor-definitions.md)|Definisce costanti e macro.|
|[/diagnostics](diagnostics-compiler-diagnostic-options.md)|Controlla il formato dei messaggi di diagnostica.|
|[/doc](doc-process-documentation-comments-c-cpp.md)|Elabora commenti per la documentazione in un file XML.|
|[/E](e-preprocess-to-stdout.md)|Copia l'output del preprocessore in un output standard.|
|[/EH](eh-exception-handling-model.md)|Specifica il modello di gestione delle eccezioni.|
|[/EP](ep-preprocess-to-stdout-without-hash-line-directives.md)|Copia l'output del preprocessore in un output standard.|
|[/errorReport](errorreport-report-internal-compiler-errors.md)|Consente di inviare le informazioni sugli errori interni del compilatore direttamente al team di Visual C++.|
|[/execution-charset](execution-charset-set-execution-character-set.md)|Set esecuzione character set.|
|[/F](f-set-stack-size.md)|Imposta la dimensione dello stack.|
|[/favor](favor-optimize-for-architecture-specifics.md)|Genera codice ottimizzato per un determinato x64 architettura o per le specifiche delle microarchitetture nelle architetture di AMD64 ed Extended Memory 64 Technology (EM64T).|
|[/FA](fa-fa-listing-file.md)|Crea un file di listato.|
|[/Fa](fa-fa-listing-file.md)|Imposta il nome del file di listato.|
|[/FC](fc-full-path-of-source-code-file-in-diagnostics.md)|Visualizza il percorso completo dei file di codice sorgente passati a cl.exe nel testo contenente informazioni di diagnostica.|
|[/Fd](fd-program-database-file-name.md)|Rinomina il file del database di programma.|
|[/Fe](fe-name-exe-file.md)|Rinomina il file eseguibile.|
|[/FI](fi-name-forced-include-file.md)|Pre-elabora il file di inclusione specificato.|
|[/Fi](fi-preprocess-output-file-name.md)|Imposta il nome del file di output pre-elaborato.|
|[/Fm](fm-name-mapfile.md)|Crea un file MAP.|
|[/Fo](fo-object-file-name.md)|Crea un file oggetto.|
|[/fp](fp-specify-floating-point-behavior.md)|Specifica il comportamento della virgola mobile.|
|[/Fp](fp-name-dot-pch-file.md)|Specifica un nome del file di intestazione precompilato.|
|[/FR](fr-fr-create-dot-sbr-file.md)<br /><br /> [/Fr](fr-fr-create-dot-sbr-file.md)|Genera file del browser. **/Fr** è stato deprecato.|
|[/FS](fs-force-synchronous-pdb-writes.md)|Forza scritture nel file del database di programma (PDB) per la serializzazione tramite MSPDBSRV.EXE.|
|[/FU](fu-name-forced-hash-using-file.md)|Impone l'utilizzo di un nome file, come se fosse stato passato alla direttiva [#using](../../preprocessor/hash-using-directive-cpp.md) .|
|[/Fx](fx-merge-injected-code.md)|Unisce il codice inserito al file di origine.|
|[/GA](ga-optimize-for-windows-application.md)|Ottimizza il codice per l'applicazione Windows.|
|[/Gd](gd-gr-gv-gz-calling-convention.md)|Usa la convenzione di chiamata `__cdecl` (solo x86).|
|[/Ge](ge-enable-stack-probes.md)|Deprecato. Attiva le ricerche dello stack.|
|[/GF](gf-eliminate-duplicate-strings.md)|Attiva la condivisione delle stringhe.|
|[/GH](gh-enable-pexit-hook-function.md)|Chiama la funzione hook `_pexit`.|
|[/Gh](gh-enable-penter-hook-function.md)|Chiama la funzione hook `_penter`.|
|[/GL](gl-whole-program-optimization.md)|Attiva l'ottimizzazione dell'intero programma.|
|[/Gm](gm-enable-minimal-rebuild.md)|Attiva una ricompilazione minima.|
|[/GR](gr-enable-run-time-type-information.md)|Attiva RTTI (Run-Time Type Information).|
|[/Gr](gd-gr-gv-gz-calling-convention.md)|Usa la convenzione di chiamata `__fastcall` (solo x86).|
|[/GS](gs-buffer-security-check.md)|Inserisce i controlli di sicurezza nel buffer.|
|[/Gs](gs-control-stack-checking-calls.md)|Controlla le ricerche dello stack.|
|[/GT](gt-support-fiber-safe-thread-local-storage.md)|Supporta l'indipendenza da fiber per i dati allocati mediante l'archiviazione locale di thread statici.|
|[/guard:cf](guard-enable-control-flow-guard.md)|Aggiunge controlli di sicurezza guard del flusso di controllo.|
|[/Gv](gd-gr-gv-gz-calling-convention.md)|Usa la convezione di chiamata `__vectorcall` . (solo x86 e x64)|
|[/Gw](gw-optimize-global-data.md)|Abilita l'ottimizzazione dei dati globale per l'intero programma|
|[/GX](gx-enable-exception-handling.md)|Deprecato. Attiva la gestione sincrona delle eccezioni. Uso [/EH](eh-exception-handling-model.md) invece.|
|[/Gy](gy-enable-function-level-linking.md)|Attiva il collegamento a livello di funzione.|
|[/GZ](gz-enable-stack-frame-run-time-error-checking.md)|Deprecato. Uguale allo [/RTC1](rtc-run-time-error-checks.md).|
|[/Gz](gd-gr-gv-gz-calling-convention.md)|Usa la convenzione di chiamata `__stdcall` (solo x86).|
|[/H](h-restrict-length-of-external-names.md)|Deprecato. Limita la lunghezza dei nomi esterni (pubblici).|
|[/HELP](help-compiler-command-line-help.md)|Elenca le opzioni del compilatore.|
|[/homeparams](homeparams-copy-register-parameters-to-stack.md)|Forza la scrittura di parametri passati nei registri nei rispettivi percorsi nello stack quando vengono immesse funzioni. Questa opzione del compilatore è solo per x64 compilatori (compilazione nativi e incrociata).|
|[/hotpatch](hotpatch-create-hotpatchable-image.md)|Crea un'immagine su cui è applicabile una hot patch|
|[/I](i-additional-include-directories.md)|Ricerca i file di inclusione in una directory.|
|[/J](j-default-char-type-is-unsigned.md)|Modifica il tipo `char` predefinito.|
|[/ JMC](jmc.md)|Supporta il debug nativo C++ Just My Code.|
|[/kernel](kernel-create-kernel-mode-binary.md)|Il compilatore e il linker creeranno un file binario che può essere eseguito nel kernel di Windows.|
|[/LD](md-mt-ld-use-run-time-library.md)|Crea una libreria a collegamento dinamico.|
|[/LDd](md-mt-ld-use-run-time-library.md)|Crea una libreria a collegamento dinamico di debug.|
|[/link](link-pass-options-to-linker.md)|Passa l'opzione specificata a LINK.|
|[/LN](ln-create-msil-module.md)|Crea un modulo MSIL|
|[/MD](md-mt-ld-use-run-time-library.md)|Crea una DLL con multithreading usando MSVCRT.lib.|
|[/MDd](md-mt-ld-use-run-time-library.md)|Crea una DLL con multithreading di debug usando MSVCRTD.lib.|
|[/MP](mp-build-with-multiple-processes.md)|Compila più file di origine usando più processi.|
|[/MT](md-mt-ld-use-run-time-library.md)|Crea un file eseguibile con multithreading usando LIBCMT.lib.|
|[/MTd](md-mt-ld-use-run-time-library.md)|Crea un file eseguibile con multithreading di debug usando LIBCMTD.lib.|
|[/nologo](nologo-suppress-startup-banner-c-cpp.md)|Evita la visualizzazione dell'intestazione di iscrizione.|
|[/O1](o1-o2-minimize-size-maximize-speed.md)|Effettua creazioni in base alla dimensione del codice.|
|[/O2](o1-o2-minimize-size-maximize-speed.md)|Effettua creazioni in base alla velocità del codice.|
|[/Ob](ob-inline-function-expansion.md)|Controlla l'espansione inline.|
|[/Od](od-disable-debug.md)|Disabilita l'ottimizzazione.|
|[/Og](og-global-optimizations.md)|Deprecato. Usa le ottimizzazioni globali.|
|[/Oi](oi-generate-intrinsic-functions.md)|Genera funzioni intrinseche.|
|[/openmp](openmp-enable-openmp-2-0-support.md)|Attiva [#pragma omp](../../preprocessor/omp.md) nel codice sorgente.|
|[/OS](os-ot-favor-small-code-favor-fast-code.md)|Ottimizza per dimensione codice.|
|[/Ot](os-ot-favor-small-code-favor-fast-code.md)|Ottimizza per velocità codice.|
|[/Ox](ox-full-optimization.md)|Usa la massima ottimizzazione (/Ob2gity /Gs).|
|[/Oy](oy-frame-pointer-omission.md)|Omette il puntatore a frame (solo x86).|
|[/P](p-preprocess-to-a-file.md)|Scrive l'output del preprocessore in un file.|
|[/permissive-](permissive-standards-conformance.md)|Impostare la modalità standard-operazioni di conformità.|
|[/Qfast_transcendentals](qfast-transcendentals-force-fast-transcendentals.md)|Genera funzioni trascendenti veloci.|
|[/QIfist](qifist-suppress-ftol.md)|Deprecato. Elimina `_ftol` quando è necessario eseguire una conversione da un tipo a virgola mobile a un tipo integrale (solo x86).|
|[/Qimprecise_fwaits](qimprecise-fwaits-remove-fwaits-inside-try-blocks.md)|Rimuove i comandi `fwait` all'interno dei blocchi `try` .|
|[/Qpar (parallelizzazione automatica)](qpar-auto-parallelizer.md)|Abilita la parallelizzazione automatica dei cicli contrassegnati con la direttiva [#pragma loop()](../../preprocessor/loop.md) .|
|[/Qsafe_fp_loads](qsafe-fp-loads.md)|Usa istruzioni di spostamento Integer per i valori a virgola mobile e disabilita determinate ottimizzazioni di carico a virgola mobile.|
|[/Qvec/report (livello di segnalazione vettorizzazione automatica)](qvec-report-auto-vectorizer-reporting-level.md)|Abilita livelli di creazione rapporti per la vettorializzazione automatica.|
|[/RTC](rtc-run-time-error-checks.md)|Attiva il controllo degli errori di runtime.|
|[/sdl](sdl-enable-additional-security-checks.md)|Abilita funzionalità e avvisi di sicurezza aggiuntivi.|
|[/showIncludes](showincludes-list-include-files.md)|Visualizza un elenco di file di inclusione durante la compilazione.|
|[/source-charset](source-charset-set-source-character-set.md)|Set di set di caratteri di origine.|
|[/std](std-specify-language-standard-version.md)|Selettore di compatibilità di versione standard C++.|
|[/Tc](tc-tp-tc-tp-specify-source-file-type.md)|Specifica un file di origine C.|
|[/TC](tc-tp-tc-tp-specify-source-file-type.md)|Specifica che tutti i file di origine sono C.|
|[/Tp](tc-tp-tc-tp-specify-source-file-type.md)|Specifica un file di origine C++.|
|[/TP](tc-tp-tc-tp-specify-source-file-type.md)|Specifica tutti i file di origine C++.|
|[/U](u-u-undefine-symbols.md)|Rimuove una macro predefinita.|
|[/u](u-u-undefine-symbols.md)|Rimuove tutte le macro predefinite.|
|[/utf-8](utf-8-set-source-and-executable-character-sets-to-utf-8.md)|Set di caratteri di origine e l'esecuzione di set in UTF-8.|
|[/V](v-version-number.md)|Deprecato. Imposta la stringa di versione del file OBJ.|
|[/validate-charset](validate-charset-validate-for-compatible-characters.md)|Convalidare i file UTF-8 per solo i caratteri compatibili.|
|[/vd](vd-disable-construction-displacements.md)|Disabilita o abilita i membri della classe vtordisp nascosti.|
|[/vmb](vmb-vmg-representation-method.md)|Usa la base migliore per i puntatori ai membri.|
|[/vmg](vmb-vmg-representation-method.md)|Usa la generalità completa per i puntatori ai membri.|
|[/vmm](vmm-vms-vmv-general-purpose-representation.md)|Dichiara l'ereditarietà multipla.|
|[/vms](vmm-vms-vmv-general-purpose-representation.md)|Dichiara l'ereditarietà singola.|
|[/vmv](vmm-vms-vmv-general-purpose-representation.md)|Dichiara l'ereditarietà virtuale.|
|[/ volatile](volatile-volatile-keyword-interpretation.md)|Seleziona la modalità di interpretazione della parola chiave volatile.|
|[/w](compiler-option-warning-level.md)|Disabilita tutti gli avvisi.|
|[/W0, /W1, /W2, /W3, /W4](compiler-option-warning-level.md)|Imposta il livello di avviso per l'output.|
|[/w1, /w2, /w3, /w4](compiler-option-warning-level.md)|Imposta il livello di avviso per l'avviso specificato.|
|[/Wall](compiler-option-warning-level.md)|Abilita tutti gli avvisi, inclusi quelli disabilitati per impostazione predefinita.|
|[/wd](compiler-option-warning-level.md)|Disattiva l'avviso specificato.|
|[/we](compiler-option-warning-level.md)|Considera l'avviso specificato come un errore.|
|[/WL](wl-enable-one-line-diagnostics.md)|Attiva la diagnostica a riga singola dei messaggi di errore e di avviso durante la compilazione del codice sorgente C++ dalla riga di comando.|
|[/wo](compiler-option-warning-level.md)|Visualizza l'avviso specificato una sola volta.|
|[/Wp64](wp64-detect-64-bit-portability-issues.md)|Obsoleta. Rileva i problemi di portabilità a 64 bit.|
|[/Wv](compiler-option-warning-level.md)|Non visualizza avvisi introdotti dopo la versione specificata del compilatore.|
|[/WX](compiler-option-warning-level.md)|Considera tutti gli avvisi come errori.|
|[/X](x-ignore-standard-include-paths.md)|Ignora la directory di inclusione standard.|
|[/Y-](y-ignore-precompiled-header-options.md)|Ignora tutte le altre opzioni del compilatore dell'intestazione precompilata nella generazione corrente.|
|[/Yc](yc-create-precompiled-header-file.md)|Crea un file di intestazione precompilato.|
|[/Yd](yd-place-debug-information-in-object-file.md)|Deprecato. Inserisce informazioni di debug complete in tutti i file oggetto. Uso [/Zi](z7-zi-zi-debug-information-format.md) invece.|
|[/Yl](yl-inject-pch-reference-for-debug-library.md)|Inserisce un riferimento PCH durante la creazione di una libreria di debug|
|[/Yu](yu-use-precompiled-header-file.md)|Usa un file di intestazione precompilato durante la compilazione.|
|[/Z7](z7-zi-zi-debug-information-format.md)|Genera l'errore compatibile C 7.0 le informazioni di debug.|
|[/Za](za-ze-disable-language-extensions.md)|Disabilita le estensioni del linguaggio.|
|[/Zc](zc-conformance.md)|Specifica il comportamento standard in [/Ze](za-ze-disable-language-extensions.md).[ /Za, /Ze (Disabilita estensioni linguaggio)](za-ze-disable-language-extensions.md)|
|[/Ze](za-ze-disable-language-extensions.md)|Deprecato. Attiva le estensioni del linguaggio.|
|[/Zf](zf.md)|Consente di migliorare tempo nelle compilazioni parallele per la generazione di PDB.|
|[/Zg](zg-generate-function-prototypes.md)|Rimosso in Visual C++ 2015. Genera prototipi di funzione.|
|[/ZI](z7-zi-zi-debug-information-format.md)|Include informazioni di debug in un database di programma compatibile con Modifica e continuazione.|
|[/Zi](z7-zi-zi-debug-information-format.md)|Genera informazioni di debug complete.|
|[/Zl](zl-omit-default-library-name.md)|Rimuove il nome di libreria predefinito dal file obj (solo x86).|
|[/Zm](zm-specify-precompiled-header-memory-allocation-limit.md)|Specifica il limite di allocazione di memoria delle intestazioni precompilate.|
|[/Zp](zp-struct-member-alignment.md)|Comprime i membri della struttura.|
|[/Zs](zs-syntax-check-only.md)|Controlla solo la sintassi.|
|[/ZW](zw-windows-runtime-compilation.md)|Produce un file di output per l'esecuzione nel Runtime di Windows.|

## <a name="see-also"></a>Vedere anche
 [C/C++ Building Reference](c-cpp-building-reference.md) [le opzioni del compilatore](compiler-options.md) [impostazione delle opzioni del compilatore](setting-compiler-options.md)