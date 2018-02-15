---
title: Compilare il codice C/C++ nella riga di comando | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs:
- C++
helpviewer_keywords:
- command-line builds [C++]
- compiling source code [C++], command line
- builds [C++], command-line
- command line [C++], building from
- command line [C++], compilers
ms.assetid: 7ca9daed-a003-4162-842d-908f79058365
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9f613c20e0cab45a8eaa802c4c7ba0c6ac391357
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="build-cc-code-on-the-command-line"></a>Compilare il codice C/C++ nella riga di comando

È possibile compilare applicazioni C e C++ nella riga di comando tramite gli strumenti inclusi in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].

Quando si sceglie uno dei carichi di lavoro di C++ nel [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] programma di installazione, viene installato un set di strumenti che include i compilatori C/C++, i, linker e altri strumenti di compilazione. Questi strumenti vengono usati per il [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] IDE e utilizzabile anche dalla riga di comando. Sono disponibili compilatori ospitati da x86 e x64 ospitato distinti e gli strumenti di compilazione di codice per x86, x64 e ARM di destinazione. Ogni set di strumenti per una particolare architettura di host e la destinazione build viene archiviato nella propria directory. Per funzionare correttamente, tali strumenti richiedono diverse variabili di ambiente specifiche per aggiungerli al percorso e impostare includono file, file di libreria e percorsi del SDK. Per assicurarsi di impostare queste variabili di ambiente, il programma di installazione crea file di comando personalizzata, noto anche come file batch, durante l'installazione. È possibile eseguire uno di questi file di comando in una finestra del prompt dei comandi per impostare un'architettura di compilazione specifica. Per comodità, il programma di installazione crea inoltre collegamenti nel menu di avvio (o alla pagina iniziale in Windows 8. x) windows prompt dei comandi per sviluppatori che iniziano con questi file di comando, pertanto tutte le variabili di ambiente necessarie sono impostata e pronto per l'utilizzo. 

Le variabili di ambiente necessarie sono specifiche per l'installazione e l'architettura di compilazione scegliere e potrebbero essere modificate da aggiornamenti del prodotto. Pertanto, è consigliabile utilizzare uno dei prompt dei comandi installati collegamenti o file di comando anziché impostare manualmente le variabili di ambiente in Windows. Per ulteriori informazioni, vedere [impostare il percorso e le variabili di ambiente per la compilazione da riga di comando](../build/setting-the-path-and-environment-variables-for-command-line-builds.md).  

Il set di strumenti della riga di comando, i file di comando e i collegamenti di prompt dei comandi installati dipendono dal processore del computer e le opzioni selezionate durante l'installazione. Come minimo, vengono installati gli strumenti di ospitati da x86 a 32 bit che compilare codice nativo x86 a 32 bit e tra gli strumenti di compilazione di codice nativo x64 a 64 bit. Se si dispone di Windows a 64 bit, vengono installati anche gli strumenti basati su x64 a 64 bit che codice nativo a 64 bit di compilazione e tra gli strumenti di compilazione di codice nativo a 32 bit. Se si sceglie di installare gli strumenti di C++ Universal Windows Platform facoltativi, vengono installati anche gli strumenti nativi di 32 bit e 64 bit di compilazione di codice ARM. Altri carichi di lavoro è possibile installare altri strumenti.

<a name="developer_command_prompt_shortcuts"></a>
## <a name="developer-command-prompt-shortcuts"></a>Tasti di scelta rapida prompt dei comandi per sviluppatori

Collegamenti di prompt dei comandi vengono installati in una specifica di versione [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] cartella nel menu Start. Di seguito è riportato un elenco di collegamenti il prompt dei comandi di base e le architetture di compilazione che supportano:

