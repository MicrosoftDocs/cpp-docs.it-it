---
title: Errore degli strumenti del linker LNK1104
ms.date: 09/06/2019
f1_keywords:
- LNK1104
helpviewer_keywords:
- LNK1104
ms.assetid: 9ca6f929-0efc-4055-8354-3cf5b4e636dc
ms.openlocfilehash: f3effd9054954a90f69c5b18d8f099e6d705d9a3
ms.sourcegitcommit: 7babce70714242cf498ca811eec3695fad3abd03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/09/2019
ms.locfileid: "70808846"
---
# <a name="linker-tools-error-lnk1104"></a>Errore degli strumenti del linker LNK1104

> non è possibile aprire il file '*filename*'

Il linker non è riuscito ad aprire il file specificato. La causa più comune di questo problema è che il file è in uso o è bloccato da un altro processo. È anche possibile che il file non esista o non sia disponibile in una delle directory in cui il linker esegue la ricerca. In alternativa, è possibile che non si disponga di autorizzazioni sufficienti per accedere al file. Meno frequentemente, lo spazio su disco potrebbe essere esaurito, il file potrebbe essere troppo grande oppure il percorso del file potrebbe essere troppo lungo.

## <a name="possible-causes-and-solutions"></a>Possibili cause e soluzioni

Questo errore può verificarsi quando il linker tenta di aprire un file per la lettura o la scrittura. Per limitare le possibili cause, verificare prima di tutto il tipo di file. Quindi, usare le sezioni seguenti per identificare e correggere il problema specifico.

### <a name="cant-open-your-app-or-its-pdb-file"></a>Non è possibile aprire l'app o il relativo file con estensione PDB

Se il nome file è l'eseguibile compilato dal progetto o un file con estensione pdb associato, la ragione più comune è che l'applicazione è già in esecuzione quando si tenta di ricompilarla o viene caricata in un debugger. Per risolvere questo problema, arrestare il programma e scaricarlo dal debugger prima di ricompilarlo. Se l'app è aperta in un altro programma, ad esempio un editor di risorse, chiuderla. In casi estremi, potrebbe essere necessario usare Gestione attività per terminare il processo oppure arrestare e riavviare Visual Studio.

I programmi antivirus spesso bloccano temporaneamente l'accesso ai file appena creati, in particolare i file eseguibili exe e dll. Per risolvere il problema, provare ad escludere le directory di compilazione del progetto dallo scanner antivirus.

### <a name="cant-open-a-microsoft-library-file"></a>Non è possibile aprire un file di libreria Microsoft

Se il file che non è possibile aprire è uno dei file di libreria standard forniti da Microsoft, ad esempio Kernel32. lib, è possibile che si verifichi un errore di configurazione del progetto o un errore di installazione. Verificare che il Windows SDK sia stato installato e, se il progetto richiede altre librerie Microsoft, ad esempio MFC, assicurarsi che i componenti MFC siano stati installati anche dal programma di installazione di Visual Studio. È possibile eseguire di nuovo il programma di installazione per aggiungere componenti facoltativi in qualsiasi momento. Per altre informazioni, vedere [modificare Visual Studio](/visualstudio/install/modify-visual-studio). Usare la scheda singoli componenti nel programma di installazione per scegliere librerie e SDK specifici.

Non sono disponibili librerie con attenuazione Spectre per le app o i componenti di Windows universale (UWP). Se il report degli errori menziona il file *vccorlib. lib* , è possibile che sia stato abilitato [/Qspectre](../../build/reference/qspectre.md) in un progetto UWP. Disabilitare l'opzione del compilatore **/Qspectre** per risolvere il problema. In Visual Studio, modificare la proprietà di **mitigazione Spectre**  > , disponibile nella pagina**generazione codice** **CC++/** della finestra di dialogo Pagine delle **Proprietà** del progetto.

Se si compila un progetto creato con una versione precedente di Visual Studio, il set di strumenti della piattaforma e le librerie per tale versione potrebbero non essere installati. Se il messaggio di errore viene visualizzato per un nome di libreria con versione, ad esempio msvcr100. lib, probabilmente si tratta di una delle cause. Per risolvere questo problema, sono disponibili due opzioni: è possibile aggiornare il progetto per usare il set di strumenti della piattaforma corrente installato oppure è possibile installare il set di strumenti precedente e compilare il progetto senza modifiche. Per altre informazioni, vedere [aggiornamento di progetti da versioni precedenti di C++ Visual](../../porting/upgrading-projects-from-earlier-versions-of-visual-cpp.md) [studio e uso del multitargeting nativo in Visual Studio per compilare progetti precedenti](../../porting/use-native-multi-targeting.md).

