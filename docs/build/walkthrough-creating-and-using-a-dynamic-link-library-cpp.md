---
title: 'Procedura dettagliata: Creare e usare il proprio libreria a collegamento dinamico (C++) | Microsoft Docs'
ms.custom: conceptual
ms.date: 09/24/2018
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- libraries [C++], DLLs
- DLLs [C++], walkthroughs
ms.assetid: 3ae94848-44e7-4955-bbad-7d40f493e941
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9806a17bfb603ff54609f2d509c50d0a5d91e15d
ms.sourcegitcommit: a738519aa491a493a8f213971354356c0e6a5f3a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/05/2018
ms.locfileid: "48821257"
---
# <a name="walkthrough-create-and-use-your-own-dynamic-link-library-c"></a>Procedura dettagliata: Creare e usare il proprio libreria a collegamento dinamico (C++)

Questa procedura dettagliata illustra come usare l'IDE di Visual Studio per creare il proprio libreria a collegamento dinamico (DLL) scritta in C++, e quindi usarlo da un'altra app C++. DLL sono uno dei tipi più utili di componenti di Windows. È possibile usarli come un modo per condividere codice e risorse, per compattare le dimensioni delle tue App e per renderne più semplice del servizio ed estendere le app. In questa procedura dettagliata, si crea una DLL che implementa alcune funzioni matematiche e quindi crea un'app console che usa le funzioni dalla DLL. Corso della trattazione, un'introduzione per alcune delle tecniche di programmazione e le convenzioni usate nelle DLL di Windows.

In questa procedura dettagliata vengono illustrate le seguenti attività:

- Creare un progetto di DLL in Visual Studio.

- Aggiungere variabili e le funzioni esportate della DLL.

- Creare un progetto app console in Visual Studio.

- Utilizzare le funzioni e variabili importate dalla DLL nell'app console.

- Eseguire l'app completata.

Ad esempio una libreria collegata staticamente, una DLL _esportazioni_ variabili, funzioni e le risorse di base al nome e l'app _Importa_ tali nomi per usare queste variabili, funzioni e le risorse. A differenza di una libreria collegata staticamente, Windows si connette le importazioni nell'app per le esportazioni in una DLL in fase di caricamento o in fase di esecuzione, invece che li connettono in fase di collegamento. Windows richiede informazioni aggiuntive che non fa parte del modello di compilazione di C++ standard per stabilire queste connessioni. Il compilatore Visual C++ implementa alcune estensioni specifiche di Microsoft per C++ per fornire queste informazioni aggiuntive. Illustra queste estensioni man mano che si procede.

Questa procedura dettagliata crea due soluzioni di Visual Studio. uno che compila la DLL e uno che compila l'app client. La DLL utilizza la convenzione di chiamata C in modo che può essere chiamata dalle App compilata con altri linguaggi, purché la piattaforma e la chiamata e il collegamento convenzioni corrispondano. L'app client usa _collegamento implicito_, in cui Windows collega l'app per la DLL in fase di caricamento. Questo collegamento consente all'app di chiamare le funzioni DLL fornito dal proprio come le funzioni in una libreria collegata staticamente.

Questa procedura dettagliata non copre alcune situazioni comuni. Non visualizza l'uso di DLL c / C++ da altri linguaggi di programmazione. Non viene illustrato come creare una DLL di sole risorse. Non mostra neanche l'uso di un collegamento esplicito per caricare le DLL in fase di esecuzione anziché in fase di caricamento. Goditi, è possibile usare Visual C++ per eseguire tutte queste operazioni. Per collegamenti a ulteriori informazioni sulle DLL, vedere [DLL in Visual C++](../build/dlls-in-visual-cpp.md). Per altre informazioni sul collegamento implicito ed esplicito, vedere [determinazione del metodo di collegamento da utilizzare](../build/linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use). Per informazioni sulla creazione di DLL c / C++ per l'uso con linguaggi di programmazione che usano convenzioni di collegamento del linguaggio C, vedere [esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md). Per informazioni su come creare DLL da usare con i linguaggi .NET, vedere [chiamata di funzioni DLL dalle applicazioni Visual Basic](../build/calling-dll-functions-from-visual-basic-applications.md).

