---
title: Configurare un progetto CMake per Linux in Visual Studio
description: Come configurare un progetto CMake per Linux in Visual Studio
ms.date: 11/01/2018
ms.assetid: f8707b32-f90d-494d-ae0b-1d44425fdc25
ms.openlocfilehash: f2186c14fbe2eb1273fceb4a378b359564eae327
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57750598"
---
# <a name="configure-a-linux-cmake-project"></a>Configurare un progetto CMake per Linux

Quando si apre una cartella contenente un progetto CMake, Visual Studio usa i metadati prodotti da CMake per configurare IntelliSense ed esegue automaticamente la compilazione. La configurazione locale e le impostazioni di debug vengono archiviate in file JSON che possono essere facoltativamente condivisi con altri utenti che usano Visual Studio. 

Poiché Visual Studio non modifica i file CMakeLists.txt o la cache CMake originale, gli altri utenti che lavorano sullo stesso progetto possono continuare a usare gli strumenti già in uso.  

## <a name="before-you-begin"></a>Prima di iniziare

Assicurarsi innanzitutto di aver installato il carico di lavoro **Sviluppo di applicazioni Linux con C++**, incluso il componente CMake. Vedere [Installare il carico di lavoro Linux C++ in Visual Studio](download-install-and-setup-the-linux-development-workload.md). 

Il supporto CMake in Visual Studio richiede il supporto della modalità server introdotta in CMake 3.8. Per una variante di CMake fornita da Microsoft, scaricare la versione più recente dei file binari precompilati all'indirizzo [https://github.com/Microsoft/CMake/releases](https://github.com/Microsoft/CMake/releases).

Questo argomento presuppone la lettura di [CMake Tools per Visual Studio](../ide/cmake-tools-for-visual-cpp.md). 

> [!NOTE]
> Il supporto CMake in Visual Studio richiede il supporto della modalità server introdotta in CMake 3.8. Per una variante di CMake fornita da Microsoft, scaricare la versione più recente dei file binari precompilati all'indirizzo [https://github.com/Microsoft/CMake/releases](https://github.com/Microsoft/CMake/releases). In Visual Studio 2019 i file binari precompilati possono essere distribuiti automaticamente (vedere [Scaricare i file binari CMake precompilati](#download-prebuilt-cmake-binaries)).

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

Per impostazione predefinita, Visual Studio sceglie il primo sistema remoto nell'elenco in **Strumenti** > **Opzioni** > **Multipiattaforma** > **Gestione connessione**. Se non sono disponibili connessioni remote, viene chiesto di crearne una. Per altre informazioni, vedere [Connettersi al computer Linux remoto](connect-to-your-remote-linux-computer.md).

Dopo avere specificato una destinazione Linux, l'origine viene copiata nel computer Linux. CMake viene quindi eseguito nel computer Linux per generare la cache CMake per il progetto.

![Generare la cache CMake in Linux](media/cmake-linux-1.png "Generare la cache CMake in Linux")

**Visual Studio 2017 versione 15.7 e successive:**<br/>
Per rendere disponibile il supporto IntelliSense per le intestazioni remote, Visual Studio le copia automaticamente dal computer Linux in una directory nel computer Windows locale. Per altre informazioni, vedere [IntelliSense per le intestazioni remote](configure-a-linux-project.md#remote_intellisense).

## <a name="debug-the-project"></a>Eseguire il debug del progetto

Per eseguire il debug del codice nel sistema remoto, impostare un punto di interruzione, selezionare la destinazione CMake come elemento di avvio dal menu della barra degli strumenti accanto all'impostazione del progetto e scegliere **&#x23f5; Avvia** sulla barra degli strumenti o premere F5.

Per personalizzare gli argomenti della riga di comando del programma, fare clic con il pulsante destro del mouse sul file eseguibile in **Esplora soluzioni** e selezionare **Impostazioni per debug e avvio**. Verrà aperto o creato un file di configurazione launch.vs.json che contiene informazioni sul programma. Per specificare argomenti aggiuntivi, aggiungerli nella matrice JSON `args`. Per altre informazioni, vedere [Progetti Apri cartella in Visual C++](../ide/non-msbuild-projects.md) e [Configurare le sessioni di debug di CMake](../ide/configure-cmake-debugging-sessions.md).

## <a name="configure-cmake-settings-for-linux"></a>Configurare le impostazioni di CMake per Linux

Un file CMakeSettings.json in un progetto CMake per Linux può specificare tutte le proprietà elencate in [Personalizzare le impostazioni di CMake](../ide/customize-cmake-settings.md) e altre proprietà che controllano le impostazioni di compilazione nel computer Linux remoto. Per modificare le impostazioni di CMake predefinite, scegliere **CMake | Modifica impostazioni di CMake | CMakeLists.txt** dal menu principale o fare clic con il pulsante destro del mouse su CMakeSettings.txt in **Esplora soluzioni** e scegliere **Modifica impostazioni di CMake**. Visual Studio crea quindi un nuovo file `CMakeSettings.json` nella cartella dei progetti radice. È possibile aprire il file usando l'**Editor impostazioni CMake** o modificare il file direttamente. 

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

|Impostazione|Descrizione|
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
      "remotePreBuildCommand": "",
      "remotePreGenerateCommand": "",
      "remotePostBuildCommand": "",
}
```

Queste opzioni consentono di eseguire comandi nel sistema remoto prima e dopo la compilazione e prima della generazione di CMake. I valori possono essere costituiti da qualsiasi comando valido nel sistema remoto. L'output viene reindirizzato a Visual Studio.

## <a name="download-prebuilt-cmake-binaries"></a>Scaricare i file binari CMake precompilati

È possibile che nella distribuzione Linux sia disponibile una versione precedente di CMake. Il supporto CMake in Visual Studio richiede il supporto della modalità server introdotta in CMake 3.8. Per una variante di CMake fornita da Microsoft, scaricare la versione più recente dei file binari precompilati all'indirizzo [https://github.com/Microsoft/CMake/releases](https://github.com/Microsoft/CMake/releases).

**Visual Studio 2019**<br/>
Se non viene trovato un file CMake valido nel computer remoto, verrà visualizzata una barra informazioni con l'opzione per distribuire automaticamente i file binari CMake precompilati. I file binari verranno installati in `~/.vs/cmake`. Dopo aver distribuito i file binari, il progetto verrà rigenerato automaticamente. Si noti che se il file CMake specificato dal campo `cmakeExecutable` in `CMakeSettings.json` non è valido (non esiste o è una versione non supportata) e sono presenti file binari precompilati, Visual Studio ignorerà `cmakeExecutable` e userà i file binari precompilati.

## <a name="see-also"></a>Vedere anche

[Utilizzo di Proprietà del progetto](../ide/working-with-project-properties.md)<br/>
[CMake Tools for Visual C++](../ide/cmake-tools-for-visual-cpp.md) (Strumenti di CMake per Visual C++)<br/>
[Connettersi al computer Linux remoto](connect-to-your-remote-linux-computer.md)<br/>
[Personalizzare le impostazioni di CMake](../ide/customize-cmake-settings.md)<br/>
[Configurare le sessioni di debug di CMake](../ide/configure-cmake-debugging-sessions.md)<br/>
[Distribuire, eseguire e sottoporre a debug il progetto Linux](deploy-run-and-debug-your-linux-project.md)<br/>
[Informazioni di riferimento sulle configurazioni predefinite CMake](../ide/cmake-predefined-configuration-reference.md)<br/>
