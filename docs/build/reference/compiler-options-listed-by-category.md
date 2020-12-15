---
title: Opzioni del compilatore elencate per categoria
description: Elenco di riferimento per categoria delle opzioni della riga di comando del compilatore Microsoft C/C++.
ms.date: 07/29/2020
helpviewer_keywords:
- compiler options, C++
ms.assetid: c4750dcf-dba0-4229-99b6-45cdecc11729
ms.openlocfilehash: bf12948658b5f7e3211c423b5302bc52d1b87729
ms.sourcegitcommit: 48b897797b3132ae934b1d191e3870c3c2466335
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/15/2020
ms.locfileid: "97514568"
---
# <a name="compiler-options-listed-by-category"></a>Opzioni del compilatore elencate per categoria

In questo articolo viene fornito un elenco organizzato per categorie delle opzioni del compilatore. Per un elenco alfabetico, vedere [Opzioni del compilatore elencate in ordine alfabetico](compiler-options-listed-alphabetically.md).

## <a name="optimization"></a>Optimization

| Opzione | Scopo |
|--|--|
| [`/O1`](o1-o2-minimize-size-maximize-speed.md) | Effettua creazioni in base alla dimensione del codice. |
| [`/O2`](o1-o2-minimize-size-maximize-speed.md) | Effettua creazioni in base alla velocità del codice. |
| [`/Ob`](ob-inline-function-expansion.md) | Controlla l'espansione inline. |
| [`/Od`](od-disable-debug.md) | Disabilita l'ottimizzazione. |
| [`/Og`](og-global-optimizations.md) | Deprecato. Usa le ottimizzazioni globali. |
| [`/Oi`](oi-generate-intrinsic-functions.md) | Genera funzioni intrinseche. |
| [`/Os`](os-ot-favor-small-code-favor-fast-code.md) | Ottimizza per dimensione codice. |
| [`/Ot`](os-ot-favor-small-code-favor-fast-code.md) | Ottimizza per velocità codice. |
| [`/Ox`](ox-full-optimization.md) | Subset di/O2 che non include/GF o/GY. |
| [`/Oy`](oy-frame-pointer-omission.md) | Omette i puntatori ai frame. (solo x86) |
| [`/favor`](favor-optimize-for-architecture-specifics.md) | Genera codice ottimizzato per un'architettura specifica o per una gamma di architetture. |

## <a name="code-generation"></a>Generazione del codice

