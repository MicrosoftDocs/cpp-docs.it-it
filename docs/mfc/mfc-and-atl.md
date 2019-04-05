---
title: MFC e ATL
ms.date: 01/24/2018
ms.assetid: 31b1a3a8-4154-4c4a-af10-fafc23ecdc5c
ms.openlocfilehash: c2cfb77f0e3885e0b315ddfe38bf942ec157375a
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "58780249"
---
# <a name="mfc-and-atl"></a>MFC e ATL

Microsoft Foundation Classes fornisce un wrapper basato sugli oggetti C++ in Win32 per un sviluppo rapido di applicazioni desktop native. Active Template Library (ATL) è una libreria di wrapper che semplifica lo sviluppo COM e viene usata in modo estensivo per creare controlli ActiveX.

È possibile creare programmi MFC o ATL con Visual Studio Community Edition o versioni successive. Le edizioni Express non supportano MFC o ATL.

In Visual Studio 2015 Visual C++ è un componente facoltativo e i componenti MFC e ATL sono sottocomponenti di Visual C++. Se non si selezionano questi componenti quando si installa per la prima volta Visual Studio, verrà chiesto di installarli al primo tentativo di creazione o apertura di un progetto MFC o ATL.

In Visual Studio 2017 e versioni successive, MFC e ATL sono sottocomponenti del **sviluppo di applicazioni Desktop con C++** carico di lavoro nel programma di installazione di Visual Studio. È possibile installare il supporto ATL senza MFC o combinati supporto ATL e MFC (MFC dipende da ATL). Per altre informazioni sui componenti e carichi di lavoro, vedere [installare Visual Studio 2017](/visualstudio/install/install-visual-studio).

## <a name="related-articles"></a>Articoli correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[Applicazioni desktop MFC](../mfc/mfc-desktop-applications.md)|Microsoft Foundation Classes fornisce un semplice wrapper basato sugli oggetti in Win32 che permette lo sviluppo rapido di applicazioni GUI in C++.|
|[Per altre informazioni, vedere Applicazioni desktop ATL COM.](../atl/atl-com-desktop-components.md)|ATL fornisce modelli di classe e altri costrutti di utilizzo per semplificare la creazione di oggetti COM in C++.|
|[Classi condivise ATL/MFC](../atl-mfc-shared/atl-mfc-shared-classes.md)|Informazioni di riferimento per [CStringT Class](../atl-mfc-shared/reference/cstringt-class.md) e altre classi condivise da MFC e ATL.|
|[Utilizzo di file di risorse](../windows/working-with-resource-files.md)|L'editor risorse permette di modificare risorse dell'interfaccia utente come stringhe, immagini e finestre di dialogo.|
|[Visual C++](../overview/visual-cpp-in-visual-studio.md)|Argomento principale per tutto il contenuto relativo a C++ in MSDN Library.|