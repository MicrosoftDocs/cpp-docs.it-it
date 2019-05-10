---
title: 'Procedura dettagliata: Creazione di un programma C++ Standard (C++)'
ms.custom: get-started-article
ms.date: 04/25/2019
helpviewer_keywords:
- command-line applications [C++], standard
- standard applications [C++]
ms.assetid: 48217e35-d892-46b7-93e3-f6f0b7e2da35
ms.openlocfilehash: ed9c19dad029f8fc9495d38ab6e5c0ba8ad6d529
ms.sourcegitcommit: 18d3b1e9cdb4fc3a76f7a650c31994bdbd2bde64
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/29/2019
ms.locfileid: "64877410"
---
# <a name="walkthrough-creating-a-standard-c-program-c"></a>Procedura dettagliata: Creazione di un programma C++ Standard (C++)

È possibile usare Visual Studio per creare Standard C++ programmi. Seguendo i passaggi descritti in questa procedura dettagliata, è possibile creare un progetto, aggiungere un nuovo file al progetto, modificare il file per aggiungere il codice C++ e quindi compilare ed eseguire il programma usando Visual Studio.

È possibile digitare il proprio programma C++ o usare uno dei programmi di esempio. Il programma di esempio in questa procedura dettagliata è un'applicazione console. Questa applicazione usa il `set` contenitore nella libreria Standard C++.

> [!NOTE]
> Se la conformità con una versione specifica del C++ standard del linguaggio (ad esempio c++14 o c++17) è richiesto, usare il `/std:C++14` oppure `/std:c++17` opzione del compilatore. (Visual Studio 2017 e versioni successiva.)

## <a name="prerequisites"></a>Prerequisiti

Per completare questa procedura dettagliata è necessario comprendere le nozioni di base del linguaggio C++.

### <a name="to-create-a-project-and-add-a-source-file"></a>Per creare un progetto e aggiungere un file di origine

Questa procedura varia a seconda di quale versione di Visual Studio in uso. Assicurarsi che il selettore di versione in alto a sinistra della pagina sia impostato correttamente.

::: moniker range="vs-2019"

### <a name="to-create-a-c-project-in-visual-studio-2019"></a>Per creare un C++ progetto in Visual Studio 2019

1. Dal menu principale, scegliere **File** > **New** > **progetto** per aprire la **crea un nuovo progetto** finestra di dialogo casella.

1. Nella parte superiore della finestra di dialogo, impostare **Language** al **C++**, impostare **Platform** al **Windows**e impostare **tipodiprogetto** al **Console**. 

1. Nell'elenco filtrato dei tipi di progetto, scegliere **applicazione Console** quindi scegliere **successivo**. Nella pagina successiva, immettere un nome per il progetto e specificare il percorso del progetto se si desidera.

1. Scegliere il **Create** pulsante per creare il progetto.

::: moniker-end

::: moniker range="vs-2017"

### <a name="to-create-a-c-project-in-visual-studio-2017"></a>Per creare un C++ progetto in Visual Studio 2017

1. Creare un progetto scegliendo **New** nel **File** menu e scegliendo **progetto**.

1. Nel **Visual C++** riquadro tipi di progetto, fare clic su **Desktop di Windows**, quindi fare clic su **applicazione Console Windows**.

1. Digitare un nome per il progetto. Per impostazione predefinita, la soluzione che contiene il progetto ha lo stesso nome del progetto, ma è possibile digitare un nome diverso. È anche possibile digitare un percorso diverso per il progetto.

1. Fare clic su **OK** per creare il progetto.

::: moniker-end

::: moniker range="vs-2015"

### <a name="to-create-a-c-project-in-visual-studio-2015"></a>Per creare un C++ progetto di Visual Studio 2015

1. Creare un progetto scegliendo **New** nel **File** menu e scegliendo **progetto**.

1. Nel **Visual C++** riquadro tipi di progetto, fare clic su **Desktop di Windows**, quindi fare clic su **applicazione Console Windows**.

1. Nel **nuovo progetto** finestra di dialogo espandere **installati** > **modelli** > **Visual C++** , e quindi selezionare **Win32**. Nel riquadro centrale, selezionare **Progetto console Win32**.

1. Digitare un nome per il progetto. Per impostazione predefinita, la soluzione che contiene il progetto ha lo stesso nome del progetto, ma è possibile digitare un nome diverso. È anche possibile digitare un percorso diverso per il progetto.

1. Fare clic su **OK** per creare il progetto.

1. Completare la **Creazione guidata applicazione Win32**. 

1. Fare clic su **successivo**, quindi assicurarsi che **applicazione Console** sia selezionata e deselezionare il **intestazioni precompilate** casella. 

1. Scegliere **Fine**.

::: moniker-end

## <a name="add-a-new-source-file"></a>Aggiungere un nuovo file di origine

1. Se **Esplora soluzioni** non è visualizzato, scegliere il **View** dal menu fare clic su **Esplora**.

1. Aggiungere un nuovo file di origine al progetto, come indicato di seguito.

   1. In **Esplora soluzioni**, fare doppio clic sul **i file di origine** cartella, scegliere **Add**, quindi fare clic su **nuovo elemento**.

   1. Nel **codice** nodo, fare clic su **File di C++ (. cpp)**, digitare un nome per il file e quindi fare clic su **Add**.

   Il file con estensione cpp verrà visualizzato nei **file di origine** cartella **Esplora soluzioni**, e il file viene aperto nell'editor di Visual Studio.

1. Nel file nell'editor, digitare un programma C++ valido che utilizza la libreria Standard C++, oppure copiare uno dei programmi di esempio e incollarlo nel file.

1. Salvare il file.

1. Scegliere **Compila soluzione** dal menu **Compila**.

   Il **Output** finestra vengono visualizzate informazioni sullo stato di avanzamento compilazione, ad esempio, il percorso del log di compilazione e un messaggio che indica lo stato della compilazione.

1. Nel menu **Debug** fare clic su **Avvia senza eseguire debug**.

   Se è stato usato il programma di esempio, una finestra di comando viene visualizzata e Mostra se sono presenti determinati Integer nel set.

## <a name="next-steps"></a>Passaggi successivi

**Precedente:** [Applicazioni console in Visual C++](../windows/console-applications-in-visual-cpp.md)<br/>
**Successivo:** [Procedura dettagliata: Compilazione di un programma C++ nativo nella riga di comando](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md)<br/>

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
