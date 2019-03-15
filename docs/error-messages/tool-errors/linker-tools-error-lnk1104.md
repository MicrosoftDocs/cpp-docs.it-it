---
title: Errore degli strumenti del linker LNK1104
ms.date: 05/17/2017
f1_keywords:
- LNK1104
helpviewer_keywords:
- LNK1104
ms.assetid: 9ca6f929-0efc-4055-8354-3cf5b4e636dc
ms.openlocfilehash: eadeeb7ac19e3975a37a1364502b33400018cb05
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57818271"
---
# <a name="linker-tools-error-lnk1104"></a>Errore degli strumenti del linker LNK1104

> Impossibile aprire il file '*filename*'

Il linker non è stato possibile aprire il file specificato. Le cause più comuni di questo problema sono che il file è in uso o bloccato da un altro processo, non esiste, non è stato trovato in una delle directory cercato dal linker, o potrebbe non disporre delle autorizzazioni per accedere al file. Meno di frequente, potrebbe aver esaurito lo spazio su disco, il file potrebbe essere troppo grande o il percorso del file potrebbe essere troppo lungo.

## <a name="possible-causes-and-solutions"></a>Possibili cause e soluzioni

Questo errore può verificarsi quando il linker tenta di aprire un file per la lettura o scrittura. Per restringere le cause possibili, controllare il tipo di file che si trova e usare le sezioni seguenti per identificare e risolvere il problema specifico.

### <a name="cannot-open-your-app-or-its-pdb-file"></a>Non è possibile aprire l'app o il relativo file con estensione pdb

Se il nome del file è il file eseguibile o il progetto viene compilato un file con estensione pdb associato, la causa più comune è che l'applicazione è già in esecuzione quando si tenta di ricompilare o viene caricato in un debugger. Per risolvere questo problema, arrestare il programma e scaricarla dal debugger prima di compilare nuovamente. Se l'app è aperta in un altro programma, ad esempio un editor di risorse, chiuderla. In casi estremi, potrebbe essere necessario utilizzare Gestione attività per terminare il processo, o arrestare e riavviare Visual Studio.

I programmi antivirus spesso bloccare temporaneamente accedere ai file appena creati, in particolare .exe e. dll file eseguibili. Per risolvere questo problema, provare a esclusione delle directory di compilazione progetto dal programma antivirus.

### <a name="cannot-open-a-microsoft-library-file"></a>Non è possibile aprire un file di Microsoft Library

Se il file che non è possibile aprire uno dei file della libreria standard forniti da Microsoft, ad esempio kernel32.lib, potrebbe essere un errore di configurazione di progetto o un errore di installazione. Verificare che sia stato installato il SDK di Windows e se il progetto richiede altre librerie Microsoft, ad esempio MFC, assicurarsi che i componenti MFC sono stati anche installati dal programma di installazione di Visual Studio. È possibile eseguire il programma di installazione nuovo per aggiungere componenti facoltativi in qualsiasi momento. Per altre informazioni, vedere [modificare Visual Studio](/visualstudio/install/modify-visual-studio). Utilizzare la scheda singoli componenti del programma di installazione per scegliere specifiche librerie e agli SDK.

