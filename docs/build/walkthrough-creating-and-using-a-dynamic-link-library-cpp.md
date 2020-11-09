---
title: 'Procedura dettagliata: creare e usare la propria libreria a collegamento dinamico (C++)'
description: Usare C++ per creare una libreria di collegamento dinamico (DLL) di Windows in Visual Studio.
ms.custom: conceptual
ms.date: 08/22/2019
helpviewer_keywords:
- libraries [C++], DLLs
- DLLs [C++], walkthroughs
ms.assetid: 3ae94848-44e7-4955-bbad-7d40f493e941
ms.openlocfilehash: 0018df31e19a3f1a68a1c4a0bde37d6fa2678406
ms.sourcegitcommit: 868838273eda35eb72c78dccf4121940dcc04706
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/01/2020
ms.locfileid: "92924476"
---
# <a name="walkthrough-create-and-use-your-own-dynamic-link-library-c"></a>Procedura dettagliata: creare e usare la propria libreria a collegamento dinamico (C++)

Questa procedura dettagliata illustra come usare l'IDE di Visual Studio per creare la propria libreria di collegamento dinamico (DLL) scritta in Microsoft C++ (MSVC). Viene quindi illustrato come usare la DLL da un'altra app C++. Le dll, note anche come *librerie condivise* nei sistemi operativi basati su UNIX, rappresentano uno dei più utili tipi di componenti di Windows. È possibile usarli come metodo per condividere codice e risorse e per compattare le dimensioni delle app. Le dll possono anche semplificare il servizio e l'estensione delle app.

In questa procedura dettagliata verrà creata una DLL che implementa alcune funzioni matematiche. Si creerà quindi un'app console che usa le funzioni della DLL. Verrà inoltre introdotta un'introduzione ad alcune delle tecniche di programmazione e alle convenzioni utilizzate nelle DLL di Windows.

In questa procedura dettagliata vengono illustrate le seguenti attività:

- Creare un progetto di DLL in Visual Studio.

- Aggiungere funzioni e variabili esportate nella DLL.

- Creare un progetto di app console in Visual Studio.

- Usare le funzioni e variabili importate dalla DLL nell'app console.

- Eseguire l'app completata.

Analogamente a una libreria collegata in modo statico, una DLL _Esporta_ variabili, funzioni e risorse in base al nome. Un'app client _Importa_ i nomi per usare tali variabili, funzioni e risorse. Diversamente da una libreria collegata staticamente, Windows connette le importazioni nell'app alle esportazioni in una DLL in fase di caricamento o in fase di esecuzione, invece di farlo in fase di collegamento. Windows richiede informazioni aggiuntive che non fanno parte del modello di compilazione C++ standard per stabilire queste connessioni. Il compilatore MSVC implementa alcune estensioni specifiche di Microsoft per C++ per fornire queste informazioni aggiuntive. Queste estensioni verranno presentate man mano che si procede.

Questa procedura dettagliata crea due soluzioni di Visual Studio: una che compila la DLL e una che compila l'app client. La DLL usa la convenzione di chiamata C. Può essere chiamato da app scritte in altri linguaggi di programmazione, a condizione che la piattaforma, le convenzioni di chiamata e le convenzioni di collegamento corrispondano. L'app client usa il _collegamento implicito_ , mentre Windows collega l'app alla DLL in fase di caricamento. Questo collegamento consente all'app di chiamare le funzioni fornite dalla DLL proprio come le funzioni in una libreria collegata staticamente.

Questa procedura dettagliata non tratta alcune situazioni comuni. Il codice non Mostra l'uso di dll C++ da parte di altri linguaggi di programmazione. Non viene illustrato come [creare una DLL di sole risorse](creating-a-resource-only-dll.md)o come utilizzare il [collegamento esplicito](linking-an-executable-to-a-dll.md#linking-explicitly) per caricare le dll in fase di esecuzione anziché in fase di caricamento. Se si è certi, è possibile usare MSVC e Visual Studio per eseguire tutte queste operazioni.

Per collegamenti a ulteriori informazioni sulle DLL, vedere [Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md). Per ulteriori informazioni sul collegamento implicito e sul collegamento esplicito, vedere [determinare il metodo di collegamento da utilizzare](linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use). Per informazioni sulla creazione di dll C++ da utilizzare con i linguaggi di programmazione che utilizzano le convenzioni di collegamento del linguaggio C, vedere [esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio c](exporting-cpp-functions-for-use-in-c-language-executables.md). Per informazioni su come creare DLL da usare con i linguaggi .NET, vedere [Chiamata di funzioni DLL da applicazioni Visual Basic](calling-dll-functions-from-visual-basic-applications.md).

