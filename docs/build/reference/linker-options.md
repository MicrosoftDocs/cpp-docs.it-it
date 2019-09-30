---
title: Opzioni del linker MSVC
description: Elenco delle opzioni supportate dal linker di Microsoft LINKer.
ms.date: 09/24/2019
f1_keywords:
- link
helpviewer_keywords:
- linker [C++]
- linker [C++], options listed
- libraries [C++], linking to COFF
- LINK tool [C++], linker options
ms.assetid: c1d51b8a-bd23-416d-81e4-900e02b2c129
ms.openlocfilehash: 23cd1c3ce767cf8046e3439432db795f032dc370
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71685579"
---
# <a name="linker-options"></a>Opzioni del linker

LINK.exe consente di collegare file in formato COFF (Common Object File Format ) e librerie per creare un file eseguibile ( con estensione exe) o una libreria di collegamento dinamico (DLL).

La tabella seguente contiene un elenco di opzioni per LINK.exe. Per altre informazioni su LINK, vedere:

- [Opzioni di LINK controllate dal compilatore](compiler-controlled-link-options.md)

- [File di input LINK](link-input-files.md)

- [Output di LINK](link-output.md)

- [Parole riservate](reserved-words.md)

Nella riga di comando le opzioni del linker non fanno distinzione tra maiuscole e minuscole. ad esempio,/base e/BASE indicano la stessa cosa. Per informazioni dettagliate su come specificare ogni opzione nella riga di comando o in Visual Studio, vedere la documentazione relativa all'opzione.

È possibile specificare alcune opzioni del linker usando il pragma [comment](../../preprocessor/comment-c-cpp.md) .

## <a name="linker-options-listed-alphabetically"></a>Opzioni del linker elencate in ordine alfabetico