Se si sta creando un progetto che è stato creato utilizzando una versione precedente di Visual Studio, il set di strumenti della piattaforma e le librerie per la versione potrebbero non essere installate. Se il messaggio di errore si verifica per un nome di libreria con controllo delle versioni, ad esempio msvcr100.lib, questa è probabilmente la causa. Per risolvere questo problema, sono disponibili due opzioni: è possibile aggiornare il progetto per utilizzare il set di strumenti della piattaforma corrente è stato installato, oppure è possibile installare il set di strumenti meno recenti e compilare il progetto non modificato. Per altre informazioni, vedere [l'aggiornamento dei progetti da versioni precedenti di Visual C++](../../porting/upgrading-projects-from-earlier-versions-of-visual-cpp.md) e [usare multitargeting nativo in Visual Studio per compilare progetti precedenti](../../porting/use-native-multi-targeting.md).

Se viene visualizzato questo errore quando si compila per una nuova piattaforma di destinazione o la configurazione, le librerie per questo set di strumenti piattaforma o configurazione del progetto potrebbero non essere installate. Verificare che il **set strumenti della piattaforma** e **Windows SDK versione** specificato nel [pagina delle proprietà Generale](../../build/reference/general-property-page-project.md) vengono installati per il progetto e verificare che la sono disponibili nelle librerie il **Directory librerie** specificato nella [VC + + Directories Property Page](../../build/reference/vcpp-directories-property-page.md) per le impostazioni di configurazione. Sono disponibili impostazioni distinte per il Debug e le configurazioni delle vendite al dettaglio, nonché le configurazioni a 32 e 64 bit, pertanto, se uno funziona tale compilazione, ma un'altra causa un errore, assicurarsi che le impostazioni siano corrette e le librerie e gli strumenti richiesti vengono installate per ogni si compila la configurazione.

Se si usa l'IDE di Visual Studio per compilare un progetto che è stato copiato da un altro computer, i percorsi di installazione per le raccolte siano diversi. Controllare la **Directory librerie** proprietà di [VC + + Directories Property Page](../../build/reference/vcpp-directories-property-page.md) per il progetto e aggiornarla, se necessario. Per visualizzare e modificare i percorsi di libreria corrente impostati nell'IDE, scegliere il controllo elenco a discesa per il **Directory librerie** proprietà e scegliere **modificare**. Il **valore valutato** sezione del **Directory librerie** finestra di dialogo elenco corrente dei percorsi cercati i file di libreria.

Questo errore può verificarsi anche quando il percorso al SDK di Windows non è aggiornato. Se è stata installata una versione del SDK di Windows più recente rispetto alla versione di Visual Studio, assicurarsi che i percorsi specificati nella [VC + + Directories Property Page](../../build/reference/vcpp-directories-property-page.md) vengono aggiornate in modo che corrisponda il nuovo SDK. Se si usa il prompt dei comandi per gli sviluppatori, assicurarsi che il file batch che consente di inizializzare le variabili di ambiente viene aggiornato per i nuovi percorsi SDK. Questo problema può essere evitato usando il programma di installazione di Visual Studio per installare gli SDK aggiornati.

### <a name="cannot-open-a-third-party-library-file"></a>Non è possibile aprire un file di libreria di terze parti

Esistono diverse cause comuni per risolvere questo problema:

- Il percorso del file di libreria potrebbe non essere corretto o è non stato specificato al linker.

- Si potrebbe avere installato una versione a 32 bit della libreria, ma esegue la compilazione per 64-bit o viceversa.

- La libreria potrebbe avere dipendenze altre librerie che non sono installati.

Per risolvere un problema relativo al percorso, verificare che la variabile di ambiente LIB è impostata e contiene tutte le directory per le librerie usate, per tutte le configurazioni che compilazione. Nell'IDE, la variabile LIB è impostata il **Directory librerie** proprietà di [VC + + Directories Property Page](../../build/reference/vcpp-directories-property-page.md). Assicurarsi che tutte le directory che contengono le librerie che necessarie sono elencate in questo caso, per tutte le configurazioni che compilazione.

Se è necessario fornire una directory di libreria che esegue l'override di una directory di libreria standard, è possibile usare la [/LIBPATH](../../build/reference/libpath-additional-libpath.md) opzione della riga di comando o nell'IDE, è possibile utilizzare il **Directory librerie aggiuntive** proprietà di **le proprietà di configurazione > Linker > Generale** pagina delle proprietà per il progetto.

Verificare che è stata installata ogni versione della libreria che è necessario per le configurazioni che compilazione. È consigliabile usare la [vcpkg](../../vcpkg.md) utilità per automatizzare l'installazione e per molte librerie comuni di gestione pacchetti. Quando possibile, è consigliabile compilare le proprie copie delle librerie di terze parti, pertanto l'utente deve includere tutte le dipendenze locali che richiedono le librerie e vengono compilate per le stesse configurazioni di progetto.

### <a name="cannot-open-a-file-built-by-your-project"></a>Non è possibile aprire un file compilato dal progetto

Questo errore può verificarsi se il file *filename* è compilati dalla soluzione, ma non esiste ancora quando il linker prova ad accedervi. Questa situazione può verificarsi quando un progetto dipende da un altro progetto, ma non i progetti vengono compilati nell'ordine corretto. Per risolvere questo problema, assicurarsi che i riferimenti del progetto vengono impostati nel progetto che usa il file in modo che il file mancante viene compilato prima che sia necessario. Per altre informazioni, vedere [aggiunta di riferimenti nei progetti Visual C++](../../build/adding-references-in-visual-cpp-projects.md) e [gestione dei riferimenti in un progetto](/visualstudio/ide/managing-references-in-a-project).

### <a name="cannot-open-file-cprogramobj"></a>Impossibile aprire il file ' c:\\Program.obj'

Se viene visualizzato questo errore, o un errore simile che interessa un file con estensione obj imprevisto nella radice dell'unità, il problema è quasi certamente un percorso di libreria che non è incapsulato in virgolette doppie.

Per risolvere questo problema per le compilazioni da riga di comando, controllare la [/LIBPATH](../../build/reference/libpath-additional-libpath.md) opzione parametri, i percorsi specificati nella variabile di ambiente LIB e i percorsi specificati nella riga di comando e assicurarsi di usare le virgolette doppie intorno a tutti i percorsi che includono spazi.

Per risolvere il problema nell'IDE, controllare la **Directory librerie** proprietà la [le proprietà di configurazione > directory di VC + +](../../build/reference/vcpp-directories-property-page.md) pagina delle proprietà, il **Directory librerie aggiuntive** proprietà nel **proprietà di configurazione > Linker > Generale** pagina delle proprietà e il **dipendenze aggiuntive** proprietà nel **configurazione Proprietà > Linker > Input** pagina delle proprietà per il progetto. Assicurarsi che tutti i percorsi di directory che contengono le librerie che necessarie vengono incapsulati in virgolette doppie se necessario.

### <a name="other-common-issues"></a>Altri problemi comuni

Questo errore può verificarsi quando il nome file di libreria o il percorso specificato per il linker nella riga di comando o in un [#pragma comment (lib, "library_name")](../../preprocessor/comment-c-cpp.md) direttiva non è corretta oppure il percorso ha una specifica unità non valida. Controllare l'ortografia e l'estensione di file e verificare che il file esista nel percorso specificato.

È possibile che il file sia aperto in un altro programma e che il linker non sia in grado di scrivervi. Spesso i programmi antivirus blocca temporaneamente l'accesso ai file appena creati. Per risolvere questo problema, provare a esclusione delle directory di compilazione progetto dal programma antivirus.

Se si usa un'opzione di compilazione in parallelo, è possibile che Visual Studio ha bloccato il file in un altro thread. Per risolvere questo problema, verificare che non si compilano lo stesso oggetto di codice o di una libreria in più progetti e usare le dipendenze di compilazione o i riferimenti al progetto per prelevare i file binari compilati nel progetto.

Quando si specificano singole raccolte nel **dipendenze aggiuntive** proprietà direttamente, utilizzano spazi per separare i nomi di libreria, non virgole o punti e virgola. Se si usa la **Edit** voce di menu per aprire il **dipendenze aggiuntive** nella finestra di dialogo utilizzare caratteri di nuova riga per separare i nomi, non virgole, punti e virgola o spazi. Usare anche le nuove righe quando si specificano i percorsi di libreria nel **Directory librerie** e **Directory librerie aggiuntive** finestre di dialogo.

Questo errore può verificarsi quando il Percordo *filename* a più di 260 caratteri. Modificare i nomi o ridisporre la struttura di directory, se necessario per abbreviare i percorsi per i file necessari.

Questo errore può verificarsi perché il file è troppo grande. Le librerie o un oggetto file più di un gigabyte di dimensioni può causare problemi per il linker a 32 bit. Possibile correzione per risolvere questo problema consiste nell'usare il set di strumenti a 64 bit. Per altre informazioni su come eseguire questa operazione dalla riga di comando, vedere [come: Abilitare una a 64 bit Visual C++ set di strumenti della riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md). Per informazioni su come eseguire questa operazione nell'IDE, vedere [uso di MSBuild con il compilatore a 64 bit e strumenti](../../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md#using-msbuild-to-build-your-project) e questo post di Stack Overflow: [Come rendere Visual Studio usare la toolchain amd64 native](http://stackoverflow.com/questions/19820718/how-to-make-visual-studio-use-the-native-amd64-toolchain/23793055).

Questo errore può verificarsi se si dispone delle autorizzazioni file insufficienti per accedere *filename*. Questa situazione può verificarsi se si usa un account utente normali e un tentativo di accedere ai file di libreria nella directory di sistema protette o utilizzare i file copiati da altri utenti che hanno le autorizzazioni originali impostato. Per risolvere questo problema, spostare il file in una directory del progetto scrivibile. Se il file si trova nella directory scrivibile ma dispone di autorizzazioni inaccessibile, è possibile usare un prompt dei comandi di amministratore ed eseguire il comando takeown.exe assumere la proprietà del file.

L'errore può verificarsi quando non si dispone di spazio su disco sufficiente. Il linker usa i file temporanei in vari casi. Anche se si dispone di spazio su disco sufficiente, un collegamento di dimensioni molto grande possa esaurisce il numero o frammentare lo spazio disponibile su disco. È consigliabile usare la [/OPT (ottimizzazioni)](../../build/reference/opt-optimizations.md) opzione; esegue letture di eliminazione COMDAT transitive tutti i file oggetto più volte.

Se il *nomefile* denominata LNK*nnn*, ovvero un nome file generato dal linker per un file temporaneo, la directory specificata nella variabile di ambiente TMP potrebbe non esistere o potrebbe essere più di una directory specificato per la variabile di ambiente TMP. Percorso di una sola directory deve essere specificato per la variabile di ambiente TMP.
