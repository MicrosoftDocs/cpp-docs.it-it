---
title: Informazioni di riferimento sullo schema CppProperties.json
ms.date: 08/09/2019
helpviewer_keywords:
- CppProperties.json file [C++]
ms.openlocfilehash: 06029157b4b3826bc9c34a4434ab390f3eaa5a44
ms.sourcegitcommit: ace42fa67e704d56d03c03745b0b17d2a5afeba4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2019
ms.locfileid: "69975928"
---
# <a name="cpppropertiesjson-schema-reference"></a>Informazioni di riferimento sullo schema CppProperties.json

Aprire i progetti di cartella che non usano CMake può archiviare le impostazioni di configurazione del progetto per IntelliSense in un file *CppProperties. JSON* . I progetti CMake usano un file [CMakeSettings.json](customize-cmake-settings.md). Una configurazione è costituita da coppie nome/valore e definisce i percorsi #include, le opzioni del compilatore e altri parametri. Per ulteriori informazioni su come aggiungere configurazioni in un progetto di cartella aperta, vedere [progetti di C++ cartelle aperte](open-folder-projects-cpp.md) .

## <a name="configuration-properties"></a>Proprietà di configurazione

Una configurazione può avere una delle proprietà seguenti:

|||
|-|-|
|`inheritEnvironments`| Specifica gli ambienti da applicare a questa configurazione.|
|`name`|Nome della configurazione che verrà visualizzato nell'elenco C++ a discesa Configurazione|
|`includePath`|Elenco delimitato da virgole di cartelle da specificare nel percorso di inclusione (esegue il mapping a/I per la maggior parte dei compilatori)|
|`defines`|L'elenco delle macro che devono essere definite (con mapping a /D per la maggior parte dei compilatori)|
|`compilerSwitches`|Una o più opzioni aggiuntive che possono influire sul comportamento di IntelliSense|
|`forcedInclude`|L'intestazione da includere automaticamente in ogni unità di compilazione (con mapping a /FI per MSVC o -include per Clang)|
|`undefines`|L'elenco delle macro la cui definizione deve essere rimossa (con mapping a /U per MSVC)|
|`intelliSenseMode`|Il motore IntelliSense da usare. È possibile specificare una delle varianti specifiche dell'architettura predefinite per MSVC, gcc o Clang.|
|`environments`|Set di variabili definiti dall'utente che si comportano come variabili di ambiente in un prompt dei comandi e a cui è<VARIABLE>possibile accedere con $ {ENV.} macro.|

### <a name="intellisensemode-values"></a>valori intelliSenseMode

L'editor di codice mostra le opzioni disponibili quando si inizia a digitare:

![IntelliSense di Apri cartella](media/open-folder-intellisense-mode.png "IntelliSense di Apri cartella")

Questi sono i valori supportati:

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

Nota: i valori `msvc-x86` e `msvc-x64` sono supportati solo per motivi di compatibilità con le versioni precedenti. Usare invece `windows-msvc-*` le varianti.

## <a name="pre-defined-environments"></a>Ambienti predefiniti

Visual Studio fornisce gli ambienti predefiniti seguenti per Microsoft C++ , che vengono mappati al prompt dei comandi per gli sviluppatori corrispondente. Quando si eredita uno di questi ambienti, è possibile fare riferimento a qualsiasi variabile di ambiente utilizzando la proprietà `env` globale con questa sintassi macro: $ {ENV.\< > Variabile}.

|Nome variabile|Descrizione|
|-----------|-----------------|
|vsdev|Ambiente Visual Studio predefinito|
|msvc_x86|Compilazione per x86 usando strumenti x86|
|msvc_x64|Compilazione per AMD64 usando strumenti a 64 bit|
|msvc_arm|Compilazione per ARM usando strumenti x86|
|msvc_arm64|Compilazione per ARM64 usando strumenti x86|
|msvc_x86_x64|Compilazione per AMD64 usando strumenti x86|
|msvc_arm_x64|Compilazione per ARM usando strumenti a 64 bit|
|msvc_arm64_x64|Compilazione per ARM64 usando strumenti a 64 bit|

Quando viene installato il carico di lavoro di Linux sono disponibili gli ambienti seguenti per la definizione di Linux e WSL come destinazione remota:

|Nome variabile|Descrizione|
|-----------|-----------------|
|linux_x86|Imposta come destinazione x86 Linux in modalità remota|
|linux_x64|Imposta come destinazione x64 Linux in modalità remota|
|linux_arm|Imposta come destinazione ARM Linux in modalità remota|

## <a name="user_defined_environments"></a>Ambienti definiti dall'utente

Facoltativamente, è possibile usare `environments` la proprietà per definire set di variabili in *CppProperties. JSON* sia globalmente che per configurazione. Queste variabili si comportano come variabili di ambiente nel contesto di un progetto di cartella aperta ed è possibile accedervi con\< $ {ENV. VARIABILE >} sintassi di *Tasks. vs. JSON* e *Launch. vs. JSON* dopo che sono stati definiti qui. Tuttavia, non vengono necessariamente impostati come variabili di ambiente effettive in qualsiasi prompt dei comandi usato internamente da Visual Studio.

