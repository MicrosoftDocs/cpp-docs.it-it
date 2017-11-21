---
title: 'Procedura dettagliata: Debug di un progetto (C++) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- projects [C++], debugging
- project debugging [C++]
- debugging projects
ms.assetid: a5cade77-ba51-4b03-a7a0-6897e3cd6a59
caps.latest.revision: "16"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: ec7a363d3aa4601e33e44d15fbb3d667c3a87db4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="walkthrough-debugging-a-project-c"></a>Procedura dettagliata: debug di un progetto (C++)
In questa procedura dettagliata il programma viene modificato per risolvere il problema rilevato durante il test del progetto.  
  
## <a name="prerequisites"></a>Prerequisiti  
  
-   In questa procedura dettagliata si presuppone la conoscenza delle nozioni di base del linguaggio C++.  
  
-   Inoltre, presuppone di aver completato la precedenza di procedure dettagliate correlate elencati in [tramite l'IDE di Visual Studio per lo sviluppo Desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
### <a name="to-fix-a-program-that-has-a-bug"></a>Per correggere un programma che dispone di un bug  
  
1.  Per conoscere cosa accade quando un oggetto `Cardgame` viene distrutto, visualizzare il distruttore per la classe `Cardgame`.  
  
     Nella barra dei menu, scegliere **vista**, **Visualizzazione classi**.  
  
     Nel **Visualizzazione classi** finestra, espandere il **gioco** albero del progetto e selezionare il **Cardgame** classe per visualizzare i membri di classi e metodi.  
  
     Aprire il menu di scelta rapida per il **~Cardgame(void)** distruttore e quindi scegliere **Vai a definizione**.  
  
2.  Per diminuire il valore `totalParticipants` al termine di un costruttore Cardgame, aggiungere il codice seguente tra le parentesi graffe di apertura e chiusura del distruttore `Cardgame::~Cardgame`:  
  
     [!code-cpp[NVC_Walkthrough_Debugging_A_Project#110](../ide/codesnippet/CPP/walkthrough-debugging-a-project-cpp_1.cpp)]  
  
3.  Il file Cardgame. cpp sarà analogo al seguente dopo la modifica:  
  
     [!code-cpp[NVC_Walkthrough_Debugging_A_Project#111](../ide/codesnippet/CPP/walkthrough-debugging-a-project-cpp_2.cpp)]  
  
4.  Nella barra dei menu scegliere **Compilazione**, **Compila soluzione**.  
  
5.  Al termine della compilazione, eseguirla in modalità di Debug scegliendo **Debug**, **Avvia debug** nella barra dei menu, oppure scegliendo il tasto F5. Il programma viene sospeso al primo punto di interruzione.  
  
6.  Per eseguire il programma, nella barra dei menu, scegliere **Debug**, **Esegui istruzione/routine**, oppure premere F10.  
  
     Si noti che dopo l'esecuzione di ogni costruttore Cardgame, il valore di `totalParticipants` aumenta. Quando la funzione `PlayGames` restituisce un valore, poiché ogni istanza di Cardgame esce dall'ambito e viene eliminata (con conseguente chiamata del distruttore), il valore di `totalParticipants` diminuisce. Prima di `return` viene eseguita l'istruzione, `totalParticipants` è uguale a 0.  
  
7.  Continuare l'esecuzione di istruzioni tramite il programma fino al termine, o consentire l'esecuzione scegliendo **Debug**, **eseguire** nella barra dei menu, oppure scegliendo il tasto F5.  
  
## <a name="next-steps"></a>Passaggi successivi  
 **Precedente:** [procedura dettagliata: verifica di un progetto (C++)](../ide/walkthrough-testing-a-project-cpp.md) &#124; **Avanti:**[procedura dettagliata: distribuzione di un programma (C++)](../ide/walkthrough-deploying-your-program-cpp.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)