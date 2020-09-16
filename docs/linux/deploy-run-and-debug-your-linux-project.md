---
title: Distribuire, eseguire ed eseguire il debug del progetto C++ MSBuild per Linux in Visual Studio
description: Viene descritto come compilare, eseguire ed eseguire il debug del codice nella destinazione remota da un progetto C++ Linux basato su MSBuild in Visual Studio.
ms.date: 08/08/2020
ms.assetid: f7084cdb-17b1-4960-b522-f84981bea879
ms.openlocfilehash: 4200e30b445f4a09fc60083db0067996c96ea953
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90686704"
---
# <a name="deploy-run-and-debug-your-linux-msbuild-project"></a>Distribuire, eseguire ed eseguire il debug del progetto MSBuild Linux

::: moniker range="vs-2015"
Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare **l'elenco a discesa delle versioni posizionato** sopra il sommario per **Visual Studio 2017** o **Visual Studio 2019**.
::: moniker-end

Dopo aver creato un progetto C++ Linux basato su MSBuild in Visual Studio e aver effettuato la connessione al progetto tramite la [gestione connessione Linux](connect-to-your-remote-linux-computer.md), è possibile eseguire il progetto ed eseguirne il debug. Si compila, si esegue e si sottopone a debug il codice nella destinazione remota.

::: moniker range="vs-2019"

