---
title: Personalizzare le impostazioni di compilazione di CMake in Visual Studio
ms.date: 03/05/2019
helpviewer_keywords:
- CMake build settings
ms.openlocfilehash: 4864e094ab967a563b153fa79fd0bf5c375f40f7
ms.sourcegitcommit: 14b292596bc9b9b883a9c58cd3e366b282a1f7b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2019
ms.locfileid: "60124889"
---
# <a name="customize-cmake-build-settings"></a>Personalizzare le impostazioni di compilazione di CMake

Visual Studio offre diverse configurazioni CMake che definiscono il modo in cui CMake.exe viene richiamato per creare la cache di CMake per un progetto specifico. Per aggiungere una nuova configurazione, fare clic sull'elenco a discesa della configurazione nella barra degli strumenti e scegliere **Gestisci configurazioni**:

   ![Gestisci configurazioni in CMake](media/cmake-manage-configurations.png)

È possibile scegliere dall'elenco di configurazioni predefinite:

   ![Configurazioni predefinite CMake](media/cmake-configurations.png)

La prima volta che si seleziona una configurazione, Visual Studio crea un file `CMakeSettings.json` nella cartella radice del progetto. Questo file viene usato per ricreare il file di cache CMake, ad esempio dopo un'operazione di **pulizia**. 

Per aggiungere una configurazione, fare clic con il pulsante destro del mouse su `CMakeSettings.json` e scegliere **Aggiungi configurazione**. 

   ![Aggiungi configurazione in CMake](media/cmake-add-configuration.png "Aggiungi configurazione in CMake")

IntelliSense JSON consente di modificare il file `CMakeSettings.json`:

   ![IntelliSense JSON CMake](media/cmake-json-intellisense.png "CMake JSON IntelliSense")

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

- **nome**: il nome della configurazione visualizzato nell'elenco a discesa della configurazione C++. La macro `${name}` consente di usare questo valore durante la composizione di altri valori di proprietà, ad esempio i percorsi. Per un esempio, vedere la definizione di **buildRoot** in `CMakeSettings.json`.

- **generator**: esegue il mapping all'opzione **-G** di CMake e specifica il generatore da usare. Questa proprietà può essere usata anche come macro, `${generator}`, durante la composizione di altri valori di proprietà. Visual Studio supporta attualmente i generatori CMake seguenti:

  - "Ninja"
  - "Visual Studio 14 2015"
  - "Visual Studio 14 2015 ARM"
  - "Visual Studio 14 2015 Win64"
  - "Visual Studio 15 2017"
  - "Visual Studio 15 2017 ARM"
  - "Visual Studio 15 2017 Win64"

  Poiché Ninja è progettato per velocità di configurazione rapide anziché per flessibilità e funzionalità, è impostato come predefinito. Tuttavia, alcuni progetti CMake potrebbero non essere in grado di eseguire una compilazione corretta usando Ninja. In questo caso, è possibile istruire CMake a generare un progetto Visual Studio.

  Per specificare un generatore Visual Studio, aprire `CMakeSettings.json` dal menu principale scegliendo **CMake | Modifica impostazioni di CMake**. Eliminare "Ninja" e digitare "V". Questa operazione attiva IntelliSense, che consente di scegliere il generatore desiderato.

  Quando la configurazione attiva specifica un generatore Visual Studio, per impostazione predefinita viene richiamato MSBuild.exe con gli argomenti `-m -v:minimal`. Per personalizzare la compilazione, all'interno del file `CMakeSettings.json` è possibile specificare altri [argomenti della riga di comando di MSBuild](../build/reference/msbuild-visual-cpp-overview.md) da passare al sistema di compilazione tramite la proprietà `buildCommandArgs`:
    
    ```json
    "buildCommandArgs": "-m:8 -v:minimal -p:PreferredToolArchitecture=x64"
    ```

- **buildRoot**: esegue il mapping a **-DCMAKE_BINARY_DIR** esegue lo switch e specifica dove verrà creata la cache di CMake. Se la cartella non esiste, verrà creata.

- **variabili**: contiene una coppia nome-valore di variabili CMake che verrà trasferita come **-D** *_nome_=_valore_* a CMake. Se le istruzioni per la compilazione del progetto CMake specificano l'aggiunta di qualsiasi variabile direttamente al file di cache di CMake, si consiglia di aggiungerle qui. L'esempio seguente illustra come specificare la coppia nome-valore per il set di strumenti MSVC 14.14.26428:

