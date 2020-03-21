---
title: Pagine delle proprietà Linker
ms.date: 07/24/2019
ms.topic: article
ms.assetid: 7e7671e5-a35a-4e67-9bdb-661d75c4d11e
ms.openlocfilehash: fd0befd7b8ed4e7a4209c3c80602be2f2a99422f
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80079607"
---
# <a name="linker-property-pages"></a>Pagine delle proprietà Linker

Le proprietà seguenti sono disponibili in **progetto** > **Proprietà** > **proprietà di configurazione** > **linker**. Per ulteriori informazioni sul linker, vedere [CL richiama le opzioni del](cl-invokes-the-linker.md) linker e del [linker](linker-options.md).

## <a name="general-property-page"></a>Pagina delle proprietà generale

### <a name="output-file"></a>File di output

L'opzione [/out](out-output-file-name.md) sostituisce il nome e il percorso predefiniti del programma creato dal linker.

### <a name="show-progress"></a>Mostra stato

Visualizza i messaggi di stato del linker

**Choices**

- **Non impostato** -nessun livello di dettaglio.
- **Visualizza tutti i messaggi di stato** -Visualizza tutti i messaggi di stato.
- **Per le librerie** cercate: Visualizza i messaggi di stato che indicano solo le librerie ricercate.
- Informazioni **sulla riduzione COMDAT durante il collegamento ottimizzato** : Visualizza le informazioni sulla riduzione COMDAT durante il collegamento ottimizzato.
- Informazioni **sui dati rimossi durante il collegamento ottimizzato** : Visualizza informazioni sulle funzioni e sui dati rimossi durante il collegamento ottimizzato.
- Informazioni **sui moduli incompatibili con SEH** : Visualizza le informazioni sui moduli incompatibili con la gestione sicura delle eccezioni.
- Informazioni **sull'attività del linker correlata al codice gestito** : visualizzare informazioni sull'attività del linker correlata al codice gestito.

### <a name="version"></a>Versione

L'opzione [/Version](version-version-information.md) indica al linker di inserire un numero di versione nell'intestazione del file con estensione exe o dll. Usare DUMPBIN/HEADERS per visualizzare il campo versione immagine dei valori di intestazione FACOLTATIVi per vedere l'effetto di **/Version**.

### <a name="enable-incremental-linking"></a>Abilita collegamento incrementale

Abilita il collegamento incrementale. ([/Incremental](incremental-link-incrementally.md),/incremental: No)

### <a name="suppress-startup-banner"></a>Non visualizzare messaggio di avvio

L'opzione [/nologo](nologo-suppress-startup-banner-linker.md) impedisce la visualizzazione del messaggio di copyright e del numero di versione.

### <a name="ignore-import-library"></a>Ignora libreria di importazione

Questa proprietà indica al linker di non collegare l'output con estensione lib generato da questa compilazione a qualsiasi progetto dipendente. Consente al sistema del progetto di gestire i file con estensione dll che non producono un file con estensione LIB quando vengono compilati. Se un progetto dipende da un altro progetto che genera una DLL, il sistema del progetto collega automaticamente il file con estensione lib generato dal progetto figlio. Questa proprietà potrebbe non essere necessaria nei progetti che producono DLL COM o dll di sola risorsa, perché queste dll non hanno esportazioni significative. Se per una DLL non sono presenti esportazioni, il linker non genera un file con estensione LIB. Se non è presente alcun file export. lib e il sistema del progetto indica al linker di collegarsi alla DLL mancante, il collegamento ha esito negativo. Usare la proprietà **Ignora libreria di importazione** per risolvere il problema. Se è impostato su **Sì**, il sistema del progetto ignora la presenza o l'assenza del file con estensione LIB e fa sì che qualsiasi progetto che dipende da questo progetto non venga collegato al file con estensione LIB inesistente.

Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreImportLibrary%2A>.

### <a name="register-output"></a>Registra output

Eseguire `regsvr32.exe /s $(TargetPath)` nell'output di compilazione, valido solo per i progetti con estensione dll. Per i progetti con estensione exe, questa proprietà viene ignorata. Per registrare un output con estensione exe, impostare un evento di post-compilazione nella configurazione affinché sia eseguita la registrazione personalizzata. Tale operazione è sempre necessaria per i file con estensione exe registrati.

Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.RegisterOutput%2A>.

