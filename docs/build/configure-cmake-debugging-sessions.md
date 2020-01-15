---
title: Configurare le sessioni di debug di CMake in Visual Studio
description: Viene descritto come usare Visual Studio per configurare le impostazioni del debugger CMake
ms.date: 01/13/2020
helpviewer_keywords:
- CMake debugging
ms.openlocfilehash: ff1de8241c2489e675f82f469f1cf697a72f5034
ms.sourcegitcommit: 275b71219d2a8bd5d78f87e21dd909e9968c2f44
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/14/2020
ms.locfileid: "75946817"
---
# <a name="configure-cmake-debugging-sessions"></a>Configurare le sessioni di debug di CMake

::: moniker range="vs-2015"

Il supporto di CMake nativo è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

Tutte le destinazioni CMake eseguibili sono visualizzate nell'elenco a discesa **Elemento di avvio** nella barra degli strumenti **Generale**. Per avviare una sessione di debug, selezionarne una e avviare il debugger.

![Elenco a discesa di elementi di avvio CMake](media/cmake-startup-item-dropdown.png "Elenco a discesa di elementi di avvio CMake")

È anche possibile avviare una sessione di debug da Esplora soluzioni. Per prima cosa, passare alla **visualizzazione destinazioni CMake** nella finestra **Esplora soluzioni** .

![Pulsante visualizzazione destinazioni CMake](media/cmake-targets-view.png  "Voce di menu visualizzazione destinazioni CMake")

Quindi, fare clic con il pulsante destro del mouse su qualsiasi eseguibile e selezionare **debug** **, debug e avvia Impostazioni**. **Debug** avvia automaticamente il debug della destinazione selezionata, in base alla configurazione attiva. Le **impostazioni di debug e avvio** aprono il file *Launch. vs. JSON* e aggiungono una nuova configurazione di debug per la destinazione selezionata.

## <a name="customize-debugger-settings"></a>Personalizzare le impostazioni del debugger

È possibile personalizzare le impostazioni del debugger per qualsiasi destinazione CMake eseguibile nel progetto in un file denominato *Launch. vs. JSON*. Il file contiene tre punti di ingresso:

- Selezionare **debug > debug e avviare le impostazioni per $ {activeDebugTarget}** dal menu principale per modificare la configurazione di debug specifica per la destinazione di debug attiva. Se non è stata selezionata una destinazione attiva, questa opzione sarà disabilitata.

- Passare alla **visualizzazione destinazioni** in Esplora soluzioni. Quindi, fare clic con il pulsante destro del mouse su una destinazione di debug e selezionare **debug e avvia Impostazioni** per modificare la configurazione di debug specifica per la destinazione selezionata.

- Fare clic con il pulsante destro del mouse su un CMakeLists. txt radice e selezionare **impostazioni di debug e avvio** per aprire la finestra di dialogo **Seleziona un debugger** . La finestra di dialogo consente di aggiungere qualsiasi configurazione di debug, ma è necessario specificare manualmente la destinazione CMake da richiamare tramite la proprietà `projectTarget`.

Per fare riferimento a qualsiasi chiave in un file *CMakeSettings. JSON* , anteporre `cmake.` in *Launch. vs. JSON*. Nell'esempio seguente viene illustrato un semplice file *Launch. vs. JSON* che esegue il pull del valore della chiave `remoteCopySources` nel file *CMakeSettings. JSON* per la configurazione attualmente selezionata:

```json
{
  "version": "0.2.1",
  "defaults": {},
  "configurations": [
    {
      "type": "default",
      "project": "CMakeLists.txt",
      "projectTarget": "CMakeHelloWorld.exe (Debug\\CMakeHelloWorld.exe)",
      "name": "CMakeHelloWorld.exe (Debug\\CMakeHelloWorld.exe)",
      "args": ["${cmake.remoteCopySources}"]
    }
  ]
}
```

Quando si salva il file *Launch. vs. JSON* , Visual Studio crea una voce per il nuovo nome nell'elenco a discesa degli **elementi di avvio** . È possibile modificare il file *Launch. vs. JSON* per creare più configurazioni di debug, per un numero qualsiasi di destinazioni CMake.

## <a name="launchvsjson-reference"></a>Riferimento a Launch. vs. JSON

