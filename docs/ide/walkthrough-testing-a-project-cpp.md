---
title: 'Procedura dettagliata: Test di un progetto (C++)'
ms.date: 04/25/2019
helpviewer_keywords:
- project testing [C++]
- testing projects
- projects [C++], testing
ms.assetid: 88cdd377-c5c8-4201-889d-32f5653ebead
ms.openlocfilehash: e0422b4f862b5438a313e25dac421d591bbbb9a5
ms.sourcegitcommit: fd0f8839da5c6a3663798a47c6b0bb6e63b518bd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2019
ms.locfileid: "70273708"
---
# <a name="walkthrough-testing-a-project-c"></a>Procedura dettagliata: Test di un progetto (C++)

Quando si esegue un programma in modalità di debug, è possibile usare i punti di interruzione per sospendere l'esecuzione del programma ed esaminare lo stato di variabili e oggetti.

In questa procedura dettagliata si verifica il valore di una variabile mentre il programma è in esecuzione e si determina il motivo per cui tale valore non è quello previsto.

## <a name="prerequisites"></a>Prerequisiti

- In questa procedura dettagliata si presuppone la conoscenza delle nozioni di base del linguaggio C++.

- Si presuppone anche che l'utente abbia completato le procedure dettagliate correlate elencate in precedenza in [Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).

### <a name="to-run-a-program-in-debug-mode"></a>Per eseguire il programma in modalità di debug

1. Aprire Games.cpp per la modifica.

1. Selezionare la riga di codice seguente:

   `Cardgame solitaire(1);`

1. Per impostare un punto di interruzione su questa riga, sulla barra dei menu scegliere **Debug** > **Imposta/Rimuovi punto di interruzione** oppure premere **F9**. A sinistra della riga viene visualizzato un cerchio rosso, che indica che è impostato un punto di interruzione. Per rimuovere un punto di interruzione, scegliere nuovamente il comando di menu o premere **F9**.

   Se si usa il mouse è anche possibile impostare o rimuovere un punto di interruzione facendo clic sul margine sinistro.

1. Sulla barra dei menu scegliere **Debug** > **Avvia debug** oppure premere **F5**.

   Quando il programma raggiunge la riga con il punto di interruzione, l'esecuzione viene arrestata temporaneamente perché il programma è in modalità di interruzione. Una freccia gialla a sinistra di una riga di codice indica che questa è la riga successiva da eseguire.

1. Per esaminare il valore della variabile `Cardgame::totalParticipants`, spostare il cursore su `Cardgame` e quindi spostarlo sul controllo di espansione a sinistra della finestra descrizione comando. Viene visualizzato il nome della variabile `totalParticipants` e il relativo valore pari a **12**.

   Aprire il menu di scelta rapida per la variabile `Cardgame::totalParticipants` e scegliere **Aggiungi espressione di controllo** per visualizzare la finestra **Espressione di controllo 1**. È anche possibile evidenziare una variabile e trascinarla nella finestra **Espressione di controllo 1**.

1. Per eseguire la riga di codice seguente, sulla barra dei menu scegliere **Debug** > **Esegui istruzione/routine** o premere **F10**.

   Il valore di `Cardgame::totalParticipants` visualizzato nella finestra **Espressione di controllo 1** è ora **13**.

1. Aprire il menu di scelta rapida per l'istruzione `return 0;` e scegliere **Esegui fino al cursore**. La freccia gialla a sinistra del codice indica l'istruzione successiva da eseguire.

1. Il numero `Cardgame::totalParticipants` dovrebbe decrescere quando viene completata un'istanza di `Cardgame`. A questo punto, `Cardgame::totalParticipants` dovrebbe essere 0 perché tutte le istanze di `Cardgame` sono state eliminate, ma la finestra **Espressione di controllo 1** indica che `Cardgame::totalparticipants` è uguale a **18**. La differenza indica che è presente un bug nel codice. Per rilevare e correggere il bug, completare la procedura dettagliata successiva, [Procedura dettagliata: Debug di un progetto (C++)](../ide/walkthrough-debugging-a-project-cpp.md).

1. Per arrestare il programma, sulla barra dei menu scegliere **Debug** > **Arresta debug** oppure scegliere **MAIUSC**+**F5**.

## <a name="next-steps"></a>Fasi successive

**Precedente:** [Procedura dettagliata: Compilazione di un progetto (C++)](../ide/walkthrough-building-a-project-cpp.md)<br/>
**Successivo:** [Procedura dettagliata: Debug di un progetto (C++)](../ide/walkthrough-debugging-a-project-cpp.md)

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Progetti e sistemi di compilazione](../build/projects-and-build-systems-cpp.md)<br/>
