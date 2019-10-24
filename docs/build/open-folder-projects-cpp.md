---
title: Supporto per Apri cartella per i sistemi di compilazione C++ in Visual Studio
ms.date: 10/21/2019
helpviewer_keywords:
- Open Folder Projects in Visual Studio
ms.assetid: abd1985e-3717-4338-9e80-869db5435175
ms.openlocfilehash: 0eed40430050655f8fd9bdc83144adc7aa8c32e7
ms.sourcegitcommit: ea9d78dbb93bf3f8841dde93dbc12bd66f6f32ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/22/2019
ms.locfileid: "72778332"
---
# <a name="open-folder-support-for-c-build-systems-in-visual-studio"></a>Supporto per Apri cartella per i sistemi di compilazione C++ in Visual Studio

::: moniker range="vs-2015"

La funzionalità Apri cartella è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

In Visual Studio 2017 e versioni successive la funzionalità "Apri cartella" consente di aprire una cartella di file di origine e avviare la codifica con il supporto di IntelliSense, esplorazione, refactoring, debug e così via. Man mano che si modificano, creano, spostano o eliminano file, Visual Studio tiene traccia automaticamente delle modifiche e aggiorna continuamente il relativo indice IntelliSense. Non viene caricato nessun file con estensione sln o vcxproj. Se necessario, è possibile specificare attività personalizzate e creare e avviare parametri mediante semplici file con estensione json. Questa funzionalità consente di integrare qualsiasi sistema di compilazione di terze parti in Visual Studio. Per informazioni generiche sulla funzionalità Apri cartella, vedere [Sviluppare codice in Visual Studio senza progetti o soluzioni](/visualstudio/ide/develop-code-in-visual-studio-without-projects-or-solutions).

## <a name="cmake-and-qt"></a>CMake e QT

