---
title: "Procedura dettagliata: debug di un progetto (C++) | Microsoft Docs"
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
  - "debug di progetti"
  - "debug di progetti [C++]"
  - "progetti [C++], debug"
ms.assetid: a5cade77-ba51-4b03-a7a0-6897e3cd6a59
caps.latest.revision: 16
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura dettagliata: debug di un progetto (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questa fase il programma viene modificato per risolvere il problema rilevato durante il test del progetto.  
  
## Prerequisiti  
  
-   In questa procedura dettagliata si presuppone la conoscenza delle nozioni di base del linguaggio C\+\+.  
  
-   Si presuppone inoltre che l'utente abbia completato le procedure dettagliate correlate precedenti elencate in [Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C\+\+](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
### Per correggere un bug nel programma  
  
1.  Per conoscere cosa accade quando un oggetto `Cardgame` viene distrutto, visualizzare il distruttore per la classe `Cardgame`.  
  
     Dalla barra del menu, scegliere **Visualizza**, **Pagine delle proprietà**.  
  
     Nella finestra **Visualizzazione classi**, espandere la struttura ad albero del progetto **Game** e selezionare la classe **Gioco di carte** per visualizzare i membri della classe e i metodi.  
  
     Aprire il menu di scelta rapida per il distruttore **~Cardgame \(void\)** e quindi scegliere **Vai alla definizione**.  
  
2.  Per diminuire il valore `totalParticipants` al termine di un gioco di carte, aggiungere il codice seguente tra le parentesi graffe di apertura e chiusura del distruttore `Cardgame::~Cardgame`.  
  
     [!code-cpp[NVC_Walkthrough_Debugging_A_Project#110](../ide/codesnippet/CPP/walkthrough-debugging-a-project-cpp_1.cpp)]  
  
3.  Dopo le modifiche, il file Cardgame.cpp dovrebbe risultare simile al seguente:  
  
     [!code-cpp[NVC_Walkthrough_Debugging_A_Project#111](../ide/codesnippet/CPP/walkthrough-debugging-a-project-cpp_2.cpp)]  
  
4.  Nella barra dei menu, scegliere **Compilazione**, **Compila soluzione**.  
  
5.  Al termine della compilazione, eseguirla in modalità di debug scegliendo **Debug**, **Avvia debug** dalla barra dei menu, oppure premendo il tasto F5.  Il programma viene sospeso al primo punto di interruzione.  
  
6.  Per eseguire il programma, sulla barra dei menu, scegliere **Debug**, **Esegui istruzione\/routine**, o premere il tasto F10.  
  
     Si noti che dopo l'esecuzione di ogni costruttore Cardgame, il valore di `totalParticipants` aumenta.  Quando la funzione `PlayGames` ritorna un valore, poiché ogni istanza del gioco viene eliminata \(e viene chiamato il distruttore\), `totalParticipants` decrementa.  Immediatamente prima che venga eseguita l'istruzione `return`, `totalParticipants` è uguale a 0.  
  
7.  Continuare ad eseguire il programma un'istruzione alla volta fino al termine, o lasciarlo eseguire scegliendo **Debug**, **Esegui** dalla barra dei menu, oppure premendo il tasto F5.  
  
## Passaggi successivi  
 **Precedente:** [Procedura dettagliata: verifica di un progetto \(C\+\+\)](../ide/walkthrough-testing-a-project-cpp.md) &#124; **Successivo:** [Procedura dettagliata: Distribuzione di un programma \(C\+\+\)](../ide/walkthrough-deploying-your-program-cpp.md)  
  
## Vedere anche  
 [Visual C\+\+ Guided Tour](http://msdn.microsoft.com/it-it/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)   
 [DELETE\_PENDING\_Building and Debugging](http://msdn.microsoft.com/it-it/9f6ba537-5ea0-46fb-b6ba-b63d657d84f1)