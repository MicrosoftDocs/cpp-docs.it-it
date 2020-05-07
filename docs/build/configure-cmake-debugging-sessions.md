---
title: Configurare le sessioni di debug di CMake in Visual Studio
description: Viene descritto come usare Visual Studio per configurare le impostazioni del debugger CMake.
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

Il supporto di CMake nativo è disponibile in Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end

::: moniker range=">=vs-2017"

Tutte le destinazioni CMake eseguibili sono visualizzate nell'elenco a discesa **Elemento di avvio** nella barra degli strumenti **Generale**. Selezionarne uno per avviare una sessione di debug e avviare il debugger.

![Elenco a discesa di elementi di avvio CMake](media/cmake-startup-item-dropdown.png "Elenco a discesa di elementi di avvio CMake")

È anche possibile avviare una sessione di debug da Esplora soluzioni. Per prima cosa, passare alla **visualizzazione destinazioni CMake** nella finestra **Esplora soluzioni** .

![Pulsante Visualizzazione destinazioni CMake](media/cmake-targets-view.png  "Voce di menu visualizzazione destinazioni CMake")

Quindi, fare clic con il pulsante destro del mouse su un eseguibile e scegliere **debug**. Questo comando avvia automaticamente il debug della destinazione selezionata in base alla configurazione attiva.

## <a name="customize-debugger-settings"></a>Personalizzare le impostazioni del debugger

È possibile personalizzare le impostazioni del debugger per qualsiasi destinazione CMake eseguibile nel progetto. Si trovano in un file di configurazione denominato *Launch. vs. JSON*, che si trova *`.vs`* in una cartella nella radice del progetto. Un file di configurazione di avvio è utile nella maggior parte degli scenari di debug, perché è possibile configurare e salvare i dettagli di configurazione del debug. Il file contiene tre punti di ingresso:

- **Menu debug:** Selezionare **debug > debug e avviare le impostazioni per $ {activeDebugTarget}** dal menu principale per personalizzare la configurazione di debug specifica per la destinazione di debug attiva. Se la destinazione di debug non è selezionata, questa opzione è disabilitata.

![Punto di ingresso del menu debug](media/cmake-debug-menu.png "Punto di ingresso del menu debug")

- **Visualizzazione destinazioni:** Passare alla **visualizzazione destinazioni** in Esplora soluzioni. Quindi, fare clic con il pulsante destro del mouse su una destinazione di debug e scegliere **Aggiungi configurazione di debug** per personalizzare la configurazione di debug specifica per la destinazione selezionata.

![Punto di ingresso visualizzazione destinazioni](media/cmake-targets-add-debug-configuration.png "Punto di ingresso visualizzazione destinazioni")

- **Radice CMakeLists. txt:** Fare clic con il pulsante destro del mouse su una radice *CMakeLists. txt* e selezionare **Aggiungi configurazione di debug** per aprire la finestra di dialogo **Seleziona un debugger** . La finestra di dialogo consente di aggiungere *qualsiasi* tipo di configurazione di debug, ma è necessario specificare manualmente la destinazione CMake da richiamare `projectTarget` tramite la proprietà.

![Finestra di dialogo Seleziona debugger](media/cmake-select-a-debugger.png "Finestra di dialogo Seleziona debugger")

È possibile modificare il file *Launch. vs. JSON* per creare configurazioni di debug per qualsiasi numero di destinazioni CMake. Quando si salva il file, Visual Studio crea una voce per ogni nuova configurazione nell'elenco a discesa **elemento di avvio** .

## <a name="reference-keys-in-cmakesettingsjson"></a>Chiavi di riferimento in CMakeSettings. JSON

Per fare riferimento a qualsiasi chiave in un file *CMakeSettings. JSON* , anteporvi `cmake.` in *Launch. vs. JSON*. Nell'esempio seguente viene illustrato un semplice file *Launch. vs. JSON* che esegue il pull del valore della `remoteCopySources` chiave nel file *CMakeSettings. JSON* per la configurazione attualmente selezionata:

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

Le **variabili di ambiente** definite in *CMakeSettings. JSON* possono anche essere usate in Launch. vs. JSON usando `${env.VARIABLE_NAME}`la sintassi. In Visual Studio 2019 versione 16,4 e successive, le destinazioni di debug vengono avviate automaticamente usando l'ambiente specificato in *CMakeSettings. JSON*. È possibile annullare una variabile di ambiente impostando il **valore su null**.