Quando si utilizza un ambiente, è necessario specificarlo nella `inheritsEnvironments` proprietà anche se l'ambiente viene definito come parte della stessa configurazione; la `environment` proprietà specifica il nome dell'ambiente. Nell'esempio seguente viene illustrata una configurazione di esempio per l'abilitazione di IntelliSense per GCC in un'installazione MSYS2. Si noti in che modo la configurazione definisce ed `mingw_64` eredita l'ambiente e il `includePath` modo in cui la `INCLUDE` proprietà può accedere alla variabile.

```json
"configurations": [
    {

      "inheritEnvironments": [
        "mingw_64"
      ],
      "name": "Mingw64",
      "includePath ,": [
        "${env.INCLUDE}",
        "${workspaceRoot}\\**",
      ],
      "intelliSenseMode": "linux-gcc-x64",
      "environments": [
        {
          "MINGW64_ROOT": "C:\\msys64\\mingw64",
          "BIN_ROOT": "${env.MINGW64_ROOT}\\bin",
          "FLAVOR": "x86_64-w64-mingw32",
          "TOOLSET_VERSION": "9.1.0",
          "PATH": "${env.MINGW64_ROOT}\\bin;${env.MINGW64_ROOT}\\..\\usr\\local\\bin;${env.MINGW64_ROOT}\\..\\usr\\bin;${env.MINGW64_ROOT}\\..\\bin;${env.PATH}",
          "INCLUDE": "${env.MINGW64_ROOT}\\include\\c++\\${env.TOOLSET_VERSION};${env.MINGW64_ROOT}\\include\\c++\\${env.TOOLSET_VERSION}\\tr1;${env.MINGW64_ROOT}\\include\\c++\\${env.TOOLSET_VERSION}\\${env.FLAVOR};",
          "environment": "mingw_64"
        }
      ]
    }
  ]
```

Quando si definisce una proprietà environments all'interno di una configurazione, viene eseguito l'override di tutte le variabili globali con lo stesso nome.

## <a name="built-in-macros"></a>Macro predefinite

È possibile accedere alle macro predefinite seguenti all'interno di *CppProperties. JSON*:

|||
|-|-|
|`${workspaceRoot}`| Percorso completo della cartella dell'area di lavoro|
|`${projectRoot}`| Percorso completo della cartella in cui si trova *CppProperties. JSON*|
|`${env.vsInstallDir}`| Percorso completo della cartella in cui è installata l'istanza in esecuzione di Visual Studio|

### <a name="example"></a>Esempio

Se il progetto include una cartella di inclusione e include anche *Windows. h* e altre intestazioni comuni del Windows SDK, è possibile aggiornare il file di configurazione *CppProperties. JSON* con quanto segue:

```json
{
  "configurations": [
    {
      "name": "Windows",
      "includePath": [
        // local include folder
        "${workspaceRoot}\include",
        // Windows SDK and CRT headers
        "${env.WindowsSdkDir}\include\${env.WindowsSDKVersion}\ucrt",
        "${env.NETFXSDKDir}\include\um",
        "${env.WindowsSdkDir}\include\${env.WindowsSDKVersion}\um",
        "${env.WindowsSdkDir}\include\${env.WindowsSDKVersion}\shared",
        "${env.VCToolsInstallDir}\include"
      ]
    }
  ]
}
```

> [!Note]
> `%WindowsSdkDir%` e `%VCToolsInstallDir%` non sono impostate come variabili di ambiente globali. Di conseguenza, verificare di avviare devenv.exe da un Prompt dei comandi per gli sviluppatori che definisce tali variabili (tipo "sviluppatore" nel menu Start di Windows).

## <a name="troubleshoot-intellisense-errors"></a>Risolvere gli errori di IntelliSense

Se non viene visualizzato il**messaggio** > IntelliSense previsto, è possibile risolvere i problemi passando a **strumenti** > **Opzioni** > editor di testo > **C/C++** **Avanzate** e impostazione **Abilita registrazione** su **true**. Per iniziare, provare a impostare il **livello di registrazione** su 5 e registrare i **filtri** su 8.

![Registrazione diagnostica](media/diagnostic-logging.png)

L'output viene reindirizzato al **finestra di output** ed è visibile quando si **sceglie Mostra output da: C++ Log**visivo. L'output contiene, tra le altre cose, l'elenco dei percorsi di inclusione effettivi che IntelliSense sta tentando di usare. Se i percorsi non corrispondono a quelli in *CppProperties. JSON*, provare a chiudere la cartella ed eliminare la sottocartella *. vs* che contiene i dati di esplorazione memorizzati nella cache.

Per risolvere i problemi di IntelliSense causati dalla mancanza di percorsi di inclusione, aprire l'**Elenco errori** e filtrare l'output specificando "Solo IntelliSense" e il codice di errore E1696 "Impossibile aprire il file di origine...".
