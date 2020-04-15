---
title: Linker (pagine delle proprietà)
ms.date: 07/24/2019
ms.topic: article
ms.assetid: 7e7671e5-a35a-4e67-9bdb-661d75c4d11e
ms.openlocfilehash: 2f2068c6c51fc6bf4e4104213e946e243fc6df2e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81336591"
---
# <a name="linker-property-pages"></a>Linker (pagine delle proprietà)

Le seguenti proprietà sono disponibili in **Project** > **Properties** > **Configuration Properties** > **Linker**. Per ulteriori informazioni sul linker, vedere [CL Richiama le](cl-invokes-the-linker.md) opzioni del linker e [del linker](linker-options.md).

## <a name="general-property-page"></a>Pagina delle proprietà Generale

### <a name="output-file"></a>File di output

L'opzione [/OUT](out-output-file-name.md) esegue l'override del nome e del percorso predefiniti del programma creato dal linker.

### <a name="show-progress"></a>Mostra stato

Messaggi di stato del linker delle stampe

**Scelte**

- **Non impostato** - Nessun livello di dettaglio.
- **Visualizza tutti i messaggi** di stato - Visualizza tutti i messaggi di stato.
- **Per librerie ricercate** - Visualizza i messaggi di stato che indicano solo le librerie in cui è stata eseguita la ricerca.
- **Informazioni sulla piegatura COMDAT durante il collegamento ottimizzato** - Visualizza informazioni sulla riduzione COMDAT durante il collegamento ottimizzato.
- **Informazioni sui dati rimossi durante il collegamento ottimizzato:** visualizza informazioni sulle funzioni e sui dati rimossi durante il collegamento ottimizzato.
- **Informazioni sui moduli incompatibili con SEH** - Visualizza informazioni sui moduli incompatibili con la gestione sicura delle eccezioni.
- **Informazioni sulle attività del linker correlate al codice gestito:** consente di visualizzare informazioni sulle attività del linker relative al codice gestito.

### <a name="version"></a>Versione

L'opzione [/VERSION](version-version-information.md) indica al linker di inserire un numero di versione nell'intestazione del file con estensione exe o dll. Utilizzare DUMPBIN /HEADERS per visualizzare il campo della versione dell'immagine dei valori DI HEADER OPTIONAL per vedere l'effetto di **/VERSION**.

### <a name="enable-incremental-linking"></a>Abilita collegamento incrementale

Abilita il collegamento incrementale. ([/INCREMENTAL](incremental-link-incrementally.md), /INCREMENTAL:NO)

### <a name="suppress-startup-banner"></a>Non visualizzare messaggio di avvio

L'opzione [/NOLOGO](nologo-suppress-startup-banner-linker.md) impedisce la visualizzazione del messaggio di copyright e del numero di versione.

### <a name="ignore-import-library"></a>Ignora libreria di importazione

Questa proprietà indica al linker di non collegare l'output con estensione lib generato da questa compilazione a qualsiasi progetto dipendente. Consente al sistema del progetto di gestire i file DLL che non producono un file LIB quando vengono compilati. Se un progetto dipende da un altro progetto che genera una DLL, il sistema del progetto collega automaticamente il file con estensione lib generato dal progetto figlio. Questa proprietà potrebbe non essere necessaria nei progetti che producono DLL COM o DLL di sole risorse, poiché queste DLL non hanno esportazioni significative. Se una DLL non dispone di esportazioni, il linker non genera un file LIB. Se non è presente alcun file LIB di esportazione e il sistema del progetto indica al linker di collegarsi alla DLL mancante, il collegamento ha esito negativo. Usare la proprietà **Ignora libreria di importazione** per risolvere il problema. Se impostato su **Sì**, il sistema del progetto ignora la presenza o l'assenza del file LIB e fa sì che qualsiasi progetto che dipende da questo progetto non venga collegato al file LIB inesistente.

Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreImportLibrary%2A>.

### <a name="register-output"></a>Registra output

Eseguire `regsvr32.exe /s $(TargetPath)` nell'output di compilazione, valido solo per i progetti con estensione dll. Per i progetti con estensione exe, questa proprietà viene ignorata. Per registrare un output con estensione exe, impostare un evento di post-compilazione nella configurazione affinché sia eseguita la registrazione personalizzata. Tale operazione è sempre necessaria per i file con estensione exe registrati.

Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.RegisterOutput%2A>.

### <a name="per-user-redirection"></a>Reindirizzamento per utente

