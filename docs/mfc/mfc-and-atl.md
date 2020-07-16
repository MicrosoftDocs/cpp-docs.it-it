---
title: MFC e ATL
ms.date: 01/24/2018
ms.assetid: 31b1a3a8-4154-4c4a-af10-fafc23ecdc5c
ms.topic: overview
ms.openlocfilehash: a0ad1eac7991655eae5ae1a328145e66031e40dd
ms.sourcegitcommit: 6b3d793f0ef3bbb7eefaf9f372ba570fdfe61199
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/15/2020
ms.locfileid: "86405039"
---
# <a name="mfc-and-atl"></a>MFC e ATL

Microsoft Foundation Classes fornisce un wrapper basato sugli oggetti C++ in Win32 per un sviluppo rapido di applicazioni desktop native. Active Template Library (ATL) è una libreria di wrapper che semplifica lo sviluppo COM e viene usata in modo estensivo per creare controlli ActiveX.

È possibile creare programmi MFC o ATL con Visual Studio Community Edition o versioni successive. Le edizioni Express non supportano MFC o ATL.

In Visual Studio 2015 Visual C++ è un componente facoltativo e i componenti MFC e ATL sono sottocomponenti di Visual C++. Se non si selezionano questi componenti quando si installa per la prima volta Visual Studio, verrà chiesto di installarli al primo tentativo di creazione o apertura di un progetto MFC o ATL.

In Visual Studio 2017 e versioni successive, MFC e ATL sono sottocomponenti facoltativi in base al carico di lavoro **sviluppo di applicazioni desktop con C++** nel programma programma di installazione di Visual Studio. È possibile installare il supporto ATL senza MFC o il supporto di MFC e ATL combinato (MFC dipende da ATL). Per ulteriori informazioni sui carichi di lavoro e i componenti, vedere [Install Visual Studio](/visualstudio/install/install-visual-studio).

## <a name="related-articles"></a>Articoli correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[Applicazioni desktop MFC](mfc-desktop-applications.md)|Microsoft Foundation Classes fornisce un semplice wrapper basato sugli oggetti in Win32 che permette lo sviluppo rapido di applicazioni GUI in C++.|
|[Componenti Desktop COM ATL](../atl/atl-com-desktop-components.md)|ATL fornisce modelli di classe e altri costrutti di utilizzo per semplificare la creazione di oggetti COM in C++.|
|[Classi condivise ATL/MFC](../atl-mfc-shared/atl-mfc-shared-classes.md)|Informazioni di riferimento per [CStringT Class](../atl-mfc-shared/reference/cstringt-class.md) e altre classi condivise da MFC e ATL.|
|[Uso di file di risorse](../windows/working-with-resource-files.md)|L'editor risorse permette di modificare risorse dell'interfaccia utente come stringhe, immagini e finestre di dialogo.|
|[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)|Argomento padre per tutta la documentazione di C++.|
