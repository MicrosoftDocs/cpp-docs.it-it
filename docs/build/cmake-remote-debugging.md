---
title: 'Esercitazione: eseguire il debug di un progetto CMake in un computer Windows remoto'
ms.date: 12/4/2020
ms.topic: tutorial
description: Come usare Visual Studio C++ in Windows per creare e compilare un progetto CMake. Sarà quindi possibile distribuirlo ed eseguirne il debug in un computer Windows remoto.
ms.openlocfilehash: 742ee831fc30ffe291d68ff97ad4238e57c7e21d
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98668917"
---
# <a name="tutorial-debug-a-cmake-project-on-a-remote-windows-machine"></a>Esercitazione: eseguire il debug di un progetto CMake in un computer Windows remoto

Questa esercitazione usa Visual Studio C++ in Windows per creare e compilare un progetto CMake che è possibile distribuire ed eseguire il debug in un computer Windows remoto. Questa esercitazione è specifica di Windows ARM64, ma i passaggi possono essere generalizzati per altre architetture.

In Visual Studio, l'esperienza di debug predefinita per ARM64 è il debug remoto di un computer Windows ARM64. Se si tenta di eseguire il debug di un progetto ARM64 CMake senza configurare le impostazioni di debug, come illustrato in questa esercitazione, verrà visualizzato un errore che segnala che Visual Studio non riesce a trovare il computer remoto.

In questa esercitazione si apprenderà come:

> [!div class="checklist"]
>
> * creare un progetto CMake
> * configurare un progetto CMake da compilare per ARM64
> * configurare un progetto CMake per l'esecuzione in un computer Windows ARM64 remoto
> * eseguire il debug di un progetto CMake in esecuzione in un computer Windows ARM64 remoto

## <a name="prerequisites"></a>Prerequisiti

### <a name="on-the-host-machine"></a>Nel computer host

Per configurare Visual Studio per lo sviluppo in C++ multipiattaforma, installare gli strumenti di compilazione per l'architettura di destinazione. Per questa esercitazione, installare gli strumenti di compilazione di ARM64 seguendo questa procedura:

1. Eseguire il programma di installazione di Visual Studio. Se Visual Studio non è ancora stato installato, vedere [installare Visual Studio](https://docs.microsoft.com/visualstudio/install/install-visual-studio#:~:text=Install%20Visual%20Studio%201%20Make%20sure%20your%20computer,...%204%20Choose%20workloads.%20...%20More%20items...%20)
1. Nella schermata iniziale del Programma di installazione di Visual Studio scegliere **modifica**.
1. Dalle opzioni disponibili nella parte superiore scegliere **singoli componenti**.
1. Scorrere verso il basso fino alla sezione **compilatori, strumenti di compilazione e Runtime** .
1. Verificare che siano selezionati gli elementi seguenti:
    - **Strumenti CMake C++ per Windows**
    - **MSVC V142-Visual studio 2019 C++ arm64 Build Tools (versione più recente)** È importante scegliere gli `ARM64` strumenti di compilazione e non gli strumenti di `ARM` compilazione (cercare il 64) e scegliere la versione da usare `VS 2019` .
1. Selezionare **modifica** per installare gli strumenti.

### <a name="on-the-remote-machine"></a>Nel computer remoto

1. Installare Remote Tools nel computer remoto. Per questa esercitazione, installare gli strumenti di ARM64 seguendo le istruzioni riportate in [scaricare e installare Remote Tools](https://docs.microsoft.com/visualstudio/debugger/remote-debugging-cpp?%23download-and-install-the-remote-tools#download-and-install-the-remote-tools).
1. Avviare e configurare il debugger remoto nel computer remoto. Per questa esercitazione, seguire le istruzioni in [configurare il debugger remoto](https://docs.microsoft.com/visualstudio/debugger/remote-debugging-cpp?%23download-and-install-the-remote-tools#BKMK_setup) nel computer Windows remoto.

## <a name="create-a-cmake-project"></a>Creare un progetto CMake

Nel computer host Windows:
1. Eseguire Visual Studio
1. Dal menu principale, selezionare **file**  >  **nuovo**  >  **progetto**.
1. Selezionare il **progetto CMake**  >  **Avanti**
1. Assegnare un nome al progetto e scegliere una località. Quindi selezionare **Crea**

Fornire a Visual Studio alcuni istanti per creare il progetto e popolare il **Esplora soluzioni**.

## <a name="configure-for-arm64"></a>Configurare per ARM64

Per fare riferimento a un computer Windows ARM64, è necessario compilare usando gli strumenti di compilazione di ARM64.

Selezionare l'elenco a discesa **configurazione** di Visual Studio e selezionare **Gestisci configurazioni**.

![Scegliere Gestisci configurazioni nell'elenco a discesa configurazioni di Visual Studio](media/vs2019-cmake-manage-configurations.png)

Aggiungere una nuova configurazione selezionando **Aggiungi una nuova configurazione** (il **+** pulsante verde). \
Nella finestra di dialogo **CMakeSettings** visualizzata selezionare **arm64-debug** e quindi fare clic su **Seleziona**:

![Aggiungere la configurazione di arm64-debug](media/cmake-add-config-icon-with-target-dialog.png)

Viene aggiunta una configurazione di debug denominata **arm64-debug** al *`CmakeSettings.json`* file. Questo nome di configurazione è un nome descrittivo univoco che semplifica l'identificazione di queste impostazioni nell'elenco a discesa **configurazione** .

L'elenco a discesa del **set di strumenti** verrà impostato su **msvc_arm64_x64**. Le impostazioni dovrebbero ora essere simili alle seguenti:

![Finestra di dialogo Impostazioni CMake](media/cmake-settings-editor2.png)

> [!Note]
> Nell'elenco a discesa del **set di strumenti** **msvc_arm64** seleziona gli strumenti host a 32 bit per eseguire la compilazione incrociata in ARM64, mentre **msvc_arm64 x64** seleziona gli strumenti host a 64 bit per eseguire la compilazione incrociata in ARM64, operazione che verrà eseguita in questa esercitazione.

Salvare il file.`CMakeSettings.json` Nell'elenco a discesa Configurazione selezionare **arm64-debug.** potrebbe essere necessario un po' di tempo dopo il salvataggio del `CMakeSettings.json` file affinché venga visualizzato nell'elenco:

![Verificare che arm64-debug sia selezionato nell'elenco a discesa configurazioni di Visual Studio](media/vs2019-cmake-manage-configurations-arm.png) 

## <a name="add-a-debug-configuration-file"></a>Aggiungere un file di configurazione di debug

Successivamente, aggiungere le informazioni di configurazione che indicano a Visual Studio dove trovare il computer remoto, insieme ad altri dettagli di configurazione.

Modificare la visualizzazione **Esplora soluzioni** nella visualizzazione destinazioni selezionando il pulsante **Cambia viste** :

![Pulsante Visualizza opzioni di Esplora soluzioni](media/solution-explorer-switch-view.png)

Quindi, nella **Esplora soluzioni** fare doppio clic sulla **visualizzazione destinazioni CMake** per visualizzare il progetto.

Aprire la cartella del progetto (in questo esempio, il **progetto CMakeProject3**), quindi fare clic con il pulsante destro del mouse sul file eseguibile e scegliere **Aggiungi configurazione di debug**:

![Selezionare Aggiungi configurazione di debug](media/cmake-targets-add-debug-configuration.png)

Verrà creato un `launch.vs.json` file nel progetto. Aprirlo e modificare le voci seguenti per abilitare il debug remoto:

- `projectTarget`: questa impostazione viene impostata per l'utente se è stato aggiunto il file di configurazione di debug dalla visualizzazione destinazioni **Esplora soluzioni** in base alle istruzioni riportate sopra.
- `remoteMachineName`: impostare sull'indirizzo IP del computer ARM64 remoto o sul nome del computer.

Per ulteriori informazioni sulle `launch.vs.json` Impostazioni, vedere [launch.vs.jsdi riferimento allo schema](launch-vs-schema-reference-cpp.md).

> [!Note]
>  Se si usa la visualizzazione cartelle anziché la visualizzazione destinazioni in **Esplora soluzioni**, fare clic con il pulsante destro del mouse sul `CMakeLists.txt` file e scegliere **Aggiungi configurazione debug**. Questa esperienza è diversa dall'aggiunta della configurazione di debug dalla visualizzazione destinazioni nei modi seguenti:
> - Verrà richiesto di selezionare un debugger (Select  **C/C++ Remote Windows debug**).
> - Visual Studio fornirà al file meno informazioni sul modello di configurazione, per cui sarà `launch.vs.json` necessario aggiungerle manualmente. È necessario specificare le `remoteMachineName` `projectTarget` voci e. Quando si aggiunge la configurazione dalla visualizzazione destinazioni, è necessario specificare solo `remoteMachineName` .
> - Per il `projectTarget` valore dell'impostazione, controllare l'elenco a discesa elemento di avvio per ottenere il nome univoco della destinazione, ad esempio, in questa esercitazione si tratta di "CMakeProject3.exe".

## <a name="start-the-remote-debugger-monitor-on-the-remote-windows-machine"></a>Avviare remote debugger monitor nel computer Windows remoto

Prima di eseguire il progetto CMake, verificare che il debugger remoto di Visual Studio 2019 sia in esecuzione nel computer Windows remoto.  Potrebbe essere necessario modificare le opzioni del debugger remoto a seconda della situazione di autenticazione.

Nel computer remoto, ad esempio, dalla barra dei menu Visual Studio Remote Debugger selezionare **strumenti**  >  **Opzioni**. Impostare la **modalità di autenticazione** in modo che corrisponda alla configurazione dell'ambiente:

![Opzioni di autenticazione del debugger remoto](media/remote-debugger-options.png)

Quindi, in Visual Studio nel computer host aggiornare il `launch.vs.json` file in modo che corrisponda. Se ad esempio si sceglie **Nessuna autenticazione** nel debugger remoto, aggiornare il `launch.vs.json` file nel progetto aggiungendo **"AuthenticationType": "None"** alla `configurations` sezione `launch.vs.json` . In caso contrario, il `"authenticationType"` valore predefinito `"windows"` è e non deve essere dichiarato in modo esplicito. Questo esempio mostra un `launch.vs.json` file configurato per nessuna autenticazione:

``` XAML
{
  "version": "0.2.1",
  "defaults": {},
  "configurations": [
    {
        "type": "remoteWindows",
        "authenticationType": "none"
        "name": "CMakeLists.txt",
        "project": "CMakeLists.txt",
        "projectTarget": "CMakeProject3.exe",
        "remoteMachineName": "<ip address goes here>",
        "cwd": "${debugInfo.defaultWorkingDirectory}",
        "program": "${debugInfo.fullTargetPath}",
        "deploy": [],
        "args": [],
        "env": {}
    },
    {
      "type": "default",
      "project": "CMakeLists.txt",
      "projectTarget": "CMakeProject3.exe",
      "name": "CMakeProject3.exe"
    }
  ]
}
```

## <a name="debug-the-app"></a>Eseguire il debug dell'app

Nel computer host, nel **Esplora soluzioni** di Visual Studio, aprire il file cpp per il progetto CMake. Se si è ancora in **visualizzazione destinazioni CMake**, sarà necessario aprire il nodo **(eseguibile)** per visualizzarlo.

Il file CPP predefinito è una semplice app console Hello World. Impostare un punto di interruzione su `return 0;` .

Sulla barra degli strumenti di Visual Studio usare l'elenco a discesa **elemento di avvio** per selezionare il nome specificato per `"name"` nel `launch.vs.json` file:

![Elenco a discesa di elementi di avvio di esempio con CMakeProject3.exe selezionato](media/startup-item.png)

Per avviare il debug, sulla barra degli strumenti di Visual Studio scegliere **debug**  >  **Avvia debug** (o premere **F5**).

Se non viene avviato, verificare che nel file siano impostati correttamente gli elementi seguenti `launch.vs.json` :
- `"remoteMachineName"` deve essere impostato sull'indirizzo IP o sul nome del computer del computer Windows ARM64 remoto.
- `"name"` deve corrispondere alla selezione nell'elenco a discesa elemento di avvio di Visual Studio.
- `"projectTarget"` deve corrispondere al nome della destinazione CMake di cui si vuole eseguire il debug.
- `"type"` deve essere `"remoteWindows"`
- Se il tipo di autenticazione nel debugger remoto è impostato su **Nessuna autenticazione**, è necessario `"authenticationType": "none"` impostare nel `launch.vs.json` file.
- Se si usa l'autenticazione di Windows, accedere quando viene richiesto usando un account riconosciuto dal computer remoto.

Dopo la compilazione del progetto, l'app deve essere visualizzata nel computer ARM64 Windows remoto:

![App console Hello CMake in esecuzione in un computer ARM64 Windows remoto](media/remote-cmake-app.png)

Visual Studio nel computer host deve essere arrestato in corrispondenza del punto di interruzione per `return 0;` .

## <a name="what-you-learned"></a>Conoscenze acquisite

In questa esercitazione è stato creato un progetto CMake, è stato configurato per la compilazione per Windows in ARM64 e ne è stato eseguito il debug in un computer Windows ARM64 remoto.

## <a name="next-steps"></a>Passaggi successivi

Altre informazioni sulla configurazione e il debug di progetti CMake in Visual Studio:

> [!div class="nextstepaction"]
> [Progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md)\
> [Personalizzare le impostazioni di compilazione CMake](customize-cmake-settings.md)\
> [Configurare sessioni di debug CMake](configure-cmake-debugging-sessions.md)\
> [Riferimento alla configurazione predefinita di CMake](cmake-predefined-configuration-reference.md)\
[launch.vs.jsper riferimento allo schema](launch-vs-schema-reference-cpp.md)