Questa procedura dettagliata Usa Visual Studio 2017, ma il codice e la maggior parte delle istruzioni si applicano a versioni precedenti. I passaggi per creare nuovi progetti modificati a partire da Visual Studio 2017 versione 15.3. Questa procedura dettagliata descrive come creare progetti per le versioni meno recenti e più recenti. Cercare i passaggi che corrispondano alla versione di Visual Studio.

## <a name="prerequisites"></a>Prerequisiti

- Un computer che esegue Microsoft Windows 7 o versioni successive. Si consiglia di Windows 10 per la migliore esperienza di sviluppo.

- Una copia di Visual Studio 2017. Per informazioni su come scaricare e installare Visual Studio, vedere [installare Visual Studio 2017](/visualstudio/install/install-visual-studio). Quando si esegue il programma di installazione, assicurarsi che il **sviluppo di applicazioni Desktop con C++** viene controllato il carico di lavoro. Non occorre preoccuparsi se non è stato installato il carico di lavoro durante l'installazione di Visual Studio. È possibile eseguire nuovamente il programma di installazione e installarlo ora.

   ![Sviluppo di applicazioni desktop con C++](media/desktop-development-with-cpp.png "sviluppo Desktop con C++")

- Comprendere le nozioni di base dell'uso di IDE di Visual Studio. Se è stato usato Windows App desktop prima, probabilmente è possibile mantenere. Per un'introduzione, vedere [Tour delle funzionalità IDE di Visual Studio](/visualstudio/ide/visual-studio-ide).

- Una conoscenza di un numero sufficiente delle nozioni di base del linguaggio C++ per seguire la procedura. Non ti preoccupare, abbiamo non eseguire alcuna operazione troppo complicato.

## <a name="create-the-dll-project"></a>Creare il progetto DLL

In questo set di attività, si crea un progetto per la DLL, aggiungere il codice e compilarlo. Per iniziare, avviare l'IDE di Visual Studio e accedere, se è necessario. Le istruzioni per Visual Studio 2017 versione 15.3 indicati per primi. Le istruzioni per le versioni precedenti in futuro, pertanto proseguire con il passaggio se è necessario.

### <a name="to-create-a-dll-project-in-visual-studio-2017-version-153-or-later"></a>Per creare un progetto DLL in Visual Studio 2017 versione 15.3 o versione successiva

1. Nella barra dei menu, scegliere **File** > **New** > **progetto** per aprire la **nuovo progetto** nella finestra di dialogo.

1. Nel riquadro sinistro della finestra di **nuovo progetto** finestra di dialogo, espandere **installato** e **Visual C++** se necessario e quindi scegliere **Windows Desktop** . Nel riquadro centrale, selezionare **Creazione guidata applicazione Desktop Windows**. Immettere `MathLibrary` nella **nome** casella per specificare un nome per il progetto.

   ![Denominare il progetto MathLibrary](media/mathlibrary-new-project-name-153.png "denominare il progetto MathLibrary")

1. Scegliere il **OK** per chiudere la **nuovo progetto** finestra di dialogo e avviare la **progetto Desktop di Windows** procedura guidata.

1. Nel **progetto Desktop di Windows** procedura guidata sotto **tipo di applicazione**, selezionare **libreria a collegamento dinamico (DLL)**.

   ![Creare DLL nella creazione guidata progetto Desktop di Windows](media/mathlibrary-desktop-project-wizard-dll.png "creare DLL nella creazione guidata progetto Desktop di Windows")

1. Scegliere il pulsante **OK** per creare il progetto.

