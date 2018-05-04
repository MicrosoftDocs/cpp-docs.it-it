---
title: Compilare il codice C/C++ nella riga di comando | Documenti Microsoft
ms.custom: conceptual
ms.date: 03/29/2018
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- command-line builds [C++]
- compiling source code [C++], command line
- builds [C++], command-line
- command line [C++], building from
- command line [C++], compilers
ms.assetid: 7ca9daed-a003-4162-842d-908f79058365
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d1e02ea59ffc5a4ece71d2790b2ebb6a953ed682
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="build-cc-code-on-the-command-line"></a>Compilare il codice C/C++ nella riga di comando

È possibile compilare applicazioni C e C++ nella riga di comando utilizzando gli strumenti inclusi in Visual Studio.

## <a name="how-to-get-the-command-line-tools"></a>Come ottenere gli strumenti da riga di comando

Quando si sceglie uno dei carichi di lavoro C++ in Visual Studio Installer, viene installato Visual Studio *set strumenti della piattaforma*. Un set di strumenti della piattaforma sono gli strumenti di tutti i C e C++ per una determinata versione di Visual Studio, inclusi i compilatori C/C++, i linker, assembler e altri strumenti di compilazione, nonché le librerie corrispondenti. È possibile utilizzare tutti questi strumenti della riga di comando e vengono inoltre usati internamente dall'IDE di Visual Studio. Esistono separati i compilatori ospitati da x86 e x64 ospitati e strumenti per compilare il codice per x86, x64, ARM e ARM64 destinazioni. Ogni set di strumenti per una particolare architettura di host e la destinazione build viene archiviato nella propria directory.

Per funzionare correttamente, gli strumenti richiedono diverse variabili di ambiente da impostare. Questi vengono utilizzati per aggiungerli al percorso e impostare includono file, file di libreria e percorsi del SDK. Per rendere semplice impostare queste variabili di ambiente, il programma di installazione crea personalizzato *file di comando*, o i file, batch durante l'installazione. È possibile eseguire uno di questi file di comando in una finestra del prompt dei comandi per impostare un host specifico e architettura di destinazione build, versione di Windows SDK, piattaforma di destinazione e set di strumenti della piattaforma. Per comodità, il programma di installazione crea inoltre collegamenti nel menu di avvio (o alla pagina iniziale in Windows 8. x) windows prompt dei comandi per sviluppatori che iniziano con questi file di comando, pertanto tutte le variabili di ambiente necessarie sono impostata e pronto per l'utilizzo.

Le variabili di ambiente necessarie sono specifiche per l'installazione e l'architettura di compilazione scegliere e potrebbero essere modificate da aggiornamenti del prodotto. Pertanto, è consigliabile utilizzare uno dei prompt dei comandi installati collegamenti o file di comando anziché impostare manualmente le variabili di ambiente in Windows. Per ulteriori informazioni, vedere [impostare il percorso e le variabili di ambiente per la compilazione da riga di comando](../build/setting-the-path-and-environment-variables-for-command-line-builds.md).

Il set di strumenti della riga di comando, i file di comando e i collegamenti di prompt dei comandi installati dipendono dal processore del computer e le opzioni selezionate durante l'installazione. Come minimo, vengono installati gli strumenti di ospitati da x86 a 32 bit che compilare codice nativo x86 a 32 bit e tra gli strumenti di compilazione di codice nativo x64 a 64 bit. Se si dispone di Windows a 64 bit, vengono installati anche gli strumenti basati su x64 a 64 bit che codice nativo a 64 bit di compilazione e tra gli strumenti di compilazione di codice nativo a 32 bit. Se si sceglie di installare gli strumenti di C++ Universal Windows Platform facoltativi, vengono installati anche gli strumenti nativi di 32 bit e 64 bit di compilazione di codice ARM. Altri carichi di lavoro è possibile installare altri strumenti.

## <a name="developer-command-prompt-shortcuts"></a>Tasti di scelta rapida prompt dei comandi per sviluppatori

Collegamenti di prompt dei comandi vengono installati in una cartella specifica della versione Visual Studio nel menu Start. Di seguito è riportato un elenco di collegamenti il prompt dei comandi di base e le architetture di compilazione che supportano:

