---
title: 'Procedura dettagliata: Creazione e utilizzo di una libreria statica'
description: Utilizzare il linguaggio C, per creare una libreria statica (con estensione lib) in Visual Studio.
ms.custom: get-started-article
ms.date: 04/13/2020
helpviewer_keywords:
- libraries [C++], static
- static libraries [C++]
ms.assetid: 3cc36411-7d66-4240-851e-dacb9a8fd6ac
ms.openlocfilehash: 7148cc1de7c06ae57d61560311b342a1fc9dda1f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81335143"
---
# <a name="walkthrough-create-and-use-a-static-library"></a>Procedura dettagliata: Creare e usare una libreria staticaWalkthrough: Create and use a static library

Questa procedura dettagliata illustra come creare una libreria statica (un file con estensione lib) da usare con le app C++. L'uso di una libreria statica è consigliato per riusare il codice. Anziché reimplementare le stesse routine in ogni app che richiede la funzionalità, è possibile scriverle una sola volta in una libreria statica e quindi farvi riferimento dalle app. Il codice collegato da una libreria statica diventa parte dell'app: non è necessario installare un altro file per usare il codice.

In questa procedura dettagliata vengono illustrate le seguenti attività:

- [Creare un progetto di libreria staticaCreate a static library project](#CreateLibProject)

- [Aggiungere una classe alla libreria statica](#AddClassToLib)

- [Creare un'app per la console di C' che fa riferimento alla libreria statica](#CreateAppToRefTheLib)

- [Usare la funzionalità della libreria statica nell'app](#UseLibInApp)

- [Eseguire l'app](#RunApp)

## <a name="prerequisites"></a>Prerequisiti

Conoscenza delle nozioni di base del linguaggio C++.

## <a name="create-a-static-library-project"></a><a name="CreateLibProject"></a>Creare un progetto di libreria staticaCreate a static library project

Le istruzioni per la creazione del progetto variano a seconda della versione di Visual Studio. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo Selettore **versione.** Si trova nella parte superiore del sommario in questa pagina.

::: moniker range="vs-2019"

### <a name="to-create-a-static-library-project-in-visual-studio-2019"></a>Per creare un progetto di libreria statica in Visual Studio 2019To create a static library project in Visual Studio 2019

1. Sulla barra dei menu scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto**.

1. Nella parte superiore della finestra di dialogo impostare **Linguaggio** su **C++ **, impostare **Piattaforma** su **Windows** e impostare **Tipo di progetto** su **Libreria**.

1. Dall'elenco filtrato dei tipi di progetto, selezionare **Creazione guidata desktop di Windows**, quindi scegliere **Avanti**.

1. Nella pagina **Configura il nuovo progetto** immettere *MathLibrary* nella casella **Nome progetto** per specificare un nome per il progetto. Immettere *StaticMath* nella casella **Nome soluzione.** Scegliere il pulsante **Crea** per aprire la finestra di dialogo **Progetto desktop Windows.**

1. Nella finestra di dialogo **Progetto desktop di Windows,** in **Tipo di applicazione,** selezionare **Libreria statica (lib)**.

1. In **Opzioni aggiuntive**deselezionare la casella di controllo **Intestazione precompilata** se è selezionata. Selezionare la casella **Progetto vuoto.**

1. Scegliere **OK** per creare il progetto.

::: moniker-end

::: moniker range="vs-2017"

### <a name="to-create-a-static-library-project-in-visual-studio-2017"></a>Per creare un progetto di libreria statica in Visual Studio 2017To create a static library project in Visual Studio 2017

1. Nella barra dei menu scegliere **File** > **Nuovo** > **progetto**.

1. Nella finestra di dialogo **Nuovo progetto** , selezionare **Installato** > **visual C ,** > **Desktop di Windows**. Nel riquadro centrale selezionare **Creazione guidata applicazione desktop di Windows**.

1. Specificare un nome per il progetto, ad esempio *MathLibrary,* nella casella **Nome.** Specificare un nome per la soluzione, ad esempio *StaticMath,* nella casella **Nome soluzione.** Fare clic su **OK** .

1. Nella finestra di dialogo **Progetto desktop di Windows,** in **Tipo di applicazione,** selezionare **Libreria statica (lib)**.

1. In **Opzioni aggiuntive**deselezionare la casella di controllo **Intestazione precompilata** se è selezionata. Selezionare la casella **Progetto vuoto.**

1. Scegliere **OK** per creare il progetto.

::: moniker-end

::: moniker range="vs-2015"

### <a name="to-create-a-static-library-project-in-visual-studio-2015"></a>Per creare un progetto di libreria statica in Visual Studio 2015To create a static library project in Visual Studio 2015

1. Nella barra dei menu scegliere **File** > **Nuovo** > **progetto**.

1. Nella finestra di dialogo **Nuovo progetto** , selezionare**I modelli** >  **installati** > **di Visual C** > **Win32** Nel riquadro centrale, selezionare **Progetto console Win32**.

1. Specificare un nome per il progetto, ad esempio *MathLibrary,* nella casella **Nome.** Specificare un nome per la soluzione, ad esempio *StaticMath,* nella casella **Nome soluzione.** Fare clic su **OK** .

1. Nella **Creazione guidata applicazione Win32**scegliere **Avanti**.

1. Nella pagina **Impostazioni applicazione,** in **Tipo di applicazione,** selezionare **Libreria statica.** In **Opzioni aggiuntive**deselezionare la casella di controllo **Intestazione precompilata.** Scegliere **Fine** per creare il progetto.

::: moniker-end

## <a name="add-a-class-to-the-static-library"></a><a name="AddClassToLib"></a>Aggiungere una classe alla libreria statica

### <a name="to-add-a-class-to-the-static-library"></a>Per aggiungere una classe alla libreria statica

1. Per creare un file di intestazione per una nuova classe, fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida per il progetto **MathLibrary** in **Esplora soluzioni**, quindi **scegliere Aggiungi** > **nuovo elemento**.

1. Nella finestra di dialogo **Aggiungi nuovo elemento** , selezionare**Visual** **C** >  Nel riquadro centrale selezionare **File di intestazione (.h)**. Specificare un nome per il file di intestazione, ad esempio *MathLibrary.h,* quindi scegliere il pulsante **Aggiungi.** Viene visualizzato un file di intestazione quasi vuoto.

1. Aggiungere una dichiarazione `Arithmetic` per una classe denominata per eseguire operazioni matematiche comuni, ad esempio addizione, sottrazione, moltiplicazione e divisione. Il codice dovrebbe essere simile al:

    ```cpp
    // MathLibrary.h
    #pragma once

    namespace MathLibrary
    {
        class Arithmetic
        {
        public:
            // Returns a + b
            static double Add(double a, double b);

            // Returns a - b
            static double Subtract(double a, double b);

            // Returns a * b
            static double Multiply(double a, double b);

            // Returns a / b
            static double Divide(double a, double b);
        };
    }
    ```

1. Per creare un file di origine per la nuova classe, aprire il menu di scelta rapida per il progetto **MathLibrary** in **Esplora soluzioni**, quindi scegliere **Aggiungi** > **nuovo elemento**.

1. Nella finestra di dialogo **Aggiungi nuovo elemento,** nel riquadro centrale, selezionare **File di C, ovvero cpp.** Specificare un nome per il file di origine, ad esempio *MathLibrary.cpp,* quindi scegliere il pulsante **Aggiungi.** Viene visualizzato un file di origine vuoto.

1. Utilizzare questo file di origine `Arithmetic`per implementare la funzionalità per la classe . Il codice dovrebbe essere simile al:

    ```cpp
    // MathLibrary.cpp
    // compile with: cl /c /EHsc MathLibrary.cpp
    // post-build command: lib MathLibrary.obj

    #include "MathLibrary.h"

    namespace MathLibrary
    {
        double Arithmetic::Add(double a, double b)
        {
            return a + b;
        }

        double Arithmetic::Subtract(double a, double b)
        {
            return a - b;
        }

        double Arithmetic::Multiply(double a, double b)
        {
            return a * b;
        }

        double Arithmetic::Divide(double a, double b)
        {
            return a / b;
        }
    }
    ```

1. Per compilare la libreria statica, selezionare **Compila** > **soluzione** nella barra dei menu. La compilazione crea una libreria statica, *MathLibrary.lib*, che può essere utilizzata da altri programmi.

   > [!NOTE]
   > Quando si usa la riga di comando in Visual Studio per la compilazione, è necessario compilare il programma in due passaggi. Innanzitutto, `cl /c /EHsc MathLibrary.cpp` eseguire per compilare il codice e creare un file oggetto denominato *MathLibrary.obj*. Il `cl` comando richiama il compilatore, Cl.exe, e l'opzione `/c` specifica la compilazione senza collegamento. Per altre informazioni, vedere [/c (Compila senza collegamento)](../build/reference/c-compile-without-linking.md).) .) In secondo `lib MathLibrary.obj` luogo, eseguire per collegare il codice e creare la libreria statica *MathLibrary.lib*. Il comando `lib` richiama Gestione librerie, Lib.exe. Per altre informazioni, vedere [LIB Reference](../build/reference/lib-reference.md).

## <a name="create-a-c-console-app-that-references-the-static-library"></a><a name="CreateAppToRefTheLib"></a>Creare un'app per la console di C' che fa riferimento alla libreria statica

::: moniker range="vs-2019"

### <a name="to-create-a-c-console-app-that-references-the-static-library-in-visual-studio-2019"></a>Per creare un'app per console di C' che fa riferimento alla libreria statica in Visual Studio 2019

1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse sul nodo principale, **Soluzione 'StaticMath',** per aprire il menu di scelta rapida. Scegliere **Aggiungi** > **nuovo progetto** per aprire la finestra di dialogo Aggiungi nuovo **progetto.**

1. Nella parte superiore della finestra di dialogo, impostare il filtro **Tipo di progetto** su **Console**.

1. Nell'elenco filtrato dei tipi di progetto scegliere **App console** e quindi scegliere **Avanti**. Nella pagina successiva immettere *MathClient* nella casella **Nome** per specificare un nome per il progetto.

1. Scegliere il pulsante **Crea** per creare il progetto client.

1. Dopo aver creato un'applicazione console, verrà creato un programma vuoto. Il nome del file di origine è uguale al nome scelto in precedenza. Nell'esempio, è denominato `MathClient.cpp`.

::: moniker-end

::: moniker range="vs-2017"

### <a name="to-create-a-c-console-app-that-references-the-static-library-in-visual-studio-2017"></a>Per creare un'app per console di C' che fa riferimento alla libreria statica in Visual Studio 2017

1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse sul nodo principale, **Soluzione 'StaticMath',** per aprire il menu di scelta rapida. Scegliere **Aggiungi** > **nuovo progetto** per aprire la finestra di dialogo Aggiungi nuovo **progetto.**

1. Nella finestra di dialogo **Aggiungi nuovo progetto** , selezionare **Installato** > **Visual C ,** > **Windows Desktop**. Nel riquadro centrale selezionare **Creazione guidata applicazione desktop di Windows**.

1. Specificare un nome per il progetto, ad esempio *MathClient,* nella casella **Nome.** Fare clic su **OK** .

1. Nella finestra di dialogo **Progetto desktop di Windows,** in **Tipo di applicazione,** selezionare **Applicazione console (.exe)**.

1. In **Opzioni aggiuntive**deselezionare la casella di controllo **Intestazione precompilata** se è selezionata.

1. Scegliere **OK** per creare il progetto.

1. Dopo aver creato un'applicazione console, verrà creato un programma vuoto. Il nome del file di origine è uguale al nome scelto in precedenza. Nell'esempio, è denominato `MathClient.cpp`.

::: moniker-end

::: moniker range="vs-2015"

### <a name="to-create-a-c-console-app-that-references-the-static-library-in-visual-studio-2015"></a>Per creare un'app per console di C' che fa riferimento alla libreria statica in Visual Studio 2015

1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse sul nodo principale, **Soluzione 'StaticMath',** per aprire il menu di scelta rapida. Scegliere **Aggiungi** > **nuovo progetto** per aprire la finestra di dialogo Aggiungi nuovo **progetto.**

1. Nella finestra di dialogo **Aggiungi nuovo progetto** , selezionare **installato** > **Visual C** > **Win32** Nel riquadro centrale, selezionare **Progetto console Win32**.

1. Specificare un nome per il progetto, ad esempio *MathClient,* nella casella **Nome.** Fare clic su **OK** .

1. Nella finestra di dialogo **Creazione guidata applicazione Win32** scegliere **Avanti**.

1. Nella pagina **Impostazioni applicazione,** in **Tipo di applicazione,** verificare che sia selezionata **l'opzione Applicazione console.** In **Opzioni aggiuntive**deselezionare **Intestazione precompilata**, quindi selezionare la casella di controllo **Progetto vuoto.** Scegliere **Fine** per creare il progetto.

1. Per aggiungere un file di origine al progetto vuoto, fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida per il progetto **MathClient** in **Esplora soluzioni**, quindi **scegliere Aggiungi** > **nuovo elemento**.

1. Nella finestra di dialogo **Aggiungi nuovo elemento** , selezionare**Visual** **C** >  Nel riquadro centrale selezionare **File di C++ (.cpp)**. Specificare un nome per il file di origine, ad esempio *MathClient.cpp,* quindi scegliere il pulsante **Aggiungi.** Viene visualizzato un file di origine vuoto.

::: moniker-end

## <a name="use-the-functionality-from-the-static-library-in-the-app"></a><a name="UseLibInApp"></a>Usare la funzionalità della libreria statica nell'app

### <a name="to-use-the-functionality-from-the-static-library-in-the-app"></a>Per usare questa funzionalità della libreria statica nell'applicazione

1. Per poter usare le routine matematiche della libreria statica, è necessario fare riferimento a esse. Aprire il menu di scelta rapida per il progetto **MathClient** in **Esplora soluzioni**, quindi scegliere **Aggiungi** > **riferimento**.

1. La finestra di dialogo **Aggiungi riferimento** contiene l'elenco di tutte le librerie a cui è possibile fare riferimento. La scheda **Progetti** elenca i progetti nella soluzione corrente e tutte le librerie a cui fanno riferimento. Aprire la scheda **Progetti,** selezionare la casella di controllo **MathLibrary,** quindi scegliere **OK.**

1. Per fare `MathLibrary.h` riferimento al file di intestazione, è necessario modificare il percorso delle directory incluse. In **Esplora soluzioni**fare clic con il pulsante destro del mouse su **MathClient** per aprire il menu di scelta rapida. Scegliere Proprietà per aprire la finestra di dialogo **Pagine delle proprietà MathClient.Choose** **Properties** to open the MathClient Property Pages dialog box.

1. Nella finestra di dialogo **Pagine delle proprietà MathClient** impostare l'elenco a discesa **Configurazione** su Tutte **le configurazioni**. Impostare il menu a discesa **Piattaforma** su **Tutte le piattaforme**.

1. Selezionare la pagina delle proprietà**Generale** **delle proprietà Proprietà** > di configurazione**C/C.** >  Nella proprietà Directory di **inclusione aggiuntive** specificare il percorso della directory **MathLibrary** o cercarla.

   Per cercare il percorso della directory:

   1. Aprire l'elenco a discesa del valore della proprietà Directory di **inclusione aggiuntive** e quindi scegliere **Modifica**.

   1. Nella finestra di dialogo Directory di **inclusione aggiuntive** fare doppio clic nella parte superiore della casella di testo. Quindi scegliere il pulsante con i conielli (**...**) alla fine della riga.

   1. Nella finestra di dialogo **Seleziona directory** , spostarsi verso l'alto di un livello e quindi selezionare la directory **MathLibrary.** Quindi scegliere il **pulsante Seleziona cartella** per salvare la selezione.

   1. Nella finestra di dialogo **Directory di inclusione aggiuntive** scegliere il pulsante **OK.**

   1. Nella finestra di dialogo **Pagine delle proprietà** scegliere il pulsante **OK** per salvare le modifiche apportate al progetto.

1. È ora possibile `Arithmetic` usare la classe `#include "MathLibrary.h"` in questa app includendo l'intestazione nel codice. Sostituire il `MathClient.cpp` contenuto di con questo codice:

    ```cpp
    // MathClient.cpp
    // compile with: cl /EHsc MathClient.cpp /link MathLibrary.lib

    #include <iostream>
    #include "MathLibrary.h"

    int main()
    {
        double a = 7.4;
        int b = 99;

        std::cout << "a + b = " <<
            MathLibrary::Arithmetic::Add(a, b) << std::endl;
        std::cout << "a - b = " <<
            MathLibrary::Arithmetic::Subtract(a, b) << std::endl;
        std::cout << "a * b = " <<
            MathLibrary::Arithmetic::Multiply(a, b) << std::endl;
        std::cout << "a / b = " <<
            MathLibrary::Arithmetic::Divide(a, b) << std::endl;

        return 0;
    }
    ```

1. Per compilare l'eseguibile, scegliere **Compila** > **soluzione** di compilazione sulla barra dei menu.

## <a name="run-the-app"></a><a name="RunApp"></a>Eseguire l'app

### <a name="to-run-the-app"></a>Per eseguire l'app

1. Assicurarsi che **MathClient** sia selezionato come progetto predefinito. Per selezionarla, fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida per **MathClient** in **Esplora soluzioni**, quindi scegliere Imposta come progetto di **avvio**.

1. Per eseguire il progetto, sulla barra dei menu scegliere **Avvia debug** > **senza eseguire debug**. L'output dovrebbe essere simile al:

    ```Output
    a + b = 106.4
    a - b = -91.6
    a * b = 732.6
    a / b = 0.0747475
    ```

## <a name="see-also"></a>Vedere anche

[Procedura dettagliata: creazione e utilizzo di una libreria di collegamento dinamico (c ')](../build/walkthrough-creating-and-using-a-dynamic-link-library-cpp.md)<br/>
[Applicazioni desktop (Visual C++)](../windows/desktop-applications-visual-cpp.md)<br/>