### <a name="per-user-redirection"></a>Reindirizzamento per utente

La registrazione in Visual Studio viene in genere eseguita in HKEY_CLASSES_ROOT (HKCR). Con Windows Vista e sistemi operativi successivi, è necessario eseguire Visual Studio con privilegi elevati per poter accedere a HKCR. Gli sviluppatori non vogliono sempre eseguire in modalità con privilegi elevati, ma devono comunque usare la registrazione. Il reindirizzamento per utente consente di effettuare la registrazione senza che sia necessario eseguire in modalità con privilegi elevati.

Il reindirizzamento per utente forza la scrittura in HKCR ed esegue il reindirizzamento a HKEY\_CURRENT\_USER (HKCU). Se il reindirizzamento per utente è disattivato, è possibile che si generi l'[errore di compilazione del progetto PRJ0050](../../error-messages/tool-errors/project-build-error-prj0050.md) quando il programma tenta di scrivere in HKCR.

### <a name="additional-library-directories"></a>Directory librerie aggiuntive

Consente all'utente di sostituire il percorso della libreria dell'ambiente. ([/LIBPATH](libpath-additional-libpath.md): cartella)

### <a name="link-library-dependencies"></a>Collega dipendenze libreria

Specifica se collegare i file con estensione lib creati da progetti dipendenti. In genere, si desidera creare un collegamento nei file con estensione LIB, ma potrebbe non essere il caso di determinate dll.

È anche possibile specificare un file con estensione obj indicando il nome e il percorso relativo del file, ad esempio "..\\..\MyLibProject\MyObjFile.obj". Se il codice sorgente per il file obj #includes un'intestazione precompilata, ad esempio PCH. h, il file PCH. obj si trova nella stessa cartella di MyObjFile. obj. È inoltre necessario aggiungere PCH. obj come dipendenza aggiuntiva.

### <a name="use-library-dependency-inputs"></a>Usa input dipendenze di libreria

Specifica se utilizzare gli input per lo strumento Gestione librerie, anziché il file di libreria, quando si esegue il collegamento negli output di libreria delle dipendenze del progetto. In un progetto di grandi dimensioni, quando un progetto dipendente crea un file con estensione lib, il collegamento incrementale è disabilitato. In presenza di numerosi progetti dipendenti che creano file con estensione lib, la compilazione dell'applicazione può richiedere molto tempo. Quando questa proprietà è impostata su **Sì**, il sistema del progetto collega i file con estensione obj per le librerie create dai progetti dipendenti, abilitando il collegamento incrementale.

Per informazioni su come accedere alla pagina delle proprietà **generale** del linker, [vedere C++ impostare le proprietà del compilatore e della compilazione in Visual Studio](../working-with-project-properties.md).

### <a name="link-status"></a>Stato del collegamento

Specifica se il linker deve visualizzare un indicatore di stato che mostra la percentuale di completamento del collegamento. Per impostazione predefinita, le informazioni sullo stato non vengono visualizzate. ([/LTCG](ltcg-link-time-code-generation.md): stato | LTCG: NOSTATUS)

### <a name="prevent-dll-binding"></a>Impedisci associazione DLL

[/ALLOWBIND](allowbind-prevent-dll-binding.md): No imposta un bit nell'intestazione di una dll che indica a bind. exe che l'immagine non può essere associata. Una DLL può non essere associata se include una firma digitale, perché l'associazione rende la firma non valida.

### <a name="treat-linker-warning-as-errors"></a>Considera gli avvisi del linker come errori

[/WX](wx-treat-linker-warnings-as-errors.md) fa in modo che non venga generato alcun file di output se il linker genera un avviso.

### <a name="force-file-output"></a>Forza output file

L'opzione [/Force](force-force-file-output.md) indica al linker di creare un file con estensione exe o una dll anche se viene fatto riferimento a un simbolo, ma non definito, oppure se è stata definita una moltiplicazione. Potrebbe creare un file con estensione exe non valido.

**Choices**

- **Enabled** -/Force senza argomenti implica sia il multiplo che non risolto.
- **Solo simbolo definito** . utilizzare/Force: multiple per creare un file di output, anche se il collegamento trova più di una definizione per un simbolo.
- **Solo simbolo non definito** : usare/Force: Unresolved per creare un file di output indipendentemente dal fatto che il collegamento trovi un simbolo non definito. /FORCE: UNRESOLVED viene ignorato se il simbolo del punto di ingresso non è risolto.

