---
title: Aprire i progetti di cartella in Visual C++ | Documenti Microsoft
ms.custom: 
ms.date: 08/02/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: Open Folder Projects in Visual C++
ms.assetid: abd1985e-3717-4338-9e80-869db5435175
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: da81f8731be97c69a73eddb96e9e56e49c59c91b
ms.sourcegitcommit: 1b480aa74886930b3bd0435d71cfcc3ccda36424
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/15/2017
---
# <a name="open-folder-projects-in-visual-c"></a>Progetti di cartella aperti in Visual C++
Visual Studio 2017 introduce la funzionalità "Apri cartella", che consente di aprire una cartella dei file di origine e avviare la codifica con il supporto per IntelliSense, esplorazione, refactoring, debug, immediatamente e così via. Nessun file sln o con estensione vcxproj caricato; Se necessario, è possibile specificare le attività personalizzate, nonché compilare e avviare i parametri tramite i file con estensione JSON semplice. Con tecnologia cartella aperta, Visual C++ ora può supportare non solo separate raccolte di file, ma anche praticamente qualsiasi sistema di compilazione, compreso CMake, avanzato, QMake (per i progetti Qt), gyp, SCons, Gradle, Buck, verificare e altro ancora. 

Per utilizzare cartella, dal menu principale selezionare *File | Aprire | Cartella* o premere *Ctrl + Maiusc + Alt + O*. Esplora soluzioni consente di visualizzare immediatamente tutti i file nella cartella. È possibile fare clic su qualsiasi file per iniziare a modificarlo. In background, Visual Studio avvia l'indicizzazione dei file per abilitare IntelliSense, la navigazione e funzionalità di refactoring. Come modificare, creare, spostare o eliminare file, Visual Studio rileva automaticamente le modifiche e aggiorna continuamente il relativo indice IntelliSense. 
  
## <a name="cmake-projects"></a>Progetti CMake
CMake è integrato nell'IDE di Visual Studio come CMake Tools per Visual C++, un componente del carico di lavoro desktop C++. Per ulteriori informazioni, vedere [CMake Tools per Visual C++](cmake-tools-for-visual-cpp.md).
 
## <a name="qmake-projects-that-target-the-qt-framework"></a>QMake progetti destinati a framework Qt
È possibile utilizzare gli strumenti di CMake per Visual C++ per destinazione Qt per compilare progetti Qt oppure è possibile utilizzare l'estensione di Visual Studio Qt. Nota: A partire da agosto 2017, il [supporto Qt estensione di Visual Studio per Visual Studio 2017](https://download.qt.io/development_releases/vsaddin/) è disponibile come una versione beta.

## <a name="gyp-cons-scons-buck-etc"></a>gyp, svantaggi SCons, Buck, e così via
È possibile utilizzare qualsiasi sistema di compilazione in Visual C++ e comunque sfruttare i vantaggi dell'IDE di Visual C++ e debugger. Quando si apre la cartella radice del progetto, Visual C++ utilizza regole euristiche per indicizzare i file di origine per IntelliSense e la ricerca. È possibile fornire suggerimenti sulla struttura del codice modificando il file CppProperties.json. In modo analogo, è possibile configurare il programma di compilazione modificando il file launch.vs.json. 

## <a name="configuring-open-folder-projects"></a>Configurazione di progetti di cartella aperta
È possibile personalizzare un progetto di cartella aperta mediante tre file JSON:
|||
|-|-|
|CppProperties.json|Specificare le informazioni di configurazione personalizzati per l'esplorazione. Creare questo file, se necessario, nella cartella radice del progetto.|
|Launch.VS.JSON|Specificare gli argomenti della riga di comando. A cui si accede tramite il **Esplora** menu di scelta rapida **Debug e impostazioni di avvio**.|
|Tasks.VS.JSON|Specificare i comandi di compilazione personalizzata e le opzioni del compilatore. A cui si accede tramite il **Esplora** menu di scelta rapida **configurare attività**.|

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
- opzioni: msvc x64
- opzioni: msvc-arm
- clang-Windows-x86
- clang-Windows-x64
- Windows-clang-arm
- Linux x64
- Linux x86
- Linux-arm
- gccarm

CppProperties.json supporta ambiente espansione delle variabili per includere i percorsi e altri valori di proprietà. La sintassi è `${env.FOODIR}` per espandere una variabile di ambiente `%FOODIR%`.

È inoltre possibile avere accesso alle macro predefinite seguenti all'interno del file:
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

**Nota:** `%WindowsSdkDir%` e `%VCToolsInstallDir%` non sono impostate come variabili di ambiente globali, quindi verificare che si avvia devenv.exe "Developer Prompt dei comandi di Visual Studio 2017" che definisce le variabili.

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
È possibile automatizzare gli script di compilazione o qualsiasi altra operazione esterna nei file di cui che è in un'area di lavoro mediante l'esecuzione come attività direttamente nell'IDE. È possibile configurare una nuova attività facendo clic sul file o cartella e selezionando **configurare attività**. 

![Configurare le attività di cartella aperta](media/open-folder-config-tasks.png)

Questo crea (o si apre) il `tasks.vs.json` file nella cartella VS che Visual Studio crea nella cartella radice del progetto. È possibile definire un'attività arbitraria in questo file e quindi richiamarlo dal **Esplora** menu di scelta rapida. Nell'esempio seguente viene illustrato un file di tasks.vs.json che definisce una singola attività. `taskName`definisce il nome visualizzato nel menu di scelta rapida. `appliesTo`definisce il comando può essere eseguito su file. Il `command` proprietà fa riferimento alla variabile di ambiente COMSPEC, che identifica il percorso per la console di (in Windows, cmd.exe). Il `args` proprietà specifica la riga di comando da richiamare. Il `${file}` macro recupera il file selezionato in **Esplora**. Nell'esempio seguente verrà visualizzato il nome del file del file con estensione cpp attualmente selezionato.

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
È possibile creare attività per ogni file o cartella specificando il nome di `appliesTo` campo, ad esempio `"appliesTo" : "hello.cpp"`. Maschere di file seguenti possono essere utilizzate come valori:
|||
|-|-|
|`"*"`| attività è disponibile per tutti i file e cartelle nell'area di lavoro|
|`"*/"`| attività è disponibile per tutte le cartelle nell'area di lavoro|
|`"*.cpp"`| attività è disponibile per tutti i file con estensione cpp estensione nell'area di lavoro|
|`"/*.cpp"`| attività è disponibile per tutti i file con estensione cpp estensione nella radice dell'area di lavoro|
|`"src/*/"`| attività è disponibile per tutte le sottocartelle della cartella "src"|
|`"makefile"`| attività è disponibile a tutti i file di makefile nell'area di lavoro|
|`"/makefile"`| attività è disponibile solo per il file di progetto nella radice dell'area di lavoro|

#### <a name="output"></a>output
Utilizzare il `output` proprietà per specificare il file eseguibile da avvia quando si preme **F5**. Ad esempio:

```json
      "output": "${workspaceRoot}\\bin\\hellomake.exe" 
```

#### <a name="macros-for-tasksvsjson"></a>Macro per tasks.vs.json

|||
|-|-|
|`${env.<VARIABLE>}`| Specifica di qualsiasi variabile di ambiente (ad esempio, ${env. PERCORSO} ${env.COMSPEC} e così via) che è impostato per il prompt dei comandi per sviluppatori. Per ulteriori informazioni, vedere [prompt dei comandi per sviluppatori per Visual Studio](/dotnet/framework/tools/developer-command-prompt-for-vs).|
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

