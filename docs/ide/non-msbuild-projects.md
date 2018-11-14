---
title: Progetti Apri cartella in Visual C++
ms.date: 06/01/2018
helpviewer_keywords:
- Open Folder Projects in Visual C++
ms.assetid: abd1985e-3717-4338-9e80-869db5435175
ms.openlocfilehash: 6354cc656d501d1611219378f72831cc2fa94389
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51524001"
---
# <a name="open-folder-projects-in-visual-c"></a>Progetti Apri cartella in Visual C++

In Visual Studio 2017 e versioni successive la funzionalità "Apri cartella" consente di aprire una cartella di file di origine e avviare la codifica con il supporto di IntelliSense, esplorazione, refactoring, debug e così via. Non viene caricato nessun file con estensione sln o vcxproj. Se necessario, è possibile specificare attività personalizzate e creare e avviare parametri mediante semplici file con estensione json.
Grazie alla funzionalità Apri cartella, Visual C++ ora può supportare non solo raccolte loose di file, ma anche la maggior parte dei sistemi di compilazione, tra cui CMake, Ninja, QMake (per progetti Qt), gyp, SCons, Gradle, Buck, make e molti altri ancora.

Per usare Apri cartella, nel menu principale selezionare *File | Apri | Cartella* oppure premere *CTRL+MAIUSC+ALT+O*. Esplora soluzioni visualizza immediatamente tutti i file presenti nella cartella. È possibile fare clic su qualsiasi file per iniziare a modificarlo. Visual Studio avvia l'indicizzazione dei file in background per abilitare le funzionalità IntelliSense, di navigazione e di refactoring. Man mano che si modificano, creano, spostano o eliminano file, Visual Studio tiene traccia automaticamente delle modifiche e aggiorna continuamente il relativo indice IntelliSense.

## <a name="cmake-projects"></a>Progetti CMake

CMake è integrato nell'IDE di Visual Studio come Strumenti Visual C++ per CMake, un componente del carico di lavoro desktop di C++. Per altre informazioni, vedere [CMake Tools for Visual C++](cmake-tools-for-visual-cpp.md) (Strumenti CMake per Visual C++).

## <a name="qmake-projects-that-target-the-qt-framework"></a>Progetti QMake destinati al framework Qt

