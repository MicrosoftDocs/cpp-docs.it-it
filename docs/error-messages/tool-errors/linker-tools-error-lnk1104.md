---
title: Errore degli strumenti del linker LNK1104
description: Descrive l'errore del linker Microsoft C e C++ (MSVC), le sue cause e le possibili soluzioni.
ms.date: 12/13/2019
f1_keywords:
- LNK1104
helpviewer_keywords:
- LNK1104
ms.assetid: 9ca6f929-0efc-4055-8354-3cf5b4e636dc
ms.openlocfilehash: 8878db1b0829703b22b2f7863eb7955d17ad3096
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75301782"
---
# <a name="linker-tools-error-lnk1104"></a>Errore degli strumenti del linker LNK1104

> non è possibile aprire il file '*filename*'

Questo errore viene segnalato quando il linker non è in grado di aprire un file per la lettura o la scrittura. Di seguito sono riportate le due cause più comuni del problema:

- il programma è già in esecuzione o è caricato nel debugger e

- i percorsi di libreria non sono corretti o non sono racchiusi tra virgolette doppie.

Questo errore può essere causato da molte altre cause. Per restringere le attività, verificare prima di tutto il tipo di file *filename* . Quindi, usare le sezioni seguenti per identificare e correggere il problema specifico.

## <a name="cant-open-your-app-or-its-pdb-file"></a>Non è possibile aprire l'app o il relativo file con estensione PDB

### <a name="your-app-is-running-or-its-loaded-in-the-debugger"></a>L'app è in esecuzione o è stata caricata nel debugger

Quando *filename* è il nome dell'eseguibile o un file con estensione pdb associato, verificare se l'applicazione è già in esecuzione. Controllare quindi se è caricato in un debugger. Per risolvere questo problema, arrestare il programma e scaricarlo dal debugger prima di ricompilarlo. Se l'app è aperta in un altro programma, ad esempio un editor di risorse, chiuderla. Se il programma non risponde, potrebbe essere necessario utilizzare Gestione attività per terminare il processo. Potrebbe anche essere necessario chiudere e riavviare Visual Studio.

### <a name="your-app-is-locked-by-an-antivirus-scan"></a>L'app è bloccata da un'analisi antivirus

I programmi antivirus spesso bloccano temporaneamente l'accesso ai file appena creati, in particolare i file eseguibili exe e dll. Per risolvere il problema, provare ad escludere le directory di compilazione del progetto dallo scanner antivirus.

## <a name="cant-open-a-microsoft-library-file"></a>Non è possibile aprire un file di libreria Microsoft

### <a name="windows-libraries-such-as-kernel32lib"></a>Librerie di Windows, ad esempio Kernel32. lib

Se il file che non è possibile aprire è uno dei file di libreria standard forniti da Microsoft, ad esempio *Kernel32. lib*, è possibile che si verifichi un errore di configurazione del progetto o un errore di installazione. Verificare che il Windows SDK sia stato installato. Se il progetto richiede altre librerie Microsoft, ad esempio MFC, assicurarsi che i componenti MFC siano stati installati anche dal programma di installazione di Visual Studio. È possibile eseguire di nuovo il programma di installazione per aggiungere componenti facoltativi in qualsiasi momento. Per altre informazioni, vedere [modificare Visual Studio](/visualstudio/install/modify-visual-studio). Usare la scheda **singoli componenti** nel programma di installazione per scegliere librerie e SDK specifici.

### <a name="versioned-vcruntime-libraries"></a>Librerie vcruntime con versione

Se il messaggio di errore include una libreria Microsoft con versione, ad esempio *msvcr120. lib*, il set di strumenti della piattaforma per tale versione del compilatore potrebbe non essere installato. Per risolvere questo problema, sono disponibili due opzioni: aggiornare il progetto per usare il set di strumenti della piattaforma corrente oppure installare il set di strumenti precedente e compilare il progetto senza modifiche. Per altre informazioni, vedere [aggiornamento di progetti da versioni precedenti di C++ Visual](../../porting/upgrading-projects-from-earlier-versions-of-visual-cpp.md) [studio e uso del multitargeting nativo in Visual Studio per compilare progetti precedenti](../../porting/use-native-multi-targeting.md).

### <a name="retail-debug-or-platform-specific-libraries"></a>Librerie finali, di debug o specifiche della piattaforma

