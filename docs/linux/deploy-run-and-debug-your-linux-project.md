---
title: Distribuire, eseguire ed eseguire il debug del progetto Linux C++ in Visual Studio
description: Descrive come compilare, eseguire ed eseguire il debug del codice nella destinazione remota all'interno di un progetto Linux C++ in Visual Studio.
ms.date: 06/07/2019
ms.assetid: f7084cdb-17b1-4960-b522-f84981bea879
ms.openlocfilehash: 707915a502aafefee47af7e84b534e06ba678b3d
ms.sourcegitcommit: 8adabe177d557c74566c13145196c11cef5d10d4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/10/2019
ms.locfileid: "66821627"
---
# <a name="deploy-run-and-debug-your-linux-project"></a>Distribuire, eseguire e sottoporre a debug il progetto Linux

::: moniker range="vs-2015"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

Dopo avere creato un progetto Linux C++ in Visual Studio ed essersi connessi al progetto usando [Gestione connessione per Linux](connect-to-your-remote-linux-computer.md), è possibile eseguire il progetto ed eseguirne il debug. Si compila, si esegue e si sottopone a debug il codice nella destinazione remota.

::: moniker range="vs-2019"

**Visual Studio 2019 versione 16.1**: è possibile usare diversi sistemi Linux per il debug e la compilazione. Specificare il computer di compilazione nella pagina delle proprietà **Generale** e il computer di debug nella pagina delle proprietà **Debug**.

::: moniker-end

Esistono diversi modi di interagire con il progetto Linux ed eseguirne il debug.

- Eseguire il debug usando le tradizionali funzionalità di Visual Studio, ad esempio punti di interruzione, finestre Espressioni di controllo e passaggio del puntatore su una variabile. Usando questi metodi, è possibile eseguire il debug nel modo consueto, come per gli altri tipi di progetto.

- Visualizzare l'output dal computer di destinazione nella finestra della console di Linux. È anche possibile usare la console per inviare l'input al computer di destinazione.

## <a name="debug-your-linux-project"></a>Eseguire il debug del progetto Linux

1. Selezionare la modalità di debug nella pagina delle proprietà **Debug**.

   
   
   ::: moniker range="vs-2019"

   Per il debug delle applicazioni in esecuzione su Linux viene usato GDB. Quando si esegue il debug in un sistema remoto (non WSL), è possibile eseguire GDB in due modi diversi selezionabili dall'opzione **Modalità di debug** nella pagina delle proprietà **Debug** del progetto:

   ![Opzioni GDB](media/vs2019-debugger-settings.png)

   ::: moniker-end

   ::: moniker range="vs-2017"

   Per il debug delle applicazioni in esecuzione su Linux viene usato GDB. È possibile eseguire GDB in due modalità diverse, selezionabili dall'opzione **Modalità di debug** nella pagina delle proprietà di **debug** del progetto:

   ![Opzioni GDB](media/vs2017-debugger-settings.png)

   ::: moniker-end


   - In modalità **gdbserver**, GDB viene eseguito in locale e si connette a gdbserver nel sistema remoto.  Si noti che questa è l'unica modalità supportata dalla finestra della console di Linux.

   - In modalità **gdb**, GDB viene guidato nel sistema remoto dal debugger di Visual Studio. Questa opzione è preferibile se la versione locale di GDB non è compatibile con quella installata nel computer di destinazione. |

   > [!NOTE]
   > Se non è possibile raggiungere i punti di interruzione in modalità di debug gdbserver, provare la modalità gdb. gdb deve prima essere [installato](download-install-and-setup-the-linux-development-workload.md) nella destinazione remota.

1. Selezionare la destinazione remota usando la barra degli strumenti standard **Debug** in Visual Studio.

   Quando la destinazione remota è disponibile, risulterà elencato per nome o indirizzo IP.

   ![Destinazione remota](media/remote_target.png)

   Se non ci si è ancora connessi alla destinazione remota, verrà visualizzata un'istruzione che indica di usare [Gestione connessione per Linux](connect-to-your-remote-linux-computer.md) per connettersi alla destinazione remota.

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

   Questa console visualizza tutto l'output di console del computer di destinazione, oltre ad accettare l'input e inviarlo al computer di destinazione.

   ![Finestra della console di Linux](media/consolewindow.png)

## <a name="configure-other-debugging-options"></a>Configurare le altre opzioni di debug

- Gli argomenti della riga di comando possono essere passati all'eseguibile usando l'elemento **Argomenti del programma** nella pagina delle proprietà di **debug** del progetto.

   ![Argomenti del programma](media/settings_programarguments.png)

- Le opzioni specifiche del debugger possono essere passate a GDB usando la voce **Comandi aggiuntivi del debugger**.  Può essere utile ad esempio ignorare i segnali SIGILL (istruzione non valida).  Per ottenere questo risultato, è possibile usare il comando **handle**,  aggiungendo quanto segue alla voce **Comandi aggiuntivi del debugger** come illustrato in precedenza:

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

L'elemento **AttachOptionsForConnection** include la maggior parte degli attributi che potrebbero essere necessari. L'esempio sopra riportato spiega come specificare una posizione in cui cercare librerie aggiuntive con estensione so. L'elemento figlio **ServerOptions** consente di creare un'associazione al processo remoto usando invece la modalità gdbserver. A tale scopo è necessario specificare un client gdb locale (quello distribuito in Visual Studio 2017 è illustrato sopra) e una copia locale del file binario con i simboli. L'elemento **SetupCommands** consente di passare i comandi direttamente a gdb. È possibile trovare tutte le opzioni disponibili nello [schema LaunchOptions.xsd](https://github.com/Microsoft/MIEngine/blob/master/src/MICore/LaunchOptions.xsd) su GitHub.

## <a name="next-steps"></a>Passaggi successivi

- Per eseguire il debug dei dispositivi ARM in Linux, vedere il post di blog sul [debug di un dispositivo ARM incorporato in Visual Studio](https://blogs.msdn.microsoft.com/vcblog/2018/01/10/debugging-an-embedded-arm-device-in-visual-studio/).

## <a name="see-also"></a>Vedere anche

[Proprietà di debug C++ (Linux C++)](prop-pages/debugging-linux.md)
