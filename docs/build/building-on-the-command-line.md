---
title: Usare il set C++ di strumenti Microsoft dalla riga di comando
description: Usare la toolchain del compilatore Microsoft C++ (MSVC) dalla riga di comando all'esterno dell'ambiente di sviluppo integrato (IDE) di Visual Studio.
ms.custom: conceptual
ms.date: 11/12/2019
helpviewer_keywords:
- command-line builds [C++]
- compiling source code [C++], command line
- builds [C++], command-line
- command line [C++], building from
- command line [C++], compilers
ms.assetid: 7ca9daed-a003-4162-842d-908f79058365
ms.openlocfilehash: ec30cba8e119f96efc5bca156fa565db77904520
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79417439"
---
# <a name="use-the-microsoft-c-toolset-from-the-command-line"></a>Usare il set C++ di strumenti Microsoft dalla riga di comando

È possibile compilare applicazioni C e C++ dalla riga di comando usando gli strumenti inclusi in Visual Studio. Il set C++ di strumenti del compilatore Microsoft (MSVC) è scaricabile anche come pacchetto autonomo che non include l'IDE di Visual Studio.

## <a name="download-and-install-the-tools"></a>Scaricare e installare gli strumenti

Se sono stati installati Visual Studio e un C++ carico di lavoro, sono disponibili tutti gli strumenti da riga di comando. Per informazioni su come installare C++ e Visual Studio, vedere installare [ C++ il supporto in Visual Studio](vscpp-step-0-installation.md). Se si vuole solo il set di strumenti della riga di comando, scaricare gli [strumenti di compilazione per Visual Studio](https://visualstudio.microsoft.com/downloads/#build-tools-for-visual-studio-2019). Quando si esegue il file eseguibile scaricato, viene aggiornato ed eseguito il Programma di installazione di Visual Studio. Per installare solo gli strumenti necessari per lo C++ sviluppo, selezionare il **C++** carico di lavoro strumenti di compilazione. È possibile selezionare librerie e set di strumenti facoltativi da includere in **Dettagli installazione**. Per compilare il codice usando i set di strumenti di Visual Studio 2015 o 2017, selezionare gli strumenti di compilazione facoltativa MSVC V140 o MSVC V141. Quando si è soddisfatti delle selezioni, scegliere **Installa**.

## <a name="how-to-use-the-command-line-tools"></a>Come usare gli strumenti da riga di comando

Quando si sceglie uno dei carichi di lavoro di C++ nel programma di installazione di Visual Studio, verrà installato il *set di strumenti della piattaforma* di Visual Studio. Un set di strumenti della piattaforma include tutti C++ i C e gli strumenti per una versione specifica di Visual Studio. Gli strumenti includono C/C++ compilatori, linker, assemblatori e altri strumenti di compilazione e librerie corrispondenti. Tutti questi strumenti possono essere usati dalla riga di comando. Vengono usati anche internamente dall'IDE di Visual Studio. Per compilare codice per le destinazioni x86, x64, ARM e ARM64 sono disponibili compilatori e strumenti diversi ospitati da x86 e da x64. Ogni set di strumenti per un'architettura di compilazione per un host e una destinazione specifici viene archiviato nella relativa directory.

Per funzionare correttamente, gli strumenti richiedono l'impostazione di diverse variabili di ambiente specifiche, Queste variabili vengono usate per aggiungere gli strumenti al percorso e per impostare i percorsi di inclusione di file, file di libreria e SDK. Per semplificare l'impostazione di queste variabili di ambiente, il programma di installazione crea *file di comando* personalizzati, o file batch, durante l'installazione. È possibile eseguire uno di questi file di comando per impostare un'architettura di compilazione host e destinazione specifica, Windows SDK versione e il set di strumenti della piattaforma. Per praticità, il programma di installazione crea anche collegamenti nel menu Start. I collegamenti avviano le finestre del prompt dei comandi per gli sviluppatori usando questi file di comando per combinazioni specifiche di host e destinazione. Questi tasti di scelta rapida assicurano che tutte le variabili di ambiente necessarie siano impostate e pronte all'uso.

Le variabili di ambiente necessarie sono specifiche dell'installazione e dell'architettura di compilazione scelta. Potrebbero inoltre essere modificate dagli aggiornamenti o dagli aggiornamenti del prodotto. Per questo motivo è consigliabile usare un collegamento al prompt dei comandi o un file di comando installato, anziché impostare manualmente le variabili di ambiente. Per ulteriori informazioni, vedere [impostazione delle variabili di percorso e di ambiente per le compilazioni da riga di comando](setting-the-path-and-environment-variables-for-command-line-builds.md).

I set di strumenti, i file di comando e i collegamenti installati dipendono dal processore del computer e dalle opzioni selezionate durante l'installazione. Gli strumenti ospitati da x86 e gli strumenti incrociati che compilano il codice x86 e x64 sono sempre installati. Se si dispone di Windows a 64 bit, vengono installati anche gli strumenti e gli strumenti incrociati per x64 che compilano il codice x86 e x64. Se si scelgono gli C++ strumenti di piattaforma UWP (Universal Windows Platform) facoltativi, vengono installati anche gli strumenti x86 e x64 che compilano il codice ARM e arm64. Altri carichi di lavoro possono installare strumenti aggiuntivi.

## <a name="developer_command_prompt_shortcuts"></a> Collegamenti del prompt dei comandi per gli sviluppatori

I collegamenti del prompt dei comandi vengono installati in una cartella di Visual Studio specifica per la versione nel menu Start. Ecco un elenco dei collegamenti del prompt dei comandi principali e delle architetture di compilazione supportate:

- **Prompt dei comandi per gli sviluppatori**: imposta l'ambiente per l'uso di strumenti nativi x86 a 32 bit per compilare codice nativo x86 a 32 bit.
- **Prompt dei comandi degli strumenti nativi x86**: imposta l'ambiente per l'uso di strumenti nativi x86 a 32 bit per compilare codice nativo x86 a 32 bit.
- **Prompt dei comandi degli strumenti nativi x64**: imposta l'ambiente per l'uso di strumenti nativi x64 a 64 bit per compilare codice nativo x64 a 64 bit.
- **Prompt dei comandi degli strumenti x86_x64**: imposta l'ambiente per l'uso di strumenti nativi x86 a 32 bit per compilare codice nativo x64 a 64 bit.
- **Prompt dei comandi degli strumenti x64_x86**: imposta l'ambiente per l'uso di strumenti nativi x64 a 64 bit per compilare codice nativo x86 a 32 bit.

::: moniker range=">= vs-2019"

La cartella del menu Start e i nomi dei collegamenti variano a seconda della versione installata di Visual Studio. Se si imposta uno di questi elementi, dipendono anche dal **nome alternativo**di installazione. Si supponga, ad esempio, di aver installato Visual Studio 2019 ed è stato assegnato un nome alternativo alla *versione più recente*. Il collegamento al prompt dei comandi per gli sviluppatori è denominato **prompt dei comandi per gli sviluppatori per VS 2019 (versione più recente)** in una cartella denominata **Visual Studio 2019**.

::: moniker-end
::: moniker range="= vs-2017"

La cartella del menu Start e i nomi dei collegamenti variano a seconda della versione installata di Visual Studio. Se si imposta uno di questi elementi, dipendono anche dal **nome alternativo**di installazione. Si supponga, ad esempio, di aver installato Visual Studio 2017 ed è stato assegnato un nome alternativo alla *versione più recente*. Il collegamento al prompt dei comandi per gli sviluppatori è denominato **prompt dei comandi per gli sviluppatori per VS 2017 (versione più recente)** in una cartella denominata **Visual Studio 2017**.

::: moniker-end
::: moniker range="< vs-2017"

La cartella del menu Start e i nomi dei collegamenti variano a seconda della versione installata di Visual Studio. Si supponga, ad esempio, di aver installato Visual Studio 2015. Il collegamento al prompt dei comandi per gli sviluppatori è denominato **prompt dei comandi per gli sviluppatori per VS 2015**.

::: moniker-end

### <a name="developer_command_prompt"></a> Per aprire una finestra del prompt dei comandi per gli sviluppatori

1. Sul desktop aprire il menu **Start** di Windows e quindi scorrerlo per trovare e aprire la cartella per la versione di Visual Studio in uso, ad esempio **Visual Studio 2019**.

1. Nella cartella scegliere il **Prompt dei comandi per gli sviluppatori** per la versione di Visual Studio in uso. Questo collegamento avvia una finestra del prompt dei comandi per gli sviluppatori che usa l'architettura di compilazione predefinita di strumenti nativi x86 a 32 bit per compilare codice nativo x86 a 32 bit. Se si preferisce un'architettura di compilazione non predefinita, scegliere uno dei prompt dei comandi degli strumenti nativi o incrociati per specificare l'architettura host e di destinazione.

Per un modo ancora più rapido per aprire un prompt dei comandi per gli sviluppatori, immettere *prompt dei comandi* per gli sviluppatori nella casella di ricerca desktop. Quindi scegliere il risultato desiderato.

## <a name="developer_command_file_locations"></a> Percorsi dei file di comando per gli sviluppatori

Se si preferisce impostare l'ambiente di compilazione in una finestra del prompt dei comandi esistente, è possibile usare uno dei file di comando creati dal programma di installazione. È consigliabile impostare l'ambiente in una nuova finestra del prompt dei comandi. Non è consigliabile modificare gli ambienti in un secondo momento nella stessa finestra di comando.

::: moniker range=">= vs-2019"

Il percorso del file di comando dipende dalla versione di Visual Studio installata e dalle scelte effettuate durante l'installazione. Per Visual Studio 2019, il percorso di installazione tipico in un sistema a 64 bit si trova in \\Program Files (x86)\\Microsoft Visual Studio\\2019\\*Edition*. L' *edizione* può essere community, Professional, Enterprise, BuildTools o un altro nome alternativo fornito.

::: moniker-end
::: moniker range="= vs-2017"

Il percorso del file di comando dipende dalla versione di Visual Studio installata e dalle scelte effettuate durante l'installazione. Per Visual Studio 2017, il percorso di installazione tipico in un sistema a 64 bit si trova in \\Program Files (x86)\\Microsoft Visual Studio\\2017\\*Edition*. L' *edizione* può essere community, Professional, Enterprise, BuildTools o un altro nome alternativo fornito.

::: moniker-end
::: moniker range="< vs-2017"

Il percorso del file di comando dipende dalla versione di Visual Studio e dalla directory di installazione. Per Visual Studio 2015, il percorso di installazione tipico si trova in \\Program Files (x86)\\Microsoft Visual Studio 14,0.

::: moniker-end

Il file di comando del prompt dei comandi per gli sviluppatori principale, VsDevCmd. bat, si trova nella sottodirectory Common7\\Tools. Quando non viene specificato alcun parametro, viene impostato l'ambiente per l'utilizzo degli strumenti nativi x86 per compilare codice x86 a 32 bit.

::: moniker range=">= vs-2017"

Sono disponibili più file di comando per configurare architetture di compilazione specifiche. I file di comando disponibili dipendono dai carichi di lavoro e dalle opzioni di Visual Studio installati. In Visual Studio 2017 e Visual Studio 2019 sono disponibili nella sottodirectory VC\\ausiliari\\Build.

::: moniker-end
::: moniker range="< vs-2017"

Sono disponibili più file di comando per configurare architetture di compilazione specifiche. I file di comando disponibili dipendono dai carichi di lavoro e dalle opzioni di Visual Studio installati. In Visual Studio 2015 si trovano nelle sottodirectory di VC, VC\\bin o VC\\bin\\*Architecture* , dove *Architecture* è una delle opzioni native o tra i compilatori.

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
|**vcvarsall.bat**| Usare i parametri per specificare le architetture host e target, Windows SDK e le opzioni di piattaforma. Per un elenco delle opzioni supportate, eseguire una chiamata usando un parametro **/help**.|

> [!CAUTION]
> Il file vcvarsall.bat e altri file di comando di Visual Studio possono variare da computer a computer. Non sostituire un file vcvarsall.bat mancante o danneggiato usando un file da un altro computer. Eseguire nuovamente il programma di installazione di Visual Studio per sostituire il file mancante.
>
> Il file vcvarsall.bat varia anche da versione a versione. Se la versione corrente di Visual Studio è installata in un computer che include anche una versione precedente di Visual Studio, non eseguire vcvarsall.bat o un altro file di comando di Visual Studio da diverse versioni nella stessa finestra del prompt dei comandi.

## <a name="use-the-developer-tools-in-an-existing-command-window"></a>Usare gli strumenti di sviluppo in una finestra di comando esistente

Il modo più semplice per specificare un'architettura di compilazione specifica in una finestra di comando esistente è quello di usare il file vcvarsall.bat. Utilizzare vcvarsall. bat per impostare le variabili di ambiente per configurare la riga di comando per la compilazione nativa a 32 bit o a 64 bit. Gli argomenti consentono di specificare la compilazione incrociata per processori x86, x64, ARM o ARM64. È possibile fare riferimento a piattaforme Microsoft Store, piattaforma UWP (Universal Windows Platform) o desktop di Windows. È anche possibile specificare quali Windows SDK usare e selezionare la versione del set di strumenti della piattaforma.

Se usato senza argomenti, vcvarsall. bat configura le variabili di ambiente in modo che usino il compilatore nativo x86 corrente per le destinazioni desktop di Windows a 32 bit. È possibile aggiungere argomenti per configurare l'ambiente in modo da usare uno degli strumenti di compilazione nativi o incrociati. vcvarsall. bat Visualizza un messaggio di errore se si specifica una configurazione non installata o disponibile nel computer.

### <a name="vcvarsall-syntax"></a>Sintassi di vcvarsall

> **vcvarsall.bat** [*architecture*] [*platform_type*] [*winsdk_version*] [ **-vcvars_ver=** _vcversion_]

*architecture*<br/>
Questo argomento facoltativo specifica l'architettura host e di destinazione da usare. Se l' *architettura* non è specificata, viene usato l'ambiente di compilazione predefinito. Sono supportati questi argomenti:

|*architecture*|Compilatore|Architettura del computer host|Architettura dell'output di compilazione (destinazione)|
|----------------------------|--------------|----------------------------------|-------------------------------|
|**x86**|x86 nativo a 32 bit|x86, x64|x86|
|**x86\_amd64** o **x86\_x64**|x64 su x86 (incrociato)|x86, x64|x64|
|**x86_arm**|ARM su x86 (incrociato)|x86, x64|ARM|
|**x86_arm64**|ARM64 su x86 (incrociato)|x86, x64|ARM64|
|**amd64** o **x64**|x64 nativo a 64 bit|x64|x64|
|**amd64\_x86** o **x64\_x86**|x86 su x64 (incrociato)|x64|x86|
|**amd64\_arm** o **x64\_arm**|ARM su x64 (incrociato)|x64|ARM|
|**amd64\_arm64** o **x64\_arm64**|ARM64 su x64 (incrociato)|x64|ARM64|

*platform_type*<br/>
Questo argomento facoltativo consente di specificare **store** o **uwp** come tipo di piattaforma. Per impostazione predefinita, l'ambiente è impostato per la compilazione di app desktop o console.

*winsdk_version*<br/>
Facoltativamente, specifica la versione di Windows SDK da usare. Per impostazione predefinita, viene usata la versione più recente di Windows SDK installata. Per specificare la versione di Windows SDK, è possibile usare un numero completo di Windows 10 SDK, come **10.0.10240.0**, oppure specificare **8.1** per usare Windows 8.1 SDK.

*vcversion*<br/>
Facoltativamente, specifica il set di strumenti del compilatore di Visual Studio da usare. Per impostazione predefinita, l'ambiente è impostato per l'uso del set di strumenti del compilatore di Visual Studio corrente.

::: moniker range=">= vs-2019"

Usare **-vcvars_ver = 14.2 x. aaaay** per specificare una versione specifica del set di strumenti del compilatore di Visual Studio 2019.

Usare **-vcvars_ver = 14.16** per specificare la versione più recente del set di strumenti del compilatore di Visual Studio 2017.

::: moniker-end
::: moniker range="= vs-2017"

Usare **-vcvars_ver = 14.16** per specificare la versione più recente del set di strumenti del compilatore di Visual Studio 2017.

Usare **-vcvars_ver = 14.1 x. aaaay** per specificare una versione specifica del set di strumenti del compilatore di Visual Studio 2017.

::: moniker-end

Usare **-vcvars_ver = 14.0** per specificare il set di strumenti del compilatore di Visual Studio 2015.

#### <a name="vcvarsall"></a>Per configurare l'ambiente di compilazione in una finestra del prompt dei comandi esistente

1. Al prompt dei comandi usare il comando CD per passare alla directory di installazione di Visual Studio. Quindi, usare nuovamente CD per passare alla sottodirectory contenente i file di comando specifici della configurazione. Per Visual Studio 2019 e Visual Studio 2017, usare la sottodirectory di *compilazione ausiliaria di\\VC\\* . Per Visual Studio 2015, usare la sottodirectory *VC* .

1. Immettere il comando per l'ambiente di sviluppo preferito. Ad esempio, per compilare il codice ARM per UWP in una piattaforma a 64 bit, usando la Windows SDK più recente e il set di strumenti del compilatore di Visual Studio, usare questa riga di comando:

   `vcvarsall.bat amd64_arm uwp`

## <a name="create-your-own-command-prompt-shortcut"></a>Creare un collegamento del prompt dei comandi personalizzato

::: moniker range=">= vs-2019"

Aprire la finestra di dialogo proprietà per un collegamento al prompt dei comandi per gli sviluppatori per visualizzare la destinazione del comando usata. Ad esempio, la destinazione per il collegamento **Prompt dei comandi degli strumenti nativi x64 per VS 2019** è simile a:

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvars64.bat"`

::: moniker-end
::: moniker range="= vs-2017"

Aprire la finestra di dialogo proprietà per un collegamento al prompt dei comandi per gli sviluppatori per visualizzare la destinazione del comando usata. Ad esempio, la destinazione per il collegamento **prompt dei comandi degli strumenti nativi x64 per Visual studio 2017** è simile alla seguente:

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvars64.bat"`

::: moniker-end
::: moniker range="< vs-2017"

Aprire la finestra di dialogo proprietà per un collegamento al prompt dei comandi per gli sviluppatori per visualizzare la destinazione del comando usata. Ad esempio, la destinazione per il collegamento **VS2015 prompt dei comandi degli strumenti nativi x64** è simile a:

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" amd64`

::: moniker-end

I file batch specifici dell'architettura impostano il parametro *architecture* e chiamano vcvarsall.bat. È possibile passare le stesse opzioni a questi file batch, come si passa a vcvarsall. bat, oppure è possibile semplicemente chiamare vcvarsall. bat direttamente. Per specificare i parametri per il proprio collegamento del prompt dei comandi, aggiungerli alla fine del comando tra virgolette doppie. Ecco ad esempio un collegamento per compilare il codice ARM per UWP in una piattaforma a 64 bit, usando la Windows SDK più recente. Per usare un set di strumenti del compilatore precedente, specificare il numero di versione. Usare una destinazione del comando simile alla seguente nel collegamento:

::: moniker range=">= vs-2019"

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvarsall.bat" amd64_arm uwp -vcvars_ver=14.16`

::: moniker-end
::: moniker range="= vs-2017"

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvarsall.bat" amd64_arm uwp -vcvars_ver=14.0`

::: moniker-end
::: moniker range="< vs-2017"

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" amd64 -vcvars_ver=12.0`

::: moniker-end

Modificare il percorso in modo da riflettere la directory di installazione di Visual Studio. Il file vcvarsall.bat contiene altre informazioni sui numeri di versione specifici.

## <a name="command-line-tools"></a>Strumenti da riga di comando

Per compilare un progetto CC++ /a al prompt dei comandi, Visual Studio fornisce gli strumenti da riga di comando seguenti:

[CL](reference/compiling-a-c-cpp-program.md)<br/>
Usare il compilatore (cl.exe) per compilare e collegare file del codice sorgente in app, librerie e DLL.

[Collegamento](reference/linking.md)<br/>
Usare il linker (link.exe) per collegare file oggetto e librerie compilati in app e DLL.

[MSBuild](msbuild-visual-cpp.md)<br/>
Usare MSBuild (msbuild.exe) e un file di progetto (.vcxproj) per configurare una compilazione e richiamare indirettamente il set di strumenti. Equivale all'esecuzione del comando **Compila** progetto o **Compila soluzione** nell'IDE di Visual Studio. L'esecuzione di MSBuild dalla riga di comando è uno scenario avanzato e non è comunemente consigliata.

[DEVENV](/visualstudio/ide/reference/devenv-command-line-switches)<br/>
Utilizzare DEVENV (devenv. exe) in combinazione con un'opzione della riga di comando, ad esempio **/Build** o **/Clean** , per eseguire determinati comandi di compilazione senza visualizzare l'IDE di Visual Studio. In generale, è preferibile usare DEVENV direttamente con MSBuild, perché è possibile consentire a Visual Studio di gestire le complessità di MSBuild.

[NMAKE](reference/nmake-reference.md)<br/>
Usare NMAKE (nmake.exe) in Windows per compilare progetti C++ basati su un makefile tradizionale.

Quando si esegue la compilazione nella riga di comando, il comando F1 non è disponibile per la guida immediata. In alternativa, è possibile usare un motore di ricerca per ottenere informazioni su avvisi, errori e messaggi oppure è possibile usare i file della Guida offline. Per utilizzare la ricerca in [docs.Microsoft.com](https://docs.microsoft.com/cpp/), utilizzare la casella di ricerca nella parte superiore della pagina.

## <a name="in-this-section"></a>Contenuto della sezione

Questi articoli illustrano come creare app dalla riga di comando e come personalizzare l'ambiente di compilazione da riga di comando. Alcuni illustrano come usare i set di strumenti a 64 bit e come destinazione piattaforme x86, x64, ARM e ARM64. Viene inoltre descritto l'utilizzo degli strumenti di compilazione da riga di comando MSBuild e NMAKE.

[Procedura dettagliata: compilazione di un C++ programma nativo nella riga di comando](walkthrough-compiling-a-native-cpp-program-on-the-command-line.md)<br/>
Fornisce un esempio in cui viene illustrato come creare e compilare C++ un programma nella riga di comando.

[Procedura dettagliata: compilazione di un programma in C dalla riga di comando](walkthrough-compile-a-c-program-on-the-command-line.md)<br/>
Descrive come compilare un programma nel linguaggio di programmazione C.

[Procedura dettagliata: compilazione di C++un programma/CLI dalla riga di comando](walkthrough-compiling-a-cpp-cli-program-on-the-command-line.md)<br/>
Descrive come creare e compilare un programma C++/CLI che usa .NET Framework.

[Procedura dettagliata: compilazione di C++un programma/CX nella riga di comando](walkthrough-compiling-a-cpp-cx-program-on-the-command-line.md)<br/>
Descrive come creare e compilare un programma C++/CX che usa Windows Runtime.

[Impostare le variabili di percorso e di ambiente per le compilazioni da riga di comando](setting-the-path-and-environment-variables-for-command-line-builds.md)<br/>
Come impostare le variabili di ambiente per usare un set di strumenti a 32 bit o a 64 bit per le piattaforme x86, x64, ARM e ARM64.

[Riferimenti a NMAKE](reference/nmake-reference.md)<br/>
Fornisce collegamenti ad articoli in cui viene descritta l'utilità Microsoft Program Maintenance Utility (NMAKE.EXE).

[MSBuild dalla riga di comando - C++](msbuild-visual-cpp.md)<br/>
Fornisce collegamenti ad articoli in cui vengono descritte le modalità di utilizzo di msbuild.exe dalla riga di comando.

## <a name="related-sections"></a>Sezioni correlate

[/MD,/MT,/LD (utilizzare la libreria di Runtime)](reference/md-mt-ld-use-run-time-library.md)<br/>
Descrive come usare queste opzioni del compilatore per l'utilizzo di una libreria di runtime di debug o di rilascio.

[Opzioni delC++ compilatore C/](reference/compiler-options.md)<br/>
Fornisce collegamenti ad articoli in cui vengono descritte le opzioni del compilatore C e C++ e fornite informazioni su CL.exe.

[Opzioni del linker MSVC](reference/linker-options.md)<br/>
Fornisce collegamenti ad articoli in cui vengono descritte le opzioni del linker e fornite informazioni su CL.exe.

[Strumenti di compilazione aggiuntivi MSVC](reference/c-cpp-build-tools.md)<br/>
Fornisce collegamenti agli strumenti di compilazione per C/C++ inclusi in Visual Studio.

## <a name="see-also"></a>Vedere anche

[Progetti e sistemi di compilazione](projects-and-build-systems-cpp.md)
