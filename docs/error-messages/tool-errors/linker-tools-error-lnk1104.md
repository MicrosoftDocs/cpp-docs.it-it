---
title: Strumenti del linker LNK1104 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK1104
dev_langs:
- C++
helpviewer_keywords:
- LNK1104
ms.assetid: 9ca6f929-0efc-4055-8354-3cf5b4e636dc
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 128bd124c2536d86c8b673b54abc4b5505526b41
ms.openlocfilehash: c6121f598bc2913b65fe781b07bcc27e6b55375b
ms.contentlocale: it-it
ms.lasthandoff: 05/10/2017

---
# <a name="linker-tools-error-lnk1104"></a>Errore degli strumenti del linker LNK1104
Impossibile aprire il file '*filename*'  
  
Il linker Impossibile aprire il file specificato.  
  
## <a name="possible-causes-and-solutions"></a>Possibili cause e soluzioni
  
Questo errore può verificarsi quando il linker tenta di aprire un file per la lettura o per la scrittura. Le cause più comuni di questo problema sono che il file non esiste, non è possibile trovare in una delle directory il linker cerca, o è in uso e bloccati da un altro processo. Meno di frequente, potrebbe aver esaurito lo spazio su disco, il file potrebbe essere troppo grande, il percorso del file potrebbe essere troppo lungo o non si è autorizzato ad accedere al file.  

Verificare la presenza di uno di questi problemi comuni:  

-   L'applicazione è già in esecuzione quando si tenta di ricompilare. Se il file che non è possibile aprire il file eseguibile o un file di debug, ad esempio un file PDB, questa è una causa comune. Per risolvere questo problema, interrompere il programma e scaricare dal debugger prima di compilare nuovamente.  
  
-   Il file *filename* viene compilato per la soluzione, ma non ancora esistente quando il linker tenta di accedervi. Questa situazione può verificarsi quando un progetto dipende da un altro progetto per generare questo file, ma non i progetti compilati nell'ordine corretto. Per risolvere questo problema, assicurarsi che i riferimenti di progetto sono impostati nel progetto che utilizza il file in modo viene compilato il file mancante prima che sia necessario. Per ulteriori informazioni, vedere [aggiunta di riferimenti nei progetti Visual C++](../../ide/adding-references-in-visual-cpp-projects.md) e [gestione dei riferimenti in un progetto](/visualstudio/ide/managing-references-in-a-project).  
  
-   Il nome file o un percorso specificato nella riga di comando o in una direttiva lib #pragma non è corretto oppure il percorso ha una specifica unità non valida. Controllare l'ortografia e verificare che il file esista nel percorso specificato.  
  
-   Se si utilizza l'IDE di Visual Studio per compilare un progetto che è stato copiato da un altro computer, i percorsi di installazione per le raccolte siano diversi. Controllare la proprietà Directory librerie di [pagina delle proprietà directory di VC + +](../../ide/vcpp-directories-property-page.md) e aggiornarla, se necessario. Per visualizzare e modificare i percorsi di libreria corrente impostato nell'IDE, scegliere il controllo elenco a discesa per la proprietà directory di libreria e scegliere **modifica**. Il **valutata valore** sezione della finestra di dialogo Directory librerie l'elenco corrente dei percorsi cercati i file di libreria.  
  
