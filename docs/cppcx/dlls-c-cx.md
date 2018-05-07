---
title: DLL (C + + CX) | Documenti Microsoft
ms.custom: ''
ms.date: 02/06/2018
ms.technology: cpp-windows
ms.topic: language-reference
ms.assetid: 5b8bcc57-64dd-4c54-9f24-26a25bd5dddd
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 39c334c659980dccdca670ab91501f0e30c4e6d0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="dlls-ccx"></a>DLL (C++/CX)

È possibile utilizzare Visual Studio per creare una DLL Win32 standard o una DLL che possono essere usati da app Universal Windows Platform (UWP) del componente Windows Runtime. Una DLL standard creata con una versione di Visual Studio o il compilatore Visual C++ precedente di Visual Studio 2012 non venga caricato correttamente in un'app UWP e potrebbe non superare il test di verifica app in Microsoft Store.

## <a name="windows-runtime-component-dlls"></a>DLL di componenti Windows Runtime

Nella quasi totalità dei casi, quando si desidera creare una DLL da utilizzare in un'app UWP, crearlo come un componente Windows Runtime utilizzando il modello di progetto con tale nome. È possibile creare un progetto di componente Windows Runtime per DLL con tipi di Windows Runtime pubblici o privati. Un componente Windows Runtime sono accessibili da app scritte in qualsiasi linguaggio compatibile con Windows Runtime. Per impostazione predefinita, le impostazioni del compilatore per un componente Windows Runtime progetto usa il **/ZW** passare. Un file .winmd deve avere lo stesso nome dello spazio dei nomi radice. Ad esempio, è possibile creare un'istanza di una classe denominata A.B.C.MyClass solo se è definita in un file di metadati denominato A.winmd o A.B.winmd o A.B.C.winmd. Il nome della DLL non deve necessariamente corrispondere al nome del file con estensione winmd.

Per ulteriori informazioni, vedere [la creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

### <a name="to-reference-a-third-party-windows-runtime-component-binary-in-your-project"></a>Per fare riferimento a un componente Windows Runtime di terze parti binario del progetto

1. Apri il menu di scelta rapida del progetto che utilizzerà la DLL, quindi scegli **Proprietà**. Nella pagina **Proprietà comuni** fai clic su **Aggiungi nuovo riferimento** .

1. Un componente Windows Runtime è costituito da un file DLL e un file con estensione winmd che contiene i metadati. In genere, questi file si trovano nella stessa cartella. Nel riquadro a sinistra nella finestra di dialogo **Aggiungi riferimento** , fai clic su **Sfoglia** quindi passa alla cartella che contiene i file DLL e il relativo file .winmd. Per ulteriori informazioni, vedere [SDK di estensione](/visualstudio/extensibility/creating-a-software-development-kit#ExtensionSDKs).

## <a name="standard-dlls"></a>DLL standard

È possibile creare una DLL standard per codice C++ che non utilizzano o producono tipi Windows Runtime pubblici e usarla da un'app UWP. Quando si desidera eseguire la migrazione di una DLL esistente da compilare in questa versione di Visual Studio, ma non convertire il codice in un progetto di componente Windows Runtime, utilizzare il tipo di progetto di libreria a collegamento dinamico (DLL). Quando usi i seguenti passaggi, la DLL viene distribuita insieme all'eseguibile dell'app nel pacchetto con estensione appx.

### <a name="to-create-a-standard-dll-in-visual-studio"></a>Per creare una DLL standard in Visual Studio

1. Nella barra dei menu, scegliere **File**, **New**, **progetto**, quindi selezionare il **libreria a collegamento dinamico (DLL)** modello.

1. Immetti un nome per il progetto, quindi scegli il pulsante **OK** .

1. Aggiungi il codice. Assicurati di utilizzare `__declspec(dllexport)` per le funzioni che intendi esportare, ad esempio `__declspec(dllexport) Add(int I, in j);`

1. Aggiungere `#include winapifamily.h` per includere il file di intestazione da Windows SDK per App UWP e impostare la macro `WINAPI_FAMILY=WINAPI_PARTITION_APP`.

### <a name="to-reference-a-standard-dll-project-from-the-same-solution"></a>Per fare riferimento a un progetto con DLL standard dalla stessa soluzione

1. Apri il menu di scelta rapida del progetto che utilizzerà la DLL, quindi scegli **Proprietà**. Nella pagina **Proprietà comuni** fai clic su **Aggiungi nuovo riferimento** .

1. Nel riquadro a sinistra seleziona **Soluzione**, quindi seleziona la casella di controllo appropriata nel riquadro a destra.

1. Nei file del codice sorgente aggiungi un'istruzione `#include` per il file di intestazione DLL, in base alle necessità.

### <a name="to-reference-a-standard-dll-binary"></a>Per fare riferimento a un file binario DLL standard

1. Copia il file DLL, il file con estensione lib e il file di intestazione e incollali in un percorso noto, ad esempio nella cartella del progetto corrente.

1. Apri il menu di scelta rapida del progetto che utilizzerà la DLL, quindi scegli **Proprietà**. Scegli **Proprietà di configurazione**, **Linker**, **Input** e nella pagina che viene visualizzata aggiungi il file con estensione lib come dipendenza.

1. Nei file del codice sorgente aggiungi un'istruzione `#include` per il file di intestazione DLL, in base alle necessità.

### <a name="to-migrate-an-existing-win32-dll-for-uwp-app-compatibility"></a>Per eseguire la migrazione di una DLL Win32 esistente per compatibilità con app UWP

1. Creare un progetto del tipo DLL (Windows universale) e aggiungere il codice sorgente esistente.

1. Aggiungere `#include winapifamily.h` per includere il file di intestazione da Windows SDK per App UWP e impostare la macro `WINAPI_FAMILY=WINAPI_PARTITION_APP`.

1. Nei file del codice sorgente aggiungi un'istruzione `#include` per il file di intestazione DLL, in base alle necessità.