- **Prompt dei comandi per sviluppatori** imposta l'ambiente da utilizzare strumenti nativi x86 a 32 bit per compilare il codice a 32 bit, nativo x86.  
- **x86 nativo prompt dei comandi** imposta l'ambiente da utilizzare strumenti nativi x86 a 32 bit per compilare il codice a 32 bit, nativo x86.  
- **x64 nativo prompt dei comandi** imposta l'ambiente da utilizzare strumenti a 64 bit, x64 nativo per compilare il codice a 64 bit, x64 nativo.  
- **x86_x64 Cross prompt dei comandi** imposta l'ambiente da utilizzare strumenti nativi x86 a 32 bit per compilare il codice a 64 bit, x64 nativo.  
- **x64_x86 Cross prompt dei comandi** imposta l'ambiente da utilizzare strumenti a 64 bit, x64 nativo per compilare il codice a 32 bit, nativo x86.  

I nomi effettivi di cartella e il collegamento dello menu Start variano a seconda della versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] è stato installato e l'installazione del nome alternativo, se si imposta uno. Ad esempio, se è installato Visual 2017 di Studio che è stato concesso una nome alternativo di installazione di 15.3, il collegamento del prompt dei comandi per sviluppatori è denominato **prompt dei comandi per sviluppatori per Visual Studio 2017 (15.3)**, in una cartella denominata  **Visual Studio 2017**. 