La registrazione in Visual Studio viene in genere eseguita in HKEY_CLASSES_ROOT (HKCR). Con Windows Vista e sistemi operativi successivi, è necessario eseguire Visual Studio con privilegi elevati per poter accedere a HKCR. Gli sviluppatori non sempre vogliono eseguire in modalità elevata, ma devono comunque lavorare con la registrazione. Il reindirizzamento per utente consente di effettuare la registrazione senza dover eseguire in modalità elevata.

Il reindirizzamento per utente forza la scrittura in HKCR ed esegue il reindirizzamento a HKEY\_CURRENT\_USER (HKCU). Se il reindirizzamento per utente è disattivato, è possibile che si generi l'[errore di compilazione del progetto PRJ0050](../../error-messages/tool-errors/project-build-error-prj0050.md) quando il programma tenta di scrivere in HKCR.

### <a name="additional-library-directories"></a>Directory librerie aggiuntive

Consente all'utente di sostituire il percorso della libreria dell'ambiente. ([/LIBPATH](libpath-additional-libpath.md):cartella)

### <a name="link-library-dependencies"></a>Collega dipendenze di libreria

Specifica se collegare i file con estensione lib creati da progetti dipendenti. In genere, si desidera collegare i file LIB, ma potrebbe non essere il caso di alcune DLL.

È anche possibile specificare un file con estensione obj indicando il nome e il percorso relativo del file, ad esempio "..\\..\MyLibProject\MyObjFile.obj". Se il codice sorgente per il file obj #includes un'intestazione precompilata, ad esempio pch.h, il file pch.obj si trova nella stessa cartella di MyObjFile.obj. È inoltre necessario aggiungere pch.obj come dipendenza aggiuntiva.

### <a name="use-library-dependency-inputs"></a>Usa input dipendenze di libreria

Specifica se utilizzare gli input per lo strumento bibliotecario, anziché il file di libreria stesso, durante il collegamento negli output di libreria delle dipendenze del progetto. In un progetto di grandi dimensioni, quando un progetto dipendente crea un file con estensione lib, il collegamento incrementale è disabilitato. In presenza di numerosi progetti dipendenti che creano file con estensione lib, la compilazione dell'applicazione può richiedere molto tempo. Quando questa proprietà è impostata su **Sì**, il sistema del progetto collega i file obj per i progetti dipendenti prodotti dai progetti dipendenti, abilitando il collegamento incrementale.

Per informazioni su come accedere alla pagina delle proprietà **Generale** del linker , vedere [Il compilatore Set di C, quindi le proprietà di compilazione in Visual Studio](../working-with-project-properties.md).

### <a name="link-status"></a>Stato del collegamento

Specifica se il linker deve visualizzare un indicatore di stato che indica la percentuale di completamento del collegamento. L'impostazione predefinita prevede la visualizzazione di queste informazioni sullo stato. ([/LTCG](ltcg-link-time-code-generation.md):STATUS LTCG:NOSTATUS)

### <a name="prevent-dll-binding"></a>Impedisci associazione DLL

[/ALLOWBIND](allowbind-prevent-dll-binding.md):NO imposta un bit nell'intestazione di una DLL che indica a Bind.exe che l'immagine non può essere associata. Una DLL può non essere associata se include una firma digitale, perché l'associazione rende la firma non valida.

### <a name="treat-linker-warning-as-errors"></a>Considera l'avviso del linker come errori

[/WX](wx-treat-linker-warnings-as-errors.md) non genera alcun file di output se il linker genera un avviso.

### <a name="force-file-output"></a>Forza output file

L'opzione [/FORCE](force-force-file-output.md) indica al linker di creare un file exe o una DLL anche se viene fatto riferimento a un simbolo ma non definito oppure è definito mediante moltiplicazione. Potrebbe creare un file .exe non valido.

**Scelte**

- **Enabled** - /FORCE senza argomenti implica sia multiplo che non risolto.
- **Moltiplica solo simbolo definito** - Utilizzare /FORCE:MULTIPLE per creare un file di output, anche se LINK trova più di una definizione per un simbolo.
- **Solo simbolo non definito** - Utilizzare /FORCE:UNRESOLVED per creare un file di output indipendentemente dal fatto che LINK trovi o meno un simbolo non definito. /FORCE:UNRESOLVED viene ignorato se il simbolo del punto di ingresso non è risolto.

### <a name="create-hot-patchable-image"></a>Crea immagine hot patchable