## <a name="prerequisites"></a>Prerequisiti

- Un computer che esegue Microsoft Windows 7 o versioni successive. Si consiglia Windows 10 per un'esperienza di sviluppo ottimale.

::: moniker range=">=msvc-150"

- Una copia di Visual Studio. Per informazioni su come scaricare e installare Visual Studio, vedere [Installare Visual Studio](/visualstudio/install/install-visual-studio). Quando si esegue il programma di installazione, assicurarsi che sia selezionato il carico di lavoro **Sviluppo di applicazioni desktop con C++**. Non è un problema se il carico di lavoro non è stato installato durante l'installazione di Visual Studio. È possibile eseguire nuovamente il programma di installazione e installarlo ora.

   ![Sviluppo per desktop con C++](media/desktop-development-with-cpp.png "Sviluppo per desktop con C++")

::: moniker-end

::: moniker range="msvc-140"

- Una copia di Visual Studio. Per informazioni su come scaricare e installare Visual Studio 2015, vedere [installare Visual studio 2015](/visualstudio/install/install-visual-studio-2015?view=vs-2015&preserve-view=true). Utilizzare un'installazione **personalizzata** per installare il compilatore e gli strumenti C++, poiché non sono installati per impostazione predefinita.

::: moniker-end

- Conoscenza dei concetti di base dell'uso dell'IDE di Visual Studio. Se si sono usate app desktop di Windows in precedenza, è probabilmente possibile riuscire a seguire. Per informazioni introduttive, vedere [Panoramica delle funzionalità dell'IDE di Visual Studio](/visualstudio/ide/visual-studio-ide).

- Conoscenza delle nozioni di base del linguaggio C++. Non verranno comunque presentate procedure troppo complicate.

::: moniker range="msvc-150"

> [!NOTE]
> Questa procedura dettagliata presuppone che si stia usando Visual Studio 2017 versione 15,9 o successiva. Alcune versioni precedenti di Visual Studio 2017 presentavano difetti nei modelli di codice oppure usavano finestre di dialogo dell'interfaccia utente diverse. Per evitare problemi, usare la Programma di installazione di Visual Studio per aggiornare Visual Studio 2017 alla versione 15,9 o successiva.

::: moniker-end

## <a name="create-the-dll-project"></a>Creare il progetto di DLL

In questo set di attività, si crea un progetto per la DLL, quindi si aggiunge codice e si compila il progetto. Per iniziare, avviare l'IDE di Visual Studio e accedere, se è necessario. Le istruzioni variano leggermente a seconda della versione di Visual Studio in uso. Assicurarsi di avere selezionato la versione corretta nel controllo in alto a sinistra della pagina.

::: moniker range=">=msvc-160"

### <a name="to-create-a-dll-project-in-visual-studio-2019"></a>Per creare un progetto di DLL in Visual Studio 2019

1. Sulla barra dei menu scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto**.

   ![Creare un nuovo progetto di DLL](media/create-new-dll-project-2019.png "Creare il progetto MathLibrary")

1. Nella parte superiore della finestra di dialogo impostare **Linguaggio** su **C++** , impostare **Piattaforma** su **Windows** e impostare **Tipo di progetto** su **Libreria**.

1. Dall'elenco filtrato dei tipi di progetto selezionare **libreria a collegamento dinamico (dll)** , quindi fare clic su **Avanti**.

1. Nella pagina **Configura nuovo progetto** immettere *MathLibrary* nella casella **nome progetto** per specificare un nome per il progetto. Lasciare i valori predefiniti per **percorso** e **Nome soluzione** . Impostare la **soluzione** per **creare una nuova soluzione**. Deselezionare **posiziona soluzione e progetto nella stessa directory** se è selezionata.

1. Scegliere il pulsante **Crea** per creare il progetto.

Quando viene creata la soluzione, è possibile visualizzare i file di progetto e di origine generati nella finestra **Esplora soluzioni** in Visual Studio.

![Screenshot della finestra di Esplora soluzioni di Visual Studio 2019 con la libreria matematica evidenziata.](media/mathlibrary-solution-explorer-162.png "Soluzione generata in Visual Studio")

::: moniker-end

::: moniker range="msvc-150"

### <a name="to-create-a-dll-project-in-visual-studio-2017"></a>Per creare un progetto di DLL in Visual Studio 2017

1. Sulla barra dei menu scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Nuovo progetto**.

1. Nel riquadro sinistro della finestra di dialogo **nuovo progetto** selezionare **installato**  >  **Visual C++**  >  **desktop di Windows**. Nel riquadro centrale selezionare **libreria a collegamento dinamico (dll)**. Immettere *MathLibrary* nella casella **nome** per specificare un nome per il progetto. Lasciare i valori predefiniti per **percorso** e **Nome soluzione** . Impostare la **soluzione** per **creare una nuova soluzione**. Selezionare **Crea directory per soluzione** se è deselezionata.

   ![Screenshot della finestra di dialogo nuovo progetto di Visual Studio 2017 che mostra la libreria Math nella casella di testo nome.](media/mathlibrary-new-project-name-159.png "Assegnare un nome al progetto MathLibrary")

1. Scegliere il pulsante **OK** per creare il progetto.

Quando viene creata la soluzione, è possibile visualizzare i file di progetto e di origine generati nella finestra **Esplora soluzioni** in Visual Studio.

![Screenshot della finestra di Esplora soluzioni di Visual Studio 2017 con la libreria matematica evidenziata.](media/mathlibrary-solution-explorer-159.png "Soluzione generata in Visual Studio")

::: moniker-end

::: moniker range="msvc-140"

### <a name="to-create-a-dll-project-in-visual-studio-2015-and-older-versions"></a>Per creare un progetto di DLL in Visual Studio 2015 e versioni precedenti

1. Sulla barra dei menu scegliere **file** > **nuovo** > **progetto**.

1. Nel riquadro sinistro della finestra di dialogo **Nuovo progetto** espandere **Installati** > **Modelli** e selezionare **Visual C++** , quindi nel riquadro centrale selezionare **Applicazione console Win32**. Immettere *MathLibrary* nella casella di modifica **nome** per specificare un nome per il progetto. Lasciare i valori predefiniti per **percorso** e **Nome soluzione** . Impostare la **soluzione** per **creare una nuova soluzione**. Selezionare **Crea directory per soluzione** se è deselezionata.

   ![Screenshot della finestra di dialogo nuovo progetto di Visual Studio 2015 che mostra la libreria Math nella casella di testo nome.](media/mathlibrary-project-name.png "Assegnare un nome al progetto MathLibrary")

1. Scegliere il pulsante **OK** per chiudere la finestra di dialogo **Nuovo progetto** e avviare la **Creazione guidata applicazione Win32**.

   ![Panoramica della creazione guidata applicazione Win32](media/mathlibrary-project-wizard-1.png "Panoramica della creazione guidata applicazione Win32")

1. Fare clic su **Avanti**. Nella pagina **Impostazioni applicazione** , in **Tipo di applicazione** , selezionare **DLL**.

   ![Creazione di DLL nella creazione guidata applicazione Win32](media/mathlibrary-project-wizard-2.png "Creazione di DLL nella creazione guidata applicazione Win32")

1. Scegliere il pulsante **Fine** per creare il progetto.

Quando viene completata la soluzione, il progetto e i file di origine generati saranno visibili nella finestra **Esplora soluzioni** in Visual Studio.

![Screenshot della finestra di Esplora soluzioni di Visual Studio 2015 con la libreria matematica evidenziata.](media/mathlibrary-solution-explorer-153.png "Soluzione generata in Visual Studio")

::: moniker-end

A questo punto la DLL non fa molto. Successivamente, verrà creato un file di intestazione per dichiarare le funzioni esportate dalla DLL e quindi aggiungere le definizioni di funzione alla DLL per renderla più utile.

### <a name="to-add-a-header-file-to-the-dll"></a>Per aggiungere un file di intestazione alla DLL

1. Per creare un file di intestazione per le funzioni, sulla barra dei menu scegliere **progetto**  >  **Aggiungi nuovo elemento**.

1. Nel riquadro sinistro della finestra di dialogo **Aggiungi nuovo elemento** selezionare **Visual C++**. Nel riquadro centrale selezionare **File di intestazione (.h)**. Specificare *MathLibrary. h* come nome per il file di intestazione.

   ![Aggiungi intestazione nella finestra di dialogo Aggiungi nuovo elemento](media/mathlibrary-add-new-item-header-file.png "Aggiungere un file di intestazione nella finestra di dialogo Aggiungi nuovo elemento")

1. Scegliere il pulsante **Aggiungi** per generare un file di intestazione vuoto, che viene visualizzato in una nuova finestra dell'editor.

   ![File MathLibrary. h vuoto nell'editor](media/edit-empty-mathlibrary-header.png "File MathLibrary. h vuoto nell'editor")

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

Si notino le istruzioni del preprocessore nella parte superiore del file. Il nuovo modello di progetto per un progetto di DLL aggiunge **_NomeProgetto_ &#95;le esportazioni** alle macro del preprocessore definite. In questo esempio, Visual Studio definisce **MATHLIBRARY&#95;EXPORTS** quando viene compilato il progetto di DLL MathLibrary.

Quando viene definita la macro **MATHLIBRARY&#95;EXPORTS** , la macro **MATHLIBRARY&#95;API** imposta il modificatore `__declspec(dllexport)` sulle dichiarazioni di funzione. Questo modificatore indica al compilatore e al linker di esportare una funzione o una variabile dalla DLL per l'uso da parte di altre applicazioni. Quando **MATHLIBRARY&#95;EXPORTS** non è definito, ad esempio, quando il file di intestazione viene incluso da un'applicazione client, **MATHLIBRARY&#95;API** applica il modificatore `__declspec(dllimport)` alle dichiarazioni. Questo modificatore ottimizza l'importazione della funzione o della variabile in un'applicazione. Per altre informazioni, vedere [dllexport, dllimport](../cpp/dllexport-dllimport.md).

### <a name="to-add-an-implementation-to-the-dll"></a>Per aggiungere un'implementazione alla DLL

::: moniker range=">=msvc-160"

1. In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul nodo **file di origine** e scegliere **Aggiungi**  >  **nuovo elemento**. Creare un nuovo file con estensione cpp denominato *MathLibrary. cpp* , nello stesso modo in cui è stato aggiunto un nuovo file di intestazione nel passaggio precedente.

1. Nella finestra dell'editor selezionare la scheda **MathLibrary.cpp** se è già aperta. In caso contrario, in **Esplora soluzioni** fare doppio clic su **MathLibrary. cpp** nella cartella **file di origine** del progetto **MathLibrary** per aprirlo.

1. Nell'editor sostituire il contenuto del file MathLibrary.cpp con il codice seguente:

   ```cpp
   // MathLibrary.cpp : Defines the exported functions for the DLL.
   #include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
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

::: moniker-end

::: moniker range="<=msvc-150"

1. Nella finestra dell'editor selezionare la scheda **MathLibrary.cpp** se è già aperta. In caso contrario, in **Esplora soluzioni** fare doppio clic su **MathLibrary. cpp** nella cartella **file di origine** del progetto **MathLibrary** per aprirlo.

1. Nell'editor sostituire il contenuto del file MathLibrary.cpp con il codice seguente:

   ```cpp
   // MathLibrary.cpp : Defines the exported functions for the DLL.
   #include "stdafx.h" // use pch.h in Visual Studio 2019 and later
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

::: moniker-end

Per verificare che tutto funzioni finora, compilare la libreria di collegamento dinamico. Per compilare **, scegliere Compila compila**  >  **soluzione** dalla barra dei menu. La DLL e l'output del compilatore correlato vengono inseriti in una cartella denominata *debug* direttamente sotto la cartella della soluzione. Se si crea una build di rilascio, l'output viene inserito in una cartella denominata *Release*. L'output dovrebbe essere simile al seguente:

::: moniker range=">=msvc-160"

```Output
1>------ Build started: Project: MathLibrary, Configuration: Debug Win32 ------
1>pch.cpp
1>dllmain.cpp
1>MathLibrary.cpp
1>Generating Code...
1>   Creating library C:\Users\username\Source\Repos\MathLibrary\Debug\MathLibrary.lib and object C:\Users\username\Source\Repos\MathLibrary\Debug\MathLibrary.exp
1>MathLibrary.vcxproj -> C:\Users\username\Source\Repos\MathLibrary\Debug\MathLibrary.dll
========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
```

::: moniker-end

::: moniker range="msvc-150"

```Output
1>------ Build started: Project: MathLibrary, Configuration: Debug Win32 ------
1>stdafx.cpp
1>dllmain.cpp
1>MathLibrary.cpp
1>Generating Code...
1>   Creating library C:\Users\username\Source\Repos\MathLibrary\Debug\MathLibrary.lib and object C:\Users\username\Source\Repos\MathLibrary\Debug\MathLibrary.exp
1>MathLibrary.vcxproj -> C:\Users\username\Source\Repos\MathLibrary\Debug\MathLibrary.dll
========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
```

::: moniker-end

::: moniker range="msvc-140"

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

::: moniker-end

Congratulazioni, è stata creata una DLL con Visual Studio. Nella prossima sezione si vedrà come creare un'app client che usa le funzioni esportate dalla DLL.

## <a name="create-a-client-app-that-uses-the-dll"></a>Creare un'app client che usa la DLL

Quando si crea una DLL, si pensi a come può essere usata dalle app client. Per chiamare le funzioni o accedere ai dati esportati da una DLL, il codice sorgente del client deve disporre delle dichiarazioni disponibili in fase di compilazione. Al momento del collegamento, il linker richiede informazioni per risolvere le chiamate di funzione o gli accessi ai dati. Una DLL fornisce queste informazioni in una *libreria di importazione* , un file che contiene informazioni su come trovare le funzioni e i dati, anziché il codice effettivo. E in fase di esecuzione la DLL deve essere disponibile per il client, in una posizione individuabile dal sistema operativo.

Che si tratti di un utente o di terze parti, il progetto di app client necessita di diverse informazioni per l'uso di una DLL. È necessario trovare le intestazioni che dichiarano le esportazioni DLL, le librerie di importazione per il linker e la DLL. Una soluzione consiste nel copiare tutti questi file nel progetto client. Per le DLL di terze parti che è improbabile vengano modificate durante lo sviluppo del client, questo metodo può rappresentare il modo migliore per usarle. Tuttavia, quando si crea anche la DLL, è preferibile evitare la duplicazione. Se si crea una copia locale di file DLL in fase di sviluppo, è possibile modificare accidentalmente un file di intestazione in una copia ma non in un'altra oppure utilizzare una libreria non aggiornata.

Per evitare codice non sincronizzato, è consigliabile impostare il percorso di inclusione nel progetto client per includere i file di intestazione DLL direttamente dal progetto DLL. Impostare inoltre il percorso della libreria nel progetto client per includere le librerie di importazione DLL dal progetto di DLL. Infine, copiare la DLL compilata dal progetto DLL nella directory di output di compilazione client. Questo passaggio consente all'app client di usare lo stesso codice DLL che si compila.

::: moniker range=">=msvc-160"

### <a name="to-create-a-client-app-in-visual-studio"></a>Per creare un'app client in Visual Studio

1. Sulla barra dei menu scegliere **file** > **nuovo** > **progetto** per aprire la finestra di dialogo **Crea un nuovo progetto** .

1. Nella parte superiore della finestra di dialogo impostare **Linguaggio** su **C++** , impostare **Piattaforma** su **Windows** e impostare **Tipo di progetto** su **Console**.

1. Nell'elenco filtrato dei tipi di progetto scegliere **App console** e quindi scegliere **Avanti**.

1. Nella pagina **Configura nuovo progetto** immettere *MathClient* nella casella **nome progetto** per specificare un nome per il progetto. Lasciare i valori predefiniti per **percorso** e **Nome soluzione** . Impostare la **soluzione** per **creare una nuova soluzione**. Deselezionare **posiziona soluzione e progetto nella stessa directory** se è selezionata.

   ![Screenshot della finestra di dialogo Crea nuovo progetto con l'opzione app console evidenziata.](media/mathclient-project-name-2019.png "Assegnare un nome al progetto client")

1. Scegliere il pulsante **Crea** per creare il progetto client.

Viene creato automaticamente un progetto di applicazione console minimo. Il nome del file di origine principale è lo stesso nome del progetto immesso in precedenza. In questo esempio, il file è denominato **MathClient.cpp**. È possibile compilare il progetto, ma non usa ancora la DLL.

::: moniker-end

::: moniker range="msvc-150"

### <a name="to-create-a-client-app-in-visual-studio-2017"></a>Per creare un'app client in Visual Studio 2017

1. Per creare un'app C++ che usa la DLL creata, nella barra dei menu scegliere **File** > **Nuovo** > **Progetto**.

1. Nel riquadro sinistro della finestra di dialogo **Nuovo progetto** selezionare **Desktop di Windows** in **Installati** > **Visual C++**. Nel riquadro centrale selezionare **applicazione console di Windows**. Specificare il nome del progetto, *MathClient* , nella casella di modifica **nome** .  Lasciare i valori predefiniti per **percorso** e **Nome soluzione** . Impostare la **soluzione** per **creare una nuova soluzione**. Selezionare **Crea directory per soluzione** se è deselezionata.

   ![Screenshot della finestra di dialogo nuovo progetto con installato > Visual C Plus Plus > desktop di Windows selezionato, l'applicazione console Windows evidenziata e il client Math digitato nella casella di testo nome.](media/mathclient-new-project-name-159.png "Assegnare un nome al progetto client")

1. Scegliere **OK** per creare il progetto di app client.

Viene creato automaticamente un progetto di applicazione console minimo. Il nome del file di origine principale è lo stesso nome del progetto immesso in precedenza. In questo esempio, il file è denominato **MathClient.cpp**. È possibile compilare il progetto, ma non usa ancora la DLL.

::: moniker-end

::: moniker range="msvc-140"

### <a name="to-create-a-client-app-in-visual-studio-2015"></a>Per creare un'app client in Visual Studio 2015

1. Per creare un'app C++ che usa la DLL creata, nella barra dei menu scegliere **File** > **Nuovo** > **Progetto**.

1. Nel riquadro sinistro della finestra di dialogo **Nuovo progetto** selezionare **Win32** in **Installati** > **Modelli** > **Visual C++**. Nel riquadro centrale, selezionare **Progetto console Win32**. Specificare il nome del progetto, *MathClient* , nella casella di modifica **nome** . Lasciare i valori predefiniti per **percorso** e **Nome soluzione** . Impostare la **soluzione** per **creare una nuova soluzione**. Selezionare **Crea directory per soluzione** se è deselezionata.

   ![Screenshot della finestra di dialogo nuovo progetto con i modelli di > installati > Visual C Plus Plus > Win32 selezionato, l'applicazione console Win32 Visual C Plus Plus evidenziato e il client Math digitato nella casella di testo nome.](media/mathclient-project-name.png "Assegnare un nome al progetto client")

1. Scegliere il pulsante **OK** per chiudere la finestra di dialogo **Nuovo progetto** e avviare la **Creazione guidata applicazione Win32**. Nella pagina **Panoramica** della finestra di dialogo **Creazione guidata applicazione Win32** , scegliere il pulsante **Avanti** .

1. Nella pagina **Impostazioni applicazione** in **Tipo di applicazione** selezionare **Applicazione console** se non è già selezionato.

1. Scegliere il pulsante **Fine** per creare il progetto.

Al termine della procedura guidata, viene creato automaticamente un progetto di applicazione console minimo. Il nome del file di origine principale è lo stesso nome del progetto immesso in precedenza. In questo esempio, il file è denominato **MathClient.cpp**. È possibile compilare il progetto, ma non usa ancora la DLL.

::: moniker-end

Successivamente, per chiamare le funzioni MathLibrary nel codice sorgente, il progetto deve includere il file *MathLibrary. h* . È possibile copiare questo file di intestazione nel progetto dell'app client e quindi aggiungerlo al progetto come elemento esistente. Questo metodo può essere una scelta ottimale per le librerie di terze parti. Tuttavia, se si sta lavorando al codice per la DLL e il client allo stesso tempo, i file di intestazione potrebbero non essere sincronizzati. Per evitare questo problema, impostare il percorso delle **directory di inclusione aggiuntive** nel progetto per includere il percorso dell'intestazione originale.

### <a name="to-add-the-dll-header-to-your-include-path"></a>Per aggiungere l'intestazione DLL al percorso di inclusione

1. Fare clic con il pulsante destro del mouse sul nodo **MathClient** in **Esplora soluzioni** per aprire la finestra di dialogo **Pagine delle proprietà**.

1. Nella casella di riepilogo a discesa **configurazione** selezionare **tutte le configurazioni** se non è già selezionata.

1. Nel riquadro sinistro selezionare proprietà di **configurazione**  >  **C/C++**  >  **generale**.

1. Nel riquadro delle proprietà selezionare il controllo elenco a discesa accanto alla casella di modifica **Directory di inclusione aggiuntive** e quindi scegliere **Modifica**.

   ![Modificare la proprietà directory di inclusione aggiuntive](media/mathclient-additional-include-directories-property.png "Modificare la proprietà directory di inclusione aggiuntive")

1. Fare doppio clic nel riquadro superiore della finestra di dialogo **Directory di inclusione aggiuntive** per abilitare un controllo di modifica. In alternativa, scegliere l'icona della cartella per creare una nuova voce.

1. Nel controllo di modifica specificare il percorso del file di intestazione **MathLibrary.h**. È possibile scegliere il controllo con i puntini di sospensione ( **...** ) per passare alla cartella corretta.

   È anche possibile immettere un percorso relativo dai file di origine client alla cartella che contiene i file di intestazione della DLL. Se sono state seguite le istruzioni per inserire il progetto client in una soluzione separata dalla DLL, il percorso relativo dovrebbe essere simile al seguente:

   `..\..\MathLibrary\MathLibrary`

   Se la DLL e i progetti client si trovano nella stessa soluzione, il percorso relativo potrebbe essere simile al seguente:

   `..\MathLibrary`

   Quando la DLL e i progetti client si trovano in altre cartelle, modificare il percorso relativo in modo che corrisponda. In alternativa, utilizzare il controllo con i puntini di sospensione per cercare la cartella.

   ![Aggiungere il percorso dell'intestazione alla proprietà directory di inclusione aggiuntive](media/mathclient-additional-include-directories.png "Aggiungere il percorso dell'intestazione alla proprietà directory di inclusione aggiuntive")

1. Dopo aver immesso il percorso del file di intestazione nella finestra di dialogo **directory di inclusione aggiuntive** , scegliere il pulsante **OK** . Nella finestra di dialogo **pagine delle proprietà** scegliere il pulsante **OK** per salvare le modifiche.

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

Questo codice può essere compilato ma non collegato. Se si compila l'app client adesso, l'elenco errori Mostra diversi errori di LNK2019. Questo perché nel progetto mancano alcune informazioni: non è stato specificato che il progetto ha ancora una dipendenza dalla libreria *MathLibrary. lib* . Non è stato indicato al linker come trovare il file *MathLibrary. lib* .

Per risolvere questo problema, è possibile copiare il file di libreria direttamente nel progetto di app client. Il linker lo troverà e lo userà automaticamente. Tuttavia, se la libreria e l'app client sono in fase di sviluppo, questo potrebbe causare modifiche in una copia non mostrata nell'altra. Per evitare questo problema, è possibile impostare la proprietà **dipendenze aggiuntive** per indicare al sistema di compilazione che il progetto dipende da *MathLibrary. lib*. Inoltre, è possibile impostare un percorso di **directory di libreria aggiuntivo** nel progetto per includere il percorso della libreria originale quando si collega.

### <a name="to-add-the-dll-import-library-to-your-project"></a>Per aggiungere la libreria di importazione DLL al progetto

1. Fare clic con il pulsante destro del mouse sul nodo **MathClient** in **Esplora soluzioni** e scegliere **proprietà** per aprire la finestra di dialogo **pagine delle proprietà** .

1. Nella casella di riepilogo a discesa **configurazione** selezionare **tutte le configurazioni** se non è già selezionata. Garantisce che tutte le modifiche alle proprietà siano valide per le compilazioni di debug e di rilascio.

1. Nel riquadro sinistro selezionare proprietà di **configurazione**  >  input del **linker**  >  **Input**. Nel riquadro delle proprietà selezionare il controllo elenco a discesa accanto alla casella di modifica **Dipendenze aggiuntive** e quindi scegliere **Modifica**.

   ![Modificare la proprietà Dipendenze aggiuntive](media/mathclient-additional-dependencies-property.png "Modificare la proprietà Dipendenze aggiuntive")

1. Nella finestra di dialogo **dipendenze aggiuntive** aggiungere *MathLibrary. lib* all'elenco nel controllo di modifica superiore.

   ![Aggiungere la dipendenza della libreria](media/mathclient-additional-dependencies.png "Aggiungere la dipendenza della libreria")

1. Scegliere **OK** per tornare alla finestra di dialogo **Pagine delle proprietà**.

1. Nel riquadro sinistro selezionare proprietà di **configurazione**  >  **collegamento**  >  **generale**. Nel riquadro delle proprietà selezionare il controllo elenco a discesa accanto alla casella di modifica **Directory librerie aggiuntive** e quindi scegliere **Modifica**.

   ![Modificare la proprietà Directory librerie aggiuntive](media/mathclient-additional-library-directories-property.png "Modificare la proprietà Directory librerie aggiuntive")

1. Fare doppio clic nel riquadro superiore della finestra di dialogo **Directory librerie aggiuntive** per abilitare un controllo di modifica. Nel controllo di modifica specificare il percorso del file **MathLibrary.lib**. Per impostazione predefinita, si trova in una cartella denominata *debug* direttamente nella cartella della soluzione dll. Se si crea una build di rilascio, il file viene inserito in una cartella denominata *Release*. È possibile usare la `$(IntDir)` macro in modo che il linker possa trovare la dll, indipendentemente dal tipo di compilazione creata. Se sono state seguite le istruzioni per inserire il progetto client in una soluzione separata dal progetto DLL, il percorso relativo dovrebbe essere simile al seguente:

   `..\..\MathLibrary\$(IntDir)`

   Se la DLL e i progetti client si trovano in altre posizioni, modificare il percorso relativo in modo che corrisponda.

   ![Aggiungere la directory della libreria](media/mathclient-additional-library-directories.png "Aggiungere la directory della libreria")

1. Dopo aver immesso il percorso del file di libreria nella finestra di dialogo **Directory librerie aggiuntive** scegliere il pulsante **OK** per tornare alla finestra di dialogo **Pagine delle proprietà**. Scegliere **OK** per salvare le modifiche alle proprietà.

È ora possibile compilare e collegare l'app client correttamente, ma ancora non include tutto ciò che serve per l'esecuzione. Quando il sistema operativo carica l'app, cerca la DLL MathLibrary. Se non riesce a trovare la DLL in determinate directory di sistema, nel percorso di ambiente o nella directory dell'app locale, il caricamento ha esito negativo. A seconda del sistema operativo, verrà visualizzato un messaggio di errore simile al seguente:

![Errore DLL MathLibrary non trovato](media/mathclient-system-error-mathlibrary-dll-not-found.png "Errore DLL MathLibrary non trovato")

Un modo per evitare questo problema consiste nel copiare la DLL nella directory che contiene il file eseguibile del client come parte del processo di compilazione. È possibile aggiungere un **evento di post-compilazione** al progetto per aggiungere un comando che copia la dll nella directory dell'output di compilazione. Il comando specificato qui copia la DLL solo se è mancante o è stato modificato. Usa le macro per copiare da e verso i percorsi di debug o di rilascio, in base alla configurazione della build.

### <a name="to-copy-the-dll-in-a-post-build-event"></a>Per copiare la DLL in un evento di post-compilazione

1. Fare clic con il pulsante destro del mouse sul nodo **MathClient** in **Esplora soluzioni** e scegliere **proprietà** per aprire la finestra di dialogo **pagine delle proprietà** .

1. Nella casella di riepilogo a discesa **configurazione** selezionare **tutte le configurazioni** se non sono già selezionate.

1. Nel riquadro sinistro selezionare proprietà di **configurazione**  >  **eventi di compilazione**  >  **evento post-compilazione**.

1. Nel riquadro delle proprietà selezionare il controllo modifica nel campo **riga di comando** . Se sono state seguite le istruzioni per inserire il progetto client in una soluzione separata dal progetto DLL, immettere questo comando:

   `xcopy /y /d "..\..\MathLibrary\$(IntDir)MathLibrary.dll" "$(OutDir)"`

   Se la DLL e i progetti client si trovano in altre directory, modificare il percorso relativo della DLL in modo che corrisponda a.

   ![Aggiungere il comando post-compilazione](media/mathclient-post-build-command-line.png "Aggiungere il comando post-compilazione")

1. Scegliere il pulsante **OK** per salvare le modifiche alle proprietà del progetto.

A questo punto l'app client include tutto il necessario per la compilazione e l'esecuzione. Compilare l'applicazione scegliendo **Compila**  >  **Compila soluzione** sulla barra dei menu. La finestra di **output** in Visual Studio dovrebbe avere un aspetto simile a quello dell'esempio seguente, a seconda della versione di Visual Studio:

```Output
1>------ Build started: Project: MathClient, Configuration: Debug Win32 ------
1>MathClient.cpp
1>MathClient.vcxproj -> C:\Users\username\Source\Repos\MathClient\Debug\MathClient.exe
1>1 File(s) copied
========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
```

È stata completata la creazione di un'applicazione che chiama le funzioni nella DLL. Eseguire ora l'applicazione per vederne le funzioni. Sulla barra dei menu scegliere **debug**  >  **Avvia senza eseguire debug**. Visual Studio apre una finestra di comando in cui eseguire il programma. L'ultima parte dell'output sarà simile al seguente:

![Avviare l'app client senza debug](media/mathclient-run-without-debugging.png "Avviare l'app client senza debug")

Premere un tasto qualsiasi per chiudere la finestra di comando.

Ora che sono state create una DLL e un'applicazione client, è possibile sperimentarle. Provare a impostare punti di interruzione nel codice dell'app client ed eseguire l'app nel debugger. Vedere cosa accade quando si esegue una chiamata della libreria. Aggiungere altre funzioni alla libreria o scrivere un'altra app client che usa la DLL.

Quando si distribuisce l'app, è necessario distribuire anche le DLL usate. Il modo più semplice per rendere disponibili le DLL compilate o da terze parti è inserirle nella stessa directory dell'app. È noto come *distribuzione locale dell'app*. Per altre informazioni sulla distribuzione, vedere [Deployment in Visual C++](../windows/deployment-in-visual-cpp.md).

## <a name="see-also"></a>Vedere anche

[Chiamata di funzioni DLL da applicazioni Visual Basic](calling-dll-functions-from-visual-basic-applications.md)
