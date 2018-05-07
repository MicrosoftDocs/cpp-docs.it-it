---
title: Strumenti del linker LNK1104 errore | Documenti Microsoft
ms.custom: ''
ms.date: 05/17/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1104
dev_langs:
- C++
helpviewer_keywords:
- LNK1104
ms.assetid: 9ca6f929-0efc-4055-8354-3cf5b4e636dc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d2b832d4bceab88fbf3fbe8325a414669d11073c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-error-lnk1104"></a>Errore degli strumenti del linker LNK1104

> Impossibile aprire il file '*filename*'

Il linker Impossibile aprire il file specificato. Le cause più comuni di questo problema sono che il file è in uso o bloccato da un altro processo, non esiste, non può trovarsi in una delle directory cercato dal linker oppure non si dispone delle autorizzazioni sufficienti per accedere al file. Meno di frequente, potrebbe aver esaurito lo spazio su disco, il file potrebbe essere troppo grande o il percorso del file potrebbe essere troppo lungo.

## <a name="possible-causes-and-solutions"></a>Possibili cause e soluzioni

Questo errore può verificarsi quando il linker tenta di aprire un file per la lettura o scrittura. Per restringere le cause possibili, controllare il tipo di file è e usare le sezioni seguenti per identificare e risolvere il problema specifico.

### <a name="cannot-open-your-app-or-its-pdb-file"></a>Impossibile aprire l'app o il file con estensione pdb

Se il nome del file è l'eseguibile verrà compilato il progetto o un file con estensione pdb associato, la causa più comune è che l'applicazione è già in esecuzione quando si tenta di ricompilare o è caricato in un debugger. Per risolvere questo problema, interrompere il programma e scaricare dal debugger prima di compilare nuovamente. Se l'app è aperto in un altro programma, ad esempio un editor di risorse, chiuderlo. In casi estremi, potrebbe essere necessario utilizzare Gestione attività per terminare il processo, oppure interrompere e riavviare Visual Studio.

I programmi antivirus spesso temporaneamente bloccare l'accesso ai file appena creati, in particolare .exe e dll file eseguibili. Per risolvere questo problema, provare escludendo le directory di compilazione progetto il software antivirus.

### <a name="cannot-open-a-microsoft-library-file"></a>Non è possibile aprire un file Microsoft Library

Se il file che non è possibile aprire uno dei file della libreria standard forniti da Microsoft, ad esempio Kernel32, potrebbe essere un errore di configurazione di progetto o un errore durante l'installazione. Verificare che sia stato installato il SDK di Windows e se il progetto richiede altre librerie di Microsoft, ad esempio MFC, assicurarsi che i componenti MFC sono stati installati anche dal programma di installazione di Visual Studio. È possibile eseguire il programma di installazione per aggiungere componenti facoltativi in qualsiasi momento. Per ulteriori informazioni, vedere [modificare Visual Studio](/visualstudio/install/modify-visual-studio). Utilizzare la scheda di singoli componenti del programma di installazione scegliere librerie specifiche e SDK.