## <a name="launchvsjson-reference"></a>Riferimento a Launch. vs. JSON

Sono disponibili molte proprietà *Launch. vs. JSON* per supportare tutti gli scenari di debug. Le proprietà seguenti sono comuni a tutte le configurazioni di debug, sia remote che locali:

- `projectTarget`: Specifica la destinazione CMake da richiamare durante la compilazione del progetto. Questa proprietà viene popolata automaticamente da Visual Studio se si immette *Launch. vs. JSON* dal **menu debug** o dalla **visualizzazione destinazioni**. Questo valore deve corrispondere al nome di una destinazione di debug esistente elencata nell'elenco a discesa **elemento di avvio** .

- `env`: Variabili di ambiente aggiuntive da aggiungere usando la sintassi:

  ```json
  "env": {
        "DEBUG_LOGGING_LEVEL": "trace;info",
        "ENABLE_TRACING": "true"
      }
  ```

- `args`: Argomenti della riga di comando passati al programma di cui eseguire il debug.

## <a name="launchvsjson-reference-for-remote-projects-and-wsl"></a>Guida di riferimento a Launch. vs. JSON per i progetti remoti e WSL

In Visual Studio 2019 versione 16,6 è stata aggiunta una nuova configurazione di debug `type: cppgdb` di per semplificare il debug su sistemi remoti e WSL. Le configurazioni di debug `type: cppdbg` precedenti di sono ancora supportate.

### <a name="configuration-type-cppgdb"></a>Tipo di configurazione`cppgdb`

