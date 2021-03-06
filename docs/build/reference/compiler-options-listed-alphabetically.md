---
title: Opzioni del compilatore elencate in ordine alfabetico
description: Elenco di riferimenti in ordine alfabetico delle opzioni della riga di comando del compilatore Microsoft C/C++.
ms.date: 07/29/2020
helpviewer_keywords:
- compiler options, C++
ms.openlocfilehash: de83cd5e2d649b88de4e21f3d828f68504705dc2
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102465366"
---
# <a name="compiler-options-listed-alphabetically"></a>Opzioni del compilatore elencate in ordine alfabetico

Questa tabella contiene un elenco in ordine alfabetico delle opzioni del compilatore. Per un elenco delle opzioni del compilatore per categoria, vedere l'articolo [Opzioni del compilatore elencate per categoria](compiler-options-listed-by-category.md) .

## <a name="compiler-options"></a>Opzioni del compilatore

| Opzione | Scopo |
|--|--|
| [`@`](at-specify-a-compiler-response-file.md) | Specifica un file di risposta. |
| [`/?`](help-compiler-command-line-help.md) | Elenca le opzioni del compilatore. |
| [`/AI`](ai-specify-metadata-directories.md) | Specifica una directory in cui eseguire la ricerca per risolvere i riferimenti a file passati alla [`#using`](../../preprocessor/hash-using-directive-cpp.md) direttiva. |
| [`/analyze`](analyze-code-analysis.md) | Attiva l'analisi del codice |
| [`/arch`](arch-minimum-cpu-architecture.md) | Specifica l'architettura per la generazione di codice. |
| [`/await`](await-enable-coroutine-support.md) | Abilita le estensioni delle coroutine (funzioni ripristinabili). |
| [`/bigobj`](bigobj-increase-number-of-sections-in-dot-obj-file.md) | Aumenta il numero di sezioni indirizzabili in un file con estensione obj. |
| [`/C`](c-preserve-comments-during-preprocessing.md) | Conserva i commenti durante la pre-elaborazione. |
| [`/c`](c-compile-without-linking.md) | Effettua la compilazione senza collegamento. |
| [`/cgthreads`](cgthreads-code-generation-threads.md) | Specifica il numero di thread cl.exe da usare per l'ottimizzazione e la generazione di codice. |
| [`/clr`](clr-common-language-runtime-compilation.md) | Genera un file di output da eseguire in Common Language Runtime. |
| [`/constexpr`](constexpr-control-constexpr-evaluation.md) | **`constexpr`** Valutazione del controllo in fase di compilazione. |
| [`/D`](d-preprocessor-definitions.md) | Definisce costanti e macro. |
| [`/diagnostics`](diagnostics-compiler-diagnostic-options.md) | Controlla il formato dei messaggi di diagnostica. |
| [`/doc`](doc-process-documentation-comments-c-cpp.md) | Elabora commenti per la documentazione in un file XML. |
| [`/E`](e-preprocess-to-stdout.md) | Copia l'output del preprocessore in un output standard. |
| [`/EH`](eh-exception-handling-model.md) | Specifica il modello di gestione delle eccezioni. |
| [`/EP`](ep-preprocess-to-stdout-without-hash-line-directives.md) | Copia l'output del preprocessore in un output standard. |
| [`/errorReport`](errorreport-report-internal-compiler-errors.md) | Deprecato. La segnalazione degli errori è controllata dalle impostazioni di [segnalazione errori Windows (WER)](/windows/win32/wer/windows-error-reporting) . |
| [`/execution-charset`](execution-charset-set-execution-character-set.md) | Impostare il set di caratteri di esecuzione. |
| [`/experimental:module`](experimental-module.md) | Abilita il supporto del modulo sperimentale. |
| [`/experimental:preprocessor`](experimental-preprocessor.md) | Deprecato. Abilita il supporto per il preprocessore conforme sperimentale. Usare [`/Zc:preprocessor`](zc-preprocessor.md) |
| [`/F`](f-set-stack-size.md) | Imposta la dimensione dello stack. |
| [`/favor`](favor-optimize-for-architecture-specifics.md) | Produce codice ottimizzato per un'architettura x64 specifica. Oppure, per le micro-architetture specifiche nelle architetture AMD64 ed EM64T. |
| [`/FA`](fa-fa-listing-file.md) | Crea un file di listato. |
| [`/Fa`](fa-fa-listing-file.md) | Imposta il nome del file di listato. |
| [`/FC`](fc-full-path-of-source-code-file-in-diagnostics.md) | Visualizza il percorso completo dei file di codice sorgente passati a cl.exe nel testo contenente informazioni di diagnostica. |
| [`/Fd`](fd-program-database-file-name.md) | Rinomina il file del database di programma. |
| [`/Fe`](fe-name-exe-file.md) | Rinomina il file eseguibile. |
| [`/FI`](fi-name-forced-include-file.md) | Pre-elabora il file di inclusione specificato. |
| [`/Fi`](fi-preprocess-output-file-name.md) | Imposta il nome del file di output pre-elaborato. |
| [`/Fm`](fm-name-mapfile.md) | Crea un file di mappa. |
| [`/Fo`](fo-object-file-name.md) | Crea un file oggetto. |
| [`/fp`](fp-specify-floating-point-behavior.md) | Specifica il comportamento della virgola mobile. |
| [`/Fp`](fp-name-dot-pch-file.md) | Specifica un nome del file di intestazione precompilato. |
| [`/FR`](fr-fr-create-dot-sbr-file.md)<br /><br /> [`/Fr`](fr-fr-create-dot-sbr-file.md) | Genera file del browser. **`/Fr`** è deprecato. |
| [`/FS`](fs-force-synchronous-pdb-writes.md) | Forza la serializzazione di tutte le scritture nel file del database di programma (PDB) tramite MSPDBSRV.EXE. |
| [`/fsanitize`](fsanitize.md) | Consente la compilazione di strumentazione di sanificazione, ad esempio AddressSanitizer. |
| [`/FU`](fu-name-forced-hash-using-file.md) | Impone l'utilizzo di un nome di file come se fosse stato passato alla [`#using`](../../preprocessor/hash-using-directive-cpp.md) direttiva. |
| [`/Fx`](fx-merge-injected-code.md) | Unisce il codice inserito al file di origine. |
| [`/GA`](ga-optimize-for-windows-application.md) | Ottimizza il codice per l'applicazione Windows. |
| [`/Gd`](gd-gr-gv-gz-calling-convention.md) | Usa la **`__cdecl`** convenzione di chiamata (solo x86). |
| [`/Ge`](ge-enable-stack-probes.md) | Deprecato. Attiva le ricerche dello stack. |
| [`/GF`](gf-eliminate-duplicate-strings.md) | Attiva la condivisione delle stringhe. |
| [`/GH`](gh-enable-pexit-hook-function.md) | Chiama la funzione hook `_pexit`. |
| [`/Gh`](gh-enable-penter-hook-function.md) | Chiama la funzione hook `_penter`. |
| [`/GL`](gl-whole-program-optimization.md) | Attiva l'ottimizzazione dell'intero programma. |
| [`/Gm`](gm-enable-minimal-rebuild.md) | Deprecato. Attiva una ricompilazione minima. |
| [`/GR`](gr-enable-run-time-type-information.md) | Attiva RTTI (Run-Time Type Information). |
| [`/Gr`](gd-gr-gv-gz-calling-convention.md) | Usa la **`__fastcall`** convenzione di chiamata (solo x86). |
| [`/GS`](gs-buffer-security-check.md) | Inserisce i controlli di sicurezza nel buffer. |
| [`/Gs`](gs-control-stack-checking-calls.md) | Controlla le ricerche dello stack. |
| [`/GT`](gt-support-fiber-safe-thread-local-storage.md) | Supporta l'indipendenza da fiber per i dati allocati mediante l'archiviazione locale di thread statici. |
| [`/guard:cf`](guard-enable-control-flow-guard.md) | Aggiunge controlli di sicurezza guard del flusso di controllo. |
| [`/guard:ehcont`](guard-enable-eh-continuation-metadata.md) | Abilita i metadati di continuazione EH. |
| [`/Gv`](gd-gr-gv-gz-calling-convention.md) | Usa la **`__vectorcall`** convenzione di chiamata. (solo x86 e x64) |
| [`/Gw`](gw-optimize-global-data.md) | Abilita l'ottimizzazione dei dati globale per l'intero programma |
| [`/GX`](gx-enable-exception-handling.md) | Deprecato. Attiva la gestione sincrona delle eccezioni. In [`/EH`](eh-exception-handling-model.md) alternativa, usare. |
| [`/Gy`](gy-enable-function-level-linking.md) | Attiva il collegamento a livello di funzione. |
| [`/GZ`](gz-enable-stack-frame-run-time-error-checking.md) | Deprecato. Uguale a [`/RTC1`](rtc-run-time-error-checks.md) . |
| [`/Gz`](gd-gr-gv-gz-calling-convention.md) | Usa la **`__stdcall`** convenzione di chiamata (solo x86). |
| [`/H`](h-restrict-length-of-external-names.md) | Deprecato. Limita la lunghezza dei nomi esterni (pubblici). |
| [`/HELP`](help-compiler-command-line-help.md) | Elenca le opzioni del compilatore. |
| [`/homeparams`](homeparams-copy-register-parameters-to-stack.md) | Forza la scrittura di parametri passati nei registri nei rispettivi percorsi nello stack quando vengono immesse funzioni. Questa opzione del compilatore è solo per i compilatori x64 (compilazione nativa e incrociata). |
| [`/hotpatch`](hotpatch-create-hotpatchable-image.md) | Crea un'immagine con patch a caldo. |
| [`/I`](i-additional-include-directories.md) | Ricerca i file di inclusione in una directory. |
| [`/J`](j-default-char-type-is-unsigned.md) | Modifica il **`char`** tipo predefinito. |
| [`/JMC`](jmc.md) | Supporta il debug di Just My Code C++ nativo. |
| [`/kernel`](kernel-create-kernel-mode-binary.md) | Il compilatore e il linker creeranno un file binario che può essere eseguito nel kernel di Windows. |
| [`/LD`](md-mt-ld-use-run-time-library.md) | Crea una libreria a collegamento dinamico. |
| [`/LDd`](md-mt-ld-use-run-time-library.md) | Crea una libreria a collegamento dinamico di debug. |
| [`/link`](link-pass-options-to-linker.md) | Passa l'opzione specificata a LINK. |
| [`/LN`](ln-create-msil-module.md) | Crea un modulo MSIL |
| [`/MD`](md-mt-ld-use-run-time-library.md) | Crea una DLL con multithreading usando MSVCRT.lib. |
| [`/MDd`](md-mt-ld-use-run-time-library.md) | Crea una DLL con multithreading di debug usando MSVCRTD.lib. |
| [`/MP`](mp-build-with-multiple-processes.md) | Compila più file di origine usando più processi. |
| [`/MT`](md-mt-ld-use-run-time-library.md) | Crea un file eseguibile con multithreading usando LIBCMT.lib. |
| [`/MTd`](md-mt-ld-use-run-time-library.md) | Crea un file eseguibile con multithreading di debug usando LIBCMTD.lib. |
| [`/nologo`](nologo-suppress-startup-banner-c-cpp.md) | Evita la visualizzazione dell'intestazione di iscrizione. |
| [`/O1`](o1-o2-minimize-size-maximize-speed.md) | Effettua creazioni in base alla dimensione del codice. |
| [`/O2`](o1-o2-minimize-size-maximize-speed.md) | Effettua creazioni in base alla velocità del codice. |
| [`/Ob`](ob-inline-function-expansion.md) | Controlla l'espansione inline. |
| [`/Od`](od-disable-debug.md) | Disabilita l'ottimizzazione. |
| [`/Og`](og-global-optimizations.md) | Deprecato. Usa le ottimizzazioni globali. |
| [`/Oi`](oi-generate-intrinsic-functions.md) | Genera funzioni intrinseche. |
| [`/openmp`](openmp-enable-openmp-2-0-support.md) | Abilita la [`#pragma omp`](../../preprocessor/omp.md) direttiva nel codice sorgente. |
| [`/Os`](os-ot-favor-small-code-favor-fast-code.md) | Ottimizza per dimensione codice. |
| [`/Ot`](os-ot-favor-small-code-favor-fast-code.md) | Ottimizza per velocità codice. |
| [`/Ox`](ox-full-optimization.md) | Subset di/O2 che non include/GF o/GY. |
| [`/Oy`](oy-frame-pointer-omission.md) | Omette il puntatore a frame (solo x86). |
| [`/P`](p-preprocess-to-a-file.md) | Scrive l'output del preprocessore in un file. |
| [`/permissive-`](permissive-standards-conformance.md) | Impostare la modalità di conformità standard. |
| [`/Qfast_transcendentals`](qfast-transcendentals-force-fast-transcendentals.md) | Genera funzioni trascendenti veloci. |
| [`/QIfist`](qifist-suppress-ftol.md) | Deprecato. Elimina `_ftol` quando è necessario eseguire una conversione da un tipo a virgola mobile a un tipo integrale (solo x86). |
| [`/Qimprecise_fwaits`](qimprecise-fwaits-remove-fwaits-inside-try-blocks.md) | Rimuove i `fwait` comandi all'interno di **`try`** blocchi. |
| [`/QIntel-jcc-erratum`](qintel-jcc-erratum.md) | Attenua l'effetto sulle prestazioni dell'aggiornamento di microcodice cui all'errata Intel CCM. |
| [/Qpar (parallelizzazione automatica automatico)](qpar-auto-parallelizer.md) | Abilita la parallelizzazione automatica dei cicli contrassegnati con la direttiva [#pragma loop()](../../preprocessor/loop.md) . |
| [`/Qsafe_fp_loads`](qsafe-fp-loads.md) | Usa istruzioni di spostamento Integer per i valori a virgola mobile e disabilita determinate ottimizzazioni di carico a virgola mobile. |
| [`/Qspectre`](qspectre.md) | Specifica la generazione di istruzioni del compilatore per mitigare determinate vulnerabilità di sicurezza di Spectre variante 1. |
| [`/Qspectre-load`](qspectre-load.md) | Specifica la generazione del compilatore di istruzioni di serializzazione per attenuare le vulnerabilità della sicurezza Spectre basate sulle istruzioni di caricamento. |
| [`/Qspectre-load-cf`](qspectre-load-cf.md) | Specifica la generazione del compilatore di istruzioni di serializzazione per attenuare le vulnerabilità della sicurezza Spectre basate sulle istruzioni del flusso di controllo che caricano la memoria. |
| [`/Qvec-report` (Livello di segnalazione Vectorizer automatico)](qvec-report-auto-vectorizer-reporting-level.md) | Abilita livelli di creazione rapporti per la vettorializzazione automatica. |
| [`/RTC`](rtc-run-time-error-checks.md) | Attiva il controllo degli errori di runtime. |
| [`/sdl`](sdl-enable-additional-security-checks.md) | Abilita funzionalità e avvisi di sicurezza aggiuntivi. |
| [`/showIncludes`](showincludes-list-include-files.md) | Visualizza un elenco di file di inclusione durante la compilazione. |
| [`/source-charset`](source-charset-set-source-character-set.md) | Imposta il set di caratteri di origine. |
| [`/sourceDependencies`](sourcedependencies.md) | Elenca intestazioni, moduli e altre dipendenze di origine. |
| [`/std`](std-specify-language-standard-version.md) | Selettore di compatibilità della versione standard C++. |
| [`/Tc`](tc-tp-tc-tp-specify-source-file-type.md) | Specifica un file di origine C. |
| [`/TC`](tc-tp-tc-tp-specify-source-file-type.md) | Specifica che tutti i file di origine sono C. |
| [`/Tp`](tc-tp-tc-tp-specify-source-file-type.md) | Specifica un file di origine C++. |
| [`/TP`](tc-tp-tc-tp-specify-source-file-type.md) | Specifica che tutti i file di origine sono C++. |
| [`/U`](u-u-undefine-symbols.md) | Rimuove una macro predefinita. |
| [`/u`](u-u-undefine-symbols.md) | Rimuove tutte le macro predefinite. |
| [`/utf-8`](utf-8-set-source-and-executable-character-sets-to-utf-8.md) | Imposta i set di caratteri di esecuzione e di origine su UTF-8. |
| [`/V`](v-version-number.md) | Deprecato. Imposta la stringa di versione del file OBJ. |
| [`/validate-charset`](validate-charset-validate-for-compatible-characters.md) | Convalidare i file UTF-8 solo per i caratteri compatibili. |
| [`/vd`](vd-disable-construction-displacements.md) | Disabilita o abilita i membri della classe vtordisp nascosti. |
| [`/vmb`](vmb-vmg-representation-method.md) | Usa la base migliore per i puntatori ai membri. |
| [`/vmg`](vmb-vmg-representation-method.md) | Usa la generalità completa per i puntatori ai membri. |
| [`/vmm`](vmm-vms-vmv-general-purpose-representation.md) | Dichiara l'ereditarietà multipla. |
| [`/vms`](vmm-vms-vmv-general-purpose-representation.md) | Dichiara l'ereditarietà singola. |
| [`/vmv`](vmm-vms-vmv-general-purpose-representation.md) | Dichiara l'ereditarietà virtuale. |
| [`/volatile`](volatile-volatile-keyword-interpretation.md) | Seleziona la modalità di interpretazione della parola chiave volatile. |
| [`/w`](compiler-option-warning-level.md) | Disabilita tutti gli avvisi. |
| [`/W0`, `/W1`, `/W2`, `/W3`, `/W4`](compiler-option-warning-level.md) | Imposta il livello di avviso per l'output. |
| [`/w1`, `/w2`, `/w3`, `/w4`](compiler-option-warning-level.md) | Imposta il livello di avviso per l'avviso specificato. |
| [`/Wall`](compiler-option-warning-level.md) | Abilita tutti gli avvisi, inclusi quelli disabilitati per impostazione predefinita. |
| [`/wd`](compiler-option-warning-level.md) | Disattiva l'avviso specificato. |
| [`/we`](compiler-option-warning-level.md) | Considera l'avviso specificato come un errore. |
| [`/WL`](wl-enable-one-line-diagnostics.md) | Attiva la diagnostica a riga singola dei messaggi di errore e di avviso durante la compilazione del codice sorgente C++ dalla riga di comando. |
| [`/wo`](compiler-option-warning-level.md) | Visualizza l'avviso specificato una sola volta. |
| [`/Wp64`](wp64-detect-64-bit-portability-issues.md) | Obsoleta. Rileva i problemi di portabilità a 64 bit. |
| [`/Wv`](compiler-option-warning-level.md) | Non visualizza avvisi introdotti dopo la versione specificata del compilatore. |
| [`/WX`](compiler-option-warning-level.md) | Considera tutti gli avvisi come errori. |
| [`/X`](x-ignore-standard-include-paths.md) | Ignora la directory di inclusione standard. |
| [`/Y-`](y-ignore-precompiled-header-options.md) | Ignora tutte le altre opzioni del compilatore dell'intestazione precompilata nella generazione corrente. |
| [`/Yc`](yc-create-precompiled-header-file.md) | Crea un file di intestazione precompilato. |
| [`/Yd`](yd-place-debug-information-in-object-file.md) | Deprecato. Inserisce informazioni di debug complete in tutti i file oggetto. In [`/Zi`](z7-zi-zi-debug-information-format.md) alternativa, usare. |
| [`/Yl`](yl-inject-pch-reference-for-debug-library.md) | Inserisce un riferimento PCH durante la creazione di una libreria di debug |
| [`/Yu`](yu-use-precompiled-header-file.md) | Usa un file di intestazione precompilato durante la compilazione. |
| [`/Z7`](z7-zi-zi-debug-information-format.md) | Genera informazioni di debug compatibili con C 7,0. |
| [`/Za`](za-ze-disable-language-extensions.md) | Disabilita le estensioni del linguaggio. |
| [`/Zc`](zc-conformance.md) | Specifica i comportamenti standard. |
| [`/Ze`](za-ze-disable-language-extensions.md) | Deprecato. Attiva le estensioni del linguaggio. |
| [`/Zf`](zf.md) | Migliora il tempo di generazione PDB nelle compilazioni parallele. |
| [`/Zg`](zg-generate-function-prototypes.md) | Rimosso in Visual Studio 2015. Genera prototipi di funzione. |
| [`/ZH`](zh.md) | Specifica MD5, SHA-1 o SHA-256 per i checksum nelle informazioni di debug. |
| [`/ZI`](z7-zi-zi-debug-information-format.md) | Include informazioni di debug in un database di programma compatibile con Modifica e continuazione. |
| [`/Zi`](z7-zi-zi-debug-information-format.md) | Genera informazioni di debug complete. |
| [`/Zl`](zl-omit-default-library-name.md) | Rimuove il nome di libreria predefinito dal file obj (solo x86). |
| [`/Zm`](zm-specify-precompiled-header-memory-allocation-limit.md) | Specifica il limite di allocazione di memoria delle intestazioni precompilate. |
| [`/Zo`](zo-enhance-optimized-debugging.md) | Genera informazioni di debug avanzate per il codice ottimizzato. |
| [`/Zp`](zp-struct-member-alignment.md) | Comprime i membri della struttura. |
| [`/Zs`](zs-syntax-check-only.md) | Controlla solo la sintassi. |
| [`/ZW`](zw-windows-runtime-compilation.md) | Produce un file di output da eseguire nel Windows Runtime. |

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