Prepara un'immagine per la patch a caldo.

**Scelte**

- **Abilitato** - Prepara un'immagine per la patch a caldo.
- **Solo immagine X86** - Prepara un'immagine X86 per la patch a caldo.
- **Solo immagine X64** - Prepara un'immagine X64 per la patch a caldo.
- **Itanium Image Only** - Prepara un'immagine Itanium per la patch a caldo.

### <a name="specify-section-attributes"></a>Specificare gli attributi di sezione

L'opzione [/SECTION](section-specify-section-attributes.md) modifica gli attributi di una sezione, eseguendo l'override degli attributi impostati quando è stato compilato il file obj per la sezione.

## <a name="input-property-page"></a>Pagina delle proprietà Input

### <a name="additional-dependencies"></a>Dipendenze aggiuntive

Specifica ulteriori elementi da aggiungere alla riga di comando del collegamento, ad esempio *kernel32.lib*.

### <a name="ignore-all-default-libraries"></a>Ignora tutte le librerie predefinite

L'opzione [/NODEFAULTLIB](nodefaultlib-ignore-libraries.md) indica al linker di rimuovere una o più librerie predefinite dall'elenco delle librerie in cui esegue la ricerca durante la risoluzione dei riferimenti esterni.

### <a name="ignore-specific-default-libraries"></a>Ignora librerie predefinite specifiche

Specifica il nome di una o più librerie predefinite da ignorare. Separare più librerie con un punto e virgola. (/NODEFAULTLIB:[nome, nome, ...])

### <a name="module-definition-file"></a>File di definizione del modulo

L'opzione [/DEF](def-specify-module-definition-file.md) passa un file di definizione moduli (def) al linker. È possibile specificare un solo file def per LINK.

### <a name="add-module-to-assembly"></a>Aggiungi modulo all'assieme

L'opzione [/ASSEMBLYMODULE](assemblymodule-add-a-msil-module-to-the-assembly.md) consente di aggiungere un riferimento di modulo a un assembly. Le informazioni sul tipo nel modulo non saranno disponibili per il programma di assemblaggio che ha aggiunto il riferimento al modulo. Tuttavia, le informazioni sul tipo nel modulo saranno disponibili per qualsiasi programma che fa riferimento all'assembly.

### <a name="embed-managed-resource-file"></a>Incorpora file di risorse gestite

[/ASSEMBLYRESOURCE](assemblyresource-embed-a-managed-resource.md) incorpora un file di risorse nel file di output.

### <a name="force-symbol-references"></a>Imponi riferimenti al simbolo

L'opzione [/INCLUDE](include-force-symbol-references.md) indica al linker di aggiungere un simbolo specificato alla tabella dei simboli.

### <a name="delay-loaded-dlls"></a>DLL ritardate

L'opzione [/DELAYLOAD](delayload-delay-load-import.md) causa il caricamento ritardato delle DLL. Il nome dll specifica una DLL per ritardare il caricamento.

### <a name="assembly-link-resource"></a>Risorsa collegamento assembly

L'opzione [/ASSEMBLYLINKRESOURCE](assemblylinkresource-link-to-dotnet-framework-resource.md) crea un collegamento a una risorsa .NET Framework nel file di output; il file di risorse non viene inserito nel file di output.

## <a name="manifest-file-property-page"></a>Pagina delle proprietà File manifesto

### <a name="generate-manifest"></a>Genera manifesto

[/MANIFEST](manifest-create-side-by-side-assembly-manifest.md) specifica che il linker deve creare un file manifesto side-by-side.

### <a name="manifest-file"></a>File manifesto

[/MANIFESTFILE](manifestfile-name-manifest-file.md) consente di modificare il nome predefinito del file manifesto. Il nome predefinito del file manifesto è il nome del file con estensione manifest aggiunto.

### <a name="additional-manifest-dependencies"></a>Dipendenze aggiuntive del manifestoAdditional Manifest Dependencies

[/MANIFESTDEPENDENCY](manifestdependency-specify-manifest-dependencies.md) consente di specificare gli attributi che verranno inseriti nella sezione delle dipendenze del file manifesto.

### <a name="allow-isolation"></a>Consenti isolamento

Specifica il comportamento per la ricerca del manifesto. ([/ALLOWISOLATION](allowisolation-manifest-lookup.md):NO)

### <a name="enable-user-account-control-uac"></a>Abilita controllo dell'account utente (UAC)

