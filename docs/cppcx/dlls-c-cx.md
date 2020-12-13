---
description: 'Altre informazioni su: dll (C++/CX)'
title: DLL (C++/CX)
ms.date: 02/06/2018
ms.assetid: 5b8bcc57-64dd-4c54-9f24-26a25bd5dddd
ms.openlocfilehash: 6290da444b463744315a55304a68e8ab165fc162
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341984"
---
# <a name="dlls-ccx"></a>DLL (C++/CX)

È possibile usare Visual Studio per creare una DLL Win32 standard o una DLL del componente Windows Runtime che può essere usata dalle app piattaforma UWP (Universal Windows Platform) (UWP). Una DLL standard creata usando una versione di Visual Studio o il compilatore Microsoft C++ precedente a Visual Studio 2012 potrebbe non essere caricata correttamente in un'app UWP e potrebbe non superare il test di verifica dell'app nel Microsoft Store.

## <a name="windows-runtime-component-dlls"></a>Dll del componente Windows Runtime

In quasi tutti i casi, quando si vuole creare una DLL da usare in un'app UWP, crearla come componente Windows Runtime usando il modello di progetto con tale nome. È possibile creare un progetto di componente Windows Runtime per le dll con tipi di Windows Runtime pubblici o privati. È possibile accedere a un componente Windows Runtime dalle app scritte in qualsiasi linguaggio compatibile con Windows Runtime. Per impostazione predefinita, le impostazioni del compilatore per un progetto di componente Windows Runtime usano l'opzione **/ZW** . Un file .winmd deve avere lo stesso nome dello spazio dei nomi radice. Ad esempio, è possibile creare un'istanza di una classe denominata A.B.C.MyClass solo se è definita in un file di metadati denominato A.winmd o A.B.winmd o A.B.C.winmd. Il nome della DLL non deve necessariamente corrispondere al nome del file con estensione winmd.

Per altre informazioni, vedi [Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

### <a name="to-reference-a-third-party-windows-runtime-component-binary-in-your-project"></a>Per fare riferimento a un file binario Windows Runtime componente di terze parti nel progetto

1. Apri il menu di scelta rapida del progetto che utilizzerà la DLL, quindi scegli **Proprietà**. Nella pagina **Proprietà comuni** fai clic su **Aggiungi nuovo riferimento** .

1. Un componente Windows Runtime è costituito da un file DLL e da un file con estensione WinMD contenente i metadati. In genere, questi file si trovano nella stessa cartella. Nel riquadro a sinistra nella finestra di dialogo **Aggiungi riferimento** , fai clic su **Sfoglia** quindi passa alla cartella che contiene i file DLL e il relativo file .winmd. Per altre informazioni, vedere [SDK di estensione](/visualstudio/extensibility/creating-a-software-development-kit#extension-sdks).

## <a name="standard-dlls"></a>DLL standard

È possibile creare una DLL standard per codice C++ che non USA o produce tipi di Windows Runtime pubblici e lo utilizza da un'app UWP. Utilizzare il tipo di progetto libreria Dynamic-Link (DLL) quando si desidera eseguire la migrazione di una DLL esistente da compilare in questa versione di Visual Studio, ma non convertire il codice in un progetto Windows Runtime componente. Quando usi i seguenti passaggi, la DLL viene distribuita insieme all'eseguibile dell'app nel pacchetto con estensione appx.

### <a name="to-create-a-standard-dll-in-visual-studio"></a>Per creare una DLL standard in Visual Studio

1. Sulla barra dei menu scegliere **file**, **nuovo**, **progetto**, quindi selezionare il modello **libreria a collegamento dinamico (dll)** .

1. Immetti un nome per il progetto, quindi scegli il pulsante **OK** .

1. Aggiungi il codice. Assicurati di utilizzare `__declspec(dllexport)` per le funzioni che intendi esportare, ad esempio `__declspec(dllexport) Add(int I, in j);`

1. Aggiungere `#include winapifamily.h` per includere il file di intestazione dal Windows SDK per le app UWP e impostare la macro `WINAPI_FAMILY=WINAPI_PARTITION_APP` .

### <a name="to-reference-a-standard-dll-project-from-the-same-solution"></a>Per fare riferimento a un progetto con DLL standard dalla stessa soluzione

1. Apri il menu di scelta rapida del progetto che utilizzerà la DLL, quindi scegli **Proprietà**. Nella pagina **Proprietà comuni** fai clic su **Aggiungi nuovo riferimento** .

1. Nel riquadro a sinistra seleziona **Soluzione**, quindi seleziona la casella di controllo appropriata nel riquadro a destra.

1. Nei file del codice sorgente aggiungi un'istruzione `#include` per il file di intestazione DLL, in base alle necessità.

### <a name="to-reference-a-standard-dll-binary"></a>Per fare riferimento a un file binario DLL standard

1. Copia il file DLL, il file con estensione lib e il file di intestazione e incollali in un percorso noto, ad esempio nella cartella del progetto corrente.

1. Apri il menu di scelta rapida del progetto che utilizzerà la DLL, quindi scegli **Proprietà**. Scegli **Proprietà di configurazione**, **Linker**, **Input** e nella pagina che viene visualizzata aggiungi il file con estensione lib come dipendenza.

1. Nei file del codice sorgente aggiungi un'istruzione `#include` per il file di intestazione DLL, in base alle necessità.

### <a name="to-migrate-an-existing-win32-dll-for-uwp-app-compatibility"></a>Per eseguire la migrazione di una DLL Win32 esistente per la compatibilità delle app UWP

1. Creare un progetto del tipo DLL (Windows universale) e aggiungervi il codice sorgente esistente.

1. Aggiungere `#include winapifamily.h` per includere il file di intestazione dal Windows SDK per le app UWP e impostare la macro `WINAPI_FAMILY=WINAPI_PARTITION_APP` .

1. Nei file del codice sorgente aggiungi un'istruzione `#include` per il file di intestazione DLL, in base alle necessità.
