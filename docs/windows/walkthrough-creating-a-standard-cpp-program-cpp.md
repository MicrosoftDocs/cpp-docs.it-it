---
title: 'Procedura dettagliata: Creazione di un programma C++ Standard (C++)'
ms.custom: get-started-article
ms.date: 09/18/2018
f1_keywords:
- vcfirstapp
- vccreatefirst
helpviewer_keywords:
- command-line applications [C++], standard
- standard applications [C++]
ms.assetid: 48217e35-d892-46b7-93e3-f6f0b7e2da35
ms.openlocfilehash: 78d19a277f8bedcdbd098a662c69d6fc622a7cff
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50647469"
---
# <a name="walkthrough-creating-a-standard-c-program-c"></a>Procedura dettagliata: Creazione di un programma C++ Standard (C++)

È possibile usare Visual C++ nell'ambiente di sviluppo integrato (IDE) di Visual Studio per creare programmi C++ Standard. Seguendo i passaggi descritti in questa procedura dettagliata, è possibile creare un progetto, aggiungere un nuovo file al progetto, modificare il file per aggiungere il codice C++ e quindi compilare ed eseguire il programma usando Visual Studio.

È possibile digitare il proprio programma C++ o usare uno dei programmi di esempio. Il programma di esempio in questa procedura dettagliata è un'applicazione console. Questa applicazione usa il `set` contenitore nella libreria Standard C++.

Visual C++ segue lo Standard di C++ 2003, con le seguenti eccezioni principali: ricerca del nome in due fasi, specifiche di eccezioni ed esportazione. Inoltre, Visual C++ supporta diverse funzionalità c++0x, ad esempio, le espressioni lambda, auto, static_assert, riferimenti rvalue e modelli extern.

> [!NOTE]
> Se è necessaria la conformità allo standard, usare il `/Za` opzione del compilatore per disabilitare le estensioni Microsoft allo standard. Per altre informazioni, vedere [/Za, /Ze (Disabilita estensioni linguaggio)](../build/reference/za-ze-disable-language-extensions.md).

## <a name="prerequisites"></a>Prerequisiti

Per completare questa procedura dettagliata è necessario comprendere le nozioni di base del linguaggio C++.

### <a name="to-create-a-project-and-add-a-source-file"></a>Per creare un progetto e aggiungere un file di origine

1. Creare un progetto scegliendo **New** nel **File** menu e scegliendo **progetto**.

1. Nel **Visual C++** riquadro tipi di progetto, fare clic su **Desktop di Windows**, quindi fare clic su **applicazione Console Windows**.

   > [!NOTE]
   > Per le versioni di Visual Studio precedenti 2017, nelle **nuovo progetto** finestra di dialogo espandere **installati** > **modelli**  >  **Visual C++**, quindi selezionare **Win32**. Nel riquadro centrale, selezionare **Progetto console Win32**.

   Digitare un nome per il progetto.

   Per impostazione predefinita, la soluzione che contiene il progetto ha lo stesso nome del progetto, ma è possibile digitare un nome diverso. È anche possibile digitare un percorso diverso per il progetto.

   Fare clic su **OK** per creare il progetto.

   > [!NOTE]
   > Per le versioni di Visual Studio precedenti 2017, completare i **Creazione guidata applicazione Win32**. Fare clic su **successivo**, quindi assicurarsi che **applicazione Console** sia selezionata e deselezionare il **intestazioni precompilate** casella. Scegliere **Fine**.

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

**Precedente:** [Console applicazioni in Visual C++](../windows/console-applications-in-visual-cpp.md)<br/>
**Passaggio successivo:** [procedura dettagliata: compilazione di un programma C++ nativo nella riga di comando](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md)<br/>

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
