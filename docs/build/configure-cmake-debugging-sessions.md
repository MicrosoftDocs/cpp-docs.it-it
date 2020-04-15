---
title: Configurare le sessioni di debug di CMake in Visual Studio
description: Viene descritto come utilizzare Visual Studio per configurare le impostazioni del debugger di CMake.
ms.date: 04/02/2020
helpviewer_keywords:
- CMake debugging
ms.openlocfilehash: 8364e5b3dd3316a4ed7e754a104a14373040aa6e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328832"
---
# <a name="configure-cmake-debugging-sessions"></a>Configurare le sessioni di debug di CMake

::: moniker range="vs-2015"

Il supporto nativo di CMake è disponibile in Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end

::: moniker range=">=vs-2017"

Tutte le destinazioni CMake eseguibili sono visualizzate nell'elenco a discesa **Elemento di avvio** nella barra degli strumenti **Generale**. Selezionarne uno per avviare una sessione di debug e avviare il debugger.

![Elenco a discesa Dell'elemento di avvio CMake](media/cmake-startup-item-dropdown.png "Elenco a discesa Dell'elemento di avvio CMake")

È anche possibile avviare una sessione di debug da Esplora soluzioni. In primo luogo, passare alla **visualizzazione destinazioni CMake** nella finestra **Esplora soluzioni.**

![Pulsante Visualizzazione destinazioni CMake](media/cmake-targets-view.png  "Voce di menu Vista Destinazioni C")

Quindi, fare clic con il pulsante destro del mouse su un eseguibile e selezionare **Debug**. Questo comando avvia automaticamente il debug della destinazione selezionata in base alla configurazione attiva.

## <a name="customize-debugger-settings"></a>Personalizzare le impostazioni del debugger

È possibile personalizzare le impostazioni del debugger per qualsiasi destinazione eseguibile CMake nel progetto. Si trovano in un file di configurazione denominato *launch.vs.json*, che si trova in una *`.vs`* cartella nella radice del progetto. Un file di configurazione di avvio è utile nella maggior parte degli scenari di debug, perché è possibile configurare e salvare i dettagli dell'installazione di debug. Ci sono tre punti di ingresso a questo file:

- **Menu Debug:** Selezionare Debug > Debug e Avvia impostazioni per il valore di debug **activeDebugTarget** dal menu principale per personalizzare la configurazione di debug specifica per la destinazione di debug attiva. Se non è selezionata una destinazione di debug, questa opzione è disattivata.

![Punto di ingresso del menu Debug](media/cmake-debug-menu.png "Punto di ingresso del menu Debug")

- **Visualizzazione Destinazioni:** Passare a **Visualizzazione destinazioni** in Esplora soluzioni. Quindi, fare clic con il pulsante destro del mouse su una destinazione di debug e selezionare Aggiungi configurazione di **debug** per personalizzare la configurazione di debug specifica per la destinazione selezionata.

![Punto di ingresso della vista Destinazioni](media/cmake-targets-add-debug-configuration.png "Punto di ingresso della vista Destinazioni")

- **Radice CMakeLists.txt:** Fare clic con il pulsante destro del mouse su un *file CMakeLists.txt* radice e selezionare **Aggiungi configurazione** di debug per aprire la finestra di dialogo **Seleziona debugger.** La finestra di dialogo consente di aggiungere *qualsiasi* tipo di configurazione di `projectTarget` debug, ma è necessario specificare manualmente la destinazione CMake da richiamare tramite la proprietà.

![Finestra di dialogo Seleziona debugger](media/cmake-select-a-debugger.png "Finestra di dialogo Seleziona debugger")

È possibile modificare il file launch.vs.json per creare configurazioni di debug per un numero qualsiasi di destinazioni CMake.You can edit the *launch.vs.json* file to create debug configurations for any number of CMake targets. Quando si salva il file, Visual Studio crea una voce per ogni nuova configurazione nell'elenco a discesa Elemento di **avvio.**

## <a name="reference-keys-in-cmakesettingsjson"></a>Chiavi di riferimento in CMakeSettings.jsonReference keys in CMakeSettings.json

Per fare riferimento a qualsiasi chiave in un `cmake.` file *CMakeSettings.json,* anteporre ad essa in *launch.vs.json*. L'esempio seguente mostra un semplice file *launch.vs.json* `remoteCopySources` che estrae il valore della chiave nel file *CMakeSettings.json* per la configurazione attualmente selezionata:

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

**Le variabili** di ambiente definite in *CMakeSettings.json* possono essere `${env.VARIABLE_NAME}`utilizzate anche in launch.vs.json utilizzando la sintassi . In Visual Studio 2019 versione 16.4 e successive, le destinazioni di debug vengono avviate automaticamente utilizzando l'ambiente specificato in *CMakeSettings.json*. È possibile annullare l'impostazione di una variabile di ambiente impostandola su **null**.

## <a name="launchvsjson-reference"></a>Informazioni di riferimento su Launch.vs.json

Esistono molte proprietà *launch.vs.json* per supportare tutti gli scenari di debug. Le proprietà seguenti sono comuni a tutte le configurazioni di debug, sia remote che locali:

- `projectTarget`: specifica la destinazione CMake da richiamare durante la compilazione del progetto. Visual Studio compila automaticamente questa proprietà se si immette *launch.vs.json* dal **menu di debug** o dalla visualizzazione **Destinazioni**. Questo valore deve corrispondere al nome di una destinazione di debug esistente elencato nell'elenco a discesa Elemento di **avvio.**

- `env`: variabili di ambiente aggiuntive da aggiungere utilizzando la sintassi:

  ```json
  "env": {
        "DEBUG_LOGGING_LEVEL": "trace;info",
        "ENABLE_TRACING": "true"
      }
  ```

- `args`: argomenti della riga di comando passati al programma di debug.

## <a name="launchvsjson-reference-for-remote-projects-and-wsl"></a>Informazioni di riferimento su Launch.vs.json per progetti remoti e WSL

In Visual Studio 2019 versione 16.6 è `type: cppgdb` stata aggiunta una nuova configurazione di debug per semplificare il debug nei sistemi remoti e WSL. Le configurazioni `type: cppdbg` di debug precedenti di sono ancora supportate.

### <a name="configuration-type-cppgdb"></a>Tipo di configurazione`cppgdb`

- `name`: nome descrittivo per identificare la configurazione nell'elenco a discesa Elemento di **avvio.**
- `project`: specifica il percorso relativo del file di progetto. In genere, non è necessario modificare questo percorso durante il debug di un progetto CMake.Normally, you don't need to change this path when debugging a CMake project.
- `projectTarget`: specifica la destinazione CMake da richiamare durante la compilazione del progetto. Visual Studio compila automaticamente questa proprietà se si immette *launch.vs.json* dal **menu di debug** o dalla visualizzazione **Destinazioni**. Questo valore di destinazione deve corrispondere al nome di una destinazione di debug esistente elencato nell'elenco a discesa Elemento di **avvio.**
- `debuggerConfiguration`: indica il set di valori predefiniti di debug da utilizzare. In Visual Studio 2019 versione 16.6, `gdb`l'unica opzione valida è . Le versioni `gdbserver`precedenti supportano anche .
- `args`: argomenti della riga di comando passati all'avvio al programma sottoposto a debug.
- `env`: variabili di ambiente aggiuntive passate al programma in fase di debug. Ad esempio: `{"DISPLAY": "0.0"}`.
- `processID`: ID processo Linux a cui connettersi. Utilizzato solo quando ci si connette a un processo remoto. Per ulteriori informazioni, consultate [Risolvere i problemi di connessione ai processi mediante GDB.](https://github.com/Microsoft/MIEngine/wiki/Troubleshoot-attaching-to-processes-using-GDB)

#### <a name="additional-options-for-the-gdb-configuration"></a>Opzioni aggiuntive `gdb` per la configurazione

- `program`: il `"${debugInfo.fullTargetPath}"`valore predefinito è . Il percorso Unix dell'applicazione di cui eseguire il debug. Obbligatorio solo se diverso dall'eseguibile di destinazione nel percorso di compilazione o distribuzione.
- `remoteMachineName`: il `"${debugInfo.remoteMachineName}"`valore predefinito è . Nome del sistema remoto che ospita il programma di cui eseguire il debug. Obbligatorio solo se diverso dal sistema di compilazione. Deve avere una voce esistente in [Connection Manager.](../linux/connect-to-your-remote-linux-computer.md) Premete **Ctrl-Spazio** per visualizzare un elenco di tutte le connessioni remote esistenti.
- `cwd`: il `"${debugInfo.defaultWorkingDirectory}"`valore predefinito è . Il percorso Unix della directory nel `program` sistema remoto in cui viene eseguito. La directory deve esistere.
- `gdbpath`: il `/usr/bin/gdb`valore predefinito è . Percorso Unix completo `gdb` utilizzato per eseguire il debug. Obbligatorio solo se si `gdb`utilizza una versione personalizzata di .
- `preDebugCommand`: comando Linux da eseguire `gdb`immediatamente prima di richiamare . `gdb`non si avvia fino al completamento del comando. È possibile utilizzare l'opzione per eseguire `gdb`uno script prima dell'esecuzione di .

#### <a name="deployment-options"></a>Opzioni di distribuzione

Utilizzare le opzioni seguenti per separare il computer di compilazione (definito in CMakeSettings.json) dal computer di debug remoto.

- `remoteMachineName`: computer di debug remoto. Obbligatorio solo se diverso dal computer di compilazione. Deve avere una voce esistente in [Connection Manager.](../linux/connect-to-your-remote-linux-computer.md) Premete **Ctrl-Spazio** per visualizzare un elenco di tutte le connessioni remote esistenti.
- `disableDeploy`: il `false`valore predefinito è . Indica se la separazione compilazione/debug è disabilitata. Quando `false`è possibile eseguire il debug di compilazione e debug su due computer separati.
- `deployDirectory`: percorso Unix completo `remoteMachineName` della directory in cui viene copiato l'eseguibile.
- `deploy`: una serie di impostazioni di distribuzione avanzate. È necessario configurare queste impostazioni solo quando si desidera un controllo più granulare sul processo di distribuzione. Per impostazione predefinita, solo i file necessari per il processo di debug vengono distribuiti nel computer di debug remoto.
  - `sourceMachine`: la macchina da cui viene copiato il file o la directory. Premete **Ctrl-Spazio** per visualizzare un elenco di tutte le connessioni remote archiviate in Connection Manager. Quando si compila in modo nativo in WSL, questa opzione viene ignorata.
  - `targetMachine`: la macchina in cui viene copiato il file o la directory. Premete **Ctrl-Spazio** per visualizzare un elenco di tutte le connessioni remote archiviate in Connection Manager.
  - `sourcePath`: il percorso del `sourceMachine`file o della directory su .
  - `targetPath`: il percorso del `targetMachine`file o della directory su .
  - `deploymentType`: descrizione del tipo di distribuzione. `LocalRemote`e `RemoteRemote` sono supportati. `LocalRemote`significa copia dal file system locale al `remoteMachineName` sistema remoto specificato da in *launch.vs.json*. `RemoteRemote`significa copia dal sistema di compilazione remoto specificato in *CMakeSettings.json* al sistema remoto diverso specificato in *launch.vs.json*.
  - `executable`: indica se il file distribuito è un eseguibile.

### <a name="execute-custom-gdb-commands"></a>Eseguire `gdb` comandi personalizzati

Visual Studio supporta l'esecuzione di comandi personalizzati `gdb` per interagire direttamente con il debugger sottostante. Per ulteriori informazioni, vedere [Esecuzione di comandi lldb personalizzati `gdb` ](https://github.com/microsoft/MIEngine/wiki/Executing-custom-gdb-lldb-commands).

### <a name="enable-logging"></a>Abilitazione della registrazione

Abilitare la registrazione MIEngine per `gdb`vedere `gdb` quali comandi vengono inviati a , l'output restituito e la durata di ogni comando. [Altre informazioni](https://github.com/microsoft/MIEngine/wiki/Logging)

### <a name="configuration-type-cppdbg"></a>Tipo di configurazione`cppdbg`

Le opzioni seguenti possono essere utilizzate durante il debug `cppdbg` in un sistema remoto o WSL utilizzando il tipo di configurazione. In Visual Studio 2019 versione 16.6 `cppgdb` o successiva è consigliabile il tipo di configurazione.

- `name`: nome descrittivo per identificare la configurazione nell'elenco a discesa Elemento di **avvio.**

- `project`: specifica il percorso relativo del file di progetto. In genere, non è necessario modificare questo valore durante il debug di un progetto CMake.In normally, you don't need to change this value when debugging a CMake project.

- `projectTarget`: specifica la destinazione CMake da richiamare durante la compilazione del progetto. Visual Studio compila automaticamente questa proprietà se si immette *launch.vs.json* dal **menu di debug** o dalla visualizzazione **Destinazioni**. Questo valore deve corrispondere al nome di una destinazione di debug esistente elencato nell'elenco a discesa Elemento di **avvio.**

- `args`: argomenti della riga di comando passati all'avvio al programma sottoposto a debug.

- `processID`: ID processo Linux a cui connettersi. Utilizzato solo quando ci si connette a un processo remoto. Per ulteriori informazioni, consultate [Risolvere i problemi di connessione ai processi mediante GDB.](https://github.com/Microsoft/MIEngine/wiki/Troubleshoot-attaching-to-processes-using-GDB)

- `program`: il `"${debugInfo.fullTargetPath}"`valore predefinito è . Il percorso Unix dell'applicazione di cui eseguire il debug. Obbligatorio solo se diverso dall'eseguibile di destinazione nel percorso di compilazione o distribuzione.

- `remoteMachineName`: il `"${debugInfo.remoteMachineName}"`valore predefinito è . Nome del sistema remoto che ospita il programma di cui eseguire il debug. Obbligatorio solo se diverso dal sistema di compilazione. Deve avere una voce esistente in [Connection Manager.](../linux/connect-to-your-remote-linux-computer.md) Premete **Ctrl-Spazio** per visualizzare un elenco di tutte le connessioni remote esistenti.

- `cwd`: il `"${debugInfo.defaultWorkingDirectory}"`valore predefinito è . Percorso Unix completo della directory nel `program` sistema remoto in cui viene eseguito. La directory deve esistere.

- `environment`: variabili di ambiente aggiuntive passate al programma in fase di debug. Ad esempio,

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

- `pipeArgs`: matrice di argomenti della riga di comando passati al programma pipe per configurare la connessione. Il programma pipe viene utilizzato per inoltrare `gdb`l'input/output standard tra Visual Studio e . La maggior parte di questa matrice **non deve essere personalizzata durante** il debug di progetti CMake. L'eccezione `${debuggerCommand}`è la `gdb` , che viene avviata nel sistema remoto. Può essere modificato per:

  - Esportare il valore della variabile di ambiente DISPLAY nel sistema Linux. Nell'esempio seguente, questo `:1`valore è .

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

  - Eseguire uno script prima `gdb`dell'esecuzione di . Assicurarsi che le autorizzazioni di esecuzione siano impostate sullo script.

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

- `stopOnEntry`: valore booleano che specifica se interrompere non appena il processo viene avviato. Il valore predefinito è false.

- `visualizerFile`: [file .natvis](/visualstudio/debugger/create-custom-views-of-native-objects) da utilizzare durante il debug di questo processo. Questa opzione non è `gdb` compatibile con la bella stampa. Impostato `showDisplayString` anche quando si imposta questa proprietà.

- `showDisplayString`: valore booleano che abilita `visualizerFile` la stringa di visualizzazione quando viene specificato un oggetto . L'impostazione `true` di questa opzione su può causare un miglioramento delle prestazioni durante il debug.

- `setupCommands`: uno `gdb` o più comandi da eseguire, per configurare il debugger sottostante.

- `miDebuggerPath`: il percorso `gdb`completo di . Se non specificato, Visual Studio cerca prima PATH per il debugger.

- Infine, tutte le opzioni di `cppgdb` distribuzione definite per `cppdbg` il tipo di configurazione possono essere utilizzate anche dal tipo di configurazione.

### <a name="debug-using-gdbserver"></a>Eseguire il debug utilizzando`gdbserver`

È possibile `cppdbg` configurare la `gdbserver`configurazione per il debug utilizzando . È possibile trovare ulteriori dettagli e una configurazione di avvio di esempio nel post di blog del team di Microsoft C, [Debug di progetti CMake Linux con `gdbserver` ](https://devblogs.microsoft.com/cppblog/debugging-linux-cmake-projects-with-gdbserver/).

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="see-also"></a>Vedere anche

[Progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md)\
[Configurare un progetto Linux CMake](../linux/cmake-linux-project.md)\
[Connettersi al computer Linux remoto](../linux/connect-to-your-remote-linux-computer.md)\
[Personalizzare le impostazioni di compilazione di CMakeCustomize CMake build settings](customize-cmake-settings.md)\
[Configurare le sessioni di debug di CMakeConfigure CMake debugging sessions](configure-cmake-debugging-sessions.md)\
[Distribuire, eseguire ed eseguire il debug del progetto LinuxDeploy, run, and debug your Linux project](../linux/deploy-run-and-debug-your-linux-project.md)\
[Informazioni di riferimento sulle configurazioni predefinite CMake](cmake-predefined-configuration-reference.md)

::: moniker-end