| Opzione | Scopo |
|--|--|
| [`/arch`](arch-x86.md) | Usa istruzioni SSE o SSE2 nella generazione di codice. (solo x86) |
| [`/clr`](clr-common-language-runtime-compilation.md) | Genera un file di output da eseguire in Common Language Runtime. |
| [`/EH`](eh-exception-handling-model.md) | Specifica il modello di gestione delle eccezioni. |
| [`/fp`](fp-specify-floating-point-behavior.md) | Specifica il comportamento a virgola mobile. |
| [`/GA`](ga-optimize-for-windows-application.md) | Ottimizza per le applicazioni Windows. |
| [`/Gd`](gd-gr-gv-gz-calling-convention.md) | Usa la **`__cdecl`** convenzione di chiamata. (solo x86) |
| [`/Ge`](ge-enable-stack-probes.md) | Deprecato. Attiva le ricerche dello stack. |
| [`/GF`](gf-eliminate-duplicate-strings.md) | Attiva la condivisione delle stringhe. |
| [`/Gh`](gh-enable-penter-hook-function.md) | Chiama la funzione hook `_penter`. |
| [`/GH`](gh-enable-pexit-hook-function.md) | Chiama la funzione hook `_pexit`. |
| [`/GL`](gl-whole-program-optimization.md) | Attiva l'ottimizzazione dell'intero programma. |
| [`/Gm`](gm-enable-minimal-rebuild.md) | Deprecato. Attiva una ricompilazione minima. |
| [`/GR`](gr-enable-run-time-type-information.md) | Attiva RTTI (Run-Time Type Information). |
| [`/Gr`](gd-gr-gv-gz-calling-convention.md) | Usa la **`__fastcall`** convenzione di chiamata. (solo x86) |
| [`/GS`](gs-buffer-security-check.md) | Controlla la sicurezza del buffer. |
| [`/Gs`](gs-control-stack-checking-calls.md) | Controlla le ricerche dello stack. |
| [`/GT`](gt-support-fiber-safe-thread-local-storage.md) | Supporta l'indipendenza da fiber per i dati allocati usando l'archiviazione locale di thread statici. |
| [`/guard:cf`](guard-enable-control-flow-guard.md) | Aggiunge controlli di sicurezza guard del flusso di controllo. |
| [`/guard:ehcont`](guard-enable-eh-continuation-metadata.md) | Abilita i metadati di continuazione EH. |
| [`/Gv`](gd-gr-gv-gz-calling-convention.md) | Usa la **`__vectorcall`** convenzione di chiamata. (solo x86 e x64) |
| [`/Gw`](gw-optimize-global-data.md) | Abilita l'ottimizzazione dei dati globale per l'intero programma |
| [`/GX`](gx-enable-exception-handling.md) | Deprecato. Attiva la gestione sincrona delle eccezioni. In [`/EH`](eh-exception-handling-model.md) alternativa, usare. |
| [`/Gy`](gy-enable-function-level-linking.md) | Attiva il collegamento a livello di funzione. |
| [`/GZ`](gz-enable-stack-frame-run-time-error-checking.md) | Deprecato. Abilita controlli veloci. (Uguale a [`/RTC1`](rtc-run-time-error-checks.md) ) |
| [`/Gz`](gd-gr-gv-gz-calling-convention.md) | Usa la **`__stdcall`** convenzione di chiamata. (solo x86) |
| [`/homeparams`](homeparams-copy-register-parameters-to-stack.md) | Forza la scrittura di parametri passati nei registri nei rispettivi percorsi nello stack quando vengono immesse funzioni. Questa opzione del compilatore è solo per i compilatori x64 (compilazione nativa e incrociata). |
| [`/hotpatch`](hotpatch-create-hotpatchable-image.md) | Crea un'immagine su cui è applicabile una hot patch |
| [`/Qfast_transcendentals`](qfast-transcendentals-force-fast-transcendentals.md) | Genera funzioni trascendenti veloci. |
| [`/QIfist`](qifist-suppress-ftol.md) | Deprecato. Disattiva la chiamata della funzione helper `_ftol` quando è necessario eseguire una conversione da un tipo a virgola mobile a un tipo integrale. (solo x86) |
| [`/Qimprecise_fwaits`](qimprecise-fwaits-remove-fwaits-inside-try-blocks.md) | Rimuove i `fwait` comandi all'interno di **`try`** blocchi. |
| [`/QIntel-jcc-erratum`](qintel-jcc-erratum.md) | Attenua l'effetto sulle prestazioni dell'aggiornamento di microcodice cui all'errata Intel CCM. |
| [`/Qpar`](qpar-auto-parallelizer.md) | Abilita la parallelizzazione automatica dei cicli. |
| [`/Qpar-report`](qpar-report-auto-parallelizer-reporting-level.md) | Abilita livelli di creazione rapporti per la parallelizzazione automatica. |
| [`/Qsafe_fp_loads`](qsafe-fp-loads.md) | Usa istruzioni di spostamento Integer per i valori a virgola mobile e disabilita determinate ottimizzazioni di carico a virgola mobile. |
| [`/Qspectre`](qspectre.md) | Abilitare le mitigazioni per CVE 2017-5753, per una classe di attacchi Spectre. |
| [`/Qspectre-load`](qspectre-load.md) | Genera istruzioni di serializzazione per ogni istruzione di caricamento. |
| [`/Qspectre-load-cf`](qspectre-load-cf.md) | Genera istruzioni di serializzazione per ogni istruzione del flusso di controllo che carica la memoria. |
| [`/Qvec-report`](qvec-report-auto-vectorizer-reporting-level.md) | Abilita livelli di creazione rapporti per la vettorializzazione automatica. |
| [`/RTC`](rtc-run-time-error-checks.md) | Attiva il controllo degli errori di runtime. |
| [`/volatile`](volatile-volatile-keyword-interpretation.md) | Seleziona la modalità di interpretazione della parola chiave volatile. |

## <a name="output-files"></a>File di output

