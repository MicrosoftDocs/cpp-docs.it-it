---
title: Distribuire, eseguire e sottoporre a debug il progetto Linux | Microsoft Docs
ms.custom: 
ms.date: 11/06/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-linux
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: f7084cdb-17b1-4960-b522-f84981bea879
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
- linux
ms.openlocfilehash: 6c904c721eedb8f15e254abd68fca56da7fe0e6a
ms.sourcegitcommit: 1e367a5f5c5a6fd0b6018f4fb5edcdf2f1a8085c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/01/2018
---
# <a name="deploy-run-and-debug-your-linux-project"></a>Distribuire, eseguire e sottoporre a debug il progetto Linux

Dopo avere creato un progetto Linux ed essersi connessi al progetto usando [Gestione connessione per Linux](../linux/connect-to-your-remote-linux-computer.md), è possibile eseguire il progetto ed eseguirne il debug. Si compila, si esegue e si sottopone a debug il codice nella destinazione remota.

Esistono diversi modi di interagire con il progetto Linux ed eseguirne il debug.

* Eseguire il debug usando le tradizionali funzionalità di Visual Studio, ad esempio punti di interruzione, finestre Espressioni di controllo e passaggio del puntatore su una variabile. Usando questi metodi, è possibile eseguire il debug nel modo consueto, come per gli altri tipi di progetto.
* Visualizzare l'output dal computer di destinazione in una finestra della console di Linux speciale. È anche possibile usare la console per inviare l'input al computer di destinazione.

> [!NOTE]
> Per il debug ARM in Linux, vedere questo post di blog relativo al [debug di un dispositivo ARM incorporato in Visual Studio](https://blogs.msdn.microsoft.com/vcblog/2018/01/10/debugging-an-embedded-arm-device-in-visual-studio/).

## <a name="debug-your-linux-project"></a>Eseguire il debug del progetto Linux

1. Selezionare la modalità di debug nella pagina delle proprietà **Debug**.

    Per il debug delle applicazioni in esecuzione su Linux viene usato GDB.  Lo strumento può essere eseguito in due modalità diverse, selezionabili dall'opzione **Modalità di debug** nella pagina delle proprietà del **debug** del progetto:

    ![Opzioni GDB](media/settings_debugger.png)

    - In modalità **gdbserver** GDB viene eseguito in locale e si connette a gdbserver in esecuzione sul sistema remoto.  Si noti che questa è l'unica modalità supportata dalla finestra della console di Linux.

    - In modalità **gdb** il debugger di Visual Studio indirizza GDB al sistema remoto, che è più compatibile se la versione locale di GDB non è compatibile con la versione installata nel computer di destinazione. |

    > [!NOTE] 
    > Se non è possibile raggiungere i punti di interruzione in modalità di debug gdbserver, provare la modalità gdb. gdb deve prima essere [installato](../linux/download-install-and-setup-the-linux-development-workload.md) nella destinazione remota.

2. Selezionare la destinazione remota usando la barra degli strumenti standard **Debug** in Visual Studio.

    Quando la destinazione remota è disponibile, risulterà elencato per nome o indirizzo IP.

    ![Destinazione remota](media/remote_target.png)

    Se non ci si è ancora connessi alla destinazione remota, verrà visualizzata un'istruzione che indica di usare [Gestione connessione per Linux](../linux/connect-to-your-remote-linux-computer.md) per connettersi alla destinazione remota.

    ![Architettura remota](media/architecture.png)

3. Impostare un punto di interruzione facendo clic nella barra di navigazione a sinistra di un codice che verrà sicuramente eseguito.

    Un punto rosso viene visualizzato nella riga di codice in cui è stato impostato il punto di interruzione.

4. Premere **F5** (o **Debug > Avvia debug**) per avviare il debug.

    Quando si avvia il debug, l'applicazione viene compilata nella destinazione remota prima che venga avviata. Gli eventuali errori di compilazione verranno visualizzati nella finestra **Elenco errori**.

    Se non sono presenti errori, l'app verrà avviata e il debugger verrà sospeso in corrispondenza del punto di interruzione.

    ![Raggiungere un punto di interruzione](media/hit_breakpoint.png)  

    È ora possibile interagire con l'applicazione nello stato corrente, visualizzare le variabili ed eseguire un'istruzione alla volta il codice premendo i tasti funzione, ad esempio **F10** o **F11**.

4. Per usare la console Linux per interagire con l'app, selezionare **Debug > Console Linux**.

  ![Menu della console di Linux](media/consolemenu.png)

  Questa console visualizza tutto l'output di console del computer di destinazione, oltre ad accettare l'input e inviarlo al computer di destinazione.

  ![Finestra della console di Linux](media/consolewindow.png)

## <a name="configure-other-debugging-options"></a>Configurare le altre opzioni di debug

* Gli argomenti della riga di comando possono essere passati all'eseguibile usando l'elemento **Argomenti del programma** nella pagina delle proprietà del **debug**.
  
  ![Argomenti del programma](media/settings_programarguments.png)

* Le opzioni specifiche del debugger possono essere passate a GDB usando la voce **Comandi aggiuntivi del debugger**.  Può essere utile ad esempio ignorare i segnali SIGILL (istruzione non valida).  Per ottenere questo risultato, è possibile usare il comando **handle**,  aggiungendo quanto segue alla voce **Comandi aggiuntivi del debugger** come illustrato in precedenza:

  ```handle SIGILL nostop noprint```

## <a name="see-also"></a>Vedere anche
[Proprietà di debug C++ (Linux C++)](../linux/prop-pages/debugging-linux.md).
