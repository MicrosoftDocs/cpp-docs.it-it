---
title: CppProperties.jsper riferimento
ms.date: 08/09/2019
helpviewer_keywords:
- CppProperties.json file [C++]
ms.openlocfilehash: 2409c1d93d4e9d814407dbd4334daa73ae630775
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224058"
---
# <a name="cpppropertiesjson-reference"></a>CppProperties.jsper riferimento

I progetti di cartella che non usano CMake possono archiviare le impostazioni di configurazione del progetto per IntelliSense in un *CppProperties.jssu* file. I progetti CMake usano un [CMakeSettings.jssu](customize-cmake-settings.md) file. Una configurazione è costituita da coppie nome/valore e definisce #include percorsi, commutatori del compilatore e altri parametri. Per ulteriori informazioni su come aggiungere configurazioni in un progetto di cartella aperta, vedere [progetti di cartelle aperti per C++](open-folder-projects-cpp.md) . Le sezioni seguenti riepilogano le varie impostazioni. Per una descrizione completa dello schema, passare a *CppProperties_schema.json*, il cui percorso completo viene fornito nella parte superiore dell'editor di codice quando *CppProperties.js* è aperto.

## <a name="configuration-properties"></a>Proprietà di configurazione

Una configurazione può avere una delle proprietà seguenti:

|||
|-|-|
|`inheritEnvironments`| Specifica gli ambienti da applicare a questa configurazione.|
|`name`|Nome della configurazione che verrà visualizzato nell'elenco a discesa configurazione C++|
|`includePath`|Elenco delimitato da virgole di cartelle da specificare nel percorso di inclusione (esegue il mapping a/I per la maggior parte dei compilatori)|
|`defines`|L'elenco delle macro che devono essere definite (con mapping a /D per la maggior parte dei compilatori)|
|`compilerSwitches`|Una o più opzioni aggiuntive che possono influire sul comportamento di IntelliSense|
|`forcedInclude`|L'intestazione da includere automaticamente in ogni unità di compilazione (con mapping a /FI per MSVC o -include per Clang)|
|`undefines`|L'elenco delle macro la cui definizione deve essere rimossa (con mapping a /U per MSVC)|
|`intelliSenseMode`|Il motore IntelliSense da usare. È possibile specificare una delle varianti specifiche dell'architettura predefinite per MSVC, gcc o Clang.|
|`environments`|Set di variabili definiti dall'utente che si comportano come variabili di ambiente in un prompt dei comandi e a cui è possibile accedere con $ {ENV. \<VARIABLE> } macro.|

### <a name="intellisensemode-values"></a>valori intelliSenseMode

L'editor di codice mostra le opzioni disponibili quando si inizia a digitare:

![Apri cartella IntelliSense](media/open-folder-intellisense-mode.png "Apri cartella IntelliSense")

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

Nota: i valori `msvc-x86` e `msvc-x64` sono supportati solo per i motivi legacy. Usare `windows-msvc-*` invece le varianti.

## <a name="pre-defined-environments"></a>Ambienti predefiniti

In Visual Studio sono disponibili gli ambienti predefiniti seguenti per Microsoft C++ che vengono mappati al Prompt dei comandi per gli sviluppatori corrispondente. Quando si eredita uno di questi ambienti, è possibile fare riferimento a qualsiasi variabile di ambiente utilizzando la proprietà globale `env` con questa sintassi macro: $ {ENV. \<VARIABLE> }.

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

## <a name="user-defined-environments"></a><a name="user_defined_environments"></a>Ambienti definiti dall'utente

Facoltativamente, è possibile usare la `environments` proprietà per definire set di variabili in *CppProperties.js* a livello globale o per configurazione. Queste variabili si comportano come variabili di ambiente nel contesto di un progetto di cartella aperta ed è possibile accedervi con $ {ENV. \<VARIABLE> } la sintassi da *tasks.vs.js* e *launch.vs.js* dopo che sono state definite qui. Tuttavia, non vengono necessariamente impostati come variabili di ambiente effettive in qualsiasi prompt dei comandi usato internamente da Visual Studio.

**Visual Studio 2019 versione 16,4 e successive:** Le variabili specifiche della configurazione definite in *CppProperties.json* vengono prelevate automaticamente dalle destinazioni e dalle attività di debug senza che sia necessario impostare `inheritEnvironments` . Le destinazioni di debug vengono avviate automaticamente con l'ambiente specificato in *CppProperties.js*.

**Visual Studio 2019 versione 16,3 e versioni precedenti:** Quando si utilizza un ambiente, è necessario specificarlo nella `inheritsEnvironments` proprietà anche se l'ambiente viene definito come parte della stessa configurazione; la `environment` proprietà specifica il nome dell'ambiente. Nell'esempio seguente viene illustrata una configurazione di esempio per l'abilitazione di IntelliSense per GCC in un'installazione MSYS2. Si noti in che modo la configurazione definisce ed eredita l' `mingw_64` ambiente e il modo in cui la `includePath` proprietà può accedere alla `INCLUDE` variabile.

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

Quando si definisce una proprietà **environments** all'interno di una configurazione, viene eseguito l'override di tutte le variabili globali con lo stesso nome.

## <a name="built-in-macros"></a>Macro predefinite

È possibile accedere alle macro predefinite seguenti all'interno *CppProperties.js*:

|||
|-|-|
|`${workspaceRoot}`| Percorso completo della cartella dell'area di lavoro|
|`${projectRoot}`| Percorso completo della cartella in cui viene inserito *CppProperties.js*|
|`${env.vsInstallDir}`| Percorso completo della cartella in cui è installata l'istanza in esecuzione di Visual Studio|

### <a name="example"></a>Esempio

Se il progetto include una cartella di inclusione e include anche *Windows. h* e altre intestazioni comuni del Windows SDK, è possibile aggiornare il *CppProperties.jsnel* file di configurazione con quanto segue:

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

Se non viene visualizzato il messaggio IntelliSense previsto, è possibile risolvere i problemi passando a **strumenti**  >  **Opzioni**  >  **editor di testo**  >  **C/C++**  >  **Avanzate** e impostando **Abilita registrazione** su **`true`** . Per iniziare, provare a impostare il **livello di registrazione** su 5 e registrare i **filtri** su 8.

![Registrazione diagnostica](media/diagnostic-logging.png)

L'output viene reindirizzato al **finestra di output** ed è visibile quando si sceglie **Mostra Output da: Visual C++ log**. L'output contiene, tra le altre cose, l'elenco dei percorsi di inclusione effettivi che IntelliSense sta tentando di usare. Se i percorsi non corrispondono a quelli in *CppProperties.json*, provare a chiudere la cartella ed eliminare la sottocartella *. vs* che contiene i dati di esplorazione memorizzati nella cache.

Per risolvere i problemi di IntelliSense causati dalla mancanza di percorsi di inclusione, aprire l'**Elenco errori** e filtrare l'output specificando "Solo IntelliSense" e il codice di errore E1696 "Impossibile aprire il file di origine...".
