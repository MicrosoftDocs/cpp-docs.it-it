---
title: 'Procedura dettagliata: creazione di un programma C++ standard (C++)'
ms.custom: get-started-article
ms.date: 04/25/2019
helpviewer_keywords:
- command-line applications [C++], standard
- standard applications [C++]
ms.assetid: 48217e35-d892-46b7-93e3-f6f0b7e2da35
ms.openlocfilehash: 778a73e62a834dd73aca1a22bd4dd7f244e7bb4d
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92924250"
---
# <a name="walkthrough-creating-a-standard-c-program-c"></a>Procedura dettagliata: creazione di un programma C++ standard (C++)

È possibile utilizzare Visual Studio per creare programmi C++ standard. Seguendo i passaggi descritti in questa procedura dettagliata, è possibile creare un progetto, aggiungere un nuovo file al progetto, modificare il file per aggiungere il codice C++ e quindi compilare ed eseguire il programma con Visual Studio.

È possibile digitare un programma C++ personalizzato o utilizzare uno dei programmi di esempio. Il programma di esempio in questa procedura dettagliata è un'applicazione console. Questa applicazione usa il `set` contenitore nella libreria standard C++.

> [!NOTE]
> Se è richiesta la conformità con una versione specifica dello standard del linguaggio C++, ad esempio C++ 14 o C++ 17, usare l' `/std:c++14` `/std:c++17` opzione del compilatore o. (Visual Studio 2017 e versioni successive).

## <a name="prerequisites"></a>Prerequisites

Per completare questa procedura dettagliata è necessario comprendere le nozioni di base del linguaggio C++.

### <a name="to-create-a-project-and-add-a-source-file"></a>Per creare un progetto e aggiungere un file di origine

I passaggi seguenti variano leggermente a seconda della versione di Visual Studio in uso. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo selettore della **versione** . Si trova nella parte superiore del sommario in questa pagina.

::: moniker range="msvc-160"

### <a name="to-create-a-c-project-in-visual-studio-2019"></a>Per creare un progetto C++ in Visual Studio 2019

1. Dal menu principale scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto** .

1. Nella parte superiore della finestra di dialogo impostare **Linguaggio** su **C++** , impostare **Piattaforma** su **Windows** e impostare **Tipo di progetto** su **Console** .

1. Nell'elenco filtrato dei tipi di progetto scegliere **App console** e quindi scegliere **Avanti** . Nella pagina successiva immettere un nome per il progetto e specificare il percorso del progetto, se necessario.

1. Scegliere il pulsante **Crea** per creare il progetto.

::: moniker-end

::: moniker range="msvc-150"

### <a name="to-create-a-c-project-in-visual-studio-2017"></a>Per creare un progetto C++ in Visual Studio 2017

1. Creare un progetto scegliendo **nuovo** dal menu **file** , quindi fare clic su **progetto** .

1. Nel riquadro tipi di progetto **Visual C++** fare clic su **desktop di Windows** , quindi fare clic su **applicazione console di Windows** .

1. Digitare un nome per il progetto. Per impostazione predefinita, la soluzione che contiene il progetto ha lo stesso nome del progetto, ma è possibile digitare un nome diverso. È anche possibile digitare un percorso diverso per il progetto.

1. Fare clic su **OK** per creare il progetto.

::: moniker-end

::: moniker range="msvc-140"

### <a name="to-create-a-c-project-in-visual-studio-2015"></a>Per creare un progetto C++ in Visual Studio 2015

1. Creare un progetto scegliendo **nuovo** dal menu **file** , quindi fare clic su **progetto** .

1. Nel riquadro tipi di progetto **Visual C++** fare clic su **desktop di Windows** , quindi fare clic su **applicazione console di Windows** .

1. Nella finestra di dialogo **nuovo progetto** espandere modelli **installati**  >  **Templates**  >  **Visual C++** e quindi selezionare **Win32** . Nel riquadro centrale, selezionare **Progetto console Win32** .

1. Digitare un nome per il progetto. Per impostazione predefinita, la soluzione che contiene il progetto ha lo stesso nome del progetto, ma è possibile digitare un nome diverso. È anche possibile digitare un percorso diverso per il progetto.

1. Fare clic su **OK** per creare il progetto.

1. Completare la **creazione guidata applicazione Win32** .

1. Fare clic su **Avanti** , assicurarsi che l'opzione **applicazione console** sia selezionata e deselezionare la casella **intestazioni precompilate** .

1. Fare clic su **Fine** .

::: moniker-end

## <a name="add-a-new-source-file"></a>Aggiungere un nuovo file di origine

1. Se **Esplora soluzioni** non è visualizzato, scegliere **Esplora soluzioni** dal menu **Visualizza** .

1. Aggiungere un nuovo file di origine al progetto, come indicato di seguito.

   1. In **Esplora soluzioni** fare clic con il pulsante destro del mouse sulla cartella **file di origine** , scegliere **Aggiungi** , quindi fare clic su **nuovo elemento** .

   1. Nel nodo del **codice** fare clic su **file C++ (. cpp)** , digitare un nome per il file e quindi fare clic su **Aggiungi** .

   Il file con estensione cpp viene visualizzato nella cartella **file di origine** in **Esplora soluzioni** e il file viene aperto nell'editor di Visual Studio.

1. Nel file dell'Editor digitare un programma C++ valido che usa la libreria standard C++ oppure copiare uno dei programmi di esempio e incollarlo nel file.

1. Salvare il file.

1. Nel menu **Compila** scegliere **Compila soluzione** .

   Nella finestra **output** vengono visualizzate informazioni sullo stato di avanzamento della compilazione, ad esempio il percorso del log di compilazione e un messaggio che indica lo stato della compilazione.

1. Nel menu **Debug** fare clic su **Avvia senza eseguire debug** .

   Se è stato usato il programma di esempio, viene visualizzata una finestra di comando che indica se nel set sono presenti determinati numeri interi.

## <a name="next-steps"></a>Passaggi successivi

**Precedente:** [applicazioni console in Visual C++](./overview-of-windows-programming-in-cpp.md)<br/>
Passaggio **successivo:** [procedura dettagliata: compilazione di un programma C++ nativo nella riga di comando](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md)

## <a name="see-also"></a>Vedere anche

[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
