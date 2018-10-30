---
title: Configurare un progetto CMake per Linux in Visual Studio | Microsoft Docs
description: Come configurare un progetto CMake per Linux in Visual Studio
ms.custom: ''
ms.date: 07/20/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-linux
ms.tgt_pltfrm: Linux
ms.topic: conceptual
ms.assetid: f8707b32-f90d-494d-ae0b-1d44425fdc25
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
- linux
ms.openlocfilehash: 0e735ece878797ffdcf89fffefa33473107ad3d5
ms.sourcegitcommit: 7098d64443ffbd4a47f30bc41753007b570b47e8
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49120564"
---
# <a name="configure-a-linux-cmake-project"></a>Configurare un progetto CMake per Linux

**Visual Studio 2017 versione 15.4 e successive**<br/>
Quando si installa il carico di lavoro Linux C++ per Visual Studio, il supporto CMake per Linux è selezionato per impostazione predefinita. È ora possibile lavorare sulla base di codice esistente che usa CMake senza la necessità di convertirlo in un progetto di Visual Studio. Se il codebase è multipiattaforma, è possibile scegliere sia Windows che Linux da Visual Studio.

Questo argomento presuppone una familiarità di base con il supporto CMake in Visual Studio. Per altre informazioni, vedere [CMake Tools for Visual C++](../ide/cmake-tools-for-visual-cpp.md) (Strumenti CMake per Visual C++). Per altre informazioni su CMake, vedere [Build, Test and Package Your Software With CMake](https://cmake.org/) (Compilare e testare il software e includerlo in un pacchetto con CMake).

> [!NOTE]  
> Il supporto CMake in Visual Studio richiede il supporto della modalità server introdotta in CMake 3.8. Per una variante di CMake fornita da Microsoft, scaricare la versione più recente dei file binari precompilati all'indirizzo [https://github.com/Microsoft/CMake/releases](https://github.com/Microsoft/CMake/releases). 

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
project (hello-cmake)
add_executable(hello-cmake hello.cpp)
```

## <a name="choose-a-linux-target"></a>Scegliere una destinazione Linux

Non appena si apre la cartella, Visual Studio analizza il file CMakeLists.txt e specifica la destinazione Windows **x86-Debug**. Per specificare come destinazione Linux, modificare le impostazioni del progetto scegliendo **Linux-Debug** o **Linux-Release**.

Per impostazione predefinita, Visual Studio sceglie il primo sistema remoto nell'elenco in **Strumenti** > **Opzioni** > **Multipiattaforma** > **Gestione connessione**. Se non sono disponibili connessioni remote, viene chiesto di crearne una.

Dopo avere specificato una destinazione Linux, l'origine viene copiata nel computer Linux. CMake viene quindi eseguito nel computer Linux per generare la cache CMake per il progetto.

![Generare la cache CMake in Linux](media/cmake-linux-1.png "Generare la cache CMake in Linux")

**Visual Studio 2017 versione 15.7 e successive:**<br/>
Per rendere disponibile il supporto IntelliSense per le intestazioni remote, Visual Studio le copia automaticamente in una directory nel computer Windows locale. Per altre informazioni, vedere [IntelliSense per le intestazioni remote](configure-a-linux-project.md#remote_intellisense).

## <a name="debug-the-project"></a>Eseguire il debug del progetto

Per eseguire il debug del codice nel sistema remoto, impostare un punto di interruzione, selezionare la destinazione CMake come elemento di avvio dal menu della barra degli strumenti accanto all'impostazione del progetto e scegliere **&#x23f5; Avvia** sulla barra degli strumenti o premere F5.

Per personalizzare gli argomenti della riga di comando del programma, fare clic con il pulsante destro del mouse sul file eseguibile in **Esplora soluzioni** e selezionare **Impostazioni per debug e avvio**. Verrà aperto o creato un file di configurazione launch.vs.json che contiene informazioni sul programma. Per specificare argomenti aggiuntivi, aggiungerli nella matrice JSON `args`. Per altre informazioni, vedere [Open Folder projects in Visual C++](../ide/non-msbuild-projects.md) (Aprire una cartella di progetti in Visual C++).

## <a name="configure-cmake-settings-for-linux"></a>Configurare le impostazioni di CMake per Linux

Per modificare le impostazioni di CMake predefinite, scegliere **CMake | Modifica impostazioni di CMake | CMakeLists.txt** dal menu principale o fare clic con il pulsante destro del mouse su CMakeSettings.txt in **Esplora soluzioni** e scegliere **Modifica impostazioni di CMake**. Visual Studio crea quindi nella cartella un nuovo file denominato `CMakeSettings.json` che viene popolato con le configurazioni predefinite elencate nella voce di menu delle impostazioni del progetto. L'esempio seguente illustra la configurazione predefinita per Linux-Debug basata sull'esempio di codice precedente:

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

Per `name` è possibile usare qualsiasi valore. Il valore `remoteMachineName` specifica il sistema remoto di destinazione, nel caso se ne abbia più di uno. Per poter selezionare il sistema appropriato, per questo campo è abilitato IntelliSense. Il campo `remoteCMakeListsRoot` specifica dove verranno copiate le origini del progetto nel sistema remoto. Il campo `remoteBuildRoot` indica dove verrà generato l'output di compilazione nel sistema remoto. Tale output viene copiato anche in locale nel percorso specificato da `buildRoot`. I campi `remoteInstallRoot` e `installRoot` sono simili a `remoteBuildRoot` e `buildRoot`, ad eccezione del fatto che si applicano quando si esegue un'installazione di CMake. La voce `remoteCopySources` controlla se le origini locali vengono copiate nel computer remoto. È possibile impostarla su falso se l'utente ha molti file e sta già sincronizzano le origini in modo autonomo. Il valore `remoteCopyOutputVerbosity` controlla il livello di dettaglio della fase di copia nel caso in cui sia necessario diagnosticare gli errori. La voce `remoteCopySourcesConcurrentCopies` controlla il numero di processi generati per l'esecuzione della copia. Il valore `remoteCopySourcesMethod` può essere uno tra rsync o sftp. Il campo `remoteCopySourcesExclusionList` consente di controllare gli elementi copiati nel computer remoto. Il valore `rsyncCommandArgs` consente di controllare il metodo rsync di copia. Il campo `remoteCopyBuildOutput` consente di controllare se l'output di compilazione remota viene copiato nella cartella di compilazione locale.

Esistono anche alcune impostazioni facoltative che è possibile usare per un maggiore controllo:

```json
{
      "remotePreBuildCommand": "",
      "remotePreGenerateCommand": "",
      "remotePostBuildCommand": "",
}
```

Queste opzioni consentono di eseguire comandi nella casella remota prima e dopo la compilazione e prima della generazione di CMake. Può trattarsi di qualsiasi comando valido nella casella remota. L'output viene restituito con pipe a Visual Studio.

## <a name="download-prebuilt-cmake-binaries"></a>Scaricare i file binari CMake precompilati

È possibile che nella distribuzione Linux sia disponibile una versione precedente di CMake. Il supporto CMake in Visual Studio richiede il supporto della modalità server introdotta in CMake 3.8. Per una variante di CMake fornita da Microsoft, scaricare la versione più recente dei file binari precompilati all'indirizzo [https://github.com/Microsoft/CMake/releases](https://github.com/Microsoft/CMake/releases). 


## <a name="see-also"></a>Vedere anche

[Utilizzo di Proprietà del progetto](../ide/working-with-project-properties.md)<br/>
[CMake Tools for Visual C++](../ide/cmake-tools-for-visual-cpp.md) (Strumenti di CMake per Visual C++)  