- `name`: Nome descrittivo per identificare la configurazione nell'elenco a discesa degli **elementi di avvio** .
- `project`: Specifica il percorso relativo del file di progetto. In genere, non è necessario modificare questo percorso durante il debug di un progetto CMake.
- `projectTarget`: Specifica la destinazione CMake da richiamare durante la compilazione del progetto. Questa proprietà viene popolata automaticamente da Visual Studio se si immette *Launch. vs. JSON* dal **menu debug** o dalla **visualizzazione destinazioni**. Il valore di destinazione deve corrispondere al nome di una destinazione di debug esistente elencata nell'elenco a discesa **elemento di avvio** .
- `debuggerConfiguration`: Indica il set di valori predefiniti di debug da utilizzare. In Visual Studio 2019 versione 16,6, l'unica opzione valida è `gdb`. Le versioni precedenti supportano `gdbserver`anche.
- `args`: Argomenti della riga di comando passati all'avvio al programma di cui è in corso il debug.
- `env`: Variabili di ambiente aggiuntive passate al programma di cui è in corso il debug. Ad esempio, `{"DISPLAY": "0.0"}`
- `processID`: ID del processo Linux a cui connettersi. Utilizzato solo quando si esegue la connessione a un processo remoto. Per altre informazioni, vedere [risolvere i problemi di connessione ai processi usando GDB](https://github.com/Microsoft/MIEngine/wiki/Troubleshoot-attaching-to-processes-using-GDB).

#### <a name="additional-options-for-the-gdb-configuration"></a>Opzioni aggiuntive per la `gdb` configurazione

- `program`: Il valore predefinito `"${debugInfo.fullTargetPath}"`è. Percorso UNIX dell'applicazione di cui eseguire il debug. Obbligatorio solo se diverso dall'eseguibile di destinazione nel percorso di compilazione o di distribuzione.
- `remoteMachineName`: Il valore predefinito `"${debugInfo.remoteMachineName}"`è. Nome del sistema remoto che ospita il programma di cui eseguire il debug. Obbligatorio solo se diverso dal sistema di compilazione. Deve disporre di una voce esistente nella [gestione connessione](../linux/connect-to-your-remote-linux-computer.md). Premere **CTRL + barra spaziatrice** per visualizzare un elenco di tutte le connessioni remote esistenti.
- `cwd`: Il valore predefinito `"${debugInfo.defaultWorkingDirectory}"`è. Percorso UNIX della directory nel sistema remoto in cui `program` viene eseguito. La directory deve esistere.
- `gdbpath`: Il valore predefinito `/usr/bin/gdb`è. Percorso UNIX completo dell'oggetto `gdb` usato per eseguire il debug. Obbligatorio solo se si usa una versione personalizzata `gdb`di.
- `preDebugCommand`: Comando di Linux da eseguire immediatamente prima di richiamare `gdb`. `gdb`non viene avviato fino al completamento del comando. È possibile utilizzare l'opzione per eseguire uno script prima dell'esecuzione di `gdb`.

#### <a name="deployment-options"></a>Opzioni di distribuzione

Usare le opzioni seguenti per separare il computer di compilazione (definito in CMakeSettings. Json) dal computer di debug remoto.

- `remoteMachineName`: Computer di debug remoto. Obbligatorio solo se diverso dal computer di compilazione. Deve disporre di una voce esistente nella [gestione connessione](../linux/connect-to-your-remote-linux-computer.md). Premere **CTRL + barra spaziatrice** per visualizzare un elenco di tutte le connessioni remote esistenti.
- `disableDeploy`: Il valore predefinito `false`è. Indica se la separazione di compilazione/debug è disabilitata. Quando `false`questa opzione consente la compilazione e il debug in due computer distinti.
- `deployDirectory`: Percorso UNIX completo della directory in `remoteMachineName` cui viene copiato il file eseguibile.
- `deploy`: Matrice di impostazioni di distribuzione avanzate. È necessario configurare queste impostazioni solo quando si desidera un controllo più granulare sul processo di distribuzione. Per impostazione predefinita, solo i file necessari per il debug del processo vengono distribuiti nel computer di debug remoto.
  - `sourceMachine`: Il computer da cui viene copiato il file o la directory. Premere **CTRL + barra spaziatrice** per visualizzare un elenco di tutte le connessioni remote archiviate nella gestione connessione. Quando si compila in modo nativo in WSL, questa opzione viene ignorata.
  - `targetMachine`: Il computer in cui viene copiato il file o la directory. Premere **CTRL + barra spaziatrice** per visualizzare un elenco di tutte le connessioni remote archiviate nella gestione connessione.
  - `sourcePath`: Percorso del file o della directory `sourceMachine`in.
  - `targetPath`: Percorso del file o della directory `targetMachine`in.
  - `deploymentType`: Descrizione del tipo di distribuzione. `LocalRemote`e `RemoteRemote` sono supportati. `LocalRemote`indica la copia dal file system locale al sistema remoto specificato da `remoteMachineName` in *Launch. vs. JSON*. `RemoteRemote`indica la copia dal sistema di compilazione remoto specificato in *CMakeSettings. JSON* al sistema remoto specificato in *Launch. vs. JSON*.
  - `executable`: Indica se il file distribuito è un eseguibile.

### <a name="execute-custom-gdb-commands"></a>Eseguire comandi `gdb` personalizzati

Visual Studio supporta l'esecuzione di `gdb` comandi personalizzati per interagire direttamente con il debugger sottostante. Per altre informazioni, vedere [esecuzione di comandi `gdb` LLDB personalizzati](https://github.com/microsoft/MIEngine/wiki/Executing-custom-gdb-lldb-commands).

### <a name="enable-logging"></a>Abilitazione della registrazione

Abilitare la registrazione MIEngine per visualizzare i comandi inviati a `gdb`, l'output `gdb` restituito e il tempo necessario per ogni comando. [Altre informazioni](https://github.com/microsoft/MIEngine/wiki/Logging)

### <a name="configuration-type-cppdbg"></a>Tipo di configurazione`cppdbg`

È possibile usare le opzioni seguenti durante il debug in un sistema remoto o WSL usando `cppdbg` il tipo di configurazione. In Visual Studio 2019 versione 16,6 o successiva è consigliato il `cppgdb` tipo di configurazione.

- `name`: Nome descrittivo per identificare la configurazione nell'elenco a discesa degli **elementi di avvio** .

- `project`: Specifica il percorso relativo del file di progetto. In genere, non è necessario modificare questo valore quando si esegue il debug di un progetto CMake.

- `projectTarget`: Specifica la destinazione CMake da richiamare durante la compilazione del progetto. Questa proprietà viene popolata automaticamente da Visual Studio se si immette *Launch. vs. JSON* dal **menu debug** o dalla **visualizzazione destinazioni**. Questo valore deve corrispondere al nome di una destinazione di debug esistente elencata nell'elenco a discesa **elemento di avvio** .

- `args`: Argomenti della riga di comando passati all'avvio al programma di cui è in corso il debug.

- `processID`: ID del processo Linux a cui connettersi. Utilizzato solo quando si esegue la connessione a un processo remoto. Per altre informazioni, vedere [risolvere i problemi di connessione ai processi usando GDB](https://github.com/Microsoft/MIEngine/wiki/Troubleshoot-attaching-to-processes-using-GDB).

- `program`: Il valore predefinito `"${debugInfo.fullTargetPath}"`è. Percorso UNIX dell'applicazione di cui eseguire il debug. Obbligatorio solo se diverso dall'eseguibile di destinazione nel percorso di compilazione o di distribuzione.

- `remoteMachineName`: Il valore predefinito `"${debugInfo.remoteMachineName}"`è. Nome del sistema remoto che ospita il programma di cui eseguire il debug. Obbligatorio solo se diverso dal sistema di compilazione. Deve disporre di una voce esistente nella [gestione connessione](../linux/connect-to-your-remote-linux-computer.md). Premere **CTRL + barra spaziatrice** per visualizzare un elenco di tutte le connessioni remote esistenti.

- `cwd`: Il valore predefinito `"${debugInfo.defaultWorkingDirectory}"`è. Percorso UNIX completo della directory nel sistema remoto in cui `program` viene eseguito. La directory deve esistere.

- `environment`: Variabili di ambiente aggiuntive passate al programma di cui è in corso il debug. Ad esempio,

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

- `pipeArgs`: Matrice di argomenti della riga di comando passati al programma pipe per configurare la connessione. Il programma pipe viene usato per inoltrare input/output standard tra Visual Studio `gdb`e. La maggior parte di questa matrice **non deve essere personalizzata** quando si esegue il debug di progetti CMake. L'eccezione è `${debuggerCommand}`, che viene avviata `gdb` nel sistema remoto. Può essere modificato in:

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

  - Eseguire uno script prima dell'esecuzione di `gdb`. Verificare che le autorizzazioni Execute siano impostate per lo script.

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

- `stopOnEntry`: Valore booleano che specifica se interrompere non appena viene avviato il processo. Il valore predefinito è false.

- `visualizerFile`: [File con estensione natvis](/visualstudio/debugger/create-custom-views-of-native-objects) da usare per il debug del processo. Questa opzione non è compatibile con `gdb` una stampa abbastanza semplice. Impostare `showDisplayString` anche quando si imposta questa proprietà.

- `showDisplayString`: Valore booleano che Abilita la stringa di visualizzazione `visualizerFile` quando viene specificato un oggetto. L'impostazione di questa `true` opzione su può causare un rallentamento delle prestazioni durante il debug.

- `setupCommands`: Uno o più `gdb` comandi da eseguire per impostare il debugger sottostante.

- `miDebuggerPath`: Percorso completo di `gdb`. Quando non è specificato, Visual Studio cerca prima il percorso del debugger.

- Infine, tutte le opzioni di distribuzione definite per il `cppgdb` tipo di configurazione possono essere utilizzate anche `cppdbg` dal tipo di configurazione.

### <a name="debug-using-gdbserver"></a>Debug con`gdbserver`

È possibile configurare la `cppdbg` configurazione per eseguire il `gdbserver`debug usando. Per ulteriori informazioni e una configurazione di avvio di esempio, vedere il post di Blog del team di Microsoft C++ [debug di `gdbserver`progetti CMake Linux con ](https://devblogs.microsoft.com/cppblog/debugging-linux-cmake-projects-with-gdbserver/).

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="see-also"></a>Vedere anche

[Progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md)\
[Configurare un progetto CMake per Linux](../linux/cmake-linux-project.md)\
[Connettersi al computer Linux remoto](../linux/connect-to-your-remote-linux-computer.md)\
[Personalizzare le impostazioni di compilazione CMake](customize-cmake-settings.md)\
[Configurare sessioni di debug CMake](configure-cmake-debugging-sessions.md)\
[Distribuire, eseguire ed eseguire il debug del progetto Linux](../linux/deploy-run-and-debug-your-linux-project.md)\
[Informazioni di riferimento sulle configurazioni predefinite CMake](cmake-predefined-configuration-reference.md)

::: moniker-end