### <a name="create-hot-patchable-image"></a>Creare un'immagine Hot patchable

Prepara un'immagine per patch a caldo.

**Choices**

- **Enabled** : prepara un'immagine per patch a caldo.
- **Solo immagine x86** : prepara un'immagine x86 per patch a caldo.
- **Solo immagine x64** : prepara un'immagine x64 per patch a caldo.
- **Solo immagine Itanium** : prepara un'immagine Itanium per patch a caldo.

### <a name="specify-section-attributes"></a>Specificare gli attributi della sezione

L'opzione [/Section](section-specify-section-attributes.md) modifica gli attributi di una sezione, sostituendo gli attributi impostati durante la compilazione del file obj per la sezione.

## <a name="input-property-page"></a>Pagina delle proprietà input

### <a name="additional-dependencies"></a>Dipendenze aggiuntive

Specifica ulteriori elementi da aggiungere alla riga di comando del collegamento, ad esempio *Kernel32. lib*.

### <a name="ignore-all-default-libraries"></a>Ignora tutte le librerie predefinite

L'opzione [/NODEFAULTLIB](nodefaultlib-ignore-libraries.md) indica al linker di rimuovere una o più librerie predefinite dall'elenco di librerie che esegue la ricerca durante la risoluzione dei riferimenti esterni.

### <a name="ignore-specific-default-libraries"></a>Ignora librerie predefinite specifiche

Specifica il nome di una o più librerie predefinite da ignorare. Separare più librerie con un punto e virgola. (/NODEFAULTLIB: [nome, nome,...])

### <a name="module-definition-file"></a>File di definizione del modulo

L'opzione [/def](def-specify-module-definition-file.md) passa un file di definizione del modulo (. def) al linker. È possibile specificare un solo file con estensione def per il collegamento.

### <a name="add-module-to-assembly"></a>Aggiungi modulo all'assembly

L'opzione [/ASSEMBLYMODULE](assemblymodule-add-a-msil-module-to-the-assembly.md) consente di aggiungere un riferimento al modulo a un assembly. Le informazioni sul tipo nel modulo non saranno disponibili per il programma assembly che ha aggiunto il riferimento al modulo. Tuttavia, le informazioni sul tipo nel modulo saranno disponibili per tutti i programmi che fanno riferimento all'assembly.

### <a name="embed-managed-resource-file"></a>Incorpora file di risorse gestite

[/ASSEMBLYRESOURCE](assemblyresource-embed-a-managed-resource.md) incorpora un file di risorse nel file di output.

### <a name="force-symbol-references"></a>Imponi riferimenti al simbolo

L'opzione [/include](include-force-symbol-references.md) indica al linker di aggiungere un simbolo specificato alla tabella dei simboli.

### <a name="delay-loaded-dlls"></a>Dll a caricamento ritardato

L'opzione [/DELAYLOAD](delayload-delay-load-import.md) causa il caricamento ritardato delle dll. Il nome della DLL specifica una DLL per ritardare il caricamento.

### <a name="assembly-link-resource"></a>Risorsa collegamento assembly

L'opzione [/ASSEMBLYLINKRESOURCE](assemblylinkresource-link-to-dotnet-framework-resource.md) crea un collegamento a una risorsa .NET Framework nel file di output. il file di risorse non viene inserito nel file di output.

## <a name="manifest-file-property-page"></a>Pagina delle proprietà del file manifesto

### <a name="generate-manifest"></a>Genera manifesto

[/Manifest](manifest-create-side-by-side-assembly-manifest.md) specifica che il linker deve creare un file manifesto side-by-side.

### <a name="manifest-file"></a>File manifesto

[/ManifestFile](manifestfile-name-manifest-file.md) consente di modificare il nome predefinito del file manifesto. Il nome predefinito del file manifesto è il nome del file con estensione manifest aggiunto.

### <a name="additional-manifest-dependencies"></a>Dipendenze aggiuntive del manifesto

[/MANIFESTDEPENDENCY](manifestdependency-specify-manifest-dependencies.md) consente di specificare gli attributi che verranno inseriti nella sezione delle dipendenze del file manifesto.

