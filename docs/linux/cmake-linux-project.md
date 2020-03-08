---
title: Creare e configurare un progetto CMake per Linux in Visual Studio
description: Come creare, configurare, modificare e compilare un progetto CMake per Linux in Visual Studio
ms.date: 10/04/2019
ms.assetid: f8707b32-f90d-494d-ae0b-1d44425fdc25
ms.openlocfilehash: 9c6a60162c2dbbab8e348b27d1987d7f1001bee0
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78865655"
---
# <a name="create-and-configure-a-linux-cmake-project"></a>Creare e configurare un progetto CMake per Linux

::: moniker range="vs-2015"

Il supporto per Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range="vs-2019"

Per creare un nuovo progetto CMake per Linux in Visual Studio 2019:

1. Selezionare **File > Nuovo progetto** in Visual Studio o premere **CTRL + MAIUSC + N**.
1. Impostare **Linguaggio** su **C++** e cercare "CMake". Scegliere quindi **Avanti**. Immettere un **nome** e una **posizione** e scegliere **Crea**.

Visual Studio crea un file CMakeLists.txt minimo con solo il nome dell'eseguibile e la versione minima di CMake richiesta. È possibile modificare manualmente questo file come si preferisce. Visual Studio non sovrascriverà mai le modifiche. È possibile specificare gli argomenti della riga di comando CMake e le variabili di ambiente facendo clic con il pulsante destro del mouse sul file CMakeLists. txt radice in **Esplora soluzioni** e scegliendo **Impostazioni CMake per progetto**. Per specificare le opzioni per il debug, fare clic con il pulsante destro del mouse sul nodo del progetto e scegliere **Impostazioni per debug e avvio**.

::: moniker-end

Quando si apre una cartella che contiene un progetto CMake esistente, Visual Studio usa le variabili nella cache CMake per configurare IntelliSense e le compilazioni automatiche. La configurazione locale e le impostazioni di debug vengono archiviate in file JSON che possono essere facoltativamente condivisi con altri utenti che usano Visual Studio.

Poiché Visual Studio non modifica i file CMakeLists.txt, gli altri utenti che lavorano sullo stesso progetto possono continuare a usare gli strumenti già in uso. Visual Studio rigenera la cache quando si salvano le modifiche in CMakeLists. txt o in alcuni casi in CMakeSettings. JSON. Se si usa una configurazione **Cache esistente**, però, Visual Studio non modifica la cache.

Per informazioni generali sul supporto di CMake in Visual Studio, vedere [Progetti CMake in Visual Studio](../build/cmake-projects-in-visual-studio.md). Leggere tale articolo prima di continuare.

## <a name="before-you-begin"></a>Prima di iniziare

Assicurarsi innanzitutto di aver installato il carico di lavoro **Sviluppo di applicazioni Linux con C++** , incluso il componente CMake. Vedere [Installare il carico di lavoro Linux C++ in Visual Studio](download-install-and-setup-the-linux-development-workload.md). 

Nel sistema Linux assicurarsi che sia installato quanto segue: 

- gcc
- gdb
- rsync
- zip 

::: moniker range="vs-2019"

Per il supporto in Linux di progetti CMake è necessario che nel computer di destinazione sia installata una versione recente di CMake. La versione offerta dalla funzionalità di gestione pacchetti predefinita di una distribuzione non è abbastanza recente per supportare tutte le funzionalità richieste da Visual Studio. Visual Studio 2019 rileva se nel sistema Linux è installata una versione recente di CMake. Se non ne trova alcuna, in una barra informazioni nella parte superiore del riquadro dell'editor Visual Studio propone di installarne una da [https://github.com/Microsoft/CMake/releases](https://github.com/Microsoft/CMake/releases).

Il supporto CMake in Visual Studio richiede il supporto della modalità server introdotta in CMake 3.8. In Visual Studio 2019 si consiglia la versione 3.14 o successiva.

::: moniker-end

::: moniker range="vs-2017"