| Opzione | Scopo |
|--|--|
| [`/doc`](doc-process-documentation-comments-c-cpp.md) | Elabora commenti sulla documentazione in un file XML. |
| [`/FA`](fa-fa-listing-file.md) | Configura un file di listato dell'assembly. |
| [`/Fa`](fa-fa-listing-file.md) | Crea un file di listato dell'assembly. |
| [`/Fd`](fd-program-database-file-name.md) | Rinomina il file del database di programma. |
| [`/Fe`](fe-name-exe-file.md) | Rinomina il file eseguibile. |
| [`/Fi`](fi-preprocess-output-file-name.md) | Specifica il nome del file di output pre-elaborato. |
| [`/Fm`](fm-name-mapfile.md) | Crea un file MAP. |
| [`/Fo`](fo-object-file-name.md) | Crea un file oggetto. |
| [`/Fp`](fp-name-dot-pch-file.md) | Specifica un nome del file di intestazione precompilato. |
| [`/FR`, `/Fr`](fr-fr-create-dot-sbr-file.md) | Nome *`.sbr`* file del browser generati. |

## <a name="preprocessor"></a>Preprocessore

| Opzione | Scopo |
|--|--|
| [`/AI`](ai-specify-metadata-directories.md) | Specifica una directory in cui eseguire le ricerche per risolvere i riferimenti al file passati alla direttiva [#using](../../preprocessor/hash-using-directive-cpp.md) . |
| [`/C`](c-preserve-comments-during-preprocessing.md) | Conserva i commenti durante la pre-elaborazione. |
| [`/D`](d-preprocessor-definitions.md) | Definisce costanti e macro. |
| [`/E`](e-preprocess-to-stdout.md) | Copia l'output del preprocessore in un output standard. |
| [`/EP`](ep-preprocess-to-stdout-without-hash-line-directives.md) | Copia l'output del preprocessore in un output standard. |
| [`/FI`](fi-name-forced-include-file.md) | Pre-elabora il file di inclusione specificato. |
| [`/FU`](fu-name-forced-hash-using-file.md) | Impone l'utilizzo di un nome file, come se fosse stato passato alla direttiva [#using](../../preprocessor/hash-using-directive-cpp.md) . |
| [`/Fx`](fx-merge-injected-code.md) | Unisce il codice inserito al file di origine. |
| [`/I`](i-additional-include-directories.md) | Ricerca i file di inclusione in una directory. |
| [`/P`](p-preprocess-to-a-file.md) | Scrive l'output del preprocessore in un file. |
| [`/U`](u-u-undefine-symbols.md) | Rimuove una macro predefinita. |
| [`/u`](u-u-undefine-symbols.md) | Rimuove tutte le macro predefinite. |
| [`/X`](x-ignore-standard-include-paths.md) | Ignora la directory di inclusione standard. |

## <a name="language"></a>Linguaggio

| Opzione | Scopo |
|--|--|
| [`/constexpr`](constexpr-control-constexpr-evaluation.md) | **`constexpr`** Valutazione del controllo in fase di compilazione. |
| [`/openmp`](openmp-enable-openmp-2-0-support.md) | Abilita [`#pragma omp`](../../preprocessor/omp.md) nel codice sorgente. |
| [`/vd`](vd-disable-construction-displacements.md) | Disabilita o abilita i membri della classe `vtordisp` nascosti. |
| [`/vmb`](vmb-vmg-representation-method.md) | Usa la base migliore per i puntatori ai membri. |
| [`/vmg`](vmb-vmg-representation-method.md) | Usa la generalità completa per i puntatori ai membri. |
| [`/vmm`](vmm-vms-vmv-general-purpose-representation.md) | Dichiara l'ereditarietà multipla. |
| [`/vms`](vmm-vms-vmv-general-purpose-representation.md) | Dichiara l'ereditarietà singola. |
| [`/vmv`](vmm-vms-vmv-general-purpose-representation.md) | Dichiara l'ereditarietà virtuale. |
| [`/Z7`](z7-zi-zi-debug-information-format.md) | Genera informazioni di debug compatibili con C 7,0. |
| [`/Za`](za-ze-disable-language-extensions.md) | Disabilita le estensioni del linguaggio C89. |
| [`/Zc`](zc-conformance.md) | Specifica il comportamento standard in [`/Ze`](za-ze-disable-language-extensions.md) . |
| [`/Ze`](za-ze-disable-language-extensions.md) | Deprecato. Abilita le estensioni del linguaggio C89. |
| [`/Zf`](zf.md) | Migliora il tempo di generazione PDB nelle compilazioni parallele. |
| [`/ZH`](zh.md) | Specifica MD5, SHA-1 o SHA-256 per i checksum nelle informazioni di debug. |
| [`/ZI`](z7-zi-zi-debug-information-format.md) | Include informazioni di debug in un database di programma compatibile con Modifica e continuazione. (solo x86) |
| [`/Zi`](z7-zi-zi-debug-information-format.md) | Genera informazioni di debug complete. |
| [`/Zl`](zl-omit-default-library-name.md) | Rimuove il nome di libreria predefinito dal *`.obj`* file. |
| [`/Zp`](zp-struct-member-alignment.md)*n* | Comprime i membri della struttura. |
| [`/Zs`](zs-syntax-check-only.md) | Controlla solo la sintassi. |
| [`/ZW`](zw-windows-runtime-compilation.md) | Produce un file di output da eseguire nel Windows Runtime. |

## <a name="linking"></a>Il collegamento

| Opzione | Scopo |
|--|--|
| [`/F`](f-set-stack-size.md) | Imposta la dimensione dello stack. |
| [`/LD`](md-mt-ld-use-run-time-library.md) | Crea una libreria a collegamento dinamico. |
| [`/LDd`](md-mt-ld-use-run-time-library.md) | Crea una libreria a collegamento dinamico di debug. |
| [`/link`](link-pass-options-to-linker.md) | Passa l'opzione specificata a LINK. |
| [`/LN`](ln-create-msil-module.md) | Crea un modulo MSIL |
| [`/MD`](md-mt-ld-use-run-time-library.md) | Esegue la compilazione per creare una DLL con multithreading usando *Msvcrt. lib*. |
| [`/MDd`](md-mt-ld-use-run-time-library.md) | Esegue la compilazione per creare una DLL con multithreading di debug, usando *msvcrtd. lib*. |
| [`/MT`](md-mt-ld-use-run-time-library.md) | Esegue la compilazione per creare un file eseguibile con multithreading, usando *LIBCMT. lib*. |
| [`/MTd`](md-mt-ld-use-run-time-library.md) | Esegue la compilazione per creare un file eseguibile con multithreading di debug usando *libcmtd. lib*. |

## <a name="miscellaneous"></a>Varie

| Opzione | Scopo |
|--|--|
| [`/?`](help-compiler-command-line-help.md) | Elenca le opzioni del compilatore. |
| [`@`](at-specify-a-compiler-response-file.md) | Specifica un file di risposta. |
| [`/analyze`](analyze-code-analysis.md) | Attiva l'analisi del codice |
| [`/bigobj`](bigobj-increase-number-of-sections-in-dot-obj-file.md) | Aumenta il numero di sezioni indirizzabili in un file con estensione obj. |
| [`/c`](c-compile-without-linking.md) | Effettua la compilazione senza collegamento. |
| [`/cgthreads`](cgthreads-code-generation-threads.md) | Specifica il numero di thread di *cl.exe* da usare per l'ottimizzazione e la generazione di codice. |
| [`/errorReport`](errorreport-report-internal-compiler-errors.md) | Deprecato. La segnalazione degli errori è controllata dalle impostazioni di [segnalazione errori Windows (WER)](/windows/win32/wer/windows-error-reporting) . |
| [`/FC`](fc-full-path-of-source-code-file-in-diagnostics.md) | Visualizza il percorso completo dei file di codice sorgente passati a *cl.exe* nel testo di diagnostica. |
| [`/FS`](fs-force-synchronous-pdb-writes.md) | Forza le scritture nel file PDB da serializzare tramite *MSPDBSRV.EXE*. |
| [`/H`](h-restrict-length-of-external-names.md) | Deprecato. Limita la lunghezza dei nomi esterni (pubblici). |
| [`/HELP`](help-compiler-command-line-help.md) | Elenca le opzioni del compilatore. |
| [`/J`](j-default-char-type-is-unsigned.md) | Modifica il **`char`** tipo predefinito. |
| [`/JMC`](jmc.md) | Supporta il debug di Just My Code C++ nativo. |
| [`/kernel`](kernel-create-kernel-mode-binary.md) | Il compilatore e il linker creeranno un file binario che può essere eseguito nel kernel di Windows. |
| [`/MP`](mp-build-with-multiple-processes.md) | Compila contemporaneamente più file di origine. |
| [`/nologo`](nologo-suppress-startup-banner-c-cpp.md) | Evita la visualizzazione dell'intestazione di iscrizione. |
| [`/sdl`](sdl-enable-additional-security-checks.md) | Abilita funzionalità e avvisi di sicurezza aggiuntivi. |
| [`/showIncludes`](showincludes-list-include-files.md) | Visualizza un elenco di tutti i file di inclusione durante la compilazione. |
| [`/sourceDependencies`](sourcedependencies.md) | Elenca intestazioni, moduli e altre dipendenze di origine. |
| [`/Tc`](tc-tp-tc-tp-specify-source-file-type.md) | Specifica un file di origine C. |
| [`/TC`](tc-tp-tc-tp-specify-source-file-type.md) | Specifica che tutti i file di origine sono C. |
| [`/Tp`](tc-tp-tc-tp-specify-source-file-type.md) | Specifica un file di origine C++. |
| [`/TP`](tc-tp-tc-tp-specify-source-file-type.md) | Specifica che tutti i file di origine sono C++. |
| [`/V`](v-version-number.md) | Deprecato. Imposta la stringa di versione. |
| [`/w`](compiler-option-warning-level.md) | Disabilita tutti gli avvisi. |
| [`/W0`, `/W1`, `/W2`, `/W3`, `/W4`](compiler-option-warning-level.md) | Imposta il livello di avviso di output. |
| [`/w1`, `/w2`, `/w3`, `/w4`](compiler-option-warning-level.md) | Imposta il livello di avviso per l'avviso specificato. |
| [`/Wall`](compiler-option-warning-level.md) | Abilita tutti gli avvisi, inclusi quelli disabilitati per impostazione predefinita. |
| [`/wd`](compiler-option-warning-level.md) | Disattiva l'avviso specificato. |
| [`/we`](compiler-option-warning-level.md) | Considera l'avviso specificato come un errore. |
| [`/WL`](wl-enable-one-line-diagnostics.md) | Attiva la diagnostica a riga singola dei messaggi di errore e di avviso durante la compilazione del codice sorgente C++ dalla riga di comando. |
| [`/wo`](compiler-option-warning-level.md) | Visualizza l'avviso specificato una sola volta. |
| [`/Wv`](compiler-option-warning-level.md) | Disattiva gli avvisi introdotti dalle versioni più recenti del compilatore. |
| [`/WX`](compiler-option-warning-level.md) | Considera gli avvisi come errori. |
| [`/Yc`](yc-create-precompiled-header-file.md) | Creare il *`.PCH`* file. |
| [`/Yd`](yd-place-debug-information-in-object-file.md) | Deprecato. Inserisce informazioni di debug complete in tutti i file oggetto. In [`/Zi`](z7-zi-zi-debug-information-format.md) alternativa, usare. |
| [`/Yl`](yl-inject-pch-reference-for-debug-library.md) | Inserisce un riferimento PCH durante la creazione di una libreria di debug. |
| [`/Yu`](yu-use-precompiled-header-file.md) | Usa un file di intestazione precompilato durante la compilazione. |
| [`/Y-`](y-ignore-precompiled-header-options.md) | Ignora tutte le altre opzioni del compilatore dell'intestazione precompilata nella generazione corrente. |
| [`/Zm`](zm-specify-precompiled-header-memory-allocation-limit.md) | Specifica il limite di allocazione di memoria delle intestazioni precompilate. |
| [`/await`](await-enable-coroutine-support.md) | Abilita le estensioni delle coroutine (funzioni ripristinabili). |
| [`/source-charset`](source-charset-set-source-character-set.md) | Imposta il set di caratteri di origine. |
| [`/execution-charset`](execution-charset-set-execution-character-set.md) | Impostare il set di caratteri di esecuzione. |
| [`/utf-8`](utf-8-set-source-and-executable-character-sets-to-utf-8.md) | Imposta i set di caratteri di esecuzione e di origine su UTF-8. |
| [`/validate-charset`](validate-charset-validate-for-compatible-characters.md) | Convalidare i file UTF-8 solo per i caratteri compatibili. |
| [`/diagnostics`](diagnostics-compiler-diagnostic-options.md) | Controlla il formato dei messaggi di diagnostica. |
| [`/permissive-`](permissive-standards-conformance.md) | Impostare la modalità di conformità standard. |
| [`/std`](std-specify-language-standard-version.md) | Selettore di compatibilità della versione standard C++. |

## <a name="experimental-options"></a>Opzioni sperimentali

Le opzioni sperimentali possono essere supportate solo da determinate versioni del compilatore. Possono anche comportarsi in modo diverso nelle diverse versioni del compilatore. Spesso la documentazione migliore o solo per le opzioni sperimentali è disponibile nel [Blog del team di Microsoft C++](https://devblogs.microsoft.com/cppblog/).

| Opzione | Scopo |
|--|--|
| [`/experimental:module`](experimental-module.md) | Abilita il supporto del modulo sperimentale. |
| [`/experimental:preprocessor`](experimental-preprocessor.md) | Deprecato. Abilita il supporto per il preprocessore conforme sperimentale. Usare [`/Zc:preprocessor`](zc-preprocessor.md) |

## <a name="deprecated-and-removed-compiler-options"></a>Opzioni del compilatore deprecate e rimosse

| Opzione | Scopo |
|--|--|
| [`/clr:noAssembly`](clr-common-language-runtime-compilation.md) | Deprecato. In alternativa, usare [ `/LN` (Crea modulo MSIL)](ln-create-msil-module.md) . |
| [`/errorReport`](errorreport-report-internal-compiler-errors.md) | Deprecato. La segnalazione degli errori è controllata dalle impostazioni di [segnalazione errori Windows (WER)](/windows/win32/wer/windows-error-reporting) . |
| [`/Fr`](fr-fr-create-dot-sbr-file.md) | Deprecato. Crea un file informazioni di visualizzazione senza variabili locali. |
| [`/Ge`](ge-enable-stack-probes.md) | Deprecato. Attiva le ricerche dello stack. Attivazione per impostazione predefinita. |
| [`/Gm`](gm-enable-minimal-rebuild.md) | Deprecato. Attiva una ricompilazione minima. |
| [`/GX`](gx-enable-exception-handling.md) | Deprecato. Attiva la gestione sincrona delle eccezioni. In [`/EH`](eh-exception-handling-model.md) alternativa, usare. |
| [`/GZ`](gz-enable-stack-frame-run-time-error-checking.md) | Deprecato. Abilita controlli veloci. In [`/RTC1`](rtc-run-time-error-checks.md) alternativa, usare. |
| [`/H`](h-restrict-length-of-external-names.md) | Deprecato. Limita la lunghezza dei nomi esterni (pubblici). |
| [`/Og`](og-global-optimizations.md) | Deprecato. Usa le ottimizzazioni globali. |
| [`/QIfist`](qifist-suppress-ftol.md) | Deprecato. Usato in passato per specificare come eseguire la conversione da un tipo a virgola mobile a un tipo integrale. |
| [`/V`](v-version-number.md) | Deprecato. Imposta la *`.obj`* stringa di versione del file. |
| [`/Wp64`](wp64-detect-64-bit-portability-issues.md) | Obsoleta. Rileva i problemi di portabilità a 64 bit. |
| [`/Yd`](yd-place-debug-information-in-object-file.md) | Deprecato. Inserisce informazioni di debug complete in tutti i file oggetto. In [`/Zi`](z7-zi-zi-debug-information-format.md) alternativa, usare. |
| [`/Zc:forScope-`](zc-forscope-force-conformance-in-for-loop-scope.md) | Deprecato. Disattiva la conformità nell'ambito di un ciclo For. |
| [`/Ze`](za-ze-disable-language-extensions.md) | Deprecato. Attiva le estensioni del linguaggio. |
| [`/Zg`](zg-generate-function-prototypes.md) | Rimosso in Visual Studio 2015. Genera prototipi di funzione. |

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](c-cpp-building-reference.md)\
[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
