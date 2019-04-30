---
title: Informazioni di riferimento sullo schema CppProperties.json
ms.date: 03/21/2019
helpviewer_keywords:
- CMake in Visual C++
ms.openlocfilehash: 43ffa0e92649fe233c6a743d4b64a2749cb28f5a
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64341633"
---
# <a name="cpppropertiesjson-schema-reference"></a>Informazioni di riferimento sullo schema CppProperties.json

Per i progetti Apri cartella che non usano CMake è possibile archiviare le impostazioni di configurazione del progetto in un file `CppProperties.json`. I progetti CMake usano un file [CMakeSettings.json](customize-cmake-settings.md). L'IDE di Visual Studio usa `CppProperties.json` per IntelliSense e l'esplorazione del codice. Una configurazione è costituita da coppie nome/valore e definisce i percorsi #include, le opzioni del compilatore e altri parametri. 


## <a name="default-configurations"></a>Configurazioni predefinite

Visual Studio offre configurazioni predefinite per le configurazioni di tipo Debug e Release x86 e x64. Per impostazione predefinita, il progetto ha una configurazione di tipo Debug x86 in `CppProperties.json`. Per aggiungere una nuova configurazione, fare clic con il pulsante destro del mouse sul file `CppProperties.json` in **Esplora soluzioni** e scegliere **Aggiungi configurazione**:

![Aggiungi configurazione di Apri cartella](media/open-folder-add-config.png "Aggiungi nuova configurazione di Apri cartella")

Le configurazioni predefinite sono illustrate di seguito:

```json
{
  "configurations": [
    {
      "inheritEnvironments": [
        "msvc_x86"
      ],
      "name": "x86-Debug",
      "includePath": [
        "${env.INCLUDE}",
        "${workspaceRoot}\\**"
      ],
      "defines": [
        "WIN32",
        "_DEBUG",
        "UNICODE",
        "_UNICODE"
      ],
      "intelliSenseMode": "windows-msvc-x86"
    },
    {
      "inheritEnvironments": [
        "msvc_x86"
      ],
      "name": "x86-Release",
      "includePath": [
        "${env.INCLUDE}",
        "${workspaceRoot}\\**"
      ],
      "defines": [
        "WIN32",
        "NDEBUG",
        "UNICODE",
        "_UNICODE"
      ],
      "intelliSenseMode": "windows-msvc-x86"
    },
    {
      "inheritEnvironments": [
        "msvc_x64"
      ],
      "name": "x64-Debug",
      "includePath": [
        "${env.INCLUDE}",
        "${workspaceRoot}\\**"
      ],
      "defines": [
        "WIN32",
        "_DEBUG",
        "UNICODE",
        "_UNICODE"
      ],
      "intelliSenseMode": "windows-msvc-x64"
    },
    {
      "inheritEnvironments": [
        "msvc_x64"
      ],
      "name": "x64-Release",
      "includePath": [
        "${env.INCLUDE}",
        "${workspaceRoot}\\**"
      ],
      "defines": [
        "WIN32",
        "NDEBUG",
        "UNICODE",
        "_UNICODE"
      ],
      "intelliSenseMode": "windows-msvc-x64"
    }
  ]
}
```
Per le proprietà con un set di valori consentiti, l'editor del codice visualizza le opzioni disponibili quando si inizia a digitare:

![IntelliSense di Apri cartella](media/open-folder-intellisense-mode.png "IntelliSense di Apri cartella")



## <a name="configuration-properties"></a>Proprietà di configurazione

Una configurazione può avere una delle proprietà seguenti:

|||
|-|-|
|`name`|Il nome della configurazione che viene visualizzato nell'elenco a discesa della configurazione C++|
|`includePath`|L'elenco di cartelle che deve essere specificato nel percorso di inclusione (con mapping a /I per la maggior parte dei compilatori)|
|`defines`|L'elenco delle macro che devono essere definite (con mapping a /D per la maggior parte dei compilatori)|
|`compilerSwitches`|Una o più opzioni aggiuntive che possono influire sul comportamento di IntelliSense|
|`forcedInclude`|L'intestazione da includere automaticamente in ogni unità di compilazione (con mapping a /FI per MSVC o -include per Clang)|
|`undefines`|L'elenco delle macro la cui definizione deve essere rimossa (con mapping a /U per MSVC)|
|`intelliSenseMode`|Il motore IntelliSense da usare. È possibile specificare varianti di architettura specifiche per MSVC, gcc o Clang:<br/><br/>- windows-msvc-x86 (default)<br/>- windows-msvc-x64<br/>- msvc-arm<br/>- windows-clang-x86<br/>- windows-clang-x64<br/>- windows-clang-arm<br/>- Linux-x64<br/>- Linux-x86<br/>- Linux-arm<br/>- gccarm|

Nota: I valori `msvc-x86` e `msvc-x64` sono supportati per motivi di compatibilità solo. Usare il `windows-msvc*` varianti.

## <a name="custom-configurations"></a>Configurazioni personalizzate


È possibile personalizzare le configurazioni predefinite in `CppProperties.json` oppure crearne di nuove. Tutte le configurazioni vengono visualizzate nell'elenco a discesa corrispondente:

```json
{
  "configurations": [
    {
      "name": "Windows",
      ...
    },
    {
      "name": "with EXTERNAL_CODECS",
      ...
    }
  ]
}
```

## <a name="system-environment-variables"></a>Variabili di ambiente di sistema 

 `CppProperties.json` supporta l'espansione delle variabili di ambiente di sistema per i percorsi di inclusione e altri valori delle proprietà. La sintassi è `${env.FOODIR}` per espandere l'elemento `%FOODIR%` di una variabile di ambiente. Sono supportate anche le variabili definite dal sistema seguenti:

|Nome variabile|Descrizione|
|-----------|-----------------|
|vsdev|Ambiente Visual Studio predefinito|
|msvc_x86|Compilazione per x86 usando strumenti x86|
|msvc_arm|Compilazione per ARM usando strumenti x86|
|msvc_arm64|Compilazione per ARM64 usando strumenti x86|
|msvc_x86_x64|Compilazione per AMD64 usando strumenti x86|
|msvc_x64_x64|Compilazione per AMD64 usando strumenti a 64 bit|
|msvc_arm_x64|Compilazione per ARM usando strumenti a 64 bit|
|msvc_arm64_x64|Compilazione per ARM64 usando strumenti a 64 bit|

Quando viene installato il carico di lavoro di Linux sono disponibili gli ambienti seguenti per la definizione di Linux e WSL come destinazione remota:

|Nome variabile|Descrizione|
|-----------|-----------------|
|linux_x86|Imposta come destinazione x86 Linux in modalità remota|
|linux_x64|Imposta come destinazione x64 Linux in modalità remota|
|linux_arm|Imposta come destinazione ARM Linux in modalità remota|

## <a name="custom-environment-variables"></a>Variabili di ambiente personalizzate

È possibile definire variabili di ambiente personalizzate in `CppProperties.json` globalmente o a livello di singola configurazione. L'esempio seguente illustra come dichiarare e usare variabili di ambiente predefinite e personalizzate. La proprietà **environments** globale dichiara una variabile denominata **INCLUDE** che può essere usata da qualsiasi configurazione:

```json
{
  // The "environments" property is an array of key value pairs of the form
  // { "EnvVar1": "Value1", "EnvVar2": "Value2" }
  "environments": [
    {
      "INCLUDE": "${workspaceRoot}\src\includes"
    }
  ],

  "configurations": [
    {
      "inheritEnvironments": [
        // Inherit the MSVC 32-bit environment and toolchain.
        "msvc_x86"
      ],
      "name": "x86",
      "includePath": [
        // Use the include path defined above.
        "${env.INCLUDE}"
      ],
      "defines": [ "WIN32", "_DEBUG", "UNICODE", "_UNICODE" ],
      "intelliSenseMode": "windows-msvc-x86"
    },
    {
      "inheritEnvironments": [
        // Inherit the MSVC 64-bit environment and toolchain.
        "msvc_x64"
      ],
      "name": "x64",
      "includePath": [
        // Use the include path defined above.
        "${env.INCLUDE}"
      ],
      "defines": [ "WIN32", "_DEBUG", "UNICODE", "_UNICODE" ],
      "intelliSenseMode": "windows-msvc-x64"
    }
  ]
}
```
## <a name="per-configuration-environment-variables"></a>Variabili di ambiente a livello di configurazione

È anche possibile definire una proprietà **environments** all'interno di una configurazione, in modo che venga applicata solo a tale configurazione ed esegua l'override di qualsiasi variabile globale con lo stesso nome. Nell'esempio seguente la configurazione x64 definisce una variabile **INCLUDE** locale che esegue l'override del valore globale:

```json
{
  "environments": [
    {
      "INCLUDE": "${workspaceRoot}\src\includes"
    }
  ],

  "configurations": [
    {
      "inheritEnvironments": [
        "msvc_x86"
      ],
      "name": "x86",
      "includePath": [
        // Use the include path defined in the global environments property.
        "${env.INCLUDE}"
      ],
      "defines": [ "WIN32", "_DEBUG", "UNICODE", "_UNICODE" ],
      "intelliSenseMode": "windows-msvc-x86"
    },
    {
      "environments": [
        {
          // Append 64-bit specific include path to env.INCLUDE.
          "INCLUDE": "${env.INCLUDE};${workspaceRoot}\src\includes64"
        }
      ],

      "inheritEnvironments": [
        "msvc_x64"
      ],
      "name": "x64",
      "includePath": [
        // Use the include path defined in the local environments property.
        "${env.INCLUDE}"
      ],
      "defines": [ "WIN32", "_DEBUG", "UNICODE", "_UNICODE" ],
      "intelliSenseMode": "windows-msvc-x64"
    }
  ]
}
```

Tutte le variabili di ambiente personalizzate e predefinite sono disponibili anche in `tasks.vs.json` e `launch.vs.json`.

#### <a name="build-in-macros"></a>Macro predefinite

In `CppProperties.json` è possibile accedere alle macro predefinite seguenti:

|||
|-|-|
|`${workspaceRoot}`| Percorso completo della cartella dell'area di lavoro|
|`${projectRoot}`| Percorso completo alla cartella contenente `CppProperties.json`|
|`${vsInstallDir}`| Percorso completo della cartella in cui è installata l'istanza di VS 2017 in esecuzione|

Se ad esempio il progetto ha una cartella Include e presenta anche windows.h e altre intestazioni comuni di Windows SDK, può essere utile aggiornare il file di configurazione `CppProperties.json` con queste inclusioni:

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
> `%WindowsSdkDir%` e `%VCToolsInstallDir%` non sono impostate come variabili di ambiente globali. Di conseguenza, verificare di avviare devenv.exe da un "Prompt dei comandi per gli sviluppatori di Visual Studio 2017" che definisce tali variabili.

## <a name="troubleshoot-intellisense-errors"></a>Risolvere gli errori di IntelliSense

Per risolvere i problemi di IntelliSense causati dalla mancanza di percorsi di inclusione, aprire l'**Elenco errori** e filtrare l'output specificando "Solo IntelliSense" e il codice di errore E1696 "Impossibile aprire il file di origine...".