Se è stato installato il [Build Tools per Visual Studio 2017](https://go.microsoft.com/fwlink/p/?linkid=840931) o [compilare strumenti di Visual C++ 2015](http://landinghub.visualstudio.com/visual-cpp-build-tools) edition, potrebbe essere presente solo nativo specifico o strumenti di opzioni di prompt dei comandi per gli sviluppatori. 

<a name="developer_command_prompt"></a>
## <a name="to-open-a-developer-command-prompt-window"></a>Per aprire una finestra del prompt dei comandi per sviluppatori  
  
1.  Sul desktop, aprire le finestre **avviare** menu e quindi scorrere l'elenco per trovare e aprire la cartella per la versione di Visual Studio, ad esempio, **Visual Studio 2017**. In alcune versioni precedenti di Visual Studio, i collegamenti sono in una sottocartella denominata **Visual Studio Tools**.  
  
2.  Nella cartella, scegliere il **prompt dei comandi per sviluppatori** per la versione di Visual Studio. Questo collegamento verrà avviata una finestra prompt dei comandi per gli sviluppatori che utilizza l'architettura di compilazione predefinito di strumenti nativi x86 a 32 bit per compilare il codice a 32 bit, nativo x86. Se si preferisce un'architettura di compilazione non predefinito, scegliere una delle nativo o strumenti di prompt dei comandi per specificare l'architettura di host e di destinazione. 

È un modo più veloce per aprire una finestra del prompt dei comandi per sviluppatori di immettere *prompt dei comandi per sviluppatori* nella casella di ricerca desktop, quindi scegliere il risultato desiderato.

<a name="developer_command_files"></a>
## <a name="developer-command-files-and-locations"></a>Percorsi e i file di comando per sviluppatori

Se si preferisce impostare l'ambiente di architettura di compilazione in una finestra del prompt dei comandi esistente, è possibile utilizzare uno dei file di comando creati dal programma di installazione. Il percorso di questi file dipende dalla versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] è stato installato e sulla posizione e scelte di denominazione sono apportate durante l'installazione. Per Visual Studio 2017, il percorso di installazione tipica in un computer a 64 bit è \Programmi file (x86) \Microsoft Visual Studio\2017\\*edition*, dove *edition* potrebbe essere Community, Professional, Enterprise, BuildTools o un altro nome specificato. Per Visual Studio 2015, il percorso di installazione tipico è \Programmi (x86) \Microsoft Visual Studio 14.0. 

Il file di comando prompt dei comandi per sviluppatori primario, VsDevCmd.bat, si trova nella sottodirectory Common7\Tools della directory di installazione. Quando viene specificato alcun parametro, si imposta l'architettura di ambiente e di compilazione per utilizzare gli strumenti nativi x86 a 32 bit per compilare x86 a 32 bit codice.

File di comando aggiuntive sono disponibili per impostare le architetture di compilazione specifica, a seconda dell'architettura di processore e [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] carichi di lavoro e le opzioni che è stato installato. In Visual Studio 2017, queste si trovano nella sottodirectory VC\Auxiliary\Build del [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] directory di installazione. In Visual Studio 2015, si trovano in VC\bin, VC o VC\bin\\*architetture* le sottodirectory della directory di installazione, in cui *architetture* è uno dei nativo o incrociato opzioni del compilatore. Questi file di comando, impostare i parametri e chiamare VsDevCmd.bat per configurare l'ambiente di compilazione specificata architettura. Un'installazione tipica potrebbe includere questi file di comando:

- **vcvars32.bat** utilizzare gli strumenti nativi x86 a 32 bit per compilare x86 a 32 bit codice.  
- **vcvars64.bat** utilizzare gli strumenti nativi x64 a 64 bit per compilare a 64 bit x64 codice.  
- **vcvarsx86_amd64.bat** utilizzare gli strumenti di cross nativi x86 a 32 bit per compilare a 64 bit x64 codice.  
- **vcvarsamd64_x86.bat** utilizzare gli strumenti di a 64 bit nativi x64 incrociati per compilare x86 a 32 bit codice.  
- **vcvarsx86_arm.bat** utilizzare gli strumenti di cross nativi x86 a 32 bit per compilare codice ARM.  
- **vcvarsamd64_arm.bat** utilizzare gli strumenti di a 64 bit nativi x64 incrociati per compilare codice ARM.  
- **vcvarsall.bat** usare parametri per specificare l'host e architetture di destinazione, nonché le opzioni di SDK e piattaforma. Chiamata tramite un `/help` parametro per un elenco di opzioni.  

> [!CAUTION]
>  Il file vcvarsall.bat e altri file di comando possono variare da computer a computer. Non sostituire un file vcvarsall.bat mancante o danneggiato usando un file da un altro computer. Eseguire nuovamente il [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] programma di installazione per sostituire il file mancante.  
>   
> Il file vcvarsall.bat varia anche da versione a versione. Se la versione corrente di Visual C++ è installata in un computer che dispone anche di una versione precedente di Visual C++, non eseguire vcvarsall.bat o un altro file di comando da diverse versioni nella stessa finestra del prompt dei comandi.  
 
Il modo più semplice per specificare un'architettura di compilazione specifica in una finestra di comando esistente è utilizzare il file vcvarsall.bat. È possibile utilizzare vcvarsall.bat per impostare le variabili di ambiente per configurare la riga di comando per la compilazione nativa a 32 o 64 bit, o per la compilazione incrociata per x86, x64 o processori ARM; destinazione Microsoft Store, piattaforma Windows universale o piattaforme Desktop di Windows; Per specificare quali SDK di Windows da utilizzare; e per specificare la versione del set di strumenti della piattaforma. Se non sono forniti argomenti, il file vcvarsall.bat Configura le variabili di ambiente per usare il compilatore nativo a 32 bit corrente per x86 destinazioni Windows Desktop. Tuttavia, è possibile utilizzare per configurare qualsiasi di nativo o tra gli strumenti di compilazione. Se si specifica una configurazione del compilatore che non è installata o non è disponibile nell'architettura del computer, viene visualizzato un messaggio di errore. Questa tabella mostra gli argomenti di architettura supportata:  
  
|Argomento di vcvarsall.bat architettura|Compilatore|Architettura del computer host|Architettura dell'output di compilazione|  
|----------------------------|--------------|----------------------------------|-------------------------------|  
|x86|x86 nativo a 32 bit|x86, x64|x86|  
|x86\_amd64 o x86\_x64|x64 su x86 (incrociato)|x86, x64|X64|  
|x86_arm|ARM su x86 (incrociato)|x86, x64|ARM|  
|AMD64 o x64|x64 nativo a 64 bit|X64|X64|  
|AMD64\_x86 o x64\_x86|x86 su x64|X64|x86|  
|AMD64\_arm o x64\_arm|ARM su x64|X64|ARM|  
  
È possibile utilizzare il **archiviare** o **uwp** le opzioni per specificare il tipo di piattaforma o nessuna delle due per specificare un'applicazione desktop. Per specificare la versione di Windows SDK, è possibile utilizzare un numero completo di Windows 10 SDK, ad esempio 10.0.10240.0 o specificare 8.1 per utilizzare il SDK di Windows 8.1. Consente di specificare il set di strumenti del compilatore di Visual Studio 2015; 14.0 Per impostazione predefinita, l'ambiente è impostata per utilizzare il set di strumenti del compilatore di Visual Studio 2017.

<a name="vcvarsall"></a>
## <a name="to-set-up-the-build-environment-in-an-existing-command-prompt-window"></a>Per configurare l'ambiente di compilazione in una finestra del prompt dei comandi esistente  
  
1.  Al prompt dei comandi, utilizzare il comando CD per passare alla directory di installazione di Visual Studio. Quindi, utilizzare nuovamente i CD per passare alla sottodirectory che contiene i file di comando specifiche della configurazione. Per Visual Studio 2017, si tratta della sottodirectory VC\Auxiliary\Build. Per Visual Studio 2015, utilizzare la sottodirectory VC.  
  
1.  Per configurare questa finestra del prompt dei comandi per l'utilizzo di strumenti a 32 bit per compilare il codice per x86 a piattaforme, al prompt dei comandi, immettere:  
  
     `vcvarsall`  

1.  Per configurare questa finestra del prompt dei comandi per l'utilizzo di strumenti a 32 bit per compilare il codice per x64 piattaforme, al prompt dei comandi, immettere:  
  
     `vcvarsall x86_amd64`  
  
1.  Per configurare questa finestra del prompt dei comandi per l'utilizzo di strumenti a 32 bit per compilare il codice per le piattaforme ARM, al prompt dei comandi, immettere:  
  
     `vcvarsall x86_arm`  
  
1.  Per configurare questa finestra del prompt dei comandi per l'utilizzo di strumenti a 64 bit per compilare il codice per x64 piattaforme, al prompt dei comandi, immettere:  
  
     `vcvarsall amd64`  
  
1.  Per configurare questa finestra del prompt dei comandi per l'utilizzo di strumenti a 64 bit per compilare il codice per x86 a piattaforme, al prompt dei comandi, immettere:  
  
     `vcvarsall amd64_x86`  
  
1.  Per configurare questa finestra del prompt dei comandi per l'utilizzo di strumenti a 64 bit per compilare il codice per le piattaforme ARM, al prompt dei comandi, immettere:  
  
     `vcvarsall amd64_arm`  

Il file di comando imposta le variabili di ambiente necessarie per i percorsi di strumenti di compilazione, librerie e intestazioni. È ora possibile utilizzare questa finestra del prompt dei comandi per eseguire gli strumenti e il compilatore della riga di comando.  
  
Se si utilizza [DEVENV](/visualstudio/ide/reference/devenv-command-line-switches) per le compilazioni da riga di comando, l'ambiente configurato da vcvarsall.bat o altri file di comando non influirà sulle compilazioni, a meno che non è inoltre possibile specificare il **/useenv** opzione.  

## <a name="command-line-tools"></a>Strumenti da riga di comando
  
Per compilare un progetto C/C++ nella riga di comando, è possibile utilizzare questi strumenti da riga di comando di Visual C++:  
  
[CL](../build/reference/compiling-a-c-cpp-program.md)  
Usare il compilatore (cl.exe) per compilare e collegare file del codice sorgente in app, librerie e DLL.  
  
[Collegamento](../build/reference/linking.md)  
Usare il linker (link.exe) per collegare file oggetto e librerie compilati in app e DLL.  
  
[MSBuild (Visual C++)](../build/msbuild-visual-cpp.md)  
Usare MSBuild (msbuild.exe) per compilare progetti di Visual C++ e [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] soluzioni. Ciò equivale all'esecuzione di **compilare** progetto o **Compila soluzione** comando il [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] IDE.  
  
[DEVENV](/visualstudio/ide/reference/devenv-command-line-switches)  
Usare DEVENV (devenv.exe) combinato con un'opzione della riga di comando, ad esempio, **Compila** o **/Clean**: per eseguire determinati comandi di compilazione senza visualizzare il [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] IDE.  
  
[NMAKE](../build/nmake-reference.md)  
Usare NMAKE (nmake.exe) per automatizzare le attività di compilazione di progetti di Visual C++ tramite un makefile tradizionale.  
  
Quando si compila dalla riga di comando, è possibile ottenere informazioni sugli avvisi, errori e messaggi. Avviare [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] e quindi nella barra dei menu, scegliere **Guida**, **ricerca**.  
  
## <a name="in-this-section"></a>In questa sezione  

Negli articoli inclusi in questa sezione della documentazione viene illustrato come compilare app nella riga di comando, viene descritto come personalizzare l'ambiente di compilazione da riga di comando per usare i set di strumenti a 64 bit e le piattaforme x86, x64 e ARM e vengono fornite informazioni su come usare gli strumenti di sviluppo da riga di comando MSBuild e NMAKE.  
  
[Procedura dettagliata: compilazione di un programma C++ nativo nella riga di comando](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md)  
Presenta un esempio in cui viene illustrato come creare e compilare un semplice programma C++ nella riga di comando.  
  
[Procedura dettagliata: Compilare un programma C nella riga di comando](../build/walkthrough-compile-a-c-program-on-the-command-line.md)  
Descrive come compilare un programma nel linguaggio di programmazione C.  
  
[Procedura dettagliata: Compilazione di un programma in C++/CLI dalla riga di comando](../build/walkthrough-compiling-a-cpp-cli-program-on-the-command-line.md)  
Descrive come creare e compilare un programma C++/CLI che usa .NET Framework.  
  
[Procedura dettagliata: Compilazione di un programma in C++/CX dalla riga di comando](../build/walkthrough-compiling-a-cpp-cx-program-on-the-command-line.md)  
Descrive come creare e compilare un programma C++/CX che usa Windows Runtime.  
  
[Impostare le variabili di percorso e di ambiente per le compilazioni da riga di comando](../build/setting-the-path-and-environment-variables-for-command-line-builds.md)  
Viene descritto come avviare una finestra del prompt dei comandi con le variabili di ambiente necessarie impostato per le compilazioni da riga di comando che hanno come destinazione x86, x64 e ARM piattaforme usando un set di strumenti a 32 o 64 bit.  
  
[Riferimenti a NMAKE](../build/nmake-reference.md)  
Fornisce collegamenti ad articoli in cui viene descritta l'utilità Microsoft Program Maintenance Utility (NMAKE.EXE).  
  
[MSBuild (Visual C++)](../build/msbuild-visual-cpp.md)  
Fornisce collegamenti ad articoli in cui vengono descritte le modalità di utilizzo di MSBuild.exe.  
  
## <a name="related-sections"></a>Sezioni correlate  

[/MD, /MT, /LD (uso della libreria di runtime)](../build/reference/md-mt-ld-use-run-time-library.md)  
Descrive come usare queste opzioni del compilatore per l'utilizzo di una libreria di runtime di debug o di rilascio.  
  
[Opzioni del compilatore C/C++](../build/reference/compiler-options.md)  
Fornisce collegamenti ad articoli in cui vengono descritte le opzioni del compilatore C e C++ e fornite informazioni su CL.exe.  
  
[Opzioni del linker](../build/reference/linker-options.md)  
Fornisce collegamenti ad articoli in cui vengono descritte le opzioni del linker e fornite informazioni su CL.exe.  
  
[Strumenti per la compilazione in C/C++](../build/reference/c-cpp-build-tools.md)  
Fornisce collegamenti agli strumenti di sviluppo per C/C++ inclusi in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
## <a name="see-also"></a>Vedere anche  

[Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)