Il supporto CMake in Visual Studio richiede il supporto della modalità server introdotta in CMake 3.8. Per una variante di CMake fornita da Microsoft, scaricare la versione più recente dei file binari precompilati all'indirizzo [https://github.com/Microsoft/CMake/releases](https://github.com/Microsoft/CMake/releases).

I file binari verranno installati in `~/.vs/cmake`. Dopo aver distribuito i file binari, il progetto verrà rigenerato automaticamente. Si noti che se il file CMake specificato dal campo `cmakeExecutable` in `CMakeSettings.json` non è valido (non esiste o è una versione non supportata) e sono presenti file binari precompilati, Visual Studio ignorerà `cmakeExecutable` e userà i file binari precompilati.

:::moniker-end

## <a name="open-a-folder"></a>Aprire una cartella

Per iniziare, scegliere **File** > **Apri** > **Cartella** dal menu principale o digitare `devenv.exe <foldername>` nella riga di comando. La cartella aperta conterrà un file CMakeLists.txt, oltre al codice sorgente.
L'esempio seguente illustra un semplice file CMakeLists.txt e un file CPP:

```cpp
// hello.cpp

#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Hello from Linux CMake" << std::endl;
}
```

CMakeLists.txt:

```cmd
cmake_minimum_required(VERSION 3.8)
project (hello-cmake)
add_executable(hello-cmake hello.cpp)
```

## <a name="choose-a-linux-target"></a>Scegliere una destinazione Linux

