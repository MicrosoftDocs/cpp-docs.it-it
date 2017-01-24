---
title: "Opzioni del linker | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "link"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "librerie [C++], collegamento a COFF"
  - "LINK (strumento) [C++], opzioni del linker"
  - "linker [C++]"
  - "linker [C++], opzioni elencate"
ms.assetid: c1d51b8a-bd23-416d-81e4-900e02b2c129
caps.latest.revision: 37
caps.handback.revision: 35
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Opzioni del linker
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

LINK.exe consente di collegare file in formato COFF \(Common Object File Format \) e librerie per creare un file eseguibile \( con estensione exe\) o una libreria di collegamento dinamico \(DLL\).  
  
 La tabella seguente contiene un elenco di opzioni per LINK.exe. Per altre informazioni su LINK, vedere:  
  
-   [Opzioni di LINK controllate dal compilatore](../../build/reference/compiler-controlled-link-options.md)  
  
-   [File di input LINK](../../build/reference/link-input-files.md)  
  
-   [Output di LINK](../../build/reference/link-output.md)  
  
-   [Parole riservate](../../build/reference/reserved-words.md)  
  
 Per le opzioni del linker specificate alla riga di comando non viene effettuata la distinzione tra maiuscole e minuscole, ad esempio \/base e \/BASE hanno lo stesso significato. Per informazioni dettagliate su come specificare ogni opzione nella riga di comando o in Visual Studio, vedere la documentazione relativa all'opzione.  
  
 È possibile specificare alcune opzioni del linker usando il pragma [comment](../../preprocessor/comment-c-cpp.md).  
  