- **Prompt dei comandi sviluppatore** -imposta l'ambiente da utilizzare strumenti nativi x86 a 32 bit per compilare il codice a 32 bit, nativo x86.
- **x86 prompt dei comandi degli strumenti nativi** -imposta l'ambiente da utilizzare strumenti nativi x86 a 32 bit per compilare il codice a 32 bit, nativo x86.
- **x64 prompt dei comandi degli strumenti nativi** -imposta l'ambiente da utilizzare strumenti a 64 bit, x64 nativo per compilare il codice a 64 bit, x64 nativo.
- **x86_x64 Cross prompt dei comandi** -imposta l'ambiente da utilizzare strumenti nativi x86 a 32 bit per compilare il codice a 64 bit, x64 nativo.
- **x64_x86 Cross prompt dei comandi** -imposta l'ambiente da utilizzare strumenti a 64 bit, x64 nativo per compilare il codice a 32 bit, nativo x86.

I nomi effettivi di cartella e il collegamento dello menu Start variano a seconda la versione di Visual Studio è stato installato e l'installazione di nome alternativo se si imposta uno. Ad esempio, se si dispone di Visual Studio 2017 installato ed è stato specificato è un'installazione nome alternativo del *anteprima*, il collegamento del prompt dei comandi per sviluppatori è denominato **prompt dei comandi per sviluppatori per Visual Studio 2017 (anteprima)**, in una cartella denominata **Visual Studio 2017**.

