---
title: Configurare un progetto CMake per Linux in Visual Studio
description: Come configurare le impostazioni di CMake per Linux in Visual Studio
ms.date: 08/08/2020
ms.openlocfilehash: c4c2d4682b6d18f9175a92a810b3f86d8132fc0c
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92921919"
---
# <a name="configure-a-linux-cmake-project-in-visual-studio"></a>Configurare un progetto CMake per Linux in Visual Studio

::: moniker range="msvc-140"
Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare **l'elenco a discesa delle versioni posizionato** sopra il sommario per **Visual Studio 2017** o **Visual Studio 2019** .
::: moniker-end

::: moniker range=">=msvc-150"
Questo argomento descrive come aggiungere una configurazione Linux a un progetto CMake destinato a un sistema Linux remoto o a un sottosistema Windows per Linux (WSL). Continua la serie che inizia con la [creazione di un progetto CMake Linux in Visual Studio](cmake-linux-project.md). Se si usa MSBuild, vedere invece [configurare un progetto MSBuild Linux in Visual Studio](configure-a-linux-project.md)

## <a name="add-a-linux-configuration"></a>Aggiungere una configurazione Linux

Una configurazione può essere usata per piattaforme diverse (Windows, WSL, un sistema remoto) con lo stesso codice sorgente. Viene anche usata una configurazione per impostare i compilatori, passare le variabili di ambiente e personalizzare la modalità di chiamata CMake. Il *CMakeSettings.jssu* file specifica alcune o tutte le proprietà elencate in [personalizzare le impostazioni CMake](../build/customize-cmake-settings.md), oltre a proprietà aggiuntive che controllano le impostazioni di compilazione nel computer Linux remoto.
::: moniker-end

::: moniker range="msvc-150"
Per modificare le impostazioni di CMake predefinite in Visual Studio 2017, scegliere **CMake**  >  **Change CMake Settings**  >  **CMakeLists.txt** dal menu principale. In alternativa, fare clic con il pulsante destro del mouse su *CMakeLists.txt* in **Esplora soluzioni** e scegliere **Modifica impostazioni CMake** . Visual Studio crea quindi un nuovo *CMakeSettings.js* nel file nella cartella radice del progetto. Per apportare modifiche, aprire il file e modificarlo direttamente. Per altre informazioni, vedere [Customize CMake settings](../build/customize-cmake-settings.md) (Personalizzare le impostazioni di CMake).

La configurazione predefinita per Linux-Debug in Visual Studio 2017 (e Visual Studio 2019 versione 16,0) ha un aspetto simile al seguente:

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

::: moniker range="msvc-160"
Per modificare le impostazioni di CMake predefinite in Visual Studio 2019, sulla barra degli strumenti principale aprire l'elenco a discesa **configurazione** e scegliere **Gestisci configurazioni** .

![Configurazioni di gestione CMake](../build/media/vs2019-cmake-manage-configurations.png "Elenco a discesa delle configurazioni di CMake")

Questo comando apre l' **Editor delle impostazioni CMake** , che è possibile usare per modificare il *CMakeSettings.js* nel file nella cartella radice del progetto. È anche possibile aprire il file con l'editor JSON facendo clic sul pulsante **modifica JSON** nell'editor. Per altre informazioni, vedere [personalizzare le impostazioni CMake](../build/customize-cmake-settings.md).

La configurazione predefinita di Linux-Debug in Visual Studio 2019 versione 16,1 e successive è simile alla seguente:

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

