---
title: Personalizzare le impostazioni di compilazione di CMake in Visual Studio
ms.date: 08/20/2019
helpviewer_keywords:
- CMake build settings
ms.openlocfilehash: ecd2964e035cbf3d48a737164b0067720e9b6b9a
ms.sourcegitcommit: 0df462d79ad617296095c3012badc2fe669bab2f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/21/2019
ms.locfileid: "69887069"
---
# <a name="customize-cmake-build-settings"></a>Personalizzare le impostazioni di compilazione di CMake

::: moniker range="vs-2019"

In Visual Studio 2019 e versioni successive è possibile aggiungere configurazioni e personalizzare le relative impostazioni usando l'**Editor impostazioni CMake**. L'editor deve essere un'alternativa più semplice per modificare manualmente il file *CMakeSettings. JSON* , ma se si preferisce modificare direttamente il file, è possibile fare clic sul collegamento **modifica JSON** nell'angolo superiore destro dell'editor. 

Per aprire l'editor, fare clic sull'elenco a discesa **Configurazione** nella barra degli strumenti principale e scegliere **Gestisci configurazioni**.

![Elenco a discesa delle configurazioni di CMake](media/vs2019-cmake-manage-configurations.png)

È ora possibile visualizzare l'**Editor impostazioni** con le configurazioni installate a sinistra. 

![Editor impostazioni CMake](media/cmake-settings-editor.png)

Visual Studio fornisce una `x64-Debug` configurazione per impostazione predefinita. È possibile aggiungere altre configurazioni facendo clic sul segno più verde. Le impostazioni visualizzate nell'editor possono variare a seconda della configurazione selezionata.

Le opzioni scelte nell'editor vengono scritte in un file denominato *CMakeSettings. JSON*. Questo file fornisce gli argomenti della riga di comando e le variabili di ambiente che vengono passate a CMake quando si compilano i progetti. Visual Studio non modifica mai automaticamente *CMakeLists. txt.* con *CMakeSettings. JSON* è possibile personalizzare la compilazione tramite Visual Studio lasciando i file del progetto cmake non modificati in modo che altri utenti del team possano utilizzarli con qualsiasi strumento utilizzato.

## <a name="cmake-general-settings"></a>Impostazioni generali di CMake

Le impostazioni seguenti sono disponibili sotto l'intestazione **Generale**:

### <a name="configuration-name"></a>Nome configurazione

Corrisponde all'impostazione **name**. Questo nome viene visualizzato nell' C++ elenco a discesa configurazione. È possibile usare la macro `${name}` per la composizione di altri valori delle proprietà, come i percorsi.


### <a name="configuration-type"></a>Tipo di configurazione

Corrisponde all'impostazione **configurationType**. Definisce il tipo di configurazione della build per il generatore selezionato. I valori attualmente supportati sono "Debug", "MinSizeRel", "Release" e "RelWithDebInfo". Viene eseguito il mapping a [CMAKE_BUILD_TYPE](https://cmake.org/cmake/help/latest/variable/CMAKE_BUILD_TYPE.html).

### <a name="toolset"></a>Set di strumenti

Corrisponde all'impostazione **inheritedEnvironments**. Definisce l'ambiente del compilatore usato per compilare la configurazione selezionata. I valori supportati dipendono dal tipo di configurazione. Per creare un ambiente personalizzato, scegliere il collegamento **modifica JSON** nell'angolo superiore destro dell'editor delle impostazioni e modificare direttamente il file *CMakeSettings. JSON* .

### <a name="cmake-toolchain-file"></a>File della toolchain di CMake