```json
"variables": [
    {
      "name": "CMAKE_CXX_COMPILER",
      "value": "C:/Program Files (x86)/Microsoft Visual Studio/157/Enterprise/VC/Tools/MSVC/14.14.26428/bin/HostX86/x86/cl.exe",
      "type": "FILEPATH"
    },
    {
      "name": "CMAKE_C_COMPILER",
      "value": "C:/Program Files (x86)/Microsoft Visual Studio/157/Enterprise/VC/Tools/MSVC/14.14.26428/bin/HostX86/x86/cl.exe",
      "type": "FILEPATH"
    }
  ]
```

Si noti che se non si definisce la `"type"`, il tipo "STRING" verrà presupposto che per impostazione predefinita.

- **cmakeCommandArgs**: specifica gli eventuali switch aggiuntivi che si desidera trasferire a CMake.exe.

- **configurationType**: definisce il tipo di configurazione di compilazione per il generatore selezionato. I valori attualmente supportati sono "Debug", "MinSizeRel", "Release" e "RelWithDebInfo".

- **ctestCommandArgs**: specifica le opzioni aggiuntive da passare a CTest durante l'esecuzione di test.

- **buildCommandArgs**: specifica le opzioni aggiuntive da passare al sistema di compilazione sottostante. Ad esempio, il passaggio di -v quando si usa il generatore Ninja forza Ninja a restituire le righe di comando.

Sono disponibili impostazioni aggiuntive per i progetti CMake per Linux. Vedere [Configure a CMake Linux project](../linux/cmake-linux-project.md) (Configurare un progetto CMake per Linux).

## <a name="environment-variables"></a>Variabili di ambiente

 `CMakeSettings.json` supporta anche variabili di ambiente di consumo in tutte le proprietà elencate in precedenza. La sintassi da usare è `${env.FOO}` per espandere la variabile dell'ambiente %FOO%.
È possibile accedere anche alle macro incorporate all'interno di questo file:

- `${workspaceRoot}` – indica il percorso completo della cartella dello spazio di lavoro
- `${workspaceHash}` – hash della posizione dell'area di lavoro; utile per creare un identificatore univoco per l'area di lavoro corrente (ad esempio, da usare nei percorsi delle cartelle)
- `${projectFile}` – percorso completo del file radice CMakeLists.txt
- `${projectDir}` – percorso completo della cartella del file radice CMakeLists.txt
- `${thisFile}` – percorso completo del file `CMakeSettings.json`
- `${name}` – nome della configurazione
- `${generator}` – nome del generatore CMake usato in questa configurazione

## <a name="ninja-command-line-arguments"></a>Argomenti della riga di comando Ninja

Se non vengono specificate destinazioni, compila la destinazione "predefinita" (vedere il manuale).

```cmd
C:\Program Files (x86)\Microsoft Visual Studio\Preview\Enterprise>ninja -?
ninja: invalid option -- `-?'
usage: ninja [options] [targets...]
```

|Opzione|Descrizione|
|--------------|------------|
| --versione  | versione ninja per la stampa ("1.7.1")|
|   -C DIR   | passa a DIR prima di eseguire qualunque altra operazione|
|   -f FILE  | specifica il file di compilazione di input (predefinito=build.ninja)|
|   -j N     | esegue le operazioni N in parallelo (predefinito=14, derivato dalle CPU disponibili)|
|   -k N     | prosegue fino all'errore delle operazioni N (predefinito=1)|
|   -l N     | non inizia nuove operazioni se la media del carico è superiore a N|
|   -n       | esecuzione (non esegue i comandi ma agisce come se fossero stati eseguiti correttamente)|
|   -v       | mostra tutte le righe di comando durante la compilazione|
|   -d MODE  | abilita il debug (usare le modalità da elenco -d a elenco)|
|   -t TOOL  | esegue uno strumento secondario (usare gli strumenti secondari da elenco -t a elenco). Termina le opzioni di livello superiore ulteriori flag vengono passati allo strumento|
|   -w FLAG  | modifica gli avvisi (usare gli avvisi da elenco -w a elenco)|

## <a name="inherited-environments"></a>Ambienti ereditati

 `CMakeSettings.json` supporta gli ambienti ereditati. Questa funzionalità consente di (1) ereditare ambienti predefiniti e di (2) creare variabili di ambiente personalizzate che vengono passate a CMake.exe quando è in esecuzione.

```json
  "inheritEnvironments": [ "msvc_x64_x64" ]
