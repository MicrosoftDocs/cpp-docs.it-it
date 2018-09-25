---
title: Compilare ed eseguire un progetto di app console C++ | Microsoft Docs
description: Compilare ed eseguire un'app console Hello World in Visual C++
ms.custom: mvc
ms.date: 12/12/2017
ms.topic: tutorial
ms.technology:
- cpp-tools
ms.devlang: C++
dev_langs:
- C++
ms.assetid: 45138d71-719d-42dc-90d7-1d0ca31a2f55
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c9c32f6811a18fae00cb2943a9ca97a89cf159a1
ms.sourcegitcommit: 92c568e9466ffd7346a4120c478c9bdea61c8756
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/24/2018
ms.locfileid: "47029593"
---
# <a name="build-and-run-a-c-console-app-project"></a>Compilare ed eseguire un progetto di app console C++

Dopo aver creato un progetto di app console C++ e ha immesso il codice, è possibile compilare ed eseguirlo all'interno di Visual Studio e quindi eseguirlo come un'app autonoma dalla riga di comando.

## <a name="prerequisites"></a>Prerequisiti

- Con il carico di lavoro di C++ installato e in esecuzione nel computer è installato Visual Studio con lo sviluppo Desktop. Se non si è ancora installato, seguire i passaggi descritti in [supporto di installazione di C++ in Visual Studio](../build/vscpp-step-0-installation.md).

- Creare un "Hello, World!" progetto e immettere il codice sorgente. Se non è ancora stato fatto, seguire i passaggi descritti in [creare un progetto di app console C++](../build/vscpp-step-1-create.md).

Se Visual Studio è simile a ciò, si è pronti per compilare ed eseguire l'app:

   ![Pronti a compilare il nuovo progetto](../build/media/vscpp-ready-to-build.png "pronti a compilare il nuovo progetto")

## <a name="build-and-run-your-code-in-visual-studio"></a>Compilare ed eseguire il codice in Visual Studio

1. Per compilare il progetto, scegliere **Compila soluzione** dalle **compilazione** menu. Il **Output** finestra Mostra i risultati del processo di compilazione.

   ![Compilare il progetto](../build/media/vscpp-build-solution.gif "compilare il progetto")

1. Per eseguire il codice, nella barra dei menu, scegliere **Debug**, **Avvia senza eseguire debug**.

   ![Avviare il progetto](../build/media/vscpp-start-without-debugging.gif "avviare il progetto")

   Una finestra della console si apre e viene quindi eseguita l'app. Quando si avvia un'app console in Visual Studio, viene eseguito il codice, quindi stampa "preme un tasto qualsiasi per continuare. . ." per fornire possibilità di visualizzare l'output.

La procedura è stata completata. È stata creata la prima "Hello, world!" app console in Visual Studio. Premere un tasto per chiudere la finestra della console e tornare a Visual Studio.

[È verificato un problema.](#build-and-run-your-code-in-visual-studio-issues)

## <a name="run-your-code-in-a-command-window"></a>Eseguire il codice in una finestra di comando

In genere, si esegue l'App console al prompt dei comandi, non in Visual Studio. Dopo aver compilato l'app da Visual Studio, è possibile eseguirlo da qualsiasi finestra di comando. Di seguito viene illustrato come trovare ed eseguire la nuova app in una finestra del prompt dei comandi.

1. Nelle **Esplora soluzioni**, selezionare la soluzione HelloWorld e fare doppio clic per aprire il menu di scelta rapida. Scegli **Apri cartella in Esplora File** per aprire una **Esplora File** finestra nella cartella della soluzione HelloWorld.

1. Nel **Esplora File** finestra, aprire la cartella di Debug. Questo file contiene l'app, HelloWorld.exe e un paio di altri file di debug. Selezionare HelloWorld.exe, tenere premuto il tasto MAIUSC e fare doppio clic per aprire il menu di scelta rapida. Scegli **copia come percorso** per copiare il percorso per l'app negli Appunti.

1. Per aprire una finestra del prompt dei comandi, premere Windows-R per aprire la **eseguire** finestra di dialogo. Immettere *cmd.exe* nel **Open** casella di testo, quindi scegliere **OK** aprire una finestra del prompt dei comandi.

1. Nella finestra del prompt dei comandi del pulsante destro del mouse per incollare il percorso all'app nel prompt dei comandi. Premere INVIO per eseguire l'app.

   ![Eseguire l'app al prompt dei comandi](../build/media/vscpp-run-in-cmd.gif "eseguire l'app al prompt dei comandi")

Complimenti, è stata compilata ed eseguita un'app console in Visual Studio.

[È verificato un problema.](#run-your-code-in-a-command-window-issues)

## <a name="next-steps"></a>Passaggi successivi

Dopo che è stata creata ed eseguire questa app semplice, si è pronti per progetti più complessi. Visualizzare [usando l'IDE di Visual Studio per lo sviluppo Desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md) per altre procedure dettagliate che illustrano le funzionalità di Visual C++ in Visual Studio.

## <a name="troubleshooting-guide"></a>Guida alla risoluzione dei problemi

Qui è per le soluzioni ai problemi comuni quando si crea il primo progetto in C++.

### <a name="build-and-run-your-code-in-visual-studio-issues"></a>Compilare ed eseguire il codice in problemi di Visual Studio

Se le sottolineature rosse vengono visualizzati in qualsiasi elemento nell'editor del codice sorgente, la compilazione potrebbe essere errori o avvisi. Verificare che il codice corrisponda all'esempio di ortografia, segni di punteggiatura e case.

[Indietro.](#build-and-run-your-code-in-visual-studio)

### <a name="run-your-code-in-a-command-window-issues"></a>Eseguire il codice in una finestra di comando problemi

È anche possibile passare alla cartella di Debug della soluzione nella riga di comando per eseguire l'app. È possibile eseguire l'app da altre directory senza specificare il percorso all'app. Tuttavia, è possibile copiare l'app in un'altra directory ed eseguirlo da tale posizione.

Se non viene visualizzata **copia come percorso** nel menu di scelta rapida, ignorare il menu di scelta e quindi tenere premuto MAIUSC mentre si apre nuovamente. Si tratta semplicemente per comodità. È anche possibile copiare il percorso della cartella dalla barra di ricerca di Esplora File e incollarlo nella **eseguire** finestra di dialogo e quindi immettere il nome del file eseguibile alla fine. È un po' più digitazione, ma ha lo stesso risultato.

[Indietro.](#run-your-code-in-a-command-window)

<iframe src="" height="0" width="0" frameborder="0" name="frameTarget" />
