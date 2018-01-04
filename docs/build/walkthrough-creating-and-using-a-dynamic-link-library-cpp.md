---
title: 'Procedura dettagliata: Creare e usare la propria libreria a collegamento dinamico (C++) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs: C++
helpviewer_keywords:
- libraries [C++], DLLs
- DLLs [C++], walkthroughs
ms.assetid: 3ae94848-44e7-4955-bbad-7d40f493e941
caps.latest.revision: "36"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: bdcc02cf7c86b85684df0e8d8b7a1f0049ff7e25
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="walkthrough-create-and-use-your-own-dynamic-link-library-c"></a>Procedura dettagliata: Creare e usare la propria libreria a collegamento dinamico (C++)

Questa procedura dettagliata viene illustrato come utilizzare l'IDE di Visual Studio per creare la propria libreria a collegamento dinamico (DLL) scritta in C++ e utilizzarlo da un'altra app C++. DLL sono uno dei tipi più utili di componenti di Windows. È possibile utilizzare in un modo per condividere codice e risorse, per compattare le dimensioni delle App e per renderne più semplice di servizio ed estendere le applicazioni. In questa procedura dettagliata, creare una DLL che implementa alcune funzioni matematiche e quindi creare un'applicazione console che utilizza le funzioni dalla DLL. Inoltre, un'introduzione ad alcune delle tecniche di programmazione e le convenzioni utilizzate nella DLL di Windows.

In questa procedura dettagliata vengono illustrate le seguenti attività:

- Creare un progetto DLL in Visual Studio.

- Aggiungere variabili e le funzioni esportate alla DLL.

- Creare un progetto di applicazione console in Visual Studio.

- Utilizzare le funzioni e variabili importate da una DLL di applicazione console.

- Eseguire app completata.

Ad esempio una libreria collegata staticamente, una DLL _Esporta_ variabili, funzioni e risorse per nome e l'app _Importa_ tali nomi da utilizzare tali variabili, funzioni e risorse. A differenza di una libreria collegata staticamente, Windows si connette le importazioni nell'app per le esportazioni in una DLL in fase di caricamento o in fase di esecuzione, invece che li connettono in fase di collegamento. Windows richiede informazioni aggiuntive che non fa parte del modello di compilazione C++ standard per stabilire queste connessioni. Il compilatore Visual C++ implementa alcune estensioni specifiche di Microsoft c++ per fornire queste informazioni aggiuntive. Queste estensioni si illustrano man.

Questa procedura dettagliata crea due soluzioni di Visual Studio. uno che consente di creare la DLL e uno che compila l'app client. La DLL utilizza la convenzione di chiamata C, pertanto può essere chiamato da app compilata con altri linguaggi, purché la piattaforma e la chiamata e collegamento convenzioni corrispondono. Il client app utilizza _collegamento implicito_, in cui Windows collega l'app per la DLL in fase di caricamento. Consente all'app di chiamare le funzioni DLL fornito come le funzioni in una libreria collegata staticamente.

Questa procedura dettagliata non copre alcune situazioni comuni. Non visualizza l'utilizzo delle DLL di C++ da altri linguaggi di programmazione. Non viene illustrato come creare una DLL di sole risorse. Non visualizza inoltre l'utilizzo di un collegamento esplicito per caricare le DLL in fase di esecuzione anziché in fase di caricamento. REST è garantita, è possibile utilizzare Visual C++ per eseguire tutte queste operazioni. Per collegamenti a ulteriori informazioni sulle DLL, vedere [DLL in Visual C++](../build/dlls-in-visual-cpp.md). Per ulteriori informazioni su collegamento implicito ed esplicito, vedere [scelta del metodo di collegamento da usare](../build/linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use). Per informazioni sulla creazione di DLL di C++ per l'utilizzo con linguaggi di programmazione che usano convenzioni di collegamento del linguaggio C, vedere [l'esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md). Per informazioni su come creare DLL da utilizzare con i linguaggi .NET, vedere [la chiamata di funzioni DLL dalle applicazioni Visual Basic](../build/calling-dll-functions-from-visual-basic-applications.md).

