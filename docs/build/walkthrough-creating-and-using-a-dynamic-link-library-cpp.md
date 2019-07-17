---
title: 'Procedura dettagliata: Creare e usare una libreria di collegamento dinamico personalizzata (C++)'
description: Usare C++ per creare una libreria di collegamento dinamico (DLL) di Windows in Visual Studio.
ms.custom: conceptual
ms.date: 07/17/2019
helpviewer_keywords:
- libraries [C++], DLLs
- DLLs [C++], walkthroughs
ms.assetid: 3ae94848-44e7-4955-bbad-7d40f493e941
ms.openlocfilehash: 8ca89471177ba2d1fa98bfaf51b86ed15dcd6d2f
ms.sourcegitcommit: 7f5b29e24e1be9b5985044a030977485fea0b50c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/17/2019
ms.locfileid: "68299813"
---
# <a name="walkthrough-create-and-use-your-own-dynamic-link-library-c"></a>Procedura dettagliata: Creare e usare una libreria di collegamento dinamico personalizzata (C++)

Questa procedura dettagliata illustra come usare l'IDE di Visual Studio per creare una libreria di collegamento dinamico (DLL) scritta in C++ e quindi usarla da un'altra app C++. Le DLL (note anche come librerie condivise nei sistemi operativi basati su UNIX) sono uno dei tipi più utili di componenti di Windows. È possibile usarle come un modo per condividere codice e risorse, per ridurre le dimensioni delle app e per semplificare la manutenzione e l'estensione delle app. In questa procedura dettagliata viene descritto come creare una DLL che implementa alcune funzioni matematiche e quindi creare un'app console che usa le funzioni dalla DLL. Nel corso della trattazione verranno presentate alcune delle tecniche di programmazione e delle convenzioni usate nelle DLL di Windows.

In questa procedura dettagliata vengono illustrate le seguenti attività:

- Creare un progetto di DLL in Visual Studio.

- Aggiungere funzioni e variabili esportate nella DLL.

- Creare un progetto di app console in Visual Studio.

- Usare le funzioni e variabili importate dalla DLL nell'app console.

- Eseguire l'app completata.

Come nel caso di una libreria collegata staticamente, una DLL _esporta_ variabili, funzioni e risorse in base al nome e l'app _importa_ tali nomi per usare queste variabili, funzioni e risorse. Diversamente da una libreria collegata staticamente, Windows connette le importazioni nell'app alle esportazioni in una DLL in fase di caricamento o in fase di esecuzione, invece di farlo in fase di collegamento. Windows richiede informazioni aggiuntive che non fanno parte del modello di compilazione C++ standard per stabilire queste connessioni. Il compilatore MSVC implementa alcune estensioni specifiche di Microsoft per C++ per fornire queste informazioni aggiuntive. Queste estensioni verranno presentate man mano che si procede.

Questa procedura dettagliata crea due soluzioni di Visual Studio: una che compila la DLL e una che compila l'app client. La DLL usa la convenzione di chiamata C in modo che possa essere chiamata dalle app compilate con altri linguaggi, purché la piattaforma e le convenzioni di chiamata e collegamento corrispondano. L'app client usa il _collegamento implicito_, mentre Windows collega l'app alla DLL in fase di caricamento. Questo collegamento consente all'app di chiamare le funzioni fornite dalla DLL proprio come le funzioni in una libreria collegata staticamente.

Questa procedura dettagliata non tratta alcune situazioni comuni. Non viene illustrato l'uso di DLL C++ da altri linguaggi di programmazione. Non viene illustrato come creare una DLL di sole risorse. Non viene neanche illustrato l'uso del collegamento esplicito per caricare le DLL in fase di esecuzione anziché in fase di caricamento. Se si è certi, è possibile usare Visual Studio per eseguire tutte queste operazioni. Per collegamenti a ulteriori informazioni sulle DLL, vedere [Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md). Per altre informazioni sul collegamento implicito ed esplicito, vedere [Scelta del metodo di collegamento da usare](linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use). Per informazioni sulla creazione di DLL C++ per l'uso con linguaggi di programmazione che usano convenzioni di collegamento del linguaggio C, vedere [Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](exporting-cpp-functions-for-use-in-c-language-executables.md). Per informazioni su come creare DLL da usare con i linguaggi .NET, vedere [Chiamata di funzioni DLL da applicazioni Visual Basic](calling-dll-functions-from-visual-basic-applications.md).

## <a name="prerequisites"></a>Prerequisiti

- Un computer che esegue Microsoft Windows 7 o versioni successive. Si consiglia Windows 10 per un'esperienza di sviluppo ottimale.

