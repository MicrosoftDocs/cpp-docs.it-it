---
title: Personalizzare le impostazioni di compilazione di CMake in Visual Studio
ms.date: 05/16/2019
helpviewer_keywords:
- CMake build settings
ms.openlocfilehash: a00b18f163758be0238a05c4d2af3195014d79b0
ms.sourcegitcommit: fde637f823494532314790602c2819f889706ff6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/13/2019
ms.locfileid: "67042545"
---
# <a name="customize-cmake-build-settings"></a>Personalizzare le impostazioni di compilazione di CMake

::: moniker range="vs-2019"

In Visual Studio 2019 e versioni successive è possibile aggiungere configurazioni e personalizzare le relative impostazioni usando l'**Editor impostazioni CMake**. L'editor costituisce un'alternativa più semplice alla modifica manuale del file CMakeSettings.json, ma se si preferisce modificare il file direttamente, è possibile fare clic sul collegamento **Modifica JSON** in alto a destra nell'editor. 

Per aprire l'editor, fare clic sull'elenco a discesa **Configurazione** nella barra degli strumenti principale e scegliere **Gestisci configurazioni**.

![Elenco a discesa delle configurazioni di CMake](media/vs2019-cmake-manage-configurations.png)

È ora possibile visualizzare l'**Editor impostazioni** con le configurazioni installate a sinistra. 

![Editor impostazioni CMake](media/cmake-settings-editor.png)

Visual Studio offre due configurazioni per impostazione predefinita: `x64-Debug` e `x86-Debug`. È possibile aggiungere altre configurazioni facendo clic sul segno più verde. Le impostazioni visualizzate nell'editor potrebbero variare a seconda della configurazione selezionata.

Le opzioni scelte nell'editor vengono scritte in un file denominato CMakeSettings.json. Questo file fornisce gli argomenti della riga di comando e le variabili di ambiente che vengono passate a CMake quando si compilano i progetti. Visual Studio non modifica mai CMakeLists.txt automaticamente. Usando CMakeSettings.json è possibile personalizzare la compilazione tramite Visual Studio lasciando invariati i file di progetto di CMake, in modo che altri membri del team possano utilizzarli con qualunque strumento in uso.

## <a name="cmake-general-settings"></a>Impostazioni generali di CMake

Le impostazioni seguenti sono disponibili sotto l'intestazione **Generale**:

### <a name="configuration-name"></a>Nome configurazione

Corrisponde all'impostazione **name**. È il nome che viene visualizzato nell'elenco a discesa della configurazione C++. È possibile usare la macro `${name}` per la composizione di altri valori delle proprietà, come i percorsi.


### <a name="configuration-type"></a>Tipo di configurazione

Corrisponde all'impostazione **configurationType**. Definisce il tipo di configurazione della build per il generatore selezionato. I valori attualmente supportati sono "Debug", "MinSizeRel", "Release" e "RelWithDebInfo".

### <a name="toolset"></a>Set di strumenti

Corrisponde all'impostazione **inheritedEnvironments**. Definisce l'ambiente del compilatore che verrà usato per compilare la configurazione selezionata. I valori supportati dipendono dal tipo di configurazione. Per creare un ambiente personalizzato, fare clic sul collegamento **Modifica JSON** nell'angolo in alto a destra dell'Editor impostazioni e modificare direttamente il file CMakeSettings.json.

### <a name="cmake-toolchain-file"></a>File della toolchain di CMake

Percorso del file della toolchain di CMake. Verrà passato a CMake come "-DCMAKE_TOOLCHAIN_FILE = \<filepath>".

### <a name="build-root"></a>Radice compilazione

Corrisponde a **buildRoot**. Esegue il mapping all'opzione **-DCMAKE_BINARY_DIR** e specifica dove verrà creata la cache di CMake. Se la cartella non esiste, verrà creata.

## <a name="command-arguments"></a>Argomenti del comando

Le impostazioni seguenti sono disponibili sotto l'intestazione **Argomenti del comando**:

### <a name="cmake-command-arguments"></a>Argomenti del comando CMake

Corrisponde a **cmakeCommandArgs**. Specifica le eventuali opzioni aggiuntive che si vuole passare a CMake.exe.

### <a name="build-command-arguments"></a>Argomenti del comando Build

Corrisponde a **buildCommandArgs**: specifica le opzioni aggiuntive da passare al sistema di compilazione sottostante. Ad esempio, il passaggio di -v quando si usa il generatore Ninja forza Ninja a restituire le righe di comando.


### <a name="ctest-command-arguments"></a>Argomenti del comando CTest

Corrisponde a **ctestCommandArgs**: specifica le opzioni aggiuntive da passare a CTest durante l'esecuzione di test.

## <a name="general-settings-for-remote-builds"></a>Impostazioni generali per le compilazioni remote

Per le configurazioni come Linux che usano compilazioni remote, sono disponibili anche le impostazioni seguenti:

### <a name="rsync-command-arguments"></a>Argomenti del comando rsync

Fornire eventuali argomenti del comando da passare a rsync. 

## <a name="cmake-variables-and-cache"></a>Variabili e cache CMake

Queste impostazioni consentono di impostare le variabili di CMake e le salvano in CMakeSettings.json. Verranno passate a CMake in fase di compilazione e sostituiranno i valori presenti nel file CMakeLists.txt. È possibile usare questa sezione nello stesso modo in cui si potrebbe usare CMakeGUI per visualizzare un elenco di tutte le variabili CMake disponibili per la modifica. Fare clic sul pulsante **Salva e genera la cache** per visualizzare un elenco di tutte le variabili CMake disponibili per la modifica, incluse le variabili avanzate (per CMakeGUI). È possibile filtrare l'elenco in base al nome delle variabili. 

