---
title: Distribuire, eseguire e sottoporre a debug il progetto Linux | Microsoft Docs
ms.custom: 
ms.date: 11/16/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-linux
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: f7084cdb-17b1-4960-b522-f84981bea879
author: BrianPeek
ms.author: brpeek
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: 1f36435bbb8238fb6068e7b58f9142eda62bc28c
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---

# <a name="deploy-run-and-debug-your-project"></a>Distribuire, eseguire e sottoporre a debug il progetto Linux

Dopo aver creato il progetto, è necessario connettersi al computer Linux in cui il codice verrà compilato, eseguito e sottoposto a debug.

1. Impostare l'architettura di destinazione remota usando l'elenco a discesa standard in Visual Studio come illustrato di seguito: ![Remote Architecture](media/architecture.png)

Esistono diversi modi di interagire con il progetto Linux ed eseguirne il debug.

* Le funzionalità tradizionali di Visual Studio, ad esempio i punti di interruzione, le finestre Espressioni di controllo e il passaggio del mouse su una variabile, funzioneranno come previsto, quindi è possibile eseguire il debug come di consueto.
* La voce di menu **Debug > Linux Console** (Debug > Console di Linux) consente di aprire una finestra speciale della console di Linux.

  ![Menu della console di Linux](media/consolemenu.png)

  Questa console visualizza tutto l'output di console del computer di destinazione, oltre ad accettare l'input e inviarlo al computer di destinazione.

  ![Finestra della console di Linux](media/consolewindow.png)

* Gli argomenti della riga di comando possono essere passati all'eseguibile usando l'elemento **Argomenti del programma** nella pagina delle proprietà del **debug**.
  
  ![Argomenti del programma](media/settings_programarguments.png)

* Per il debug delle applicazioni in esecuzione su Linux viene usato GDB.  Lo strumento può essere eseguito in due modalità diverse, selezionabili dall'opzione **Modalità di debug** nella pagina delle proprietà del **debug** del progetto:

  ![Opzioni GDB](media/settings_debugger.png)

  | Selezione | Descrizione
  | --------- | ---
  | gdbserver | GDB viene eseguito in locale e si connette a gdbserver in esecuzione sul sistema remoto.  Si noti che questa è l'unica modalità supportata dalla finestra della console di Linux. 
  | gdb       | Il debugger di Visual Studio indirizza GDB al sistema remoto, che è più compatibile se la versione locale di GDB non è compatibile con la versione installata nel computer di destinazione

* Le opzioni specifiche del debugger possono essere passate a GDB usando la voce **Comandi aggiuntivi del debugger**.  Può essere utile ad esempio ignorare i segnali SIGILL (istruzione non valida).  Per ottenere questo risultato, è possibile usare il comando **handle**,  aggiungendo quanto segue alla voce **Comandi aggiuntivi del debugger** come illustrato in precedenza:

  ```handle SIGILL nostop noprint```