È possibile usare Strumenti Visual C++ per CMake per la compilazione di progetti Qt destinati a Qt oppure usare [Qt Visual Studio Extension](https://download.qt.io/development_releases/vsaddin/) per Visual Studio 2015 o Visual Studio 2017.

## <a name="gyp-cons-scons-buck-etc"></a>gyp, Cons, SCons, Buck e così via

È possibile usare qualsiasi sistema di compilazione in Visual C++ e sfruttare i vantaggi dell'IDE e del debugger di Visual C++. Quando si apre la cartella radice del progetto, Visual C++ usa regole euristiche per indicizzare i file di origine per IntelliSense e la ricerca. È possibile aggiungere suggerimenti sulla struttura del codice modificando il file CppProperties.json. In modo analogo è possibile configurare il programma di compilazione modificando il file launch.vs.json.

## <a name="configuring-open-folder-projects"></a>Configurazione di progetti Apri cartella

È possibile personalizzare un progetto Apri cartella mediante tre file con estensione json:

| | |
|-|-|
|CppProperties.json|Specifica informazioni di configurazione personalizzate per l'esplorazione. Se necessario, creare questo file nella cartella radice del progetto.|
|launch.vs.json|Specifica argomenti della riga di comando. Accessibile tramite il comando **Impostazioni per debug e avvio** nel menu di scelta rapida **Esplora soluzioni**.|
|tasks.vs.json|Specifica opzioni del compilatore e comandi di compilazione personalizzati. Accessibile tramite il comando **Configura attività** nel menu di scelta rapida **Esplora soluzioni**.|

### <a name="configure-intellisense-with-cpppropertiesjson"></a>Configurare IntelliSense con CppProperties.json

Il comportamento di IntelliSense e dell'esplorazione dipendono in parte dalla configurazione di compilazione attiva, che definisce percorsi #include, opzioni del compilatore e altri parametri. Per impostazione predefinita, Visual Studio offre configurazioni di tipo Debug e Rilascio. Per alcuni progetti può essere necessario creare una configurazione personalizzata per consentire a IntelliSense e alle funzionalità di esplorazione di interpretare correttamente il codice. Per definire una nuova configurazione, creare un file denominato CppProperties.json nella cartella radice. Ecco un esempio:

```json
{
  "configurations": [
    {
      "name": "Windows x64",
      "includePath": [ "include" ],
      "defines": [ "_DEBUG" ],
      "compilerSwitches": "/std:c++17",
      "intelliSenseMode": "msvc-x64",
      "forcedInclude": [ "pch.h" ],
      "undefines": []
    }
  ]
}
```

Una configurazione può avere una delle proprietà seguenti:

|||
|-|-|
|`name`|Il nome della configurazione che viene visualizzato nell'elenco a discesa della configurazione C++|
|`includePath`|L'elenco di cartelle che deve essere specificato nel percorso di inclusione (con mapping a /I per la maggior parte dei compilatori)|
|`defines`|L'elenco delle macro che devono essere definite (con mapping a /D per la maggior parte dei compilatori)|
|`compilerSwitches`|Una o più opzioni aggiuntive che possono influenzare il comportamento di IntelliSense|
|`forcedInclude`|L'intestazione da includere automaticamente in ogni unità di compilazione (con mapping a /FI per MSVC o su -include per clang)|
|`undefines`|L'elenco delle macro di cui annullare la definizione (con mapping a /U per MSVC)|
|`intelliSenseMode`|Il motore IntelliSense da usare. È possibile specificare varianti di architettura specifiche per MSVC, gcc o Clang:<br/><br/>- msvc-x86 (predefinito)<br/>- msvc-x64<br/>- msvc-arm<br/>- windows-clang-x86<br/>- windows-clang-x64<br/>- windows-clang-arm<br/>- Linux-x64<br/>- Linux-x86<br/>- Linux-arm<br/>- gccarm|

#### <a name="environment-variables"></a>Variabili di ambiente

CppProperties.json supporta l'espansione della variabile di ambiente di sistema per includere percorsi e altri valori di proprietà. La sintassi è `${env.FOODIR}` per espandere l'elemento `%FOODIR%` di una variabile di ambiente. Sono supportate anche le variabili definite dal sistema seguenti:

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

È possibile definire variabili di ambiente personalizzate in CppProperties.json, sia globalmente sia a livello di singola configurazione. L'esempio seguente illustra come dichiarare e usare variabili di ambiente predefinite e personalizzate. La proprietà **environments** globale dichiara una variabile denominata **INCLUDE** che può essere usata da qualsiasi configurazione:

```json
{
  // The "environments" property is an array of key value pairs of the form
  // { "EnvVar1": "Value1", "EnvVar2": "Value2" }
  "environments": [
    {
      "INCLUDE": "${workspaceRoot}\\src\\includes"
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
      "intelliSenseMode": "msvc-x86"
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
      "intelliSenseMode": "msvc-x64"
    }
  ]
}
```

È anche possibile definire una proprietà **environments** all'interno di una configurazione, in modo che venga applicata solo a tale configurazione ed esegua l'override di qualsiasi variabile globale con lo stesso nome. Nell'esempio seguente la configurazione x64 definisce una variabile **INCLUDE** locale che esegue l'override del valore globale:

```json
{
  "environments": [
    {
      "INCLUDE": "${workspaceRoot}\\src\\includes"
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
      "intelliSenseMode": "msvc-x86"
    },
    {
      "environments": [
        {
          // Append 64-bit specific include path to env.INCLUDE.
          "INCLUDE": "${env.INCLUDE};${workspaceRoot}\\src\\includes64"
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
      "intelliSenseMode": "msvc-x64"
    }
  ]
}
```

Tutte le variabili di ambiente personalizzate e predefinite sono disponibili anche in tasks.vs.json e launch.vs.json.

#### <a name="macros"></a>Macro

In CppProperties.json è possibile accedere alle seguenti macro incorporate:

|||
|-|-|
|`${workspaceRoot}`| Percorso completo della cartella dell'area di lavoro|
|`${projectRoot}`| Percorso completo della cartella in cui si trova CppProperties.json|
|`${vsInstallDir}`| Percorso completo della cartella in cui è installata l'istanza di VS 2017 in esecuzione|

Se ad esempio il progetto ha una cartella include e dispone anche di windows.h e altre intestazioni comuni di Windows SDK, può essere utile aggiornare il file di configurazione CppProperties.json con queste inclusioni:

```json
{
  "configurations": [
    {
      "name": "Windows",
      "includePath": [
        // local include folder
        "${workspaceRoot}\\include",
        // Windows SDK and CRT headers
        "${env.WindowsSdkDir}include\\${env.WindowsSDKVersion}\\ucrt",
        "${env.NETFXSDKDir}\\include\\um",
        "${env.WindowsSdkDir}include\\${env.WindowsSDKVersion}\\um",
        "${env.WindowsSdkDir}include\\${env.WindowsSDKVersion}\\shared",
        "${env.VCToolsInstallDir}include"
      ]
    }
  ]
}
```

> [!Note]
> `%WindowsSdkDir%` e `%VCToolsInstallDir%` non sono impostate come variabili di ambiente globali. Di conseguenza, verificare di avviare devenv.exe da un "Prompt dei comandi per gli sviluppatori di Visual Studio 2017" che definisce tali variabili.

Per risolvere i problemi di IntelliSense causati dalla mancanza di percorsi di inclusione, aprire l'**Elenco errori** e filtrare l'output specificando "Solo IntelliSense" e il codice di errore E1696 "Impossibile aprire il file di origine...".

È possibile creare un numero qualsiasi di configurazioni in CppProperties.json. Tutte le configurazioni vengono visualizzate nell'elenco a discesa corrispondente:

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

### <a name="define-tasks-with-tasksvsjson"></a>Definire le attività con tasks.vs.json

È possibile automatizzare gli script di compilazione o qualsiasi altra operazione esterna per i file inclusi nell'area di lavoro corrente eseguendoli come attività direttamente nell'IDE. Per configurare una nuova attività, è possibile fare clic con il pulsante destro del mouse su un file o una cartella e scegliere **Configura attività**.

![Configura attività di Apri cartella](media/open-folder-config-tasks.png)

Viene creato o aperto il file `tasks.vs.json` nella cartella .vs creata da Visual Studio nella cartella di progetto radice. È possibile definire un'attività arbitraria in questo file, quindi chiamarla usando il nome specificato dal menu di scelta rapida **Esplora soluzioni**. L'esempio seguente visualizza un file tasks.vs.json che definisce una singola attività. `taskName` definisce il nome visualizzato nel menu di scelta rapida. `appliesTo` definisce i file sui quali può essere eseguito il comando. La proprietà `command` fa riferimento alla variabile di ambiente COMSPEC, che identifica il percorso per la console (cmd.exe in Windows). È anche possibile fare riferimento a variabili di ambiente che vengono dichiarate in CppProperties.json o CMakeSettings.json. La proprietà `args` specifica la riga di comando da chiamare. La macro `${file}` recupera il file selezionato in **Esplora soluzioni**. Nell'esempio seguente viene visualizzato il nome del file con estensione cpp attualmente selezionato.

```json
{
  "version": "0.2.1",
  "tasks": [
    {
      "taskName": "Echo filename",
      "appliesTo": "*.cpp",
      "type": "command",
      "command": "${env.COMSPEC}",
      "args": ["echo ${file}"]
    }
  ]
}
```

Dopo aver salvato tasks.vs.json, è possibile fare clic con il pulsante destro del mouse su qualsiasi file con estensione cpp nella cartella, scegliere **Echo filename** (Echo nome file) dal menu di scelta rapida e vedere il nome del file visualizzato nella finestra Output.

#### <a name="appliesto"></a>appliesTo

È possibile creare attività per qualsiasi file o cartella specificandone il nome nel campo `appliesTo`, ad esempio `"appliesTo" : "hello.cpp"`. È possibile usare le maschere di file seguenti come valori:

|||
|-|-|
|`"*"`| L'attività è disponibile per tutti i file e le cartelle nell'area di lavoro|
|`"*/"`| L'attività è disponibile per tutte le cartelle nell'area di lavoro|
|`"*.cpp"`| L'attività è disponibile per tutti i file con estensione cpp nell'area di lavoro|
|`"/*.cpp"`| L'attività è disponibile per tutti i file con estensione cpp nella radice dell'area di lavoro|
|`"src/*/"`| L'attività è disponibile per tutte le sottocartelle della cartella "src"|
|`"makefile"`| L'attività è disponibile per tutti i file makefile nell'area di lavoro|
|`"/makefile"`| L'attività è disponibile solo per il makefile nella radice dell'area di lavoro|

#### <a name="output"></a>output

Usare la proprietà `output` per specificare il file eseguibile che viene avviato quando si preme **F5**. Ad esempio:

```json
      "output": "${workspaceRoot}\\bin\\hellomake.exe"
```

#### <a name="macros-for-tasksvsjson"></a>Macro per tasks.vs.json

|||
|-|-|
|`${env.<VARIABLE>}`| specifica qualsiasi variabile di ambiente (ad esempio, ${env.PATH}, ${env.COMSPEC} e così via) impostata per il prompt dei comandi per gli sviluppatori. Per altre informazioni, vedere [Prompt dei comandi per gli sviluppatori per Visual Studio](/dotnet/framework/tools/developer-command-prompt-for-vs).|
|`${workspaceRoot}`| è il percorso completo della cartella dell'area di lavoro (ad esempio "C:\sources\hello")|
|`${file}`| è il percorso completo del file o della cartella selezionata come destinazione di esecuzione dell'attività (ad esempio "C:\sources\hello\src\hello.cpp")|
|`${relativeFile}`| è il percorso relativo del file o della cartella (ad esempio "src\hello.cpp")|
|`${fileBasename}`| è il nome del file senza percorso o estensione (ad esempio "hello")|
|`${fileDirname}`| è il percorso completo del file, escluso il nome file (ad esempio, "C:\sources\hello\src")|
|`${fileExtname}`| è l'estensione del file selezionato (ad esempio ".cpp")|

#### <a name="custom-macros"></a>Macro personalizzate

Per definire una macro personalizzata in tasks.vs.json, aggiungere una coppia nome:valore prima dei blocchi di attività. L'esempio seguente definisce una macro con nome `outDir` che viene usata nella proprietà `args`:

```json
{
"version": "0.2.1",
  "outDir": "${workspaceRoot}\\bin",
  "tasks": [
    {
      "taskName": "List outputs",
      "*",
      "type": "command",
      "command": "${env.COMSPEC}",
      "args": [
        "dir ${outDir}"
      ]
    }
  ]
```

### <a name="configure-debugging-parameters-with-launchvsjson"></a>Configurare i parametri di debug con launch.vs.json

Per personalizzare gli argomenti della riga di comando del programma, fare clic con il pulsante destro del mouse sul file eseguibile in **Esplora soluzioni** e selezionare **Impostazioni per debug e avvio**. Viene aperto un file `launch.vs.json` esistente o se non esiste nessun file di questo tipo viene creato un nuovo file, popolato con le informazioni sul programma selezionato.

Per specificare argomenti aggiuntivi, aggiungerli alla matrice JSON `args`, come illustrato nell'esempio seguente:

```json
{
  "version": "0.2.1",
  "defaults": {},
  "configurations": [
    {
      "type": "default",
      "project": "CPP\\7zip\\Bundles\\Alone\\O\\7za.exe",
      "name": "7za.exe list content of helloworld.zip",
      "args": [ "l", "d:\\sources\\helloworld.zip" ]
    }
  ]
}
```

Quando si salva questo file, la nuova configurazione viene visualizzata nell'elenco a discesa Destinazione di debug ed è possibile selezionarla per avviare il debugger. È possibile creare il numero desiderato di configurazioni di debug, per un numero qualsiasi di file eseguibili. Se a questo punto si preme **F5**, il debugger viene avviato e raggiunge qualsiasi punto di interruzione già impostato. Tutte le finestre del debugger già note e le relative funzionalità sono ora disponibili.

## <a name="see-also"></a>Vedere anche

[IDE e strumenti per lo sviluppo in Visual C++](ide-and-tools-for-visual-cpp-development.md)
