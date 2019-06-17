---
title: Configurare un progetto CMake per Linux in Visual Studio
description: Come configurare, modificare e compilare un progetto CMake per Linux in Visual Studio
ms.date: 06/07/2019
ms.assetid: f8707b32-f90d-494d-ae0b-1d44425fdc25
ms.openlocfilehash: e0a4abb7fe62880af12277d5c5c474d6ec4e0202
ms.sourcegitcommit: 8adabe177d557c74566c13145196c11cef5d10d4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/10/2019
ms.locfileid: "66821667"
---
# <a name="configure-a-linux-cmake-project"></a>Configurare un progetto CMake per Linux

::: moniker range="vs-2015"

Il supporto per Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

Quando si apre una cartella contenente un progetto CMake, Visual Studio usa i metadati prodotti da CMake per configurare IntelliSense ed esegue automaticamente la compilazione. La configurazione locale e le impostazioni di debug vengono archiviate in file JSON che possono essere facoltativamente condivisi con altri utenti che usano Visual Studio. 

Poiché Visual Studio non modifica i file CMakeLists.txt o la cache CMake originale, gli altri utenti che lavorano sullo stesso progetto possono continuare a usare gli strumenti già in uso.

Per informazioni generali sull'uso di CMake in Visual Studio, vedere [CMake Tools per Visual Studio](../build/cmake-projects-in-visual-studio.md). Leggere tale articolo prima di continuare.

## <a name="before-you-begin"></a>Prima di iniziare

Assicurarsi innanzitutto di aver installato il carico di lavoro **Sviluppo di applicazioni Linux con C++** , incluso il componente CMake. Vedere [Installare il carico di lavoro Linux C++ in Visual Studio](download-install-and-setup-the-linux-development-workload.md). 

Nel sistema Linux assicurarsi che sia installato quanto segue: 

- gcc
- gdb
- rsync
- zip 

::: moniker range="vs-2019"

