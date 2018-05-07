---
title: Aprire i progetti di cartella in Visual C++ | Documenti Microsoft
ms.custom: ''
ms.date: 08/02/2017
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Open Folder Projects in Visual C++
ms.assetid: abd1985e-3717-4338-9e80-869db5435175
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0fe4eba09f06b987ab11f35429e13796fe6baafb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="open-folder-projects-in-visual-c"></a>Progetti di cartella aperti in Visual C++
Visual Studio 2017 introduce la funzionalità "Apri cartella", che consente di aprire una cartella dei file di origine e avviare la codifica con il supporto per IntelliSense, esplorazione, refactoring, debug, immediatamente e così via. Nessun file sln o con estensione vcxproj caricato; Se necessario, è possibile specificare le attività personalizzate, nonché compilare e avviare i parametri tramite i file con estensione JSON semplice. Con tecnologia cartella aperta, Visual C++ ora può supportare non solo separate raccolte di file, ma anche praticamente qualsiasi sistema di compilazione, compreso CMake, avanzato, QMake (per i progetti Qt), gyp, SCons, Gradle, Buck, verificare e altro ancora. 

Per utilizzare cartella, dal menu principale selezionare *File | Aprire | Cartella* o premere *Ctrl + Maiusc + Alt + O*. Esplora soluzioni consente di visualizzare immediatamente tutti i file nella cartella. È possibile fare clic su qualsiasi file per iniziare a modificarlo. Visual Studio avvia l'indicizzazione dei file in background per abilitare le funzionalità IntelliSense, di navigazione e di refactoring. Man mano che si modificano, creano, spostano o eliminano file, Visual Studio tiene traccia automaticamente delle modifiche e aggiorna continuamente il relativo indice IntelliSense. 
  
## <a name="cmake-projects"></a>Progetti CMake
CMake è integrato nell'IDE di Visual Studio come CMake Tools per Visual C++, un componente del carico di lavoro desktop C++. Per altre informazioni, vedere [CMake Tools for Visual C++](cmake-tools-for-visual-cpp.md) (Strumenti CMake per Visual C++).
 
## <a name="qmake-projects-that-target-the-qt-framework"></a>QMake progetti destinati a framework Qt
È possibile utilizzare gli strumenti di CMake per Visual C++ per destinazione Qt per compilare progetti Qt oppure è possibile utilizzare l'estensione di Visual Studio Qt. Nota: A partire da agosto 2017, il [supporto Qt estensione di Visual Studio per Visual Studio 2017](https://download.qt.io/development_releases/vsaddin/) è disponibile come una versione beta.

## <a name="gyp-cons-scons-buck-etc"></a>gyp, svantaggi SCons, Buck, e così via
È possibile utilizzare qualsiasi sistema di compilazione in Visual C++ e comunque sfruttare i vantaggi dell'IDE di Visual C++ e debugger. Quando si apre la cartella radice del progetto, Visual C++ utilizza regole euristiche per indicizzare i file di origine per IntelliSense e la ricerca. È possibile fornire suggerimenti sulla struttura del codice modificando il file CppProperties.json. In modo analogo, è possibile configurare il programma di compilazione modificando il file launch.vs.json. 

## <a name="configuring-open-folder-projects"></a>Configurazione di progetti di cartella aperta
È possibile personalizzare un progetto di cartella aperta mediante tre file JSON:
|||
|-|-|
|CppProperties.json|Specificare le informazioni di configurazione personalizzati per l'esplorazione. Creare questo file, se necessario, nella cartella radice del progetto.|
|launch.vs.json|Specificare gli argomenti della riga di comando. Accessibile tramite il comando **Impostazioni per debug e avvio** nel menu di scelta rapida **Esplora soluzioni**.|
|tasks.vs.json|Specificare i comandi di compilazione personalizzata e le opzioni del compilatore. Accessibile tramite il comando **Configura attività** nel menu di scelta rapida **Esplora soluzioni**.|

### <a name="configure-intellisense-with-cpppropertiesjson"></a>Configurare IntelliSense con CppProperties.json
IntelliSense ed esplorazione in parte il comportamento dipende dalla configurazione compilazione attiva, che definisce #include percorsi, opzioni del compilatore e altri parametri. Per impostazione predefinita, Visual Studio fornisce configurazioni Debug e rilascio. Per alcuni progetti, è necessario creare una configurazione personalizzata in ordine per IntelliSense e funzionalità di esplorazione comprendere completamente il codice. Per definire una nuova configurazione, creare un file denominato CppProperties.json nella cartella radice. Ecco un esempio:

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
Una configurazione può avere le proprietà seguenti:

|||  
|-|-| 
|`name`|il nome di configurazione che viene visualizzato nell'elenco a discesa Configurazione C++|
|`includePath`|l'elenco di cartelle che deve essere specificato nel percorso di inclusione (esegue il mapping a /I per la maggior parte dei compilatori)|
|`defines`|l'elenco di macro che deve essere definita (con mapping a /D per la maggior parte dei compilatori)|
|`compilerSwitches`|uno o più opzioni aggiuntive che possono influenzare il comportamento di IntelliSense|
|`forcedInclude`|intestazione automaticamente da includere in ogni unità di compilazione (esegue il mapping a /FI per opzioni: MSVC o - includono per clang)|
|`undefines`|l'elenco di macro fino a essere non definito (esegue il mapping a/u per opzioni: MSVC)|
|`intelliSenseMode`|il motore IntelliSense da usare. È possibile specificare le varianti specifiche di architettura per opzioni: MSVC gcc e Clang:
- opzioni: msvc-x86 (impostazione predefinita)
- msvc-x64
- msvc-arm
- windows-clang-x86
- windows-clang-x64
- windows-clang-arm
- Linux-x64
- Linux-x86
- Linux-arm
- gccarm

#### <a name="environment-variables"></a>Variabili di ambiente
CppProperties.json supporta sistema espansione variabili di ambiente per includere i percorsi e altri valori di proprietà. La sintassi è `${env.FOODIR}` per espandere una variabile di ambiente `%FOODIR%`. Sono supportate anche le variabili definite dal sistema seguenti:

|Nome della variabile|Descrizione|  
|-----------|-----------------|
|vsdev|Ambiente di Visual Studio predefinito|
|msvc_x86|Compilare per x86 x86 utilizzando gli strumenti|
|msvc_arm|Compilare per ARM, x86 utilizzando gli strumenti|
|msvc_arm64|Compila per ARM64 x86 utilizzando gli strumenti|
|msvc_x86_x64|Compila per AMD64 x86 utilizzando gli strumenti|
|msvc_x64_x64|Compila per AMD64 utilizzando strumenti a 64 bit|
|msvc_arm_x64|Compilare per ARM utilizzando strumenti a 64 bit|
|msvc_arm64_x64|Compila per ARM64 utilizzando strumenti a 64 bit|

Quando viene installato il carico di lavoro di Linux, ambienti seguenti sono disponibili in modalità remota destinato a Linux e WSL:

|Nome della variabile|Descrizione|  
|-----------|-----------------|
|linux_x86|Linux di destinazione x86 in modalità remota|
|linux_x64|Linux di destinazione x64 in modalità remota|
|linux_arm|ARM Linux di destinazione in modalità remota|

È possibile definire variabili di ambiente personalizzate in CppProperties.json globalmente o operazioni di configurazione. Nell'esempio seguente viene illustrato come impostazione predefinita e le variabili di ambiente personalizzata possono essere dichiarate e utilizzate. Globale **ambienti** proprietà dichiara una variabile denominata **INCLUDE** che può essere utilizzato da qualsiasi configurazione:

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
È inoltre possibile definire un **ambienti** proprietà all'interno di una configurazione, in modo che non si applica solo a tale configurazione ed esegue l'override di qualsiasi variabile globale con lo stesso nome. Nell'esempio seguente, x64 configurazione definisce un oggetto locale **INCLUDE** variabile che sostituisce il valore globale:

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

Personalizzate e variabili di ambiente predefinite sono disponibili anche in tasks.vs.json e launch.vs.json.

#### <a name="macros"></a>Macro
È disponibile per le macro predefinite seguenti all'interno di CppProperties.json:
|||
|-|-|
|`${workspaceRoot}`| il percorso completo della cartella dell'area di lavoro|
|`${projectRoot}`| il percorso completo della cartella in cui è posizionato CppProperties.json|
|`${vsInstallDir}`| il percorso completo alla cartella in cui è installata l'istanza in esecuzione di VS 2017|

Ad esempio, se il progetto dispone di una cartella di inclusione e include anche Windows. h e altre intestazioni comuni di Windows SDK, si può essere necessario aggiornare il CppProperties.json file di configurazione con questi include:

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

**Nota:** `%WindowsSdkDir%` e `%VCToolsInstallDir%` non vengono impostate come variabili di ambiente globali pertanto assicurarsi di avviare devenv.exe "per sviluppatori al Prompt dei comandi di Visual Studio 2017" che consente di definire queste variabili.

Per risolvere i problemi di IntelliSense gli errori causati dalla mancanza di includono i percorsi, aprire il **elenco errori** e filtrare l'output di "Solo IntelliSense" e il codice di errore E1696 "Impossibile aprire il file di origine...". 

È possibile creare un numero qualsiasi di configurazioni in CppProperties.json. Saranno tutti visualizzati nell'elenco a discesa Configurazione:

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

![Configurare le attività di cartella aperta](media/open-folder-config-tasks.png)

