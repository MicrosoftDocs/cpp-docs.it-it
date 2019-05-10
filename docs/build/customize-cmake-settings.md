---
title: Personalizzare le impostazioni di compilazione di CMake in Visual Studio
ms.date: 04/25/2019
helpviewer_keywords:
- CMake build settings
ms.openlocfilehash: 20ed066f71a5c8c3acb00ef5923fa5c9f16ac229
ms.sourcegitcommit: 18d3b1e9cdb4fc3a76f7a650c31994bdbd2bde64
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/29/2019
ms.locfileid: "64877139"
---
# <a name="customize-cmake-build-settings"></a>Personalizzare le impostazioni di compilazione di CMake

::: moniker range="vs-2019"

In Visual Studio 2019 e versioni successive, è possibile aggiungere le configurazioni e personalizzare le relative impostazioni usando il **editor di impostazioni di CMake**. L'editor deve essere un'alternativa più semplice per modificare manualmente il file Cmakesettings JSON, ma se si preferisce modificare direttamente il file, è possibile scegliere il **modifica JSON** collegamento in alto a destra dell'editor. 

Per aprire l'editor, fare clic sui **Configuration** elenco a discesa nella barra degli strumenti principale e scegliere **Gestisci configurazioni**.

![Configurazioni di CMake elenco a discesa](media/vs2019-cmake-manage-configurations.png)

È ora possibile visualizzare il **impostazioni Editor** con le configurazioni installate a sinistra. 

![Editor impostazioni di CMake](media/cmake-settings-editor.png)

Visual Studio offre due configurazioni per impostazione predefinita: `x64-Debug` e `x86-Debug`. È possibile aggiungere altre configurazioni facendo clic sul segno di addizione verde. Le impostazioni visualizzate nell'editor potrebbero variare a seconda della configurazione selezionata.

Le opzioni desiderate nell'editor vengono scritti in un file denominato Cmakesettings. Questo file fornisce gli argomenti della riga di comando e variabili di ambiente vengono passate a CMake quando si compilano i progetti. Visual Studio non vengono mai modificate cmakelists. txt automaticamente. tramite Cmakesettings è possibile personalizzare la compilazione tramite Visual Studio lasciando invariati i file di progetto CMake in modo che altri membri del team possono utilizzarli con qualunque strumento in uso.

## <a name="cmake-general-settings"></a>Impostazioni generali di CMake

Le impostazioni seguenti sono disponibili sotto il **generale** intestazione:

### <a name="configuration-name"></a>Nome della configurazione

Corrisponde alla **nome** impostazione. Si tratta del nome che viene visualizzato nei C++ elenco a discesa configurazione. È possibile usare il `${name}` macro per la composizione di altri valori di proprietà, ad esempio i percorsi.


### <a name="configuration-type"></a>Tipo di configurazione

Corrisponde alla **configurationType** impostazione. Definisce il tipo di configurazione di compilazione per il generatore selezionato. I valori attualmente supportati sono "Debug", "MinSizeRel", "Release" e "RelWithDebInfo".

### <a name="toolset"></a>Set di strumenti

Corrisponde alla **inheritedEnvironments** impostazione. Definisce l'ambiente di compilazione che verrà usato per compilare la configurazione selezionata. I valori supportati dipendono dal tipo di configurazione. Per creare un ambiente personalizzato, scegliere il **modifica JSON** collegamento nell'angolo superiore destro dell'editor delle impostazioni e modificare direttamente il file Cmakesettings JSON.

### <a name="cmake-toolchain-file"></a>File toolchain di CMake

Percorso del file di toolchain di CMake. Verranno passati a CMake come "-DCMAKE_TOOLCHAIN_FILE = \<filepath >".

### <a name="build-root"></a>Radice di compilazione

Corrisponde a **elemento buildRoot**. Esegue il mapping a **-DCMAKE_BINARY_DIR** passare e specifica dove verrà creata la cache di CMake. Se la cartella non esiste, verrà creata.