L'errore può verificarsi quando si compila per la prima volta per una nuova piattaforma di destinazione o una configurazione, ad esempio Retail o ARM64. Nell'IDE verificare che siano installati il **set di strumenti della piattaforma** e la **versione Windows SDK** specificata nella [pagina delle proprietà generale](../../build/reference/general-property-page-project.md) . Verificare inoltre che le librerie necessarie siano disponibili nelle **directory della libreria** specificate nella [pagina delle proprietà directory di VC + +](../../build/reference/vcpp-directories-property-page.md). Controllare le proprietà di ogni configurazione, ad esempio debug, retail, x86 o ARM64. Se una compilazione funziona ma non un'altra, confrontare le impostazioni per entrambe. Installare gli strumenti e le librerie necessari mancanti.

### <a name="the-vccorliblib-library"></a>Libreria vccorlib. lib

Non sono disponibili librerie con attenuazione Spectre per le app o i componenti di Windows universale (UWP). Se il messaggio di errore include *vccorlib. lib*, è possibile che sia stato abilitato [/Qspectre](../../build/reference/qspectre.md) in un progetto UWP. Disabilitare l'opzione del compilatore **/Qspectre** per risolvere il problema. In Visual Studio modificare la proprietà di **mitigazione Spectre** . Si trova nella pagina **generazione codice** **CC++ /**  > della finestra di dialogo **pagine delle proprietà** del progetto.

### <a name="libraries-in-projects-from-online-or-other-sources"></a>Librerie nei progetti da origini online o da altre origini

Se si compila un progetto copiato da un altro computer, i percorsi di installazione della libreria potrebbero essere diversi. Per le compilazioni da riga di comando, verificare che la variabile di ambiente LIB e i percorsi di libreria siano impostati correttamente per la compilazione. In Visual Studio è possibile visualizzare e modificare i percorsi di libreria correnti impostati nelle pagine delle proprietà del progetto. Nella pagina **directory di VC + +** scegliere il controllo a discesa per la proprietà **Directory libreria** , quindi scegliere **modifica**. La sezione **valore valutato** della finestra di dialogo **Directory libreria** elenca i percorsi correnti cercati per i file di libreria. Aggiornare questi percorsi in modo che puntino alle librerie locali.

### <a name="updated-windows-sdk-libraries"></a>Librerie Windows SDK aggiornate

Questo errore può verificarsi quando il percorso di Visual Studio per il Windows SDK non è aggiornato. Questo problema può verificarsi se si installa un Windows SDK più recente indipendentemente dal programma di installazione di Visual Studio. Per correggerlo nell'IDE, aggiornare i percorsi specificati nella pagina delle [Proprietà directory di VC + +](../../build/reference/vcpp-directories-property-page.md). Impostare la versione nel percorso in modo che corrisponda al nuovo SDK. Se si usa il Prompt dei comandi per gli sviluppatori, aggiornare il file batch che Inizializza le variabili di ambiente con i nuovi percorsi SDK. Questo problema può essere evitato usando il programma di installazione di Visual Studio per installare gli SDK aggiornati.

## <a name="cant-open-a-third-party-library-file"></a>Non è possibile aprire un file di libreria di terze parti

Questo problema è dovuto a diverse cause comuni:

- Il percorso del file di libreria potrebbe non essere corretto o non racchiuso tra virgolette doppie. In alternativa, è possibile che non sia stato specificato al linker.

- È possibile che sia stata installata una versione a 32 bit della libreria, ma che si stia compilando per 64 bit o viceversa.

- La libreria potrebbe avere dipendenze da altre librerie che non sono installate.

Per correggere un problema di percorso per le compilazioni da riga di comando, verificare che sia impostata la variabile di ambiente LIB. Assicurarsi che includa i percorsi per tutte le librerie usate e per ogni configurazione compilata. Nell'IDE i percorsi di libreria vengono impostati dalle directory di **VC + +**  > **directory della libreria** . Verificare che tutte le directory che contengono le librerie necessarie siano elencate di seguito per ogni configurazione compilata.

Potrebbe essere necessario specificare una directory di libreria che esegue l'override di una directory della libreria standard. Nella riga di comando usare l'opzione [/LIBPATH](../../build/reference/libpath-additional-libpath.md) . Nell'IDE, utilizzare la proprietà **Directory librerie aggiuntive** nella pagina proprietà di **Configurazione > linker >** pagina delle proprietà generale per il progetto.

