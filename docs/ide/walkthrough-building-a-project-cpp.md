---
title: 'Procedura dettagliata: Compilazione di un progetto (C++) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- building projects [C++]
- projects [C++], building
- project building [C++]
ms.assetid: d459bc03-88ef-48d0-9f9a-82d17f0b6a4d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0c8d04dc3692076b867302af0e793eaac7ed25cb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33332455"
---
# <a name="walkthrough-building-a-project-c"></a>Procedura dettagliata: Compilazione di un progetto (C++)
In questa procedura dettagliata si introdurrà deliberatamente un errore di sintassi di Visual C++ nel codice per capire come si manifesta un errore di compilazione e come risolverlo. Quando si compilerà il progetto un messaggio di errore indicherà la natura del problema e il punto in cui si è verificato.  
  
## <a name="prerequisites"></a>Prerequisiti  
  
-   In questa procedura dettagliata si presuppone la conoscenza delle nozioni di base del linguaggio C++.  
  
-   Si presuppone anche che l'utente abbia completato le procedure dettagliate correlate precedenti elencate in [Uso dell'IDE di Visual Studio per lo sviluppo di applicazioni desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
### <a name="to-fix-compilation-errors"></a>Per correggere gli errori di compilazione  
  
1.  In TestGames.cpp eliminare il punto e virgola nell'ultima riga in modo che risulti simile a quanto riportato di seguito:  
  
     `return 0`  
  
2.  Nella barra dei menu scegliere **Compilazione**, **Compila soluzione**.  
  
3.  Un messaggio nella finestra **Elenco errori** indica che si è verificato un errore nella compilazione del progetto. La descrizione è simile alla seguente:  
  
     `error C2143: syntax error : missing ';' before '}'`  
  
     Per visualizzare le informazioni della Guida su questo errore, evidenziarlo nella finestra **Elenco errori**, quindi premere F1.  
  
4.  Aggiungere il punto e virgola alla fine della riga che include l'errore di sintassi:  
  
     `return 0;`  
  
5.  Nella barra dei menu scegliere **Compilazione**, **Compila soluzione**.  
  
     Un messaggio visualizzato nella finestra **Output** indica che il progetto è stato compilato correttamente.  
  
    ```Output  
    1>------ Build started: Project: Game, Configuration: Debug Win32 ------  
    1>  TestGames.cpp  
    1>  Game.vcxproj -> C:\Users\<username>\Documents\Visual Studio <version>\Projects\Game\Debug\Game.exe  
    ========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========  
    ```  
  
## <a name="next-steps"></a>Passaggi successivi  
 **Precedente:** [Procedura dettagliata: Uso di progetti e soluzioni (C++)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md) &#124; **Successivo:**[Procedura dettagliata: Verifica di un progetto (C++)](../ide/walkthrough-testing-a-project-cpp.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)