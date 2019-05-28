---
title: 'Procedura dettagliata: Debug di un progetto (C++)'
ms.date: 04/25/2019
helpviewer_keywords:
- projects [C++], debugging
- project debugging [C++]
- debugging projects
ms.assetid: a5cade77-ba51-4b03-a7a0-6897e3cd6a59
ms.openlocfilehash: 55124bc2f240499cc163fca6d0004a79047060a4
ms.sourcegitcommit: 283cb64fd7958a6b7fbf0cd8534de99ac8d408eb
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2019
ms.locfileid: "64857242"
---
# <a name="walkthrough-debugging-a-project-c"></a>Procedura dettagliata: Debug di un progetto (C++)

In questa procedura dettagliata si modifica il programma per risolvere il problema rilevato durante il test del progetto.

## <a name="prerequisites"></a>Prerequisiti

- In questa procedura dettagliata si presuppone la conoscenza delle nozioni di base del linguaggio C++.

- Si presuppone anche che l'utente abbia completato le procedure dettagliate correlate elencate in precedenza in [Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).

### <a name="to-fix-a-program-that-has-a-bug"></a>Per correggere un programma che presenta un bug

1. Per conoscere cosa accade quando un oggetto `Cardgame` viene eliminato definitivamente, visualizzare il distruttore per la classe `Cardgame`.

   Sulla barra dei menu scegliere **Visualizza** > **Visualizzazione classi**.

   Nella finestra **Visualizzazione classi** espandere la struttura del progetto **Game** e selezionare la classe **Cardgame** per visualizzare i membri e i metodi della classe.

   Aprire il menu di scelta rapida per il distruttore **~Cardgame (void)** , quindi scegliere **Vai a definizione**.

1. Per diminuire il valore `totalParticipants` al termine di un'istanza di Cardgame, aggiungere il codice seguente tra le parentesi graffe di apertura e chiusura del distruttore `Cardgame::~Cardgame`.

   [!code-cpp[NVC_Walkthrough_Debugging_A_Project#110](../ide/codesnippet/CPP/walkthrough-debugging-a-project-cpp_1.cpp)]

1. Dopo le modifiche, il file Cardgame.cpp risulta simile al codice seguente:

   [!code-cpp[NVC_Walkthrough_Debugging_A_Project#111](../ide/codesnippet/CPP/walkthrough-debugging-a-project-cpp_2.cpp)]

1. Nella barra dei menu scegliere **Compila** > **Compila soluzione**.

1. Al termine della compilazione, eseguire il programma in modalità di debug scegliendo **Debug** > **Avvia debug** sulla barra dei menu oppure premendo **F5**. L'esecuzione del programma viene sospesa al primo punto di interruzione.

1. Per eseguire il programma un'istruzione alla volta, sulla barra dei menu scegliere **Debug** > **Esegui istruzione/routine** o premere **F10**.

   Si noti che dopo l'esecuzione di ogni costruttore `Cardgame`, il valore di `totalParticipants` aumenta. Quando la funzione `PlayGames` restituisce un valore, poiché ogni istanza di `Cardgame` esce dall'ambito e viene eliminata (con conseguente chiamata del distruttore), il valore di `totalParticipants` diminuisce. Prima dell'esecuzione dell'istruzione `return`, `totalParticipants` è uguale a 0.

1. Continuare a eseguire il programma un'istruzione alla volta fino al termine oppure scegliere **Debug** > **Esegui** sulla barra dei menu o premere **F5** per consentirne l'esecuzione in sequenza.

## <a name="next-steps"></a>Passaggi successivi

**Precedente:** [Procedura dettagliata: Test di un progetto (C++)](../ide/walkthrough-testing-a-project-cpp.md)<br/>
**Successivo:** [Procedura dettagliata: Distribuzione di un programma (C++)](../ide/walkthrough-deploying-your-program-cpp.md)<br/>

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Progetti e sistemi di compilazione](../build/projects-and-build-systems-cpp.md)<br/>
