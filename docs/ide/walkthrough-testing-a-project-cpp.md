---
title: 'Procedura dettagliata: Verifica di un progetto (C++) | Documenti Microsoft'
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
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="walkthrough-testing-a-project-c"></a>Procedura dettagliata: verifica di un progetto (C++)
Quando si esegue un programma in modalità di Debug, è possibile utilizzare i punti di interruzione per sospendere il programma per esaminare lo stato di variabili e oggetti.  
  
 In questa procedura dettagliata, controllare il valore di una variabile mentre viene eseguito il programma e dedurre perché il valore non è quello previsto.  
  
## <a name="prerequisites"></a>Prerequisiti  
  
-   In questa procedura dettagliata si presuppone la conoscenza delle nozioni di base del linguaggio C++.  
  
-   Inoltre, presuppone di aver completato la precedenza di procedure dettagliate correlate elencati in [tramite l'IDE di Visual Studio per lo sviluppo Desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
### <a name="to-run-a-program-in-debug-mode"></a>Per eseguire un programma in modalità di Debug  
  
1.  Aprire TestGames.cpp per la modifica.  
  
2.  Selezionare la riga di codice:  
  
     `Cardgame.solitaire(1);`  
  
3.  Per impostare un punto di interruzione riga, nella barra dei menu, scegliere **Debug**, **Attiva/Disattiva punto di interruzione**, o premere F9. Verrà visualizzato un cerchio rosso a sinistra della riga. indica che è impostato un punto di interruzione. Per rimuovere un punto di interruzione, è possibile scegliere nuovamente il comando di menu o il tasto F9.  
  
     Se si usa un mouse, è possibile impostare o rimuovere un punto di interruzione facendo clic sul margine sinistro.  
  
4.  Nella barra dei menu, scegliere **Debug**, **Avvia debug**, o premere il tasto F5.  
  
     Quando il programma raggiunge la riga con il punto di interruzione, esecuzione viene arrestata temporaneamente perché il programma è in modalità di interruzione. Una freccia gialla a sinistra di una riga di codice indica che è la riga successiva da eseguire.  
  
5.  Per esaminare il valore della `Cardgame::totalParticipants` variabile, spostare il puntatore su `Cardgame` e quindi spostarlo sopra il controllo di espansione a sinistra della finestra della descrizione comandi. Il nome della variabile `totalParticipants` e vengono visualizzati il relativo valore pari a 12.  
  
     Aprire il menu di scelta rapida per il `Cardgame::totalParticipants` variabile e quindi scegliere **Aggiungi espressione di controllo** per visualizzare il **controllo1** finestra. È anche possibile selezionare una variabile e trascinarlo in modo che il **controllo1** finestra.  
  
6.  Per passare alla riga successiva del codice, nella barra dei menu, scegliere **Debug**, **Esegui istruzione/routine**, oppure premere F10.  
  
     Il valore di `Cardgame::totalParticipants` nel **controllo1** finestra verrà visualizzata come 13.  
  
7.  Aprire il menu di scelta rapida per il `return 0;` istruzione e quindi scegliere **Esegui fino al cursore**. La freccia gialla a sinistra dei punti di codice per l'istruzione successiva da eseguire.  
  
8.  Il `Cardgame::totalParticipants` numero dovrebbe ridursi quando un costruttore Cardgame. A questo punto, `Cardgame::totalParticipants` deve essere uguale a 0 perché tutte le istanze di Cardgame sono state eliminate, ma la **controllo1** finestra indica che `Cardgame::totalparticipants` è uguale a 18. Questo errore indica che un bug nel codice, che è possibile rilevare e correggere completando la procedura successiva, [procedura dettagliata: debug di un progetto (C++)](../ide/walkthrough-debugging-a-project-cpp.md).  
  
9. Per arrestare il programma, nella barra dei menu, scegliere **Debug**, **Termina debug**, oppure scegliere la combinazione di tasti MAIUSC + F5.  
  
## <a name="next-steps"></a>Passaggi successivi  
 **Precedente:** [procedura dettagliata: compilazione di un progetto (C++)](../ide/walkthrough-building-a-project-cpp.md) &#124; **successivo:**[procedura dettagliata: debug di un progetto (C++)](../ide/walkthrough-debugging-a-project-cpp.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)