|Opzione|Scopo|
|------------|-------------|
|[@](at-specify-a-linker-response-file.md)|Specifica un file di risposta.|
|[/ALIGN](align-section-alignment.md)|Specifica l'allineamento di ogni sezione.|
|[/ALLOWBIND](allowbind-prevent-dll-binding.md)|Specifica che una DLL non è associabile.|
|[/ALLOWISOLATION](allowisolation-manifest-lookup.md)|Specifica il comportamento per la ricerca del manifesto.|
|[/APPCONTAINER](appcontainer-windows-store-app.md)|Specifica se l'app deve essere eseguita in un ambiente di elaborazione Appcontainer.|
|[/ASSEMBLYDEBUG](assemblydebug-add-debuggableattribute.md)|Aggiunge <xref:System.Diagnostics.DebuggableAttribute> a un'immagine gestita.|
|[/ASSEMBLYLINKRESOURCE](assemblylinkresource-link-to-dotnet-framework-resource.md)|Crea un collegamento a una risorsa gestita.|
|[/ASSEMBLYMODULE](assemblymodule-add-a-msil-module-to-the-assembly.md)|Specifica che un modulo MSIL (Microsoft Intermediate Language) deve essere importato nell'assembly.|
|[/ASSEMBLYRESOURCE](assemblyresource-embed-a-managed-resource.md)|Incorpora un file di risorse gestite in un assembly.|
|[/BASE](base-base-address.md)|Imposta un indirizzo di base per il programma.|
|[/CGTHREADS](cgthreads-compiler-threads.md)|Imposta il numero di thread cl.exe da usare per l'ottimizzazione e la generazione di codice quando si specifica la generazione del codice in fase di collegamento.|
|[/CLRIMAGETYPE](clrimagetype-specify-type-of-clr-image.md)|Imposta il tipo (IJW, pure o safe) di un'immagine CLR.|
|[/CLRSUPPORTLASTERROR](clrsupportlasterror-preserve-last-error-code-for-pinvoke-calls.md)|Conserva l'ultimo codice di errore delle funzioni chiamate con il meccanismo P/Invoke.|
|[/CLRTHREADATTRIBUTE](clrthreadattribute-set-clr-thread-attribute.md)|Specifica l'attributo threading da applicare al punto di ingresso del programma CLR.|
|[/CLRUNMANAGEDCODECHECK](clrunmanagedcodecheck-add-suppressunmanagedcodesecurityattribute.md)|Specifica se verrà applicato l'attributo SuppressUnmanagedCodeSecurity alle chiamate PInvoke generate dal linker effettuate dal codice gestito in DLL native.|
|[/DEBUG](debug-generate-debug-info.md)|Crea informazioni di debug.|
|[/DEBUGTYPE](debugtype-debug-info-options.md)|Specifica i dati da includere nelle informazioni di debug.|
|[/DEF](def-specify-module-definition-file.md)|Passa a LIB un file di definizione moduli (estensione def).|
|[/DEFAULTLIB](defaultlib-specify-default-library.md)|Esegue ricerche nella libreria specificata per la risoluzione dei riferimenti esterni.|
|[/DELAY](delay-delay-load-import-settings.md)|Controlla il caricamento ritardato delle DLL.|
|[/DELAYLOAD](delayload-delay-load-import.md)|Causa il caricamento ritardato della DLL specificata.|
|[/DELAYSIGN](delaysign-partially-sign-an-assembly.md)|Firma parzialmente un assembly.|
|[/DEPENDENTLOADFLAG](dependentloadflag.md)|Imposta i flag predefiniti sui carichi DLL dipendenti.|
|[/DLL](dll-build-a-dll.md)|Compila una DLL.|
|[/DRIVER](driver-windows-nt-kernel-mode-driver.md)|Crea un driver in modalità kernel.|
|[/DYNAMICBASE](dynamicbase-use-address-space-layout-randomization.md)|Specifica se generare un'immagine eseguibile che può essere riassegnata in modo casuale in fase di caricamento usando la funzionalità ASLR (Address Space Layout Randomization).|
|[/ENTRY](entry-entry-point-symbol.md)|Imposta indirizzo iniziale.|
|[/errorReport](errorreport-report-internal-linker-errors.md)|Segnala a Microsoft gli errori interni del linker.|
|[/EXPORT](export-exports-a-function.md)|Esporta una funzione.|
|[/FILEALIGN](filealign.md)|Allinea le sezioni all'interno del file di output in multipli di un valore specificato.|
|[/FIXED](fixed-fixed-base-address.md)|Crea un programma caricabile solo nel relativo indirizzo di base preferito.|
|[/FORCE](force-force-file-output.md)|Forza il completamento di un collegamento nonostante la presenza di simboli non risolti o definiti più volte.|
|[/FUNCTIONPADMIN](functionpadmin-create-hotpatchable-image.md)|Crea un'immagine su cui si può applicare una patch a caldo.|
|[/GENPROFILE, /FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md)|Entrambe queste opzioni specificano la generazione di un file PDG dal linker per supportare l'ottimizzazione PGO. / GENPROFILE e /FASTGENPROFILE usano parametri predefiniti diversi.|
|[/GUARD](guard-enable-guard-checks.md)|Abilita la protezione guard flusso di controllo.|
|[/HEAP](heap-set-heap-size.md)|Imposta le dimensioni in byte dell'heap.|
|[/HIGHENTROPYVA](highentropyva-support-64-bit-aslr.md)|Specifica il supporto per la funzionalità ASLR a 64 bit a entropia elevata.|
|[/IDLOUT](idlout-name-midl-output-files.md)|Specifica il nome del file IDL e di altri file di output MIDL.|
|[/IGNORE](ignore-ignore-specific-warnings.md)|Disattiva l'output degli avvisi del linker specificati.|
|[/IGNOREIDL](ignoreidl-don-t-process-attributes-into-midl.md)|Impedisce l'elaborazione delle informazioni sugli attributi in un file IDL.|
|[/IMPLIB](implib-name-import-library.md)|Esegue l'override del nome predefinito della libreria di importazione.|
|[/INCLUDE](include-force-symbol-references.md)|Impone di includere riferimenti al simbolo.|
|[/INCREMENTAL](incremental-link-incrementally.md)|Controlla il collegamento incrementale.|
|[/INTEGRITYCHECK](integritycheck-require-signature-check.md)|Specifica che il modulo richiede una verifica della firma in fase di caricamento.|
|[/KEYCONTAINER](keycontainer-specify-a-key-container-to-sign-an-assembly.md)|Specifica un contenitore di chiavi per firmare un assembly.|
|[/KEYFILE](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)|Specifica una chiave o una coppia di chiavi per firmare un assembly.|
|[/LARGEADDRESSAWARE](largeaddressaware-handle-large-addresses.md)|Indica al compilatore che l'applicazione supportata indirizzi superiori a 2 GB|
|[/LIBPATH](libpath-additional-libpath.md)|Specifica un percorso da cercare prima del percorso della libreria dell'ambiente.|
|[/LINKREPRO](linkrepro.md)|Specifica un percorso in cui generare gli artefatti per la ripetizione del collegamento.|
|[/LINKREPROTARGET](linkreprotarget.md)|Genera una ripetizione del collegamento solo quando produce la destinazione specificata.|
|[/LTCG](ltcg-link-time-code-generation.md)|Specifica la generazione del codice in fase di collegamento.|
|[/MACHINE](machine-specify-target-platform.md)|Specifica la piattaforma di destinazione.|
|[/MANIFEST](manifest-create-side-by-side-assembly-manifest.md)|Crea un file manifesto side-by-side e facoltativamente lo incorpora nel file binario.|
|[/MANIFESTDEPENDENCY](manifestdependency-specify-manifest-dependencies.md)|Specifica una sezione di > \<dependentAssembly nel file manifesto.|
|[/MANIFESTFILE](manifestfile-name-manifest-file.md)|Modifica il nome predefinito del file manifesto.|
|[/MANIFESTINPUT](manifestinput-specify-manifest-input.md)|Specifica un file di input del manifesto che il linker deve elaborare e incorporare nel file binario. Questa opzione si può usare più volte per specificare più file di input del manifesto.|
|[/MANIFESTUAC](manifestuac-embeds-uac-information-in-manifest.md)|Specifica se le informazioni di Controllo dell'account utente sono incorporate nel manifesto del programma.|
|[/MAP](map-generate-mapfile.md)|Crea un file MAP.|
|[/MAPINFO](mapinfo-include-information-in-mapfile.md)|Include le informazioni specificate nel file di mapping.|
|[/MERGE](merge-combine-sections.md)|Combina le sezioni.|
|[/MIDL](midl-specify-midl-command-line-options.md)|Specifica opzioni della riga di comando MIDL.|
|[/NATVIS](natvis-add-natvis-to-pdb.md)|Aggiunge i visualizzatori del debugger da un file natvis al PDB.|
|[/NOASSEMBLY](noassembly-create-a-msil-module.md)|Disattiva la creazione di un assembly .NET Framework.|
|[/NODEFAULTLIB](nodefaultlib-ignore-libraries.md)|Ignora tutte le librerie predefinite (o quelle specificate) durante la risoluzione dei riferimenti esterni.|
|[/NOENTRY](noentry-no-entry-point.md)|Crea una DLL di sole risorse.|
|[/NOLOGO](nologo-suppress-startup-banner-linker.md)|Evita la visualizzazione del messaggio di avvio.|
|[/NXCOMPAT](nxcompat-compatible-with-data-execution-prevention.md)|Indica che è stato eseguito il test di un eseguibile per verificarne la compatibilità con la funzionalità Protezione esecuzione programmi di Windows.|
|[/OPT](opt-optimizations.md)|Controlla le ottimizzazioni di LINK.|
|[/ORDER](order-put-functions-in-order.md)|Inserisce COMDAT nell'immagine secondo un ordine predeterminato.|
|[/OUT](out-output-file-name.md)|Specifica il nome del file di output.|
|[/PDB](pdb-use-program-database.md)|Crea un file del database di programma (PDB).|
|[/PDBALTPATH](pdbaltpath-use-alternate-pdb-path.md)|Usa un percorso alternativo per salvare un file PDB.|
|[/PDBSTRIPPED](pdbstripped-strip-private-symbols.md)|Crea un file del database di programma (PDB) senza simboli privati.|
|[/PGD](pgd-specify-database-for-profile-guided-optimizations.md)|Specifica un file PDG per le ottimizzazioni PGO.|
|[/POGOSAFEMODE](pogosafemode-linker-option.md)|**Obsoleto** Crea una compilazione instrumentata PGO thread-safe.|
|[/PROFILE](profile-performance-tools-profiler.md)|Produce un file di output che può essere usato con il profiler di Strumenti per le prestazioni.|
|[/RELEASE](release-set-the-checksum.md)|Imposta il checksum nell'intestazione del file exe.|
|[/SAFESEH](safeseh-image-has-safe-exception-handlers.md)|Specifica che l'immagine conterrà una tabella di gestori eccezioni sicuri.|
|[/SECTION](section-specify-section-attributes.md)|Esegue l'override gli attributi di una sezione.|
|[/SOURCELINK](sourcelink.md)|Specifica un file SourceLink da aggiungere al PDB.|
|[/STACK](stack-stack-allocations.md)|Imposta le dimensioni in byte dello stack.|
|[/STUB](stub-ms-dos-stub-file-name.md)|Connette un programma stub MS-DOS a un programma Win32.|
|[/SUBSYSTEM](subsystem-specify-subsystem.md)|Indica al sistema operativo come eseguire il file exe.|
|[/SWAPRUN](swaprun-load-linker-output-to-swap-file.md)|Indica al sistema operativo di copiare l'output del linker in un file di scambio prima di eseguirlo.|
|[/TLBID](tlbid-specify-resource-id-for-typelib.md)|Specifica l'ID di risorsa della libreria dei tipi generata dal linker.|
|[/TLBOUT](tlbout-name-dot-tlb-file.md)|Specifica il nome del file TLB e di altri file di output MIDL.|
|[/TSAWARE](tsaware-create-terminal-server-aware-application.md)|Crea un'applicazione specificamente progettata per l'esecuzione in Terminal Server.|
|[/USEPROFILE](useprofile.md)|USA i dati di training per l'ottimizzazione PGO per creare un'immagine ottimizzata.|
|[/VERBOSE](verbose-print-progress-messages.md)|Visualizza i messaggi di stato del linker.|
|[/VERSION](version-version-information.md)|Assegna un numero di versione.|
|[/WHOLEARCHIVE](wholearchive-include-all-library-object-files.md)|Include tutti i file oggetto delle librerie statiche specificate.|
|[/WINMD](winmd-generate-windows-metadata.md)|Abilita la generazione di un file di metadati di Windows Runtime.|
|[/WINMDFILE](winmdfile-specify-winmd-file.md)|Specifica il nome del file di output per i metadati di Windows Runtime (winmd) generato dall'opzione del linker [/WINMD](winmd-generate-windows-metadata.md) .|
|[/WINMDKEYFILE](winmdkeyfile-specify-winmd-key-file.md)|Specifica una chiave o una coppia di chiavi per firmare un file di metadati di Windows Runtime.|
|[/WINMDKEYCONTAINER](winmdkeycontainer-specify-key-container.md)|Specifica un contenitore di chiavi per firmare un file di metadati di Windows Runtime.|
|[/WINMDDELAYSIGN](winmddelaysign-partially-sign-a-winmd.md)|Firma parzialmente un file di metadati di Windows Runtime (winmd) inserendo la chiave pubblica nel file winmd.|
|[/WX](wx-treat-linker-warnings-as-errors.md)|Considera gli avvisi del linker come errori.|

Per altre informazioni, vedere [Compiler-Controlled LINK Options](compiler-controlled-link-options.md).

## <a name="see-also"></a>Vedere anche

[C/C++ Building Reference](c-cpp-building-reference.md)\ (Informazioni di riferimento per la compilazione in C/C++)
[Informazioni di riferimento sul linker MSVC](linking.md)