Assicurarsi di installare ogni versione della libreria necessaria per le configurazioni compilate. Si consiglia di usare l'utilità di gestione pacchetti [vcpkg](../../vcpkg.md) per automatizzare l'installazione e l'installazione per molte librerie comuni. Quando possibile, è preferibile creare copie personalizzate di librerie di terze parti. Quindi si è sicuri di avere tutte le dipendenze locali delle librerie, compilate per le stesse configurazioni del progetto.

## <a name="cant-open-a-file-built-by-your-project"></a>Non è possibile aprire un file compilato dal progetto

Questo errore può essere visualizzato se il *nome file* non esiste ancora quando il linker tenta di accedervi. Questo problema può verificarsi quando un progetto dipende da un altro nella soluzione, ma i progetti vengono compilati nell'ordine errato. Per risolvere questo problema, assicurarsi che i riferimenti al progetto siano impostati nel progetto che usa il file. Il file mancante viene quindi compilato prima che sia necessario. Per altre informazioni, vedere [aggiunta di riferimenti nei progetti C++ di Visual Studio](../../build/adding-references-in-visual-cpp-projects.md) e [gestione dei riferimenti in un progetto](/visualstudio/ide/managing-references-in-a-project).

## <a name="cannot-open-file-cprogramobj"></a>Non è possibile aprire il file ' C:\\Program. obj '

Se nel messaggio di errore viene visualizzato il nome file *C:\\Program. obj* , eseguire il wrapping dei percorsi di libreria tra virgolette doppie. Questo errore si verifica quando un percorso senza wrapper che inizia con *C:\\i file di programma* vengono passati al linker. I percorsi di cui non è stato eseguito il wrapper possono anche causare errori simili. In genere, visualizzano un file con estensione obj imprevisto nella radice dell'unità.

Per risolvere questo problema per le compilazioni da riga di comando, controllare i parametri dell'opzione [/LIBPATH](../../build/reference/libpath-additional-libpath.md) . Controllare inoltre i percorsi specificati nella variabile di ambiente LIB e i percorsi specificati nella riga di comando. Assicurarsi di usare le virgolette doppie intorno a tutti i percorsi che includono spazi.

Per risolvere questo problema nell'IDE, aggiungere le virgolette doppie necessarie alle proprietà seguenti per il progetto:

- La proprietà **Directory libreria** nella pagina delle proprietà di [configurazione > directory di VC + +](../../build/reference/vcpp-directories-property-page.md) ,

- La proprietà **Directory librerie aggiuntive** nella pagina delle proprietà di **Configurazione > linker > generale** ,

- La proprietà **dipendenze aggiuntive** nelle proprietà di **Configurazione > linker >** pagina delle proprietà input.

## <a name="other-common-issues"></a>Altri problemi comuni

### <a name="path-or-filename-issues"></a>Problemi relativi a percorso o nome file

