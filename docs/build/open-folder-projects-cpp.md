---
title: Supporto per Apri cartella per i sistemi di compilazione C++ in Visual Studio
ms.date: 12/02/2019
helpviewer_keywords:
- Open Folder Projects in Visual Studio
ms.assetid: abd1985e-3717-4338-9e80-869db5435175
ms.openlocfilehash: 9264aa4bf77de406bdde9042ef9ec4251763f721
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320954"
---
# <a name="open-folder-support-for-c-build-systems-in-visual-studio"></a>Supporto per Apri cartella per i sistemi di compilazione C++ in Visual Studio

::: moniker range="vs-2015"

La funzionalità Apri cartella è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

In Visual Studio 2017 e versioni successive la funzionalità "Apri cartella" consente di aprire una cartella di file di origine e avviare la codifica con il supporto di IntelliSense, esplorazione, refactoring, debug e così via. Man mano che si modificano, creano, spostano o eliminano file, Visual Studio tiene traccia automaticamente delle modifiche e aggiorna continuamente il relativo indice IntelliSense. Non viene caricato nessun file con estensione sln o vcxproj. Se necessario, è possibile specificare attività personalizzate e creare e avviare parametri mediante semplici file con estensione json. Questa funzionalità consente di integrare qualsiasi sistema di compilazione di terze parti in Visual Studio.This feature enables you to integrate any third-party build system into Visual Studio. Per informazioni generiche sulla funzionalità Apri cartella, vedere [Sviluppare codice in Visual Studio senza progetti o soluzioni](/visualstudio/ide/develop-code-in-visual-studio-without-projects-or-solutions).

## <a name="cmake-and-qt"></a>CMake e Qt

