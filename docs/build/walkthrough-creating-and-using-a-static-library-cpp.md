---
title: 'Procedura dettagliata: Creazione e utilizzo di una libreria statica (C++)'
description: Usare C++ per creare una libreria statica (lib) in Visual Studio.
ms.custom: get-started-article
ms.date: 04/25/2019
helpviewer_keywords:
- libraries [C++], static
- static libraries [C++]
ms.assetid: 3cc36411-7d66-4240-851e-dacb9a8fd6ac
ms.author: corob
ms.openlocfilehash: afb12cc38dbaf0af88e93a9b329a59f3b54c8557
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65217571"
---
# <a name="walkthrough-creating-and-using-a-static-library-c"></a>Procedura dettagliata: Creazione e utilizzo di una libreria statica (C++)

Questa procedura dettagliata illustra come creare una libreria statica (un file con estensione lib) da usare con le app C++. L'uso di una libreria statica è consigliato per riusare il codice. Anziché modificati le stesse routine in tutte le app che richiedono la funzionalità, in cui vengono scritte una volta in una libreria statica e quindi farvi riferimento dalle app. Il codice collegato a una libreria statica diventa parte dell'applicazione. Non è necessario installare un altro file per usare il codice.

In questa procedura dettagliata vengono illustrate le seguenti attività:

- [Creazione di un progetto di libreria statica](#CreateLibProject)

- [Aggiunta di una classe alla libreria statica](#AddClassToLib)

- [Creazione di un'applicazione console che fa riferimento alla libreria statica](#CreateAppToRefTheLib)

- [Uso della funzionalità della libreria statica nell'applicazione](#UseLibInApp)

- [Esecuzione dell'app](#RunApp)

## <a name="prerequisites"></a>Prerequisiti

Conoscenza delle nozioni di base del linguaggio C++.

##  <a name="CreateLibProject"></a> Creazione di un progetto di libreria statica

Le istruzioni su come creare il progetto variano a seconda se si usa Visual Studio 2019 o una versione precedente. Assicurarsi di avere la versione corretta impostata in alto a sinistra della pagina.

::: moniker range="vs-2019"

### <a name="to-create-a-static-library-project-in-visual-studio-2019"></a>Per creare un progetto di libreria statica in Visual Studio 2019

1. Nella barra dei menu, scegliere **File** > **New** > **progetto** per aprire la **crea un nuovo progetto** nella finestra di dialogo.

1. Nella parte superiore della finestra di dialogo, impostare **Language** al **C++**, impostare **Platform** al **Windows**e impostare **tipodiprogetto** al **libreria**. 

1. Nell'elenco filtrato dei tipi di progetto, scegliere **libreria statica** quindi scegliere **successivo**. Nella pagina successiva, immettere *MathFuncsLib* nel **nome** casella per specificare un nome per il progetto e specificare il percorso del progetto se si desidera.

1. Scegliere il **Create** pulsante per creare il progetto client.

::: moniker-end

::: moniker range="vs-2017"

### <a name="to-create-a-static-library-project-in-visual-studio-2017"></a>Per creare un progetto di libreria statica in Visual Studio 2017

1. Nella barra dei menu scegliere **File** > **Nuovo** > **Progetto**.

1. Nel riquadro sinistro della finestra di **nuovo progetto** finestra di dialogo espandere **installato** > **Visual C++** e quindi selezionare **Windows Desktop**. Nel riquadro centrale, selezionare **Creazione guidata applicazione Desktop Windows**.

1. Specificare il nome del progetto, ad esempio *MathFuncsLib*, nella casella **Nome** . Specificare un nome per la soluzione, ad esempio *StaticLibrary*, nella casella **Nome soluzione** . Fare clic sul pulsante **OK** .

1. Sotto **tipo di applicazione**, selezionare **libreria statica (lib)**.

1. Sotto **opzioni aggiuntive**, deselezionare le **intestazione precompilata** casella di controllo.

1. Scegli **OK** per creare il progetto.

::: moniker-end

::: moniker range="vs-2015"

### <a name="to-create-a-static-library-project-in-visual-studio-2015"></a>Per creare un progetto di libreria statica in Visual Studio 2015

1. Nella barra dei menu scegliere **File** > **Nuovo** > **Progetto**.

1. Nel **nuovo progetto** finestra di dialogo espandere **installati** > **modelli** > **Visual C++** , e quindi selezionare **Win32**. Nel riquadro centrale, selezionare **Progetto console Win32**.

1. Specificare il nome del progetto, ad esempio *MathFuncsLib*, nella casella **Nome** . Specificare un nome per la soluzione, ad esempio *StaticLibrary*, nella casella **Nome soluzione** . Fare clic sul pulsante **OK** .

1. Scegliere **Avanti**.

1. Sotto **tipo di applicazione**, selezionare **libreria statica**. Deselezionare i **intestazione precompilata** e selezionare **fine**.

::: moniker-end

##  <a name="AddClassToLib"></a> Aggiunta di una classe alla libreria statica

### <a name="to-add-a-class-to-the-static-library"></a>Per aggiungere una classe alla libreria statica

1. Per creare un file di intestazione per una nuova classe, aprire il menu di scelta rapida per il **MathFuncsLib** del progetto **Esplora soluzioni**, quindi scegliere **Add**  >   **Nuovo elemento**. Nella finestra di dialogo **Aggiungi nuovo elemento** nel riquadro sinistro in **Visual C++**, selezionare **Codice**. Nel riquadro centrale selezionare **File di intestazione (.h)**. Specificare un nome per il file d'intestazione, ad esempio *MathFuncsLib.h*e quindi scegliere il pulsante **Aggiungi** . Viene visualizzato un file di intestazione vuoto.

1. Aggiungere una classe denominata `MyMathFuncs` per eseguire operazioni matematiche comuni quali addizione, sottrazione, moltiplicazione e divisione. Il codice dovrebbe essere simile:

   [!code-cpp[NVC_Walkthrough_Create_Static_Lib#100](../windows/codesnippet/CPP/walkthrough-creating-and-using-a-static-library-cpp_1.h)]

1. Per creare un file di origine per la nuova classe, aprire il menu di scelta rapida per il **MathFuncsLib** del progetto **Esplora soluzioni**, quindi scegliere **Add**  >   **Nuovo elemento**. Nella finestra di dialogo **Aggiungi nuovo elemento** nel riquadro sinistro in **Visual C++**, selezionare **Codice**. Nel riquadro centrale selezionare **File di C++ (.cpp)**. Specificare un nome per il file di origine, ad esempio *MathFuncsLib.cpp*e quindi scegliere il pulsante **Aggiungi** . Viene visualizzato un file di origine vuoto.

1. Usare questo file di origine per implementare la funzionalità per **MyMathFuncs**. Il codice dovrebbe essere simile:

   [!code-cpp[NVC_Walkthrough_Create_Static_Lib#110](../windows/codesnippet/CPP/walkthrough-creating-and-using-a-static-library-cpp_2.cpp)]

1. Compilare la libreria statica selezionando **compilare** > **Compila soluzione** nella barra dei menu. La compilazione viene creata una libreria statica che può essere utilizzata da altri programmi.

   > [!NOTE]
   > Quando si usa la riga di comando in Visual Studio per la compilazione, è necessario compilare il programma in due passaggi. Eseguire innanzitutto `cl /c /EHsc MathFuncsLib.cpp` per compilare il codice e creare un file oggetto denominato `MathFuncsLib.obj`. Il comando `cl` richiama il compilatore, Cl.exe, e l'opzione `/c` specifica la compilazione senza collegamento. Per altre informazioni, vedere [/c (compila senza collegamenti)](../build/reference/c-compile-without-linking.md).) In secondo luogo, eseguire `lib MathFuncsLib.obj` per collegare il codice e creare la libreria statica `MathFuncsLib.lib`. Il comando `lib` richiama Gestione librerie, Lib.exe. Per altre informazioni, vedere [LIB Reference](../build/reference/lib-reference.md).

##  <a name="CreateAppToRefTheLib"></a> Creazione di un'applicazione console che fa riferimento alla libreria statica

::: moniker range="vs-2019"

### <a name="to-create-a-c-console-app-that-references-the-static-library-in-visual-studio-2019"></a>Per creare un C++ app console che fa riferimento alla libreria statica in Visual Studio 2019

1. Nelle **Esplora soluzioni**, fare clic sul nodo principale per la soluzione e scegliere **Add** > **nuovo progetto** per aprire il **aggiungere un nuovo progetto**  nella finestra di dialogo.

1. Nella parte superiore della finestra di dialogo, impostare **Language** al **C++**, impostare **Platform** al **Windows**e impostare **tipodiprogetto** al **Console**. 

1. Nell'elenco filtrato dei tipi di progetto, scegliere **applicazione Console** quindi scegliere **successivo**. Nella pagina successiva, immettere *MyExecRefsLib* nel **nome** casella per specificare un nome per il progetto e specificare il percorso del progetto se si desidera.

1. Scegliere il **Create** pulsante per creare il progetto client.

::: moniker-end

::: moniker range="vs-2017"

### <a name="to-create-a-c-console-app-that-references-the-static-library-in-visual-studio-2017"></a>Per creare un C++ app console che fa riferimento alla libreria statica in Visual Studio 2017

1. Nella barra dei menu scegliere **File** > **Nuovo** > **Progetto**.

1. Nel riquadro sinistro della finestra di **nuovo progetto** finestra di dialogo espandere **installato** > **Visual C++** e quindi selezionare **Windows Desktop**. Nel riquadro centrale, selezionare **Creazione guidata applicazione Desktop Windows**.

1. Specificare il nome del progetto, ad esempio *MyExecRefsLib*, nella casella **Nome** . Nell'elenco a discesa accanto a **Soluzione**selezionare **Aggiungi a soluzione**. Il comando aggiunge il nuovo progetto alla soluzione che contiene le librerie statiche. Fare clic sul pulsante **OK** .

1. Sotto **tipo di applicazione**, selezionare **applicazione Console (.exe)**.

1. Sotto **opzioni aggiuntive**, deselezionare le **intestazione precompilata** casella di controllo.

1. Scegli **OK** per creare il progetto.

::: moniker-end

::: moniker range="vs-2015"

### <a name="to-create-a-c-console-app-that-references-the-static-library-in-visual-studio-2015"></a>Per creare un C++ app console che fa riferimento alla libreria statica in Visual Studio 2015

1. Nella barra dei menu scegliere **File** > **Nuovo** > **Progetto**.

1. Nel **nuovo progetto** finestra di dialogo espandere **installati** > **modelli** > **Visual C++** , e quindi selezionare **Win32**. Nel riquadro centrale, selezionare **Progetto console Win32**.

1. Specificare il nome del progetto, ad esempio *MyExecRefsLib*, nella casella **Nome** . Nell'elenco a discesa accanto a **Soluzione**selezionare **Aggiungi a soluzione**. Il comando aggiunge il nuovo progetto alla soluzione che contiene le librerie statiche. Fare clic sul pulsante **OK** .

1. Scegliere **Avanti**.

1. Assicurarsi che **applicazione Console** sia selezionata. Quindi controllare la **progetto vuoto** e selezionare **fine**.

::: moniker-end

##  <a name="UseLibInApp"></a> Uso della funzionalità della libreria statica nell'applicazione

### <a name="to-use-the-functionality-from-the-static-library-in-the-app"></a>Per usare questa funzionalità della libreria statica nell'applicazione

1. Dopo aver creato un'applicazione console, verrà creato un programma vuoto. Il nome del file di origine è uguale al nome scelto in precedenza. Nell'esempio, il file è denominato `MyExecRefsLib.cpp`.

1. Per poter usare le routine matematiche della libreria statica, è necessario fare riferimento a esse. Aprire il menu di scelta rapida per il **MyExecRefsLib** del progetto **Esplora soluzioni**, quindi scegliere **Add** > **riferimento**.

1. La finestra di dialogo **Aggiungi riferimento** contiene l'elenco di tutte le librerie a cui è possibile fare riferimento. Il **progetti** scheda vengono elencati i progetti nella soluzione corrente e le eventuali librerie che fanno riferimento. Nella scheda **Progetti** selezionare la casella di controllo **MathFuncsLib** e quindi scegliere il pulsante **OK** .

1. Per fare riferimento al `MathFuncsLib.h` file di intestazione, è necessario modificare il percorso delle directory incluse. Nella finestra di dialogo **Pagine delle proprietà** per **MyExecRefsLib**espandere il nodo **Proprietà di configurazione** , il nodo **C/C++** e quindi selezionare **Generale**. Accanto a **directory di inclusione aggiuntive**, specificare il percorso delle **MathFuncsLib** directory o cercarlo.

   Per accedere al percorso della directory, aprire il menu a discesa dei valori della proprietà, quindi selezionare **Modifica**. Nel **directory di inclusione aggiuntive** nella casella di testo, finestra di dialogo selezionare una riga vuota e quindi scegliere il pulsante con puntini di sospensione (**...** ) alla fine della riga. Nella finestra di dialogo **Seleziona directory** selezionare la directory contenente **MathFuncsLib** e quindi scegliere il pulsante **Selezione cartella** per salvare la selezione e chiudere la finestra di dialogo. Nella finestra di dialogo **Directory di inclusione aggiuntive** scegliere il pulsante **OK** , quindi nella finestra di dialogo **Pagine delle proprietà** , scegliere il pulsante **OK** per salvare le modifiche apportate al progetto.

1. È ora possibile usare la `MyMathFuncs` classe in questa app includendo la `#include "MathFuncsLib.h"` intestazione nel codice. Sostituire il contenuto di `MyExecRefsLib.cpp` con questo codice:

   [!code-cpp[NVC_Walkthrough_Create_Static_Lib#120](../windows/codesnippet/CPP/walkthrough-creating-and-using-a-static-library-cpp_3.cpp)]

1. Compilare l'eseguibile scegliendo **compilare** > **Compila soluzione** nella barra dei menu.

##  <a name="RunApp"></a> Esecuzione dell'app

### <a name="to-run-the-app"></a>Per eseguire l'app

1. Assicurarsi che **MyExecRefsLib** sia selezionato come progetto predefinito aprendo il menu di scelta rapida di **MyExecRefsLib** in **Esplora soluzioni**e quindi selezionando **Imposta come progetto di avvio**.

1. Per eseguire il progetto, sulla barra dei menu scegliere **Debug** > **Avvia senza eseguire debug**. L'output dovrebbe essere simile:

    ```Output
    a + b = 106.4
    a - b = -91.6
    a * b = 732.6
    a / b = 0.0747475
    ```

## <a name="see-also"></a>Vedere anche

[Procedura dettagliata: Creare e usare la propria libreria a collegamento dinamico (C++)](../build/walkthrough-creating-and-using-a-dynamic-link-library-cpp.md)<br/>
[Applicazioni desktop (Visual C++)](../windows/desktop-applications-visual-cpp.md)<br/>