Per il supporto in Linux di progetti CMake è necessario che nel computer di destinazione sia installata una versione recente di CMake. La versione offerta dalla funzionalità di gestione pacchetti predefinita di una distribuzione non è abbastanza recente per supportare tutte le funzionalità richieste da Visual Studio. Visual Studio 2019 rileva se nel sistema Linux è installata una versione recente di CMake. Se non ne trova alcuna, in una barra informazioni nella parte superiore del riquadro dell'editor Visual Studio propone di installarne una.

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
project (hello-cmake)
add_executable(hello-cmake hello.cpp)
```

## <a name="choose-a-linux-target"></a>Scegliere una destinazione Linux

Non appena si apre la cartella, Visual Studio analizza il file CMakeLists.txt e specifica la destinazione Windows **x86-Debug**. Per specificare come destinazione un sistema Linux remoto, modificare le impostazioni del progetto scegliendo **Linux-Debug** o **Linux-Release**. 

::: moniker range="vs-2019"

Per specificare come destinazione Sottosistema Windows per Linux, scegliere **WSL-Debug** o **WSL-Release** se si usa GCC o le varianti Clang se si usa il set di strumenti Clang/LLVM. 

**Visual Studio 2019 versione 16.1** Se si specifica WSL come destinazione, non è necessaria alcuna copia, file sorgente o intestazione, perché il compilatore in Linux ha accesso diretto al file system Windows in cui si trovano i file sorgente e, analogamente, Visual Studio può accedere ai file di intestazione di Linux direttamente.

::: moniker-end

Per le destinazioni remote, per impostazione predefinita Visual Studio sceglie il primo sistema remoto nell'elenco in **Strumenti** > **Opzioni** > **Multipiattaforma** > **Gestione connessioni**. Se non sono disponibili connessioni remote, viene chiesto di crearne una. Per altre informazioni, vedere [Connettersi al computer Linux remoto](connect-to-your-remote-linux-computer.md).

Se si specifica una destinazione Linux remota, il codice sorgente viene copiato nel sistema remoto.

Dopo la selezione di una destinazione, CMake viene eseguito automaticamente nel sistema Linux per generare la cache CMake per il progetto. 

![Generare la cache CMake in Linux](media/cmake-linux-1.png "Generare la cache CMake in Linux")

Per rendere disponibile il supporto IntelliSense per le intestazioni nei sistemi Linux remoti, Visual Studio copia automaticamente le intestazioni dal computer Linux in una directory nel computer Windows locale. Per altre informazioni, vedere [IntelliSense per le intestazioni remote](configure-a-linux-project.md#remote_intellisense).

## <a name="debug-the-project"></a>Eseguire il debug del progetto

Per eseguire il debug del codice nel sistema di destinazione di debug specificato, impostare un punto di interruzione, selezionare la destinazione CMake come elemento di avvio dal menu della barra degli strumenti accanto all'impostazione del progetto e scegliere **&#x23f5; Avvia** sulla barra degli strumenti o premere F5.

Per personalizzare gli argomenti della riga di comando del programma, fare clic con il pulsante destro del mouse sul file eseguibile in **Esplora soluzioni** e selezionare **Impostazioni per debug e avvio**. Verrà aperto o creato un file di configurazione launch.vs.json che contiene informazioni sul programma. Per specificare argomenti aggiuntivi, aggiungerli nella matrice JSON `args`. Per altre informazioni, vedere [Progetti Apri cartella per C++](../build/open-folder-projects-cpp.md) e [Configurare le sessioni di debug di CMake](../build/configure-cmake-debugging-sessions.md).

## <a name="configure-cmake-settings-for-linux"></a>Configurare le impostazioni di CMake per Linux

Un file CMakeSettings.json in un progetto CMake per Linux può specificare tutte le proprietà elencate in [Personalizzare le impostazioni di CMake](../build/customize-cmake-settings.md) e altre proprietà che controllano le impostazioni di compilazione nel computer Linux remoto. 

::: moniker range="vs-2019"

Per cambiare le impostazioni predefinite di CMake in Visual Studio 2019, sulla barra degli strumenti principale aprire l'elenco a discesa **Configurazione** e scegliere **Gestisci configurazioni**. 

![Gestisci configurazioni di CMake](../build/media/vs2019-cmake-manage-configurations.png "Elenco a discesa delle configurazioni di CMake")

Verrà visualizzato l'**Editor impostazioni CMake**, che è possibile usare per modificare il file `CMakeSettings.json` presente nella cartella radice del progetto. È anche possibile aprire il file direttamente facendo clic sul pulsante **Modifica JSON** nell'editor. Per altre informazioni, vedere [Personalizzare le impostazioni di CMake](../build/customize-cmake-settings.md).

::: moniker-end

::: moniker range="vs-2017"

Per cambiare le impostazioni di CMake predefinite, in Visual Studio 2017 scegliere **CMake | Modifica impostazioni di CMake | CMakeLists.txt** dal menu principale o fare clic con il pulsante destro del mouse su CMakeSettings.txt in **Esplora soluzioni** e scegliere **Modifica impostazioni di CMake**. Visual Studio crea quindi un nuovo file `CMakeSettings.json` nella cartella dei progetti radice. È possibile aprire il file usando l'**Editor impostazioni CMake** o modificare il file direttamente. Per altre informazioni, vedere [Customize CMake settings](../build/customize-cmake-settings.md) (Personalizzare le impostazioni di CMake).

::: moniker-end

L'esempio seguente illustra la configurazione predefinita per Linux-Debug basata sull'esempio di codice precedente:

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
La tabella seguente riepiloga le impostazioni:

|Impostazione|Description|
|-----------|-----------------|
|`name`|È possibile usare qualsiasi valore.|
|`remoteMachineName`|Specifica il sistema remoto di destinazione, se sono presenti più sistemi. Per poter selezionare il sistema appropriato, per questo campo è abilitato IntelliSense.|
|`remoteCMakeListsRoot`|Specifica il percorso in cui vengono copiate le origini del progetto nel sistema remoto.|
|`remoteBuildRoot`|Specifica la posizione in cui viene generato l'output di compilazione nel sistema remoto. Tale output viene copiato anche in locale nel percorso specificato da `buildRoot`.|
|`remoteInstallRoot` e `installRoot`| Simili a `remoteBuildRoot` e `buildRoot`, ad eccezione del fatto che si applicano quando si esegue un'installazione di CMake.|
|`remoteCopySources`|Specifica se le origini locali vengono copiate nel computer remoto. È possibile impostarla su false se l'utente ha molti file e sta già sincronizzano le origini in modo autonomo.|
|`remoteCopyOutputVerbosity`| Specifica il livello di dettaglio della fase di copia nel caso in cui sia necessario diagnosticare gli errori.|
|`remoteCopySourcesConcurrentCopies`| Specifica il numero di processi generati per l'esecuzione della copia.|
|`remoteCopySourcesMethod`| Può essere `rsync` o `sftp`.|
|`remoteCopySourcesExclusionList`| Specifica i file che non si vuole copiare nel computer remoto.|
|`rsyncCommandArgs`|Controlla il metodo rsync di copia.|
|`remoteCopyBuildOutput`| Controlla se l'output di compilazione remota viene copiato nella cartella di compilazione locale.|

Per un maggiore controllo, è possibile usare queste impostazioni facoltative:

```json
{
      "remotePrebuildCommand": "",
      "remotePreGenerateCommand": "",
      "remotePostbuildCommand": "",
}
```

Queste opzioni consentono di eseguire comandi nel sistema Linux prima e dopo la compilazione e prima della generazione di CMake. I valori possono essere costituiti da qualsiasi comando valido nel sistema remoto. L'output viene reindirizzato a Visual Studio.

::: moniker range="vs-2019"

In Visual Studio 2019 è possibile modificare tutte queste impostazioni nell'**Editor impostazioni CMake**.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Utilizzo di Proprietà del progetto](../build/working-with-project-properties.md)<br/>
[Progetti CMake in Visual Studio](../build/cmake-projects-in-visual-studio.md)<br/>
[Connettersi al computer Linux remoto](connect-to-your-remote-linux-computer.md)<br/>
[Personalizzare le impostazioni di CMake](../build/customize-cmake-settings.md)<br/>
[Configurare le sessioni di debug di CMake](../build/configure-cmake-debugging-sessions.md)<br/>
[Distribuire, eseguire e sottoporre a debug il progetto Linux](deploy-run-and-debug-your-linux-project.md)<br/>
[Informazioni di riferimento sulle configurazioni predefinite CMake](../build/cmake-predefined-configuration-reference.md)<br/>