Specifica se il controllo dell'account utente è abilitato o meno.  ([/MANIFESTUAC](manifestuac-embeds-uac-information-in-manifest.md), /MANIFESTUAC:NO)

### <a name="uac-execution-level"></a>Livello di esecuzione del controllo dell'account utenteUAC Execution Level

Specifica il livello di esecuzione richiesto per l'applicazione durante l'esecuzione con Controllo dell'account utente.  (/MANIFESTUAC:level

**Scelte**

- **asInvoker** - Livello di esecuzione del controllo dell'account utente: come invoker.
- **highestAvailable** - Livello di esecuzione del controllo dell'account utente: massimo disponibile.
- **requireAdministrator** - Livello di esecuzione del controllo dell'account utente: richiedere l'amministratore.

### <a name="uac-bypass-ui-protection"></a>Protezione dell'interfaccia utente di bypass del controllo dell'utenteUAC Bypass UI Protection

Specifica se ignorare o meno i livelli di protezione dell'interfaccia utente per altre finestre sul desktop.  Impostare questa proprietà su 'Sì' solo per le applicazioni di accessibilità.  ([/MANIFESTUAC](manifestuac-embeds-uac-information-in-manifest.md):uiAccess

## <a name="debugging-property-page"></a>Pagina delle proprietà di debug

### <a name="generate-debug-info"></a>Genera informazioni di debug

Questa opzione consente la creazione di informazioni di debug per il file exe o la DLL.

**Scelte**

- **No** - Non produce informazioni di debug.
- **Genera informazioni di debug** : creare un database di programma (PDB) completo ideale per la distribuzione al server di simboli Microsoft.Generate Debug Information - Create a complete Program Database (PDB) ideal ideal for distribution to Microsoft Symbol Server.
- Genera informazioni di **debug ottimizzate per collegamenti più veloci:** produce un database di programma (PDB) ideale per il ciclo di debug di collegamento di modifica.
- Genera informazioni di **debug ottimizzate per la condivisione e la pubblicazione:** produce un database di programma (PDB) ideale per il ciclo di debug dei collegamenti di modifica.

### <a name="generate-program-database-file"></a>Genera file di database di programma

Per impostazione predefinita, quando si specifica [/DEBUG,](debug-generate-debug-info.md) il linker crea un database di programma (PDB) che contiene le informazioni di debug. Il nome file predefinito per il file PDB ha il nome di base del programma e l'estensione pdb.

### <a name="strip-private-symbols"></a>Striscia Simboli Privati

L'opzione [/PDBSTRIPPED](pdbstripped-strip-private-symbols.md) crea un secondo file di database di programma (PDB) quando si compila l'immagine del programma con una qualsiasi delle opzioni del compilatore o del linker che generano un file PDB (/DEBUG, /'7, 'd', o /').

### <a name="generate-map-file"></a>Genera file di mappa

L'opzione [/MAP](map-generate-mapfile.md) indica al linker di creare un file di mappa.

### <a name="map-file-name"></a>Nome file di mapping

Un nome specificato dall'utente per il file di mappa. Sostituisce il nome predefinito.

### <a name="map-exports"></a>Esportazioni di mappe

L'opzione [/MAPINFO](mapinfo-include-information-in-mapfile.md) indica al linker di includere le informazioni specificate in un file di mappa, che viene creato se si specifica l'opzione /MAP. EXPORTS indica al linker di includere le funzioni esportate.

### <a name="debuggable-assembly"></a>Assembly di debug

[/ASSEMBLYDEBUG](assemblydebug-add-debuggableattribute.md) genera l'attributo DebuggableAttribute con il rilevamento delle informazioni di debug e disabilita le ottimizzazioni JIT.

## <a name="system-property-page"></a>Pagina delle proprietà di sistema

### <a name="subsystem"></a>Sottosistema

L'opzione [/SUBSYSTEM](subsystem-specify-subsystem.md) indica al sistema operativo come eseguire il file .exe. La scelta del sottosistema influisce sul simbolo del punto di ingresso (o funzione del punto di ingresso) che verrà scelto dal linker.

**Scelte**