Questa procedura dettagliata Usa Visual Studio 2017, ma il codice e la maggior parte delle istruzioni sono applicabile alle versioni precedenti. I passaggi per creare nuovi progetti modificati a partire da Visual Studio 2017 versione 15.3. Questa procedura dettagliata viene descritto come creare progetti per versioni precedenti e più recenti. Cercare i passaggi che corrispondono alla versione di Visual Studio.

## <a name="prerequisites"></a>Prerequisiti

- Un computer che esegue Microsoft Windows 7 o versioni successive. Si consiglia di Windows 10 per la migliore esperienza di sviluppo.

- Una copia di Visual Studio 2017. Per informazioni su come scaricare e installare Visual Studio, vedere [installare Visual Studio 2017](/visualstudio/install/install-visual-studio). Quando si esegue il programma di installazione, assicurarsi che il **sviluppo di applicazioni Desktop con C++** viene controllato il carico di lavoro. Non occorre preoccuparsi se non è stato installato questo carico di lavoro durante l'installazione di Visual Studio. È possibile eseguire nuovamente il programma di installazione e installarlo ora.

   ![Sviluppo di applicazioni desktop con C++](media/desktop-development-with-cpp.png "sviluppo di applicazioni Desktop con C++")

- Conoscenza delle nozioni di base dell'utilizzo di IDE di Visual Studio. Se è stata usata l'App desktop di Windows prima di, è possibile mantenere probabilmente. Per un'introduzione, vedere [presentazione funzionalità IDE di Visual Studio](/visualstudio/ide/visual-studio-ide).

- Conoscenza di un numero sufficiente delle nozioni di base del linguaggio C++ per seguire la procedura. Non preoccuparti, perché è non eseguire alcuna operazione troppo complicato.

## <a name="create-the-dll-project"></a>Creare il progetto DLL

In questo set di attività, creare un progetto per la DLL, aggiungere il codice e compilarlo. Per iniziare, avviare l'IDE di Visual Studio e accedere se è necessario. Le istruzioni per Visual Studio 2017 versione 15.3 indicati per primi. Istruzioni per le versioni precedenti entrano in un secondo momento, pertanto ignorare se è necessario.

### <a name="to-create-a-dll-project-in-visual-studio-2017-version-153-or-later"></a>Per creare un progetto DLL in Visual Studio 2017 versione 15.3 o versioni successive

1. Nella barra dei menu, scegliere **File**, **New**, **progetto** per aprire la **nuovo progetto** la finestra di dialogo.

1. Nel riquadro a sinistra del **nuovo progetto** finestra di dialogo espandere **installato** e **Visual C++** se necessario e quindi scegliere **Desktop Windows**. Nel riquadro centrale selezionare **guidata Desktop Windows**. Immettere `MathLibrary` nel **nome** casella per specificare un nome per il progetto.

   ![Denominare il progetto MathLibrary](media/mathlibrary-new-project-name-153.png "denominare il progetto MathLibrary")

1. Scegliere il **OK** per chiudere la **nuovo progetto** finestra di dialogo e avviare il **progetto Desktop di Windows** procedura guidata.

1. Nel **progetto Desktop di Windows** procedura guidata, in **tipo di applicazione**selezionare **libreria a collegamento dinamico (DLL)**.

   ![Creare una DLL nella creazione guidata progetto Desktop di Windows](media/mathlibrary-desktop-project-wizard-dll.png "creare DLL nella creazione guidata progetto Desktop di Windows")

1. Scegliere il pulsante **OK** per creare il progetto.

