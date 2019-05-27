---
title: Informazioni di riferimento sullo schema CMakeSettings.json
ms.date: 05/16/2019
helpviewer_keywords:
- CMake in Visual C++
ms.assetid: 444d50df-215e-4d31-933a-b41841f186f8
ms.openlocfilehash: 018a755aa4f3acde44fe1dbb33b07b49c8d1c223
ms.sourcegitcommit: a10c9390413978d36b8096b684d5ed4cf1553bc8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/17/2019
ms.locfileid: "65837260"
---
# <a name="cmakesettingsjson-schema-reference"></a>Informazioni di riferimento sullo schema CMakeSettings.json

Il file **cmakesettings.json** contiene informazioni che specificano in che modo Visual Studio deve interagire con CMake per compilare un progetto per una piattaforma specifica. Nel file sono archiviate informazioni quali le variabili di ambiente o gli argomenti per l'ambiente cmake.exe. È possibile modificarlo direttamente o usare l'**Editor impostazioni CMake** (Visual Studio 2019 e versioni successive). Vedere [Personalizzare le impostazioni di compilazione di CMake in Visual Studio](customize-cmake-settings.md) per altre informazioni sull'editor.

## <a name="environments"></a>Ambienti

La matrice `environments` contiene un elenco di `items` di tipo `object` che definiscono un "ambiente" del set di strumenti del compilatore. È possibile usare un ambiente per applicare un set di variabili a `configuration`. Ogni elemento nella matrice `environments` è costituito da:

- `namespace`: assegna un nome all'ambiente in modo che sia possibile fare riferimento alle variabili dell'ambiente da una configurazione nel formato `namespace.variable`. L'oggetto ambiente predefinito è denominato `env` ed è popolato con determinate variabili di ambiente di sistema tra cui `%USERPROFILE%`.
- `environment`: identifica in modo univoco questo gruppo di variabili. Consente al gruppo di essere ereditato successivamente in una voce `inheritEnvironments`.
- `groupPriority`: Valore intero che specifica la priorità delle variabili durante la valutazione. Gli elementi con il numero più elevato vengono valutati per primi.
- `inheritEnvironments`: Matrice di valori che specificano il set di ambienti ereditati dal gruppo. Questa funzionalità consente di ereditare ambienti predefiniti e di creare variabili di ambiente personalizzate che vengono passate a CMake.exe quando è in esecuzione.

   ```json
   "inheritEnvironments": [ "msvc_x64_x64" ]
   ```

   L'esempio precedente equivale all'esecuzione del **Prompt dei comandi per gli sviluppatori per VS 2017** o del **Prompt dei comandi per gli sviluppatori per VS 2019** con gli argomenti **-arch=amd64 -host_arch=amd64**. È possibile usare qualsiasi ambiente personalizzato oppure gli ambienti predefiniti seguenti:
 
  - linux_arm: Imposta come destinazione ARM Linux in modalità remota.
  - linux_x64: Imposta come destinazione x64 Linux in modalità remota.
  - linux_x86: Imposta come destinazione x86 Linux in modalità remota.
  - msvc_arm: Imposta come destinazione ARM Windows con il compilatore MSVC.
  - msvc_arm_x64: Imposta come destinazione ARM Windows con il compilatore MSVC a 64 bit.
  - msvc_arm64: Imposta come destinazione ARM64 Windows con il compilatore MSVC.
  - msvc_arm64_x64: Imposta come destinazione ARM64 Windows con il compilatore MSVC a 64 bit.
  - msvc_x64: Imposta come destinazione x64 Windows con il compilatore MSVC.
  - msvc_x64_x64: Imposta come destinazione x64 Windows con il compilatore MSVC a 64 bit.
  - msvc_x86: Imposta come destinazione x86 Windows con il compilatore MSVC.
  - msvc_x86_x64: Imposta come destinazione x86 Windows con il compilatore MSVC a 64 bit.

## <a name="configurations"></a>Configurazioni

La matrice `configurations` è costituita da oggetti che rappresentano le configurazioni CMake che si applicano al file CMakeLists.txt nella stessa cartella. È possibile usare questi oggetti per definire più configurazioni della build e passare facilmente da uno all'altro nell'IDE. 

`configuration` ha le proprietà seguenti:
- `name`: assegna un nome alla configurazione.
- `description`: descrizione della configurazione che verrà visualizzata nei menu.
- `generator`: specifica il generatore CMake da usare per la configurazione. Può essere uno dei seguenti:
  
  **Solo Visual Studio 2019:**
  - Visual Studio 16 2019
  - Visual Studio 16 2019 Win64
  - Visual Studio 16 2019 ARM

  **Visual Studio 2017 e versioni successive:**
  - Visual Studio 15 2017
  - Visual Studio 15 2017 Win64
  - Visual Studio 15 2017 ARM
  - Visual Studio 14 2015
  - Visual Studio 14 2015 Win64
  - Visual Studio 14 2015 ARM
  - Makefile Unix
  - Ninja