**Visual Studio 2019 versione 16.1**: è possibile usare diversi sistemi Linux per il debug e la compilazione. È ad esempio possibile eseguire la compilazione su un sistema x64 e distribuire in un dispositivo ARM quando si usano scenari IoT come destinazione. Per altre informazioni, vedere [Specificare computer diversi per la compilazione e il debug](#separate_build_debug) più avanti in questo articolo.

::: moniker-end

Esistono diversi modi di interagire con il progetto Linux ed eseguirne il debug.

- Eseguire il debug usando le tradizionali funzionalità di Visual Studio, ad esempio punti di interruzione, finestre Espressioni di controllo e passaggio del puntatore su una variabile. Usando questi metodi, è possibile eseguire il debug nel modo consueto, come per gli altri tipi di progetto.

- Visualizzare l'output dal computer di destinazione nella finestra della console di Linux. È anche possibile usare la console per inviare l'input al computer di destinazione.

## <a name="debug-your-linux-project"></a>Eseguire il debug del progetto Linux

1. Selezionare la modalità di debug nella pagina delle proprietà **Debug**.

   ::: moniker range="vs-2019"

   Per il debug delle applicazioni in esecuzione su Linux viene usato GDB. Quando si esegue il debug in un sistema remoto (non WSL), è possibile eseguire GDB in due modi diversi selezionabili dall'opzione **Modalità di debug** nella pagina delle proprietà **Debug** del progetto:

   ![Screenshot della finestra di dialogo Pagine delle proprietà dell'app console Linux di Visual Studio 2019 con proprietà di configurazione > debug selezionato e la modalità di debug evidenziate con G B D selezionato ed evidenziato dall'elenco a discesa.](media/vs2019-debugger-settings.png)

   ::: moniker-end

   ::: moniker range="vs-2017"

   Per il debug delle applicazioni in esecuzione su Linux viene usato GDB. È possibile eseguire GDB in due modalità diverse, selezionabili dall'opzione **Modalità di debug** nella pagina delle proprietà di **debug** del progetto:

   ![Screenshot della finestra di dialogo Pagine delle proprietà dell'app console Linux di Visual Studio 2017 con proprietà di configurazione > debug selezionato e la modalità di debug evidenziate con G B D selezionato ed evidenziato dall'elenco a discesa.](media/vs2017-debugger-settings.png)

   ::: moniker-end

   - In modalità **gdbserver**, GDB viene eseguito in locale e si connette a gdbserver nel sistema remoto.

   - In modalità **gdb**, GDB viene guidato nel sistema remoto dal debugger di Visual Studio. Si tratta di un'opzione migliore se la versione locale di GDB non è compatibile con la versione installata nel computer di destinazione. Questa è l'unica modalità supportata dalla finestra della console Linux.

   > [!NOTE]
   > Se non è possibile raggiungere i punti di interruzione in modalità di debug gdbserver, provare la modalità gdb. gdb deve prima essere [installato](download-install-and-setup-the-linux-development-workload.md) nella destinazione remota.

1. Selezionare la destinazione remota usando la barra degli strumenti standard **Debug** in Visual Studio.

   Quando la destinazione remota è disponibile, l'elenco verrà visualizzato in base al nome o all'indirizzo IP.

   ![Destinazione remota](media/remote_target.png)

   Se non si è ancora connessi alla destinazione remota, verrà visualizzata un'istruzione per usare [gestione connessione Linux](connect-to-your-remote-linux-computer.md) per connettersi alla destinazione remota.

   ![Architettura remota](media/architecture.png)

1. Impostare un punto di interruzione facendo clic nella barra di navigazione a sinistra di un codice che verrà sicuramente eseguito.

   Un punto rosso viene visualizzato nella riga di codice in cui è stato impostato il punto di interruzione.

1. Premere **F5** (o **Debug > Avvia debug**) per avviare il debug.

   Quando si avvia il debug, l'applicazione viene compilata nella destinazione remota prima che venga avviata. Gli eventuali errori di compilazione verranno visualizzati nella finestra **Elenco errori**.

   Se non sono presenti errori, l'app verrà avviata e il debugger verrà sospeso in corrispondenza del punto di interruzione.

   ![Raggiungere un punto di interruzione](media/hit_breakpoint.png)

   È ora possibile interagire con l'applicazione nello stato corrente, visualizzare le variabili ed eseguire il codice un'istruzione alla volta premendo i tasti di comando, ad esempio **F10** o **F11**.

1. Per usare la console Linux per interagire con l'app, selezionare **Debug > Console Linux**.

   ![Menu della console di Linux](media/consolemenu.png)

   Questa console visualizzerà qualsiasi output della console dal computer di destinazione e prenderà l'input e lo invierà al computer di destinazione.

   ![Finestra della console di Linux](media/consolewindow.png)

## <a name="configure-other-debugging-options-msbuild-projects"></a>Configurare altre opzioni di debug (progetti MSBuild)

- Gli argomenti della riga di comando possono essere passati all'eseguibile usando l'elemento **Argomenti del programma** nella pagina delle proprietà di **debug** del progetto.
- È possibile esportare la `DISPLAY` variabile di ambiente usando il **comando di pre-avvio** nelle pagine delle proprietà di**debug** del progetto. ad esempio `export DISPLAY=:0.0`

   ![Argomenti del programma](media/settings_programarguments.png)

- Le opzioni specifiche del debugger possono essere passate a GDB usando la voce **Comandi aggiuntivi del debugger**.  Può essere utile ad esempio ignorare i segnali SIGILL (istruzione non valida).  Per ottenere questo risultato, è possibile usare il comando **handle**, aggiungendo quanto segue alla voce **Comandi aggiuntivi del debugger** come illustrato in precedenza:

   `handle SIGILL nostop noprint`

## <a name="debug-with-attach-to-process"></a>Debug con Associa a processo

La pagina delle proprietà [Debug](prop-pages/debugging-linux.md) per i progetti di Visual Studio e le impostazioni **Launch.vs.json** per progetti CMake offrono impostazioni che consentono di creare un'associazione a un processo in esecuzione. Se è necessario aumentare il controllo oltre a quello che queste impostazioni offrono, è possibile inserire un file denominato `Microsoft.MIEngine.Options.xml` nella radice della soluzione o dell'area di lavoro. Di seguito è riportato un semplice esempio:

```xml
<?xml version="1.0" encoding="utf-8"?>
<SupplementalLaunchOptions>
    <AttachOptions>
      <AttachOptionsForConnection AdditionalSOLibSearchPath="/home/user/solibs">
        <ServerOptions MIDebuggerPath="C:\Program Files (x86)\Microsoft Visual Studio\Preview\Enterprise\Common7\IDE\VC\Linux\bin\gdb\7.9\x86_64-linux-gnu-gdb.exe"
ExePath="C:\temp\ConsoleApplication17\ConsoleApplication17\bin\x64\Debug\ConsoleApplication17.out"/>
        <SetupCommands>
          <Command IgnoreFailures="true">-enable-pretty-printing</Command>
        </SetupCommands>
      </AttachOptionsForConnection>
    </AttachOptions>
</SupplementalLaunchOptions>
```

L'elemento **AttachOptionsForConnection** include la maggior parte degli attributi che potrebbero essere necessari. L'esempio sopra riportato spiega come specificare una posizione in cui cercare librerie aggiuntive con estensione so. L'elemento figlio **ServerOptions** consente di creare un'associazione al processo remoto usando invece la modalità gdbserver. A tale scopo, è necessario specificare un client GDB locale (quello fornito in Visual Studio 2017 è riportato sopra) e una copia locale del file binario con simboli. L'elemento **SetupCommands** consente di passare i comandi direttamente a gdb. È possibile trovare tutte le opzioni disponibili nello [schema LaunchOptions.xsd](https://github.com/Microsoft/MIEngine/blob/master/src/MICore/LaunchOptions.xsd) su GitHub.

::: moniker range="vs-2019"

## <a name="specify-different-machines-for-building-and-debugging-in-msbuild-based-linux-projects"></a><a name="separate_build_debug"></a> Specificare computer diversi per la compilazione e il debug in progetti Linux basati su MSBuild

In Visual Studio 2019 versione 16,1 è possibile separare il computer di compilazione remota dal computer di debug remoto per i progetti Linux basati su MSBuild e i progetti CMake destinati a un computer Linux remoto. Ad esempio, è ora possibile eseguire la compilazione su un sistema x64 e distribuire in un dispositivo ARM, quando si usano scenari IoT come destinazione.

Per impostazione predefinita, il computer di debug remoto è lo stesso del computer di compilazione remoto (**proprietà di configurazione**  >  **generale**  >  **computer di compilazione remota**). Per specificare un nuovo computer di debug remoto, fare clic con il pulsante destro del mouse sul progetto in **Esplora soluzioni** e passare a **Proprietà di configurazione** > **Debug** > **Computer di debug remoto**.  

![Computer di debug remoto Linux](media/linux-remote-debug-machine.png)

Il menu a discesa per **Computer di debug remoto** è popolato con tutte le connessioni remote stabilite. Per aggiungere una nuova connessione remota, passare a **strumenti**  >  **Opzioni**  >  **Cross Platform**  >  **gestione connessione** multipiattaforma oppure cercare "gestione connessione" in **avvio veloce**. È anche possibile specificare una nuova directory di distribuzione remota nelle pagine delle proprietà del progetto (**proprietà di configurazione**  >  **generale**  >  **directory di distribuzione remota**).

Per impostazione predefinita, nel computer di debug remoto vengono distribuiti solo i file necessari per il debug del processo. È possibile usare **Esplora soluzioni** per configurare i file di origine da distribuire nel computer di debug remoto. Quando si fa clic su un file di origine, viene visualizzata un'anteprima delle proprietà dei file direttamente sotto la Esplora soluzioni.

![File distribuibili Linux](media/linux-deployable-content.png)

La proprietà **Content** specifica se il file verrà distribuito nel computer di debug remoto. È possibile disabilitare completamente la distribuzione passando alle **pagine delle proprietà**  >  **Configuration Manager** e deselezionando **Distribuisci** per la configurazione desiderata.

In alcuni casi, potrebbe essere necessario un maggiore controllo sulla distribuzione del progetto. Ad esempio, alcuni file che si desidera distribuire potrebbero essere esterni alla soluzione oppure personalizzare la directory di distribuzione remota per ogni file o directory. In questi casi, aggiungere uno o più blocchi di codice seguenti al file con estensione vcxproj e sostituire "example.cpp" con i nomi dei file:

```xml

<ItemGroup>
   <RemoteDeploy Include="__example.cpp">
<!-- This is the source Linux machine, can be empty if DeploymentType is LocalRemote -->
      <SourceMachine>$(RemoteTarget)</SourceMachine>
      <TargetMachine>$(RemoteDebuggingTarget)</TargetMachine>
      <SourcePath>~/example.cpp</SourcePath>
      <TargetPath>~/example.cpp</TargetPath>
<!-- DeploymentType can be LocalRemote, in which case SourceMachine will be empty and SourcePath is a local file on Windows -->
      <DeploymentType>RemoteRemote</DeploymentType>
<!-- Indicates whether the deployment contains executables -->
      <Executable>true</Executable>
   </RemoteDeploy>
</ItemGroup>
```

### <a name="cmake-projects"></a>Progetti CMake

Per i progetti CMake destinati a un computer Linux remoto, è possibile specificare un nuovo computer di debug remoto in launch.vs.json. Per impostazione predefinita, il valore di "remoteMachineName" viene sincronizzato con la proprietà "remoteMachineName" in CMakeSettings.json, che corrisponde al computer di compilazione remota. Queste proprietà non devono più corrispondere e il valore di "remoteMachineName" in launch.vs.json determineranno quale computer remoto viene usato per la distribuzione e il debug.

![Computer di debug remoto CMake](media/cmake-remote-debug-machine.png)

IntelliSense suggerisce un elenco di tutte le connessioni remote stabilite. È possibile aggiungere una nuova connessione remota passando a **strumenti**  >  **Opzioni**  >  **Cross Platform**  >  **gestione connessione** multipiattaforma oppure cercando "gestione connessione" in **avvio veloce**.

Se si vuole un controllo completo sulla distribuzione, è possibile aggiungere uno o più blocchi di codice seguenti al file launch.vs.json. Ricordarsi di sostituire i valori dei segnaposto con i valori reali:

```json
"disableDeploy": false,
"deployDirectory": "~\foo",
"deploy" : [
   {
      "sourceMachine": "127.0.0.1 (username=example1, port=22, authentication=Password)",
      "targetMachine": "192.0.0.1 (username=example2, port=22, authentication=Password)",
      "sourcePath": "~/example.cpp",
      "targetPath": "~/example.cpp",
      "executable": "false"
   }
]
```

::: moniker-end

## <a name="next-steps"></a>Passaggi successivi

- Per eseguire il debug di dispositivi ARM in Linux, vedere questo post di blog relativo al [debug di un dispositivo ARM incorporato in Visual Studio](https://devblogs.microsoft.com/cppblog/debugging-an-embedded-arm-device-in-visual-studio/).

## <a name="see-also"></a>Vedere anche

[Proprietà di debug C++ (Linux C++)](prop-pages/debugging-linux.md)