> [!NOTE]
> Per correggere un problema in Visual Studio 2017 versione 15.3 sono necessari passaggi aggiuntivi. Seguire queste istruzioni per verificare se è necessario apportare questa modifica.
>
>1. Nelle **Esplora soluzioni**, se non è già selezionata, selezionare la **MathLibrary** progetto sotto **soluzione 'MathLibrary'**.
>
>1. Sulla barra dei menu scegliere **Progetto** > **Proprietà**.
>
>1. Nel riquadro sinistro della finestra il **pagine delle proprietà** finestra di dialogo **preprocessore** sotto **le proprietà di configurazione** > **C/C++**. Verificare i contenuti del **definizioni preprocessore** proprietà.<br/><br/>![Controllare la proprietà definizioni preprocessore](media/mathlibrary-153bug-preprocessor-definitions-check.png "controllare la proprietà definizioni preprocessore")<br/><br/>Se viene visualizzato **MATHLIBRARY&#95;esportazioni** nel **definizioni preprocessore** visualizzare un elenco, quindi non è necessario apportare alcuna modifica. Se viene visualizzato **MathLibrary&#95;esportazioni** invece, quindi continuare a seguire questa procedura.
>
>1. Nella parte superiore del **pagine delle proprietà** finestra di dialogo Modifica il **Configuration** elenco a discesa per **tutte le configurazioni**.
>
>1. Nel riquadro delle proprietà, selezionare il controllo elenco a discesa accanto alla casella di modifica per **definizioni preprocessore**, quindi scegliere **modificare**.<br/><br/>![Modificare la proprietà definizioni preprocessore](media/mathlibrary-153bug-preprocessor-definitions-property.png "modificare la proprietà definizioni preprocessore")
>
>1. Nel riquadro superiore del **definizioni preprocessore** finestra di dialogo, aggiunge un nuovo simbolo `MATHLIBRARY_EXPORTS`.<br/><br/>![Aggiungere il simbolo MATHLIBRARY_EXPORTS](media/mathlibrary-153bug-preprocessor-definitions-dialog.png "aggiungere il simbolo MATHLIBRARY_EXPORTS")
>
>1. Scegli **OK** per chiudere la **definizioni preprocessore** finestra di dialogo e quindi scegliere **OK** per salvare le modifiche alle proprietà del progetto.

### <a name="to-create-a-dll-project-in-older-versions-of-visual-studio"></a>Per creare un progetto DLL nelle versioni precedenti di Visual Studio

1. Nella barra dei menu scegliere **File** > **Nuovo** > **Progetto**.

1. Nel riquadro sinistro della finestra di **nuovo progetto** finestra di dialogo espandere **installato** > **modelli**e selezionare **Visual C++**, e quindi, nel riquadro centrale, seleziona **applicazione Console Win32**. Immettere `MathLibrary` nella **nome** casella per specificare un nome per il progetto di modifica.

   ![Denominare il progetto MathLibrary](media/mathlibrary-project-name.png "denominare il progetto MathLibrary")

1. Scegliere il **OK** per chiudere la **nuovo progetto** finestra di dialogo e avviare la **Creazione guidata applicazione Win32**.

   ![Cenni preliminari sulla creazione guidata applicazione Win32](media/mathlibrary-project-wizard-1.png "Cenni preliminari sulla creazione guidata applicazione Win32")

1. Fare clic su **Avanti**. Nel **Application Settings** nella pagina **tipo di applicazione**, selezionare **DLL**.

   ![Creare DLL in Creazione guidata applicazione Win32](media/mathlibrary-project-wizard-2.png "creare DLL in Creazione guidata applicazione Win32")

1. Scegliere il pulsante **Fine** per creare il progetto.

Al termine della soluzione, è possibile visualizzare i file di progetto e di origine generati nel **Esplora soluzioni** finestra in Visual Studio.

![Generato soluzioni in Visual Studio](media/mathlibrary-solution-explorer-153.png "generati soluzione in Visual Studio")

Diritto a questo punto, questa DLL non esegue molte operazioni. Successivamente, si crea un file di intestazione per dichiarare le funzioni DLL esportate e quindi aggiungere le definizioni di funzioni della DLL per renderli più utili.

### <a name="to-add-a-header-file-to-the-dll"></a>Per aggiungere un file di intestazione della DLL

1. Per creare un file di intestazione per le funzioni, nella barra dei menu, scegliere **Project** > **Aggiungi nuovo elemento**.

1. Nel **Aggiungi nuovo elemento** finestra di dialogo, nel riquadro sinistro, seleziona **Visual C++**. Nel riquadro centrale selezionare **File di intestazione (.h)**. Specificare `MathLibrary.h` come nome per il file di intestazione.

   ![Aggiungi intestazione nella finestra di dialogo Aggiungi nuovo elemento](media/mathlibrary-add-new-item-header-file.png "Aggiungi file di intestazione nella finestra di dialogo Aggiungi nuovo elemento")