Se si sta creando un progetto che è stato creato utilizzando una versione precedente di Visual Studio, il set di strumenti della piattaforma e librerie per tale versione potrebbero non essere installate. Se il messaggio di errore si verifica per un nome di libreria con controllo delle versioni, ad esempio msvcr100.lib, ciò è probabilmente la causa. Per risolvere questo problema, sono disponibili due opzioni: è possibile aggiornare il progetto per utilizzare il set di strumenti della piattaforma corrente è stato installato oppure è possibile installare il set di strumenti precedenti e compilare il progetto invariato. Per ulteriori informazioni, vedere [l'aggiornamento dei progetti da versioni precedenti di Visual C++](../../porting/upgrading-projects-from-earlier-versions-of-visual-cpp.md) e [utilizzare multitargeting nativo in Visual Studio per compilare progetti precedenti](../../porting/use-native-multi-targeting.md).

Se viene visualizzato questo errore quando si compila per una configurazione o la nuova piattaforma di destinazione, le librerie per tale set di strumenti piattaforma o configurazione del progetto potrebbero non essere installate. Verificare che il **set strumenti della piattaforma** e **Windows SDK versione** specificato nella [pagina delle proprietà Generale](../../ide/general-property-page-project.md) vengono installati per il progetto e verificare che la le librerie sono disponibili nel **Directory librerie** specificato nella [pagina delle proprietà directory di VC + +](../../ide/vcpp-directories-property-page.md) per le impostazioni di configurazione. Sono disponibili impostazioni distinte per il Debug e le configurazioni delle vendite al dettaglio, nonché le configurazioni a 32 bit e 64 bit, pertanto se una funziona tale compilazione ma un'altra causa un errore, verificare che le impostazioni siano corrette e di librerie e gli strumenti richiesti vengono installate per ogni configurazione che compilazione.

Se si utilizza l'IDE di Visual Studio per compilare un progetto che è stato copiato da un altro computer, i percorsi di installazione per le raccolte siano diversi. Controllare il **Directory librerie** proprietà il [pagina delle proprietà directory di VC + +](../../ide/vcpp-directories-property-page.md) per il progetto e aggiornarla, se necessario. Per visualizzare e modificare i percorsi di libreria corrente impostato nell'IDE, scegliere il controllo elenco a discesa per la **Directory librerie** proprietà e scegliere **modifica**. Il **valutata valore** sezione la **Directory librerie** finestra di dialogo elenco corrente dei percorsi cercati i file di libreria di.

Questo errore può verificarsi anche quando il percorso di Windows SDK non è aggiornato. Se è stata installata una versione di Windows SDK più recente rispetto alla versione di Visual Studio, assicurarsi che i percorsi specificati nella [pagina delle proprietà directory di VC + +](../../ide/vcpp-directories-property-page.md) vengono aggiornate di conseguenza il nuovo SDK. Se si usa il prompt dei comandi per sviluppatori, assicurarsi che il file batch che inizializza le variabili di ambiente è stato aggiornato per i nuovi percorsi di SDK. Questo problema può essere evitato utilizzando il programma di installazione di Visual Studio per installare gli SDK aggiornati.

### <a name="cannot-open-a-third-party-library-file"></a>Non è possibile aprire un file di libreria di terze parti

Esistono diverse cause comuni per questo problema:

- Il percorso al file di libreria potrebbe non essere corretto o è non stato specificato al linker.

- Potrebbe installata una versione a 32 bit della libreria, ma esegue la compilazione per 64 bit, o viceversa.

- La libreria potrebbe dipendere da altre librerie che non sono installati.

Per risolvere un problema relativo al percorso, verificare che la variabile di ambiente LIB è impostata e contiene tutte le directory per le librerie a cui che si utilizza, per tutte le configurazioni che compilazione. Nell'IDE, la variabile LIB è impostata il **Directory librerie** proprietà il [pagina delle proprietà directory di VC + +](../../ide/vcpp-directories-property-page.md). Assicurarsi che tutte le directory che contengono le librerie che necessarie sono elencate di seguito, per tutte le configurazioni che compilazione.

Se è necessario fornire una directory di libreria che esegue l'override di una directory di libreria standard, è possibile utilizzare il [/LIBPATH](../../build/reference/libpath-additional-libpath.md) opzione nella riga di comando o nell'IDE, è possibile utilizzare il **Directory librerie aggiuntive** proprietà di **le proprietà di configurazione > Linker > Generale** pagina delle proprietà per il progetto.

Verificare che ogni versione della libreria che è necessario per le configurazioni di che compilazione è installata. È consigliabile utilizzare il [vcpkg](../../vcpkg.md) utilità di gestione per automatizzare l'installazione e configurazione per molte librerie comuni del pacchetto. Quando possibile, è consigliabile compilare le proprie copie delle librerie di terze parti, in modo da accertarsi di disporre di tutte le dipendenze locali che richiedono le librerie e vengono compilate per le stesse configurazioni del progetto.

### <a name="cannot-open-a-file-built-by-your-project"></a>Non è possibile aprire un file compilato dal progetto

Potrebbe essere visualizzato questo errore se il file *filename* viene compilato per la soluzione, ma non ancora esistente quando il linker tenta di accedervi. Questa situazione può verificarsi quando un progetto dipende da un altro progetto, ma non i progetti compilati nell'ordine corretto. Per risolvere questo problema, assicurarsi che i riferimenti di progetto sono impostati nel progetto che utilizza il file in modo viene compilato il file mancante prima che sia necessario. Per ulteriori informazioni, vedere [aggiunta di riferimenti nei progetti Visual C++](../../ide/adding-references-in-visual-cpp-projects.md) e [gestione dei riferimenti in un progetto](/visualstudio/ide/managing-references-in-a-project).

### <a name="cannot-open-file-cprogramobj"></a>Impossibile aprire il file "c:\\Program.obj'

Se viene visualizzato l'errore o un errore simile che interessa un file con estensione obj imprevisto nella radice dell'unità, il problema è quasi certo che sia un percorso di libreria che non è incapsulato in virgolette doppie.

Per risolvere questo problema per le compilazioni da riga di comando, controllare il [/LIBPATH](../../build/reference/libpath-additional-libpath.md) opzione parametri, i percorsi specificati nella variabile di ambiente LIB e i percorsi specificati nella riga di comando e assicurarsi di utilizzare le virgolette doppie intorno a tutti i percorsi che includono spazi.

Per risolvere il problema nell'IDE, controllare il **Directory librerie** proprietà il [le proprietà di configurazione > directory di VC + +](../../ide/vcpp-directories-property-page.md) pagina delle proprietà di **Directory librerie aggiuntive** proprietà il **le proprietà di configurazione > Linker > Generale** pagina delle proprietà e **dipendenze aggiuntive** proprietà nel **configurazione Proprietà > Linker > Input** pagina delle proprietà per il progetto. Assicurarsi che tutti i percorsi di directory che contengono le librerie che necessarie vengono incapsulati in virgolette doppie, se necessario.

### <a name="other-common-issues"></a>Altri problemi comuni

Questo errore può verificarsi quando il nome del file di libreria o il percorso specificato per il linker nella riga di comando o in un [#pragma commento (lib, "library_name")](../../preprocessor/comment-c-cpp.md) direttiva non è corretta oppure il percorso ha una specifica unità non valida. Controllare l'ortografia e l'estensione di file e verificare che il file esista nel percorso specificato.

È possibile che il file sia aperto in un altro programma e che il linker non sia in grado di scrivervi. I programmi antivirus spesso bloccano temporaneamente l'accesso ai file appena creati. Per risolvere questo problema, provare escludendo le directory di compilazione progetto il software antivirus.

Se si utilizza un'opzione di compilazione parallela, è possibile che Visual Studio ha bloccato il file in un altro thread. Per risolvere questo problema, verificare che prima non si genera lo stesso oggetto di codice o di una libreria in più progetti, e utilizzare le dipendenze di compilazione o i riferimenti di progetto possono essere prelevati i file binari compilati nel progetto.

Quando si specificano singole raccolte nel **dipendenze aggiuntive** proprietà direttamente, utilizzare gli spazi per separare i nomi di libreria, non virgole o punti e virgola. Se si utilizza il **modifica** voce di menu per aprire la **dipendenze aggiuntive** la finestra di dialogo, utilizzare caratteri di nuova riga per separare i nomi, non virgole, punti e virgola o spazi. Utilizzare inoltre nuove righe quando si specificano i percorsi di libreria nel **Directory librerie** e **Directory librerie aggiuntive** finestre di dialogo.

Questo errore può verificarsi quando il percorso per *filename* a più di 260 caratteri. Modificare i nomi o ridisporre la struttura di directory, se necessario, per ridurre i percorsi per i file necessari.

Questo errore può verificarsi perché il file è troppo grande. Librerie o oggetto di file più di un gigabyte di dimensioni potrebbe causare problemi per il linker a 32 bit. Possibile correzione per questo problema consiste nell'utilizzare il set di strumenti a 64 bit. Per ulteriori informazioni su come eseguire questa operazione dalla riga di comando, vedere [procedura: abilitare un 64-Bit Visual C++ set di strumenti della riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md). Per informazioni su come eseguire questa operazione nell'IDE, vedere [utilizzando MSBuild con il compilatore a 64 bit e strumenti](../../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md#using-msbuild-to-build-your-project) e questo post di Overflow dello Stack: [descritto come utilizzare la toolchain amd64 nativo Visual Studio](http://stackoverflow.com/questions/19820718/how-to-make-visual-studio-use-the-native-amd64-toolchain/23793055).

Questo errore può verificarsi se si dispone di autorizzazioni file insufficienti per accedere a *filename*. Questa situazione può verificarsi se si utilizza un account utente normale e il tentativo di accedere ai file di libreria nella directory di sistema protette o utilizzare i file copiati da altri utenti che hanno le autorizzazioni originali impostato. Per risolvere questo problema, spostare il file in una directory di progetto scrivibile. Se il file si trova nella directory scrivibile, ma dispone di autorizzazioni inaccessibili, è possibile utilizzare un prompt dei comandi di amministratore ed eseguire il comando takeown.exe per assumere la proprietà del file.

L'errore può verificarsi quando non si dispone di spazio su disco insufficiente. Il linker usa i file temporanei in vari casi. Anche se si dispone di spazio su disco sufficiente, un collegamento di dimensioni molto grande può esaurire o frammentare lo spazio disponibile su disco. È consigliabile utilizzare il [/OPT (ottimizzazioni)](../../build/reference/opt-optimizations.md) opzione; in questo letture di eliminazione COMDAT transitive tutti i file oggetto più volte.

Se il *filename* denominato LNK*nnn*, ovvero un nome file generato dal linker per un file temporaneo, la directory specificata nella variabile di ambiente TMP potrebbe non esistere o potrebbe essere più di una directory specificato per la variabile di ambiente TMP. Solo un percorso di directory deve essere specificato per la variabile di ambiente TMP.