CMake è integrato nell'IDE di Visual Studio come componente del carico di C++ lavoro desktop. Il flusso di lavoro per CMake non è identico al flusso di lavoro descritto in questo articolo. Se si usa CMake, vedere [progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md). È anche possibile usare CMake per compilare progetti QT oppure è possibile usare l' [estensione QT di Visual Studio](https://download.qt.io/development_releases/vsaddin/) per visual studio 2015 o visual studio 2017.

## <a name="other-build-systems"></a>Altri sistemi di compilazione

Per usare l'IDE di Visual Studio con un sistema di compilazione o un set di strumenti del compilatore non direttamente supportato dal menu principale, selezionare **file | Apri | Oppure premere** **CTRL + MAIUSC + ALT + o**. Passare alla cartella che contiene i file del codice sorgente. Per compilare il progetto, configurare IntelliSense e impostare i parametri di debug, si aggiungono tre file JSON:

| | |
|-|-|
|CppProperties.json|Specifica informazioni di configurazione personalizzate per l'esplorazione. Se necessario, creare questo file nella cartella radice del progetto. (Non usato nei progetti CMake.)|
|tasks.vs.json|Specificare i comandi di compilazione personalizzati. Accessibile tramite il comando **Configura attività** nel menu di scelta rapida **Esplora soluzioni**.|
|launch.vs.json|Specifica argomenti della riga di comando per il debugger. Accessibile tramite il comando **Impostazioni per debug e avvio** nel menu di scelta rapida **Esplora soluzioni**.|

## <a name="configure-code-navigation-with-cpppropertiesjson"></a>Configurare la navigazione del codice con CppProperties. JSON

Per il funzionamento corretto di IntelliSense e di esplorazione, ad esempio **Vai a definizione** , Visual Studio deve essere in grado di individuare il compilatore in uso, dove si trovano le intestazioni di sistema e dove si trovano file di inclusione aggiuntivi se non sono direttamente nel cartella aperta (cartella dell'area di lavoro). Per specificare una configurazione, è possibile scegliere **Gestisci configurazioni** dall'elenco a discesa sulla barra degli strumenti principale:

![Elenco a discesa Gestisci configurazioni](media/manage-configurations-dropdown.png)

Attualmente, Visual Studio offre quattro configurazioni predefinite, tutte per il compilatore C++ Microsoft:

![Configurazioni predefinite](media/default-configurations.png)

Se, ad esempio, si sceglie **x64-debug**, Visual Studio crea un file denominato *CppProperties. JSON* nella cartella radice del progetto e lo popola come segue:

```json
{
  "configurations": [
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
    }
  ]
}
```

Questa configurazione "eredita" le variabili di ambiente di Visual Studio [x64 prompt dei comandi per gli sviluppatori](building-on-the-command-line.md). Una di queste variabili è `INCLUDE` ed è possibile farvi riferimento usando la macro `${env.INCLUDE}`. La proprietà `includePath` indica a Visual Studio dove cercare tutte le origini necessarie per IntelliSense. In questo caso, viene visualizzato il messaggio "Cerca in tutte le directory specificate dalla variabile di ambiente INCLUDE e anche in tutte le directory nell'albero delle cartelle di lavoro corrente". Il `name` proprietà è il nome che verrà visualizzato nell'elenco a discesa e può essere qualsiasi elemento. La proprietà `defines` fornisce suggerimenti a IntelliSense quando rileva blocchi di compilazione condizionali. La proprietà `intelliSenseMode` fornisce alcuni hint aggiuntivi in base al tipo del compilatore. Per MSVC, GCC e Clang sono disponibili diverse opzioni.

> [!NOTE]
> Se Visual Studio sembra ignorare le impostazioni in *CppProperties. JSON*, provare ad aggiungere un'eccezione al file con *estensione gitignore* come segue: `!/CppProperties.json`.

## <a name="example-configuration-for-gcc"></a>Configurazione di esempio per GCC

Se si usa un compilatore diverso da Microsoft C++, è necessario creare una configurazione e un ambiente personalizzati in *CppProperties. JSON*. L'esempio seguente illustra un file *CppProperties. JSON* completo con una singola configurazione personalizzata per l'uso di GCC in un'installazione MSYS2:

```json
{
  "configurations": [
   {
      "inheritEnvironments": [
        "mingw_64"
      ],
      "name": "Mingw64",
      "includePath": [
        "${env.INCLUDE}",
        "${workspaceRoot}\\**"
      ],
      "intelliSenseMode": "linux-gcc-x64",
      "environments": [
        {
          "MINGW64_ROOT": "C:\\msys64\\mingw64",
          "BIN_ROOT": "${env.MINGW64_ROOT}\\bin",
          "FLAVOR": "x86_64-w64-mingw32",
          "TOOLSET_VERSION": "8.3.0",
          "PATH": "${env.MINGW64_ROOT}\\bin;${env.MINGW64_ROOT}\\..\\usr\\local\\bin;${env.MINGW64_ROOT}\\..\\usr\\bin;${env.MINGW64_ROOT}\\..\\bin;${env.PATH}",
          "INCLUDE": "${env.MINGW64_ROOT}\\include\\c++\\${env.TOOLSET_VERSION};${env.MINGW64_ROOT}\\include\\c++\\${env.TOOLSET_VERSION}\\tr1;${env.MINGW64_ROOT}\\include\\c++\\${env.TOOLSET_VERSION}\\${env.FLAVOR}",
          "environment": "mingw_64"
        }
      ]
   }
}
```

Prendere nota del blocco `environments`. Definisce le proprietà che si comportano come le variabili di ambiente e sono disponibili non solo nel file *CppProperties. JSON* , ma anche negli altri file di configurazione *Task. vs. JSON* e *Launch. vs. JSON*. La configurazione `Mingw64` eredita l'ambiente `mingw_w64` e usa la relativa proprietà `INCLUDE` per specificare il valore per `includePath`. È possibile aggiungere altri percorsi alla proprietà della matrice in base alle esigenze.

> [!WARNING]
> Attualmente esiste un problema noto in cui il valore `INCLUDE` specificato in `environments` non viene passato correttamente alla proprietà `includePath`. Per risolvere il problema, è possibile aggiungere i percorsi di inclusione dei valori letterali completi alla matrice di `includePath`.

La proprietà `intelliSenseMode` è impostata su un valore appropriato per GCC. Per altre informazioni su tutte queste proprietà, vedere [CppProperties Schema Reference](cppproperties-schema-reference.md).

Quando tutto funziona correttamente, si vedrà IntelliSense dalle intestazioni GCC quando si passa il mouse su un tipo:

![IntelliSense per GCC](media/gcc-intellisense.png)

## <a name="enable-intellisense-diagnostics"></a>Abilita diagnostica IntelliSense

Se non viene visualizzato il messaggio IntelliSense previsto, è possibile risolvere i problemi selezionando **strumenti**  > **Opzioni**  > **editor di testo**  > **C/C++**   > **Avanzate** e impostando **Abilita registrazione** su **true**. Per iniziare, provare a impostare il **livello di registrazione** su 5 e registrare i **filtri** su 8.

![Registrazione diagnostica](media/diagnostic-logging.png)

L'output viene reindirizzato al **finestra di output** ed è visibile quando si sceglie **Mostra output da: C++ log visivo*. L'output contiene, tra le altre cose, l'elenco dei percorsi di inclusione effettivi che IntelliSense sta tentando di usare. Se i percorsi non corrispondono a quelli in *CppProperties. JSON*, provare a chiudere la cartella ed eliminare la sottocartella *. vs* che contiene i dati di esplorazione memorizzati nella cache.

### <a name="define-build-tasks-with-tasksvsjson"></a>Definire le attività di compilazione con tasks.vs.json

È possibile automatizzare gli script di compilazione o qualsiasi altra operazione esterna per i file inclusi nell'area di lavoro corrente eseguendoli come attività direttamente nell'IDE. Per configurare una nuova attività, è possibile fare clic con il pulsante destro del mouse su un file o una cartella e scegliere **Configura attività**.

![Configura attività di Apri cartella](media/configure-tasks.png)

Viene creato o aperto il file *Tasks. vs. JSON* nella cartella. vs creata da Visual Studio nella cartella radice del progetto. È possibile definire un'attività arbitraria in questo file, quindi chiamarla usando il nome specificato dal menu di scelta rapida **Esplora soluzioni**. Per continuare l'esempio GCC, il frammento di codice seguente mostra un file *Tasks. vs. JSON* completo con un'unica attività che richiama *g + +. exe* per compilare un progetto. Si supponga che il progetto contenga un solo file denominato *Hello. cpp*.

```json
{
  "version": "0.2.1",
  "tasks": [
    {
      "taskLabel": "build hello",
      "appliesTo": "/",
      "type": "default",
      "command": "g++",
      "args": [
        "-g",
        "-o",
        "hello",
        "hello.cpp"
      ]
    }
  ]
}

```

Il file JSON viene inserito nella sottocartella *. vs,* che è possibile visualizzare facendo clic sul pulsante **Mostra tutti i file** nella parte superiore del **Esplora soluzioni**. È possibile eseguire questa attività facendo clic con il pulsante destro del mouse sul nodo radice in **Esplora soluzioni** e scegliendo **Compila Hello**. Al termine dell'attività, verrà visualizzato un nuovo file, *Hello. exe* in **Esplora soluzioni**.

È possibile definire molti tipi di attività. Nell'esempio seguente viene illustrato un *file Tasks. vs. JSON* che definisce una singola attività. `taskLabel` definisce il nome visualizzato nel menu di scelta rapida. `appliesTo` definisce i file sui quali può essere eseguito il comando. La proprietà `command` fa riferimento alla variabile di ambiente ComSpec, che identifica il percorso per la console (*cmd. exe* in Windows). È anche possibile fare riferimento a variabili di ambiente che vengono dichiarate in CppProperties.json o CMakeSettings.json. La proprietà `args` specifica la riga di comando da chiamare. La macro `${file}` recupera il file selezionato in **Esplora soluzioni**. Nell'esempio seguente viene visualizzato il nome del file con estensione cpp attualmente selezionato.

```json
{
  "version": "0.2.1",
  "tasks": [
    {
      "taskLabel": "Echo filename",
      "appliesTo": "*.cpp",
      "type": "command",
      "command": "${env.COMSPEC}",
      "args": ["echo ${file}"]
    }
  ]
}
```

Dopo aver salvato *Tasks. vs. JSON*, è possibile fare clic con il pulsante destro del mouse su un file con *estensione cpp* nella cartella, scegliere **echo filename** dal menu di scelta rapida e visualizzare il nome del file visualizzato nella finestra di output.

Per altre informazioni, vedere [Riferimento allo schema Tasks.vs.json](tasks-vs-json-schema-reference-cpp.md).

### <a name="configure-debugging-parameters-with-launchvsjson"></a>Configurare i parametri di debug con launch.vs.json

Per personalizzare gli argomenti della riga di comando del programma e le istruzioni di debug, fare clic con il pulsante destro del mouse sul file eseguibile in **Esplora soluzioni** e scegliere **debug e avvia Impostazioni**. Verrà aperto un file *Launch. vs. JSON* esistente o, se non ne esiste alcuno, verrà creato un nuovo file con un set di impostazioni di avvio minime. Per prima cosa, è possibile scegliere il tipo di sessione di debug che si desidera configurare. Per il debug di un progetto MinGW-w64, è possibile scegliere **CC++ /Launch per MinGGW/Cygwin (gdb)** . Questa operazione crea una configurazione di avvio per l'uso di *gdb. exe* con alcune ipotesi colte sui valori predefiniti. Uno di questi valori predefiniti è `MINGW_PREFIX`. È possibile sostituire il percorso letterale (come illustrato di seguito) oppure è possibile definire una proprietà `MINGW_PREFIX` in *CppProperties. JSON*:

```json
{
  "version": "0.2.1",
  "defaults": {},
  "configurations": [
    {
      "type": "cppdbg",
      "name": "hello.exe",
      "project": "hello.exe",
      "cwd": "${workspaceRoot}",
      "program": "${debugInfo.target}",
      "MIMode": "gdb",
      "miDebuggerPath": "c:\\msys64\\usr\\bin\\gdb.exe",
      "externalConsole": true
    }
  ]
}

```

Per avviare il debug, scegliere il file eseguibile nell'elenco a discesa debug, quindi fare clic sulla freccia verde:

![Avvia debugger](media/launch-debugger-gdb.png)

Verrà visualizzata la finestra di dialogo **inizializzazione debugger** , quindi una finestra della console esterna in cui è in esecuzione il programma.

Per altre informazioni, vedere Guida di [riferimento allo schema Launch. vs. JSON](launch-vs-schema-reference-cpp.md).

## <a name="launching-other-executables"></a>Avvio di altri eseguibili

È possibile definire le impostazioni di avvio per qualsiasi eseguibile nel computer. L'esempio seguente avvia *7za* e specifica argomenti aggiuntivi aggiungendoli alla matrice JSON `args`:

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

::: moniker-end
