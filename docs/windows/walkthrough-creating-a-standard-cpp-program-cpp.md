---
title: 'Procedura dettagliata: creazione di un programma C++ standard (C++)'
ms.custom: get-started-article
ms.date: 04/25/2019
helpviewer_keywords:
- command-line applications [C++], standard
- standard applications [C++]
ms.assetid: 48217e35-d892-46b7-93e3-f6f0b7e2da35
ms.openlocfilehash: 105ac62131b45afdea2a445b5888a344f1e4d46c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370231"
---
# <a name="walkthrough-creating-a-standard-c-program-c"></a>Procedura dettagliata: creazione di un programma C++ standard (C++)

È possibile utilizzare Visual Studio per creare programmi standard di C. Seguendo i passaggi descritti in questa procedura dettagliata, è possibile creare un progetto, aggiungere un nuovo file al progetto, modificare il file per l'aggiunta di codice in C, quindi compilare ed eseguire il programma utilizzando Visual Studio.

È possibile digitare il proprio programma di tipo C o utilizzare uno dei programmi di esempio. Il programma di esempio in questa procedura dettagliata è un'applicazione console. L'applicazione `set` utilizza il contenitore nella libreria standard di C.

> [!NOTE]
> Se è necessaria la conformità con una versione specifica dello standard del linguaggio C, ad esempio C, 14 o C, utilizzare l'opzione `/std:c++14` o `/std:c++17` il compilatore. (Visual Studio 2017 e versioni successive).

## <a name="prerequisites"></a>Prerequisiti

Per completare questa procedura dettagliata è necessario comprendere le nozioni di base del linguaggio C++.

### <a name="to-create-a-project-and-add-a-source-file"></a>Per creare un progetto e aggiungere un file di origineTo create a project and add a source file

I passaggi seguenti variano leggermente a seconda della versione di Visual Studio in uso. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo Selettore **versione.** Si trova nella parte superiore del sommario in questa pagina.

::: moniker range="vs-2019"

### <a name="to-create-a-c-project-in-visual-studio-2019"></a>Per creare un progetto in Visual Studio 2019

1. Dal menu principale scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto**.

1. Nella parte superiore della finestra di dialogo impostare **Linguaggio** su **C++ **, impostare **Piattaforma** su **Windows** e impostare **Tipo di progetto** su **Console**.

1. Nell'elenco filtrato dei tipi di progetto scegliere **App console** e quindi scegliere **Avanti**. Nella pagina successiva, immettere un nome per il progetto e specificare la posizione del progetto, se lo si desidera.

1. Scegliere il pulsante **Crea** per creare il progetto.

::: moniker-end

::: moniker range="vs-2017"

### <a name="to-create-a-c-project-in-visual-studio-2017"></a>Per creare un progetto in Visual Studio 2017

1. Creare un progetto scegliendo **Nuovo** dal menu **File** e quindi facendo clic su **Progetto**.

1. Fare clic su **Windows Desktop**nella finestra di dialogo **Tipi** di progetto , quindi fare clic su Applicazione console **di Windows**.

1. Digitare un nome per il progetto. Per impostazione predefinita, la soluzione che contiene il progetto ha lo stesso nome del progetto, ma è possibile digitare un nome diverso. È inoltre possibile digitare un percorso diverso per il progetto.

1. Fare clic su **OK** per creare il progetto.

::: moniker-end

::: moniker range="vs-2015"

### <a name="to-create-a-c-project-in-visual-studio-2015"></a>Per creare un progetto in Visual Studio 2015

1. Creare un progetto scegliendo **Nuovo** dal menu **File** e quindi facendo clic su **Progetto**.

1. Fare clic su **Windows Desktop**nella finestra di dialogo **Tipi** di progetto , quindi fare clic su Applicazione console **di Windows**.

1. Nella finestra di dialogo **Nuovo progetto** , espandere**Modelli** >  **installati** > **, Visual C,** quindi selezionare **Win32**. Nel riquadro centrale, selezionare **Progetto console Win32**.

1. Digitare un nome per il progetto. Per impostazione predefinita, la soluzione che contiene il progetto ha lo stesso nome del progetto, ma è possibile digitare un nome diverso. È inoltre possibile digitare un percorso diverso per il progetto.

1. Fare clic su **OK** per creare il progetto.

1. Completare la **Creazione guidata applicazione Win32**.

1. Fare clic su **Avanti**, quindi assicurarsi che **l'opzione Applicazione console** sia selezionata e deselezionare la casella Intestazioni **precompilate.**

1. Fare clic su **Fine**.

::: moniker-end

## <a name="add-a-new-source-file"></a>Aggiungere un nuovo file di origine

1. Se **Esplora soluzioni** non è visualizzato, scegliere **Esplora soluzioni**dal menu **Visualizza** .

1. Aggiungere un nuovo file di origine al progetto, come indicato di seguito.

   1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse sulla cartella File di **origine,** **scegliere Aggiungi**, quindi Fare clic su Nuovo **elemento**.

   1. Nel nodo **Codice** , fare clic su **File di C,** digitare un nome per il file e quindi fare clic su **Aggiungi**.

   Il file con estensione cpp viene visualizzato nella cartella File di **origine** in **Esplora soluzioni**e il file viene aperto nell'editor di Visual Studio.

1. Nel file nell'editor, digitare un programma valido di C, che utilizza la libreria standard di C, oppure copiare uno dei programmi di esempio e incollarlo nel file.

1. Salvare il file.

1. Nel menu **Compila** scegliere **Compila soluzione**.

   Nella finestra **Output** vengono visualizzate informazioni sull'avanzamento della compilazione, ad esempio il percorso del log di compilazione e un messaggio che indica lo stato della compilazione.

1. Nel menu **Debug** fare clic su **Avvia senza eseguire debug**.

   Se è stato utilizzato il programma di esempio, viene visualizzata una finestra di comando che indica se determinati numeri interi si trovano nel set.

## <a name="next-steps"></a>Passaggi successivi

**Precedente:** [Applicazioni console in Visual C](../windows/console-applications-in-visual-cpp.md)<br/>
**Successiva:** [Procedura dettagliata: Compilazione di un programma nativo](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md) in C, nella riga di comando

## <a name="see-also"></a>Vedere anche

[Guida di riferimento al linguaggio C](../cpp/cpp-language-reference.md)<br/>
[Libreria standard di C](../standard-library/cpp-standard-library-reference.md)