Poiché Ninja è progettato per velocità di configurazione rapide anziché per flessibilità e funzionalità, è impostato come predefinito. Tuttavia, alcuni progetti CMake potrebbero non essere in grado di eseguire una compilazione corretta usando Ninja. In questo caso, è possibile istruire CMake a generare un progetto Visual Studio.

Per specificare un generatore di Visual Studio in Visual Studio 2017, aprire `CMakeSettings.json` dal menu principale scegliendo **CMake | Modifica impostazioni di CMake**. Eliminare "Ninja" e digitare "V". Questa operazione attiva IntelliSense, che consente di scegliere il generatore desiderato.

Per specificare un generatore di Visual Studio in Visual Studio 2019, fare clic con il pulsante destro del mouse sul file CMakeLists.txt in **Esplora soluzioni** e scegliere **Impostazioni di CMake per progetto** > **Mostra impostazioni avanzate** > **Generatore CMake**.

Quando la configurazione attiva specifica un generatore Visual Studio, per impostazione predefinita viene richiamato MSBuild.exe con gli argomenti `-m -v:minimal`. Per personalizzare la compilazione, all'interno del file `CMakeSettings.json` è possibile specificare altri [argomenti della riga di comando di MSBuild](../build/reference/msbuild-visual-cpp-overview.md) da passare al sistema di compilazione tramite la proprietà `buildCommandArgs`:

   ```json
   "buildCommandArgs": "-m:8 -v:minimal -p:PreferredToolArchitecture=x64"
   ```

- `configurationType`: specifica la configurazione del tipo di compilazione per il generatore selezionato. Può essere uno dei seguenti:
 
  - Debug
  - Versione
  - MinSizeRel
  - RelWithDebInfo
 