-   Se si sta creando un progetto che è stato creato utilizzando una versione precedente di Visual Studio, il set di strumenti della piattaforma e librerie per tale versione potrebbero non non essere installate. Per risolvere questo problema, sono disponibili due opzioni: è possibile aggiornare il progetto per utilizzare il set di strumenti della piattaforma corrente è stato installato oppure è possibile installare il set di strumenti precedenti e compilare il progetto invariato. Per ulteriori informazioni, vedere [l'aggiornamento dei progetti da versioni precedenti di Visual C++](../../porting/upgrading-projects-from-earlier-versions-of-visual-cpp.md) e [utilizzare multitargeting nativo in Visual Studio per compilare progetti precedenti](../../porting/use-native-multi-targeting.md).
  
-   Le librerie per la configurazione di progetto corrente o un set di strumenti della piattaforma non sono installate. Verificare che il set di strumenti della piattaforma e il SDK di Windows specificato nella [pagina delle proprietà Generale](../../ide/general-property-page-project.md) vengono installati per il progetto e verificare che le librerie necessarie siano disponibili nella directory di libreria specificata nel [pagina delle proprietà directory di VC + +](../../ide/vcpp-directories-property-page.md) per le impostazioni di configurazione. Sono disponibili impostazioni distinte per le configurazioni di Debug e delle vendite al dettaglio, pertanto se una funziona tale compilazione, ma l'altra viene generato un errore, verificare le impostazioni siano corrette e di librerie e gli strumenti richiesti vengono installate per entrambe le configurazioni.  
  
-   Il percorso di Windows SDK non è aggiornato. Se è stata installata una versione di Windows SDK più recente rispetto alla versione di Visual Studio, assicurarsi che i percorsi specificati nella [pagina delle proprietà directory di VC + +](../../ide/vcpp-directories-property-page.md) vengono aggiornate di conseguenza il nuovo SDK. Se si usa il prompt dei comandi per sviluppatori, assicurarsi che il file batch che inizializza le variabili di ambiente è stato aggiornato per i nuovi percorsi di SDK.  
  
-   È possibile che il file sia aperto in un altro programma e che il linker non sia in grado di scrivervi. I programmi antivirus spesso bloccano temporaneamente l'accesso ai file appena creati. Per risolvere questo problema, provare escludendo le directory di compilazione progetto il software antivirus.  
  
-   Se si utilizza un'opzione di compilazione parallela, è possibile che Visual Studio ha bloccato il file in un altro thread. Per risolvere questo problema, verificare che prima non si genera lo stesso oggetto di codice o di una libreria in più progetti, e utilizzare le dipendenze di compilazione o i riferimenti di progetto possono essere prelevati i file binari compilati nel progetto.  
  
-   Si dispone di una variabile di ambiente LIB non corretta. Nelle build di riga di comando, verificare che la variabile di ambiente LIB è impostata e contiene tutte le directory per le librerie a cui che si utilizza. Nell'IDE, la variabile LIB è impostata tramite la proprietà di directory di libreria nel [pagina delle proprietà directory di VC + +](../../ide/vcpp-directories-property-page.md). Assicurarsi che tutte le directory che contengono le librerie che necessarie sono elencate di seguito. Se è necessario fornire una directory di libreria che esegue l'override di una directory di libreria standard, è possibile utilizzare il [/LIBPATH](../../build/reference/libpath-additional-libpath.md)) opzione della riga di comando o la proprietà Directory librerie aggiuntive nella pagina delle proprietà Linker per il progetto.  
  
-   Quando si specificano le singole librerie nella finestra di dialogo Pagine delle proprietà del progetto, i nomi delle librerie devono essere separati da spazi, virgole non.  
  
-   Il percorso per *filename* a più di 260 caratteri. Modificare i nomi o ridisporre la struttura di directory, se necessario, per ridurre i percorsi per i file necessari.  
  
-   Il file è troppo grande. Librerie o oggetto di file più di un gigabyte di dimensioni potrebbe causare problemi per il linker a 32 bit. Possibile correzione per questo problema consiste nell'utilizzare il set di strumenti a 64 bit. Per ulteriori informazioni su come eseguire questa operazione dalla riga di comando, vedere [procedura: abilitare un 64-Bit Visual C++ set di strumenti della riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md). Per informazioni su come eseguire questa operazione nell'IDE, vedere [utilizzando MSBuild con il compilatore a 64 bit e strumenti](../../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md#using-msbuild-to-build-your-project) e questo post di Overflow dello Stack: [descritto come utilizzare la toolchain amd64 nativo Visual Studio](http://stackoverflow.com/questions/19820718/how-to-make-visual-studio-use-the-native-amd64-toolchain/23793055).  
  
-   Si dispone delle autorizzazioni file insufficienti per accedere a *filename*. Questa situazione può verificarsi se per accedere ai file di libreria nella directory di sistema protette o utilizzare i file copiati da altri utenti che hanno le autorizzazioni originali impostato. Per risolvere questo problema, spostare il file in una directory di progetto scrivibile. Se il file si trova nella directory scrivibile, ma dispone di autorizzazioni inaccessibili, è possibile utilizzare un prompt dei comandi di amministratore ed eseguire il comando takeown.exe per assumere la proprietà del file.  
  
-   Non è disponibile spazio sufficiente. Il linker usa i file temporanei in vari casi. Anche se si dispone di spazio su disco sufficiente, un collegamento di dimensioni molto grande può esaurire o frammentare lo spazio disponibile su disco. È consigliabile utilizzare il [/OPT (ottimizzazioni)](../../build/reference/opt-optimizations.md) opzione; in questo letture eliminazione comdat transitiva tutti i file oggetto più volte.  
  
-   Se il *filename* denominato file LNK*n*, che è un nome file generato dal linker per un file temporaneo, la directory specificata nella variabile di ambiente TMP potrebbe non esistere o più directory può essere specificata per la variabile di ambiente TMP. Solo un percorso di directory deve essere specificato per la variabile di ambiente TMP.  
  
-   Se il messaggio di errore fa riferimento a un nome di libreria e il file MAK è stato trasferito di recente da un sistema di sviluppo Microsoft Visual C++ precedente, è possibile che la libreria non sia più valida. Verificare che il nome della libreria sia corretto e che esista ancora nella posizione specificata oppure aggiornare il percorso LIB per puntare alla nuova posizione.  

