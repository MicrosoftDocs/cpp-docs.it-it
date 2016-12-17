---
title: "Procedura dettagliata: Compilazione di un progetto (C++) | Microsoft Docs"
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
  - "compilazione di progetti [C++]"
  - "progetti [C++], compilazione"
  - "compilazione di progetti [C++]"
ms.assetid: d459bc03-88ef-48d0-9f9a-82d17f0b6a4d
caps.latest.revision: 14
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura dettagliata: Compilazione di un progetto (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questa procedura dettagliata si introdurrà deliberatamente un errore di sintassi di Visual C\+\+ nel codice per capire come si manifesta un errore di compilazione e come risolverlo.  Quando si compilerà il progetto un messaggio di errore indicherà la natura del problema e il punto in cui si è verificato.  
  
## Prerequisiti  
  
-   In questa procedura dettagliata si presuppone la conoscenza delle nozioni di base del linguaggio C\+\+.  
  
-   Si presuppone inoltre che l'utente abbia completato le procedure dettagliate correlate precedenti elencate in [Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C\+\+](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
### Per correggere gli errori di compilazione  
  
1.  In TestGames.cpp eliminare il punto e virgola nell'ultima riga in modo che risulti simile a quanto riportato di seguito:  
  
     `return 0`  
  
2.  Sulla barra dei menu scegliere **Compilazione**, **Compila soluzione**.  
  
3.  Un messaggio nella finestra **Elenco errori** indica che si è verificato un errore nella compilazione del progetto.  La descrizione è simile alla seguente:  
  
     `error C2143: syntax error : missing ';' before '}'`  
  
     Per visualizzare le informazioni della Guida su questo errore, evidenziarlo nella finestra **Elenco errori**, quindi premere F1.  
  
4.  Aggiungere il punto e virgola alla fine della riga che include l'errore di sintassi:  
  
     `return 0;`  
  
5.  Sulla barra dei menu scegliere **Compilazione**, **Compila soluzione**.  
  
     Un messaggio visualizzato nella finestra **Output** indica che il progetto è stato compilato correttamente.  
  
  **1\>\-\-\-\-\-\- Compilazione avviata: Progetto: Game, Configurazione: Debug Win32 \-\-\-\-\-\-**  
**1\>  TestGames.cpp**  
**1\>  Game.vcxproj \-\> C:\\Users\\\<nomeutente\>\\Documents\\Visual Studio *\<version\>*\\Projects\\Game\\Debug\\Game.exe**  
**\=\=\=\=\=\=\=\=\=\= Compilazione: 1 completata, 0 non riuscita, 0 aggiornata, 0 ignorata \=\=\=\=\=\=\=\=\=\=**  
  
## Passaggi successivi  
 **Precedente:** [Procedura dettagliata: utilizzo di progetti e soluzioni \(C\+\+\)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md) &#124; **Successivo:** [Procedura dettagliata: verifica di un progetto \(C\+\+\)](../ide/walkthrough-testing-a-project-cpp.md)  
  
## Vedere anche  
 [Visual C\+\+ Guided Tour](http://msdn.microsoft.com/it-it/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)   
 [DELETE\_PENDING\_Building and Debugging](http://msdn.microsoft.com/it-it/9f6ba537-5ea0-46fb-b6ba-b63d657d84f1)