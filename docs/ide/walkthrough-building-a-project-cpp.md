---
description: 'Altre informazioni su: procedura dettagliata: compilazione di un progetto (C++)'
title: 'Procedura dettagliata: Compilazione di un progetto (C++)'
ms.date: 04/25/2019
helpviewer_keywords:
- building projects [C++]
- projects [C++], building
- project building [C++]
ms.assetid: d459bc03-88ef-48d0-9f9a-82d17f0b6a4d
ms.openlocfilehash: f606a0ead796916fa41f7669852e67d58ae3b17c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97222541"
---
# <a name="walkthrough-building-a-project-c"></a>Procedura dettagliata: Compilazione di un progetto (C++)

In questa procedura dettagliata si introdurrà deliberatamente un errore di sintassi C++ nel codice per capire come si manifesta un errore di compilazione e come risolverlo. Quando si compilerà il progetto un messaggio di errore indicherà la natura del problema e il punto in cui si è verificato.

## <a name="prerequisites"></a>Prerequisiti

- In questa procedura dettagliata si presuppone la conoscenza delle nozioni di base del linguaggio C++.

- Si presuppone anche che l'utente abbia completato le procedure dettagliate correlate elencate in precedenza in [Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).

### <a name="to-fix-compilation-errors"></a>Per correggere gli errori di compilazione

1. In Game.cpp eliminare il punto e virgola nell'ultima riga in modo che risulti simile all'istruzione:

   `return 0`

1. Sulla barra dei menu scegliere **Compila**  >  **Compila soluzione**.

1. Un messaggio nella finestra **Elenco errori** indica che si è verificato un errore nella compilazione del progetto. La descrizione è simile al messaggio di errore:

   `error C2143: syntax error: missing ';' before '}'`

   Per visualizzare le informazioni della guida relative a questo errore, evidenziarlo nella finestra di **Elenco errori** , quindi premere il tasto **F1** .

1. Aggiungere il punto e virgola alla fine della riga che include l'errore di sintassi:

   `return 0;`

1. Sulla barra dei menu scegliere **Compila**  >  **Compila soluzione**.

   Un messaggio visualizzato nella finestra **Output** indica che il progetto è stato compilato correttamente.

    ```Output
    1>------ Build started: Project: Game, Configuration: Debug Win32 ------
    1>Game.cpp
    1>Game.vcxproj -> C:\Users\<username>\source\repos\Game\Debug\Game.exe
    ========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
    ```

## <a name="next-steps"></a>Passaggi successivi

**Precedente:** [Procedura dettagliata: utilizzo di progetti e soluzioni (C++)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md)<br/>
**Successivo:** [Procedura dettagliata: verifica di un progetto (C++)](../ide/walkthrough-testing-a-project-cpp.md)

## <a name="see-also"></a>Vedi anche

[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Progetti e sistemi di compilazione](../build/projects-and-build-systems-cpp.md)<br/>