- **Non impostato** - Nessun sottosistema impostato.
- **Console** - Applicazione in modalità carattere Win32.Console - Win32 character-mode application. Alle applicazioni console viene assegnata una console dal sistema operativo. Se main o wmain è definito, CONSOLE è l'impostazione predefinita.
- **Windows** - L'applicazione non richiede una console, probabilmente perché crea le proprie finestre per l'interazione con l'utente. Se WinMain o wWinMain è definito, WINDOWS è l'impostazione predefinita.
- **Native** - Driver di periferica per Windows NT. Se si specifica /DRIVER:WDM, NATIVE è l'impostazione predefinita.
- **Applicazione EFI** - Applicazione EFI.
- Driver del servizio di **avvio EFI** - Driver del servizio di avvio EFI.
- **EFI ROM** - EFI ROM.
- **Runtime EFI** - Runtime EFI.
- **POSIX** - Applicazione eseguita con il sottosistema POSIX in Windows NT.

### <a name="minimum-required-version"></a>Versione minima richiesta

Specificare la versione minima richiesta del sottosistema. Gli argomenti sono numeri decimali compresi nell'intervallo da 0 a 65.535.

### <a name="heap-reserve-size"></a>Dimensione riserva heap

Specifica la dimensione totale dell'allocazione heap nella memoria virtuale. Il valore predefinito è 1 MB.    ([/HEAP](heap-set-heap-size.md):riserva)

### <a name="heap-commit-size"></a>Dimensione commit heap

Specifica la dimensione totale di allocazione dell'heap nella memoria fisica. Il valore predefinito è 4 KB.    ([/HEAP](heap-set-heap-size.md):reserve,commit)

### <a name="stack-reserve-size"></a>Dimensione riserva pila

Specifica la dimensione totale di allocazione dello stack nella memoria virtuale. Il valore predefinito è 1 MB.     ([/STACK](stack-stack-allocations.md):riserva)

### <a name="stack-commit-size"></a>Dimensione commit dello stack

Specifica la dimensione totale di allocazione dello stack nella memoria fisica. Il valore predefinito è 4 KB.     ([/STACK](stack-stack-allocations.md):riserva,commit)

### <a name="enable-large-addresses"></a>Abilita indirizzi di grandi dimensioni

L'opzione [/LARGEADDRESSAWARE](largeaddressaware-handle-large-addresses.md) indica al linker che l'applicazione è in grado di gestire indirizzi superiori a 2 gigabyte. Per impostazione predefinita, /LARGEADDRESSAWARE:NO è abilitato se /LARGEADDRESSAWARE non è specificato in altro modo nella riga del linker.

### <a name="terminal-server"></a>Terminal Server

L'opzione [/TSAWARE](tsaware-create-terminal-server-aware-application.md) imposta un flag nel campo DllCharacteristics IMAGE_OPTIONAL_HEADER nell'intestazione facoltativa dell'immagine del programma. Quando questo flag viene impostato, Terminal Server non apporta determinate modifiche all'applicazione.

### <a name="swap-run-from-cd"></a>Scambia esecuzione da CD

L'opzione [/SWAPRUN](swaprun-load-linker-output-to-swap-file.md) indica al sistema operativo di copiare prima l'output del linker in un file di scambio, quindi di eseguire l'immagine da lì. Questa opzione è una funzionalità di Windows NT 4.0 (e versioni successive). Quando si specifica **CD,** il sistema operativo copierà l'immagine su un disco rimovibile in un file di paging e quindi la caricherà.

### <a name="swap-run-from-network"></a>Scambia esecuzione dalla rete

L'opzione [/SWAPRUN](swaprun-load-linker-output-to-swap-file.md) indica al sistema operativo di copiare prima l'output del linker in un file di scambio, quindi di eseguire l'immagine da lì. Questa opzione è una funzionalità di Windows NT 4.0 (e versioni successive). Se si specifica **NET,** il sistema operativo copierà prima l'immagine binaria dalla rete a un file di scambio e la caricherà da lì. Questa opzione è utile per l'esecuzione di applicazioni in rete.

### <a name="driver"></a>Driver

Utilizzare l'opzione del linker [/DRIVER](driver-windows-nt-kernel-mode-driver.md) per compilare un driver in modalità kernel di Windows NT.

**Scelte**

- **Non impostato** - Impostazione predefinita del driver.
- **Driver** - Driver
- **Solo su** - /DRIVER:UPONLY fa in modo che il linker aggiurin): IMAGE_FILE_UP_SYSTEM_ONLY bit alle caratteristiche nell'intestazione di output specifichi che si tratta di un driver uniprocessore (UP). Il sistema operativo si rifiuterà di caricare un driver UP su un sistema multiprocessore (MP).
- **WDM** - /DRIVER:WDM fa in modo che il linker imposti il bit di IMAGE_DLLCHARACTERISTICS_WDM_DRIVER nel campo DllCharacteristics dell'intestazione facoltativa.