Se questo errore viene visualizzato quando si compila per una nuova piattaforma o configurazione di destinazione, le librerie per la configurazione del progetto o il set di strumenti della piattaforma potrebbero non essere installati. Verificare che il **set di strumenti della piattaforma** e la **versione del Windows SDK** specificati nella [pagina delle proprietà generale](../../build/reference/general-property-page-project.md) per il progetto siano installati e verificare che le librerie necessarie siano disponibili nelle **directory della libreria** specificate in [pagina delle proprietà directory di VC + +](../../build/reference/vcpp-directories-property-page.md) per le impostazioni di configurazione. Sono disponibili impostazioni separate per le configurazioni di debug e di vendita al dettaglio, nonché le configurazioni a 32 bit e a 64 bit, pertanto se una compilazione funziona ma un'altra causa un errore, verificare che le impostazioni siano corrette e che siano installati gli strumenti e le librerie necessari per ogni configurazione compilata.

Se si usa l'IDE di Visual Studio per compilare un progetto che è stato copiato da un altro computer, i percorsi di installazione per le librerie potrebbero essere diversi. Controllare la proprietà **Directory libreria** nella [pagina delle proprietà directory di VC + +](../../build/reference/vcpp-directories-property-page.md) per il progetto e aggiornarla, se necessario. Per visualizzare e modificare i percorsi di libreria correnti impostati nell'IDE, scegliere il controllo a discesa per la proprietà **Directory libreria** e scegliere **modifica**. La sezione **valore valutato** della finestra di dialogo **Directory libreria** elenca i percorsi correnti cercati per i file di libreria.

Questo errore può verificarsi anche quando il percorso del Windows SDK è obsoleto. Se è stata installata una versione della Windows SDK più recente della versione di Visual Studio in uso, assicurarsi che i percorsi specificati nella [pagina delle proprietà directory di VC + +](../../build/reference/vcpp-directories-property-page.md) siano aggiornati in modo che corrispondano al nuovo SDK. Se si usa il Prompt dei comandi per gli sviluppatori, assicurarsi che il file batch che Inizializza le variabili di ambiente venga aggiornato per i nuovi percorsi SDK. Questo problema può essere evitato usando il programma di installazione di Visual Studio per installare gli SDK aggiornati.

### <a name="cannot-open-a-third-party-library-file"></a>Non è possibile aprire un file di libreria di terze parti

Questo problema è dovuto a diverse cause comuni:

- Il percorso del file di libreria potrebbe non essere corretto oppure è possibile che non sia stato specificato al linker.

- È possibile che sia stata installata una versione a 32 bit della libreria, ma che si stia compilando per 64 bit o viceversa.

- La libreria potrebbe avere dipendenze da altre librerie che non sono installate.

Per correggere un problema di percorso, verificare che la variabile di ambiente LIB sia impostata e che contenga tutte le directory per le librerie utilizzate, per ogni configurazione compilata. Nell'IDE la variabile LIB è impostata dalla proprietà **Directory libreria** nella [pagina delle proprietà directory di VC + +](../../build/reference/vcpp-directories-property-page.md). Verificare che tutte le directory che contengono le librerie necessarie siano elencate di seguito per ogni configurazione compilata.

Se è necessario fornire una directory di libreria che esegue l'override di una directory di libreria standard, è possibile usare l'opzione [/LIBPATH](../../build/reference/libpath-additional-libpath.md) nella riga di comando o nell'IDE, è possibile usare la proprietà **directory della libreria aggiuntiva** nelle **proprietà di configurazione. > Linker >** pagina delle proprietà generale per il progetto.

Assicurarsi di avere installato ogni versione della libreria necessaria per le configurazioni compilate. Si consiglia di usare l'utilità di gestione pacchetti [vcpkg](../../vcpkg.md) per automatizzare l'installazione e l'installazione per molte librerie comuni. Quando possibile, è preferibile creare copie personalizzate di librerie di terze parti, in modo da avere tutte le dipendenze locali necessarie per le librerie e compilate per le stesse configurazioni del progetto.

### <a name="cannot-open-a-file-built-by-your-project"></a>Non è possibile aprire un file compilato dal progetto

Questo errore può essere visualizzato se il file *filename* è compilato dalla soluzione, ma non esiste ancora quando il linker tenta di accedervi. Questo problema può verificarsi quando un progetto dipende da un altro progetto, ma i progetti non vengono compilati nell'ordine corretto. Per risolvere questo problema, assicurarsi che i riferimenti al progetto siano impostati nel progetto che usa il file in modo che il file mancante venga compilato prima che sia necessario. Per altre informazioni, vedere [aggiunta di riferimenti nei progetti C++ di Visual Studio](../../build/adding-references-in-visual-cpp-projects.md) e [gestione dei riferimenti in un progetto](/visualstudio/ide/managing-references-in-a-project).

### <a name="cannot-open-file-cprogramobj"></a>Non è possibile aprire il file\\' C: Program. obj '

Se viene visualizzato questo errore o un errore simile che interessa un file con estensione obj imprevisto nella radice dell'unità, il problema è quasi certamente un percorso di libreria non racchiuso tra virgolette doppie.

