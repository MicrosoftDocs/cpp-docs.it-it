---
title: Supporto per Apri cartella per i sistemi di compilazione C++ in Visual Studio
ms.date: 03/21/2019
helpviewer_keywords:
- Open Folder Projects in Visual Studio
ms.assetid: abd1985e-3717-4338-9e80-869db5435175
ms.openlocfilehash: 8856a5b1782c75c5a59dfdc93a8203627059ea12
ms.sourcegitcommit: fde637f823494532314790602c2819f889706ff6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/13/2019
ms.locfileid: "67042728"
---
# <a name="open-folder-projects-for-c"></a>Progetti Apri cartella per C++

In Visual Studio 2017 e versioni successive la funzionalità "Apri cartella" consente di aprire una cartella di file di origine e avviare la codifica con il supporto di IntelliSense, esplorazione, refactoring, debug e così via. Non viene caricato nessun file con estensione sln o vcxproj. Se necessario, è possibile specificare attività personalizzate e creare e avviare parametri mediante semplici file con estensione json. Per informazioni generiche sulla funzionalità Apri cartella, vedere [Sviluppare codice in Visual Studio senza progetti o soluzioni](/visualstudio/ide/develop-code-in-visual-studio-without-projects-or-solutions).

CMake è integrato nell'IDE di Visual Studio come componente di C++ carico di lavoro desktop. Per altre informazioni, vedere [Progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md). Per qualsiasi altro sistema di compilazione è possibile usare la funzionalità Apri cartella. Apri cartella separa in modo efficace l'editor del codice, il debugger e gli analizzatori dal sistema di compilazione e dal set di strumenti del compilatore. È possibile usare l'editor del codice C++ con le funzionalità IntelliSense avanzate, gli analizzatori del codice e il debugger di Visual Studio con praticamente qualsiasi sistema di compilazione, tra cui CMake, Ninja, QMake (per i progetti Qt), gyp, SCons, Gradle, Buck, make e altro ancora. Funziona persino con un singolo file o un'ampia raccolta di file senza sistema di compilazione.

Per usare Apri cartella, nel menu principale selezionare **File | Apri | Cartella** oppure premere **CTRL+MAIUSC+ALT+O**. Esplora soluzioni visualizza immediatamente tutti i file presenti nella cartella. È possibile fare clic su qualsiasi file per iniziare a modificarlo. Visual Studio avvia l'indicizzazione dei file in background per abilitare le funzionalità IntelliSense, di navigazione e di refactoring. Man mano che si modificano, creano, spostano o eliminano file, Visual Studio tiene traccia automaticamente delle modifiche e aggiorna continuamente il relativo indice IntelliSense. 

## <a name="qmake-projects-that-target-the-qt-framework"></a>Progetti QMake destinati al framework Qt

