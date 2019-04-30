---
title: Usare il set di strumenti MSVC dalla riga di comando - Visual Studio
description: Usare la toolchain del compilatore Microsoft C++ (MSVC) dalla riga di comando all'esterno di IDE di Visual Studio.
ms.custom: conceptual
ms.date: 12/10/2018
helpviewer_keywords:
- command-line builds [C++]
- compiling source code [C++], command line
- builds [C++], command-line
- command line [C++], building from
- command line [C++], compilers
ms.assetid: 7ca9daed-a003-4162-842d-908f79058365
ms.openlocfilehash: 21d1c9063a1d6dd154de8d2caca913ea3fd0ce37
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64342162"
---
# <a name="use-the-msvc-toolset-from-the-command-line"></a>Usare il set di strumenti MSVC dalla riga di comando

È possibile compilare applicazioni C e C++ nella riga di comando usando gli strumenti inclusi in Visual Studio. È anche possibile scaricare il set di strumenti del compilatore come pacchetto autonomo dal [Build Tools per Visual Studio 2017](https://go.microsoft.com/fwlink/p/?linkid=875721).

## <a name="how-to-use-the-command-line-tools"></a>Come usare gli strumenti da riga di comando

Quando si sceglie uno dei carichi di lavoro di C++ in Visual Studio Installer, l'installazione di Visual Studio *set strumenti della piattaforma*. Un set di strumenti della piattaforma include tutti i C e C++ gli strumenti per una specifica versione di Visual Studio, tra cui i compilatori C/C++, ai linker, gli assembler e altri strumenti di compilazione, nonché le librerie corrispondente. È possibile usare tutti questi strumenti dalla riga di comando e vengono inoltre utilizzati internamente dall'IDE di Visual Studio. Esistono compilatori ospitati da x86 e x64 ospitati separati e strumenti per compilare il codice per x86, x64, ARM e ARM64 destinazioni. Ogni set di strumenti per una particolare architettura di host e la destinazione build viene archiviato nella directory di Litware.

I set di strumenti del compilatore installati dipendono dal processore del computer e le opzioni selezionate durante l'installazione. Come minimo, vengono installati gli strumenti ospitati da x86 a 32 bit che compilare codice x86 nativo a 32 bit e strumenti di compilazione a 64 bit nativi x64 codice multipiattaforma. Se si dispone di Windows a 64 bit, vengono installati anche gli strumenti basati su x64 a 64 bit che compilano il codice nativo a 64 bit e tra gli strumenti di compilazione codice nativo a 32 bit. Se si sceglie di installare gli strumenti (Universal Windows Platform) C++ facoltativi, vengono installati anche gli strumenti nativi a 32 e 64 bit che creano codice ARM. Altri carichi di lavoro può installare altri strumenti.

## <a name="environment-variables-and-developer-command-prompts"></a>Prompt dei comandi per gli sviluppatori e le variabili di ambiente

Per funzionare correttamente, gli strumenti richiedono diverse variabili di ambiente specifiche da impostare. Questi vengono usati per aggiungerli al percorso e impostare includono file, file di libreria e percorsi SDK. Per renderlo semplice impostare queste variabili di ambiente, il programma di installazione crea personalizzato *file di comando*, o file batch, durante l'installazione. È possibile eseguire uno di questi file di comando in una finestra del prompt dei comandi per impostare un host specifico e architettura di destinazione build, versione di Windows SDK, piattaforma di destinazione e set strumenti della piattaforma. Per praticità, il programma di installazione crea anche i collegamenti nel menu di avvio che avviano windows il prompt dei comandi per sviluppatori usando questi file di comando, in modo che tutte le variabili di ambiente necessarie sono impostate e pronte all'uso.

Le variabili di ambiente necessarie sono specifiche per l'installazione e l'architettura di compilazione scegliere e potrebbero essere modificate da aggiornamenti del prodotto. Pertanto, è consigliabile usare uno dei collegamenti al prompt dei comandi installati o file di comando invece di impostare le variabili di ambiente nel Windows manualmente. Per altre informazioni, vedere [impostare il percorso e le variabili di ambiente per compilazioni da riga di comando](setting-the-path-and-environment-variables-for-command-line-builds.md).

## <a name="developer_command_prompt_shortcuts"></a> Tasti di scelta rapida del prompt dei comandi per gli sviluppatori

I tasti di scelta rapida del prompt dei comandi vengono installati in una cartella specifica della versione Visual Studio nel menu Start. Ecco un elenco di tasti di scelta rapida i prompt dei comandi di base e le architetture di compilazione che supportano:

- **Prompt dei comandi sviluppatore** -configura l'ambiente per usare strumenti nativi x86 a 32 bit per compilare codice x86 nativo a 32 bit.
- **x86 prompt dei comandi degli strumenti nativi** -configura l'ambiente per usare strumenti nativi x86 a 32 bit per compilare codice x86 nativo a 32 bit.
- **x64 prompt dei comandi degli strumenti nativi** -configura l'ambiente per usare gli strumenti a 64 bit, x64 nativo per compilare il codice a 64 bit, x64 nativo.
- **Prompt di comandi degli strumenti x86_x64 Cross** -imposta l'ambiente da utilizzare strumenti nativi x86 a 32 bit per compilare il codice a 64 bit, x64 nativo.
- **Prompt di comandi degli strumenti x64_x86 Cross** -configura l'ambiente per usare gli strumenti a 64 bit, x64 nativo per compilare codice x86 nativo a 32 bit.

I nomi effettivi di scelta rapida e cartella dello menu avvio variano a seconda la versione di Visual Studio installata e il nome alternativo dell'installazione se si imposta uno. Ad esempio, se si dispone di Visual Studio 2017 installato e si è specificato, un'installazione nome alternativo del *Preview*, il collegamento prompt dei comandi per gli sviluppatori è denominato **prompt dei comandi per gli sviluppatori per Visual Studio 2017 (anteprima)**, in una cartella denominata **Visual Studio 2017**.

Se sono stati installati il [Build Tools per Visual Studio 2017](https://go.microsoft.com/fwlink/p/?linkid=875721) (che include anche il set di strumenti del compilatore di Visual Studio 2015 Update 3), solo di specifici dell'architettura nativa o cross prompt dei comandi per gli sviluppatori vengono installate le opzioni degli strumenti e non generali **prompt dei comandi sviluppatore** scelta rapida.

## <a name="developer_command_prompt"></a> Per aprire una finestra del prompt dei comandi per gli sviluppatori

1. Sul desktop, aprire il Windows **avviare** dal menu e quindi scorrere per trovare e aprire la cartella per la versione di Visual Studio, ad esempio **Visual Studio 2017**. In alcune versioni precedenti di Visual Studio, i tasti di scelta rapida sono nella sottocartella **strumenti di Visual Studio**.

1. Nella cartella, scegliere il **prompt dei comandi sviluppatore** per la versione di Visual Studio. Questo collegamento viene avviata una finestra del prompt dei comandi per gli sviluppatori che usa l'architettura di compilazione predefinita di strumenti nativi x86 a 32 bit per compilare codice x86 nativo a 32 bit. Se si preferisce un'architettura di compilazione non predefinito, scegliere uno degli nativo o strumenti di prompt dei comandi per specificare l'architettura di host e di destinazione.

È un modo più veloce per aprire una finestra del prompt dei comandi per gli sviluppatori immettere *prompt dei comandi sviluppatore* nella casella di ricerca desktop, quindi scegliere il risultato desiderato.

## <a name="developer_command_file_locations"></a> Percorsi dei file di comando per gli sviluppatori

Se si preferisce impostare l'ambiente di architettura di compilazione in una finestra del prompt dei comandi esistente, è possibile usare uno dei file di comando (file batch) creato dal programma di installazione per impostare l'ambiente obbligatorio. È consigliabile solo per eseguire questa operazione in una nuova finestra del prompt dei comandi e non è consigliabile si successive cambiare ambiente, nella stessa finestra di comando. Il percorso di questi file dipende dal, la versione di Visual Studio installata e sul percorso e denominazione scelte effettuate durante l'installazione. Per Visual Studio 2017, il percorso di installazione tipica in un computer a 64 bit è \Microsoft Visual Studio\2017 file (x86) \Programmi\\*edition*, dove *edition* potrebbe essere Community, Professional, Enterprise, BuildTools o un altro nome fornito. Per Visual Studio 2015, il percorso di installazione tipico è in \Programmi file (x86) \Microsoft Visual Studio 14.0.

Il file di comando prompt dei comandi sviluppatore principale, vsdevcmd. bat, si trova nella sottodirectory della directory di installazione Common7\Tools. Quando viene specificato alcun parametro, si imposta l'ambiente e l'host e la destinazione build architettura per utilizzare gli strumenti nativi x86 a 32 bit x86 a 32 bit creare codice.

File di comando aggiuntive sono disponibili per impostare le architetture di compilazione specifica, a seconda dell'architettura di processore e le opzioni installate e i carichi di lavoro di Visual Studio. In Visual Studio 2017, queste si trovano nella sottodirectory VC\Auxiliary\Build della directory di installazione di Visual Studio. In Visual Studio 2015, questi si trovano nel VC, VC\bin o VC\bin\\*architetture* le sottodirectory della directory di installazione, in cui *architetture* è uno dei nativo o opzioni del compilatore incrociato. Questi file di comando impostare i parametri predefiniti e chiamare vsdevcmd. bat per configurare l'ambiente di architettura di compilazione specificato. Un'installazione tipica potrebbe includere questi file di comando:

|File di comando|Architetture di host e di destinazione|
|---|---|
|**vcvars32.bat**| Usare gli strumenti nativi x86 a 32 bit x86 a 32 bit creare codice.|
|**vcvars64.bat**| Usare gli strumenti nativi x64 a 64 bit x64 a 64 bit creare codice.|
|**vcvarsx86_amd64.bat**| Usare gli strumenti di cross-nativi x86 a 32 a 64 bit x64 di compilazione codice.|
|**vcvarsamd64_x86.bat**| Usare gli strumenti di cross-bit nativi x64 a 64 bit a 32 bit x86 di compilazione codice.|
|**vcvarsx86_arm.bat**| Usare gli strumenti di cross nativi x86 a 32 bit per compilare codice ARM.|
|**vcvarsamd64_arm.bat**| Usare gli strumenti di cross-bit nativi x64 a 64 bit per compilare codice ARM.|
|**vcvarsall.bat**| Usare i parametri per specificare l'host e architetture di destinazione, nonché le opzioni di SDK e piattaforma. Per un elenco delle opzioni supportate, chiamare usando un **/Help** parametro.|

> [!CAUTION]
> Il file vcvarsall. bat e altri file di comando di Visual Studio possono variare da computer a computer. Non sostituire un file vcvarsall.bat mancante o danneggiato usando un file da un altro computer. Eseguire nuovamente il programma di installazione di Visual Studio per sostituire il file mancante.
>
> Il file vcvarsall.bat varia anche da versione a versione. Se la versione corrente di Visual Studio è installata in un computer che ha anche una versione precedente di Visual Studio, non eseguire vcvarsall. bat o un altro file di comando di Visual Studio da diverse versioni nella stessa finestra del prompt dei comandi.

## <a name="use-the-developer-tools-in-an-existing-command-window"></a>Usare gli strumenti di sviluppo in un prompt dei comandi esistenti

Il modo più semplice per specificare un'architettura di build specifica in un prompt dei comandi esistente è usare il file vcvarsall. bat. È possibile utilizzare vcvarsall. bat per impostare le variabili di ambiente per configurare la riga di comando per la compilazione nativa a 32 o 64 bit, o per la compilazione incrociata per processori ARM, x64 o x86 Microsoft Store, Universal Windows Platform o le piattaforme Windows Desktop; di destinazione Per specificare quali SDK di Windows da usare; e per specificare la versione del set di strumenti della piattaforma. Se viene fornito alcun argomento, vcvarsall. bat Configura le variabili di ambiente per utilizzare il compilatore nativo a 32 bit corrente per x86 destinazioni Windows Desktop. Tuttavia, è possibile usare per configurare qualsiasi di nativi o incrociati gli strumenti di compilazione. Se si specifica una configurazione del compilatore che non è installata o non è disponibile nell'architettura del computer, viene visualizzato un messaggio di errore.

### <a name="vcvarsall-syntax"></a>sintassi di vcvarsall

> **vcvarsall.bat** [*architecture*] [*platform_type*] [*winsdk_version*] [**-vcvars_ver=**_vcversion_]

*architecture*<br/>
Questo argomento facoltativo specifica l'architettura di host e di destinazione da usare. Se *architettura* viene omesso, viene usato l'ambiente di compilazione predefinito. Questi argomenti sono supportati:

|*architecture*|Compilatore|Architettura del computer host|Compilare l'architettura dell'output (destinazione)|
|----------------------------|--------------|----------------------------------|-------------------------------|
|**x86**|x86 nativo a 32 bit|x86, x64|x86|
|**x86\_amd64** oppure **x86\_x64**|x64 su x86 (incrociato)|x86, x64|X64|
|**x86_arm**|ARM su x86 (incrociato)|x86, x64|ARM|
|**x86_arm64**|ARM64 su x86 (incrociato)|x86, x64|ARM64|
|**AMD64** o **x64**|x64 nativo a 64 bit|X64|X64|
|**AMD64\_x86** oppure **x64\_x86**|x86 su x64 incrociato|X64|x86|
|**AMD64\_arm** oppure **x64\_Azure Resource Manager**|ARM su x64 incrociato|X64|ARM|
|**AMD64\_arm64** oppure **x64\_arm64**|ARM64 su x64 incrociato|X64|ARM64|

*platform_type*<br/>
Questo argomento facoltativo consente di specificare **archiviare** oppure **uwp** come il tipo di piattaforma. Per impostazione predefinita, l'ambiente è impostata per compilare App desktop o console.

*winsdk_version*<br/>
Facoltativamente, specifica la versione del SDK di Windows da usare. Per impostazione predefinita, viene usata la versione più recente è stato installato Windows SDK. Per specificare la versione del SDK di Windows, è possibile usare un numero completo di Windows 10 SDK, ad esempio **10.0.10240.0**, oppure specificare **8.1** per usare il SDK di Windows 8.1.

*vcversion*<br/>
Facoltativamente, specifica il set di strumenti del compilatore Visual Studio da usare. Per impostazione predefinita, l'ambiente è impostata per usare il set di strumenti di Visual Studio 2017 del compilatore corrente. Uso **-vcvars_ver=14.0 = 14.0** per specificare il set di strumenti del compilatore di Visual Studio 2015.

<a name="vcvarsall"></a>
#### <a name="to-set-up-the-build-environment-in-an-existing-command-prompt-window"></a>Per configurare l'ambiente di compilazione in una finestra del prompt dei comandi esistente

1. Al prompt dei comandi, usare il comando CD per passare alla directory di installazione di Visual Studio. Quindi, utilizzare nuovamente i CD per passare alla sottodirectory che contiene i file di comando specifiche della configurazione. Per Visual Studio 2017, si tratta della sottodirectory VC\Auxiliary\Build. Per Visual Studio 2015, usare la sottodirectory VC.

1. Immettere il comando per l'ambiente di sviluppo preferito. Ad esempio, per compilare codice ARM per la piattaforma UWP su una piattaforma a 64 bit usando la versione più recente di Windows SDK e il set di strumenti del compilatore di Visual Studio 2017 RTM, è possibile utilizzare questa riga di comando:

   `vcvarsall.bat amd64_arm uwp -vcvars_ver=14.10`

## <a name="create-your-own-command-prompt-shortcut"></a>Creare il proprio collegamento prompt dei comandi

Se si apre la finestra di dialogo proprietà per uno dei collegamenti di prompt dei comandi per gli sviluppatori esistenti, è possibile visualizzare la destinazione del comando usata. Ad esempio, la destinazione per il **x64 nativo prompt dei comandi di strumenti per Visual Studio 2017** collegamento è qualcosa di simile a:

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvars64.bat"`

Set di file batch specifici dell'architettura la *architettura* parametro e chiamare vcvarsall. bat. È possibile passare le stesse opzioni aggiuntive per i file batch come verrebbero passate a vcvarsall. bat o vcvarsall. bat è possibile semplicemente chiamare direttamente. Per specificare i parametri per il proprio scelta rapida di comando, aggiungerli alla fine del comando in virgolette doppie. Ad esempio, per configurare un collegamento per compilare codice ARM per la piattaforma UWP su una piattaforma a 64 bit usando la versione più recente di Windows SDK e il set di strumenti del compilatore di Visual Studio 2017 RTM, usare simile a questa destinazione del comando nel collegamento:

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvarsall.bat amd64_arm uwp -vcvars_ver=14.10"`

È necessario modificare il percorso in modo da riflettere la directory di installazione di Visual Studio.

## <a name="command-line-tools"></a>Strumenti da riga di comando

Per compilare un progetto C/C++ nella riga di comando, Visual Studio fornisce questi strumenti da riga di comando:

[CL](reference/compiling-a-c-cpp-program.md)<br/>
Usare il compilatore (cl.exe) per compilare e collegare file del codice sorgente in app, librerie e DLL.

[Collegamento](reference/linking.md)<br/>
Usare il linker (link.exe) per collegare file oggetto e librerie compilati in app e DLL.

[MSBuild](msbuild-visual-cpp.md)<br/>
Usare MSBuild (msbuild.exe) e un file di progetto (vcxproj) per configurare una compilazione e richiamare indirettamente il set di strumenti. Ciò equivale all'esecuzione di **compilare** progetto oppure **Compila soluzione** comando nell'IDE di Visual Studio. Esecuzione di MSBuild dalla riga di comando è uno scenario avanzato e in genere sconsigliato.

[DEVENV](/visualstudio/ide/reference/devenv-command-line-switches)<br/>
Usare DEVENV (devenv.exe) combinato con un'opzione della riga di comando, ad esempio, **/Build** o **/Clean**, ovvero per eseguire determinati comandi di compilazione senza visualizzare l'IDE di Visual Studio. In genere questo è preferibile rispetto all'uso di MSBuild direttamente in quanto è possibile consentire a Visual Studio gestisca la complessità di MSBuild.

[NMAKE](reference/nmake-reference.md)<br/>
Usare NMAKE (nmake.exe) in Windows per compilare progetti C++ basati su un makefile tradizionale.

Quando si compila dalla riga di comando, il comando F1 non è disponibile per il supporto immediato. In alternativa, è possibile usare un motore di ricerca per ottenere informazioni su avvisi, errori e messaggi oppure è possibile usare i file della Guida offline. Usare la ricerca nella [docs.microsoft.com](https://docs.microsoft.com/cpp/), immettere la stringa di ricerca nella casella di ricerca nella parte superiore della pagina.

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
Viene descritto come avviare una finestra del prompt dei comandi con le variabili di ambiente necessarie impostato per le compilazioni da riga di comando che hanno come destinazione x86, x64 e ARM piattaforme usando un set di strumenti a 32 o 64 bit.

[Riferimenti a NMAKE](reference/nmake-reference.md)<br/>
Fornisce collegamenti ad articoli in cui viene descritta l'utilità Microsoft Program Maintenance Utility (NMAKE.EXE).

[MSBuild dalla riga di comando - C++](msbuild-visual-cpp.md)<br/>
Fornisce collegamenti ad articoli che illustrano come usare msbuild.exe dalla riga di comando.

## <a name="related-sections"></a>Sezioni correlate

[/MD, /MT, /LD (uso della libreria di runtime)](reference/md-mt-ld-use-run-time-library.md)<br/>
Descrive come usare queste opzioni del compilatore per l'utilizzo di una libreria di runtime di debug o di rilascio.

[Opzioni del compilatore C/C++](reference/compiler-options.md)<br/>
Fornisce collegamenti ad articoli in cui vengono descritte le opzioni del compilatore C e C++ e fornite informazioni su CL.exe.

[Opzioni del linker MSVC](reference/linker-options.md)<br/>
Fornisce collegamenti ad articoli in cui vengono descritte le opzioni del linker e fornite informazioni su CL.exe.

[Strumenti di compilazione MSVC aggiuntive](reference/c-cpp-build-tools.md)<br/>
Offre gli strumenti inclusi in Visual Studio per creare collegamenti a C/C++.

## <a name="see-also"></a>Vedere anche

[Progetti e sistemi di compilazione](projects-and-build-systems-cpp.md)