Percorso del [file](https://cmake.org/cmake/help/latest/variable/CMAKE_TOOLCHAIN_FILE.html)della cassetta di stato CMake. Questo percorso viene passato a CMake come "-DCMAKE_TOOLCHAIN_FILE = \<FilePath >". I file della pagina di strumenti specificano i percorsi dei compilatori e delle utilità della pagina e altre informazioni correlate al compilatore e alla piattaforma di destinazione Per impostazione predefinita, in Visual Studio viene usato il [file della vcpkg](https://github.com/microsoft/vcpkg/blob/master/docs/examples/installing-and-using-packages.md#cmake) . se questa impostazione non è specificata. 

### <a name="build-root"></a>Radice compilazione

Corrisponde a **buildRoot**. Esegue il mapping a [CMAKE_BINARY_DIR](https://cmake.org/cmake/help/v3.15/variable/CMAKE_BINARY_DIR.html)e specifica dove creare la cache CMake. Se non esiste, verrà creata la cartella specificata.

## <a name="command-arguments"></a>Argomenti del comando

Le impostazioni seguenti sono disponibili sotto l'intestazione **Argomenti del comando**:

### <a name="cmake-command-arguments"></a>Argomenti del comando CMake

Corrisponde a **cmakeCommandArgs**. Specifica le opzioni aggiuntive della [riga di comando](https://cmake.org/cmake/help/latest/manual/cmake.1.html) passate a CMake. exe.

### <a name="build-command-arguments"></a>Argomenti del comando Build

Corrisponde a **buildCommandArgs**. Specifica le opzioni aggiuntive da passare al sistema di compilazione sottostante. `-v` Se ad esempio si usa il generatore di Ninja, le righe di comando per l'output di Ninja vengono forzate.


### <a name="ctest-command-arguments"></a>Argomenti del comando CTest

Corrisponde a **ctestCommandArgs**. Specifica le [Opzioni](https://cmake.org/cmake/help/v3.15/manual/ctest.1.html) aggiuntive della riga di comando da passare a CTest durante l'esecuzione di test.

## <a name="general-settings-for-remote-builds"></a>Impostazioni generali per le compilazioni remote

Per le configurazioni come Linux che usano compilazioni remote, sono disponibili anche le impostazioni seguenti:

### <a name="rsync-command-arguments"></a>Argomenti del comando rsync

Opzioni aggiuntive della riga di comando passate a [rsync](https://download.samba.org/pub/rsync/rsync.html), uno strumento di copia di file veloce e versatile. 

## <a name="cmake-variables-and-cache"></a>Variabili e cache CMake

Queste impostazioni consentono di impostare le variabili CMake e salvarle in *CMakeSettings. JSON*. Vengono passati a CMake in fase di compilazione ed eseguono l'override di tutti i valori presenti nel file *CMakeLists. txt* . È possibile usare questa sezione nello stesso modo in cui si potrebbe usare CMakeGUI per visualizzare un elenco di tutte le variabili CMake disponibili per la modifica. Fare clic sul pulsante **Salva e genera la cache** per visualizzare un elenco di tutte le variabili CMake disponibili per la modifica, incluse le variabili avanzate (per CMakeGUI). È possibile filtrare l'elenco in base al nome della variabile. 

Corrisponde alle **variabili**. Contiene una coppia nome-valore di variabili CMake passata come *_valore_ di _nome_=* **-D** a CMake. Se le istruzioni di compilazione del progetto CMake specificano l'aggiunta di variabili direttamente al file della cache CMake, è consigliabile aggiungerle qui.

## <a name="advanced-settings"></a>Impostazioni avanzate

### <a name="cmake-generator"></a>Generatore CMake

Corrisponde al **Generatore**. Esegue il mapping all'opzione CMake **-G** e specifica il [Generatore CMake](https://cmake.org/cmake/help/latest/manual/cmake-generators.7.html) da usare. Questa proprietà può essere usata anche come macro, `${generator}`, durante la composizione di altri valori di proprietà. Visual Studio supporta attualmente i generatori CMake seguenti:

  - "Ninja"
  - "Makefile Unix"
  - "Visual Studio 16 2019"
  - "Visual Studio 16 2019 Win64"
  - "Visual Studio 16 2019 ARM"
  - "Visual Studio 15 2017"
  - "Visual Studio 15 2017 Win64"
  - "Visual Studio 15 2017 ARM"
  - "Visual Studio 14 2015"
  - "Visual Studio 14 2015 Win64"
  - "Visual Studio 14 2015 ARM"
  
Poiché Ninja è progettato per velocizzare le compilazioni anziché flessibilità e funzione, viene impostato come predefinito. Tuttavia, alcuni progetti CMake potrebbero non essere in grado di eseguire una compilazione corretta usando Ninja. In tal caso, è possibile impostare CMake in modo che generi un progetto di Visual Studio.

### <a name="intellisense-mode"></a>Modalità IntelliSense

Modalità IntelliSense utilizzata dal motore di IntelliSense. Se non è selezionata alcuna modalità, il set di strumenti specificato verrà ereditato da Visual Studio.  

### <a name="install-directory"></a>Directory di installazione

Directory in cui CMake installa le destinazioni. Esegue il mapping a [CMAKE_INSTALL_PREFIX](https://cmake.org/cmake/help/latest/variable/CMAKE_INSTALL_PREFIX.html). 

### <a name="cmake-executable"></a>Eseguibile di CMake

Percorso completo dell'eseguibile del programma CMake, inclusi il nome file e l'estensione. Consente di usare una versione personalizzata di CMake con Visual Studio. Per le compilazioni remote, specificare il percorso di CMake nel computer remoto.

Per le configurazioni come Linux che usano compilazioni remote, sono disponibili anche le impostazioni seguenti:

### <a name="remote-cmakeliststxt-root"></a>Radice di CMakeLists.txt in computer remoto

Directory nel computer remoto che contiene il file *CMakeLists. txt* radice.

### <a name="remote-install-root"></a>Radice di installazione in computer remoto

Directory nel computer remoto in cui CMake installa le destinazioni. Esegue il mapping a [CMAKE_INSTALL_PREFIX](https://cmake.org/cmake/help/latest/variable/CMAKE_INSTALL_PREFIX.html). 

### <a name="remote-copy-sources"></a>Copia origini in computer remoto

Specifica se copiare i file di origine nel computer remoto e consente di specificare se utilizzare rsync o SFTP. 

## <a name="directly-edit-cmakesettingsjson"></a>Modificare direttamente CMakeSettings.json

È anche possibile modificare direttamente *CMakeSettings. JSON* per creare configurazioni personalizzate. L'**Editor impostazioni** dispone di un pulsante **Modifica JSON** nell'angolo in alto a destra che apre il file per la modifica. 

Nell'esempio seguente viene illustrata una configurazione campione, che è possibile usare come punto di partenza:

```json
    {
      "name": "x86-Debug",
      "generator": "Ninja",
      "configurationType": "Debug",
      "inheritEnvironments": [ "msvc_x86" ],
      "buildRoot": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}\\build\\${name}",
      "installRoot": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}\\install\\${name}",
      "cmakeCommandArgs": "",
      "buildCommandArgs": "-v",
      "ctestCommandArgs": ""
    },
```

JSON IntelliSense consente di modificare il file *CMakeSettings. JSON* :

   ![IntelliSense JSON CMake](media/cmake-json-intellisense.png "CMake JSON IntelliSense")

L'editor JSON informa anche quando si scelgono le impostazioni incompatibili.

Per altre informazioni su ognuna delle proprietà nel file, vedere [Informazioni di riferimento sullo schema CMakeSettings.json](cmakesettings-reference.md).

::: moniker-end

::: moniker range="<=vs-2017"

Visual Studio 2017 offre diverse configurazioni CMake che definiscono il modo in cui CMake.exe viene richiamato per creare la cache di CMake per un progetto specifico. Per aggiungere una nuova configurazione, fare clic sull'elenco a discesa della configurazione nella barra degli strumenti e scegliere **Gestisci configurazioni**:

   ![Gestisci configurazioni in CMake](media/cmake-manage-configurations.png)

È possibile scegliere dall'elenco di configurazioni predefinite:

   ![Configurazioni predefinite CMake](media/cmake-configurations.png)

La prima volta che si seleziona una configurazione, Visual Studio crea un file *CMakeSettings. JSON* nella cartella radice del progetto. Questo file viene usato per ricreare il file di cache CMake, ad esempio dopo un'operazione di **pulizia**. 

Per aggiungere una configurazione aggiuntiva, fare clic con il pulsante destro del mouse su *CMakeSettings. JSON* e scegliere **Aggiungi configurazione**. 

   ![Aggiungi configurazione in CMake](media/cmake-add-configuration.png "Aggiungi configurazione in CMake")

È anche possibile modificare il file usando l'**Editor impostazioni CMake**. Fare clic con il pulsante destro del mouse su *CMakeSettings. JSON* in **Esplora soluzioni** e scegliere **Modifica impostazioni CMake**. In alternativa, selezionare **Gestisci configurazioni** dall'elenco a discesa della configurazione nella parte superiore della finestra dell'editor. 

È anche possibile modificare direttamente *CMakeSettings. JSON* per creare configurazioni personalizzate. Nell'esempio seguente viene illustrata una configurazione campione, che è possibile usare come punto di partenza:

```json
    {
      "name": "x86-Debug",
      "generator": "Ninja",
      "configurationType": "Debug",
      "inheritEnvironments": [ "msvc_x86" ],
      "buildRoot": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}\\build\\${name}",
      "installRoot": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}\\install\\${name}",
      "cmakeCommandArgs": "",
      "buildCommandArgs": "-v",
      "ctestCommandArgs": ""
    },
```

JSON IntelliSense consente di modificare il file *CMakeSettings. JSON* :

   ![IntelliSense JSON CMake](media/cmake-json-intellisense.png "CMake JSON IntelliSense")

Per altre informazioni su ognuna delle proprietà nel file, vedere [Informazioni di riferimento sullo schema CMakeSettings.json](cmakesettings-reference.md).

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md)<br/>
[Configurare un progetto CMake per Linux](../linux/cmake-linux-project.md)<br/>
[Connettersi al computer Linux remoto](../linux/connect-to-your-remote-linux-computer.md)<br/>
[Configurare le sessioni di debug di CMake](configure-cmake-debugging-sessions.md)<br/>
[Distribuire, eseguire e sottoporre a debug il progetto Linux](../linux/deploy-run-and-debug-your-linux-project.md)<br/>
[Informazioni di riferimento sulle configurazioni predefinite CMake](cmake-predefined-configuration-reference.md)