### <a name="allow-isolation"></a>Consenti isolamento

Specifica il comportamento per la ricerca del manifesto. ([/ALLOWISOLATION](allowisolation-manifest-lookup.md): No)

### <a name="enable-user-account-control-uac"></a>Abilita controllo dell'account utente (UAC)

Specifica se il controllo dell'account utente è abilitato.  ([/MANIFESTUAC](manifestuac-embeds-uac-information-in-manifest.md),/MANIFESTUAC: No)

### <a name="uac-execution-level"></a>Livello di esecuzione controllo dell'account utente

Specifica il livello di esecuzione richiesto per l'applicazione quando viene eseguito con il controllo dell'account utente.  (/MANIFESTUAC: Level = [valore])

**Choices**

- Livello di esecuzione **asInvoker** -UAC: come invoker.
- Livello di esecuzione **highestAvailable** -UAC: massimo disponibile.
- Livello di esecuzione **requireAdministrator** -UAC: richiedere l'amministratore.

### <a name="uac-bypass-ui-protection"></a>Controllo UAC-Ignora protezione interfaccia utente

Specifica se ignorare o meno i livelli di protezione dell'interfaccia utente per altre finestre sul desktop.  Impostare questa proprietà su "Yes" solo per le applicazioni di accessibilità.  ([/MANIFESTUAC](manifestuac-embeds-uac-information-in-manifest.md): uiAccess = [true | false])

## <a name="debugging-property-page"></a>Pagina delle proprietà di debug

### <a name="generate-debug-info"></a>Genera informazioni di debug

Questa opzione consente la creazione di informazioni di debug per il file exe o la DLL.

**Choices**

- **No** -non produce informazioni di debug.
- **Genera informazioni di debug** : consente di creare un database di programma completo (PDB) ideale per la distribuzione nel server dei simboli Microsoft.
- **Genera informazioni di debug ottimizzate per collegamenti più rapidi** : produce un database di programma (PDB) ideale per il ciclo di modifica-collegamento-debug.
- **Genera informazioni di debug ottimizzate per la condivisione e la pubblicazione** : produce un database di programma (PDB) ideale per il ciclo di modifica-collegamento-debug.

### <a name="generate-program-database-file"></a>Genera file di database di programma

Per impostazione predefinita, quando si specifica [/debug](debug-generate-debug-info.md) , il linker crea un database di programma (PDB) che include le informazioni di debug. Il nome di file predefinito per il PDB è costituito dal nome di base del programma e dall'estensione pdb.

### <a name="strip-private-symbols"></a>Rimuovi simboli privati

L'opzione [/PDBSTRIPPED](pdbstripped-strip-private-symbols.md) crea un secondo file di database di programma (PDB) quando si compila l'immagine del programma con qualsiasi opzione del compilatore o del linker che genera un file PDB (/debug,/Z7,/ZD o/Zi).

### <a name="generate-map-file"></a>Genera file di mapping

L'opzione [/Map](map-generate-mapfile.md) indica al linker di creare un file map.

### <a name="map-file-name"></a>Nome file di mapping

Nome specificato dall'utente per file map. Sostituisce il nome predefinito.

### <a name="map-exports"></a>Esportazioni mappa

L'opzione [/MapInfo](mapinfo-include-information-in-mapfile.md) indica al linker di includere le informazioni specificate in un file map, che viene creato se si specifica l'opzione/map. Esporta indica al linker di includere le funzioni esportate.

### <a name="debuggable-assembly"></a>Assembly di cui è stato eseguito il debug

[/ASSEMBLYDEBUG](assemblydebug-add-debuggableattribute.md) crea l'attributo DebuggableAttribute con il rilevamento delle informazioni di debug e Disabilita le ottimizzazioni JIT.

## <a name="system-property-page"></a>Pagina delle proprietà di sistema

### <a name="subsystem"></a>Sottosistema

L'opzione [/Subsystem](subsystem-specify-subsystem.md) indica al sistema operativo come eseguire il file con estensione exe. La scelta del sottosistema influiscono sul simbolo del punto di ingresso (o sulla funzione del punto di ingresso) che il linker sceglierà.

**Choices**

