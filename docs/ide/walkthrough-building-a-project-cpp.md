---
title: 'Procedura dettagliata: Compilazione di un progetto (C++) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- building projects [C++]
- projects [C++], building
- project building [C++]
ms.assetid: d459bc03-88ef-48d0-9f9a-82d17f0b6a4d
caps.latest.revision: "14"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 65d7a4bf7e4b3fd519911a2a127ec0ac2723b630
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="walkthrough-building-a-project-c"></a>Procedura dettagliata: Compilazione di un progetto (C++)
In questa procedura dettagliata si introdurrà deliberatamente un errore di sintassi di Visual C++ nel codice per capire come si manifesta un errore di compilazione e come risolverlo. Quando si compilerà il progetto un messaggio di errore indicherà la natura del problema e il punto in cui si è verificato.  
  
## <a name="prerequisites"></a>Prerequisiti  
  
-   In questa procedura dettagliata si presuppone la conoscenza delle nozioni di base del linguaggio C++.  
  
-   Inoltre, presuppone di aver completato la precedenza di procedure dettagliate correlate elencati in [tramite l'IDE di Visual Studio per lo sviluppo Desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
### <a name="to-fix-compilation-errors"></a>Per correggere gli errori di compilazione  
  
1.  In TestGames.cpp eliminare il punto e virgola nell'ultima riga in modo che risulti simile a quanto riportato di seguito:  
  
     `return 0`  
  
2.  Nella barra dei menu scegliere **Compilazione**, **Compila soluzione**.  
  
3.  Un messaggio di **elenco errori** finestra indica che si è verificato un errore nella compilazione del progetto. La descrizione è simile alla seguente:  
  
     `error C2143: syntax error : missing ';' before '}'`  
  
     Per visualizzare informazioni su questo errore, evidenziarlo nel **elenco errori** finestra e quindi scegliere il tasto F1.  
  
4.  Aggiungere il punto e virgola alla fine della riga che include l'errore di sintassi:  
  
     `return 0;`  
  
5.  Nella barra dei menu scegliere **Compilazione**, **Compila soluzione**.  
  
     Un messaggio di **Output** finestra indica che il progetto venga compilato correttamente.  
  
    ```Output  
    1>------ Build started: Project: Game, Configuration: Debug Win32 ------  
    1>  TestGames.cpp  
    1>  Game.vcxproj -> C:\Users\<username>\Documents\Visual Studio <version>\Projects\Game\Debug\Game.exe  
    ========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========  
    ```  
  
## <a name="next-steps"></a>Passaggi successivi  
 **Precedente:** [procedura dettagliata: utilizzo di progetti e soluzioni (C++)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md) &#124; **Avanti:**[procedura dettagliata: verifica di un progetto (C++)](../ide/walkthrough-testing-a-project-cpp.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)