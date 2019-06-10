---
title: Utilizzare Microsoft C++ set di strumenti da riga di comando
description: Usare la toolchain del compilatore Microsoft C++ (MSVC) dalla riga di comando all'esterno dell'ambiente di sviluppo integrato (IDE) di Visual Studio.
ms.custom: conceptual
ms.date: 06/06/2019
helpviewer_keywords:
- command-line builds [C++]
- compiling source code [C++], command line
- builds [C++], command-line
- command line [C++], building from
- command line [C++], compilers
ms.assetid: 7ca9daed-a003-4162-842d-908f79058365
ms.openlocfilehash: b5e9bf266d79ee86cae84535641a52c7c52be391
ms.sourcegitcommit: 8adabe177d557c74566c13145196c11cef5d10d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/10/2019
ms.locfileid: "66821145"
---
# <a name="use-the-microsoft-c-toolset-from-the-command-line"></a>Utilizzare Microsoft C++ set di strumenti da riga di comando

È possibile compilare applicazioni C e C++ dalla riga di comando usando gli strumenti inclusi in Visual Studio. Microsoft C++ set di strumenti del compilatore (MSVC) è scaricabile come pacchetto autonomo da anche la [download di Visual Studio](https://visualstudio.microsoft.com/downloads/) pagina. Fa parte del **Build Tools per Visual Studio** pacchetto. È possibile scegliere di scaricare solo gli strumenti necessari per C++ sviluppo.

## <a name="how-to-use-the-command-line-tools"></a>Come usare gli strumenti da riga di comando

Quando si sceglie uno dei carichi di lavoro di C++ nel programma di installazione di Visual Studio, verrà installato il *set di strumenti della piattaforma* di Visual Studio. Un set di strumenti della piattaforma dispone di tutti i C e C++ strumenti per una specifica versione di Visual Studio. Gli strumenti includono C /C++ compilatori, ai linker, gli assembler e altri strumenti di compilazione e le librerie corrispondente. Nella riga di comando, è possibile usare tutti questi strumenti. Vengono usati anche internamente dall'IDE di Visual Studio. Esistono compilatori ospitati da x86 e x64 ospitati separati e strumenti per la compilazione del codice per x86, x64, ARM e ARM64 destinazioni. Ogni set di strumenti per un'architettura di compilazione per un host e una destinazione specifici viene archiviato nella relativa directory.

Per funzionare correttamente, gli strumenti richiedono l'impostazione di diverse variabili di ambiente specifiche, Queste variabili vengono usate per aggiungere gli strumenti per il percorso e impostare includono file, file di libreria e percorsi SDK. Per semplificare l'impostazione di queste variabili di ambiente, il programma di installazione crea *file di comando* personalizzati, o file batch, durante l'installazione. È possibile eseguire uno di questi file di comando per impostare un host specifico e architettura di destinazione build, versione di Windows SDK e set strumenti della piattaforma. Per praticità, il programma di installazione crea anche i collegamenti nel menu Start. I tasti di scelta rapida avvio di windows il prompt dei comandi per sviluppatori usando questi file di comando per combinazioni specifiche di host e di destinazione. Questi tasti di scelta rapida, verificare che tutte le variabili di ambiente necessarie sono impostate e pronte all'uso.

Le variabili di ambiente necessarie sono specifiche per l'installazione e l'architettura di compilazione che scelto. Essi potrebbero essere modificate da aggiornamenti del prodotto. Ecco perché è consigliabile usare un file di scelta rapida o comando prompt dei comandi installati, anziché impostare le variabili di ambiente manualmente. Per altre informazioni, vedere [impostare il percorso e variabili di ambiente per compilazioni da riga di comando](setting-the-path-and-environment-variables-for-command-line-builds.md).

Il set di strumenti, i file di comando e i collegamenti installati dipendono dal processore del computer e le opzioni selezionate durante l'installazione. Gli strumenti incrociati compilare codice x86 e x64 e ospitati in x86 degli strumenti vengono sempre installati. Se si dispone di Windows a 64 bit, vengono installati anche gli strumenti incrociati compilare codice x86 e x64 e strumenti basati su x64. Se si sceglie l'opzione facoltativa C++ strumenti (Universal Windows Platform), quindi gli strumenti x86 e x64 che creano codice ARM e ARM64 anche installato. Altri carichi di lavoro possono installare strumenti aggiuntivi.

## <a name="developer_command_prompt_shortcuts"></a> Collegamenti del prompt dei comandi per gli sviluppatori

I collegamenti del prompt dei comandi vengono installati in una cartella di Visual Studio specifica per la versione nel menu Start. Ecco un elenco dei collegamenti del prompt dei comandi principali e delle architetture di compilazione supportate:

- **Prompt dei comandi per gli sviluppatori**: imposta l'ambiente per l'uso di strumenti nativi x86 a 32 bit per compilare codice nativo x86 a 32 bit.
- **Prompt dei comandi degli strumenti nativi x86**: imposta l'ambiente per l'uso di strumenti nativi x86 a 32 bit per compilare codice nativo x86 a 32 bit.
- **Prompt dei comandi degli strumenti nativi x64**: imposta l'ambiente per l'uso di strumenti nativi x64 a 64 bit per compilare codice nativo x64 a 64 bit.
- **Prompt dei comandi degli strumenti x86_x64**: imposta l'ambiente per l'uso di strumenti nativi x86 a 32 bit per compilare codice nativo x64 a 64 bit.
- **Prompt dei comandi degli strumenti x64_x86**: imposta l'ambiente per l'uso di strumenti nativi x64 a 64 bit per compilare codice nativo x86 a 32 bit.

::: moniker range=">= vs-2019"

I nomi di cartella e menu di scelta menu avvio variano a seconda della versione installata di Visual Studio. Se si imposta uno, anche dipendono l'installazione **soprannome**. Ad esempio, si supponga che è stato installato Visual Studio 2019 ed è stato assegnato un nome alternativo del *più recente*. Il collegamento prompt dei comandi per gli sviluppatori è denominato **prompt dei comandi per gli sviluppatori per VS 2019 (versione più recente)** , in una cartella denominata **Visual Studio 2019**.

::: moniker-end
::: moniker range="= vs-2017"

I nomi di cartella e menu di scelta menu avvio variano a seconda della versione installata di Visual Studio. Se si imposta uno, anche dipendono l'installazione **soprannome**. Ad esempio, si supponga che è stato installato Visual Studio 2017 ed è stato assegnato un nome alternativo del *più recente*. Il collegamento prompt dei comandi per gli sviluppatori è denominato **prompt dei comandi per gli sviluppatori per Visual Studio 2017 (versione più recente)** , in una cartella denominata **Visual Studio 2017**.

::: moniker-end
::: moniker range="< vs-2017"

I nomi di cartella e menu di scelta menu avvio variano a seconda della versione installata di Visual Studio. Si supponga, ad esempio, che è stato installato Visual Studio 2015. Il collegamento prompt dei comandi per gli sviluppatori è denominato **prompt dei comandi per gli sviluppatori per VS 2015**.

::: moniker-end

## <a name="developer_command_prompt"></a> Per aprire una finestra del prompt dei comandi per gli sviluppatori

1. Sul desktop aprire il menu **Start** di Windows e quindi scorrerlo per trovare e aprire la cartella per la versione di Visual Studio in uso, ad esempio **Visual Studio 2019**.

1. Nella cartella scegliere il **Prompt dei comandi per gli sviluppatori** per la versione di Visual Studio in uso. Questo collegamento avvia una finestra del prompt dei comandi per gli sviluppatori che usa l'architettura di compilazione predefinita di strumenti nativi x86 a 32 bit per compilare codice nativo x86 a 32 bit. Se si preferisce un'architettura di compilazione non predefinita, scegliere uno dei prompt dei comandi degli strumenti nativi o incrociati per specificare l'architettura host e di destinazione.

Per un modo ancora più rapido aprire un prompt dei comandi per gli sviluppatori, immettere *prompt dei comandi sviluppatore* nella casella di ricerca desktop. Scegliere quindi il risultato desiderato.

## <a name="developer_command_file_locations"></a> Percorsi dei file di comando per gli sviluppatori

Se si preferisce impostare l'ambiente di compilazione in una finestra del prompt dei comandi esistente, è possibile usare uno dei file di comando creati dal programma di installazione. È consigliabile che impostare l'ambiente in una nuova finestra del prompt dei comandi. Non è consigliabile si successive cambiare ambiente, nella stessa finestra di comando.

::: moniker range=">= vs-2019"

Il percorso del file di comando dipendono sulla versione di Visual Studio installata e le scelte effettuate durante l'installazione. Per Visual Studio 2019, il percorso di installazione tipica in un sistema a 64 bit è \\Program Files (x86)\\Microsoft Visual Studio\\2019\\*edizione*. *Edizione* potrebbe essere Community, Professional, Enterprise, BuildTools o un altro nome alternativo fornito.

::: moniker-end
::: moniker range="= vs-2017"

Il percorso del file di comando dipendono sulla versione di Visual Studio installata e le scelte effettuate durante l'installazione. Per Visual Studio 2017, il percorso di installazione tipica in un sistema a 64 bit è \\Program Files (x86)\\Microsoft Visual Studio\\2017\\*edizione*. *Edizione* potrebbe essere Community, Professional, Enterprise, BuildTools o un altro nome alternativo fornito.

::: moniker-end
::: moniker range="< vs-2017"

Il percorso del file di comando dipende dalla versione di Visual Studio e la directory di installazione. Per Visual Studio 2015, il percorso di installazione tipico è nel \\Program Files (x86)\\Microsoft Visual Studio 14.0.

::: moniker-end

Il file di comando prompt dei comandi sviluppatore principale, vsdevcmd. bat, si trova nel Common7\\sottodirectory strumenti. Quando viene specificato alcun parametro, imposta l'ambiente da usare gli strumenti nativi x86 a 32 bit x86 di compilazione codice.

::: moniker range=">= vs-2017"

Più file di comando sono disponibili per impostare le architetture di compilazione specifica. I file di comando disponibili variano a seconda le opzioni installate e i carichi di lavoro di Visual Studio. In Visual Studio 2017 e Visual Studio 2019, è possibile trovarli nel VC\\ausiliario\\sottodirectory di compilazione.

::: moniker-end
::: moniker range="< vs-2017"

Più file di comando sono disponibili per impostare le architetture di compilazione specifica. I file di comando disponibili variano a seconda le opzioni installate e i carichi di lavoro di Visual Studio. In Visual Studio 2015, che si trovano nel VC, VC\\bin o VC\\bin\\*architettura* le sottodirectory, dove *architettura* è uno dei nativo o opzioni del compilatore incrociato.

::: moniker-end

Questi file di comando impostano i parametri predefiniti e chiamano VsDevCmd.bat per configurare l'ambiente dell'architettura di compilazione specificato. Un'installazione tipica può includere questi file di comando:

|File di comando|Architetture host e di destinazione|
|---|---|
|**vcvars32.bat**| Usare gli strumenti nativi x86 a 32 bit per compilare codice x86 a 32 bit.|
|**vcvars64.bat**| Usare gli strumenti nativi x64 a 64 bit per compilare codice x64 a 64 bit.|
|**vcvarsx86_amd64.bat**| Usare gli strumenti nativi x86 a 32 bit per compilare codice x64 a 64 bit.|
|**vcvarsamd64_x86.bat**| Usare gli strumenti nativi x64 a 64 bit per compilare codice x86 a 32 bit.|
|**vcvarsx86_arm.bat**| Usare gli strumenti nativi x86 a 32 bit per compilare codice ARM.|
|**vcvarsamd64_arm.bat**| Usare gli strumenti nativi x64 a 64 bit per compilare codice ARM.|
|**vcvarsall.bat**| Usare i parametri per specificare le architetture di host e di destinazione, Windows SDK e le scelte di piattaforma. Per un elenco delle opzioni supportate, eseguire una chiamata usando un parametro **/help**.|

> [!CAUTION]
> Il file vcvarsall.bat e altri file di comando di Visual Studio possono variare da computer a computer. Non sostituire un file vcvarsall.bat mancante o danneggiato usando un file da un altro computer. Eseguire nuovamente il programma di installazione di Visual Studio per sostituire il file mancante.
>
> Il file vcvarsall.bat varia anche da versione a versione. Se la versione corrente di Visual Studio è installata in un computer che include anche una versione precedente di Visual Studio, non eseguire vcvarsall.bat o un altro file di comando di Visual Studio da diverse versioni nella stessa finestra del prompt dei comandi.

## <a name="use-the-developer-tools-in-an-existing-command-window"></a>Usare gli strumenti di sviluppo in una finestra di comando esistente

Il modo più semplice per specificare un'architettura di compilazione specifica in una finestra di comando esistente è quello di usare il file vcvarsall.bat. Utilizzare vcvarsall. bat per impostare le variabili di ambiente per configurare la riga di comando per la compilazione nativa a 32 o 64 bit. Gli argomenti consentono di specificare la compilazione incrociata per x86, x64, ARM, ARM64 processori o. È possibile scegliere le piattaforme Microsoft Store, (Universal Windows Platform) o Windows Desktop. È anche possibile specificare quali SDK di Windows da usare e selezionare la versione di strumenti della piattaforma.

Quando usata senza argomenti, vcvarsall. bat Configura le variabili di ambiente per usare il compilatore x86 nativo corrente per le destinazioni di Desktop di Windows a 32 bit. È possibile aggiungere gli argomenti per configurare l'ambiente per usare uno qualsiasi di nativi o incrociati gli strumenti di compilazione. vcvarsall. bat consente di visualizzare un messaggio di errore se si specifica una configurazione che non è installata o disponibile nel computer.

### <a name="vcvarsall-syntax"></a>Sintassi di vcvarsall

> **vcvarsall.bat** [*architecture*] [*platform_type*] [*winsdk_version*] [ **-vcvars_ver=** _vcversion_]

*architecture*<br/>
Questo argomento facoltativo specifica l'architettura host e di destinazione da usare. Se *architettura* non è specificato, viene usato l'ambiente di compilazione predefinito. Sono supportati questi argomenti:

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
Facoltativamente, specifica il set di strumenti del compilatore di Visual Studio da usare. Per impostazione predefinita, l'ambiente è impostato per l'uso del set di strumenti del compilatore di Visual Studio corrente.

::: moniker range=">= vs-2019"

Uso **-vcvars_ver=14.0 = 14.2 x .yyyyy** per specificare una versione specifica del set di strumenti del compilatore Visual Studio 2019.

Uso **-vcvars_ver=14.0 = 14.16** per specificare la versione più recente del set di strumenti del compilatore Visual Studio 2017.

::: moniker-end
::: moniker range="= vs-2017"

Uso **-vcvars_ver=14.0 = 14.16** per specificare la versione più recente del set di strumenti del compilatore Visual Studio 2017.

Uso **-vcvars_ver=14.0 = 14.1 x .yyyyy** per specificare una versione specifica del set di strumenti del compilatore Visual Studio 2017.

::: moniker-end

Uso **-vcvars_ver=14.0 = 14.0** per specificare il set di strumenti del compilatore di Visual Studio 2015.

<a name="vcvarsall"></a>
#### <a name="to-set-up-the-build-environment-in-an-existing-command-prompt-window"></a>Per configurare l'ambiente di compilazione in una finestra del prompt dei comandi esistente

1. Al prompt dei comandi usare il comando CD per passare alla directory di installazione di Visual Studio. Quindi, usare nuovamente CD per passare alla sottodirectory contenente i file di comando specifici della configurazione. Per Visual Studio 2019 e Visual Studio 2017, usare il *VC\\ausiliario\\compilazione* sottodirectory. Per Visual Studio 2015, usare il *VC* sottodirectory.

1. Immettere il comando per l'ambiente di sviluppo preferito. Ad esempio, per compilare il codice ARM per la piattaforma UWP su una piattaforma a 64 bit, usando il più recente Windows SDK e Visual Studio del compilatore set di strumenti, usare la riga di comando:

   `vcvarsall.bat amd64_arm uwp`

## <a name="create-your-own-command-prompt-shortcut"></a>Creare un collegamento del prompt dei comandi personalizzato

::: moniker range=">= vs-2019"

Aprire la finestra di dialogo proprietà per un collegamento prompt dei comandi per gli sviluppatori visualizzare la destinazione del comando usata. Ad esempio, la destinazione per il collegamento **Prompt dei comandi degli strumenti nativi x64 per VS 2019** è simile a:

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvars64.bat"`

::: moniker-end
::: moniker range="= vs-2017"

Aprire la finestra di dialogo proprietà per un collegamento prompt dei comandi per gli sviluppatori visualizzare la destinazione del comando usata. Ad esempio, la destinazione per il **x64 nativo prompt dei comandi di strumenti per Visual Studio 2017** collegamento è qualcosa di simile a:

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvars64.bat"`

::: moniker-end
::: moniker range="< vs-2017"

Aprire la finestra di dialogo proprietà per un collegamento prompt dei comandi per gli sviluppatori visualizzare la destinazione del comando usata. Ad esempio, la destinazione per il **VS2015 x64 prompt dei comandi degli strumenti nativi** collegamento è qualcosa di simile a:

`%comspec% /k ""C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat"" amd64`

::: moniker-end

I file batch specifici dell'architettura impostano il parametro *architecture* e chiamano vcvarsall.bat. È possibile passare le stesse opzioni disponibili per i file batch come verrebbero passate a vcvarsall. bat o vcvarsall. bat è possibile semplicemente chiamare direttamente. Per specificare i parametri per il proprio collegamento del prompt dei comandi, aggiungerli alla fine del comando tra virgolette doppie. Ad esempio, ecco un collegamento per compilare codice ARM per la piattaforma UWP su una piattaforma a 64 bit, usando la versione più recente di Windows SDK. Per utilizzare un set di strumenti del compilatore precedente, specificare il numero di versione. Usare una destinazione del comando simile alla seguente nel collegamento:

::: moniker range=">= vs-2019"

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvarsall.bat amd64_arm uwp -vcvars_ver=14.16"`

::: moniker-end
::: moniker range="= vs-2017"

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvarsall.bat amd64_arm uwp -vcvars_ver=14.0"`

::: moniker-end
::: moniker range="< vs-2017"

`%comspec% /k ""C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat"" amd64 -vcvars_ver=12.0`

::: moniker-end

Regolare il percorso in modo da riflettere la directory di installazione di Visual Studio. Il file vcvarsall.bat contiene altre informazioni sui numeri di versione specifici.

## <a name="command-line-tools"></a>Strumenti della riga di comando

Per creare una C /C++ progetto a un prompt dei comandi, Visual Studio fornisce questi strumenti da riga di comando:

[CL](reference/compiling-a-c-cpp-program.md)<br/>
Usare il compilatore (cl.exe) per compilare e collegare file del codice sorgente in app, librerie e DLL.

[Collegamento](reference/linking.md)<br/>
Usare il linker (link.exe) per collegare file oggetto e librerie compilati in app e DLL.

[MSBuild](msbuild-visual-cpp.md)<br/>
Usare MSBuild (msbuild.exe) e un file di progetto (.vcxproj) per configurare una compilazione e richiamare indirettamente il set di strumenti. È equivalente all'esecuzione di **compilare** progetto oppure **Compila soluzione** comando nell'IDE di Visual Studio. Esecuzione di MSBuild dalla riga di comando è uno scenario avanzato e generalmente non consigliato.

[DEVENV](/visualstudio/ide/reference/devenv-command-line-switches)<br/>
Usare DEVENV (devenv.exe) combinato con un'opzione della riga di comando, ad esempio **/build** oppure **/Clean** per eseguire determinati comandi di compilazione senza visualizzare l'IDE di Visual Studio. In generale, DEVENV è preferibile rispetto all'uso di MSBuild direttamente, perché è possibile consentire a Visual Studio gestisca la complessità di MSBuild.

[NMAKE](reference/nmake-reference.md)<br/>
Usare NMAKE (nmake.exe) in Windows per compilare progetti C++ basati su un makefile tradizionale.

Quando si compila dalla riga di comando, il comando F1 non è disponibile per il supporto immediato. In alternativa, è possibile usare un motore di ricerca per ottenere informazioni su avvisi, errori e messaggi oppure è possibile usare i file della Guida offline. Usare la ricerca nella [docs.microsoft.com](https://docs.microsoft.com/cpp/), usare la casella di ricerca nella parte superiore della pagina.

## <a name="in-this-section"></a>In questa sezione

Questi articoli illustrano come compilare App nella riga di comando e viene descritto come personalizzare l'ambiente di compilazione da riga di comando. Alcuni mostrano come usare i set di strumenti a 64 bit e di destinazione x86, x64, ARM, ARM64 piattaforme e. Vengono inoltre descritti l'utilizzo degli strumenti di compilazione da riga di comando MSBuild e NMAKE.

[Procedura dettagliata: Compilazione di un programma C++ nativo nella riga di comando](walkthrough-compiling-a-native-cpp-program-on-the-command-line.md)<br/>
Fornisce un esempio che illustra come creare e compilare un C++ programma nella riga di comando.

[Procedura dettagliata: Compilare un programma in C dalla riga di comando](walkthrough-compile-a-c-program-on-the-command-line.md)<br/>
Descrive come compilare un programma nel linguaggio di programmazione C.

[Procedura dettagliata: Compilazione di un programma in C++/CLI dalla riga di comando](walkthrough-compiling-a-cpp-cli-program-on-the-command-line.md)<br/>
Descrive come creare e compilare un programma C++/CLI che usa .NET Framework.

[Procedura dettagliata: Compilazione di un programma in C++/CX dalla riga di comando](walkthrough-compiling-a-cpp-cx-program-on-the-command-line.md)<br/>
Descrive come creare e compilare un programma C++/CX che usa Windows Runtime.

[Impostare le variabili di percorso e di ambiente per le compilazioni da riga di comando](setting-the-path-and-environment-variables-for-command-line-builds.md)<br/>
Come impostare le variabili di ambiente per usare un set di strumenti a 32 o 64 bit di destinazione x86, x64, ARM, ARM64 piattaforme e.

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