- **Non impostato** : nessun sottosistema impostato.
- **Console** -applicazione in modalità carattere Win32. Alle applicazioni console viene assegnata una console dal sistema operativo. Se è definito Main o wmain, CONSOLE è l'impostazione predefinita.
- **Windows** : l'applicazione non richiede una console, probabilmente perché crea le proprie finestre per l'interazione con l'utente. Se è definito WinMain o wWinMain, il valore predefinito è WINDOWS.
- Driver di dispositivo **nativi** per Windows NT. Se viene specificato/DRIVER: WDM, il valore predefinito è NATIVE.
- **Applicazione EFI** -applicazione EFI.
- **Driver del servizio di avvio EFI** -driver del servizio di avvio EFI.
- ROM EFI **ROM** EFI.
- **Runtime EFI** -Runtime EFI.
- **POSIX** -applicazione eseguita con il sottosistema POSIX in Windows NT.

### <a name="minimum-required-version"></a>Versione minima richiesta

Specificare la versione minima richiesta del sottosistema. Gli argomenti sono numeri decimali compresi tra 0 e 65.535.

### <a name="heap-reserve-size"></a>Dimensioni riserva heap

Specifica la dimensione totale di allocazione dell'heap nella memoria virtuale. Il valore predefinito è 1 MB.    ([/Heap](heap-set-heap-size.md): riserva)

### <a name="heap-commit-size"></a>Dimensioni commit heap

Specifica la dimensione totale di allocazione dell'heap nella memoria fisica. Il valore predefinito è 4 KB.    ([/Heap](heap-set-heap-size.md): riserva, commit)

### <a name="stack-reserve-size"></a>Dimensioni riserva dello stack

Specifica la dimensione totale di allocazione dello stack nella memoria virtuale. Il valore predefinito è 1 MB.     ([/Stack](stack-stack-allocations.md): riserva)

### <a name="stack-commit-size"></a>Dimensioni commit dello stack

Specifica la dimensione totale di allocazione dello stack nella memoria fisica. Il valore predefinito è 4 KB.     ([/Stack](stack-stack-allocations.md): riserva, commit)

### <a name="enable-large-addresses"></a>Abilita indirizzi di grandi dimensioni

L'opzione [/LARGEADDRESSAWARE](largeaddressaware-handle-large-addresses.md) indica al linker che l'applicazione è in grado di gestire indirizzi superiori a 2 gigabyte. Per impostazione predefinita,/LARGEADDRESSAWARE: NO è abilitato se/LARGEADDRESSAWARE non è specificato diversamente nella riga del linker.

### <a name="terminal-server"></a>Terminal Server

L'opzione [/TSAWARE](tsaware-create-terminal-server-aware-application.md) imposta un flag nel campo IMAGE_OPTIONAL_HEADER DllCharacteristics nell'intestazione facoltativa dell'immagine del programma. Quando questo flag viene impostato, Terminal Server non apporta determinate modifiche all'applicazione.

### <a name="swap-run-from-cd"></a>Eseguire lo swap da CD

L'opzione [/SWAPRUN](swaprun-load-linker-output-to-swap-file.md) indica al sistema operativo di copiare prima di tutto l'output del linker in un file di scambio e quindi di eseguire l'immagine da questa posizione. Questa opzione è una funzionalità di Windows NT 4,0 (e versioni successive). Quando si specifica **CD** , il sistema operativo copia l'immagine su un disco rimovibile in un file di paging e quindi lo carica.

### <a name="swap-run-from-network"></a>Esegui swapping dalla rete

L'opzione [/SWAPRUN](swaprun-load-linker-output-to-swap-file.md) indica al sistema operativo di copiare prima di tutto l'output del linker in un file di scambio e quindi di eseguire l'immagine da questa posizione. Questa opzione è una funzionalità di Windows NT 4,0 (e versioni successive). Se si specifica **net** , il sistema operativo copia prima di tutto l'immagine binaria dalla rete in un file di scambio e la carica da questa posizione. Questa opzione è utile per l'esecuzione di applicazioni in rete.

### <a name="driver"></a>Driver

Usare l'opzione del linker [/driver](driver-windows-nt-kernel-mode-driver.md) per compilare un driver in modalità kernel di Windows NT.

**Choices**

