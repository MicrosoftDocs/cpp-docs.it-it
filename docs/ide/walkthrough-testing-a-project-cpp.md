---
title: 'Procedura dettagliata: Verifica di un progetto (C++) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- project testing [C++]
- testing projects
- projects [C++], testing
ms.assetid: 88cdd377-c5c8-4201-889d-32f5653ebead
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3a9455fa9bf3c9f903f5018a1263978913aa35b2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33333564"
---
# <a name="walkthrough-testing-a-project-c"></a>Procedura dettagliata: verifica di un progetto (C++)
Quando si esegue un programma in modalità di debug, è possibile usare i punti di interruzione per sospendere l'esecuzione del programma ed esaminare lo stato di variabili e oggetti.  
  
 In questa procedura dettagliata si verifica il valore di una variabile mentre il programma è in esecuzione e si determina il motivo per cui tale valore non è quello previsto.  
  
## <a name="prerequisites"></a>Prerequisiti  
  
-   In questa procedura dettagliata si presuppone la conoscenza delle nozioni di base del linguaggio C++.  
  
-   Si presuppone anche che l'utente abbia completato le procedure dettagliate correlate precedenti elencate in [Uso dell'IDE di Visual Studio per lo sviluppo di applicazioni desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
### <a name="to-run-a-program-in-debug-mode"></a>Per eseguire il programma in modalità di debug  
  
1.  Aprire TestGames.cpp per la modifica.  
  
2.  Selezionare la riga di codice seguente:  
  
     `Cardgame.solitaire(1);`  
  
3.  Per impostare un punto di interruzione su questa riga, nella barra dei menu scegliere **Debug**, **Attiva/Disattiva punto di interruzione**, oppure premere F9. A sinistra della riga viene visualizzato un cerchio rosso, che indica che è impostato un punto di interruzione. Per rimuovere un punto di interruzione scegliere nuovamente il comando di menu o premere F9.  
  
     Se si usa il mouse è anche possibile impostare o rimuovere un punto di interruzione facendo clic sul margine sinistro.  
  
4.  Nella barra dei menu scegliere **Debug**, **Avvia debug** oppure premere F5.  
  
     Quando il programma raggiunge la riga con il punto di interruzione, l'esecuzione viene arrestata temporaneamente perché il programma è in modalità di interruzione. Una freccia gialla a sinistra di una riga di codice indica che questa è la riga successiva da eseguire.  
  
5.  Per esaminare il valore della variabile `Cardgame::totalParticipants`, spostare il cursore su `Cardgame` e quindi spostarlo sul controllo di espansione a sinistra della finestra descrizione comando. Viene visualizzato il nome della variabile `totalParticipants` e il relativo valore pari a 12.  
  
     Aprire il menu di scelta rapida per la variabile `Cardgame::totalParticipants` e scegliere **Aggiungi espressione di controllo** per visualizzare la finestra **Espressione di controllo 1**. È anche possibile selezionare una variabile e trascinarla nella finestra **Espressione di controllo 1**.  
  
6.  Per eseguire la riga di codice seguente, sulla barra dei menu scegliere **Debug**, **Esegui istruzione/routine** o premere F10.  
  
     Il valore di `Cardgame::totalParticipants` visualizzato nella finestra **Espressione di controllo 1** è ora 13.  
  
7.  Aprire il menu di scelta rapida per l'istruzione `return 0;` e scegliere **Esegui fino al cursore**. La freccia gialla a sinistra del codice indica l'istruzione successiva da eseguire.  
  
8.  Il numero `Cardgame::totalParticipants` dovrebbe decrescere quando viene completata un'istanza Cardgame. A questo punto `Cardgame::totalParticipants` dovrebbe essere 0 perché tutte le istanze Cardgame sono state eliminate, ma la finestra **Espressione di controllo 1** indica che `Cardgame::totalparticipants` è uguale a 18. Questo indica che è presente un bug nel codice. Per rilevare e correggere il bug completare la procedura dettagliata successiva, [Procedura dettagliata: Debug di un progetto (C++)](../ide/walkthrough-debugging-a-project-cpp.md).  
  
9. Per arrestare il programma, nella barra dei menu scegliere **Debug**, **Arresta debug**, oppure scegliere MAIUSC+F5.  
  
## <a name="next-steps"></a>Passaggi successivi  
 **Precedente:** [Procedura dettagliata: Compilazione di un progetto (C++)](../ide/walkthrough-building-a-project-cpp.md) &#124; **Successivo:**[Procedura dettagliata: Debug di un progetto (C++)](../ide/walkthrough-debugging-a-project-cpp.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)