Questo crea (o si apre) il `tasks.vs.json` file nella cartella VS che Visual Studio crea nella cartella radice del progetto. È possibile definire un'attività arbitraria in questo file e quindi richiamarlo dal **Esplora** menu di scelta rapida. Nell'esempio seguente viene illustrato un file di tasks.vs.json che definisce una singola attività. `taskName` definisce il nome visualizzato nel menu di scelta rapida. `appliesTo` Definisce i file di comando può essere eseguito su. Il `command` proprietà fa riferimento alla variabile di ambiente COMSPEC, che identifica il percorso per la console di (in Windows, cmd.exe). È anche possibile fare riferimento a variabili di ambiente che vengono dichiarate in CppProperties.json o CMakeSettings.json. Il `args` proprietà specifica la riga di comando da richiamare. La macro `${file}` recupera il file selezionato in **Esplora soluzioni**. Nell'esempio seguente verrà visualizzato il nome del file del file con estensione cpp attualmente selezionato.

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
Dopo aver salvato tasks.vs.json, è possibile fare doppio clic su qualsiasi file con estensione cpp nella cartella, scegliere **filename Echo** dal menu di scelta rapida e vedere il nome del file visualizzato nella finestra di Output.



#### <a name="appliesto"></a>appliesTo
È possibile creare attività per qualsiasi file o cartella specificandone il nome nel campo `appliesTo`, ad esempio `"appliesTo" : "hello.cpp"`. È possibile usare le maschere di file seguenti come valori:
|||
|-|-|
|`"*"`| L'attività è disponibile per tutti i file e le cartelle nell'area di lavoro|
|`"*/"`| L'attività è disponibile per tutte le cartelle nell'area di lavoro|
|`"*.cpp"`| attività è disponibile per tutti i file con estensione cpp estensione nell'area di lavoro|
|`"/*.cpp"`| attività è disponibile per tutti i file con estensione cpp estensione nella radice dell'area di lavoro|
|`"src/*/"`| L'attività è disponibile per tutte le sottocartelle della cartella "src"|
|`"makefile"`| L'attività è disponibile per tutti i file makefile nell'area di lavoro|
|`"/makefile"`| L'attività è disponibile solo per il makefile nella radice dell'area di lavoro|

#### <a name="output"></a>output
Utilizzare il `output` proprietà per specificare il file eseguibile da avvia quando si preme **F5**. Ad esempio:

```json
      "output": "${workspaceRoot}\\bin\\hellomake.exe" 
```

#### <a name="macros-for-tasksvsjson"></a>Macro per tasks.vs.json

|||
|-|-|
|`${env.<VARIABLE>}`| Specifica di qualsiasi variabile di ambiente (ad esempio, ${env. PERCORSO} ${env.COMSPEC} e così via) che è impostato per il prompt dei comandi per sviluppatori. Per altre informazioni, vedere [Prompt dei comandi per gli sviluppatori per Visual Studio](/dotnet/framework/tools/developer-command-prompt-for-vs).|
|`${workspaceRoot}`| il percorso completo della cartella dell'area di lavoro (ad esempio, "C:\sources\hello")|
|`${file}`| il percorso completo del file o della cartella selezionata per eseguire questa attività (ad esempio, "C:\sources\hello\src\hello.cpp")|
|`${relativeFile}`| il percorso relativo al file o cartella (ad esempio, "src\hello.cpp")|
|`${fileBasename}`| il nome del file senza percorso o estensione (ad esempio, "hello")|
|`${fileDirname}`| il percorso completo del file, escluso il nome del file (ad esempio, "C:\sources\hello\src")|
|`${fileExtname}`| l'estensione del file selezionato (ad esempio, ". cpp")|

#### <a name="custom-macros"></a>Macro personalizzate
Per definire una macro personalizzata in tasks.vs.json, aggiungere una coppia nome valore: prima i blocchi di attività. L'esempio seguente definisce una macro denominata `outDir` che vengono utilizzati nel `args` proprietà:

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
Per personalizzare gli argomenti della riga di comando del programma, fare clic su eseguibile nel **Esplora** e selezionare **Debug e impostazioni di avvio**. Verrà aperto un oggetto esistente `launch.vs.json` file, o se non esiste, creato un nuovo file preventivamente popolato con le informazioni sul programma è stato selezionato. 

Per specificare gli argomenti aggiuntivi, aggiungerli nel `args` matrice JSON, come illustrato nell'esempio seguente:

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

Quando si salva il file, la nuova configurazione viene visualizzato nell'elenco a discesa destinazione Debug ed è possibile selezionarlo per avviare il debugger. È possibile creare come molte configurazioni di debug nel modo desiderato, per qualsiasi numero di file eseguibili. Se si preme **F5** a questo punto, il debugger verrà avviare e qualsiasi punto di interruzione già impostato. Tutte le finestre di debug già note e le relative funzionalità sono ora disponibili.

## <a name="see-also"></a>Vedere anche
[IDE e strumenti per lo sviluppo in Visual C++](ide-and-tools-for-visual-cpp-development.md)