- **Not set** -impostazione predefinita del driver.
- **Driver-driver**
- **Up only** -/driver: consente solo al linker di aggiungere il bit IMAGE_FILE_UP_SYSTEM_ONLY alle caratteristiche nell'intestazione output per specificare che si tratta di un driver uniprocessore (up). Il sistema operativo rifiuterà di caricare un driver in un sistema multiprocessore (MP).
- **WDM** -/driver: WDM fa in modo che il linker imposti il bit IMAGE_DLLCHARACTERISTICS_WDM_DRIVER nel campo DLLCHARACTERISTICS dell'intestazione facoltativa.

## <a name="optimization-property-page"></a>Pagina delle proprietà ottimizzazione

### <a name="references"></a>Riferimenti

[/Opt](opt-optimizations.md): Ref Elimina le funzioni e/o i dati a cui non viene mai fatto riferimento mentre/opt: NOREF mantiene le funzioni e/o i dati a cui non viene mai fatto riferimento.

### <a name="enable-comdat-folding"></a>Abilita riduzione COMDAT

Usare [/opt](opt-optimizations.md): ICF\[= iterazioni] per eseguire una riduzione COMDAT identica.

### <a name="function-order"></a>Ordine funzioni

L'opzione [/Order](order-put-functions-in-order.md)indica il collegamento per ottimizzare il programma inserendo determinati COMDAT nell'immagine in un ordine predeterminato. Il collegamento inserisce le funzioni nell'ordine specificato all'interno di ogni sezione nell'immagine.

### <a name="profile-guided-database"></a>Database PGO

Specificare il file. PGD per le ottimizzazioni PGO. ([/PGD](pgd-specify-database-for-profile-guided-optimizations.md))

### <a name="link-time-code-generation"></a>Generazione codice in fase di collegamento

Specifica la generazione del codice in fase di collegamento. ([/LTCG](ltcg-link-time-code-generation.md))

**Choices**

- Impostazione **predefinita** : impostazione predefinita di LTCG.
- **Usare la generazione rapida del codice in fase di collegamento** : usare la generazione di codice in fase di collegamento con [/FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md).
- **USA generazione codice in fase di collegamento** : USA [generazione codice in fase di collegamento](ltcg-link-time-code-generation.md).
- **Ottimizzazione PGO-Instrument** -usare l' [ottimizzazione PGO](../profile-guided-optimizations.md) con:P ginstrument.
- **Ottimizzazione PGO-ottimizzazione** -specifica che il linker deve usare i dati di profilo creati dopo l'esecuzione del file binario instrumentato per creare un'immagine ottimizzata.
- **Ottimizzazione PGO-Aggiorna** : consente e tiene traccia dell'elenco dei file di input da aggiungere o modificare rispetto a quanto specificato nella fase:P ginstrument.

## <a name="embedded-idl-property-page"></a>Pagina delle proprietà IDL incorporato

### <a name="midl-commands"></a>Comandi MIDL

Specificare le opzioni della riga di comando MIDL. ([/MIDL](midl-specify-midl-command-line-options.md):@responsefile)

### <a name="ignore-embedded-idl"></a>Ignora IDL incorporato

L'opzione [/IGNOREIDL](ignoreidl-don-t-process-attributes-into-midl.md) specifica che gli eventuali attributi IDL presenti nel codice sorgente non devono essere elaborati in un file con estensione IDL.

### <a name="merged-idl-base-file-name"></a>Nome file di base IDL Unito

L'opzione [/IDLOUT](idlout-name-midl-output-files.md) specifica il nome e l'estensione del file IDL.

### <a name="type-library"></a>Libreria di tipi

L'opzione [/TLBOUT](tlbout-name-dot-tlb-file.md) specifica il nome e l'estensione del file tlb.

### <a name="typelib-resource-id"></a>ID risorsa TypeLib

Consente di specificare l'ID di risorsa della libreria dei tipi generata dal linker. ([/TLBID](tlbid-specify-resource-id-for-typelib.md): ID)

## <a name="windows-metadata-property-page"></a>Pagina delle proprietà metadati di Windows

### <a name="generate-windows-metadata"></a>Genera metadati Windows

Abilita o Disabilita la generazione di metadati di Windows.

**Choices**

- **Sì** : Abilita la generazione di file di metadati di Windows.
- **No** -Disabilita la generazione di file di metadati di Windows.

### <a name="windows-metadata-file"></a>File di metadati di Windows

Opzione [/WINMDFILE](winmdfile-specify-winmd-file.md) .