## <a name="command-arguments"></a>Gli argomenti del comando

Le impostazioni seguenti sono disponibili sotto il **argomenti del comando** intestazione:

### <a name="cmake-command-arguments"></a>Argomenti del comando CMake

Corrisponde a **cmakeCommandArgs**. Consente di specificare eventuali opzioni aggiuntive da passare a CMake.exe.

### <a name="build-command-arguments"></a>Argomenti di comando di compilazione

Corrisponde a **buildCommandArgs**: Specifica opzioni aggiuntive da passare al sottostante sistema di compilazione. Ad esempio, il passaggio di -v quando si usa il generatore Ninja forza Ninja a restituire le righe di comando.


### <a name="ctest-command-arguments"></a>Argomenti del comando CTest

Corrisponde a**ctestCommandArgs**: specifica le opzioni aggiuntive passate a CTest durante l'esecuzione di test.

## <a name="general-settings-for-remote-builds"></a>Impostazioni generali per le compilazioni remote

Per le configurazioni, ad esempio Linux che usano compilazioni remote, sono disponibili anche le impostazioni seguenti:

### <a name="rsync-command-arguments"></a>argomenti del comando rsync

Fornire alcun argomento di comando da passare a rsync. 

## <a name="cmake-variables-and-cache"></a>Cache e le variabili di CMake

Queste impostazioni consentono di impostare le variabili di CMake e li salvano in Cmakesettings. Essi verranno passati a CMake in fase di compilazione e sostituirà i valori potrebbero essere nel file cmakelists. txt. È possibile usare questa sezione nello stesso modo che è possibile utilizzare il CMakeGUI per visualizzare un elenco di tutte le variabili di CMake disponibili per la modifica. Scegliere il **salvare e generare cache** pulsante per visualizzare un elenco di tutte le variabili di CMake disponibili per la modifica, incluse le variabili avanzate (ogni CMakeGUI). È possibile filtrare l'elenco in base al nome di variabili. 

Corrisponde a **variabili**: contiene una coppia nome-valore delle variabili di CMake che verranno passati come **-D** *_nome_ =  _valore_* a CMake. Se le istruzioni per la compilazione del progetto CMake specificano l'aggiunta di qualsiasi variabile direttamente al file di cache di CMake, si consiglia di aggiungerle qui.

## <a name="advanced-settings"></a>Impostazioni avanzate

### <a name="cmake-generator"></a>Generatore di CMake

Corrisponde a **generator**: esegue il mapping a CMake **- G** passare e specifica il generatore da utilizzare. Questa proprietà può essere usata anche come macro, `${generator}`, durante la composizione di altri valori di proprietà. Visual Studio supporta attualmente i generatori CMake seguenti:

  - "Ninja"
  - "Unix makefile"
  - "Visual Studio 16 2019"
  - "Visual Studio 16 2019 Win64"
  - - "Visual Studio 16 2019 ARM"
  - "Visual Studio 15 2017"
  - "Visual Studio 15 2017 Win64"
  - "Visual Studio 15 2017 ARM"
  - "Visual Studio 14 2015"
  - "Visual Studio 14 2015 Win64"
  - "Visual Studio 14 2015 ARM"
  
  Poiché Ninja è progettato per velocità di configurazione rapide anziché per flessibilità e funzionalità, è impostato come predefinito. Tuttavia, alcuni progetti CMake potrebbero non essere in grado di eseguire una compilazione corretta usando Ninja. In questo caso, è possibile istruire CMake a generare un progetto Visual Studio.

### <a name="intellisense-mode"></a>Modalità di IntelliSense

Per IntelliSense accurata, impostare il valore appropriato per il progetto.

### <a name="install-directory"></a>Directory di installazione

La directory in cui CMake installa le destinazioni che la compilazione.

### <a name="cmake-executable"></a>File eseguibile di CMake

Il percorso completo dell'eseguibile di CMake, inclusi nome ed estensione file. Per le compilazioni remote, specificare il percorso di CMake nel computer remoto.

