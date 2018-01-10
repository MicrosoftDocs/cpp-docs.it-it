---
title: Compilare ed eseguire un progetto di applicazione console C++ | Documenti Microsoft
description: Installare il supporto di Visual Studio per Visual C++
ms.custom: mvc
ms.date: 12/12/2017
ms.topic: get-started-article
ms.technology: devlang-C++
ms.devlang: C++
dev_langs: C++
ms.assetid: 45138d71-719d-42dc-90d7-1d0ca31a2f55
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a5b9c250b102b7d8847e99b87139136bc7df808b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="build-and-run-a-c-console-app-project"></a>Compilare ed eseguire un progetto di applicazione console C++

Dopo aver creato un progetto di applicazione console C++ e ha immesso il codice, compilare ed eseguirlo all'interno di Visual Studio e quindi eseguirlo come un'app autonoma dalla riga di comando.

## <a name="prerequisites"></a>Prerequisiti

- Dispone di Visual Studio con lo sviluppo Desktop con carico di lavoro C++ installato e in esecuzione nel computer in uso. Se non è ancora installato, seguire i passaggi in [il supporto di installazione di C++ in Visual Studio](../build/vscpp-step-0-installation.md).

- Creare un "Hello, World!" progetto e immettere il codice sorgente. Se non hai fatto ancora, seguire i passaggi in [creare un progetto di applicazione console C++](../build/vscpp-step-1-create.md).

Se Visual Studio è simile al seguente, si è pronti per compilare ed eseguire l'app:

   ![Pronto per compilare il nuovo progetto](../build/media/vscpp-ready-to-build.png "pronti a compilare il nuovo progetto")

## <a name="build-and-run-your-code-in-visual-studio"></a>Compilare ed eseguire il codice in Visual Studio

1. Per compilare il progetto, scegliere **Compila soluzione** dal **compilare** menu. Il **Output** finestra Mostra i risultati del processo di compilazione.

   ![Compilare il progetto](../build/media/vscpp-build-solution.gif "compilare il progetto")

1. Per eseguire il codice, nella barra dei menu, scegliere **Debug**, **Avvia senza eseguire debug**.

   ![Avviare il progetto](../build/media/vscpp-start-without-debugging.gif "avviare il progetto")

    Una finestra della console viene aperta e quindi esegue l'app. Quando si avvia un'applicazione console in Visual Studio, viene eseguito il codice, quindi stampa "preme un tasto qualsiasi per continuare. . ." per fornire la possibilità di visualizzare l'output.

La procedura è stata completata. È stata creata la prima "Hello, world!" applicazione console in Visual Studio! Premere un tasto per chiudere la finestra della console e tornare a Visual Studio.

[È verificato un problema.](#build-and-run-your-code-in-visual-studio-issues)

## <a name="run-your-code-in-a-command-window"></a>Eseguire il codice in una finestra di comando

In genere, eseguire le applicazioni console al prompt dei comandi, non in Visual Studio. Una volta creato l'app da Visual Studio, è possibile eseguirlo da qualsiasi finestra di comando. Di seguito viene illustrato come trovare ed eseguire l'app di nuovo in una finestra del prompt dei comandi.

1. In **Esplora**, selezionare la soluzione HelloWorld e fare doppio clic per aprire il menu di scelta rapida. Scegliere **Apri cartella in Esplora File** per aprire un **Esplora File** finestra nella cartella della soluzione HelloWorld.

1. Nel **Esplora File** finestra, aprire la cartella di Debug. Contiene l'app, HelloWorld.exe e un paio di altri file di debug. Selezionare HelloWorld.exe, tenere premuto il tasto MAIUSC e fare doppio clic per aprire il menu di scelta rapida. Scegliere **copia come percorso** per copiare il percorso per l'app negli Appunti.

1. Per aprire una finestra del prompt dei comandi, premere Windows-R per aprire la **eseguire** finestra di dialogo. Immettere *cmd.exe* nel **aprire** casella di testo, quindi scegliere **OK** per l'esecuzione di una finestra del prompt dei comandi.

1. Nella finestra del prompt dei comandi, fare doppio clic su per incollare il percorso all'applicazione nel prompt dei comandi. Premere INVIO per eseguire l'app.

   ![Eseguire l'app al prompt dei comandi](../build/media/vscpp-run-in-cmd.gif "eseguire l'app al prompt dei comandi")

Complimenti, compilata ed eseguire un'applicazione console in Visual Studio.

[È verificato un problema.](#run-your-code-in-a-command-window-issues)

## <a name="next-steps"></a>Passaggi successivi

Dopo aver compilato ed Esegui questa app semplice, si è pronti per progetti più complessi. Vedere [tramite l'IDE di Visual Studio per lo sviluppo Desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md) per ulteriori procedure dettagliate che esplorare le funzionalità di Visual C++ in Visual Studio.

## <a name="troubleshooting-guide"></a>Guida alla risoluzione dei problemi

Sono qui per le soluzioni ai problemi comuni quando si crea il primo progetto C++.

### <a name="build-and-run-your-code-in-visual-studio-issues"></a>Compilare ed eseguire il codice in problemi di Visual Studio

Se le sottolineature rosse vengono visualizzati in qualsiasi elemento nell'editor del codice sorgente, la compilazione potrebbe essere errori o avvisi. Verificare che il codice corrisponda all'esempio nel caso ortografia e punteggiatura.

[Indietro.](#build-and-run-your-code-in-visual-studio)

### <a name="run-your-code-in-a-command-window-issues"></a>Eseguire il codice in una finestra di comando problemi

È anche possibile accedere alla cartella di Debug della soluzione dalla riga di comando per eseguire l'app. È possibile eseguire l'app da altre directory senza specificare il percorso per l'app. Tuttavia, è possibile copiare l'app in un'altra directory ed eseguirlo da tale posizione.

[Indietro.](#run-your-code-in-a-command-window)


<iframe src="" height="0" width="0" frameborder="0" name="frameTarget" />