### <a name="windows-metadata-key-file"></a>File di chiave di metadati Windows

Specificare la chiave o la coppia di chiavi per firmare i metadati di Windows. ([/WINMDKEYFILE](winmdkeyfile-specify-winmd-key-file.md): nomefile)

### <a name="windows-metadata-key-container"></a>Contenitore di chiavi di metadati Windows

Specificare un contenitore di chiavi per firmare i metadati di Windows. ([/WINMDKEYCONTAINER](winmdkeycontainer-specify-key-container.md): nome)

### <a name="windows-metadata-delay-sign"></a>Firma ritardata metadati Windows

Firmare parzialmente i metadati di Windows. Usare [/WINMDDELAYSIGN](winmddelaysign-partially-sign-a-winmd.md) se si vuole solo inserire la chiave pubblica nei metadati di Windows. Il valore predefinito è/WINMDDELAYSIGN: NO.

## <a name="advanced-property-page"></a>Pagina delle proprietà avanzate

### <a name="entry-point"></a>Punto di ingresso

L'opzione [/entry](entry-entry-point-symbol.md) specifica una funzione del punto di ingresso come indirizzo iniziale per un file exe o una dll.

### <a name="no-entry-point"></a>Nessun punto di ingresso

L'opzione [/NOENTRY](noentry-no-entry-point.md)è obbligatoria per la creazione di una DLL di sole risorse. Usare questa opzione per impedire al collegamento di collegare un riferimento a `_main` nella DLL.

### <a name="set-checksum"></a>Imposta checksum

L'opzione [/Release](release-set-the-checksum.md) imposta il checksum nell'intestazione di un file exe.

### <a name="base-address"></a>Indirizzo di base

Imposta un indirizzo di base per il programma. ([/Base](base-base-address.md): {Address\[, Size] | @filename, Key})

### <a name="randomized-base-address"></a>Indirizzo di base casuale

Indirizzo di base casuale. ([/DYNAMICBASE](dynamicbase-use-address-space-layout-randomization.md)\[: No])

### <a name="fixed-base-address"></a>Indirizzo di base fisso

Crea un programma caricabile solo nel relativo indirizzo di base preferito. ([/FIXED](fixed-fixed-base-address.md)\[: No])

### <a name="data-execution-prevention-dep"></a>Prevenzione esecuzione programmi (DEP)

Contrassegna un eseguibile come testato per essere compatibile con la funzionalità di prevenzione dell'esecuzione dei dati di Windows. ([/NXCOMPAT](nxcompat-compatible-with-data-execution-prevention.md)\[: No])

### <a name="turn-off-assembly-generation"></a>Disattiva generazione assembly

L'opzione [/NOASSEMBLY](noassembly-create-a-msil-module.md) indica al linker di creare un'immagine per il file di output corrente senza un assembly .NET Framework.

### <a name="unload-delay-loaded-dll"></a>Scarica DLL a caricamento ritardato

Il qualificatore **unload** indica alla funzione di supporto per il caricamento ritardato di supportare lo scaricamento esplicito della dll. ([/delay](delay-delay-load-import-settings.md): Unload)

### <a name="nobind-delay-loaded-dll"></a>DLL a caricamento ritardato NOBIND

Il qualificatore **NOBIND** indica al linker di non includere una IAT associabile nell'immagine finale. L'impostazione predefinita prevede la creazione della tabella di indirizzi di importazione associabile per DLL di caricamento ritardato. ([/delay](delay-delay-load-import-settings.md): nobind)

### <a name="import-library"></a>Libreria di importazione

Esegue l'override del nome predefinito della libreria di importazione. ([/IMPLIB](implib-name-import-library.md): nomefile)

### <a name="merge-sections"></a>Unisci sezioni

L'opzione [/merge](merge-combine-sections.md) combina la prima sezione (da) con la seconda sezione (a), assegnando un nome alla sezione risultante a. Ad esempio,/merge:. rdata =. Text.

### <a name="target-machine"></a>Computer di destinazione

L'opzione [/Machine](machine-specify-target-platform.md) specifica la piattaforma di destinazione per il programma.

**Choices**

- **Non impostato**
- **MachineARM**
- **MachineARM64**
- **MachineEBC**
- **MachineIA64**
- **MachineMIPS**
- **MachineMIPS16**
- **MachineMIPSFPU**
- **MachineMIPSFPU16**
- **MachineSH4**
- **MachineTHUMB**
- **MachineX64**
- **MachineX86**

