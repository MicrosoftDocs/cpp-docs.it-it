---
title: Distribuire, eseguire ed eseguire il debug del progetto Linux C++ in Visual Studio
description: Descrive come compilare, eseguire ed eseguire il debug del codice nella destinazione remota all'interno di un progetto Linux C++ in Visual Studio.
ms.date: 09/12/2018
ms.assetid: f7084cdb-17b1-4960-b522-f84981bea879
ms.openlocfilehash: cdafb064f8a6269c5ccae938e280b5f47bff3b00
ms.sourcegitcommit: b4645761ce5acf8c2fc7a662334dd5a471ea976d
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/07/2019
ms.locfileid: "57562887"
---
# <a name="deploy-run-and-debug-your-linux-project"></a>Distribuire, eseguire e sottoporre a debug il progetto Linux

Dopo avere creato un progetto Linux C++ in Visual Studio ed essersi connessi al progetto usando [Gestione connessione per Linux](connect-to-your-remote-linux-computer.md), è possibile eseguire il progetto ed eseguirne il debug. Si compila, si esegue e si sottopone a debug il codice nella destinazione remota.

Esistono diversi modi di interagire con il progetto Linux ed eseguirne il debug.

- Eseguire il debug usando le tradizionali funzionalità di Visual Studio, ad esempio punti di interruzione, finestre Espressioni di controllo e passaggio del puntatore su una variabile. Usando questi metodi, è possibile eseguire il debug nel modo consueto, come per gli altri tipi di progetto.

- Visualizzare l'output dal computer di destinazione in una finestra della console di Linux speciale. È anche possibile usare la console per inviare l'input al computer di destinazione.

## <a name="debug-your-linux-project"></a>Eseguire il debug del progetto Linux

1. Selezionare la modalità di debug nella pagina delle proprietà **Debug**.

   Per il debug delle applicazioni in esecuzione su Linux viene usato GDB. È possibile eseguire GDB in due modalità diverse, selezionabili dall'opzione **Modalità di debug** nella pagina delle proprietà di **debug** del progetto:

   ![Opzioni GDB](media/settings_debugger.png)

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

## <a name="next-steps"></a>Passaggi successivi

- Per eseguire il debug dei dispositivi ARM in Linux, vedere il post di blog sul [debug di un dispositivo ARM incorporato in Visual Studio](https://blogs.msdn.microsoft.com/vcblog/2018/01/10/debugging-an-embedded-arm-device-in-visual-studio/).

- Per eseguire il debug con il comando **Connetti a processo**, vedere il post di blog sui [miglioramenti del carico di lavoro Linux C++ per il sistema del progetto, la finestra della console di Linux, rsync e Connetti a processo](https://blogs.msdn.microsoft.com/vcblog/2018/03/13/linux-c-workload-improvements-to-the-project-system-linux-console-window-rsync-and-attach-to-process/).

## <a name="see-also"></a>Vedere anche

[Proprietà di debug C++ (Linux C++)](prop-pages/debugging-linux.md)