## <a name="optimization-property-page"></a>Pagina delle proprietà OttimizzazioneOptimization Property Page

### <a name="references"></a>Riferimenti

[/OPT](opt-optimizations.md):REF elimina le funzioni e/o i dati a cui non viene mai fatto riferimento mentre /OPT:NOREF mantiene le funzioni e/o i dati a cui non viene mai fatto riferimento.

### <a name="enable-comdat-folding"></a>Abilita riduzione COMDAT

Utilizzare [/OPT](opt-optimizations.md):ICF\[- iterazioni] per eseguire la riduzione COMDAT identica.

### <a name="function-order"></a>Ordine delle funzioni

L'opzione [/ORDER](order-put-functions-in-order.md)indica a LINK di ottimizzare il programma inserendo determinati COMDAT nell'immagine in un ordine predeterminato. LINK posiziona le funzioni nell'ordine specificato all'interno di ogni sezione dell'immagine.

### <a name="profile-guided-database"></a>Database Pgolare

Specificare il file pgd per le ottimizzazioni Guidate dal profilo. ([/PGD](pgd-specify-database-for-profile-guided-optimizations.md))

### <a name="link-time-code-generation"></a>Generazione codice in fase di collegamento

Specifica la generazione del codice in fase di collegamento. ([/LTCG](ltcg-link-time-code-generation.md))

**Scelte**