### <a name="profile"></a>Profilo

Produce un file di output che può essere usato con il profiler di Strumenti per le prestazioni. Richiede l'impostazione di GenerateDebugInformation (/[/debug](debug-generate-debug-info.md)). ([/Profile](profile-performance-tools-profiler.md))

### <a name="clr-thread-attribute"></a>Attributo thread CLR

Specificare in modo esplicito l'attributo threading per il punto di ingresso del programma CLR.

**Choices**

- **Attributo threading MTA** : applica l'attributo MTAThreadAttribute al punto di ingresso del programma.
- **Attributo threading sta** : applica l'attributo STAThreadAttribute al punto di ingresso del programma.
- **Attributo threading predefinito** : uguale a non specificare [/CLRTHREADATTRIBUTE](clrthreadattribute-set-clr-thread-attribute.md). Consente a Common Language Runtime (CLR) di impostare l'attributo di threading predefinito.

### <a name="clr-image-type"></a>Tipo di immagine CLR

Imposta il tipo (IJW, pure o safe) di un'immagine CLR.

**Choices**

- **Imponi immagine IJW**
- **Imponi immagine IL pure**
- **Imponi immagine IL Safe**
- **Tipo di immagine predefinito**

### <a name="key-file"></a>File codice

Specificare la chiave o la coppia di chiavi per firmare un assembly. ([/Keyfile](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md): nomefile)

### <a name="key-container"></a>Contenitore di chiavi

Specificare un contenitore di chiavi per firmare un assembly. ([/Keycontainer](keycontainer-specify-a-key-container-to-sign-an-assembly.md): nome)

### <a name="delay-sign"></a>Firma ritardata

Firma parzialmente un assembly. Usare [/delaysign](delaysign-partially-sign-an-assembly.md) se si vuole solo inserire la chiave pubblica nell'assembly. Il valore predefinito è/DELAYSIGN: NO.

### <a name="clr-unmanaged-code-check"></a>Controllo codice non gestito CLR

[/CLRUNMANAGEDCODECHECK](clrunmanagedcodecheck-add-suppressunmanagedcodesecurityattribute.md) specifica se il linker applicherà SuppressUnmanagedCodeSecurityAttribute alle chiamate PInvoke generate dal linker dal codice gestito in DLL native.

### <a name="error-reporting"></a>Segnalazione errori

Consente di inviare le informazioni sugli errori interni del compilatore direttamente al team di Visual C++.

**Choices**

- **PromptImmediately** : richiede immediatamente.
- **Coda per la coda di accesso successiva** per l'accesso successivo.
- **Invia segnalazione errori** -Invia la segnalazione errori.
- **Nessuna segnalazione errori** . nessuna segnalazione errori.

### <a name="sectionalignment"></a>Allineamento sezione

L'opzione [/align](align-section-alignment.md) specifica l'allineamento di ogni sezione nello spazio degli indirizzi lineare del programma. Il numero dell'argomento è in byte e deve essere una potenza di due.

### <a name="preserve-last-error-code-for-pinvoke-calls"></a>Conserva ultimo codice errore per le chiamate PInvoke

[/CLRSUPPORTLASTERROR](clrsupportlasterror-preserve-last-error-code-for-pinvoke-calls.md), che è attiva per impostazione predefinita, conserva l'ultimo codice di errore delle funzioni chiamate tramite il meccanismo P/Invoke, che consente di chiamare funzioni native in dll, dal codice compilato con/CLR.

**Choices**

- **Abilitato** : Abilita CLRSUPPORTLASTERROR.
- **Disabled** : Disabilita CLRSUPPORTLASTERROR.
- **Solo** per le DLL di sistema: abilitare CLRSUPPORTLASTERROR solo per le DLL di sistema.

### <a name="image-has-safe-exception-handlers"></a>Immagine con gestori eccezioni sicuri

Quando si specifica [/SAFESEH](safeseh-image-has-safe-exception-handlers.md) , il linker produrrà un'immagine solo se può produrre anche una tabella dei gestori delle eccezioni sicure dell'immagine. Questa tabella specifica per il sistema operativo quali gestori di eccezioni sono validi per l'immagine.