- `inheritEnvironments`: specifica uno o più ambienti del compilatore da cui dipende la configurazione. Può essere qualsiasi ambiente personalizzato oppure uno degli ambienti predefiniti.
- `buildRoot`: specifica la directory in cui CMake genera script di compilazione per il generatore selezionato.  Esegue il mapping all'opzione **-DCMAKE_BINARY_DIR** e specifica dove verrà creata la cache di CMake. Se la cartella non esiste, viene creata. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `installRoot`: specifica la directory in cui CMake genera le destinazioni di installazione per il generatore selezionato. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `cmakeCommandArgs`: specifica opzioni aggiuntive della riga di comando passate a CMake quando viene richiamato per generare la cache.
- `cmakeToolchain`: specifica il file di toolchain. Viene passato a CMake usando -DCMAKE_TOOLCHAIN_FILE.
- `buildCommandArgs`: specifica opzioni di compilazione nativa passate a CMake dopo --build --. Ad esempio, il passaggio di -v quando si usa il generatore Ninja forza Ninja a restituire le righe di comando. Vedere [Argomenti della riga di comando Ninja](#ninja) per altre informazioni sui comandi Ninja.
- `ctestCommandArgs`: specifica opzioni aggiuntive della riga di comando passate a CTest durante l'esecuzione dei test.
- `codeAnalysisRuleset`: specifica il set di regole da usare durante l'esecuzione dell'analisi codice. Può essere un percorso completo o il nome file di un file di set di regole installato da Visual Studio.
- `intelliSenseMode`: specifica la modalità usata per il calcolo delle informazioni di IntelliSense. Può essere uno dei seguenti:
 
  - windows-msvc-x86
  - windows-msvc-x64
  - windows-msvc-arm
  - windows-msvc-arm64
  - android-clang-x86
  - android-clang-x64
  - android-clang-arm
  - android-clang-arm64
  - ios-clang-x86
  - ios-clang-x64
  - ios-clang-arm
  - ios-clang-arm64
  - windows-clang-x86
  - windows-clang-x64
  - windows-clang-arm
  - windows-clang-arm64
  - linux-gcc-x86
  - linux-gcc-x64
  - linux-gcc-arm

- `cacheRoot`: specifica il percorso di una cache CMake. Questa directory deve contenere un file CMakeCache.txt esistente.

### <a name="additional-settings-for-cmake-linux-projects"></a>Impostazioni aggiuntive per i progetti CMake per Linux. 

- `remoteMachineName`: specifica il nome del computer Linux remoto che ospita CMake, le build e il debugger. Usare Gestione connessioni per aggiungere nuovi computer Linux. Le macro supportate includono `${defaultRemoteMachineName}`.
- `remoteCopySourcesOutputVerbosity`: specifica il livello di dettaglio dell'operazione di copia origine nel computer remoto. Può essere "Normale", "Dettagli" o "Diagnostica".
- `remoteCopySourcesConcurrentCopies`: specifica il numero di compie simultanee usate durante la sincronizzazione delle origini nel computer remoto.
- `remoteCopySourcesMethod`: specifica il metodo per copiare i file nel computer remoto. Può essere "rsync" o "sftp".
- `remoteCMakeListsRoot`: specifica la directory nel computer remoto che contiene il progetto CMake. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `remoteBuildRoot`: specifica la directory nel computer remoto in cui CMake genera gli script di compilazione per il generatore selezionato. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `remoteInstallRoot`: specifica la directory nel computer remoto in cui CMake genera le destinazioni di installazione per il generatore selezionato. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}` e `${env.VARIABLE}` dove `VARIABLE` è una variabile di ambiente definita a livello di sistema, utente o sessione.
- `remoteCopySources`: `boolean` che specifica se Visual Studio deve copiare i file di origine nel computer remoto. Il valore predefinito è true. Impostare su false se la sincronizzazione dei file viene gestita in modo autonomo.
- `remoteCopyBuildOutput`: `boolean` che specifica se copiare gli output di compilazione dal sistema remoto.
- `rsyncCommandArgs`: specifica un set di opzioni della riga di comando aggiuntive passate a rsync.
- `remoteCopySourcesExclusionList`: `array` che specifica un elenco di percorsi da escludere durante la copia dei file di origine. Un percorso può essere il nome di un file o di una directory oppure un percorso relativo alla radice della copia. È possibile usare i caratteri jolly \\\"*\\\" e \\\"?\\\" per i criteri di ricerca GLOB.
- `cmakeExecutable`: specifica il percorso completo dell'eseguibile del programma CMake, inclusi il nome file e l'estensione.
- `remotePreGenerateCommand`: specifica il comando da eseguire prima di CMake per analizzare il file CMakeLists.txt.
- `remotePrebuildCommand`: specifica il comando da eseguire nel computer remoto prima della compilazione.
- `remotePostbuildCommand`: specifica il comando da eseguire nel computer remoto dopo la compilazione.
- `variables`: contiene una coppia nome-valore di variabili CMake che verrà passata come **-D** *_nome_=_valore_* a CMake. Se le istruzioni per la compilazione del progetto CMake specificano l'aggiunta di qualsiasi variabile direttamente al file di cache di CMake, si consiglia di aggiungerle qui. L'esempio seguente illustra come specificare la coppia nome-valore per il set di strumenti MSVC 14.14.26428:

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

Si noti che se non si definisce `"type"`, il tipo "STRING" verrà presupposto per impostazione predefinita.

## <a name="environment-variables"></a>Variabili di ambiente

`CMakeSettings.json` supporta anche variabili di ambiente di consumo in tutte le relative proprietà elencate in precedenza. La sintassi da usare è `${env.FOO}` per espandere la variabile dell'ambiente %FOO%.

È possibile accedere anche alle macro incorporate all'interno di questo file:

- `${workspaceRoot}` – indica il percorso completo della cartella dello spazio di lavoro
- `${workspaceHash}` – hash della posizione dell'area di lavoro; utile per creare un identificatore univoco per l'area di lavoro corrente (ad esempio, da usare nei percorsi delle cartelle)
- `${projectFile}` – percorso completo del file radice CMakeLists.txt
- `${projectDir}` – percorso completo della cartella del file radice CMakeLists.txt
- `${thisFile}` – percorso completo del file `CMakeSettings.json`
- `${name}` – nome della configurazione
- `${generator}` – nome del generatore CMake usato in questa configurazione


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

## <a name="ninja"></a> Argomenti della riga di comando Ninja

Se non vengono specificate destinazioni, compila la destinazione "predefinita".

```cmd
C:\Program Files (x86)\Microsoft Visual Studio\Preview\Enterprise>ninja -?
ninja: invalid option -- `-?'
usage: ninja [options] [targets...]
```

|Opzione|Description|
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
|   -t TOOL  | esegue uno strumento secondario (usare gli strumenti secondari da elenco -t a elenco). termina le opzioni di livello superiore; i flag ulteriori vengono passati allo strumento|
|   -w FLAG  | modifica gli avvisi (usare gli avvisi da elenco -w a elenco)|




