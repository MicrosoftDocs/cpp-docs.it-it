---
title: Creare e configurare un progetto CMake per Linux in Visual Studio
description: Come creare, configurare, modificare e compilare un progetto CMake per Linux in Visual Studio
ms.date: 06/22/2020
ms.assetid: f8707b32-f90d-494d-ae0b-1d44425fdc25
ms.openlocfilehash: 2149b102c452149070d59c9645ce34a5977a6057
ms.sourcegitcommit: f9344b09a734e8b05a7494415991a22b7aec5ae8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/23/2020
ms.locfileid: "85269728"
---
# <a name="create-and-configure-a-linux-cmake-project"></a>Creare e configurare un progetto CMake per Linux

::: moniker range="vs-2015"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="before-you-begin"></a>Prima di iniziare

Assicurarsi innanzitutto di aver installato il carico di lavoro **Sviluppo di applicazioni Linux con C++**, incluso il componente CMake. Vedere [Installare il carico di lavoro Linux C++ in Visual Studio](download-install-and-setup-the-linux-development-workload.md).

Nel sistema Linux assicurarsi che sia installato quanto segue:

- gcc
- gdb
- rsync
- zip
- Ninja-compilazione

::: moniker-end

::: moniker range="vs-2019"

Il supporto Linux per i progetti CMake richiede che il computer di destinazione disponga di una versione recente di CMake. Spesso, la versione offerta da Gestione pacchetti predefinita di una distribuzione non è abbastanza recente per supportare tutte le funzionalità richieste da Visual Studio. Visual Studio 2019 rileva se nel sistema Linux è installata una versione recente di CMake. Se non viene trovato alcun valore, Visual Studio Visualizza una barra informazioni nella parte superiore del riquadro dell'editor. Consente di installare CMake da [https://github.com/Microsoft/CMake/releases](https://github.com/Microsoft/CMake/releases) .

Il supporto CMake in Visual Studio richiede il supporto della modalità server introdotta in CMake 3.8. In Visual Studio 2019 si consiglia la versione 3.14 o successiva.

::: moniker-end

::: moniker range="vs-2017"

Il supporto CMake in Visual Studio richiede il supporto della modalità server introdotta in CMake 3.8. Per una variante CMake fornita da Microsoft, scaricare i file binari predefiniti più recenti all'indirizzo [https://github.com/Microsoft/CMake/releases](https://github.com/Microsoft/CMake/releases) .

I file binari vengono installati in `~/.vs/cmake` . Dopo la distribuzione dei file binari, il progetto viene rigenerato automaticamente. Se la CMake specificata dal `cmakeExecutable` campo in *CMakeSettings.json* non è valida (non esiste o è una versione non supportata) e i file binari predefiniti sono presenti, Visual Studio Ignora `cmakeExecutable` e usa i file binari predefiniti.

:::moniker-end

::: moniker range="vs-2019"

## <a name="create-a-new-linux-cmake-project"></a>Creare un nuovo progetto CMake per Linux

Per creare un nuovo progetto CMake per Linux in Visual Studio 2019:

1. Selezionare **File > Nuovo progetto** in Visual Studio o premere **CTRL + MAIUSC + N**.
1. Impostare **Linguaggio** su **C++** e cercare "CMake". Scegliere quindi **Avanti**. Immettere un **nome** e una **posizione** e scegliere **Crea**.

Visual Studio crea un file di *CMakeLists.txt* minimo con solo il nome del file eseguibile e la versione minima di CMake richiesta. È possibile modificare manualmente questo file come si preferisce. Visual Studio non sovrascriverà mai le modifiche. In questo file è possibile specificare gli argomenti della riga di comando CMake e le variabili di ambiente. Fare clic con il pulsante destro del mouse sul file radice *CMakeLists.txt* in **Esplora soluzioni** e scegliere **Impostazioni CMake per progetto**. Per specificare le opzioni per il debug, fare clic con il pulsante destro del mouse sul nodo del progetto e scegliere **Impostazioni per debug e avvio**.

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="open-a-cmake-project-folder"></a>Aprire una cartella del progetto CMake