Per le configurazioni, ad esempio Linux che usano compilazioni remote, sono disponibili anche le impostazioni seguenti:

### <a name="remote-cmakeliststxt-root"></a>Radice remota cmakelists. txt

La directory nel computer remoto che contiene il file cmakelists. txt radice.

### <a name="remote-install-root"></a>Radice di installazione remota

La directory nel computer remoto in cui CMake installa destinazioni.

### <a name="remote-copy-sources"></a>Origini copia remota

Specifica se copiare i file di origine nel computer remoto e consente di specificare se usare rsync o sftp. 

## <a name="directly-edit-cmakesettingsjson"></a>Modificare direttamente Cmakesettings

È anche possibile modificare direttamente `CMakeSettings.json` per creare configurazioni personalizzate. Il **impostazioni Editor** dispone di un **modifica JSON** pulsante in alto a destra che apre il file per la modifica. 

Nell'esempio seguente viene illustrato un esempio di configurazione, è possibile usare come punto di partenza:

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

JSON IntelliSense consente di modificare il `CMakeSettings.json` file:

   ![IntelliSense JSON CMake](media/cmake-json-intellisense.png "CMake JSON IntelliSense")

L'editor JSON verrà informa anche quando si scelgono di impostazioni non compatibili.

Per altre informazioni su ognuna delle proprietà nel file, vedere [riferimenti allo schema Cmakesettings](cmakesettings-reference.md).

::: moniker-end

::: moniker range="<=vs-2017"

Visual Studio 2017 offre diverse configurazioni di CMake che definiscono come CMake.exe viene richiamata per creare la cache CMake per un determinato progetto. Per aggiungere una nuova configurazione, fare clic sull'elenco a discesa della configurazione nella barra degli strumenti e scegliere **Gestisci configurazioni**:

   ![Gestisci configurazioni in CMake](media/cmake-manage-configurations.png)

È possibile scegliere dall'elenco di configurazioni predefinite:

   ![Configurazioni predefinite CMake](media/cmake-configurations.png)

La prima volta che si seleziona una configurazione, Visual Studio crea un file `CMakeSettings.json` nella cartella radice del progetto. Questo file viene usato per ricreare il file di cache CMake, ad esempio dopo un'operazione di **pulizia**. 

Per aggiungere una configurazione, fare clic con il pulsante destro del mouse su `CMakeSettings.json` e scegliere **Aggiungi configurazione**. 

   ![Aggiungi configurazione in CMake](media/cmake-add-configuration.png "Aggiungi configurazione in CMake")

È anche possibile modificare il file usando l'**Editor impostazioni CMake**. Fare clic con il pulsante destro del mouse su `CMakeSettings.json` in **Esplora soluzioni** e scegliere **Modifica impostazioni di CMake**. In alternativa, selezionare **Gestisci configurazioni** dall'elenco a discesa della configurazione nella parte superiore della finestra dell'editor. 

È anche possibile modificare direttamente `CMakeSettings.json` creare configurazioni personalizzate nell'esempio seguente viene illustrato un esempio di configurazione, è possibile usare come punto di partenza:

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

IntelliSense JSON consente di modificare il file `CMakeSettings.json`:

   ![IntelliSense JSON CMake](media/cmake-json-intellisense.png "CMake JSON IntelliSense")

Per altre informazioni su ognuna delle proprietà nel file, vedere [riferimenti allo schema Cmakesettings](cmakesettings-reference.md).

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md)<br/>
[Configurare un progetto CMake per Linux](../linux/cmake-linux-project.md)<br/>
[Connettersi al computer Linux remoto](../linux/connect-to-your-remote-linux-computer.md)<br/>
[Configurare le sessioni di debug di CMake](configure-cmake-debugging-sessions.md)<br/>
[Distribuire, eseguire e sottoporre a debug il progetto Linux](../linux/deploy-run-and-debug-your-linux-project.md)<br/>
[Informazioni di riferimento sulle configurazioni predefinite CMake](cmake-predefined-configuration-reference.md)<br/>