Se è stato installato il [Build Tools per Visual Studio 2017](https://go.microsoft.com/fwlink/p/?linkid=840931) (che include anche il set di strumenti del compilatore di Visual Studio 2015 Update 3), solo la specifica dell'architettura nativa o tra prompt dei comandi sviluppatore vengono installate le opzioni degli strumenti e non generali **prompt dei comandi sviluppatore** scelta rapida.

<a name="developer_command_prompt"></a>
### <a name="to-open-a-developer-command-prompt-window"></a>Per aprire una finestra del prompt dei comandi per sviluppatori

1. Sul desktop, aprire le finestre **avviare** menu e quindi scorrere l'elenco per trovare e aprire la cartella per la versione di Visual Studio, ad esempio, **Visual Studio 2017**. In alcune versioni precedenti di Visual Studio, i collegamenti sono in una sottocartella denominata **Visual Studio Tools**.

1. Nella cartella, scegliere il **prompt dei comandi per sviluppatori** per la versione di Visual Studio. Questo collegamento verrà avviata una finestra prompt dei comandi per gli sviluppatori che utilizza l'architettura di compilazione predefinito di strumenti nativi x86 a 32 bit per compilare il codice a 32 bit, nativo x86. Se si preferisce un'architettura di compilazione non predefinito, scegliere una delle nativo o strumenti di prompt dei comandi per specificare l'architettura di host e di destinazione.

È un modo più veloce per aprire una finestra del prompt dei comandi per sviluppatori di immettere *prompt dei comandi per sviluppatori* nella casella di ricerca desktop, quindi scegliere il risultato desiderato.

## <a name="developer-command-files-and-locations"></a>Percorsi e i file di comando per sviluppatori

Se si preferisce impostare l'ambiente di architettura di compilazione in una finestra prompt dei comandi esistente, è possibile utilizzare uno dei file di comando (file batch) creato dal programma di installazione per impostare l'ambiente necessario. È consigliabile solo per eseguire questa operazione in una nuova finestra del prompt dei comandi e non è consigliabile per ambienti commutatore successive nella stessa finestra di comando. Il percorso di questi file dipende dalla versione di Visual Studio è stato installato e dal percorso e denominazione le scelte effettuate durante l'installazione. Per Visual Studio 2017, il percorso di installazione tipica in un computer a 64 bit è \Programmi file (x86) \Microsoft Visual Studio\2017\\*edition*, dove *edition* potrebbe essere Community, Professional, Enterprise, BuildTools o un altro nome specificato. Per Visual Studio 2015, il percorso di installazione tipico è \Programmi (x86) \Microsoft Visual Studio 14.0.

Il file di comando prompt dei comandi per sviluppatori primario, VsDevCmd.bat, si trova nella sottodirectory Common7\Tools della directory di installazione. Quando viene specificato alcun parametro, si imposta l'ambiente e l'host e la destinazione build architettura per utilizzare gli strumenti nativi x86 a 32 bit per x86 a 32 bit di compilazione codice.

File di comando aggiuntive sono disponibili per impostare le architetture di compilazione specifica, a seconda dell'architettura di processore e i carichi di lavoro di Visual Studio e le opzioni che è stato installato. In Visual Studio 2017, queste si trovano nella sottodirectory VC\Auxiliary\Build della directory di installazione di Visual Studio. In Visual Studio 2015, si trovano in VC\bin, VC o VC\bin\\*architetture* le sottodirectory della directory di installazione, dove *architetture* fa parte di nativo o opzioni di compilatore incrociato. Questi file di comando impostare i parametri predefiniti e chiamare vsdevcmd. bat per configurare l'ambiente di compilazione specificata architettura. Un'installazione tipica potrebbe includere questi file di comando:

|File di comando|Architetture di host e di destinazione|
|---|---|
|**vcvars32.bat**| Utilizzare gli strumenti nativi x86 a 32 bit per compilazione x86 a 32 bit codice.|
|**vcvars64.bat**| Utilizzare gli strumenti nativi x64 a 64 bit a 64 bit x64 di compilazione codice.|
|**vcvarsx86_amd64.bat**| Utilizzare gli strumenti di cross nativi x86 a 32 bit a 64 bit x64 di compilazione codice.|
|**vcvarsamd64_x86.bat**| Utilizzare gli strumenti di cross bit nativi x64 a 64 bit per x86 a 32 bit di compilazione codice.|
|**vcvarsx86_arm.bat**| Utilizzare gli strumenti di cross nativi x86 a 32 bit per compilare il codice ARM.|
|**vcvarsamd64_arm.bat**| Utilizzare gli strumenti di cross bit nativi x64 a 64 bit per compilare il codice ARM.|
|**vcvarsall.bat**| Utilizzare i parametri per specificare l'host e architetture di destinazione, nonché le opzioni di SDK e piattaforma. Per un elenco delle opzioni supportate, chiamare utilizzando un **/Help** parametro.|

> [!CAUTION]
> Il file vcvarsall. bat e altri file di comando di Visual Studio possono variare da computer a computer. Non sostituire un file vcvarsall.bat mancante o danneggiato usando un file da un altro computer. Eseguire di nuovo il programma di installazione di Visual Studio per sostituire il file mancante.
>
> Il file vcvarsall.bat varia anche da versione a versione. Se la versione corrente di Visual Studio è installata in un computer che dispone anche di una versione precedente di Visual Studio, non eseguire vcvarsall. bat o un altro file di comando di Visual Studio da diverse versioni nella stessa finestra del prompt dei comandi.

## <a name="use-the-developer-tools-in-an-existing-command-window"></a>Utilizzare gli strumenti di sviluppo in una finestra di comando esistente

Il modo più semplice per specificare un'architettura di compilazione specifica in una finestra di comando esistente è utilizzare il file vcvarsall.bat. È possibile utilizzare vcvarsall.bat per impostare le variabili di ambiente per configurare la riga di comando per la compilazione nativa a 32 o 64 bit, o per la compilazione incrociata per x86, x64 o processori ARM; destinazione Microsoft Store, piattaforma Windows universale o piattaforme Desktop di Windows; Per specificare quali SDK di Windows da utilizzare; e per specificare la versione del set di strumenti della piattaforma. Se non sono forniti argomenti, il file vcvarsall.bat Configura le variabili di ambiente per usare il compilatore nativo a 32 bit corrente per x86 destinazioni Windows Desktop. Tuttavia, è possibile utilizzare per configurare qualsiasi di nativo o tra gli strumenti di compilazione. Se si specifica una configurazione del compilatore che non è installata o non è disponibile nell'architettura del computer, viene visualizzato un messaggio di errore.

### <a name="vcvarsall-syntax"></a>sintassi di vcvarsall

> **vcvarsall.bat** [*architecture*] [*platform_type*] [*winsdk_version*] [**-vcvars_ver=**_vcversion_]

*architettura*<br/>
Questo argomento facoltativo specifica l'architettura di host e di destinazione da utilizzare. Se *architettura* viene omesso, viene usato l'ambiente di compilazione predefinito. Questi argomenti sono supportati:

|*architettura*|Compilatore|Architettura del computer host|Compilare l'architettura dell'output (destinazione)|
|----------------------------|--------------|----------------------------------|-------------------------------|
|**x86**|x86 nativo a 32 bit|x86, x64|x86|
|**x86\_amd64** oppure **x86\_x64**|x64 su x86 (incrociato)|x86, x64|X64|
|**x86_arm**|ARM su x86 (incrociato)|x86, x64|ARM|
|**x86_arm64**|ARM64 su x86 (incrociato)|x86, x64|ARM64|
|**AMD64** o **x64**|x64 nativo a 64 bit|X64|X64|
|**AMD64\_x86** oppure **x64\_x86**|x86 su x64|X64|x86|
|**AMD64\_arm** oppure **x64\_arm**|ARM su x64|X64|ARM|
|**AMD64\_arm64** oppure **x64\_arm64**|ARM64 in x64 incrociato|X64|ARM64|

*platform_type*<br/>
Questo argomento facoltativo consente di specificare **archiviare** oppure **uwp** come il tipo di piattaforma. Per impostazione predefinita, l'ambiente è impostata per compilare le app desktop o console.

*winsdk_version*<br/>
(Facoltativo) specifica la versione del SDK di Windows da utilizzare. Per impostazione predefinita, viene utilizzato la versione più recente è stato installato Windows SDK. Per specificare la versione di Windows SDK, è possibile utilizzare un numero completo di Windows 10 SDK, ad esempio **10.0.10240.0**, oppure specificare **8.1** per usare il SDK di Windows 8.1.

*vcversion*<br/>
(Facoltativo) specifica il set di strumenti del compilatore Visual Studio da utilizzare. Per impostazione predefinita, l'ambiente è impostata per utilizzare il set di strumenti di Visual Studio 2017 del compilatore corrente. Uso **-vcvars_ver = 14.0** per specificare il set di strumenti del compilatore di Visual Studio 2015.

<a name="vcvarsall"></a>
#### <a name="to-set-up-the-build-environment-in-an-existing-command-prompt-window"></a>Per configurare l'ambiente di compilazione in una finestra del prompt dei comandi esistente

1. Al prompt dei comandi, utilizzare il comando CD per passare alla directory di installazione di Visual Studio. Quindi, utilizzare nuovamente i CD per passare alla sottodirectory che contiene i file di comando specifiche della configurazione. Per Visual Studio 2017, si tratta della sottodirectory VC\Auxiliary\Build. Per Visual Studio 2015, utilizzare la sottodirectory VC.

1. Immettere il comando per l'ambiente di sviluppo preferito. Ad esempio, per compilare codice ARM per UWP su una piattaforma a 64 bit utilizzando il SDK di Windows più recente e il set di strumenti del compilatore di Visual Studio 2017 RTM, utilizzare la riga di comando:

   `vcvarsall.bat amd64_arm uwp -vcvars_ver=14.10`

## <a name="create-your-own-command-prompt-shortcut"></a>Creare il propria collegamento prompt dei comandi

Se si apre la finestra di dialogo proprietà per uno dei collegamenti di prompt dei comandi per sviluppatori esistente, è possibile visualizzare la destinazione del comando utilizzata. Ad esempio, la destinazione per il **x64 prompt dei comandi degli strumenti nativi per VS 2017** scelta rapida è simile a:

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvars64.bat"`

Set di file batch specifici per l'architettura di *architettura* parametro e chiamare vcvarsall. bat. Quando passa a vcvarsall. bat o solo è possibile chiamare direttamente vcvarsall. bat, è possibile passare le stesse opzioni aggiuntive per questi file batch. Per specificare i parametri per la propria scelta rapida di comando, è necessario aggiungerli alla fine del comando in virgolette doppie. Ad esempio, per configurare un collegamento per compilare codice ARM per UWP su una piattaforma a 64 bit utilizzando il SDK di Windows più recente e il set di strumenti del compilatore di Visual Studio 2017 RTM, utilizzare simile a questa destinazione del comando nel collegamento:

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvarsall.bat amd64_arm uwp -vcvars_ver=14.10"`

È necessario modificare il percorso perché rifletta la directory di installazione di Visual Studio.

## <a name="command-line-tools"></a>Strumenti da riga di comando

Per compilare un progetto C/C++ nella riga di comando, Visual Studio fornisce questi strumenti da riga di comando:

[CL](../build/reference/compiling-a-c-cpp-program.md)<br/>
Usare il compilatore (cl.exe) per compilare e collegare file del codice sorgente in app, librerie e DLL.

[Collegamento](../build/reference/linking.md)<br/>
Usare il linker (link.exe) per collegare file oggetto e librerie compilati in app e DLL.

[MSBuild (Visual C++)](../build/msbuild-visual-cpp.md)<br/>
Utilizzare MSBuild (msbuild.exe) per compilare i progetti Visual C++ e soluzioni di Visual Studio. Ciò equivale all'esecuzione di **compilare** progetto oppure **Compila soluzione** comando nell'IDE di Visual Studio.

[DEVENV](/visualstudio/ide/reference/devenv-command-line-switches)<br/>
Usare DEVENV (devenv.exe) combinati con un'opzione della riga di comando, ad esempio, **Compila** o **/Clean**, ovvero per eseguire determinati comandi di compilazione senza visualizzare l'IDE di Visual Studio.

[NMAKE](../build/nmake-reference.md)<br/>
Usare NMAKE (nmake.exe) per automatizzare le attività di compilazione di progetti di Visual C++ tramite un makefile tradizionale.

Quando si compila dalla riga di comando, il comando F1 non è disponibile per la Guida immediata. Al contrario, è possibile utilizzare un motore di ricerca per ottenere informazioni su avvisi, errori e messaggi oppure è possibile utilizzare i file della Guida in linea. Utilizzare la ricerca nella [docs.microsoft.com](https://docs.microsoft.com/cpp/), immettere la stringa di ricerca nella casella di ricerca nella parte superiore della pagina.

## <a name="in-this-section"></a>In questa sezione

Negli articoli inclusi in questa sezione della documentazione viene illustrato come compilare app nella riga di comando, viene descritto come personalizzare l'ambiente di compilazione da riga di comando per usare i set di strumenti a 64 bit e le piattaforme x86, x64 e ARM e vengono fornite informazioni su come usare gli strumenti di sviluppo da riga di comando MSBuild e NMAKE.

[Procedura dettagliata: compilazione di un programma C++ nativo nella riga di comando](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md)<br/>
Presenta un esempio in cui viene illustrato come creare e compilare un semplice programma C++ nella riga di comando.

[Procedura dettagliata: Compilare un programma C nella riga di comando](../build/walkthrough-compile-a-c-program-on-the-command-line.md)<br/>
Descrive come compilare un programma nel linguaggio di programmazione C.

[Procedura dettagliata: Compilazione di un programma in C++/CLI dalla riga di comando](../build/walkthrough-compiling-a-cpp-cli-program-on-the-command-line.md)<br/>
Descrive come creare e compilare un programma C++/CLI che usa .NET Framework.

[Procedura dettagliata: Compilazione di un programma in C++/CX dalla riga di comando](../build/walkthrough-compiling-a-cpp-cx-program-on-the-command-line.md)<br/>
Descrive come creare e compilare un programma C++/CX che usa Windows Runtime.

[Impostare le variabili di percorso e di ambiente per le compilazioni da riga di comando](../build/setting-the-path-and-environment-variables-for-command-line-builds.md)<br/>
Viene descritto come avviare una finestra del prompt dei comandi con le variabili di ambiente necessarie impostato per le compilazioni da riga di comando che hanno come destinazione x86, x64 e ARM piattaforme usando un set di strumenti a 32 o 64 bit.

[Riferimenti a NMAKE](../build/nmake-reference.md)<br/>
Fornisce collegamenti ad articoli in cui viene descritta l'utilità Microsoft Program Maintenance Utility (NMAKE.EXE).

[MSBuild (Visual C++)](../build/msbuild-visual-cpp.md)<br/>
Fornisce collegamenti ad articoli in cui vengono descritte le modalità di utilizzo di MSBuild.exe.

## <a name="related-sections"></a>Sezioni correlate

[/MD, /MT, /LD (uso della libreria di runtime)](../build/reference/md-mt-ld-use-run-time-library.md)<br/>
Descrive come usare queste opzioni del compilatore per l'utilizzo di una libreria di runtime di debug o di rilascio.

[Opzioni del compilatore C/C++](../build/reference/compiler-options.md)<br/>
Fornisce collegamenti ad articoli in cui vengono descritte le opzioni del compilatore C e C++ e fornite informazioni su CL.exe.

[Opzioni del linker](../build/reference/linker-options.md)<br/>
Fornisce collegamenti ad articoli in cui vengono descritte le opzioni del linker e fornite informazioni su CL.exe.

[Strumenti per la compilazione in C/C++](../build/reference/c-cpp-build-tools.md)<br/>
Fornisce collegamenti a C e C++ compilare strumenti inclusi in Visual Studio.

## <a name="see-also"></a>Vedere anche

[Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)