- Una copia di Visual Studio. Per informazioni su come scaricare e installare Visual Studio, vedere [Installare Visual Studio](/visualstudio/install/install-visual-studio). Quando si esegue il programma di installazione, assicurarsi che sia selezionato il carico di lavoro **Sviluppo di applicazioni desktop con C++** . Non è un problema se il carico di lavoro non è stato installato durante l'installazione di Visual Studio. È possibile eseguire nuovamente il programma di installazione e installarlo ora.

   ![Sviluppo di applicazioni desktop con C++ ](media/desktop-development-with-cpp.png "Sviluppo di applicazioni desktop con C++")

- Conoscenza dei concetti di base dell'uso dell'IDE di Visual Studio. Se si sono usate app desktop di Windows in precedenza, è probabilmente possibile riuscire a seguire. Per informazioni introduttive, vedere [Panoramica delle funzionalità dell'IDE di Visual Studio](/visualstudio/ide/visual-studio-ide).

- Conoscenza delle nozioni di base del linguaggio C++. Non verranno comunque presentate procedure troppo complicate.

## <a name="create-the-dll-project"></a>Creare il progetto di DLL

In questo set di attività, si crea un progetto per la DLL, quindi si aggiunge codice e si compila il progetto. Per iniziare, avviare l'IDE di Visual Studio e accedere, se è necessario. Le istruzioni variano leggermente a seconda della versione di Visual Studio in uso. Assicurarsi di avere selezionato la versione corretta nel controllo in alto a sinistra della pagina.

::: moniker range="=vs-2019"

### <a name="to-create-a-dll-project-in-visual-studio-2019"></a>Per creare un progetto di DLL in Visual Studio 2019

1. Sulla barra dei menu scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto**.

   ![Creare un nuovo progetto di DLL](media/create-new-dll-project-2019.png "Creare il progetto MathLibrary")

1. Nella parte superiore della finestra di dialogo impostare **Linguaggio** su **C++** , impostare **Piattaforma** su **Windows** e impostare **Tipo di progetto** su **Libreria**. 

1. Nell'elenco filtrato dei tipi di progetto, scegliere **DLL (libreria di collegamento dinamico)** e quindi scegliere **Avanti**. Nella pagina successiva immettere `MathLibrary` nella casella **Nome** per specificare un nome per il progetto e specificare facoltativamente il percorso del progetto.

1. Scegliere il pulsante **Crea** per creare il progetto.

::: moniker-end

::: moniker range="vs-2017"

### <a name="to-create-a-dll-project-in-visual-studio-2017"></a>Per creare un progetto di DLL in Visual Studio 2017

1. Sulla barra dei menu scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Nuovo progetto**.

1. Nel riquadro sinistro della finestra di dialogo **Nuovo progetto** espandere **Installati** e **Visual C++** , se necessario, quindi scegliere **Desktop di Windows**. Nel riquadro centrale selezionare **Creazione guidata applicazione desktop di Windows**. Immettere `MathLibrary` nella casella **Nome** per specificare un nome per il progetto.

   ![Denominare il progetto MathLibrary](media/mathlibrary-new-project-name-153.png "Denominare il progetto MathLibrary")

1. Scegliere il pulsante **OK** per chiudere la finestra di dialogo **Nuovo progetto** e avviare la procedura guidata **Progetto desktop di Windows**.

1. Nella procedura guidata **Progetto desktop di Windows**, in **Tipo di applicazione**, selezionare **Libreria di collegamento dinamico (estensione dll)** .

   ![Creare la DLL nella procedura guidata Progetto desktop di Windows](media/mathlibrary-desktop-project-wizard-dll.png "Creare la DLL nella procedura guidata Progetto desktop di Windows")

1. Scegliere il pulsante **OK** per creare il progetto.

> [!NOTE]
> Per correggere un problema in Visual Studio 2017 versione 15.3 sono necessari passaggi aggiuntivi. Seguire queste istruzioni per verificare se è necessario apportare questa modifica.
>
>1. In **Esplora soluzioni**, se non è già selezionato, selezionare il progetto **MathLibrary** in **Soluzione 'MathLibrary'** .
>
>1. Sulla barra dei menu scegliere **Progetto** > **Proprietà**.
>
>1. Nel riquadro sinistro della finestra di dialogo **Pagine delle proprietà** selezionare **Preprocessore** in **Proprietà di configurazione** > **C/C++** . Controllare il contenuto della proprietà **Definizioni del preprocessore**.<br/><br/>![Controllare la proprietà Definizioni del preprocessore](media/mathlibrary-153bug-preprocessor-definitions-check.png "Controllare la proprietà Definizioni del preprocessore")<br/><br/>Se viene visualizzato **MATHLIBRARY&#95;EXPORTS** nell'elenco **Definizioni del preprocessore** non è necessario apportare alcuna modifica. Se viene invece visualizzato **MathLibrary&#95;EXPORTS**, continuare a seguire questa procedura.
>
>1. Nella parte superiore della finestra di dialogo **Pagine delle proprietà** modificare il valore dell'elenco a discesa **Configurazione** impostandolo su **Tutte le configurazioni**.
>
>1. Nel riquadro delle proprietà selezionare il controllo elenco a discesa accanto alla casella di modifica **Definizioni del preprocessore** e quindi scegliere **Modifica**.<br/><br/>![Modificare la proprietà Definizioni del preprocessore](media/mathlibrary-153bug-preprocessor-definitions-property.png "Modificare la proprietà Definizioni del preprocessore")
>
>1. Nel riquadro superiore della finestra di dialogo **Definizioni de preprocessore** aggiungere un nuovo simbolo, `MATHLIBRARY_EXPORTS`.<br/><br/>![Aggiungere il simbolo MATHLIBRARY_EXPORTS](media/mathlibrary-153bug-preprocessor-definitions-dialog.png "Aggiungere il simbolo MATHLIBRARY_EXPORTS")
>
>1. Scegliere **OK** per chiudere la finestra di dialogo **definizioni del preprocessore** e quindi scegliere **OK** per salvare le modifiche nelle proprietà del progetto.

::: moniker-end

::: moniker range="=vs-2015"

### <a name="to-create-a-dll-project-in-older-versions-of-visual-studio"></a>Per creare un progetto DLL nelle versioni precedenti di Visual Studio

1. Nella barra dei menu scegliere **File** > **Nuovo** > **Progetto**.

1. Nel riquadro sinistro della finestra di dialogo **Nuovo progetto** espandere **Installati** > **Modelli** e selezionare **Visual C++** , quindi nel riquadro centrale selezionare **Applicazione console Win32**. Immettere `MathLibrary` nella casella di modifica **Nome** per specificare un nome per il progetto.

   ![Denominare il progetto MathLibrary](media/mathlibrary-project-name.png "Denominare il progetto MathLibrary")

1. Scegliere il pulsante **OK** per chiudere la finestra di dialogo **Nuovo progetto** e avviare la **Creazione guidata applicazione Win32**.

   ![Panoramica della Creazione guidata applicazione Win32](media/mathlibrary-project-wizard-1.png "Panoramica della Creazione guidata applicazione Win32")

1. Fare clic su **Avanti**. Nella pagina **Impostazioni applicazione**, in **Tipo di applicazione**, selezionare **DLL**.

   ![Creazione della DLL nella Creazione guidata applicazione Win32](media/mathlibrary-project-wizard-2.png "Creazione della DLL nella Creazione guidata applicazione Win32")

1. Scegliere il pulsante **Fine** per creare il progetto.

Quando viene completata la soluzione, il progetto e i file di origine generati saranno visibili nella finestra **Esplora soluzioni** in Visual Studio.

![Soluzione generata in Visual Studio](media/mathlibrary-solution-explorer-153.png "Soluzione generata in Visual Studio")

A questo punto la DLL non fa molto. Verrà quindi creato un file di intestazione per dichiarare le funzioni esportate dalla DLL e poi si aggiungeranno le definizioni di funzioni alla DLL per renderla più utile.

::: moniker-end

### <a name="to-add-a-header-file-to-the-dll"></a>Per aggiungere un file di intestazione alla DLL

1. Per creare un file di intestazione per le funzioni, nella barra dei menu scegliere **Progetto** > **Aggiungi nuovo elemento**.

1. Nel riquadro sinistro della finestra di dialogo **Aggiungi nuovo elemento** selezionare **Visual C++** . Nel riquadro centrale selezionare **File di intestazione (.h)** . Specificare `MathLibrary.h` come nome per il file di intestazione.

   ![Aggiungere l'intestazione nella finestra di dialogo Aggiungi nuovo elemento](media/mathlibrary-add-new-item-header-file.png "Aggiungere il file di intestazione nella finestra di dialogo Aggiungi nuovo elemento")

1. Scegliere il pulsante **Aggiungi** per generare un file di intestazione vuoto, che viene visualizzato in una nuova finestra dell'editor.

   ![File MathLibrary.h vuoto nell'editor](media/edit-empty-mathlibrary-header.png "File MathLibrary.h vuoto nell'editor")

1. Sostituire il contenuto del file di intestazione con questo codice:

   ```cpp
   // MathLibrary.h - Contains declarations of math functions
   #pragma once

   #ifdef MATHLIBRARY_EXPORTS
   #define MATHLIBRARY_API __declspec(dllexport)
   #else
   #define MATHLIBRARY_API __declspec(dllimport)
   #endif

   // The Fibonacci recurrence relation describes a sequence F
   // where F(n) is { n = 0, a
   //               { n = 1, b
   //               { n > 1, F(n-2) + F(n-1)
   // for some initial integral values a and b.
   // If the sequence is initialized F(0) = 1, F(1) = 1,
   // then this relation produces the well-known Fibonacci
   // sequence: 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

   // Initialize a Fibonacci relation sequence
   // such that F(0) = a, F(1) = b.
   // This function must be called before any other function.
   extern "C" MATHLIBRARY_API void fibonacci_init(
       const unsigned long long a, const unsigned long long b);

   // Produce the next value in the sequence.
   // Returns true on success and updates current value and index;
   // false on overflow, leaves current value and index unchanged.
   extern "C" MATHLIBRARY_API bool fibonacci_next();

   // Get the current value in the sequence.
   extern "C" MATHLIBRARY_API unsigned long long fibonacci_current();

   // Get the position of the current value in the sequence.
   extern "C" MATHLIBRARY_API unsigned fibonacci_index();
   ```

Questo file di intestazione dichiara alcune funzioni per produrre una sequenza di Fibonacci generalizzata, dati due valori iniziali. Una chiamata a `fibonacci_init(1, 1)` genera la familiare sequenza di Fibonacci.

Si notino le istruzioni del preprocessore nella parte superiore del file. Per impostazione predefinita, il modello Nuovo progetto per una DLL aggiunge **\<em>NOMEPROGETTO\</em>&#95;EXPORTS** alle macro del preprocessore definite per il progetto di DLL. In questo esempio, Visual Studio definisce **MATHLIBRARY&#95;EXPORTS** quando viene compilato il progetto di DLL MathLibrary. 

::: moniker range="=vs-2017"

(La procedura guidata in Visual Studio 2017 versione 15.3 non impone le lettere maiuscole per questa definizione dei simboli. Se si denomina il progetto "MathLibrary", il simbolo definito è MathLibrary&#95;EXPORTS anziché MATHLIBRARY&#95;EXPORTS. Questo è il motivo per cui sono necessari i passaggi della procedura aggiuntivi precedenti per aggiungere questo simbolo.)

::: moniker-end

Quando viene definita la macro **MATHLIBRARY&#95;EXPORTS**, la macro **MATHLIBRARY&#95;API** imposta il modificatore `__declspec(dllexport)` sulle dichiarazioni di funzione. Questo modificatore indica al compilatore e al linker di esportare una funzione o variabile dalla DLL in modo che possa essere usata da altre applicazioni. Quando **MATHLIBRARY&#95;EXPORTS** non è definito, ad esempio, quando il file di intestazione viene incluso da un'applicazione client, **MATHLIBRARY&#95;API** applica il modificatore `__declspec(dllimport)` alle dichiarazioni. Questo modificatore ottimizza l'importazione della funzione o della variabile in un'applicazione. Per altre informazioni, vedere [dllexport, dllimport](../cpp/dllexport-dllimport.md).

### <a name="to-add-an-implementation-to-the-dll"></a>Per aggiungere un'implementazione alla DLL

::: moniker range="vs-2019"

1. In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul nodo **File di origine** e aggiungere un nuovo file con estensione cpp denominato `MathLibrary.cpp` nello stesso modo in cui è stato aggiunto un nuovo file di intestazione nel passaggio precedente.

::: moniker-end

1. Nella finestra dell'editor selezionare la scheda **MathLibrary.cpp** se è già aperta. In caso contrario, in **Esplora soluzioni** aprire **MathLibrary.cpp** nella cartella **File di origine** del progetto **MathLibrary**.

1. Nell'editor sostituire il contenuto del file MathLibrary.cpp con il codice seguente:

   ```cpp
   // MathLibrary.cpp : Defines the exported functions for the DLL.
   #include "stdafx.h" // use pch.h in Visual Studio 2019
   #include <utility>
   #include <limits.h>
   #include "MathLibrary.h"

   // DLL internal state variables:
   static unsigned long long previous_;  // Previous value, if any
   static unsigned long long current_;   // Current sequence value
   static unsigned index_;               // Current seq. position

   // Initialize a Fibonacci relation sequence
   // such that F(0) = a, F(1) = b.
   // This function must be called before any other function.
   void fibonacci_init(
       const unsigned long long a,
       const unsigned long long b)
   {
       index_ = 0;
       current_ = a;
       previous_ = b; // see special case when initialized
   }

   // Produce the next value in the sequence.
   // Returns true on success, false on overflow.
   bool fibonacci_next()
   {
       // check to see if we'd overflow result or position
       if ((ULLONG_MAX - previous_ < current_) ||
           (UINT_MAX == index_))
       {
           return false;
       }

       // Special case when index == 0, just return b value
       if (index_ > 0)
       {
           // otherwise, calculate next sequence value
           previous_ += current_;
       }
       std::swap(current_, previous_);
       ++index_;
       return true;
   }

   // Get the current value in the sequence.
   unsigned long long fibonacci_current()
   {
       return current_;
   }

   // Get the current index position in the sequence.
   unsigned fibonacci_index()
   {
       return index_;
   }
   ```

Per verificare che tutto funzioni finora, compilare la libreria di collegamento dinamico. Per compilare, scegliere **Compila** > **Compila soluzione** dalla barra dei menu. L'output dovrebbe avere un aspetto simile al seguente. Si noti che l'eseguibile della DLL e l'output del compilatore correlato vengono inseriti in una cartella denominata *debug* direttamente sotto la cartella della soluzione. Se si crea una build di rilascio, l'output verrà inserito in una cartella denominata *Release*:

```Output
1>------ Build started: Project: MathLibrary, Configuration: Debug Win32 ------
1>MathLibrary.cpp
1>dllmain.cpp
1>Generating Code...
1>   Creating library C:\Users\username\Source\Repos\MathLibrary\Debug\MathLibrary.lib and object C:\Users\username\Source\Repos\MathLibrary\Debug\MathLibrary.exp
1>MathLibrary.vcxproj -> C:\Users\username\Source\Repos\MathLibrary\Debug\MathLibrary.dll
1>MathLibrary.vcxproj -> C:\Users\username\Source\Repos\MathLibrary\Debug\MathLibrary.pdb (Partial PDB)
========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
```

Congratulazioni, è stata creata una DLL con Visual Studio. Nella prossima sezione si vedrà come creare un'app client che usa le funzioni esportate dalla DLL.

## <a name="create-a-client-app-that-uses-the-dll"></a>Creare un'app client che usa la DLL

Quando si crea una DLL, è necessario valutare come è possibile usare la DLL. Per compilare il codice che chiama le funzioni esportate da una DLL, le dichiarazioni devono essere incluse nel codice sorgente client. In fase di collegamento, quando queste chiamate alle funzioni DLL vengono risolte, il linker deve avere un *libreria di importazione*, ovvero un file di libreria speciale che contiene informazioni per Windows su come individuare le funzioni, anziché il codice effettivo. E in fase di esecuzione la DLL deve essere disponibile per il client, in una posizione individuabile dal sistema operativo.

Per usare una DLL, personalizzata o di terze parti, il progetto dell'app client deve trovare le intestazioni che dichiarano le esportazioni della DLL, le librerie di importazione per il linker e la DLL stessa. Un modo per ottenere questo risultato consiste nel copiare tutti questi file nel progetto client. Per le DLL di terze parti che è improbabile vengano modificate durante lo sviluppo del client, questo metodo può rappresentare il modo migliore per usarle. Tuttavia, quando si crea anche la DLL, è preferibile evitare la duplicazione. Se si creare una copia dei file DLL in fase di sviluppo, si può inavvertitamente modificare un file di intestazione in una sola copia, ma non in un'altra oppure usare una libreria non aggiornata. Per evitare questo problema, è consigliabile impostare il percorso di inclusione nel progetto client per includere i file di intestazione DLL dal progetto di DLL. Impostare inoltre il percorso della libreria nel progetto client per includere le librerie di importazione DLL dal progetto di DLL. Copiare infine la DLL compilata dal progetto di DLL nella directory di output di compilazione. Questo passaggio consente all'app client di usare lo stesso codice DLL che si compila.

::: moniker range="vs-2019"

### <a name="to-create-a-client-app-in-visual-studio-2019"></a>Per creare un'app client in Visual Studio 2019

1. Sulla barra dei menu scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto**.

1. Nella parte superiore della finestra di dialogo impostare **Linguaggio** su **C++** , impostare **Piattaforma** su **Windows** e impostare **Tipo di progetto** su **Console**. 

1. Nell'elenco filtrato dei tipi di progetto scegliere **App console** e quindi scegliere **Avanti**. Nella pagina successiva immettere `MathClient` nella casella **Nome** per specificare un nome per il progetto e specificare facoltativamente il percorso del progetto.

   ![Denominare il progetto client](media/mathclient-project-name-2019.png "Denominare il progetto client")

1. Scegliere il pulsante **Crea** per creare il progetto client.

::: moniker-end

::: moniker range="vs-2017"

### <a name="to-create-a-client-app-in-visual-studio-2017"></a>Per creare un'app client in Visual Studio 2017

1. Per creare un'app C++ che usa la DLL creata, nella barra dei menu scegliere **File** > **Nuovo** > **Progetto**.

1. Nel riquadro sinistro della finestra di dialogo **Nuovo progetto** selezionare **Desktop di Windows** in **Installati** > **Visual C++** . Nel riquadro centrale selezionare **Creazione guidata applicazione desktop di Windows**. Specificare il nome del progetto `MathClient` nella casella di modifica **Nome**.

   ![Denominare il progetto client](media/mathclient-new-project-name-153.png "Denominare il progetto client")

1. Scegliere **OK** per avviare la procedura guidata **Progetto desktop di Windows**. Nella procedura guidata scegliere **OK** per creare il progetto di app client.

::: moniker-end

::: moniker range="vs-2015"

### <a name="to-create-a-client-app-in-older-versions-of-visual-studio-2017"></a>Per creare un'app client nelle versioni precedenti di Visual Studio 2017

1. Per creare un'app C++ che usa la DLL creata, nella barra dei menu scegliere **File** > **Nuovo** > **Progetto**.

1. Nel riquadro sinistro della finestra di dialogo **Nuovo progetto** selezionare **Win32** in **Installati** > **Modelli** > **Visual C++** . Nel riquadro centrale, selezionare **Progetto console Win32**. Specificare il nome del progetto `MathClient` nella casella di modifica **Nome**.

   ![Denominare il progetto client](media/mathclient-project-name.png "Denominare il progetto client")

1. Scegliere il pulsante **OK** per chiudere la finestra di dialogo **Nuovo progetto** e avviare la **Creazione guidata applicazione Win32**. Nella pagina **Panoramica** della finestra di dialogo **Creazione guidata applicazione Win32** , scegliere il pulsante **Avanti** .

1. Nella pagina **Impostazioni applicazione** in **Tipo di applicazione** selezionare **Applicazione console** se non è già selezionato.

1. Scegliere il pulsante **Fine** per creare il progetto.

::: moniker-end

Al termine della procedura guidata, viene creato automaticamente un progetto di applicazione console minimo. Il nome del file di origine principale è lo stesso nome del progetto immesso in precedenza. In questo esempio, il file è denominato **MathClient.cpp**. È possibile compilare il progetto, ma non usa ancora la DLL.

Per chiamare le funzioni MathLibrary nel codice sorgente, il progetto deve includere il file MathLibrary.h. È possibile copiare questo file di intestazione nel progetto dell'app client e quindi aggiungerlo al progetto come elemento esistente. Questo metodo può essere una scelta ottimale per le librerie di terze parti. Tuttavia, se si lavora al codice per la DLL contemporaneamente al client, si potrebbero introdurre modifiche in un file di intestazione che non compaiono nell'altro. Per evitare questo problema, è possibile modificare il percorso **Directory di inclusione aggiuntive** nel progetto per includere il percorso dell'intestazione originale.

### <a name="to-add-the-dll-header-to-your-include-path"></a>Per aggiungere l'intestazione DLL al percorso di inclusione

1. Fare clic con il pulsante destro del mouse sul nodo **MathClient** in **Esplora soluzioni** per aprire la finestra di dialogo **Pagine delle proprietà**.

1. Nella casella a discesa **Configurazione** selezionare **Tutte le configurazioni** se non è già selezionato.

1. Nel riquadro sinistro selezionare **Generale** in **Proprietà di configurazione** > **C/C++** .

1. Nel riquadro delle proprietà selezionare il controllo elenco a discesa accanto alla casella di modifica **Directory di inclusione aggiuntive** e quindi scegliere **Modifica**.

   ![Modificare la proprietà Directory di inclusione aggiuntive](media/mathclient-additional-include-directories-property.png "Modificare la proprietà Directory di inclusione aggiuntive")

1. Fare doppio clic nel riquadro superiore della finestra di dialogo **Directory di inclusione aggiuntive** per abilitare un controllo di modifica.

1. Nel controllo di modifica specificare il percorso del file di intestazione **MathLibrary.h**. Fare clic sulla freccia in giù, quindi scegliere  **\<modifica >** . È possibile fare clic sull'icona della cartella e quindi sui puntini di sospensione ( **...** ) per passare alla cartella corretta.
 
   È anche possibile digitare un percorso relativo dalla cartella che contiene i file con estensione cpp nel progetto client alla cartella che contiene il file con estensione h nel progetto di DLL. Se il progetto client è in una soluzione separata nella stessa cartella della soluzione della DLL, il percorso relativo dovrebbe essere simile al seguente:

   `..\MathLibrary\MathLibrary`

   Se la DLL e i progetti client si trovano nella stessa soluzione oppure le soluzioni si trovano in cartelle diverse, è necessario modificare di conseguenza il percorso relativo o cercare la cartella usando il metodo descritto in precedenza.

   ![Aggiungere il percorso dell'intestazione alla proprietà Directory di inclusione aggiuntive](media/mathclient-additional-include-directories.png "Aggiungere il percorso dell'intestazione alla proprietà Directory di inclusione aggiuntive")

1. Dopo aver immesso il percorso del file di intestazione nella finestra di dialogo **directory di inclusione aggiuntive** , scegliere il pulsante **OK** per tornare alla finestra di dialogo **pagine delle proprietà** , quindi scegliere il pulsante **OK** per salvare le modifiche.

È ora possibile includere il file **MathLibrary.h** e usare le funzioni dichiarate nell'applicazione client. Sostituire il contenuto del file **MathClient.cpp** usando questo codice:

```cpp
// MathClient.cpp : Client app for MathLibrary DLL.
// #include "pch.h" Uncomment for Visual Studio 2017 and earlier
#include <iostream>
#include "MathLibrary.h"

int main()
{
    // Initialize a Fibonacci relation sequence.
    fibonacci_init(1, 1);
    // Write out the sequence values until overflow.
    do {
        std::cout << fibonacci_index() << ": "
            << fibonacci_current() << std::endl;
    } while (fibonacci_next());
    // Report count of values written before overflow.
    std::cout << fibonacci_index() + 1 <<
        " Fibonacci sequence values fit in an " <<
        "unsigned 64-bit integer." << std::endl;
}
```

Questo codice può essere compilato, ma non collegato, perché il linker non può ancora trovare la libreria di importazione necessaria per compilare l'app. Il linker deve trovare il file MathLibrary.lib per configurare correttamente il collegamento. Aggiungere il file MathLibrary.lib alla compilazione impostando la proprietà **Dipendenze aggiuntive**. Ancora una volta, è possibile copiare il file di libreria nel progetto di app client, ma se sia la libreria che l'app client sono in fase di sviluppo, è possibile che venga modificata una copia e non l'altra. Per evitare questo problema, è possibile modificare il percorso **Directory librerie aggiuntive** nel progetto per includere il percorso della libreria originale per il collegamento.

### <a name="to-add-the-dll-import-library-to-your-project"></a>Per aggiungere la libreria di importazione DLL al progetto

1. Fare clic con il pulsante destro del mouse sul nodo **MathClient** in **Esplora soluzioni** per aprire la finestra di dialogo **Pagine delle proprietà**.

1. Nella casella a discesa **Configurazione** selezionare **Tutte le configurazioni** se non è già selezionato. Questa impostazione garantisce che il percorso sia impostato sia per le build di debug che di versione.

1. Nel riquadro sinistro selezionare **Input** in **Proprietà di configurazione** > **Linker**. Nel riquadro delle proprietà selezionare il controllo elenco a discesa accanto alla casella di modifica **Dipendenze aggiuntive** e quindi scegliere **Modifica**.

   ![Modificare la proprietà Dipendenze aggiuntive](media/mathclient-additional-dependencies-property.png "Modificare la proprietà Dipendenze aggiuntive")

1. Nella finestra di dialogo **Dipendenze aggiuntive** aggiungere `MathLibrary.lib` all'elenco nel controllo di modifica superiore.

   ![Aggiungere la dipendenza della libreria](media/mathclient-additional-dependencies.png "Aggiungere la dipendenza della libreria")

1. Scegliere **OK** per tornare alla finestra di dialogo **Pagine delle proprietà**.

1. Nel riquadro sinistro selezionare **Generale** in **Proprietà di configurazione** > **Linker**. Nel riquadro delle proprietà selezionare il controllo elenco a discesa accanto alla casella di modifica **Directory librerie aggiuntive** e quindi scegliere **Modifica**.

   ![Modificare la proprietà Directory librerie aggiuntive](media/mathclient-additional-library-directories-property.png "Modificare la proprietà Directory librerie aggiuntive")

1. Fare doppio clic nel riquadro superiore della finestra di dialogo **Directory librerie aggiuntive** per abilitare un controllo di modifica. Nel controllo di modifica specificare il percorso del file **MathLibrary.lib**. Si trova in una cartella chiamata `Debug` direttamente sotto la cartella della soluzione. Se si crea una build di rilascio, l'output verrà inserito in una cartella denominata `Release`. È possibile usare la macro seguente in modo che il linker possa trovare la DLL indipendentemente dal tipo di compilazione creato:

   **Visual Studio 2019:**

   `..\MathLibrary\$(IntDir)`

   **Visual Studio 2017 e versioni precedenti:**

   `..\..\MathLibrary\$(IntDir)`

   ![Aggiungere la directory delle librerie](media/mathclient-additional-library-directories.png "Aggiungere la directory delle librerie")

1. Dopo aver immesso il percorso del file di libreria nella finestra di dialogo **Directory librerie aggiuntive** scegliere il pulsante **OK** per tornare alla finestra di dialogo **Pagine delle proprietà**.

È ora possibile compilare e collegare l'app client correttamente, ma ancora non include tutto ciò che serve per l'esecuzione. Quando il sistema operativo carica l'app, cerca la DLL MathLibrary. Se non riesce a trovare la DLL in determinate directory di sistema, nel percorso di ambiente o nella directory dell'app locale, il caricamento ha esito negativo. Un modo per evitare questo problema consiste nel copiare la DLL nella directory che contiene il file eseguibile del client come parte del processo di compilazione. Per copiare la DLL, è possibile aggiungere un **evento di post-compilazione** al progetto, per aggiungere un comando che consente di copiare la DLL nella directory di output di compilazione. Il comando qui specificato copia la DLL solo se risulta mancante o modificata e usa le macro per copiare in e dalle posizioni di debug o versione corrette per la configurazione.

### <a name="to-copy-the-dll-in-a-post-build-event"></a>Per copiare la DLL in un evento di post-compilazione

1. Fare clic con il pulsante destro del mouse sul nodo **MathClient** in **Esplora soluzioni** per aprire la finestra di dialogo **Pagine delle proprietà**.

1. Nella casella a discesa Configurazione selezionare **Tutte le configurazioni** se non è già selezionato.

1. Nel riquadro sinistro selezionare **Evento di post-compilazione** in **Proprietà di configurazione** > **Eventi di compilazione**.

1. Nel riquadro delle proprietà selezionare il controllo di modifica nel campo **Riga di comando** e quindi immettere questo comando:

   **Visual Studio 2019:**

   `xcopy /y /d "..\MathLibrary\$(IntDir)MathLibrary.dll" "$(OutDir)"`

    **Visual Studio 2017 e versioni precedenti:**

   `xcopy /y /d "..\..\MathLibrary\$(IntDir)MathLibrary.dll" "$(OutDir)"`

   ![Aggiungere il comando di post-compilazione](media/mathclient-post-build-command-line.png "Aggiungere il comando di post-compilazione")

1. Scegliere il pulsante **OK** per salvare le modifiche alle proprietà del progetto.

A questo punto l'app client include tutto il necessario per la compilazione e l'esecuzione. Compilare l'applicazione scegliendo **Compila** > **Compila soluzione** nella barra dei menu. La finestra di **output** in Visual Studio dovrebbe avere un aspetto simile a quello dell'esempio seguente, a seconda della versione di Visual Studio:

```Output
1>------ Build started: Project: MathClient, Configuration: Debug Win32 ------
1>pch.cpp
1>MathClient.cpp
1>MathClient.vcxproj -> C:\Users\username\Source\Repos\MathClient\Debug\MathClient.exe
1>MathClient.vcxproj -> C:\Users\username\Source\Repos\MathClient\Debug\MathClient.pdb (Partial PDB)
1>1 File(s) copied
========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
```

È stata completata la creazione di un'applicazione che chiama le funzioni nella DLL. Eseguire ora l'applicazione per vederne le funzioni. Sulla barra dei menu scegliere **Debug** > **Avvia senza eseguire debug**. Visual Studio apre una finestra di comando in cui eseguire il programma. L'ultima parte dell'output sarà simile al seguente:

![Avviare l'app client senza debug](media/mathclient-run-without-debugging.png "Avviare l'app client senza debug")

Premere un tasto qualsiasi per chiudere la finestra di comando.

Ora che sono state create una DLL e un'applicazione client, è possibile sperimentarle. Provare a impostare punti di interruzione nel codice dell'app client ed eseguire l'app nel debugger. Vedere cosa accade quando si esegue una chiamata della libreria. Aggiungere altre funzioni alla libreria o scrivere un'altra app client che usa la DLL.

Quando si distribuisce l'app, è necessario distribuire anche le DLL usate. Il modo più semplice per rendere disponibili le DLL sviluppate o incluse da terze parti per l'app consiste nell'inserirle nella stessa directory dell'app, operazione nota anche come *distribuzione app-local*. Per altre informazioni sulla distribuzione, vedere [Deployment in Visual C++](../windows/deployment-in-visual-cpp.md).

## <a name="see-also"></a>Vedere anche

[Chiamata di funzioni DLL da applicazioni Visual Basic](calling-dll-functions-from-visual-basic-applications.md)