CMake è integrato nell'IDE di Visual Studio come un componente del carico di lavoro desktop di C. Il flusso di lavoro per CMake non è identico al flusso di lavoro descritto in questo articolo. Se si utilizza CMake, vedere [Progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md). È anche possibile usare CMake per compilare progetti Qt oppure è possibile usare [l'estensione Qt di Visual Studio](https://download.qt.io/development_releases/vsaddin/) per Visual Studio 2015 o Visual Studio 2017.You can also use CMake to build Qt projects, or you can use the Qt Visual Studio Extension for either Visual Studio 2015 or Visual Studio 2017.

## <a name="other-build-systems"></a>Altri sistemi di compilazione

Per usare l'IDE di Visual Studio con un sistema di compilazione o un set di strumenti del compilatore non direttamente supportato dal menu principale, selezionare File . ** Proprietà Open . Cartella** o premere **Ctrl (Windows) o Maiusc (Mac**O) . Passare alla cartella che contiene i file di codice sorgente. Per compilare il progetto, configurare IntelliSense e impostare i parametri di debug, aggiungere tre file JSON:To build the project, configure IntelliSense and set debugging parameters, you add three JSON files:

| | |
|-|-|
|CppProperties.json|Specifica informazioni di configurazione personalizzate per l'esplorazione. Se necessario, creare questo file nella cartella radice del progetto. (Non usato nei progetti CMake.)|
|tasks.vs.json|Specificare comandi di compilazione personalizzati. Accessibile tramite il comando **Configura attività** nel menu di scelta rapida **Esplora soluzioni**.|
|launch.vs.json|Specifica argomenti della riga di comando per il debugger. Accessibile tramite il comando **Impostazioni per debug e avvio** nel menu di scelta rapida **Esplora soluzioni**.|

## <a name="configure-code-navigation-with-cpppropertiesjson"></a>Configurare la navigazione del codice con CppProperties.jsonConfigure code navigation with CppProperties.json

Per IntelliSense e il comportamento di **esplorazione,** ad esempio Vai a definizione per funzionare correttamente, Visual Studio deve sapere quale compilatore si sta utilizzando, dove si trovano le intestazioni di sistema e dove si trovano i file di inclusione aggiuntivi se non si trovano direttamente nella cartella aperta (la cartella dell'area di lavoro). Per specificare una configurazione, è possibile scegliere **Gestisci configurazioni** dal menu a discesa nella barra degli strumenti principale:

![Menu a discesa Gestisci configurazioni](media/manage-configurations-dropdown.png)

Visual Studio offre le seguenti configurazioni predefinite:

![Configurazioni predefinite](media/default-configurations.png)

Se, ad esempio, si sceglie **x64-Debug**, Visual Studio crea un file denominato *CppProperties.json* nella cartella del progetto radice:

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

Questa configurazione eredita le variabili di ambiente del prompt dei comandi per sviluppatori di Visual Studio [x64](building-on-the-command-line.md). Una di queste `INCLUDE` variabili è ed è possibile `${env.INCLUDE}` farvi riferimento qui utilizzando la macro. La `includePath` proprietà indica a Visual Studio dove cercare tutte le origini necessarie per IntelliSense.The property tells Visual Studio where to look for all the sources that it needs for IntelliSense. In questo caso, viene visualizzato "cercare in tutte le directory specificate dalla variabile di ambiente INCLUDE e anche in tutte le directory nella struttura di cartelle di lavoro corrente". La `name` proprietà è il nome che verrà visualizzato nell'elenco a discesa e può essere qualsiasi elemento desiderato. La `defines` proprietà fornisce suggerimenti a IntelliSense quando rileva blocchi di compilazione condizionale. La `intelliSenseMode` proprietà fornisce alcuni suggerimenti aggiuntivi in base al tipo del compilatore. Sono disponibili diverse opzioni per MSVC, GCC e Clang.

> [!NOTE]
> Se Visual Studio sembra ignorare le impostazioni in *CppProperties.json*, provare ad aggiungere `!/CppProperties.json`un'eccezione al file con estensione *gitignore* in questo modo: .

## <a name="default-configuration-for-mingw-w64"></a>Configurazione predefinita per MinGW-w64

Se si aggiunge la configurazione MinGW-W64, il codice JSON ha questo aspetto:

```json
{
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
          "TOOLSET_VERSION": "9.1.0",
          "PATH": "${env.BIN_ROOT};${env.MINGW64_ROOT}\\..\\usr\\local\\bin;${env.MINGW64_ROOT}\\..\\usr\\bin;${env.MINGW64_ROOT}\\..\\bin;${env.PATH}",
          "INCLUDE": "${env.MINGW64_ROOT}\\include\\c++\\${env.TOOLSET_VERSION};${env.MINGW64_ROOT}\\include\\c++\\${env.TOOLSET_VERSION}\\tr1;${env.MINGW64_ROOT}\\include\\c++\\${env.TOOLSET_VERSION}\\${env.FLAVOR}",
          "environment": "mingw_64"
        }
      ]
    }
}
```

Si `environments` noti il blocco. Definisce le proprietà che si comportano come variabili di ambiente e sono disponibili non solo nel file *CppProperties.json,* ma anche negli altri file di configurazione *task.vs.json* e *launch.vs.json*. La `Mingw64` configurazione eredita `mingw_w64` l'ambiente `INCLUDE` e utilizza la `includePath`relativa proprietà per specificare il valore per . È possibile aggiungere altri percorsi a questa proprietà dell'array in base alle esigenze."

La `intelliSenseMode` proprietà è impostata su un valore appropriato per GCC. Per ulteriori informazioni su tutte queste proprietà, vedere Informazioni di [riferimento sullo schema CppProperties](cppproperties-schema-reference.md).

Quando tutto funziona correttamente, quando si passa il mouse su un tipo verrà visualizzato IntelliSense dalle intestazioni GCC:

![GCC IntelliSense](media/gcc-intellisense.png)

## <a name="enable-intellisense-diagnostics"></a>Abilitare la diagnostica IntelliSenseEnable IntelliSense diagnostics

Se non viene visualizzato IntelliSense previsto, è possibile risolvere i problemi scegliendo **Tools** > **Opzioni** > **dell'editor** > di testo**C/C,** > **quindi** **impostare Abilita registrazione** su **true**. Per iniziare, provare a impostare **Livello di registrazione su** 5 e Filtri di **registrazione** su 8.

![Registrazione diagnostica](media/diagnostic-logging.png)

L'output viene reindirizzato alla finestra di **output** ed è visibile quando si sceglie*Mostra output da: Registro Visual C.* L'output contiene, tra le altre cose, l'elenco dei percorsi di inclusione effettivi che IntelliSense sta tentando di utilizzare. Se i percorsi non corrispondono a quelli in *CppProperties.json*, provare a chiudere la cartella ed eliminare la sottocartella *vs* che contiene i dati di esplorazione memorizzati nella cache.

### <a name="define-build-tasks-with-tasksvsjson"></a>Definire le attività di compilazione con tasks.vs.json

È possibile automatizzare gli script di compilazione o qualsiasi altra operazione esterna per i file inclusi nell'area di lavoro corrente eseguendoli come attività direttamente nell'IDE. Per configurare una nuova attività, è possibile fare clic con il pulsante destro del mouse su un file o una cartella e scegliere **Configura attività**.

![Configura attività di Apri cartella](media/configure-tasks.png)

In questo modo viene creato (o aperto) il file *tasks.vs.json* nella cartella vs creata da Visual Studio nella cartella del progetto radice. È possibile definire un'attività arbitraria in questo file, quindi chiamarla usando il nome specificato dal menu di scelta rapida **Esplora soluzioni**. Per continuare l'esempio GCC, il frammento di codice seguente mostra un file *tasks.vs.json* completo con come singola attività che richiama il file *g.exe* per compilare un progetto. Si supponga che il progetto contiene un singolo file denominato *hello.cpp*.

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

Il file JSON viene inserito nella sottocartella *vs.* Per visualizzare tale cartella, fare clic sul pulsante **Mostra tutti i file** nella parte superiore di Esplora **soluzioni**. È possibile eseguire questa attività facendo clic con il pulsante destro del mouse sul nodo radice in **Esplora soluzioni** e scegliendo **compila hello**. Al termine dell'attività verrà visualizzato un nuovo file, *hello.exe* in **Esplora soluzioni**.

È possibile definire molti tipi di attività. Nell'esempio seguente viene illustrato un *file tasks.vs.json* che definisce una singola attività. `taskLabel` definisce il nome visualizzato nel menu di scelta rapida. `appliesTo` definisce i file sui quali può essere eseguito il comando. La `command` proprietà fa riferimento alla variabile di ambiente COMSPEC, che identifica il percorso della console (*cmd.exe* in Windows). È anche possibile fare riferimento a variabili di ambiente che vengono dichiarate in CppProperties.json o CMakeSettings.json. La proprietà `args` specifica la riga di comando da chiamare. La macro `${file}` recupera il file selezionato in **Esplora soluzioni**. Nell'esempio seguente viene visualizzato il nome del file con estensione cpp attualmente selezionato.

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

Dopo aver salvato *tasks.vs.json*, è possibile fare clic con il pulsante destro del mouse su qualsiasi file *cpp* nella cartella, scegliere **Nome file echo** dal menu di scelta rapida e visualizzare il nome del file nella finestra Di output.

Per altre informazioni, vedere [Riferimento allo schema Tasks.vs.json](tasks-vs-json-schema-reference-cpp.md).

### <a name="configure-debugging-parameters-with-launchvsjson"></a>Configurare i parametri di debug con launch.vs.json

Per personalizzare gli argomenti della riga di comando e le istruzioni di debug del programma, fare clic con il pulsante destro del mouse sull'eseguibile in **Esplora soluzioni** e scegliere **Impostazioni di debug e di avvio**. Verrà aperto un file *launch.vs.json* esistente o, se non ne esiste alcuno, verrà creato un nuovo file con un set di impostazioni di avvio minime. In primo luogo si è data una scelta di quale tipo di sessione di debug che si desidera configurare. Per il debug di un progetto MinGw-w64, è possibile scegliere **il lancio di C/C** In questo modo viene creata una configurazione di avvio per l'utilizzo di *gdb.exe* con alcune ipotesi istruite sui valori predefiniti. Uno di questi `MINGW_PREFIX`valori predefiniti è . È possibile sostituire il percorso letterale (come `MINGW_PREFIX` illustrato di seguito) oppure definire una proprietà in *CppProperties.json*:

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

Per avviare il debug, scegliere l'eseguibile nell'elenco a discesa di debug, quindi fare clic sulla freccia verde:

![Avvia debugger](media/launch-debugger-gdb.png)

Verrà visualizzata la finestra di dialogo **Inizializzazione debugger** e quindi una finestra della console esterna che esegue il programma.

Per ulteriori informazioni, vedere informazioni di [riferimento sullo schema launch.vs.json](launch-vs-schema-reference-cpp.md).

## <a name="launching-other-executables"></a>Avvio di altri file eseguibili

È possibile definire le impostazioni di avvio per qualsiasi eseguibile nel computer. L'esempio seguente avvia *7za* e specifica argomenti aggiuntivi, `args` aggiungendoli alla matrice JSON:

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