> [!NOTE]
> Per correggere un problema in Visual Studio 2017 versione 15.3 sono necessari ulteriori passaggi. Seguire queste istruzioni per verificare se è necessario apportare questa modifica.
>
>1. In **Esplora**, se non è già selezionata, selezionare il **MathLibrary** progetto **soluzione 'MathLibrary'**.
>
>1. Sulla barra dei menu scegliere **Progetto**, **Proprietà**.
>
>1. Nel riquadro sinistro della finestra di **pagine delle proprietà** nella finestra di dialogo **preprocessore** in **le proprietà di configurazione**, **C/C++**. Verificare i contenuti del **definizioni preprocessore** proprietà.<br/><br/>![Controllare la proprietà definizioni preprocessore](media/mathlibrary-153bug-preprocessor-definitions-check.png "controllare la proprietà definizioni preprocessore")<br/><br/>Se viene visualizzato **MATHLIBRARY &#95; ESPORTAZIONI** nel **definizioni preprocessore** elenco, quindi non è necessario apportare alcuna modifica. Se viene visualizzato **MathLibrary &#95; ESPORTAZIONI** , invece, quindi continuare a eseguire la procedura seguente.
>
>1. Nella parte superiore del **pagine delle proprietà** finestra di dialogo Modifica il **configurazione** elenco a discesa per **tutte le configurazioni**.
>
>1. Nel riquadro delle proprietà, selezionare il controllo elenco a discesa accanto alla casella di modifica per **definizioni preprocessore**, quindi scegliere **modifica**.<br/><br/>![Modificare la proprietà definizioni preprocessore](media/mathlibrary-153bug-preprocessor-definitions-property.png "modificare la proprietà definizioni preprocessore")
>
>1. Nel riquadro superiore del **definizioni preprocessore** finestra di dialogo, aggiungere un nuovo simbolo `MATHLIBRARY_EXPORTS`.<br/><br/>![Aggiungere il simbolo MATHLIBRARY_EXPORTS](media/mathlibrary-153bug-preprocessor-definitions-dialog.png "aggiungere il simbolo MATHLIBRARY_EXPORTS")
>
>1. Scegliere **OK** per chiudere la **definizioni preprocessore** finestra di dialogo, quindi scegliere **OK** per salvare le modifiche alle proprietà del progetto.

### <a name="to-create-a-dll-project-in-older-versions-of-visual-studio"></a>Per creare un progetto DLL nelle versioni precedenti di Visual Studio

1. Nella barra dei menu scegliere **File**, **Nuovo**, **Progetto**.

1. Nel riquadro a sinistra del **nuovo progetto** finestra di dialogo espandere **installato**, **modelli**e selezionare **Visual C++**e quindi al centro riquadro, selezionare **applicazione Console Win32**. Immettere `MathLibrary` nel **nome** casella di testo per specificare un nome per il progetto.

   ![Denominare il progetto MathLibrary](media/mathlibrary-project-name.png "denominare il progetto MathLibrary")

1. Scegliere il **OK** per chiudere la **nuovo progetto** finestra di dialogo e avviare il **Creazione guidata applicazione Win32**.

   ![Panoramica di creazione guidata applicazione Win32](media/mathlibrary-project-wizard-1.png "Panoramica di creazione guidata applicazione Win32")

1. Fare clic su **Avanti**. Nel **le impostazioni dell'applicazione** pagina **tipo di applicazione**selezionare **DLL**.

   ![Creare una DLL nella creazione guidata applicazione Win32](media/mathlibrary-project-wizard-2.png "creare DLL nella creazione guidata applicazione Win32")

1. Scegliere il pulsante **Fine** per creare il progetto.

Al termine della soluzione, è possibile visualizzare i file di progetto e di origine generati nel **Esplora** finestra in Visual Studio.

![Generato soluzione in Visual Studio](media/mathlibrary-solution-explorer-153.png "generato soluzione in Visual Studio")

Destra a questo punto, la DLL non serve a molto. È quindi necessario creare un file di intestazione per dichiarare le funzioni DLL Esporta e quindi aggiungere le definizioni di funzioni della DLL per renderli più utili.

### <a name="to-add-a-header-file-to-the-dll"></a>Per aggiungere un file di intestazione della DLL

1. Per creare un file di intestazione per le funzioni, nella barra dei menu, scegliere **progetto**, **Aggiungi nuovo elemento**.

1. Nel **Aggiungi nuovo elemento** la finestra di dialogo, nel riquadro a sinistra, seleziona **Visual C++**. Nel riquadro centrale selezionare **File di intestazione (.h)**. Specificare `MathLibrary.h` come nome per il file di intestazione.

   ![Aggiungi intestazione nella finestra di dialogo Aggiungi nuovo elemento](media/mathlibrary-add-new-item-header-file.png "Aggiungi file di intestazione nella finestra di dialogo Aggiungi nuovo elemento")