```

L'esempio precedente equivale all'esecuzione del **Prompt dei comandi per gli sviluppatori per VS 2017** con gli argomenti **-arch=amd64 -host_arch=amd64**.

La tabella seguente mostra i valori predefiniti dei valori predefiniti:

|Nome contesto|Descrizione|
|-----------|-----------------|
|vsdev|Ambiente Visual Studio predefinito|
|msvc_x86|Compilazione per x86 usando strumenti x86|
|msvc_arm| Compilazione per ARM usando strumenti x86|
|msvc_arm64|Compilazione per ARM64 usando strumenti x86|
|msvc_x86_x64|Compilazione per AMD64 usando strumenti x86|
|msvc_x64_x64|Compilazione per AMD64 usando strumenti a 64 bit|
|msvc_arm_x64|Compilazione per ARM usando strumenti a 64 bit|
|msvc_arm64_x64|Compilazione per ARM64 usando strumenti a 64 bit|

### <a name="custom-environment-variables"></a>Variabili di ambiente personalizzate

In `CMakeSettings.json` è possibile definire variabili di ambiente personalizzate globalmente o per configurazione nella proprietà **environments**. L'esempio seguente definisce una variabile globale, **BuildDir**, ereditata sia nella configurazione x86-Debug che nella configurazione x64-Debug. Ogni configurazione usa la variabile per specificare il valore della proprietà **buildRoot** per quella configurazione. Si noti anche come ogni configurazione usa la proprietà **inheritEnvironments** per specificare una variabile che si applica solo a quella configurazione.

```json
{
  // The "environments" property is an array of key value pairs of the form
  // { "EnvVar1": "Value1", "EnvVar2": "Value2" }
  "environments": [
    {
      "BuildDir": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}\\build",
    }
  ],

  "configurations": [
    {
      "name": "x86-Debug",
      "generator": "Ninja",
      "configurationType": "Debug",
      // Inherit the defaults for using the MSVC x86 compiler.
      "inheritEnvironments": [ "msvc_x86" ],
      "buildRoot": "${env.BuildDir}\\${name}"    },
    {
      "name": "x64-Debug",
      "generator": "Ninja",
      "configurationType": "Debug",
      // Inherit the defaults for using the MSVC x64 compiler.
      "inheritEnvironments": [ "msvc_x64" ],
      "buildRoot": "${env.BuildDir}\\${name}"
    }
  ]
}
```

Nell'esempio seguente la configurazione x86-Debug definisce il proprio valore per la proprietà **BuildDir**. Questo valore sostituisce il valore impostato dalla proprietà **BuildDir** globale in modo che **BuildRoot** restituisca `D:\custom-builddir\x86-Debug`.

```json
{
  "environments": [
    {
      "BuildDir": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}",
    }
  ],

  "configurations": [
    {
      "name": "x86-Debug",

      // The syntax for this property is the same as the global one above.
      "environments": [
        {
          // Replace the global property entirely.
          "BuildDir": "D:\\custom-builddir"
          // This environment does not specify a namespace, hence by default "env" will be assumed.
          // "namespace" : "name" would require that this variable be referenced with "${name.BuildDir}".
        }
      ],

      "generator": "Ninja",
      "configurationType": "Debug",
      "inheritEnvironments": [ "msvc_x86" ],
      // Evaluates to "D:\custom-builddir\x86-Debug"
      "buildRoot": "${env.BuildDir}\\${name}"
    },
    {
      "name": "x64-Debug",

      "generator": "Ninja",
      "configurationType": "Debug",
      "inheritEnvironments": [ "msvc_x64" ],
      // Since this configuration doesn’t modify BuildDir, it inherits
      // from the one defined globally.
      "buildRoot": "${env.BuildDir}\\${name}"
    }
  ]
}
```

## <a name="see-also"></a>Vedere anche

[Progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md)<br/>
[Configurare un progetto CMake per Linux](../linux/cmake-linux-project.md)<br/>
[Connettersi al computer Linux remoto](../linux/connect-to-your-remote-linux-computer.md)<br/>
[Configurare le sessioni di debug di CMake](configure-cmake-debugging-sessions.md)<br/>
[Distribuire, eseguire e sottoporre a debug il progetto Linux](../linux/deploy-run-and-debug-your-linux-project.md)<br/>
[Informazioni di riferimento sulle configurazioni predefinite CMake](cmake-predefined-configuration-reference.md)<br/>