Sono disponibili molte proprietà *Launch. vs. JSON* per supportare tutti gli scenari di debug. Le proprietà seguenti sono comuni a tutte le configurazioni di debug, sia remote che locali:

- `projectTarget`: specifica la destinazione CMake da richiamare durante la compilazione del progetto. Questa proprietà viene popolata automaticamente da Visual Studio se si immette *Launch. vs. JSON* da **debug > impostazioni di debug e avvio per la visualizzazione di $ {ActiveDebugTarget}** o **destinazioni**.

- `program`: percorso completo dell'eseguibile del programma nel sistema remoto. È possibile usare la macro `${debugInfo.fullTargetPath}` qui.

- `args`: argomenti della riga di comando passati al programma di cui eseguire il debug.

## <a name="launchvsjson-reference-for-remote-linux-projects"></a>Guida di riferimento a Launch. vs. JSON per progetti Linux remoti

Le proprietà seguenti sono specifiche per le **configurazioni di debug remoto**. È anche possibile [inviare comandi direttamente a gdb](https://github.com/microsoft/MIEngine/wiki/Executing-custom-gdb-lldb-commands) e [abilitare la registrazione MIEngine](https://github.com/microsoft/MIEngine/wiki/Logging). Queste proprietà consentono di visualizzare i comandi che vengono inviati a gdb, il risultato restituito da gdb e il tempo impiegato da ogni comando.

- `cwd`: directory di lavoro corrente per trovare le dipendenze e altri file nel computer remoto. È possibile usare la macro `${debugInfo.defaultWorkingDirectory}`. Il valore predefinito è la radice dell'area di lavoro remota a meno che non venga sottoposto a override in *CMakeLists. txt*. Questa proprietà viene utilizzata solo per le configurazioni remote. `currentDir` viene usato per impostare la directory corrente dell'app di avvio per un progetto locale.

- `environment`: variabili di ambiente aggiuntive da aggiungere all'ambiente per il programma con questa sintassi:

```json
  "environment": [
      {
        "name": "ENV1",
        "value": "envvalue1"
      },
      {
        "name": "ENV2",
        "value": "envvalue2"
      }
    ]
```

- `pipeArgs`: argomenti della riga di comando passati al programma pipe per configurare la connessione. Il programma pipe viene usato per inoltrare input/output standard tra Visual Studio e GDB. Il comando `${debuggerCommand}` avvia GDB sul sistema remoto e può essere modificato in:

  - Esportare il valore della variabile di ambiente visualizzata nel sistema Linux. Nell'esempio seguente, questo valore è `:1`.

  ```json
  "pipeArgs": [
      "/s",
      "${debugInfo.remoteMachineId}",
      "/p",
      "${debugInfo.parentProcessId}",
      "/c",
      "export DISPLAY=:1;${debuggerCommand}",
      "--tty=${debugInfo.tty}"
    ],
  ```

  - Eseguire uno script prima dell'esecuzione di gdb. Verificare che le autorizzazioni Execute siano impostate per lo script.

    ```json
    "pipeArgs": [
        "/s",
        "${debugInfo.remoteMachineId}",
        "/p",
        "${debugInfo.parentProcessId}",
        "/c",
        "/path/to/script.sh;${debuggerCommand}",
        "--tty=${debugInfo.tty}"
      ],
    ```

- `stopOnEntry`: valore booleano che specifica se interrompere non appena viene avviato il processo. Il valore predefinito è false.

- `visualizerFile`: [file con estensione natvis](/visualstudio/debugger/create-custom-views-of-native-objects) da usare per il debug del processo. Questa opzione non è compatibile con la stampa di gdb. Impostare anche `showDisplayString` quando si imposta questa proprietà.

- `showDisplayString`: valore booleano che Abilita la stringa di visualizzazione quando viene specificata una `visualizerFile`. L'impostazione di questa opzione su `true` può causare un rallentamento delle prestazioni durante il debug.

- `setupCommands`: uno o più comandi gdb da eseguire per configurare il debugger sottostante.

- `externalConsole`: valore booleano che specifica se viene avviata una console per l'oggetto del debug.

- `miDebuggerPath`: il percorso completo di gdb. Quando non è specificato, Visual Studio cerca prima il percorso del debugger.

::: moniker-end

::: moniker range="vs-2017"

- `remoteMachineName`: il sistema Linux remoto che ospita gdb e il programma di cui eseguire il debug.

::: moniker-end

::: moniker range="vs-2019"

È possibile usare le proprietà seguenti per separare il **sistema di compilazione remota** dal **sistema di debug remoto**. Per ulteriori informazioni, vedere [specificare diversi computer per la compilazione e il debug](../linux/deploy-run-and-debug-your-linux-project.md#cmake-projects).

- `remoteMachineName`: il sistema Linux remoto che ospita gdb e il programma di cui eseguire il debug. Questa voce non deve corrispondere al sistema Linux remoto usato per la compilazione specificata in *CMakeSettings. JSON*. Premere **CTRL + barra spaziatrice** per visualizzare un elenco di tutte le connessioni remote archiviate nella [gestione connessione](../linux/connect-to-your-remote-linux-computer.md).

- `disableDeploy`: indica se la separazione di compilazione/debug è disabilitata. Se abilitata, questa funzionalità consente di eseguire la compilazione e il debug in due computer distinti.

- `deployDirectory`: la directory nel computer di debug remoto (specificato da `remoteMachineName`) in cui verrà copiato il file eseguibile.

- `deploy`: una matrice di impostazioni di distribuzione avanzate. È necessario configurare queste impostazioni solo quando si desidera un controllo più granulare sul processo di distribuzione. Per impostazione predefinita, nel computer di debug remoto vengono distribuiti solo i file necessari per il debug del processo.

  - `sourceMachine`: il computer da cui verrà copiato il file o la directory. Premere **CTRL + barra spaziatrice** per visualizzare un elenco di tutte le connessioni remote archiviate nella gestione connessione.

  - `targetMachine`: il computer in cui verrà copiato il file o la directory. Premere **CTRL + barra spaziatrice** per visualizzare un elenco di tutte le connessioni remote archiviate nella gestione connessione.

  - `sourcePath`: il percorso del file o della directory `sourceMachine`.

  - `targetPath`: il percorso del file o della directory `targetMachine`.

  - `deploymentType`: Descrizione del tipo di distribuzione. `LocalRemote` e `RemoteRemote` sono supportati. `LocalRemote` significa copiare dall'file system locale al sistema remoto specificato da `remoteMachineName` in *Launch. vs. JSON*. `RemoteRemote` significa copiare dal sistema di compilazione remoto specificato in *CMakeSettings. JSON* al sistema remoto diverso specificato in *Launch. vs. JSON*.

  - `executable`: indica se il file distribuito è un eseguibile.

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="attach-to-a-remote-process"></a>Connettersi a un processo remoto

È possibile connettersi a un processo in esecuzione nel sistema Linux impostando `processId` sull'ID del processo a cui connettersi il debugger. Per altre informazioni, vedere [risolvere i problemi di connessione ai processi usando GDB](https://github.com/Microsoft/MIEngine/wiki/Troubleshoot-attaching-to-processes-using-GDB).

::: moniker-end

::: moniker range="vs-2019"

## <a name="debug-on-linux-using-gdbserver"></a>Eseguire il debug in Linux usando gdbserver

Visual Studio 2019 versione 16,5 Preview 1 o versioni successive supporta il debug remoto dei progetti CMake con gdbserver. Per altre informazioni, vedere [debug di progetti CMake Linux con gdbserver](https://devblogs.microsoft.com/cppblog/debugging-linux-cmake-projects-with-gdbserver/).

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="see-also"></a>Vedere anche

[Progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md)\
[Configurare un progetto CMake per Linux](../linux/cmake-linux-project.md)\
[Connettersi al computer Linux remoto](../linux/connect-to-your-remote-linux-computer.md)\
[Personalizzare le impostazioni di compilazione cmake](customize-cmake-settings.md)\
[Configurare sessioni di debug cmake](configure-cmake-debugging-sessions.md)\
[Distribuire, eseguire ed eseguire il debug del progetto Linux](../linux/deploy-run-and-debug-your-linux-project.md)\
[Informazioni di riferimento sulle configurazioni predefinite CMake](cmake-predefined-configuration-reference.md)

::: moniker-end