1. Scegliere il **Aggiungi** pulsante per generare un file di intestazione vuoto, viene visualizzato in una nuova finestra dell'editor.

   ![File MathLibrary.h vuoto nell'editor](media/edit-empty-mathlibrary-header.png "MathLibrary.h vuoto file nell'editor")

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

Questo file di intestazione dichiara alcune funzioni per produrre una sequenza di Fibonacci generalizzata, determinati due valori iniziali. Una chiamata a `fibonacci_init(1, 1)` genera la sequenza di numero di Fibonacci familiarità.

Notare le istruzioni del preprocessore nella parte superiore del file. Per impostazione predefinita, il modello di progetto per una DLL aggiunge  ***PROJECTNAME*&#95; ESPORTAZIONI** per le macro del preprocessore definite per il progetto DLL. In questo esempio, Visual Studio definisce **MATHLIBRARY &#95; ESPORTAZIONI** quando viene compilato il progetto di DLL MathLibrary. (La procedura guidata in Visual Studio 2017 versione 15.3 non impone tale definizione in lettere maiuscole. Il nome del progetto "MathLibrary" quindi il simbolo definito è MathLibrary &#95; ESPORTAZIONI anziché MATHLIBRARY &#95; ESPORTA. That's perché sono presenti ulteriori passaggi precedenti per aggiungere questo simbolo.)

Quando il **MATHLIBRARY &#95; ESPORTAZIONI** macro viene definita, il **MATHLIBRARY &#95; API** set di macro di `__declspec(dllexport)` modificatore nelle dichiarazioni della funzione. Questo modificatore indica al compilatore e nel linker per esportare una funzione o una variabile dalla DLL in modo che può essere utilizzato da altre applicazioni. Quando **MATHLIBRARY &#95; ESPORTAZIONI** è definito, ad esempio, quando il file di intestazione è incluso da un'applicazione client, **MATHLIBRARY &#95; API** si applica il `__declspec(dllimport)` modificatore per le dichiarazioni. Questo modificatore Ottimizza l'importazione della funzione o variabile in un'applicazione. Per ulteriori informazioni, vedere [dllexport, dllimport](../cpp/dllexport-dllimport.md).

### <a name="to-add-an-implementation-to-the-dll"></a>Per aggiungere un'implementazione della DLL

1. Nella finestra dell'editor, selezionare la scheda per **MathLibrary.cpp** se è già aperta. In caso contrario, in **Esplora**aprire **MathLibrary.cpp** nel **i file di origine** cartella del **MathLibrary** progetto.

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

Per verificare che tutto funzioni fino a questo punto, compilare la libreria di collegamento dinamico. Per compilare, scegliere **compilare**, **Compila soluzione** nella barra dei menu. L'output dovrebbe essere simile al seguente:

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

Complimenti, si crea una DLL tramite Visual C++. Successivamente, si creerà un'applicazione client che utilizza le funzioni esportate dalla DLL.

## <a name="create-a-client-app-that-uses-the-dll"></a>Creare un'applicazione client che utilizza la DLL

Quando si crea una DLL, è necessario valutare come è possibile utilizzare la DLL. Per compilare codice che chiama le funzioni esportate da una DLL, le dichiarazioni devono essere incluso nel codice sorgente client. In fase di collegamento, quando queste chiamate alle funzioni DLL vengono risolte, il linker deve avere un *libreria di importazione*, un tipo speciale di file di libreria che contiene informazioni per Windows su come individuare le funzioni, anziché il codice effettivo. E in fase di esecuzione deve essere disponibile per il client, in una posizione che il sistema operativo è possibile trovare la DLL.

Per avvalersi di una DLL, se il proprietario o una DLL di terze parti, il progetto di app client deve essere in grado di trovare le intestazioni che dichiarano la DLL esporta, le librerie di importazione per il linker e la DLL. Un modo per eseguire questa operazione consiste nel copiare tutti i file nel progetto client. Per le DLL di terze parti che è improbabile che modifica mentre il client è in fase di sviluppo, è possibile il modo migliore per utilizzarle. Tuttavia, quando si compila anche la DLL, è meglio evitare la duplicazione. Se si esegue una copia dei file DLL in fase di sviluppo, si può modificare un file di intestazione in una sola copia, ma non in altro, accidentalmente o utilizzare una libreria aggiornata. Per evitare questo problema, è consigliabile che impostare il percorso di inclusione nel progetto client per includere i file di intestazione DLL dal progetto di DLL. Inoltre, è possibile impostare il percorso di libreria nel progetto client per includere le librerie di importazione DLL dal progetto di DLL. E, infine, copiare la DLL generata dal progetto di DLL nella directory di output di compilazione. Ciò garantisce che l'applicazione client utilizza lo stesso codice DLL che si compila.

### <a name="to-create-a-client-app-in-visual-studio-2017-version-153-or-later"></a>Per creare un'app client in Visual Studio 2017 versione 15.3 o versioni successive

1. Per creare un'app C++ che utilizza la DLL appena creato, nella barra dei menu, scegliere **File**, **New**, **progetto**.

1. Nel riquadro a sinistra del **nuovo progetto** finestra di dialogo Seleziona **Windows Desktop** in **installato**, **Visual C++**. Nel riquadro centrale selezionare **guidata Desktop Windows**. Specificare il nome per il progetto, `MathClient`nella **nome** casella di modifica.

   ![Denominare il progetto client](media/mathclient-new-project-name-153.png "denominare il progetto client")

1. Scegliere **OK** per avviare il **progetto Desktop di Windows** procedura guidata. Nella procedura guidata, scegliere **OK** per creare il progetto di app client.

### <a name="to-create-a-client-app-in-older-versions-of-visual-studio-2017"></a>Per creare un'app client nelle versioni precedenti di Visual Studio 2017

1. Per creare un'app C++ che utilizza la DLL appena creato, nella barra dei menu, scegliere **File**, **New**, **progetto**.

1. Nel riquadro sinistro della finestra di **nuovo progetto** finestra di dialogo Seleziona **Win32** in **installato**, **modelli**, **Visual C++**. Nel riquadro centrale, selezionare **Progetto console Win32**. Specificare il nome per il progetto, `MathClient`nella **nome** casella di modifica.

   ![Denominare il progetto client](media/mathclient-project-name.png "denominare il progetto client")

1. Scegliere il **OK** per chiudere la **nuovo progetto** finestra di dialogo e avviare il **Creazione guidata applicazione Win32**. Nella pagina **Panoramica** della finestra di dialogo **Creazione guidata applicazione Win32** , scegliere il pulsante **Avanti** .

1. Nel **le impostazioni dell'applicazione** nella pagina **tipo di applicazione**selezionare **applicazione Console** se non è già selezionato.

1. Scegliere il pulsante **Fine** per creare il progetto.

Al termine della procedura guidata, viene creato un progetto applicazione console minimo per l'utente. Il nome del file di origine principale è lo stesso nome del progetto immesso in precedenza. In questo esempio è denominato **MathClient.cpp**. È possibile generarlo, ma non utilizza ancora la DLL.

Successivamente, per chiamare le funzioni MathLibrary nel codice sorgente, il progetto deve includere il file MathLibrary.h. È possibile copiare questo file di intestazione al progetto di app client, quindi aggiungerlo al progetto come un elemento esistente. Può trattarsi di una scelta ottimale per le librerie di terze parti. Tuttavia, se si utilizza il codice per la DLL nello stesso momento come client, che potrebbe causare modifiche nel file di un'intestazione che non vengono riflesse in altro. Per evitare questo problema, è possibile modificare il **directory di inclusione aggiuntive** percorso del progetto per includere il percorso per l'intestazione originale.

### <a name="to-add-the-dll-header-to-your-include-path"></a>Per aggiungere l'intestazione DLL per il percorso di inclusione

1. Aprire il **pagine delle proprietà** la finestra di dialogo per la **MathClient** progetto.

1. Nel **configurazione** casella di riepilogo a discesa, selezionare **tutte le configurazioni** se non è già selezionato.

1. Nel riquadro a sinistra, selezionare **generale** in **le proprietà di configurazione**, **C/C++**.

1. Nel riquadro delle proprietà, selezionare il controllo elenco a discesa accanto al **directory di inclusione aggiuntive** casella di modifica e quindi scegliere **modifica**.

   ![Modificare la proprietà di directory di inclusione aggiuntive](media/mathclient-additional-include-directories-property.png "modificare la proprietà di directory di inclusione aggiuntive")

1. Fare doppio clic su nel riquadro superiore del **directory di inclusione aggiuntive** la finestra di dialogo per consentire un controllo di modifica.

1. Nel controllo di modifica, specificare il percorso alla posizione del **MathLibrary.h** file di intestazione. In questo caso, è possibile utilizzare un percorso relativo:

   `..\..\MathLibrary\MathLibrary`

   ![Aggiungere il percorso di intestazione per la proprietà di directory di inclusione aggiuntive](media/mathclient-additional-include-directories.png "aggiungere il percorso di intestazione per la proprietà di directory di inclusione aggiuntive")

1. Dopo aver immesso il percorso del file di intestazione nel **directory di inclusione aggiuntive** finestra di dialogo scegliere la **OK** pulsante per tornare al **pagine delle proprietà** nella finestra di dialogo e Scegliere quindi il **OK** pulsante per salvare le modifiche.

È ora possibile includere il **MathLibrary.h** file e utilizzare le funzioni dichiara nell'applicazione client. Sostituire il contenuto di **MathClient.cpp** con questo codice:

```cpp
// MathClient.cpp : Client app for MathLibrary DLL.
#include "stdafx.h"
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

Questo codice può essere compilato, ma non collegato, poiché il linker non è possibile trovare la libreria di importazione necessaria per compilare l'app ancora. Il linker deve essere in grado di trovare il file MathLibrary.lib da collegare correttamente. È necessario aggiungere il file MathLibrary.lib per la compilazione impostando il **dipendenze aggiuntive** proprietà. In questo caso, è possibile copiare il file di libreria nel progetto di app client, ma se la libreria e l'app client sono in fase di sviluppo, che potrebbe comportare la modifica di una copia che non viene riflesse in altro. Per evitare questo problema, è possibile modificare il **Directory librerie aggiuntive** percorso del progetto per includere il percorso di libreria originale quando si collega.

### <a name="to-add-the-dll-import-library-to-your-project"></a>Per aggiungere la libreria di importazione DLL per il progetto

1. Aprire il **pagine delle proprietà** la finestra di dialogo per la **MathClient** progetto.

1. Nel **configurazione** casella di riepilogo a discesa, selezionare **tutte le configurazioni** se non è già selezionato.

1. Nel riquadro a sinistra, selezionare **Input** in **le proprietà di configurazione**, **Linker**. Nel riquadro delle proprietà, selezionare il controllo elenco a discesa accanto al **dipendenze aggiuntive** casella di modifica e quindi scegliere **modifica**.

   ![Modificare la proprietà Dipendenze aggiuntive](media/mathclient-additional-dependencies-property.png "modificare la proprietà Dipendenze aggiuntive")

1. Nel **dipendenze aggiuntive** finestra di dialogo, aggiungere `MathLibrary.lib` all'elenco nella parte superiore di controllo di modifica.

   ![Aggiungere la dipendenza della libreria](media/mathclient-additional-dependencies.png "aggiunge la dipendenza della libreria")

1. Scegliere **OK** per tornare al **pagine delle proprietà** la finestra di dialogo.

1. Nel riquadro a sinistra, selezionare **generale** in **le proprietà di configurazione**, **Linker**. Nel riquadro delle proprietà, selezionare il controllo elenco a discesa accanto al **Directory librerie aggiuntive** casella di modifica e quindi scegliere **modifica**.

   ![Modificare la proprietà Directory librerie aggiuntive](media/mathclient-additional-library-directories-property.png "modificare la proprietà Directory librerie aggiuntive")

1. Fare doppio clic su nel riquadro superiore del **Directory librerie aggiuntive** la finestra di dialogo per consentire un controllo di modifica. Nel controllo di modifica, specificare il percorso alla posizione del **MathLibrary.lib** file. Immettere questo valore per l'utilizzo di una macro che può essere usato per Debug e di rilascio compilazioni:

   `..\..\MathLibrary\$(IntDir)`

   ![Aggiungere la directory delle librerie](media/mathclient-additional-library-directories.png "aggiungere la directory di libreria")

1. Dopo aver immesso il percorso del file di libreria nel **Directory librerie aggiuntive** finestra di dialogo scegliere la **OK** pulsante per tornare al **pagine delle proprietà** la finestra di dialogo.

L'app client ora è possibile compilare e collegare correttamente, ma non è ancora presente tutto il che necessario per l'esecuzione. Quando il sistema operativo carica l'applicazione, la ricerca di DLL MathLibrary. Se è possibile trovare la DLL in determinate directory di sistema, il percorso di ambiente o la directory locale dell'applicazione, il caricamento non riesce. Un modo per evitare questo problema consiste nel copiare la DLL nella directory che contiene il file eseguibile del client come parte del processo di compilazione. Per copiare la DLL, è possibile aggiungere un **evento post-compilazione** al progetto, per aggiungere un comando che consente di copiare la DLL nella directory di output di compilazione. Il comando specificato qui copia la DLL solo se è presente o è stato modificato e utilizza le macro per copiare in e dai percorsi di Debug o vendita al dettaglio corretti per la configurazione.

### <a name="to-copy-the-dll-in-a-post-build-event"></a>Per copiare la DLL in un evento di post-compilazione

1. Aprire il **pagine delle proprietà** la finestra di dialogo per la **MathClient** progetto se non è già aperto.

1. Nella casella di riepilogo a discesa configurazione, selezionare **tutte le configurazioni** se non è già selezionato.

1. Nel riquadro a sinistra, selezionare **evento post-compilazione** in **le proprietà di configurazione**, **eventi di compilazione**.

1. Nel riquadro delle proprietà, selezionare il controllo di modifica di **riga di comando** campo e quindi immettere il seguente comando:

   `xcopy /y /d "..\..\MathLibrary\$(IntDir)MathLibrary.dll" "$(OutDir)"`

   ![Aggiungere il comando di post-compilazione](media/mathclient-post-build-command-line.png "aggiungere il comando di post-compilazione")

1. Scegliere il **OK** pulsante per salvare le modifiche alle proprietà del progetto.

A questo punto l'app client dispone di tutto il che necessario per compilare ed eseguire. Compilare l'applicazione scegliendo **compilare**, **Compila soluzione** nella barra dei menu. Il **Output** finestra in Visual Studio deve contenere simile al seguente:

```Output
1>------ Build started: Project: MathClient, Configuration: Debug Win32 ------
1>stdafx.cpp
1>MathClient.cpp
1>MathClient.vcxproj -> C:\Users\username\Source\Repos\MathClient\Debug\MathClient.exe
1>MathClient.vcxproj -> C:\Users\username\Source\Repos\MathClient\Debug\MathClient.pdb (Partial PDB)
1>1 File(s) copied
========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
```

Complimenti, aver creato un'applicazione che chiama le funzioni nella DLL. A questo punto, eseguire l'applicazione per verificarne l'effetto. Nella barra dei menu, scegliere **Debug**, **Avvia senza eseguire debug**. Visual Studio apre una finestra di comando per il programma da eseguire. L'ultima parte dell'output dovrebbe essere simile al seguente:

![Avvia l'app client senza eseguire debug](media/mathclient-run-without-debugging.png "avvia l'app client senza eseguire debug")

Premere un tasto qualsiasi per chiudere la finestra di comando.

Dopo aver creato una DLL e un'applicazione client, è possibile provare. Provare a impostare i punti di interruzione nel codice dell'app client ed eseguire l'app nel debugger. Vedere cosa accade quando si esegue una chiamata di libreria. Aggiungere altre funzioni nella libreria oppure scrivere un'altra applicazione client che utilizza la DLL.

Quando si distribuisce l'app, è necessario distribuire anche le DLL a cui viene utilizzato. È il modo più semplice per rendere disponibili le DLL che si compila o inclusi da terze parti per l'app per inserirli nella stessa directory dell'App, noto anche come *distribuzione app-local*. Per ulteriori informazioni sulla distribuzione, vedere [distribuzione in Visual C++](..\ide\deployment-in-visual-cpp.md).

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](../build/dlls-in-visual-cpp.md)  
[Distribuzione di applicazioni Desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)  
[Procedura dettagliata: distribuzione di un programma (C++)](../ide/walkthrough-deploying-your-program-cpp.md)  
[Chiamata di funzioni DLL da applicazioni Visual Basic](../build/calling-dll-functions-from-visual-basic-applications.md)