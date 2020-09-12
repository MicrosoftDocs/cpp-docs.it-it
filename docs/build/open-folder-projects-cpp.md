---
title: Supporto per Apri cartella per i sistemi di compilazione C++ in Visual Studio
ms.date: 12/02/2019
helpviewer_keywords:
- Open Folder Projects in Visual Studio
ms.assetid: abd1985e-3717-4338-9e80-869db5435175
ms.openlocfilehash: 9d9f59817a499f4d529363c88adc57154268c0bc
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90039586"
---
# <a name="open-folder-support-for-c-build-systems-in-visual-studio"></a>Supporto per Apri cartella per i sistemi di compilazione C++ in Visual Studio

::: moniker range="vs-2015"

La funzionalità Apri cartella è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

In Visual Studio 2017 e versioni successive la funzionalità "Apri cartella" consente di aprire una cartella di file di origine e avviare la codifica con il supporto di IntelliSense, esplorazione, refactoring, debug e così via. Man mano che si modificano, creano, spostano o eliminano file, Visual Studio tiene traccia automaticamente delle modifiche e aggiorna continuamente il relativo indice IntelliSense. Non viene caricato nessun file con estensione sln o vcxproj. Se necessario, è possibile specificare attività personalizzate e creare e avviare parametri mediante semplici file con estensione json. Questa funzionalità consente di integrare qualsiasi sistema di compilazione di terze parti in Visual Studio. Per informazioni generiche sulla funzionalità Apri cartella, vedere [Sviluppare codice in Visual Studio senza progetti o soluzioni](/visualstudio/ide/develop-code-in-visual-studio-without-projects-or-solutions).

## <a name="cmake-and-qt"></a>CMake e QT