1. Scegliere il **Add** pulsante per generare un file di intestazione vuoto, viene visualizzato in una nuova finestra dell'editor.

   ![Svuota il file nell'editor MathLibrary.h](media/edit-empty-mathlibrary-header.png "file MathLibrary.h vuoto nell'editor")

1. Sostituire il contenuto del file di intestazione con il seguente codice:

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

Questo file di intestazione dichiara alcune funzioni per produrre una sequenza di Fibonacci generalizzata, determinati due valori iniziali. Una chiamata a `fibonacci_init(1, 1)` genera la sequenza di numero di Fibonacci familiare.

Si noti che le istruzioni per il preprocessore nella parte superiore del file. Per impostazione predefinita, il modello nuovo progetto per una DLL aggiunge  **<em>NOMEPROGETTO</em>&#95;esportazioni** per le macro del preprocessore definite per il progetto DLL. In questo esempio, Visual Studio definisce **MATHLIBRARY&#95;esportazioni** quando viene compilato il progetto DLL MathLibrary. (La procedura guidata in Visual Studio 2017 versione 15.3 non impone questa definizione del simbolo in lettere maiuscole. Se si denominare il progetto "MathLibrary", quindi il simbolo definito è MathLibrary&#95;esportazioni anziché MATHLIBRARY&#95;le esportazioni. That's motivo per cui esistono passaggi aggiuntivi precedenti per aggiungere questo simbolo.)

Quando la **MATHLIBRARY&#95;esportazioni** macro viene definita, il **MATHLIBRARY&#95;API** macro imposta il `__declspec(dllexport)` modificatore le dichiarazioni di funzione. Questo modificatore comunica il compilatore e linker per esportare una funzione o variabile dalla DLL in modo che può essere utilizzato da altre applicazioni. Quando **MATHLIBRARY&#95;esportazioni** è definito, ad esempio, quando il file di intestazione è incluso per un'applicazione client, **MATHLIBRARY&#95;API** si applica la `__declspec(dllimport)` modificatore per la dichiarazioni. Questo modificatore Ottimizza l'importazione della funzione o variabile in un'applicazione. Per altre informazioni, vedere [dllexport, dllimport](../cpp/dllexport-dllimport.md).

### <a name="to-add-an-implementation-to-the-dll"></a>Per aggiungere un'implementazione alla DLL

1. Nella finestra dell'editor, selezionare la scheda **MathLibrary.cpp** se è già aperto. In caso contrario, in **Esplora soluzioni**aprire **MathLibrary.cpp** nel **file di origine** cartella della **MathLibrary** progetto.

1. Nell'editor, sostituire il contenuto del file MathLibrary.cpp con il codice seguente:

   ```cpp
   // MathLibrary.cpp : Defines the exported functions for the DLL.
   #include "stdafx.h"
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

Per verificare che tutto funzioni finora, compilare la libreria a collegamento dinamico. Per eseguire la compilazione, scegliere **compilare** > **Compila soluzione** nella barra dei menu. L'output dovrebbe essere simile a:

```Output
1>------ Build started: Project: MathLibrary, Configuration: Debug Win32 ------
1>stdafx.cpp
1>MathLibrary.cpp
1>dllmain.cpp
1>Generating Code...
1>   Creating library C:\Users\username\Source\Repos\MathLibrary\Debug\MathLibrary.lib and object C:\Users\username\Source\Repos\MathLibrary\Debug\MathLibrary.exp
1>MathLibrary.vcxproj -> C:\Users\username\Source\Repos\MathLibrary\Debug\MathLibrary.dll
1>MathLibrary.vcxproj -> C:\Users\username\Source\Repos\MathLibrary\Debug\MathLibrary.pdb (Partial PDB)
========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
```

Complimenti, è stata creata una DLL usando Visual C++. Successivamente, si creerà un'app client che usa le funzioni esportate dalla DLL.

## <a name="create-a-client-app-that-uses-the-dll"></a>Creare un'app client che usa la DLL

Quando si crea una DLL, è necessario valutare come è possibile usare la DLL. Per compilare il codice che chiama le funzioni esportate da una DLL, le dichiarazioni devono essere incluso nel codice sorgente client. In fase di collegamento, queste chiamate alle funzioni DLL quando vengono risolte, il linker deve avere un *libreria di importazione*, un file di libreria speciale che contiene informazioni per Windows su come individuare le funzioni, anziché il codice effettivo. E in fase di esecuzione deve essere disponibile al client, in un percorso a cui il sistema operativo è possibile trovare la DLL.

Utilizzare una DLL, se il proprietario o una DLL di terze parti, il progetto di app client deve trovare le intestazioni che dichiarano la DLL esporta, le librerie di importazione per il linker e la DLL. Un modo, consiste nel copiare tutti i file nel progetto client. Per le DLL di terze parti che è improbabile che cambia mentre il client è in fase di sviluppo, questo metodo può essere il modo migliore per usarli. Tuttavia, quando si crea anche la DLL, è preferibile evitare la duplicazione. Se si apporta una copia del file DLL che sono in fase di sviluppo, si può modificare un file di intestazione in una sola copia, ma non in altra accidentalmente o usare una libreria non aggiornata. Per evitare questo problema, è consigliabile che impostare il percorso di inclusione nel progetto client per includere i file di intestazione DLL dal progetto di DLL. Inoltre, impostare il percorso di libreria nel progetto client per includere le librerie di importazione DLL dal progetto di DLL. E, infine, copiare la DLL compilata dal progetto di DLL alla directory di output di compilazione. Questo passaggio consente all'app client di usare lo stesso codice DLL che si compila.

### <a name="to-create-a-client-app-in-visual-studio-2017-version-153-or-later"></a>Per creare un'app client in Visual Studio 2017 versione 15.3 o versione successiva

1. Per creare un'app C++ che usa la DLL che è stato creato, nella barra dei menu, scegliere **File** > **New** > **progetto**.

1. Nel riquadro sinistro della finestra il **nuovo progetto** finestra di dialogo, seleziona **Desktop di Windows** sotto **Installed** > **Visual C++**. Nel riquadro centrale, selezionare **Creazione guidata applicazione Desktop Windows**. Specificare il nome del progetto `MathClient`, nella **nome** casella di modifica.

   ![Denominare il progetto client](media/mathclient-new-project-name-153.png "denominare il progetto client")

1. Scegli **OK** per avviare la **progetto Desktop di Windows** procedura guidata. Nella procedura guidata, scegliere **OK** per creare il progetto di app client.

### <a name="to-create-a-client-app-in-older-versions-of-visual-studio-2017"></a>Per creare un'app client nelle versioni precedenti di Visual Studio 2017

1. Per creare un'app C++ che usa la DLL che è stato creato, nella barra dei menu, scegliere **File** > **New** > **progetto**.

1. Nel riquadro sinistro della finestra il **nuovo progetto** finestra di dialogo, seleziona **Win32** sotto **Installed** > **modelli**  >  **Visual C++**. Nel riquadro centrale, selezionare **Progetto console Win32**. Specificare il nome del progetto `MathClient`, nella **nome** casella di modifica.

   ![Denominare il progetto client](media/mathclient-project-name.png "denominare il progetto client")

1. Scegliere il **OK** per chiudere la **nuovo progetto** finestra di dialogo e avviare la **Creazione guidata applicazione Win32**. Nella pagina **Panoramica** della finestra di dialogo **Creazione guidata applicazione Win32** , scegliere il pulsante **Avanti** .

1. Nel **Application Settings** nella pagina **tipo di applicazione**, selezionare **applicazione Console** se non è già selezionato.

1. Scegliere il pulsante **Fine** per creare il progetto.

Al termine della procedura guidata, viene creato un progetto di applicazione console minimo per l'utente. Il nome del file di origine principale è lo stesso nome del progetto immesso in precedenza. In questo esempio, il file è denominato **MathClient.cpp**. È possibile compilare la soluzione, ma non usa ancora la DLL.

Successivamente, per chiamare le funzioni MathLibrary nel codice sorgente, il progetto deve includere il file MathLibrary.h. È possibile copiare questo file di intestazione nel progetto dell'app client, quindi aggiungerlo al progetto come elemento esistente. Questo metodo può essere una scelta ottimale per le librerie di terze parti. Tuttavia, se Usa il codice per la DLL nello stesso momento come client di posta, che potrebbero causare modifiche nel file di un'intestazione che non vengono visualizzate in altro. Per evitare questo problema, è possibile modificare il **directory di inclusione aggiuntive** percorso del progetto per includere il percorso nell'intestazione originale.

### <a name="to-add-the-dll-header-to-your-include-path"></a>Per aggiungere l'intestazione DLL per il percorso di inclusione

1. Aprire il **pagine delle proprietà** finestra di dialogo per il **MathClient** progetto.

1. Nel **Configuration** casella di riepilogo a discesa, selezionare **tutte le configurazioni** se non è già selezionato.

1. Nel riquadro sinistro, selezionare **generali** sotto **delle proprietà di configurazione** > **C/C++**.

1. Nel riquadro delle proprietà, selezionare il controllo elenco a discesa accanto al **directory di inclusione aggiuntive** casella di modifica e quindi scegliere **modificare**.

   ![Modificare la proprietà directory di inclusione aggiuntive](media/mathclient-additional-include-directories-property.png "modificare la proprietà directory di inclusione aggiuntive")

1. Fare doppio clic nella parte superiore della **directory di inclusione aggiuntive** finestra di dialogo per abilitare un controllo di modifica.

1. Nel controllo di modifica, specificare il percorso dei **MathLibrary.h** file di intestazione. In questo caso, è possibile usare un percorso relativo:

   `..\..\MathLibrary\MathLibrary`

   ![Aggiungere il percorso dell'intestazione alla proprietà directory di inclusione aggiuntive](media/mathclient-additional-include-directories.png "aggiungere il percorso dell'intestazione alla proprietà directory di inclusione aggiuntive")

1. Dopo aver immesso il percorso del file di intestazione nel **directory di inclusione aggiuntive** finestra di dialogo scegliere la **OK** pulsante per tornare al **pagine delle proprietà** nella finestra di dialogo e quindi scegliere il **OK** pulsante per salvare le modifiche.

È ora possibile includere il **MathLibrary.h** file e utilizzare le funzioni viene dichiarato nell'applicazione client. Sostituire il contenuto del **MathClient.cpp** usando questo codice:

```cpp
// MathClient.cpp : Client app for MathLibrary DLL.
#include "pch.h"
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

Questo codice può essere compilato, ma non collegato, perché il linker non è possibile trovare la libreria di importazione necessaria per compilare l'app ancora. Il linker deve trovare il file MathLibrary.lib per collegare correttamente. Aggiungere il file MathLibrary.lib la compilazione impostando il **dipendenze aggiuntive** proprietà. Ancora una volta, è possibile copiare il file di libreria nel progetto di app client, ma se l'app client sia la libreria sono in fase di sviluppo, che potrebbe comportare la modifica di una copia che non vengono visualizzati in altro. Per evitare questo problema, è possibile modificare il **Directory librerie aggiuntive** percorso del progetto per includere il percorso della libreria originale quando crea un collegamento.

### <a name="to-add-the-dll-import-library-to-your-project"></a>Per aggiungere la libreria di importazione DLL al progetto

1. Aprire il **pagine delle proprietà** finestra di dialogo per il **MathClient** progetto.

1. Nel **Configuration** casella di riepilogo a discesa, selezionare **tutte le configurazioni** se non è già selezionato.

1. Nel riquadro sinistro, selezionare **Input** sotto **delle proprietà di configurazione** > **Linker**. Nel riquadro delle proprietà, selezionare il controllo elenco a discesa accanto al **dipendenze aggiuntive** casella di modifica e quindi scegliere **modificare**.

   ![Modificare la proprietà Dipendenze aggiuntive](media/mathclient-additional-dependencies-property.png "modificare la proprietà Dipendenze aggiuntive")

1. Nel **dipendenze aggiuntive** finestra di dialogo Aggiungi `MathLibrary.lib` all'elenco nella parte superiore di controllo di modifica.

   ![Aggiungere la dipendenza di libreria](media/mathclient-additional-dependencies.png "aggiungere la dipendenza della libreria")

1. Scegli **OK** per tornare alle **pagine delle proprietà** nella finestra di dialogo.

1. Nel riquadro sinistro, selezionare **generali** sotto **delle proprietà di configurazione** > **Linker**. Nel riquadro delle proprietà, selezionare il controllo elenco a discesa accanto al **Directory librerie aggiuntive** casella di modifica e quindi scegliere **modificare**.

   ![Modificare la proprietà Directory librerie aggiuntive](media/mathclient-additional-library-directories-property.png "modificare la proprietà Directory librerie aggiuntive")

1. Fare doppio clic nella parte superiore della **Directory librerie aggiuntive** finestra di dialogo per abilitare un controllo di modifica. Nel controllo di modifica, specificare il percorso dei **MathLibrary.lib** file. Immettere questo valore per l'uso di una macro che funziona per sia il Debug e build di rilascio:

   `..\..\MathLibrary\$(IntDir)`

   ![Aggiungere la directory delle librerie](media/mathclient-additional-library-directories.png "aggiungere la directory delle librerie")

1. Dopo aver immesso il percorso del file di libreria nel **Directory librerie aggiuntive** finestra di dialogo scegliere la **OK** pulsante per tornare al **pagine delle proprietà** nella finestra di dialogo.

L'app client può ora compilarla e collegarla correttamente, ma comunque non dispone di tutto il che necessario per l'esecuzione. Quando il sistema operativo carica l'app, la ricerca di DLL MathLibrary. Se non viene trovata la DLL di alcune directory di sistema, il percorso di ambiente o la directory di un'app locale, il caricamento ha esito negativo. Un modo per evitare questo problema consiste nel copiare la DLL nella directory che contiene il file eseguibile del client come parte del processo di compilazione. Per copiare la DLL, è possibile aggiungere un **evento post-compilazione** al progetto, per aggiungere un comando che consente di copiare la DLL nella directory di output di compilazione. Il comando specificato qui copia la DLL solo se è manca o è stato modificato e Usa le macro per copiare da e verso i percorsi di Debug o di vendita al dettaglio corretti per la configurazione.

### <a name="to-copy-the-dll-in-a-post-build-event"></a>Per copiare la DLL in un evento di post-compilazione

1. Aprire il **pagine delle proprietà** finestra di dialogo per il **MathClient** progetto se non è già aperto.

1. Nella casella di riepilogo a discesa configurazione, selezionare **tutte le configurazioni** se non è già selezionato.

1. Nel riquadro sinistro, selezionare **evento post-compilazione** sotto **delle proprietà di configurazione** > **eventi di compilazione**.

1. Nel riquadro delle proprietà, selezionare il controllo di modifica nel **riga di comando** campo e quindi immettere questo comando:

   `xcopy /y /d "..\..\MathLibrary\$(IntDir)MathLibrary.dll" "$(OutDir)"`

   ![Aggiungere il comando di post-compilazione](media/mathclient-post-build-command-line.png "aggiungere il comando di post-compilazione")

1. Scegliere il **OK** pulsante per salvare le modifiche alle proprietà del progetto.

A questo punto l'app client include tutto il che necessario per compilare ed eseguire. Compilare l'applicazione scegliendo **compilare** > **Compila soluzione** nella barra dei menu. Il **Output** finestra in Visual Studio dovrebbe essere simile a quanto:

```Output
1>------ Build started: Project: MathClient, Configuration: Debug Win32 ------
1>pch.cpp
1>MathClient.cpp
1>MathClient.vcxproj -> C:\Users\username\Source\Repos\MathClient\Debug\MathClient.exe
1>MathClient.vcxproj -> C:\Users\username\Source\Repos\MathClient\Debug\MathClient.pdb (Partial PDB)
1>1 File(s) copied
========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
```

Congratulazioni, è stata creata un'applicazione che chiama le funzioni nella DLL. Eseguire ora l'applicazione per vedere cosa. Nella barra dei menu, scegliere **Debug** > **Avvia senza eseguire debug**. Visual Studio apre una finestra di comando per il programma da eseguire. L'ultima parte dell'output sarà simile:

![Avvia l'app client senza eseguire debug](media/mathclient-run-without-debugging.png "avvia l'app client senza eseguire debug")

Premere un tasto qualsiasi per chiudere la finestra di comando.

Ora che è stata creata una DLL e un'applicazione client, è possibile provare. Provare a impostare i punti di interruzione nel codice dell'app client ed eseguire l'app nel debugger. Che cosa accade quando si esegue una chiamata di libreria. Aggiungere altre funzioni nella libreria o un'altra app client che usa la DLL di scrittura.

Quando si distribuisce l'app, è necessario distribuire anche le DLL Usa. Il modo più semplice per rendere disponibili le DLL che si compila o che includono di terze parti per l'app è di inserirli nella stessa directory dell'app, noto anche come *distribuzione app-local*. Per altre informazioni sulla distribuzione, vedere [distribuzione in Visual C++](..\ide\deployment-in-visual-cpp.md).

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](../build/dlls-in-visual-cpp.md)<br/>
[Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)<br/>
[Procedura dettagliata: distribuzione di un programma (C++)](../ide/walkthrough-deploying-your-program-cpp.md)<br/>
[Chiamata di funzioni DLL da applicazioni Visual Basic](../build/calling-dll-functions-from-visual-basic-applications.md)