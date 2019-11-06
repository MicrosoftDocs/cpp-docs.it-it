---
title: 'Procedura dettagliata: creazione di C++ un programmaC++standard ()'
ms.custom: get-started-article
ms.date: 04/25/2019
helpviewer_keywords:
- command-line applications [C++], standard
- standard applications [C++]
ms.assetid: 48217e35-d892-46b7-93e3-f6f0b7e2da35
ms.openlocfilehash: 9b2d1f3bf1a229a0590553369e37bc07f35ada33
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73627135"
---
# <a name="walkthrough-creating-a-standard-c-program-c"></a>Procedura dettagliata: creazione di C++ un programmaC++standard ()

È possibile usare Visual Studio per creare programmi C++ standard. Seguendo i passaggi descritti in questa procedura dettagliata, è possibile creare un progetto, aggiungere un nuovo file al progetto, modificare il file per aggiungere C++ il codice, quindi compilare ed eseguire il programma con Visual Studio.

È possibile digitare un programma C++ personalizzato o utilizzare uno dei programmi di esempio. Il programma di esempio in questa procedura dettagliata è un'applicazione console. Questa applicazione usa il contenitore `set` nella libreria C++ standard.

> [!NOTE]
> Se è richiesta la conformità con una versione C++ specifica dello standard del linguaggio (ad esempio c++ 14 o c++ 17), usare l'opzione del compilatore `/std:c++14` o `/std:c++17`. (Visual Studio 2017 e versioni successive).

## <a name="prerequisites"></a>Prerequisites

Per completare questa procedura dettagliata è necessario comprendere le nozioni di base del linguaggio C++.

### <a name="to-create-a-project-and-add-a-source-file"></a>Per creare un progetto e aggiungere un file di origine

I passaggi seguenti variano leggermente a seconda della versione di Visual Studio in uso. Assicurarsi che il selettore della versione in alto a sinistra nella pagina sia impostato correttamente.

::: moniker range="vs-2019"

### <a name="to-create-a-c-project-in-visual-studio-2019"></a>Per creare un C++ progetto in Visual Studio 2019

1. Dal menu principale scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto**.

1. Nella parte superiore della finestra di dialogo impostare **Linguaggio** su **C++** , impostare **Piattaforma** su **Windows** e impostare **Tipo di progetto** su **Console**. 

1. Nell'elenco filtrato dei tipi di progetto scegliere **App console** e quindi scegliere **Avanti**. Nella pagina successiva immettere un nome per il progetto e specificare il percorso del progetto, se necessario.

1. Scegliere il pulsante **Crea** per creare il progetto.

::: moniker-end

::: moniker range="vs-2017"

### <a name="to-create-a-c-project-in-visual-studio-2017"></a>Per creare un C++ progetto in Visual Studio 2017

1. Creare un progetto scegliendo **nuovo** dal menu **file** , quindi fare clic su **progetto**.

1. Nel riquadro tipi di progetto **visuale C++**  fare clic su **desktop di Windows**, quindi fare clic su **applicazione console di Windows**.

1. Digitare un nome per il progetto. Per impostazione predefinita, la soluzione che contiene il progetto ha lo stesso nome del progetto, ma è possibile digitare un nome diverso. È anche possibile digitare un percorso diverso per il progetto.

1. Fare clic su **OK** per creare il progetto.

::: moniker-end

::: moniker range="vs-2015"

### <a name="to-create-a-c-project-in-visual-studio-2015"></a>Per creare un C++ progetto in Visual Studio 2015

1. Creare un progetto scegliendo **nuovo** dal menu **file** , quindi fare clic su **progetto**.

1. Nel riquadro tipi di progetto **visuale C++**  fare clic su **desktop di Windows**, quindi fare clic su **applicazione console di Windows**.

1. Nella finestra di dialogo **nuovo progetto** espandere **installato** > **modelli** > oggetto **visivo C++** e quindi selezionare **Win32**. Nel riquadro centrale, selezionare **Progetto console Win32**.

1. Digitare un nome per il progetto. Per impostazione predefinita, la soluzione che contiene il progetto ha lo stesso nome del progetto, ma è possibile digitare un nome diverso. È anche possibile digitare un percorso diverso per il progetto.

1. Fare clic su **OK** per creare il progetto.

1. Completare la **creazione guidata applicazione Win32**. 

1. Fare clic su **Avanti**, assicurarsi che l'opzione **applicazione console** sia selezionata e deselezionare la casella **intestazioni precompilate** . 

1. Scegliere **Fine**.

::: moniker-end

## <a name="add-a-new-source-file"></a>Aggiungere un nuovo file di origine

1. Se **Esplora soluzioni** non è visualizzato, scegliere **Esplora soluzioni**dal menu **Visualizza** .

1. Aggiungere un nuovo file di origine al progetto, come indicato di seguito.

   1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse sulla cartella **file di origine** , scegliere **Aggiungi**, quindi fare clic su **nuovo elemento**.

   1. Nel nodo del **codice** , fare clic su  **C++ file (. cpp)** , digitare un nome per il file e quindi fare clic su **Aggiungi**.

   Il file con estensione cpp viene visualizzato nella cartella **file di origine** in **Esplora soluzioni**e il file viene aperto nell'editor di Visual Studio.

1. Nel file dell'Editor digitare un programma valido C++ che utilizza la C++ libreria standard oppure copiare uno dei programmi di esempio e incollarlo nel file.

1. Salvare il file.

1. Scegliere **Compila soluzione** dal menu **Compila**.

   Nella finestra **output** vengono visualizzate informazioni sullo stato di avanzamento della compilazione, ad esempio il percorso del log di compilazione e un messaggio che indica lo stato della compilazione.

1. Nel menu **Debug** fare clic su **Avvia senza eseguire debug**.

   Se è stato usato il programma di esempio, viene visualizzata una finestra di comando che indica se nel set sono presenti determinati numeri interi.

## <a name="next-steps"></a>Passaggi successivi

**Precedente:** [applicazioni console in Visual C++ ](../windows/console-applications-in-visual-cpp.md)<br/>
Passaggio **successivo:** [procedura dettagliata: compilazione di C++ un programma nativo nella riga di comando](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md)

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