Quando si apre una cartella che contiene un progetto CMake esistente, Visual Studio usa le variabili nella cache CMake per configurare automaticamente IntelliSense e le compilazioni. Le impostazioni di configurazione e debug locali vengono archiviate in file JSON. Facoltativamente, è possibile condividere questi file con altri utenti che usano Visual Studio.

Visual Studio non modifica i file di *CMakeLists.txt* . Viene lasciato da solo, in modo che altri utenti che lavorano sullo stesso progetto possano continuare a usare gli strumenti esistenti. Visual Studio rigenera la cache quando si salvano le modifiche in *CMakeLists.txt* o in alcuni casi per *CMakeSettings.jssu*. Tuttavia, se si usa una configurazione **della cache esistente** , Visual Studio non modifica la cache.

Per informazioni generali sul supporto di CMake in Visual Studio, vedere [Progetti CMake in Visual Studio](../build/cmake-projects-in-visual-studio.md). Leggere tale articolo prima di continuare.

Per iniziare, scegliere **file**  >  **Apri**  >  **cartella** dal menu principale oppure digitare `devenv.exe <foldername>` in una finestra del [prompt dei comandi](../build/building-on-the-command-line.md) per gli sviluppatori. La cartella aperta dovrebbe contenere un file di *CMakeLists.txt* , insieme al codice sorgente.

Nell'esempio seguente vengono illustrati un semplice file di *CMakeLists.txt* e un file con estensione cpp:

```cpp
// hello.cpp

#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Hello from Linux CMake" << std::endl;
}
```

*CMakeLists.txt*:

```txt
cmake_minimum_required(VERSION 3.8)
project (hello-cmake)
add_executable(hello-cmake hello.cpp)
```

## <a name="choose-a-linux-target"></a>Scegliere una destinazione Linux