Questo errore può verificarsi quando il nome file o il percorso della libreria specificati per il linker non è corretto. Oppure quando il percorso presenta una specifica di unità non valida. Esaminare la riga di comando o in qualsiasi [#pragma commento (lib, "LIBRARY_NAME")](../../preprocessor/comment-c-cpp.md) per i problemi. Controllare l'ortografia e l'estensione del file e verificare che il file esista nel percorso specificato.

### <a name="parallel-build-synchronization"></a>Sincronizzazione di compilazione parallela

Se si usa un'opzione di compilazione parallela, Visual Studio potrebbe aver bloccato il file in un altro thread. Per risolvere questo problema, verificare che lo stesso oggetto di codice o la stessa libreria non sia compilata in più progetti. Usare le dipendenze di compilazione o i riferimenti al progetto per prelevare i binari compilati nel progetto.

### <a name="additional-dependencies-specified-in-the-ide"></a>Dipendenze aggiuntive specificate nell'IDE

Quando si specificano direttamente le singole librerie nella proprietà **dipendenze aggiuntive** , utilizzare spazi per separare i nomi delle librerie. Non usare virgole o punti e virgola. Se si utilizza la voce di menu **modifica** per aprire la finestra di dialogo **dipendenze aggiuntive** , utilizzare le nuove righe per separare i nomi, non le virgole, i punti e virgola o gli spazi. Utilizzare anche le nuove righe quando si specificano i percorsi di libreria nelle finestre di dialogo **Directory libreria** e **Directory librerie aggiuntive** .

### <a name="paths-that-are-too-long"></a>Percorsi troppo lunghi

Questo errore può essere visualizzato quando il percorso per *filename* si espande a più di 260 caratteri. Se necessario, ridisporre la struttura di directory o abbreviare i nomi dei file e delle cartelle per abbreviare i percorsi.

### <a name="files-that-are-too-large"></a>File troppo grandi

Questo errore può verificarsi perché il file è troppo grande. Le librerie o i file oggetto con dimensioni maggiori di un gigabyte possono causare problemi per il linker a 32 bit. Per risolvere questo problema, è possibile usare il set di strumenti a 64 bit. Per altre informazioni su come usare il set di strumenti a 64 bit nella riga di comando, vedere [procedura: abilitare un set di strumenti visivi C++ a 64 bit nella riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md). Per informazioni su come usare il set di strumenti a 64 bit nell'IDE, vedere [uso di MSBuild con il compilatore e gli strumenti a 64 bit](../../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md#using-msbuild-to-build-your-project). Vedere anche questo post di Stack Overflow: [come fare in modo che Visual Studio usi la cassetta di stato amd64 nativa](https://stackoverflow.com/questions/19820718/how-to-make-visual-studio-use-the-native-amd64-toolchain/23793055).

### <a name="incorrect-file-permissions"></a>Autorizzazioni file non corrette

Questo errore può verificarsi se si dispone di autorizzazioni file insufficienti per accedere al *nome file*. Questo problema può verificarsi se si usa un account utente comune per accedere ai file di libreria nelle directory di sistema protette. In alternativa, se si usano i file copiati da altri utenti che dispongono ancora delle autorizzazioni originali impostate. Per risolvere il problema, spostare il file in una directory di progetto scrivibile. Se il file spostato dispone di autorizzazioni inaccessibili, eseguire il comando takeown. exe in una finestra di comando amministratore per assumere la proprietà del file.

### <a name="insufficient-disk-space"></a>Spazio su disco insufficiente

Questo errore può verificarsi quando lo spazio su disco non è sufficiente. Il linker usa i file temporanei in vari casi. Anche se lo spazio su disco è sufficiente, un collegamento di grandi dimensioni può esaurire o frammentare lo spazio su disco disponibile. Provare a usare l'opzione [/opt (ottimizzazioni)](../../build/reference/opt-optimizations.md) . l'eliminazione COMDAT transitiva legge tutti i file oggetto più volte.

### <a name="problems-in-the-tmp-environment-variable"></a>Problemi nella variabile di ambiente TMP

Se il *nome del file è* lnk*nnn*, si tratta di un nome file generato dal linker per un file temporaneo. È possibile che la directory specificata nella variabile di ambiente TMP non esista. In alternativa, è possibile specificare più di una directory per la variabile di ambiente TMP. È necessario specificare un solo percorso di directory per la variabile di ambiente TMP.

## <a name="help-my-issue-isnt-listed-here"></a>Assistenza, il problema non è elencato qui.

Quando nessuno dei problemi elencati si applica, è possibile usare gli strumenti di feedback in Visual Studio per assistenza. Nell'IDE passare alla barra dei menu e scegliere? **> inviare commenti e suggerimenti > segnalare un problema**. In alternativa, inviare un suggerimento usando la **guida > inviare commenti e suggerimenti > inviare un suggerimento**. È anche possibile usare il sito Web C++ della [community degli sviluppatori](https://developercommunity.visualstudio.com/spaces/62/index.html)di Visual Studio. Usarlo per cercare le risposte alle domande e richiedere assistenza. Per ulteriori informazioni, vedere [come segnalare un problema con il set di C++ strumenti o la documentazione visuale](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md).

Se è stato individuato un nuovo modo per risolvere il problema che è necessario aggiungere a questo articolo, informare Microsoft. È possibile inviare commenti e suggerimenti usando il pulsante seguente per **Questa pagina**. Usarlo per creare un nuovo problema nel [ C++ repository GitHub della documentazione](https://github.com/MicrosoftDocs/cpp-docs/issues). Grazie