- **Predefinito** - Impostazione LTCG predefinita.
- **Utilizzare generazione codice con** fase di collegamento rapida - Utilizzare generazione di codice in fase di esecuzione di collegamento con [/FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md).
- **Utilizzare Generazione codice tempo di collegamento** - Utilizzare generazione codice tempo di [collegamento](ltcg-link-time-code-generation.md).
- **Ottimizzazione PGO - Strumento** - Utilizzare [l'ottimizzazione PGO](../profile-guided-optimizations.md) con :PGINSTRUMENT.
- **Ottimizzazione PGO - Ottimizzazione** - Specifica che il linker deve utilizzare i dati di profilo creati dopo l'esecuzione del file binario instrumentato per creare un'immagine ottimizzata.
- **Ottimizzazione PGO - Aggiorna** - Consente di aggiungere o modificare l'elenco dei file di input rispetto a quanto specificato nella fase :PGINSTRUMENT.

## <a name="embedded-idl-property-page"></a>Pagina delle proprietà IDL incorporata

### <a name="midl-commands"></a>Comandi MIDL

Specificare le opzioni della riga di comando MIDL. ([/MIDL](midl-specify-midl-command-line-options.md):@responsefile)

### <a name="ignore-embedded-idl"></a>Ignora IDL incorporato

L'opzione [/IGNOREIDL](ignoreidl-don-t-process-attributes-into-midl.md) specifica che tutti gli attributi IDL nel codice sorgente non devono essere elaborati in un file IDL.

### <a name="merged-idl-base-file-name"></a>Nome file di base IDL unito

L'opzione [/IDLOUT](idlout-name-midl-output-files.md) specifica il nome e l'estensione del file IDL.

### <a name="type-library"></a>Libreria dei tipi

L'opzione [/TLBOUT](tlbout-name-dot-tlb-file.md) specifica il nome e l'estensione del file tlb.

### <a name="typelib-resource-id"></a>ID risorsa TypeLib

Consente di specificare l'ID di risorsa della libreria dei tipi generata dal linker. ([/TLBID](tlbid-specify-resource-id-for-typelib.md):id)

## <a name="windows-metadata-property-page"></a>Pagina delle proprietà Metadati di Windows

### <a name="generate-windows-metadata"></a>Genera metadati di Windows

Abilita o disabilita la generazione di metadati di Windows.

**Scelte**

- **Sì** - Abilita la generazione di file di metadati di Windows.
- **No** - Disabilita la generazione dei file di metadati di Windows.

### <a name="windows-metadata-file"></a>File di metadati di Windows

L'opzione [/WINMDFILE.](winmdfile-specify-winmd-file.md)

### <a name="windows-metadata-key-file"></a>File di chiave dei metadati di Windows

Specificare una coppia di chiavi o chiavi per firmare un metadata di Windows.Specify key or key pair to sign an Windows Metadata. ([/WINMDKEYFILE](winmdkeyfile-specify-winmd-key-file.md):nomefile)

### <a name="windows-metadata-key-container"></a>Contenitore di chiavi dei metadati di WindowsWindows Metadata Key Container

Specificare un contenitore di chiavi per firmare un metadata di Windows.Specify a key container to sign an Windows Metadata. ([/WINMDKEYCONTAINER](winmdkeycontainer-specify-key-container.md):nome)

### <a name="windows-metadata-delay-sign"></a>Firma ritardata metadati Windows

Firmare parzialmente un Metadata di Windows.Partially sign an Windows Metadata. Utilizzare [/WINMDDELAYSIGN](winmddelaysign-partially-sign-a-winmd.md) se si desidera inserire solo la chiave pubblica nei metadati di Windows. Il valore predefinito è /WINMDDELAYSIGN:NO.

## <a name="advanced-property-page"></a>Pagina delle proprietà Avanzate

### <a name="entry-point"></a>Punto di ingresso

L'opzione [/ENTRY](entry-entry-point-symbol.md) specifica una funzione del punto di ingresso come indirizzo iniziale per un file exe o una DLL.

### <a name="no-entry-point"></a>Nessun punto di ingresso

L'opzione [/NOENTRY](noentry-no-entry-point.md)è necessaria per la creazione di una DLL di sole risorse. Utilizzare questa opzione per impedire a `_main` LINK di collegare un riferimento alla DLL.

### <a name="set-checksum"></a>Imposta checksum

L'opzione [/RELEASE](release-set-the-checksum.md) imposta il checksum nell'intestazione di un file con estensione exe.

### <a name="base-address"></a>Indirizzo di base

Imposta un indirizzo di base per il programma. ([/BASE](base-base-address.md):\[indirizzo , dimensione] @filename,chiave)

### <a name="randomized-base-address"></a>Indirizzo di base randomizzato

Indirizzo di base randomizzato. ([/DYNAMICBASE](dynamicbase-use-address-space-layout-randomization.md)\[:NO))

### <a name="fixed-base-address"></a>Indirizzo di base fisso

Crea un programma caricabile solo nel relativo indirizzo di base preferito. ([/FIXED](fixed-fixed-base-address.md)\[:NO])

### <a name="data-execution-prevention-dep"></a>Protezione esecuzione programmi

Contrassegna un eseguibile come testato per essere compatibile con la funzionalità Prevenzione esecuzione programmi di Windows.Marks an executable as be tested to be compatible with Windows Data Execution Prevention feature. ([/NXCOMPAT](nxcompat-compatible-with-data-execution-prevention.md)\[:NO])

### <a name="turn-off-assembly-generation"></a>Disattiva generazione di assiemi

L'opzione [/NOASSEMBLY](noassembly-create-a-msil-module.md) indica al linker di creare un'immagine per il file di output corrente senza un assembly .NET Framework.

### <a name="unload-delay-loaded-dll"></a>DLL di caricamento ritardato caricato

Il qualificatore **UNLOAD** indica alla funzione helper di caricamento ritardato di supportare lo scaricamento esplicito della DLL. ([/DELAY](delay-delay-load-import-settings.md):SCARICA)

### <a name="nobind-delay-loaded-dll"></a>DLL caricata senza ritardo di associazione

Il qualificatore **NOBIND** indica al linker di non includere un IAT associabile nell'immagine finale. L'impostazione predefinita prevede la creazione della tabella di indirizzi di importazione associabile per DLL di caricamento ritardato. ([/DELAY](delay-delay-load-import-settings.md):NOBIND)

### <a name="import-library"></a>Libreria di importazione

Esegue l'override del nome predefinito della libreria di importazione. ([/IMPLIB](implib-name-import-library.md):nomefile)

### <a name="merge-sections"></a>Unisci sezioni

L'opzione [/MERGE](merge-combine-sections.md) combina la prima sezione (da) con la seconda sezione (a), denominando la sezione risultante in. Ad esempio, /merge:.rdata.text.

### <a name="target-machine"></a>Macchina di destinazione

L'opzione [/MACHINE](machine-specify-target-platform.md) specifica la piattaforma di destinazione per il programma.

**Scelte**

- **Non impostato**
- **MachineARM (Macchina**
- **MachineARM64 (macchina ARM64)**
- **MachineEBC**
- **MachineIA64**
- **MacchinaMIPS**
- **MacchinaMACHINEPS16**
- **MacchinaMIPSFPU**
- **MacchinaMIPSFPU16**
- **MacchinaSH4**
- **MacchinaINETTA**
- **MacchinaX64**
- **MacchinaX86**

### <a name="profile"></a>Profilo

Produce un file di output che può essere usato con il profiler di Strumenti per le prestazioni. Richiede l'impostazione GenerateDebugInformation (/[/DEBUG](debug-generate-debug-info.md)). ([/PROFILE](profile-performance-tools-profiler.md))

### <a name="clr-thread-attribute"></a>Attributo thread CLR

Specificare in modo esplicito l'attributo threading per il punto di ingresso del programma CLR.

**Scelte**

- **Attributo threading MTA:** applica l'attributo MTAThreadAttribute al punto di ingresso del programma.
- **Attributo threading STA:** applica l'attributo STAThreadAttribute al punto di ingresso del programma.
- **Attributo threading predefinito** - Uguale a specificare [/CLRTHREADATTRIBUTE](clrthreadattribute-set-clr-thread-attribute.md). Consente a Common Language Runtime (CLR) di impostare l'attributo di threading predefinito.

### <a name="clr-image-type"></a>Tipo di immagine CLR

Imposta il tipo (IJW, pure o safe) di un'immagine CLR.

**Scelte**

- **Forza immagine IJW**
- **Forza immagine IL pura**
- **Forza immagine IL sicura**
- **Tipo di immagine predefinito**

### <a name="key-file"></a>File codice

Specificare la chiave o la coppia di chiavi per firmare un assembly. ([/KEYFILE](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md):nomefile)

### <a name="key-container"></a>Contenitore di chiaviKey Container

Specificare un contenitore di chiavi per firmare un assembly. ([/KEYCONTAINER](keycontainer-specify-a-key-container-to-sign-an-assembly.md):nome)

### <a name="delay-sign"></a>Segno di ritardo

Firmare parzialmente un assembly. Utilizzare [/DELAYSIGN](delaysign-partially-sign-an-assembly.md) se si desidera inserire solo la chiave pubblica nell'assembly. Il valore predefinito è /DELAYSIGN:NO.

### <a name="clr-unmanaged-code-check"></a>Controllo codice non gestito CLRCLR Unmanaged Code Check

[/CLRUNMANAGEDCODECHECK](clrunmanagedcodecheck-add-suppressunmanagedcodesecurityattribute.md) specifica se il linker applicherà SuppressUnmanagedCodeSecurityAttribute alle chiamate PInvoke generate dal linker dal codice gestito nelle DLL native.

### <a name="error-reporting"></a>Segnalazione errori

Consente di inviare le informazioni sugli errori interni del compilatore direttamente al team di Visual C++.

**Scelte**

- **PromptImmediately** - Chiedi conferma immediatamente.
- **Coda per accesso successivo** - Coda per l'accesso successivo.
- **Invia segnalazione errori** - Invia segnalazione errori.
- **Nessuna segnalazione errori** - Nessuna segnalazione errori.

### <a name="sectionalignment"></a>SectionAlignment

L'opzione [/ALIGN](align-section-alignment.md) specifica l'allineamento di ogni sezione all'interno dello spazio degli indirizzi lineari del programma. L'argomento number è in byte e deve essere una potenza di due.

### <a name="preserve-last-error-code-for-pinvoke-calls"></a>Mantieni ultimo codice di errore per le chiamate PInvoke

[/CLRSUPPORTLASTERROR](clrsupportlasterror-preserve-last-error-code-for-pinvoke-calls.md), che è attivata per impostazione predefinita, mantiene l'ultimo codice di errore delle funzioni chiamate tramite il meccanismo P/Invoke, che consente di chiamare funzioni native in DLL, dal codice compilato con /clr.

**Scelte**

- **Abilitato** - Abilita CLRSupportLastError.
- **Disabilitato** - Disabilita CLRSupportLastError.
- **Solo DLL** di sistema: abilitare CLRSupportLastError solo per le DLL di sistema.

### <a name="image-has-safe-exception-handlers"></a>L'immagine dispone di gestori di eccezioni sicuri

Quando si specifica [/SAFESEH,](safeseh-image-has-safe-exception-handlers.md) il linker produrrà un'immagine solo se può produrre una tabella dei gestori eccezioni sicuri dell'immagine. Questa tabella specifica per il sistema operativo quali gestori di eccezioni sono validi per l'immagine.