Non appena si apre la cartella, Visual Studio analizza il file di *CMakeLists.txt* e specifica una destinazione Windows di **x86-debug**. Per specificare come destinazione un sistema Linux remoto, modificare le impostazioni del progetto scegliendo **Linux-Debug** o **Linux-Release**. (Vedere [Configurare le impostazioni di CMake per Linux](#configure_cmake_linux) di seguito.)

::: moniker-end

::: moniker range="vs-2019"

Per fare riferimento a sottosistema Windows per Linux, fare clic su **Gestisci configurazioni** nell'elenco a discesa Configurazione sulla barra degli strumenti principale. Quindi premere il pulsante **Aggiungi configurazione** e scegliere **WSL-debug** o **WSL-Release** se si usa GCC. Usare le varianti Clang se si usa il set di strumenti Clang/LLVM.

**Visual Studio 2019 versione 16,1** Quando la destinazione è WSL, non è necessaria alcuna copia di origini o intestazioni. Questo perché il compilatore in Linux ha accesso diretto ai file di origine nel file system di Windows. (In Windows 10 versione 1903 e versioni successive, le applicazioni Windows possono accedere direttamente ai file di intestazione di Linux. Visual Studio non sfrutta ancora questa funzionalità.

::: moniker-end

::: moniker range=">=vs-2017"

Per impostazione predefinita, in Visual Studio viene scelto il primo sistema remoto nell'elenco in **strumenti**  >  **Opzioni**  >  **Cross Platform**  >  **gestione connessione** multipiattaforma per destinazioni remote. Se non viene trovata alcuna connessione remota, viene richiesto di crearne una. Per altre informazioni, vedere [Connettersi al computer Linux remoto](connect-to-your-remote-linux-computer.md).

Se si specifica una destinazione Linux remota, il codice sorgente viene copiato nel sistema remoto.

Dopo la selezione di una destinazione, CMake viene eseguito automaticamente nel sistema Linux per generare la cache CMake per il progetto.

![Genera cache CMake in Linux](media/cmake-linux-1.png "Generare la cache CMake in Linux")

### <a name="intellisense"></a>Intellisense

Per rendere disponibile il supporto IntelliSense per le intestazioni nei sistemi Linux remoti, Visual Studio copia automaticamente le intestazioni dal computer Linux in una directory nel computer Windows locale. Per altre informazioni, vedere [IntelliSense per le intestazioni remote](configure-a-linux-project.md#remote_intellisense).

### <a name="locale"></a>Impostazioni locali

Per altre informazioni, vedere [impostazioni locali di destinazione per Linux](configure-a-linux-project.md#locale).

## <a name="debug-the-cmake-project"></a><a name="debug_cmake_project"></a> Eseguire il debug del progetto CMake

Per eseguire il debug del codice sul sistema di destinazione specificato, impostare un punto di interruzione. Selezionare la destinazione CMake come elemento di avvio nel menu della barra degli strumenti accanto all'impostazione del progetto. Quindi scegliere **&#x23f5; avvia** sulla barra degli strumenti o premere **F5**.

Per personalizzare gli argomenti della riga di comando del programma, premere il pulsante **cambia destinazioni** nella parte superiore di **Esplora soluzioni** , quindi scegliere **visualizzazione destinazioni**. Fare quindi clic con il pulsante destro del mouse sulla destinazione e scegliere **Impostazioni per debug e avvio**. Questo comando apre o crea una *launch.vs.jsnel* file di configurazione che contiene informazioni sul programma. Per specificare il percorso dei file di origine, aggiungere una proprietà **sourceFileMap** al file, come illustrato nell'esempio seguente:

```json
"MIMode": "gdb",
"externalConsole": true,
"sourceFileMap": {
"c/Users/USER/source/repos/CMAKEPROJECTNAME": "C:\\Users\\USER\\source\\repos\\CMAKEPROJECTNAME"
},
"remoteMachineName": "${debugInfo.remoteMachineName}",
```

Per specificare argomenti aggiuntivi, aggiungerli nella matrice JSON `args`. Per altre informazioni, vedere [Progetti Apri cartella per C++](../build/open-folder-projects-cpp.md) e [Configurare le sessioni di debug di CMake](../build/configure-cmake-debugging-sessions.md).

## <a name="configure-cmake-settings-for-linux"></a><a name="configure_cmake_linux"></a>Configurare le impostazioni CMake per Linux

Un *CMakeSettings.jssu* file in un progetto CMake Linux può specificare tutte le proprietà elencate in [personalizzare le impostazioni CMake](../build/customize-cmake-settings.md), oltre a proprietà aggiuntive che controllano le impostazioni di compilazione nel computer Linux remoto.

::: moniker-end

::: moniker range="vs-2019"

Per modificare le impostazioni di CMake predefinite in Visual Studio 2019, sulla barra degli strumenti principale aprire l'elenco a discesa **configurazione** e scegliere **Gestisci configurazioni**.

![Configurazioni di gestione CMake](../build/media/vs2019-cmake-manage-configurations.png "Elenco a discesa delle configurazioni di CMake")

Questo comando Visualizza l' **Editor delle impostazioni CMake**, che è possibile usare per modificare il *CMakeSettings.js* nel file nella cartella radice del progetto. È anche possibile aprire il file direttamente facendo clic sul pulsante **Modifica JSON** nell'editor. Per altre informazioni, vedere [personalizzare le impostazioni CMake](../build/customize-cmake-settings.md).

La configurazione Linux-Debug predefinita in Visual Studio 2019 versione 16.1 e versioni successive è illustrata di seguito:

```json
{
      "name": "Linux-Debug",
      "generator": "Unix Makefiles",
      "configurationType": "Debug",
      "cmakeExecutable": "/usr/bin/cmake",
      "remoteCopySourcesExclusionList": [ ".vs", ".git", "out" ],
      "cmakeCommandArgs": "",
      "buildCommandArgs": "",
      "ctestCommandArgs": "",
      "inheritEnvironments": [ "linux_x64" ],
      "remoteMachineName": "${defaultRemoteMachineName}",
      "remoteCMakeListsRoot": "$HOME/.vs/${projectDirName}/${workspaceHash}/src",
      "remoteBuildRoot": "$HOME/.vs/${projectDirName}/${workspaceHash}/out/build/${name}",
      "remoteInstallRoot": "$HOME/.vs/${projectDirName}/${workspaceHash}/out/install/${name}",
      "remoteCopySources": true,
      "rsyncCommandArgs": "-t --delete --delete-excluded",
      "remoteCopyBuildOutput": false,
      "remoteCopySourcesMethod": "rsync",
      "addressSanitizerRuntimeFlags": "detect_leaks=0",
      "variables": []
    }
  ]
}
```

::: moniker-end

::: moniker range="vs-2017"

Per modificare le impostazioni di CMake predefinite in Visual Studio 2017, scegliere **CMake**  >  **Change CMake Settings**  >  **CMakeLists.txt** dal menu principale. In alternativa, fare clic con il pulsante destro del mouse su *CMakeSettings.txt* in **Esplora soluzioni** e scegliere **Modifica impostazioni CMake**. Visual Studio crea quindi un nuovo *CMakeSettings.js* nel file nella cartella radice del progetto. È possibile aprire il file usando l'**Editor impostazioni CMake** o modificare il file direttamente. Per altre informazioni, vedere [Customize CMake settings](../build/customize-cmake-settings.md) (Personalizzare le impostazioni di CMake).

L'esempio seguente illustra la configurazione predefinita per Linux-Debug in Visual Studio 2017 (e Visual Studio 2019 versione 16.0) basata sull'esempio di codice precedente:

```json
{
      "name": "Linux-Debug",
      "generator": "Unix Makefiles",
      "remoteMachineName": "${defaultRemoteMachineName}",
      "configurationType": "Debug",
      "remoteCMakeListsRoot": "/var/tmp/src/${workspaceHash}/${name}",
      "cmakeExecutable": "/usr/local/bin/cmake",
      "buildRoot": "${env.LOCALAPPDATA}\\CMakeBuilds\\${workspaceHash}\\build\\${name}",
      "installRoot": "${env.LOCALAPPDATA}\\CMakeBuilds\\${workspaceHash}\\install\\${name}",
      "remoteBuildRoot": "/var/tmp/build/${workspaceHash}/build/${name}",
      "remoteInstallRoot": "/var/tmp/build/${workspaceHash}/install/${name}",
      "remoteCopySources": true,
      "remoteCopySourcesOutputVerbosity": "Normal",
      "remoteCopySourcesConcurrentCopies": "10",
      "remoteCopySourcesMethod": "rsync",
      "remoteCopySourcesExclusionList": [".vs", ".git"],
      "rsyncCommandArgs" : "-t --delete --delete-excluded",
      "remoteCopyBuildOutput" : "false",
      "cmakeCommandArgs": "",
      "buildCommandArgs": "",
      "ctestCommandArgs": "",
      "inheritEnvironments": [ "linux-x64" ]
}
```

::: moniker-end

::: moniker range=">=vs-2017"

Per altre informazioni su queste impostazioni, vedere [Informazioni di riferimento su CMakeSettings.json](../build/cmakesettings-reference.md).

## <a name="optional-settings"></a>Impostazioni facoltative

Per un maggiore controllo, è possibile usare le impostazioni facoltative seguenti:

```json
{
      "remotePrebuildCommand": "",
      "remotePreGenerateCommand": "",
      "remotePostbuildCommand": "",
}
```

Queste opzioni consentono di eseguire comandi nel sistema Linux prima e dopo la compilazione e prima della generazione di CMake. I valori possono essere costituiti da qualsiasi comando valido nel sistema remoto. L'output viene reindirizzato a Visual Studio.

## <a name="see-also"></a>Vedere anche

[Utilizzo di Proprietà del progetto](../build/working-with-project-properties.md)<br/>
[Progetti CMake in Visual Studio](../build/cmake-projects-in-visual-studio.md)<br/>
[Connettersi al computer Linux remoto](connect-to-your-remote-linux-computer.md)<br/>
[Personalizzare le impostazioni di CMake](../build/customize-cmake-settings.md)<br/>
[Configurare le sessioni di debug di CMake](../build/configure-cmake-debugging-sessions.md)<br/>
[Distribuire, eseguire e sottoporre a debug il progetto Linux](deploy-run-and-debug-your-linux-project.md)<br/>
[Informazioni di riferimento sulle configurazioni predefinite CMake](../build/cmake-predefined-configuration-reference.md)

::: moniker-end