In Visual Studio 2019 versione 16,6 o successiva, Ninja è il generatore predefinito per le configurazioni destinate a un sistema remoto o a WSL. Per ulteriori informazioni, vedere questo post nel [Blog del team di C++](https://devblogs.microsoft.com/cppblog/linux-development-with-visual-studio-first-class-support-for-gdbserver-improved-build-times-with-ninja-and-updates-to-the-connection-manager/).

::: moniker-end
::: moniker range=">=msvc-150"
Per altre informazioni su queste impostazioni, vedere [Informazioni di riferimento su CMakeSettings.json](../build/cmakesettings-reference.md).

Quando si esegue una compilazione:

- Se la destinazione è un sistema remoto, Visual Studio sceglie il primo sistema remoto nell'elenco in **strumenti** > **Opzioni** > **Cross Platform** > **gestione connessione** multipiattaforma per impostazione predefinita per le destinazioni remote.
- Se non viene trovata alcuna connessione remota, viene richiesto di crearne una. Per altre informazioni, vedere [Connettersi al computer Linux remoto](connect-to-your-remote-linux-computer.md).

## <a name="choose-a-linux-target"></a>Scegliere una destinazione Linux

Quando si apre una cartella del progetto CMake, Visual Studio analizza il file di *CMakeLists.txt* e specifica una destinazione Windows **x86-debug** . Per fare riferimento a un sistema Linux remoto, modificare le impostazioni di progetto in base al compilatore Linux. Se ad esempio si usa GCC in Linux e si esegue la compilazione con le informazioni di debug, si sceglie:  **linux-gcc-debug** o **linux-gcc-Release** .

Se si specifica una destinazione Linux remota, il codice sorgente viene copiato nel sistema remoto.

Dopo aver selezionato una destinazione, CMake viene eseguito automaticamente nel sistema Linux per generare la cache CMake per il progetto:

![Genera cache CMake in Linux](media/cmake-linux-1.png "Generare la cache CMake in Linux")

::: moniker-end
::: moniker range="msvc-160"

### <a name="target-windows-subsystem-for-linux"></a>Sottosistema Windows di destinazione per Linux

Se la destinazione è il sottosistema Windows per Linux (WSL), non è necessario aggiungere una connessione remota.

Per WSL di destinazione, selezionare **Gestisci configurazioni** nell'elenco a discesa Configurazione sulla barra degli strumenti principale:

![Configurazioni di gestione CMake](../build/media/vs2019-cmake-manage-configurations.png "Elenco a discesa delle configurazioni di CMake")

Viene visualizzata la finestra **CMakeSettings.js** .

![Aggiungere la configurazione](media/cmake-linux-configurations.png "Aggiungere una configurazione a impostazioni CMake")

Premere **Aggiungi configurazione** (il pulsante verde "+"), quindi scegliere **linux-gcc-debug** o **linux-gcc-Release** se si usa GCC. Usare le varianti Clang se si usa il set di strumenti Clang/LLVM.  Premere **Select** , quindi **CTRL + S** per salvare la configurazione.

**Visual Studio 2019 versione 16,1** Quando si fa riferimento a WSL, non è necessario che Visual Studio copi i file di origine e mantenga due copie sincrone della struttura di compilazione perché il compilatore in Linux ha accesso diretto ai file di origine nelle finestre di file system montate.
::: moniker-end
::: moniker range=">=msvc-150"

### <a name="intellisense"></a>IntelliSense

Con IntelliSense per C++ accurato è necessario l'accesso alle intestazioni C++ a cui fanno riferimento i file di origine C++. Visual Studio usa automaticamente le intestazioni a cui fa riferimento un progetto CMake da Linux a Windows per offrire un'esperienza IntelliSense completamente fedele. Per altre informazioni, vedere [IntelliSense per le intestazioni remote](configure-a-linux-project.md#remote_intellisense).

### <a name="locale-setting"></a>Impostazioni locali

Le impostazioni della lingua di Visual Studio non vengono propagate a destinazioni Linux perché Visual Studio non gestisce o configura i pacchetti installati. I messaggi visualizzati nella finestra di output, ad esempio gli errori di compilazione, vengono visualizzati usando la lingua e le impostazioni locali della destinazione Linux. È necessario configurare le destinazioni di Linux per le impostazioni locali desiderate.

## <a name="additional-settings"></a>Impostazioni aggiuntive

Usare le impostazioni seguenti per eseguire i comandi nel sistema Linux prima e dopo la compilazione e prima della generazione di CMake. I valori possono essere costituiti da qualsiasi comando valido nel sistema remoto. L'output viene reindirizzato a Visual Studio.

```json
{
      "remotePrebuildCommand": "",
      "remotePreGenerateCommand": "",
      "remotePostbuildCommand": "",
}
```

## <a name="next-steps"></a>Passaggi successivi

[Configurare le sessioni di debug di CMake](../build/configure-cmake-debugging-sessions.md?toc=/cpp/linux/toc.json&bc=/cpp/_breadcrumb/toc.json)

## <a name="see-also"></a>Vedere anche

[Utilizzo delle proprietà del progetto](../build/working-with-project-properties.md)<br/>
[Personalizzare le impostazioni di CMake](../build/customize-cmake-settings.md)<br/>
[Informazioni di riferimento sulle configurazioni predefinite CMake](../build/cmake-predefined-configuration-reference.md)

::: moniker-end