Corrisponde a **variables**: contiene una coppia nome-valore di variabili CMake che verrà passata come **-D** *_nome_=_valore_* a CMake. Se le istruzioni per la compilazione del progetto CMake specificano l'aggiunta di qualsiasi variabile direttamente al file di cache di CMake, si consiglia di aggiungerle qui.

## <a name="advanced-settings"></a>Impostazioni avanzate

### <a name="cmake-generator"></a>Generatore CMake

Corrisponde a **generator**: esegue il mapping all'opzione **-G** di CMake e specifica il generatore da usare. Questa proprietà può essere usata anche come macro, `${generator}`, durante la composizione di altri valori di proprietà. Visual Studio supporta attualmente i generatori CMake seguenti:

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
  
  Poiché Ninja è progettato per velocità di configurazione rapide anziché per flessibilità e funzionalità, è impostato come predefinito. Tuttavia, alcuni progetti CMake potrebbero non essere in grado di eseguire una compilazione corretta usando Ninja. In questo caso, è possibile istruire CMake a generare un progetto Visual Studio.

### <a name="intellisense-mode"></a>Modalità IntelliSense

Per una modalità IntelliSense accurata, impostare il valore appropriato per il progetto.

### <a name="install-directory"></a>Directory di installazione

Directory in cui CMake installa le destinazioni compilate.

### <a name="cmake-executable"></a>Eseguibile di CMake

Percorso completo dell'eseguibile di CMake, inclusi il nome file e l'estensione. Per le compilazioni remote, specificare il percorso di CMake nel computer remoto.

Per le configurazioni come Linux che usano compilazioni remote, sono disponibili anche le impostazioni seguenti:

### <a name="remote-cmakeliststxt-root"></a>Radice di CMakeLists.txt in computer remoto

Directory nel computer remoto che contiene il file CMakeLists.txt radice.

### <a name="remote-install-root"></a>Radice di installazione in computer remoto

Directory nel computer remoto in cui CMake installa le destinazioni.

### <a name="remote-copy-sources"></a>Copia origini in computer remoto

Specifica se copiare i file di origine nel computer remoto e consente di specificare se usare rsync o sftp. 

## <a name="directly-edit-cmakesettingsjson"></a>Modificare direttamente CMakeSettings.json

È anche possibile modificare direttamente `CMakeSettings.json` per creare configurazioni personalizzate. L'**Editor impostazioni** dispone di un pulsante **Modifica JSON** nell'angolo in alto a destra che apre il file per la modifica. 

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

IntelliSense JSON consente di modificare il file `CMakeSettings.json`:

   ![IntelliSense JSON CMake](media/cmake-json-intellisense.png "CMake JSON IntelliSense")

L'editor JSON informerà inoltre l'utente quando si scelgono impostazioni non compatibili.

Per altre informazioni su ognuna delle proprietà nel file, vedere [Informazioni di riferimento sullo schema CMakeSettings.json](cmakesettings-reference.md).

::: moniker-end

::: moniker range="<=vs-2017"

Visual Studio 2017 offre diverse configurazioni CMake che definiscono il modo in cui CMake.exe viene richiamato per creare la cache di CMake per un progetto specifico. Per aggiungere una nuova configurazione, fare clic sull'elenco a discesa della configurazione nella barra degli strumenti e scegliere **Gestisci configurazioni**:

   ![Gestisci configurazioni in CMake](media/cmake-manage-configurations.png)

È possibile scegliere dall'elenco di configurazioni predefinite:

   ![Configurazioni predefinite CMake](media/cmake-configurations.png)

La prima volta che si seleziona una configurazione, Visual Studio crea un file `CMakeSettings.json` nella cartella radice del progetto. Questo file viene usato per ricreare il file di cache CMake, ad esempio dopo un'operazione di **pulizia**. 

Per aggiungere una configurazione, fare clic con il pulsante destro del mouse su `CMakeSettings.json` e scegliere **Aggiungi configurazione**. 

   ![Aggiungi configurazione in CMake](media/cmake-add-configuration.png "Aggiungi configurazione in CMake")

È anche possibile modificare il file usando l'**Editor impostazioni CMake**. Fare clic con il pulsante destro del mouse su `CMakeSettings.json` in **Esplora soluzioni** e scegliere **Modifica impostazioni di CMake**. In alternativa, selezionare **Gestisci configurazioni** dall'elenco a discesa della configurazione nella parte superiore della finestra dell'editor. 

È anche possibile modificare direttamente `CMakeSettings.json` per creare configurazioni personalizzate. L'esempio seguente mostra una configurazione di esempio che è possibile usare come punto di partenza:

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

Per altre informazioni su ognuna delle proprietà nel file, vedere [Informazioni di riferimento sullo schema CMakeSettings.json](cmakesettings-reference.md).

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md)<br/>
[Configurare un progetto CMake per Linux](../linux/cmake-linux-project.md)<br/>
[Connettersi al computer Linux remoto](../linux/connect-to-your-remote-linux-computer.md)<br/>
[Configurare le sessioni di debug di CMake](configure-cmake-debugging-sessions.md)<br/>
[Distribuire, eseguire e sottoporre a debug il progetto Linux](../linux/deploy-run-and-debug-your-linux-project.md)<br/>
[Informazioni di riferimento sulle configurazioni predefinite CMake](cmake-predefined-configuration-reference.md)<br/>
