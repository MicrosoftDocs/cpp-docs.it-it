---
title: Usare il set di strumenti MSVC dalla riga di comando - Visual Studio
description: Usare la toolchain del compilatore Microsoft C++ (MSVC) dalla riga di comando all'esterno dell'ambiente di sviluppo integrato (IDE) di Visual Studio.
ms.custom: conceptual
ms.date: 05/16/2019
helpviewer_keywords:
- command-line builds [C++]
- compiling source code [C++], command line
- builds [C++], command-line
- command line [C++], building from
- command line [C++], compilers
ms.assetid: 7ca9daed-a003-4162-842d-908f79058365
ms.openlocfilehash: 97626455ace0d3ad47b9011594e82c144d7ea27d
ms.sourcegitcommit: a10c9390413978d36b8096b684d5ed4cf1553bc8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/17/2019
ms.locfileid: "65837122"
---
# <a name="use-the-msvc-toolset-from-the-command-line"></a>Usare il set di strumenti MSVC dalla riga di comando

È possibile compilare applicazioni C e C++ dalla riga di comando usando gli strumenti inclusi in Visual Studio. È anche possibile scaricare il set di strumenti del compilatore come pacchetto autonomo dalla pagina di [download di Visual Studio](https://visualstudio.microsoft.com/downloads/). Fa parte del pacchetto **Build Tools per Visual Studio** ed è possibile scegliere di scaricare solo gli strumenti necessari per lo sviluppo in C++.

## <a name="how-to-use-the-command-line-tools"></a>Come usare gli strumenti da riga di comando

Quando si sceglie uno dei carichi di lavoro di C++ nel programma di installazione di Visual Studio, verrà installato il *set di strumenti della piattaforma* di Visual Studio. Un set di strumenti della piattaforma dispone di tutti gli strumenti C e C++ per una specifica versione di Visual Studio, tra cui compilatori, linker, assembler e altri strumenti di compilazione C /C++, oltre alle librerie corrispondenti. È possibile usare tutti questi strumenti dalla riga di comando, nonché internamente dall'IDE di Visual Studio. Esistono strumenti e compilatori separati ospitati da piattaforme x86 e x64 per compilare il codice per destinazioni x86, x64, ARM e ARM64. Ogni set di strumenti per un'architettura di compilazione per un host e una destinazione specifici viene archiviato nella relativa directory.

I set di strumenti del compilatore che vengono installati dipendono dal processore del computer e dalle opzioni selezionate durante l'installazione. Come minimo, vengono installati gli strumenti ospitati da piattaforme x86 a 32 bit che compilano codice nativo x86 a 32 bit e strumenti che compilano codice nativo x64 a 64 bit. Se si usa Windows a 64 bit, vengono installati anche gli strumenti ospitati da piattaforme x64 a 64 bit che compilano codice nativo a 64 bit e strumenti che compilano codice nativo a 32 bit. Se si sceglie di installare gli strumenti opzionali della piattaforma UWP (Universal Windows Platform) per C++, vengono installati anche gli strumenti nativi a 32 e a 64 bit che compilano codice ARM. Altri carichi di lavoro possono installare strumenti aggiuntivi.

## <a name="environment-variables-and-developer-command-prompts"></a>Variabili di ambiente e prompt dei comandi per gli sviluppatori

Per funzionare correttamente, gli strumenti richiedono l'impostazione di diverse variabili di ambiente specifiche, che vengono usate per l'aggiunta al percorso e l'impostazione della posizione di file, file di libreria e SDK. Per semplificare l'impostazione di queste variabili di ambiente, il programma di installazione crea *file di comando* personalizzati, o file batch, durante l'installazione. È possibile eseguire uno di questi file di comando in una finestra del prompt dei comandi per impostare un'architettura di compilazione, una versione di Windows SDK, una piattaforma di destinazione e un set strumenti della piattaforma per un host e una destinazione specifici. Per praticità, il programma di installazione crea anche collegamenti nel menu Start che avviano le finestre del prompt dei comandi per gli sviluppatori usando questi file di comando, in modo che tutte le variabili di ambiente richieste siano impostate e pronte all'uso.

Le variabili di ambiente richieste sono specifiche per l'installazione e per l'architettura di compilazione scelta e potrebbero essere modificate da aggiornamenti del prodotto. Pertanto, è consigliabile usare uno dei file di comando o dei collegamenti del prompt dei comandi installati invece di impostare le variabili di ambiente in Windows manualmente. Per altre informazioni, vedere [Impostare le variabili di percorso e di ambiente per le compilazioni da riga di comando](setting-the-path-and-environment-variables-for-command-line-builds.md).

## <a name="developer_command_prompt_shortcuts"></a> Collegamenti del prompt dei comandi per gli sviluppatori

I collegamenti del prompt dei comandi vengono installati in una cartella di Visual Studio specifica per la versione nel menu Start. Ecco un elenco dei collegamenti del prompt dei comandi principali e delle architetture di compilazione supportate:

- **Prompt dei comandi per gli sviluppatori**: imposta l'ambiente per l'uso di strumenti nativi x86 a 32 bit per compilare codice nativo x86 a 32 bit.
- **Prompt dei comandi degli strumenti nativi x86**: imposta l'ambiente per l'uso di strumenti nativi x86 a 32 bit per compilare codice nativo x86 a 32 bit.
- **Prompt dei comandi degli strumenti nativi x64**: imposta l'ambiente per l'uso di strumenti nativi x64 a 64 bit per compilare codice nativo x64 a 64 bit.
- **Prompt dei comandi degli strumenti x86_x64**: imposta l'ambiente per l'uso di strumenti nativi x86 a 32 bit per compilare codice nativo x64 a 64 bit.
- **Prompt dei comandi degli strumenti x64_x86**: imposta l'ambiente per l'uso di strumenti nativi x64 a 64 bit per compilare codice nativo x86 a 32 bit.

I nomi effettivi dei collegamenti e delle cartelle del menu Start variano a seconda della versione di Visual Studio installata e del nome alternativo dell'installazione, se impostato. Ad esempio, se è installato Visual Studio 2019 ed è stato assegnato il nome alternativo dell'installazione *Anteprima*, il collegamento del prompt dei comandi per gli sviluppatori sarà denominato **Prompt dei comandi per gli sviluppatori per VS 2019**, in una cartella denominata **Visual Studio 2019**.

## <a name="developer_command_prompt"></a> Per aprire una finestra del prompt dei comandi per gli sviluppatori

1. Sul desktop aprire il menu **Start** di Windows e quindi scorrerlo per trovare e aprire la cartella per la versione di Visual Studio in uso, ad esempio **Visual Studio 2019**. In alcune versioni precedenti di Visual Studio i collegamenti si trovano in una sottocartella chiamata **Strumenti di Visual Studio**.

1. Nella cartella scegliere il **Prompt dei comandi per gli sviluppatori** per la versione di Visual Studio in uso. Questo collegamento avvia una finestra del prompt dei comandi per gli sviluppatori che usa l'architettura di compilazione predefinita di strumenti nativi x86 a 32 bit per compilare codice nativo x86 a 32 bit. Se si preferisce un'architettura di compilazione non predefinita, scegliere uno dei prompt dei comandi degli strumenti nativi o incrociati per specificare l'architettura host e di destinazione.

Un modo ancora più rapido per aprire una finestra del prompt dei comandi per gli sviluppatori è quello di immettere *prompt dei comandi per gli sviluppatori* nella casella di ricerca sul desktop e quindi scegliere il risultato desiderato.

## <a name="developer_command_file_locations"></a> Percorsi dei file di comando per gli sviluppatori

Se si preferisce impostare l'ambiente dell'architettura di compilazione in una finestra del prompt dei comandi esistente, è possibile usare uno dei file di comando (file batch) creati dal programma di installazione per configurare l'ambiente richiesto. È opportuno eseguire questa operazione solo in una nuova finestra del prompt dei comandi e non è consigliabile cambiare ambiente successivamente nella stessa finestra di comando. Il percorso di questi file dipende dalla versione di Visual Studio installata e dalle scelte relative alla posizione e alla denominazione effettuate durante l'installazione. Per Visual Studio 2019, il percorso di installazione tipico in un computer a 64 bit è in \Programmi (x86)\Microsoft Visual Studio\2019\*edizione*, dove *edizione* può essere Community, Professional, Enterprise, BuildTools o un altro nome specificato dall'utente. Il percorso di Visual Studio 2017 è simile. Per Visual Studio 2015, il percorso di installazione tipico è in \Programmi (x86)\Microsoft Visual Studio 14.0.

Il file di comando primario del prompt dei comandi per gli sviluppatori, VsDevCmd.bat, si trova nella sottodirectory Common7\Tools della directory di installazione. Quando non si specifica alcun parametro, l'ambiente e l'architettura di compilazione host e di destinazione vengono impostati per l'uso di strumenti nativi x86 a 32 bit per compilare codice x86 a 32 bit.

Sono disponibili file di comando aggiuntivi per configurare specifiche architetture di compilazione, a seconda dell'architettura del processore e delle opzioni e dei carichi di lavoro di Visual Studio installati. In Visual Studio 2017 e Visual Studio 2019 si trovano nella sottodirectory VC\Auxiliary\Build della directory di installazione di Visual Studio. In Visual Studio 2015 si trovano nelle sottodirectory VC, VC\bin o VC\bin\\*architetture* della directory di installazione, dove *architetture* è una delle opzioni del compilatore incrociato o nativo. Questi file di comando impostano i parametri predefiniti e chiamano VsDevCmd.bat per configurare l'ambiente dell'architettura di compilazione specificato. Un'installazione tipica può includere questi file di comando:

|File di comando|Architetture host e di destinazione|
|---|---|
|**vcvars32.bat**| Usare gli strumenti nativi x86 a 32 bit per compilare codice x86 a 32 bit.|
|**vcvars64.bat**| Usare gli strumenti nativi x64 a 64 bit per compilare codice x64 a 64 bit.|
|**vcvarsx86_amd64.bat**| Usare gli strumenti nativi x86 a 32 bit per compilare codice x64 a 64 bit.|
|**vcvarsamd64_x86.bat**| Usare gli strumenti nativi x64 a 64 bit per compilare codice x86 a 32 bit.|
|**vcvarsx86_arm.bat**| Usare gli strumenti nativi x86 a 32 bit per compilare codice ARM.|
|**vcvarsamd64_arm.bat**| Usare gli strumenti nativi x64 a 64 bit per compilare codice ARM.|
|**vcvarsall.bat**| Usare i parametri per specificare le architetture host e di destinazione, nonché le opzioni relative a SDK e piattaforma. Per un elenco delle opzioni supportate, eseguire una chiamata usando un parametro **/help**.|

> [!CAUTION]
> Il file vcvarsall.bat e altri file di comando di Visual Studio possono variare da computer a computer. Non sostituire un file vcvarsall.bat mancante o danneggiato usando un file da un altro computer. Eseguire nuovamente il programma di installazione di Visual Studio per sostituire il file mancante.
>
> Il file vcvarsall.bat varia anche da versione a versione. Se la versione corrente di Visual Studio è installata in un computer che include anche una versione precedente di Visual Studio, non eseguire vcvarsall.bat o un altro file di comando di Visual Studio da diverse versioni nella stessa finestra del prompt dei comandi.

## <a name="use-the-developer-tools-in-an-existing-command-window"></a>Usare gli strumenti di sviluppo in una finestra di comando esistente

Il modo più semplice per specificare un'architettura di compilazione specifica in una finestra di comando esistente è quello di usare il file vcvarsall.bat. È possibile usare vcvarsall.bat per impostare le variabili di ambiente per configurare la riga di comando per la compilazione nativa a 32 bit o a 64 bit oppure per la compilazione incrociata per processori x86, x64 o ARM, oltre che per usare le piattaforme Microsoft Store, UWP (Universal Windows Platform) o Windows Desktop come destinazione, per specificare quale Windows SDK usare e per specificare la versione del set di strumenti della piattaforma. Se non vengono forniti argomenti, vcvarsall.bat configura le variabili di ambiente per usare il compilatore nativo a 32 bit corrente per le destinazioni Windows Desktop x86. È tuttavia possibile usarlo per configurare qualsiasi strumento del compilatore nativo o incrociato. Se si specifica una configurazione del compilatore che non è installata o non è disponibile nell'architettura di compilazione del computer, viene visualizzato un messaggio di errore.

### <a name="vcvarsall-syntax"></a>Sintassi di vcvarsall

> **vcvarsall.bat** [*architecture*] [*platform_type*] [*winsdk_version*] [**-vcvars_ver=**_vcversion_]

*architecture*<br/>
Questo argomento facoltativo specifica l'architettura host e di destinazione da usare. Se non si specifica *architecture*, verrà usato l'ambiente di compilazione predefinito. Sono supportati questi argomenti:

|*architecture*|Compilatore|Architettura del computer host|Architettura dell'output di compilazione (destinazione)|
|----------------------------|--------------|----------------------------------|-------------------------------|
|**x86**|x86 nativo a 32 bit|x86, x64|x86|
|**x86\_amd64** o **x86\_x64**|x64 su x86 (incrociato)|x86, x64|X64|
|**x86_arm**|ARM su x86 (incrociato)|x86, x64|ARM|
|**x86_arm64**|ARM64 su x86 (incrociato)|x86, x64|ARM64|
|**amd64** o **x64**|x64 nativo a 64 bit|X64|X64|
|**amd64\_x86** o **x64\_x86**|x86 su x64 (incrociato)|X64|x86|
|**amd64\_arm** o **x64\_arm**|ARM su x64 (incrociato)|X64|ARM|
|**amd64\_arm64** o **x64\_arm64**|ARM64 su x64 (incrociato)|X64|ARM64|

*platform_type*<br/>
Questo argomento facoltativo consente di specificare **store** o **uwp** come tipo di piattaforma. Per impostazione predefinita, l'ambiente è impostato per la compilazione di app desktop o console.

*winsdk_version*<br/>
Facoltativamente, specifica la versione di Windows SDK da usare. Per impostazione predefinita, viene usata la versione più recente di Windows SDK installata. Per specificare la versione di Windows SDK, è possibile usare un numero completo di Windows 10 SDK, come **10.0.10240.0**, oppure specificare **8.1** per usare Windows 8.1 SDK.

*vcversion*<br/>
Facoltativamente, specifica il set di strumenti del compilatore di Visual Studio da usare. Per impostazione predefinita, l'ambiente è impostato per l'uso del set di strumenti del compilatore di Visual Studio corrente. Usare **-vcvars_ver=14.0** per specificare il set di strumenti del compilatore di Visual Studio 2015 oppure **-vcvars_ver=15.0** per specificare il set di strumenti del compilatore di Visual Studio 2017.

<a name="vcvarsall"></a>
#### <a name="to-set-up-the-build-environment-in-an-existing-command-prompt-window"></a>Per configurare l'ambiente di compilazione in una finestra del prompt dei comandi esistente

1. Al prompt dei comandi usare il comando CD per passare alla directory di installazione di Visual Studio. Quindi, usare nuovamente CD per passare alla sottodirectory contenente i file di comando specifici della configurazione. Per Visual Studio 2017 e Visual Studio 2019, si tratta della sottodirectory VC\Auxiliary\Build. Per Visual Studio 2015, usare la sottodirectory VC.

1. Immettere il comando per l'ambiente di sviluppo preferito. Ad esempio, per compilare codice ARM per la piattaforma UWP su una piattaforma a 64 bit usando la versione più recente di Windows SDK e il set di strumenti del compilatore di Visual Studio 2019, usare la riga di comando seguente:

   `vcvarsall.bat amd64_arm uwp`

## <a name="create-your-own-command-prompt-shortcut"></a>Creare un collegamento del prompt dei comandi personalizzato

Se si apre la finestra di dialogo Proprietà per uno dei collegamenti esistenti del prompt dei comandi per gli sviluppatori, è possibile vedere la destinazione del comando usata. Ad esempio, la destinazione per il collegamento **Prompt dei comandi degli strumenti nativi x64 per VS 2019** è simile a:

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvars64.bat"`

I file batch specifici dell'architettura impostano il parametro *architecture* e chiamano vcvarsall.bat. È possibile passare le stesse opzioni aggiuntive a questi file batch come si farebbe con vcvarsall.bat o, in alternativa, è possibile chiamare direttamente vcvarsall.bat. Per specificare i parametri per il proprio collegamento del prompt dei comandi, aggiungerli alla fine del comando tra virgolette doppie. Ad esempio, per configurare un collegamento per la compilazione di codice ARM per la piattaforma UWP su una piattaforma a 64 bit usando la versione più recente di Windows SDK e un set di strumenti del compilatore precedente rispetto alla versione corrente, è necessario specificare il numero di versione. Usare una destinazione del comando simile alla seguente nel collegamento:

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvarsall.bat amd64_arm uwp -vcvars_ver=15.0"`

È necessario modificare il percorso in modo da riflettere la directory di installazione di Visual Studio. Il file vcvarsall.bat contiene altre informazioni sui numeri di versione specifici.

## <a name="command-line-tools"></a>Strumenti da riga di comando

Per compilare un progetto C/C++ nella riga di comando, Visual Studio offre questi strumenti da riga di comando:

[CL](reference/compiling-a-c-cpp-program.md)<br/>
Usare il compilatore (cl.exe) per compilare e collegare file del codice sorgente in app, librerie e DLL.

[Collegamento](reference/linking.md)<br/>
Usare il linker (link.exe) per collegare file oggetto e librerie compilati in app e DLL.

[MSBuild](msbuild-visual-cpp.md)<br/>
Usare MSBuild (msbuild.exe) e un file di progetto (.vcxproj) per configurare una compilazione e richiamare indirettamente il set di strumenti. Equivale a eseguire il comando **Compila progetto** o **Compila soluzione** nell'IDE di Visual Studio. L'esecuzione di MSBuild dalla riga di comando è uno scenario avanzato e in genere è sconsigliata.

[DEVENV](/visualstudio/ide/reference/devenv-command-line-switches)<br/>
Usare DEVENV (devenv.exe) in combinazione con un'opzione della riga di comando, ad esempio **/Build** o **/Clean** per eseguire determinati comandi di compilazione senza visualizzare l'IDE di Visual Studio. In genere, è preferibile rispetto all'uso diretto di MSBuild perché delega a Visual Studio la gestione delle complessità di MSBuild.

[NMAKE](reference/nmake-reference.md)<br/>
Usare NMAKE (nmake.exe) in Windows per compilare progetti C++ basati su un makefile tradizionale.

Quando si compila dalla riga di comando, il comando F1 non è disponibile per il supporto immediato. In alternativa, è possibile usare un motore di ricerca per ottenere informazioni su avvisi, errori e messaggi oppure è possibile usare i file della Guida offline. Per usare la ricerca in [docs.microsoft.com](https://docs.microsoft.com/cpp/), immettere la stringa di ricerca nella casella di ricerca nella parte superiore della pagina.

## <a name="in-this-section"></a>In questa sezione

Negli articoli inclusi in questa sezione della documentazione viene illustrato come compilare app nella riga di comando, viene descritto come personalizzare l'ambiente di compilazione da riga di comando per usare i set di strumenti a 64 bit e le piattaforme x86, x64 e ARM e vengono fornite informazioni su come usare gli strumenti di sviluppo da riga di comando MSBuild e NMAKE.

[Procedura dettagliata: Compilazione di un programma C++ nativo nella riga di comando](walkthrough-compiling-a-native-cpp-program-on-the-command-line.md)<br/>
Presenta un esempio in cui viene illustrato come creare e compilare un semplice programma C++ nella riga di comando.

[Procedura dettagliata: Compilare un programma in C dalla riga di comando](walkthrough-compile-a-c-program-on-the-command-line.md)<br/>
Descrive come compilare un programma nel linguaggio di programmazione C.

[Procedura dettagliata: Compilazione di un programma in C++/CLI dalla riga di comando](walkthrough-compiling-a-cpp-cli-program-on-the-command-line.md)<br/>
Descrive come creare e compilare un programma C++/CLI che usa .NET Framework.

[Procedura dettagliata: Compilazione di un programma in C++/CX dalla riga di comando](walkthrough-compiling-a-cpp-cx-program-on-the-command-line.md)<br/>
Descrive come creare e compilare un programma C++/CX che usa Windows Runtime.

[Impostare le variabili di percorso e di ambiente per le compilazioni da riga di comando](setting-the-path-and-environment-variables-for-command-line-builds.md)<br/>
Descrive come avviare una finestra del prompt dei comandi in cui sono impostate le variabili di ambiente necessarie per la compilazione da riga di comando per le piattaforme x86, x64 e ARM con un set di strumenti a 32 o 64 bit.

[Riferimenti a NMAKE](reference/nmake-reference.md)<br/>
Fornisce collegamenti ad articoli in cui viene descritta l'utilità Microsoft Program Maintenance Utility (NMAKE.EXE).

[MSBuild dalla riga di comando - C++](msbuild-visual-cpp.md)<br/>
Fornisce collegamenti ad articoli in cui vengono descritte le modalità di utilizzo di msbuild.exe dalla riga di comando.

## <a name="related-sections"></a>Sezioni correlate

[/MD, /MT, /LD (uso della libreria di runtime)](reference/md-mt-ld-use-run-time-library.md)<br/>
Descrive come usare queste opzioni del compilatore per l'utilizzo di una libreria di runtime di debug o di rilascio.

[Opzioni del compilatore C/C++](reference/compiler-options.md)<br/>
Fornisce collegamenti ad articoli in cui vengono descritte le opzioni del compilatore C e C++ e fornite informazioni su CL.exe.

[Opzioni del linker MSVC](reference/linker-options.md)<br/>
Fornisce collegamenti ad articoli in cui vengono descritte le opzioni del linker e fornite informazioni su CL.exe.

[Strumenti di compilazione aggiuntivi MSVC](reference/c-cpp-build-tools.md)<br/>
Fornisce collegamenti agli strumenti di compilazione per C/C++ inclusi in Visual Studio.

## <a name="see-also"></a>Vedere anche

[Progetti e sistemi di compilazione](projects-and-build-systems-cpp.md)