CMake è integrato nell'IDE di Visual Studio come componente del carico di lavoro del desktop C++. Il flusso di lavoro per CMake non è identico al flusso di lavoro descritto in questo articolo. Se si usa CMake, vedere [progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md). È anche possibile usare CMake per compilare progetti QT oppure è possibile usare l' [estensione QT di Visual Studio](https://download.qt.io/development_releases/vsaddin/) per visual studio 2015 o visual studio 2017.

## <a name="other-build-systems"></a>Altri sistemi di compilazione

Per usare l'IDE di Visual Studio con un sistema di compilazione o un set di strumenti del compilatore non direttamente supportato dal menu principale, selezionare **file | Apri | Oppure premere** **CTRL + MAIUSC + ALT + o**. Passare alla cartella che contiene i file del codice sorgente. Per compilare il progetto, configurare IntelliSense e impostare i parametri di debug, si aggiungono tre file JSON:

| File | Descrizione |
|-|-|
|CppProperties.json|Specifica informazioni di configurazione personalizzate per l'esplorazione. Se necessario, creare questo file nella cartella radice del progetto. (Non usato nei progetti CMake.)|
|tasks.vs.json|Specificare i comandi di compilazione personalizzati. Accessibile tramite il comando **Configura attività** nel menu di scelta rapida **Esplora soluzioni**.|
|launch.vs.json|Specifica argomenti della riga di comando per il debugger. Accessibile tramite il comando **Impostazioni per debug e avvio** nel menu di scelta rapida **Esplora soluzioni**.|

## <a name="configure-code-navigation-with-cpppropertiesjson"></a>Configurare la navigazione del codice con CppProperties.js

Per il corretto funzionamento di IntelliSense e del comportamento di esplorazione, ad esempio **Vai a definizione** , Visual Studio deve essere in grado di individuare il compilatore utilizzato, la posizione delle intestazioni di sistema e i file di inclusione aggiuntivi se non sono direttamente nella cartella aperta (cartella dell'area di lavoro). Per specificare una configurazione, è possibile scegliere **Gestisci configurazioni** dall'elenco a discesa sulla barra degli strumenti principale:

![Elenco a discesa Gestisci configurazioni](media/manage-configurations-dropdown.png)

Visual Studio offre le configurazioni predefinite seguenti:

![Configurazioni predefinite](media/default-configurations.png)

Se, ad esempio, si sceglie **x64-debug**, Visual Studio crea un file denominato *CppProperties.js* nella cartella radice del progetto:

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

Questa configurazione eredita le variabili di ambiente di Visual Studio [x64 prompt dei comandi per gli sviluppatori](building-on-the-command-line.md). Una di queste variabili è `INCLUDE` ed è possibile farvi riferimento usando la `${env.INCLUDE}` macro. La `includePath` proprietà indica a Visual Studio dove cercare tutte le origini necessarie per IntelliSense. In questo caso, viene visualizzato il messaggio "Cerca in tutte le directory specificate dalla variabile di ambiente INCLUDE e anche in tutte le directory nell'albero delle cartelle di lavoro corrente". La `name` proprietà è il nome che verrà visualizzato nell'elenco a discesa e può essere qualsiasi elemento. La `defines` proprietà fornisce hint a IntelliSense quando rileva blocchi di compilazione condizionali. La `intelliSenseMode` proprietà fornisce alcuni hint aggiuntivi in base al tipo del compilatore. Per MSVC, GCC e Clang sono disponibili diverse opzioni.

> [!NOTE]
> Se Visual Studio sembra ignorare le impostazioni in *CppProperties.json*, provare ad aggiungere un'eccezione al file con *estensione gitignore* come segue: `!/CppProperties.json` .

## <a name="default-configuration-for-mingw-w64"></a>Configurazione predefinita per MinGW-w64

Se si aggiunge la configurazione MinGW-w64, il codice JSON è simile al seguente:

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

Si noti il `environments` blocco. Definisce le proprietà che si comportano come le variabili di ambiente e sono disponibili non solo nell' *CppProperties.jssu* file, ma anche negli altri file di configurazione *task.vs.js* e *launch.vs.json*. La `Mingw64` configurazione eredita l' `mingw_w64` ambiente e usa la relativa `INCLUDE` proprietà per specificare il valore per `includePath` . È possibile aggiungere altri percorsi alla proprietà della matrice in base alle esigenze.

La `intelliSenseMode` proprietà è impostata su un valore appropriato per GCC. Per altre informazioni su tutte queste proprietà, vedere [CppProperties Schema Reference](cppproperties-schema-reference.md).

Quando tutto funziona correttamente, si vedrà IntelliSense dalle intestazioni GCC quando si passa il mouse su un tipo:

![IntelliSense per GCC](media/gcc-intellisense.png)

## <a name="enable-intellisense-diagnostics"></a>Abilita diagnostica IntelliSense

Se non viene visualizzato il messaggio IntelliSense previsto, è possibile risolvere i problemi passando a **strumenti**  >  **Opzioni**  >  **editor di testo**  >  **C/C++**  >  **Avanzate** e impostando **Abilita registrazione** su **`true`** . Per iniziare, provare a impostare il **livello di registrazione** su 5 e registrare i **filtri** su 8.

![Registrazione diagnostica](media/diagnostic-logging.png)

L'output viene reindirizzato al **finestra di output** ed è visibile quando si sceglie **Mostra Output da: Visual C++ log*. L'output contiene, tra le altre cose, l'elenco dei percorsi di inclusione effettivi che IntelliSense sta tentando di usare. Se i percorsi non corrispondono a quelli in *CppProperties.json*, provare a chiudere la cartella ed eliminare la sottocartella *. vs* che contiene i dati di esplorazione memorizzati nella cache.

### <a name="define-build-tasks-with-tasksvsjson"></a>Definire le attività di compilazione con tasks.vs.json

È possibile automatizzare gli script di compilazione o qualsiasi altra operazione esterna per i file inclusi nell'area di lavoro corrente eseguendoli come attività direttamente nell'IDE. Per configurare una nuova attività, è possibile fare clic con il pulsante destro del mouse su un file o una cartella e scegliere **Configura attività**.

![Configura attività di Apri cartella](media/configure-tasks.png)

Questa operazione crea (o apre) il *tasks.vs.js* nel file nella cartella. vs creata da Visual Studio nella cartella radice del progetto. È possibile definire un'attività arbitraria in questo file, quindi chiamarla usando il nome specificato dal menu di scelta rapida **Esplora soluzioni**. Per continuare l'esempio GCC, il frammento di codice seguente mostra un *tasks.vs.jscompleto su* file con una singola attività che richiama *g + +. exe* per compilare un progetto. Si supponga che il progetto contenga un solo file denominato *Hello. cpp*.

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

Il file JSON viene inserito nella sottocartella *. vs* . Per visualizzare la cartella, fare clic sul pulsante **Mostra tutti i file** nella parte superiore del **Esplora soluzioni**. È possibile eseguire questa attività facendo clic con il pulsante destro del mouse sul nodo radice in **Esplora soluzioni** e scegliendo **Compila Hello**. Al termine dell'attività, verrà visualizzato un nuovo file, *hello.exe* in **Esplora soluzioni**.

È possibile definire molti tipi di attività. Nell'esempio seguente viene illustrato un *tasks.vs.jssu un file* che definisce una singola attività. `taskLabel` definisce il nome visualizzato nel menu di scelta rapida. `appliesTo` definisce i file sui quali può essere eseguito il comando. La `command` proprietà fa riferimento alla variabile di ambiente ComSpec, che identifica il percorso per la console (*cmd.exe* in Windows). È anche possibile fare riferimento a variabili di ambiente che vengono dichiarate in CppProperties.json o CMakeSettings.json. La proprietà `args` specifica la riga di comando da chiamare. La macro `${file}` recupera il file selezionato in **Esplora soluzioni**. Nell'esempio seguente viene visualizzato il nome del file con estensione cpp attualmente selezionato.

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

Dopo aver salvato *tasks.vs.json*, è possibile fare clic con il pulsante destro del mouse su un file con *estensione cpp* nella cartella, scegliere **echo filename** dal menu di scelta rapida e visualizzare il nome del file visualizzato nella finestra output.

Per altre informazioni, vedere [Riferimento allo schema Tasks.vs.json](tasks-vs-json-schema-reference-cpp.md).

### <a name="configure-debugging-parameters-with-launchvsjson"></a>Configurare i parametri di debug con launch.vs.json

Per personalizzare gli argomenti della riga di comando del programma e le istruzioni di debug, fare clic con il pulsante destro del mouse sul file eseguibile in **Esplora soluzioni** e scegliere **debug e avvia Impostazioni**. Verrà aperto unlaunch.vs.jsesistente * nel* file o, se non ne esiste alcuno, verrà creato un nuovo file con un set di impostazioni di avvio minime. Per prima cosa, è possibile scegliere il tipo di sessione di debug che si desidera configurare. Per eseguire il debug di un progetto MinGw-W64, si sceglie **avvio C/C++ per MinGW/Cygwin (gdb)**. Questa operazione crea una configurazione di avvio per l'uso di *gdb.exe* con alcune ipotesi colte sui valori predefiniti. Uno di questi valori predefiniti è `MINGW_PREFIX` . È possibile sostituire il percorso letterale (come illustrato di seguito) oppure è possibile definire una `MINGW_PREFIX` Proprietà in *CppProperties.js*in:

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

Per ulteriori informazioni, vedere [launch.vs.jsdi riferimento allo schema](launch-vs-schema-reference-cpp.md).

## <a name="launching-other-executables"></a>Avvio di altri eseguibili

È possibile definire le impostazioni di avvio per qualsiasi eseguibile nel computer. L'esempio seguente avvia *7za* e specifica argomenti aggiuntivi, aggiungendoli alla `args` matrice JSON:

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