Non appena si apre la cartella, Visual Studio analizza il file CMakeLists.txt e specifica la destinazione Windows **x86-Debug**. Per specificare come destinazione un sistema Linux remoto, modificare le impostazioni del progetto scegliendo **Linux-Debug** o **Linux-Release**. (Vedere [Configurare le impostazioni di CMake per Linux](#configure_cmake_linux) di seguito.)

::: moniker range="vs-2019"

Per impostare come destinazione il sottosistema Windows per Linux, fare clic su **Gestisci configurazioni** nell'elenco a discesa delle configurazioni nella barra degli strumenti principale. Scegliere quindi il pulsante **Aggiungi configurazione** e scegliere **WSL-Debug** o **WSL-Release** se si usa GCC o le varianti Clang se si usa il set di strumenti Clang/LLVM. 

**Visual Studio 2019 versione 16.1** Se si specifica WSL come destinazione, non è necessaria alcuna copia di file di origine o intestazioni, perché il compilatore in Linux ha accesso diretto al file system Windows in cui si trovano i file di origine. In Windows versione 1903 e versioni successive, le applicazioni di Windows possono accedere in modo analogo ai file di intestazione di Linux direttamente, ma Visual Studio non sfrutta ancora questa funzionalità.

::: moniker-end

Per le destinazioni remote, per impostazione predefinita Visual Studio sceglie il primo sistema remoto nell'elenco in **Strumenti** > **Opzioni** > **Multipiattaforma** > **Gestione connessioni**. Se non sono disponibili connessioni remote, viene chiesto di crearne una. Per altre informazioni, vedere [Connettersi al computer Linux remoto](connect-to-your-remote-linux-computer.md).

Se si specifica una destinazione Linux remota, il codice sorgente viene copiato nel sistema remoto.

Dopo la selezione di una destinazione, CMake viene eseguito automaticamente nel sistema Linux per generare la cache CMake per il progetto. 

![Genera cache CMake in Linux](media/cmake-linux-1.png "Generare la cache CMake in Linux")

Per rendere disponibile il supporto IntelliSense per le intestazioni nei sistemi Linux remoti, Visual Studio copia automaticamente le intestazioni dal computer Linux in una directory nel computer Windows locale. Per altre informazioni, vedere [IntelliSense per le intestazioni remote](configure-a-linux-project.md#remote_intellisense).

## <a name="debug_cmake_project"></a> Eseguire il debug del progetto CMake

Per eseguire il debug del codice nel sistema di destinazione di debug specificato, impostare un punto di interruzione, selezionare la destinazione CMake come elemento di avvio dal menu della barra degli strumenti accanto all'impostazione del progetto e scegliere **&#x23f5; Avvia** sulla barra degli strumenti o premere F5.

Per personalizzare gli argomenti della riga di comando del programma, scegliere il pulsante **Switch Targets** (Cambia destinazioni) nella parte superiore di **Esplora soluzioni** e quindi scegliere **Visualizzazione destinazioni**. Fare quindi clic con il pulsante destro del mouse sulla destinazione e scegliere **Impostazioni per debug e avvio**. Verrà aperto o creato un file di configurazione launch.vs.json che contiene informazioni sul programma. Per specificare il percorso dei file di origine, aggiungere una proprietà **sourceFileMap** al file, come illustrato nell'esempio seguente:

```json
"MIMode": "gdb",
"externalConsole": true,
"sourceFileMap": {
"c/Users/USER/source/repos/CMAKEPROJECTNAME": "C:\\Users\\USER\\source\\repos\\CMAKEPROJECTNAME"
},
"remoteMachineName": "${debugInfo.remoteMachineName}",
```

Per specificare argomenti aggiuntivi, aggiungerli nella matrice JSON `args`. Per altre informazioni, vedere [Progetti Apri cartella per C++](../build/open-folder-projects-cpp.md) e [Configurare le sessioni di debug di CMake](../build/configure-cmake-debugging-sessions.md).

## <a name="configure_cmake_linux"></a> Configurare le impostazioni di CMake per Linux

Un file CMakeSettings.json in un progetto CMake per Linux può specificare tutte le proprietà elencate in [Personalizzare le impostazioni di CMake](../build/customize-cmake-settings.md) e altre proprietà che controllano le impostazioni di compilazione nel computer Linux remoto. 

::: moniker range="vs-2019"

Per cambiare le impostazioni predefinite di CMake in Visual Studio 2019, sulla barra degli strumenti principale aprire l'elenco a discesa **Configurazione** e scegliere **Gestisci configurazioni**. 

![Configurazioni di gestione CMake](../build/media/vs2019-cmake-manage-configurations.png "Elenco a discesa delle configurazioni di CMake")

Verrà visualizzato l'**Editor impostazioni CMake**, che è possibile usare per modificare il file `CMakeSettings.json` presente nella cartella radice del progetto. È anche possibile aprire il file direttamente facendo clic sul pulsante **Modifica JSON** nell'editor. Per altre informazioni, vedere [Personalizzare le impostazioni di CMake](../build/customize-cmake-settings.md).

::: moniker-end

::: moniker range="vs-2017"

Per cambiare le impostazioni di CMake predefinite, in Visual Studio 2017 scegliere **CMake | Modifica impostazioni di CMake | CMakeLists.txt** dal menu principale o fare clic con il pulsante destro del mouse su CMakeSettings.txt in **Esplora soluzioni** e scegliere **Modifica impostazioni di CMake**. Visual Studio crea quindi un nuovo file `CMakeSettings.json` nella cartella dei progetti radice. È possibile aprire il file usando l'**Editor impostazioni CMake** o modificare il file direttamente. Per altre informazioni, vedere [Customize CMake settings](../build/customize-cmake-settings.md) (Personalizzare le impostazioni di CMake).

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

::: moniker range="vs-2019"

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

[Working with Project Properties](../build/working-with-project-properties.md) (Utilizzo di Proprietà del progetto)<br/>
[Progetti CMake in Visual Studio](../build/cmake-projects-in-visual-studio.md)<br/>
[Connettersi al computer Linux remoto](connect-to-your-remote-linux-computer.md)<br/>
[Personalizzare le impostazioni di CMake](../build/customize-cmake-settings.md)<br/>
[Configurare le sessioni di debug di CMake](../build/configure-cmake-debugging-sessions.md)<br/>
[Distribuire, eseguire e sottoporre a debug il progetto Linux](deploy-run-and-debug-your-linux-project.md)<br/>
[Informazioni di riferimento sulle configurazioni predefinite CMake](../build/cmake-predefined-configuration-reference.md)<br/>
