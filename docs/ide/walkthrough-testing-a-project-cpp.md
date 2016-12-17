---
title: "Procedura dettagliata: verifica di un progetto (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "test di progetti [C++]"
  - "progetti [C++], test"
  - "test di progetti"
ms.assetid: 88cdd377-c5c8-4201-889d-32f5653ebead
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura dettagliata: verifica di un progetto (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'esecuzione di un programma in modalità di debug consente di utilizzare punti di interruzione per sospenderlo allo scopo di esaminare lo stato di variabili e oggetti.  
  
 In questa procedura dettagliata si osserverà il valore di una variabile durante l'esecuzione del programma e si capirà perché il valore non è quello previsto.  
  
## Prerequisiti  
  
-   In questa procedura dettagliata si presuppone la conoscenza delle nozioni di base del linguaggio C\+\+.  
  
-   Si presuppone inoltre che l'utente abbia completato le procedure dettagliate correlate precedenti elencate in [Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C\+\+](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
### Per eseguire un programma in modalità di debug  
  
1.  Aprire TestGames.cpp per la modifica.  
  
2.  Selezionare questa riga di codice:  
  
     `Cardgame.solitaire(1);`  
  
3.  Per impostare un punto di interruzione sulla riga scegliere **Debug**, **Imposta\/Rimuovi punto di interruzione** oppure premere il tasto F9.  Un cerchio rosso viene visualizzato a sinistra della riga a indicare che è stato impostato un punto di interruzione.  Per rimuovere un punto di interruzione, è possibile scegliere nuovamente il comando di menu o il tasto F9.  
  
     Se si utilizza un mouse, è inoltre possibile impostare o rimuovere un punto di interruzione facendo clic sul margine sinistro.  
  
4.  Sulla barra dei menu scegliere **Debug**, **Avvia debug** oppure premere il tasto F5.  
  
     Quando viene raggiunta la riga con il punto di interruzione impostato, l'esecuzione verrà arrestata temporaneamente \(perché il programma si trova in modalità di interruzione\).  Una freccia gialla a sinistra di una riga di codice indica la riga successiva che verrà eseguita.  
  
5.  Per esaminare il valore della variabile `Cardgame::totalParticipants`, spostare il puntatore su `Cardgame` e quindi spostarlo sul controllo di espansione a sinistra della finestra descrizione comandi.  Vengono visualizzati il nome della variabile `totalParticipants` e il relativo valore di 12.  
  
     Aprire il menu di scelta rapida della variabile `Cardgame::totalParticipants` e quindi scegliere **Aggiungi espressione di controllo** per visualizzare la variabile nella finestra **Espressioni di controllo 1**.  È anche possibile selezionare una variabile e trascinarla nella finestra **Espressione di controllo 1**.  
  
6.  Per passare alla riga di codice successiva, sulla barra dei menu scegliere **Debug**, **Esegui istruzione\/routine** oppure premere il tasto F10.  
  
     Il valore di `Cardgame::totalParticipants` nella finestra **Espressione di controllo 1** viene ora visualizzato come 13.  
  
7.  Aprire il menu di scelta rapida per l'istruzione `return 0;`, quindi scegliere **Esegui fino al cursore**.  La freccia gialla a sinistra del codice è rivolta verso l'istruzione successiva da eseguire.  
  
8.  Il numero di `Cardgame::totalParticipants` dovrebbe diminuire al termine di Cardgame.  A questo punto, `Cardgame::totalParticipants` dovrebbe corrispondere a 0 perché tutte le istanze dei puntatori Cardgame sono state eliminate, ma la finestra **Espressione di controllo 1** indica che `Cardgame::totalparticipants` è uguale a 18.  Ciò indica l'esistenza di un bug nel codice, che è possibile rilevare e correggere completando la procedura dettagliata che segue, [Procedura dettagliata: debug di un progetto \(C\+\+\)](../ide/walkthrough-debugging-a-project-cpp.md).  
  
9. Per arrestare il programma, sulla barra dei menu, scegliere **Debug**, **Arresta debug** o scegliere la combinazione di tasti MAIUSC\+F5.  
  
## Passaggi successivi  
 **Precedente:** [Procedura dettagliata: Compilazione di un progetto \(C\+\+\)](../ide/walkthrough-building-a-project-cpp.md) &#124; **Successivo:** [Procedura dettagliata: debug di un progetto \(C\+\+\)](../ide/walkthrough-debugging-a-project-cpp.md)  
  
## Vedere anche  
 [Visual C\+\+ Guided Tour](http://msdn.microsoft.com/it-it/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)   
 [DELETE\_PENDING\_Building and Debugging](http://msdn.microsoft.com/it-it/9f6ba537-5ea0-46fb-b6ba-b63d657d84f1)