È possibile usare CMake per compilare progetti Qt, o è possibile usare la [estensione di Visual Studio Qt](https://download.qt.io/development_releases/vsaddin/) per Visual Studio 2015 o Visual Studio 2017.

## <a name="gyp-cons-scons-buck-etc"></a>gyp, Cons, SCons, Buck e così via

È possibile usare qualsiasi sistema di compilazione in Visual Studio e sfruttare i vantaggi dell'IDE e del debugger di Visual Studio. Quando si apre la cartella radice del progetto, l'editor del codice C++ usa regole euristiche per indicizzare i file di origine per IntelliSense e la ricerca. È possibile aggiungere suggerimenti sulla struttura del codice modificando il file CppProperties.json. In modo analogo è possibile configurare e richiamare il programma di compilazione modificando il file launch.vs.json.

## <a name="configuring-open-folder-projects"></a>Configurazione di progetti Apri cartella

È possibile personalizzare un progetto Apri cartella mediante tre file con estensione json:

| | |
|-|-|
|CppProperties.json|Specifica informazioni di configurazione personalizzate per l'esplorazione. Se necessario, creare questo file nella cartella radice del progetto. (Non usato nei progetti CMake.)|
|tasks.vs.json|Specifica opzioni del compilatore e comandi di compilazione personalizzati. Accessibile tramite il comando **Configura attività** nel menu di scelta rapida **Esplora soluzioni**.|
|launch.vs.json|Specifica argomenti della riga di comando per il debugger. Accessibile tramite il comando **Impostazioni per debug e avvio** nel menu di scelta rapida **Esplora soluzioni**.|

### <a name="configure-intellisense-and-browsing-hints-with-cpppropertiesjson"></a>Configurare IntelliSense ed esplorare i suggerimenti con CppProperties.json

Il comportamento di IntelliSense e dell'esplorazione dipendono in parte dalla configurazione di compilazione attiva, che definisce percorsi #include, opzioni del compilatore e altri parametri. Per impostazione predefinita, Visual Studio offre configurazioni di tipo Debug e Rilascio. I progetti CMake usano il file CMakeSettings.json e i file CMakeLists.txt per questo scopo. Per altri tipi di progetti Apri cartella può essere necessario creare una configurazione personalizzata per consentire a IntelliSense e alle funzionalità di esplorazione di interpretare correttamente il codice. Per definire una nuova configurazione, creare un file denominato CppProperties.json nella cartella radice. Ecco un esempio:

```json
{
  "configurations": [
    {
      "name": "Windows x64",
      "includePath": [ "include" ],
      "defines": [ "_DEBUG" ],
      "compilerSwitches": "/std:c++17",
      "intelliSenseMode": "windows-msvc-x64",
      "forcedInclude": [ "pch.h" ],
      "undefines": []
    }
  ]
}
```
Per altre informazioni, vedere [Riferimento allo schema CppProperties](cppproperties-schema-reference.md).

### <a name="define-build-tasks-with-tasksvsjson"></a>Definire le attività di compilazione con tasks.vs.json

È possibile automatizzare gli script di compilazione o qualsiasi altra operazione esterna per i file inclusi nell'area di lavoro corrente eseguendoli come attività direttamente nell'IDE. Per configurare una nuova attività, è possibile fare clic con il pulsante destro del mouse su un file o una cartella e scegliere **Configura attività**.

![Configura attività di Apri cartella](media/open-folder-config-tasks.png)

Ciò consente di creare (o aperto) il **Tasks** file nella cartella. VS che Visual Studio crea nella cartella radice del progetto. È possibile definire un'attività arbitraria in questo file, quindi chiamarla usando il nome specificato dal menu di scelta rapida **Esplora soluzioni**. L'esempio seguente visualizza un file tasks.vs.json che definisce una singola attività. `taskName` definisce il nome visualizzato nel menu di scelta rapida. `appliesTo` definisce i file sui quali può essere eseguito il comando. La proprietà `command` fa riferimento alla variabile di ambiente COMSPEC, che identifica il percorso per la console (cmd.exe in Windows). È anche possibile fare riferimento a variabili di ambiente che vengono dichiarate in CppProperties.json o CMakeSettings.json. La proprietà `args` specifica la riga di comando da chiamare. La macro `${file}` recupera il file selezionato in **Esplora soluzioni**. Nell'esempio seguente viene visualizzato il nome del file con estensione cpp attualmente selezionato.

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

Per altre informazioni, vedere [Riferimento allo schema Tasks.vs.json](tasks-vs-json-schema-reference-cpp.md).

### <a name="configure-debugging-parameters-with-launchvsjson"></a>Configurare i parametri di debug con launch.vs.json

Per personalizzare gli argomenti della riga di comando del programma, fare clic con il pulsante destro del mouse sul file eseguibile in **Esplora soluzioni** e selezionare **Impostazioni per debug e avvio**. Verrà aperto un oggetto esistente **Launch** file, o se ne esiste alcuno, creato un nuovo file di pre-popolato con le informazioni sul programma è stato selezionato.

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
