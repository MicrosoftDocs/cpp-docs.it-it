---
title: Informazioni di riferimento sullo schema CMakeSettings.json
ms.date: 11/22/2019
helpviewer_keywords:
- CMake in Visual C++
ms.assetid: 444d50df-215e-4d31-933a-b41841f186f8
ms.openlocfilehash: 542a469393d3655418f69e5d51d59adfa824ad15
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79417390"
---
# <a name="cmakesettingsjson-schema-reference"></a>Informazioni di riferimento sullo schema CMakeSettings.json

::: moniker range="vs-2015"

I progetti CMake sono supportati in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

Il file **CMakeSettings. JSON** contiene le informazioni usate da Visual Studio per IntelliSense e per costruire gli argomenti della riga di comando che passa a CMake. exe per una *configurazione* e un *ambiente*del compilatore specificati. Una configurazione specifica le proprietà che si applicano a una piattaforma e un tipo di compilazione specifici, ad esempio `x86-Debug` o `Linux-Release`. Ogni configurazione specifica un ambiente che incapsula le informazioni sul set di strumenti del compilatore, ad esempio MSVC, GCC o Clang. CMake usa gli argomenti della riga di comando per rigenerare il file *CMakeCache. txt* radice e altri file di progetto per il progetto. È possibile eseguire l'override dei valori nei file *CMakeLists. txt* . 

È possibile aggiungere o rimuovere configurazioni nell'IDE e quindi modificarle direttamente nel file JSON oppure usare l' **Editor delle impostazioni CMake** (Visual Studio 2019 e versioni successive). È possibile passare facilmente da una configurazione all'altra nell'IDE per generare i vari file di progetto. Per altre informazioni, vedere [personalizzare le impostazioni di compilazione CMake in Visual Studio](customize-cmake-settings.md) .

## <a name="configurations"></a>Configurazioni

La matrice di `configurations` contiene tutte le configurazioni per un progetto CMake. Per ulteriori informazioni sulle configurazioni predefinite, vedere informazioni di [riferimento sulla configurazione predefinite di CMake](cmake-predefined-configuration-reference.md) . È possibile aggiungere al file un numero qualsiasi di configurazioni predefinite o personalizzate. 

`configuration` ha le proprietà seguenti:

- `addressSanitizerEnabled`: se `true` compila il programma con l'igienizzatore di indirizzi (sperimentale in Windows). In Linux compilare con-fno-omette-frame-pointer e il livello di ottimizzazione del compilatore-OS o-oo per ottenere risultati ottimali.
- `addressSanitizerRuntimeFlags`: flag di runtime passati a AddressSanitizer tramite la variabile di ambiente ASAN_OPTIONS. Formato: organizzazione1 = valore: organizzazione2 = value2.
- `buildCommandArgs`: specifica opzioni di compilazione nativa passate a CMake dopo --build --. Ad esempio, il passaggio di -v quando si usa il generatore Ninja forza Ninja a restituire le righe di comando. Vedere [Argomenti della riga di comando Ninja](#ninja) per altre informazioni sui comandi Ninja.
- `buildRoot`: specifica la directory in cui CMake genera script di compilazione per il generatore selezionato.  Esegue il mapping all'opzione **-DCMAKE_BINARY_DIR** e specifica la posizione in cui verrà creato *CMakeCache. txt* . Se la cartella non esiste, verrà creata. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `cacheGenerationCommand`: specifica uno strumento da riga di comando e gli argomenti, ad esempio *gencache. bat debug* per generare la cache. Il comando viene eseguito dalla shell nell'ambiente specificato per la configurazione quando l'utente richiede in modo esplicito la rigenerazione oppure viene modificato un file CMakeLists. txt o CMakeSettings. JSON.
- `cacheRoot`: specifica il percorso di una cache CMake. Questa directory deve contenere un file *CMakeCache. txt* esistente.
- `clangTidyChecks`: elenco delimitato da virgole di avvisi che verranno passati a Clang-tidy; i caratteri jolly sono consentiti e il prefisso '-' eliminerà i controlli.
- `cmakeCommandArgs`: specifica le opzioni aggiuntive della riga di comando passate a CMake quando viene richiamato per generare i file di progetto.
- `cmakeToolchain`: specifica il file di toolchain. Viene passato a CMake usando -DCMAKE_TOOLCHAIN_FILE.
- `codeAnalysisRuleset`: specifica il set di regole da usare durante l'esecuzione dell'analisi codice. Può essere un percorso completo o il nome file di un file di set di regole installato da Visual Studio.
- `configurationType`: specifica la configurazione del tipo di compilazione per il generatore selezionato. Può essere uno dei seguenti:

  - Debug
  - Versione
  - MinSizeRel
  - RelWithDebInfo
  
- `ctestCommandArgs`: specifica opzioni aggiuntive della riga di comando passate a CTest durante l'esecuzione dei test.
- `description`: descrizione della configurazione che verrà visualizzata nei menu.
- `enableClangTidyCodeAnalysis`: usare Clang-tidy per l'analisi del codice.
- `enableMicrosoftCodeAnalysis`: usare gli strumenti di analisi del codice Microsoft per l'analisi del codice.
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

Poiché Ninja è progettato per velocità di configurazione rapide anziché per flessibilità e funzionalità, è impostato come predefinito. Tuttavia, alcuni progetti CMake potrebbero non essere in grado di eseguire una compilazione corretta usando Ninja. In tal caso, è possibile impostare CMake in modo da generare i progetti di Visual Studio.

Per specificare un generatore di Visual Studio in Visual Studio 2017, aprire il dal menu principale scegliendo **CMake | Modificare le impostazioni di CMake**. Eliminare "Ninja" e digitare "V". Questa operazione attiva IntelliSense, che consente di scegliere il generatore desiderato.

Per specificare un generatore di Visual Studio in Visual Studio 2019, fare clic con il pulsante destro del mouse sul file *CMakeLists. txt* in **Esplora soluzioni** e scegliere **impostazioni CMake per progetto** > **Mostra impostazioni avanzate** > **Generatore CMake**.

Quando la configurazione attiva specifica un generatore Visual Studio, per impostazione predefinita viene richiamato MSBuild.exe con gli argomenti `-m -v:minimal`. Per personalizzare la compilazione, all'interno del file *CMakeSettings. JSON* , è possibile specificare [argomenti della riga di comando di MSBuild](../build/reference/msbuild-visual-cpp-overview.md) aggiuntivi da passare al sistema di compilazione tramite la proprietà `buildCommandArgs`:

   ```json
   "buildCommandArgs": "-m:8 -v:minimal -p:PreferredToolArchitecture=x64"
   ```

- `installRoot`: specifica la directory in cui CMake genera le destinazioni di installazione per il generatore selezionato. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `inheritEnvironments`: specifica uno o più ambienti del compilatore da cui dipende la configurazione. Può essere qualsiasi ambiente personalizzato oppure uno degli ambienti predefiniti. Per altre informazioni, vedere [Ambienti](#environments).
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

- `name`: assegna un nome alla configurazione.  Per ulteriori informazioni sulle configurazioni predefinite, vedere informazioni di [riferimento sulla configurazione predefinite di CMake](cmake-predefined-configuration-reference.md) .
- `wslPath`: il percorso dell'utilità di avvio di un'istanza del sottosistema Windows per Linux.

### <a name="additional-settings-for-cmake-linux-projects"></a>Impostazioni aggiuntive per i progetti CMake Linux

- `remoteMachineName`: specifica il nome del computer Linux remoto che ospita CMake, le build e il debugger. Usare Gestione connessioni per aggiungere nuovi computer Linux. Le macro supportate includono `${defaultRemoteMachineName}`.
- `remoteCopySourcesOutputVerbosity`: specifica il livello di dettaglio dell'operazione di copia origine nel computer remoto. Può essere "Normale", "Dettagli" o "Diagnostica".
- `remoteCopySourcesConcurrentCopies`: specifica il numero di copie simultanee usate durante la sincronizzazione delle origini nel computer remoto (solo SFTP).
- `remoteCopySourcesMethod`: specifica il metodo per copiare i file nel computer remoto. Può essere "rsync" o "sftp".
- `remoteCMakeListsRoot`: specifica la directory nel computer remoto che contiene il progetto CMake. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `remoteBuildRoot`: specifica la directory nel computer remoto in cui CMake genera gli script di compilazione per il generatore selezionato. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}`, `${env.VARIABLE}`.
- `remoteInstallRoot`: specifica la directory nel computer remoto in cui CMake genera le destinazioni di installazione per il generatore selezionato. Le macro supportate includono `${workspaceRoot}`, `${workspaceHash}`, `${projectFile}`, `${projectDir}`, `${thisFile}`, `${thisFileDir}`, `${name}`, `${generator}` e `${env.VARIABLE}` dove `VARIABLE` è una variabile di ambiente definita a livello di sistema, utente o sessione.
- `remoteCopySources`: `boolean` che specifica se in Visual Studio devono essere copiati i file di origine nel computer remoto. Il valore predefinito è true. Impostare su false se la sincronizzazione dei file viene gestita in modo autonomo.
- `remoteCopyBuildOutput`: `boolean` che specifica se copiare gli output di compilazione dal sistema remoto.
- `remoteCopyAdditionalIncludeDirectories`: directory di inclusione aggiuntive da copiare dal computer remoto per supportare IntelliSense. Formattare come "/path1;/path2...".
- `remoteCopyExcludeDirectories`: le directory di inclusione non devono essere copiate dal computer remoto. Formattare come "/path1;/path2...".
- `remoteCopyUseCompilerDefaults`: specifica se usare i percorsi predefiniti e di inclusione del compilatore per IntelliSense. Deve essere false solo se i compilatori in uso non supportano argomenti di tipo GCC.
- `rsyncCommandArgs`: specifica un set di opzioni della riga di comando aggiuntive passate a rsync.
- `remoteCopySourcesExclusionList`: `array` che specifica un elenco di percorsi da escludere durante la copia dei file di origine: un percorso può essere il nome di un file o di una directory o un percorso relativo alla radice della copia. È possibile usare i caratteri jolly \\\"*\\\" e \\\"?\\\" per i criteri di ricerca GLOB.
- `cmakeExecutable`: specifica il percorso completo dell'eseguibile del programma CMake, inclusi il nome file e l'estensione.
- `remotePreGenerateCommand`: specifica il comando da eseguire prima di eseguire CMake per analizzare il file *CMakeLists. txt* .
- `remotePrebuildCommand`: specifica il comando da eseguire nel computer remoto prima della compilazione.
- `remotePostbuildCommand`: specifica il comando da eseguire nel computer remoto dopo la compilazione.
- `variables`: contiene una coppia nome-valore di variabili CMake che viene passata come nome **-D** *=_valore_*  a CMake. Se le istruzioni di compilazione per il progetto CMake specificano l'aggiunta di variabili direttamente al file *CMakeCache. txt* , è consigliabile aggiungerle qui. L'esempio seguente illustra come specificare la coppia nome-valore per il set di strumenti MSVC 14.14.26428:

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

Si noti che se non si definisce la `"type"`, per impostazione predefinita verrà utilizzato il tipo di `"STRING"`.
- `remoteCopyOptimizations`: proprietà di **Visual Studio 2019 versione 16,5 o successive** per il controllo della copia di origine nella destinazione remota. Le ottimizzazioni sono abilitate per impostazione predefinita. Include `remoteCopyUseOptimizations`, `rsyncSingleDirectoryCommandArgs` e `remoteCopySourcesMaxSmallChange`.

## <a name="environments"></a>Ambienti

Un *ambiente* incapsula le variabili di ambiente che vengono impostate nel processo usato da Visual Studio per richiamare CMake. exe. Per i progetti MSVC, le variabili sono quelle impostate in un [prompt dei comandi](building-on-the-command-line.md) per gli sviluppatori per una piattaforma specifica. Ad esempio, l'ambiente `msvc_x64_x64` è uguale all'esecuzione del **prompt dei comandi per gli sviluppatori per vs 2017** o **prompt dei comandi per gli sviluppatori per Visual Studio 2019** con gli argomenti **-Arch = amd64-host_arch = amd64** . È possibile usare la sintassi `env.{<variable_name>}` in *CMakeSettings. JSON* per fare riferimento alle singole variabili di ambiente, ad esempio per costruire percorsi per le cartelle.  Sono disponibili gli ambienti predefiniti seguenti:

- linux_arm: destinazione ARM Linux in modalità remota.
- linux_x64: destinazione x64 Linux in modalità remota.
- linux_x86: destinazione x86 Linux in modalità remota.
- msvc_arm: destinazione Windows ARM con il compilatore MSVC.
- msvc_arm_x64: destinazione Windows ARM con il compilatore MSVC a 64 bit.
- msvc_arm64: destinazione ARM64 Windows con il compilatore MSVC.
- msvc_arm64_x64: destinazione ARM64 Windows con il compilatore MSVC a 64 bit.
- msvc_x64: destinazione x64 Windows con il compilatore MSVC.
- msvc_x64_x64: destinazione x64 Windows con il compilatore MSVC a 64 bit.
- msvc_x86: destinazione x86 Windows con il compilatore MSVC.
- msvc_x86_x64: destinazione x86 Windows con il compilatore MSVC a 64 bit.

### <a name="accessing-environment-variables-from-cmakeliststxt"></a>Accesso alle variabili di ambiente da CMakeLists. txt

Da un file CMakeLists. txt tutte le variabili di ambiente fanno riferimento alla sintassi `$ENV{variable_name}`. Per visualizzare le variabili disponibili per un ambiente, aprire il prompt dei comandi corrispondente e digitare `SET`. Alcune delle informazioni nelle variabili di ambiente sono disponibili anche tramite le variabili di introspezione del sistema CMake, ma potrebbe risultare più comodo usare la variabile di ambiente. Ad esempio, la versione del compilatore MSVC o la versione Windows SDK sono facilmente recuperabili tramite le variabili di ambiente.

### <a name="custom-environment-variables"></a>Variabili di ambiente personalizzate

In `CMakeSettings.json`, è possibile definire le variabili di ambiente personalizzate a livello globale o per configurazione nella matrice di `environments`. Un ambiente personalizzato è un modo pratico per raggruppare un set di proprietà che è possibile usare al posto di un ambiente predefinito o per estendere o modificare un ambiente predefinito. Ogni elemento nella matrice `environments` è costituito da:

- `namespace`: assegna un nome all'ambiente in modo che sia possibile fare riferimento alle variabili dell'ambiente da una configurazione nel formato `namespace.variable`. L'oggetto ambiente predefinito viene chiamato `env` e viene popolato con determinate variabili di ambiente di sistema, incluso `%USERPROFILE%`.
- `environment`: identifica in modo univoco questo gruppo di variabili. Consente al gruppo di essere ereditato successivamente in una voce `inheritEnvironments`.
- `groupPriority`: numero intero che specifica la priorità di queste variabili durante la valutazione. Gli elementi con il numero più elevato vengono valutati per primi.
- `inheritEnvironments`: matrice di valori che specificano il set di ambienti ereditati da questo gruppo. Questa funzionalità consente di ereditare ambienti predefiniti e di creare variabili di ambiente personalizzate che vengono passate a CMake.exe quando è in esecuzione. 

**Visual Studio 2019 versione 16,4 e successive:** Le destinazioni di debug vengono avviate automaticamente con l'ambiente specificato in *CMakeSettings. JSON*. In [Launch. vs. JSON](launch-vs-schema-reference-cpp.md) e [Tasks. vs. JSON](tasks-vs-json-schema-reference-cpp.md)è possibile eseguire l'override o aggiungere variabili di ambiente per singole destinazioni o singole attività.

L'esempio seguente definisce una variabile globale, **BuildDir**, ereditata sia nella configurazione x86-Debug che nella configurazione x64-Debug. Ogni configurazione usa la variabile per specificare il valore della proprietà **buildRoot** per quella configurazione. Si noti anche come ogni configurazione usa la proprietà **inheritEnvironments** per specificare una variabile che si applica solo a quella configurazione.

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
      // Since this configuration doesn't modify BuildDir, it inherits
      // from the one defined globally.
      "buildRoot": "${env.BuildDir}\\${name}"
    }
  ]
}
```

## <a name="macros"></a>Macro

In *CMakeSettings. JSON*è possibile usare le macro seguenti:

- `${workspaceRoot}`: il percorso completo della cartella dell'area di lavoro
- `${workspaceHash}` – hash della posizione dell'area di lavoro; utile per creare un identificatore univoco per l'area di lavoro corrente (ad esempio, da usare nei percorsi delle cartelle)
- `${projectFile}` – percorso completo del file radice CMakeLists.txt
- `${projectDir}` – percorso completo della cartella del file radice CMakeLists.txt
- `${thisFile}` – percorso completo del file `CMakeSettings.json`
- `${name}` – nome della configurazione
- `${generator}` – nome del generatore CMake usato in questa configurazione

Tutti i riferimenti alle macro e alle variabili di ambiente in *CMakeSettings. JSON* vengono espansi prima di essere passati alla riga di comando cmake. exe.

## <a name="ninja"></a> Argomenti della riga di comando Ninja

Se non vengono specificate destinazioni, compila la destinazione "predefinita".

```cmd
C:\Program Files (x86)\Microsoft Visual Studio\Preview\Enterprise>ninja -?
ninja: invalid option -- `-?'
usage: ninja [options] [targets...]
```

|Opzione|Descrizione|
|--------------|------------|
| --version  | versione ninja per la stampa ("1.7.1")|
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

::: moniker-end