Per risolvere questo problema per le compilazioni da riga di comando, controllare i parametri dell'opzione [/LIBPATH](../../build/reference/libpath-additional-libpath.md) , i percorsi specificati nella variabile di ambiente LIB e i percorsi specificati nella riga di comando e assicurarsi di usare le virgolette doppie intorno a tutti i percorsi che includono spazi.

Per risolvere questo problema nell'IDE, controllare la proprietà **directory della libreria** nella pagina delle proprietà di [configurazione > directory di VC + +](../../build/reference/vcpp-directories-property-page.md) , la proprietà **directory della libreria aggiuntiva** in **proprietà di configurazione > linker >** Pagina delle proprietà generale e la proprietà **dipendenze aggiuntive** nelle proprietà di **configurazione > linker >** pagina delle proprietà di input per il progetto. Se necessario, verificare che tutti i percorsi di directory contenenti le librerie necessarie siano racchiusi tra virgolette doppie.

### <a name="other-common-issues"></a>Altri problemi comuni

Questo errore può verificarsi quando il nome file o il percorso della libreria specificato nel linker nella riga di comando o in una direttiva [comment #pragma (lib, "LIBRARY_NAME")](../../preprocessor/comment-c-cpp.md) non è corretto oppure il percorso contiene una specifica di unità non valida. Controllare l'ortografia e l'estensione del file e verificare che il file esista nel percorso specificato.

È possibile che il file sia aperto in un altro programma e che il linker non sia in grado di scrivervi. I programmi antivirus spesso bloccano temporaneamente l'accesso ai file appena creati. Per risolvere il problema, provare ad escludere le directory di compilazione del progetto dallo scanner antivirus.

Se si usa un'opzione di compilazione parallela, è possibile che Visual Studio abbia bloccato il file in un altro thread. Per risolvere questo problema, verificare di non compilare lo stesso oggetto di codice o la stessa libreria in più progetti e di usare le dipendenze di compilazione o i riferimenti al progetto per prelevare i binari compilati nel progetto.

Quando si specificano direttamente le singole librerie nella proprietà **dipendenze aggiuntive** , utilizzare spazi per separare i nomi delle librerie, non le virgole o i punti e virgola. Se si utilizza la voce di menu **modifica** per aprire la finestra di dialogo **dipendenze aggiuntive** , utilizzare le nuove righe per separare i nomi, non le virgole, i punti e virgola o gli spazi. Utilizzare anche le nuove righe quando si specificano i percorsi di libreria nelle finestre di dialogo **Directory libreria** e **Directory librerie aggiuntive** .

Questo errore può essere visualizzato quando il percorso per *filename* si espande a più di 260 caratteri. Modificare i nomi o ridisporre la struttura di directory, se necessario, per abbreviare i percorsi dei file necessari.

Questo errore può verificarsi perché il file è troppo grande. Le librerie o i file oggetto con dimensioni maggiori di un gigabyte possono causare problemi per il linker a 32 bit. Per risolvere questo problema, è possibile usare il set di strumenti a 64 bit. Per ulteriori informazioni su come eseguire questa operazione dalla riga di comando, vedere [procedura: Abilitare un set di strumenti visivi C++ a 64 bit nella](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md)riga di comando. Per informazioni su come eseguire questa operazione nell'IDE, vedere [uso di MSBuild con il compilatore e gli strumenti a 64 bit](../../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md#using-msbuild-to-build-your-project) e questo stack overflow post: [Come fare in modo che Visual Studio usi la cassetta di stato amd64 nativa](https://stackoverflow.com/questions/19820718/how-to-make-visual-studio-use-the-native-amd64-toolchain/23793055).

Questo errore può verificarsi se si dispone di autorizzazioni file insufficienti per accedere al *nome file*. Questo problema può verificarsi se si utilizza un account utente comune e si tenta di accedere ai file di libreria nelle directory di sistema protette oppure si utilizzano file copiati da altri utenti che dispongono delle autorizzazioni originali impostate. Per risolvere il problema, spostare il file in una directory di progetto scrivibile. Se il file si trova in una directory scrivibile ma dispone di autorizzazioni inaccessibili, è possibile utilizzare un prompt dei comandi dell'amministratore ed eseguire il comando takeown. exe per assumere la proprietà del file.

Questo errore può verificarsi quando lo spazio su disco non è sufficiente. Il linker usa i file temporanei in vari casi. Anche se lo spazio su disco è sufficiente, un collegamento molto grande può esaurire o frammentare lo spazio su disco disponibile. Provare a usare l'opzione [/opt (ottimizzazioni)](../../build/reference/opt-optimizations.md) . l'eliminazione COMDAT transitiva legge tutti i file oggetto più volte.

Se il *nome del file* è lnk*nnn*, ovvero un nome file generato dal linker per un file temporaneo, è possibile che la directory specificata nella variabile di ambiente TMP non esista oppure che sia specificata più di una directory per la variabile di ambiente TMP. È necessario specificare un solo percorso di directory per la variabile di ambiente TMP.