|Opzione|Scopo|  
|-------------|-----------|  
|[@](../../build/reference/at-specify-a-linker-response-file.md)|Specifica un file di risposta.|  
|[\/ALIGN](../../build/reference/align-section-alignment.md)|Specifica l'allineamento di ogni sezione.|  
|[\/ALLOWBIND](../../build/reference/allowbind-prevent-dll-binding.md)|Specifica che una DLL non è associabile.|  
|[\/ALLOWISOLATION](../../build/reference/allowisolation-manifest-lookup.md)|Specifica il comportamento per la ricerca del manifesto.|  
|[\/APPCONTAINER](../../build/reference/appcontainer-windows-store-app.md)|Specifica se l'app deve essere eseguita in un ambiente di elaborazione Appcontainer.|  
|[\/ASSEMBLYDEBUG](../../build/reference/assemblydebug-add-debuggableattribute.md)|Aggiunge <xref:System.Diagnostics.DebuggableAttribute> a un'immagine gestita.|  
|[\/ASSEMBLYLINKRESOURCE](../../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md)|Crea un collegamento a una risorsa gestita.|  
|[\/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md)|Specifica che un modulo MSIL \(Microsoft Intermediate Language\) deve essere importato nell'assembly.|  
|[\/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md)|Incorpora un file di risorse gestite in un assembly.|  
|[\/BASE](../../build/reference/base-base-address.md)|Imposta un indirizzo di base per il programma.|  
|[\/CGTHREADS](../../build/reference/cgthreads-compiler-threads.md)|Imposta il numero di thread cl.exe da usare per l'ottimizzazione e la generazione di codice quando si specifica la generazione del codice in fase di collegamento.|  
|[\/CLRIMAGETYPE](../../build/reference/clrimagetype-specify-type-of-clr-image.md)|Imposta il tipo \(IJW, pure o safe\) di un'immagine CLR.|  
|[\/CLRSUPPORTLASTERROR](../../build/reference/clrsupportlasterror-preserve-last-error-code-for-pinvoke-calls.md)|Conserva l'ultimo codice di errore delle funzioni chiamate con il meccanismo P\/Invoke.|  
|[\/CLRTHREADATTRIBUTE](../../build/reference/clrthreadattribute-set-clr-thread-attribute.md)|Specifica l'attributo threading da applicare al punto di ingresso del programma CLR.|  
|[\/CLRUNMANAGEDCODECHECK](../../build/reference/clrunmanagedcodecheck-add-supressunmanagedcodesecurityattribute.md)|Specifica se verrà applicato l'attributo SuppressUnmanagedCodeSecurity alle chiamate PInvoke generate dal linker effettuate dal codice gestito in DLL native.|  
|[\/DEBUG](../../build/reference/debug-generate-debug-info.md)|Crea informazioni di debug.|  
|[\/DEBUGTYPE](../../build/reference/debugtype-debug-info-options.md)|Specifica i dati da includere nelle informazioni di debug.|  
|[\/DEF](../../build/reference/def-specify-module-definition-file.md)|Passa a LIB un file di definizione moduli \(estensione def\).|  
|[\/DEFAULTLIB](../../build/reference/defaultlib-specify-default-library.md)|Esegue ricerche nella libreria specificata per la risoluzione dei riferimenti esterni.|  
|[\/DELAY](../../build/reference/delay-delay-load-import-settings.md)|Controlla il caricamento ritardato delle DLL.|  
|[\/DELAYLOAD](../../build/reference/delayload-delay-load-import.md)|Causa il caricamento ritardato della DLL specificata.|  
|[\/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md)|Firma parzialmente un assembly.|  
|[\/DLL](../../build/reference/dll-build-a-dll.md)|Compila una DLL.|  
|[\/DRIVER](../../build/reference/driver-windows-nt-kernel-mode-driver.md)|Crea un driver in modalità kernel.|  
|[\/DYNAMICBASE](../../build/reference/dynamicbase-use-address-space-layout-randomization.md)|Specifica se generare un'immagine eseguibile che può essere riassegnata in modo casuale in fase di caricamento usando la funzionalità ASLR \(Address Space Layout Randomization\).|  
|[\/ENTRY](../../build/reference/entry-entry-point-symbol.md)|Imposta indirizzo iniziale.|  
|[\/errorReport](../../build/reference/errorreport-report-internal-linker-errors.md)|Segnala a Microsoft gli errori interni del linker.|  
|[\/EXPORT](../../build/reference/export-exports-a-function.md)|Esporta una funzione.|  
|[\/FIXED](../../build/reference/fixed-fixed-base-address.md)|Crea un programma caricabile solo nel relativo indirizzo di base preferito.|  
|[\/FORCE](../../build/reference/force-force-file-output.md)|Forza il completamento di un collegamento nonostante la presenza di simboli non risolti o definiti più volte.|  
|[\/FUNCTIONPADMIN](../../build/reference/functionpadmin-create-hotpatchable-image.md)|Crea un'immagine su cui si può applicare una patch a caldo.|  
|[\/GENPROFILE, \/FASTGENPROFILE](../../build/reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md)|Entrambe queste opzioni specificano la generazione di un file PDG dal linker per supportare l'ottimizzazione PGO. \/ GENPROFILE e \/FASTGENPROFILE usano parametri predefiniti diversi.|  
|[\/GUARD](../../build/reference/guard-enable-guard-checks.md)|Abilita la protezione guard flusso di controllo.|  
|[\/HEAP](../../build/reference/heap-set-heap-size.md)|Imposta le dimensioni in byte dell'heap.|  
|[\/HIGHENTROPYVA](../../build/reference/highentropyva-support-64-bit-aslr.md)|Specifica il supporto per la funzionalità ASLR a 64 bit a entropia elevata.|  
|[\/IDLOUT](../../build/reference/idlout-name-midl-output-files.md)|Specifica il nome del file IDL e di altri file di output MIDL.|  
|[\/IGNORE](../../build/reference/ignore-ignore-specific-warnings.md)|Disattiva l'output degli avvisi del linker specificati.|  
|[\/IGNOREIDL](../../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)|Impedisce l'elaborazione delle informazioni sugli attributi in un file IDL.|  
|[\/IMPLIB](../../build/reference/implib-name-import-library.md)|Esegue l'override del nome predefinito della libreria di importazione.|  
|[\/INCLUDE](../../build/reference/include-force-symbol-references.md)|Impone di includere riferimenti al simbolo.|  
|[\/INCREMENTAL](../../build/reference/incremental-link-incrementally.md)|Controlla il collegamento incrementale.|  
|[\/INTEGRITYCHECK](../../build/reference/integritycheck-require-signature-check.md)|Specifica che il modulo richiede una verifica della firma in fase di caricamento.|  
|[\/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)|Specifica un contenitore di chiavi per firmare un assembly.|  
|[\/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)|Specifica una chiave o una coppia di chiavi per firmare un assembly.|  
|[\/LARGEADDRESSAWARE](../../build/reference/largeaddressaware-handle-large-addresses.md)|Indica al compilatore che l'applicazione supportata indirizzi superiori a 2 GB|  
|[\/LIBPATH](../../build/reference/libpath-additional-libpath.md)|Specifica un percorso da cercare prima del percorso della libreria dell'ambiente.|  
|[\/LTCG](../../build/reference/ltcg-link-time-code-generation.md)|Specifica la generazione del codice in fase di collegamento.|  
|[\/MACHINE](../../build/reference/machine-specify-target-platform.md)|Specifica la piattaforma di destinazione.|  
|[\/MANIFEST](../../build/reference/manifest-create-side-by-side-assembly-manifest.md)|Crea un file manifesto side\-by\-side e facoltativamente lo incorpora nel file binario.|  
|[\/MANIFESTDEPENDENCY](../../build/reference/manifestdependency-specify-manifest-dependencies.md)|Specifica una sezione \<dependentAssembly\> nel file manifesto.|  
|[\/MANIFESTFILE](../../build/reference/manifestfile-name-manifest-file.md)|Modifica il nome predefinito del file manifesto.|  
|[\/MANIFESTINPUT](../../build/reference/manifestinput-specify-manifest-input.md)|Specifica un file di input del manifesto che il linker deve elaborare e incorporare nel file binario. Questa opzione si può usare più volte per specificare più file di input del manifesto.|  
|[\/MANIFESTUAC](../../build/reference/manifestuac-embeds-uac-information-in-manifest.md)|Specifica se le informazioni di Controllo dell'account utente sono incorporate nel manifesto del programma.|  
|[\/MAP](../../build/reference/map-generate-mapfile.md)|Crea un file MAP.|  
|[\/MAPINFO](../../build/reference/mapinfo-include-information-in-mapfile.md)|Include le informazioni specificate nel file di mapping.|  
|[\/MERGE](../../build/reference/merge-combine-sections.md)|Combina le sezioni.|  
|[\/MIDL](../../build/reference/midl-specify-midl-command-line-options.md)|Specifica opzioni della riga di comando MIDL.|  
|[\/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)|Disattiva la creazione di un assembly .NET Framework.|  
|[\/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md)|Ignora tutte le librerie predefinite \(o quelle specificate\) durante la risoluzione dei riferimenti esterni.|  
|[\/NOENTRY](../../build/reference/noentry-no-entry-point.md)|Crea una DLL di sole risorse.|  
|[\/NOLOGO](../../build/reference/nologo-suppress-startup-banner-linker.md)|Evita la visualizzazione del messaggio di avvio.|  
|[\/NXCOMPAT](../../build/reference/nxcompat-compatible-with-data-execution-prevention.md)|Indica che è stato eseguito il test di un eseguibile per verificarne la compatibilità con la funzionalità Protezione esecuzione programmi di Windows.|  
|[\/OPT](../../build/reference/opt-optimizations.md)|Controlla le ottimizzazioni di LINK.|  
|[\/ORDER](../../build/reference/order-put-functions-in-order.md)|Inserisce COMDAT nell'immagine secondo un ordine predeterminato.|  
|[\/OUT](../../build/reference/out-output-file-name.md)|Specifica il nome del file di output.|  
|[\/PDB](../../build/reference/pdb-use-program-database.md)|Crea un file del database di programma \(PDB\).|  
|[\/PDBALTPATH](../../build/reference/pdbaltpath-use-alternate-pdb-path.md)|Usa un percorso alternativo per salvare un file PDB.|  
|[\/PDBSTRIPPED](../../build/reference/pdbstripped-strip-private-symbols.md)|Crea un file del database di programma \(PDB\) senza simboli privati.|  
|[\/PGD](../../build/reference/pgd-specify-database-for-profile-guided-optimizations.md)|Specifica un file PDG per le ottimizzazioni PGO.|  
|[\/PROFILE](../../build/reference/profile-performance-tools-profiler.md)|Produce un file di output che può essere usato con il profiler di Strumenti per le prestazioni.|  
|[\/RELEASE](../../build/reference/release-set-the-checksum.md)|Imposta il checksum nell'intestazione del file exe.|  
|[\/SAFESEH](../../build/reference/safeseh-image-has-safe-exception-handlers.md)|Specifica che l'immagine conterrà una tabella di gestori eccezioni sicuri.|  
|[\/SECTION](../../build/reference/section-specify-section-attributes.md)|Esegue l'override gli attributi di una sezione.|  
|[\/STACK](../../build/reference/stack-stack-allocations.md)|Imposta le dimensioni in byte dello stack.|  
|[\/STUB](../../build/reference/stub-ms-dos-stub-file-name.md)|Connette un programma stub MS\-DOS a un programma Win32.|  
|[\/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md)|Indica al sistema operativo come eseguire il file exe.|  
|[\/SWAPRUN](../../build/reference/swaprun-load-linker-output-to-swap-file.md)|Indica al sistema operativo di copiare l'output del linker in un file di scambio prima di eseguirlo.|  
|[\/TLBID](../../build/reference/tlbid-specify-resource-id-for-typelib.md)|Specifica l'ID di risorsa della libreria dei tipi generata dal linker.|  
|[\/TLBOUT](../../build/reference/tlbout-name-dot-tlb-file.md)|Specifica il nome del file TLB e di altri file di output MIDL.|  
|[\/TSAWARE](../../build/reference/tsaware-create-terminal-server-aware-application.md)|Crea un'applicazione specificamente progettata per l'esecuzione in Terminal Server.|  
|[\/VERBOSE](../../build/reference/verbose-print-progress-messages.md)|Visualizza i messaggi di stato del linker.|  
|[\/VERSION](../../build/reference/version-version-information.md)|Assegna un numero di versione.|  
|[\/WINMD](../../build/reference/winmd-generate-windows-metadata.md)|Abilita la generazione di un file di metadati di Windows Runtime.|  
|[\/WINMDFILE](../../build/reference/winmdfile-specify-winmd-file.md)|Specifica il nome del file di output per i metadati di Windows Runtime \(winmd\) generato dall'opzione del linker [\/WINMD](../../build/reference/winmd-generate-windows-metadata.md).|  
|[\/WINMDKEYFILE](../../build/reference/winmdkeyfile-specify-winmd-key-file.md)|Specifica una chiave o una coppia di chiavi per firmare un file di metadati di Windows Runtime.|  
|[\/WINMDKEYCONTAINER](../../build/reference/winmdkeycontainer-specify-key-container.md)|Specifica un contenitore di chiavi per firmare un file di metadati di Windows Runtime.|  
|[\/WINMDDELAYSIGN](../../build/reference/winmddelaysign-partially-sign-a-winmd.md)|Firma parzialmente un file di metadati di Windows Runtime \(winmd\) inserendo la chiave pubblica nel file winmd.|  
|[\/WX](../../build/reference/wx-treat-linker-warnings-as-errors.md)|Considera gli avvisi del linker come errori.|  
  
 Per altre informazioni, vedere [Opzioni di LINK controllate dal compilatore](../../build/reference/compiler-controlled-link-options.md).  
  
## Vedere anche  
 [Riferimenti alla compilazione in C\/C\+\+](../../build/reference/c-cpp-building-reference.md)   
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Domande frequenti sulla compilazione](http://msdn.microsoft.com/it-it/56a3bb8f-0181-4989-bab4-a07ba950ab08)