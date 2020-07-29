---
title: 'Server: implementazione di finestre cornice sul posto'
ms.date: 09/09/2019
helpviewer_keywords:
- frame windows [MFC], implementing
- OLE server applications [MFC], frame windows
- servers, in-place frame windows
- frame windows [MFC], in-place
- in-place frame windows
ms.assetid: 09bde4d8-15e2-4fba-8d14-9b954d926b92
ms.openlocfilehash: a082afe141a21e4175886f13a26043694ac0d426
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230467"
---
# <a name="servers-implementing-in-place-frame-windows"></a>Server: implementazione di finestre cornice sul posto

In questo articolo viene illustrata la procedura per implementare le finestre cornice sul posto in un'applicazione server di modifica visiva se non si intende utilizzare la creazione guidata dell'applicazione per creare un'applicazione server. Al posto di seguire la procedura descritta in questo articolo, è possibile usare una classe della finestra cornice sul posto esistente da un'applicazione generata tramite la creazione guidata applicazione o da un esempio fornito con Visual C++.

#### <a name="to-declare-an-in-place-frame-window-class"></a>Per dichiarare una classe della finestra cornice sul posto

1. Derivare una classe della finestra cornice sul posto da `COleIPFrameWnd`.

   - Usare la macro DECLARE_DYNCREATE nel file di intestazione della classe.

   - Usare la macro IMPLEMENT_DYNCREATE nel file di implementazione della classe (. cpp). In questo modo gli oggetti di questa classe possono essere creati dal framework.

1. Dichiarare un membro `COleResizeBar` nella classe della finestra cornice. Ciò è necessario se si vuole supportare il ridimensionamento sul posto nelle applicazioni server.

   Dichiarare un `OnCreate` gestore di messaggi (mediante la [creazione guidata classe](reference/mfc-class-wizard.md)) e chiamare `Create` per il `COleResizeBar` membro, se è stato definito.

1. Se si dispone di una barra degli strumenti, dichiarare un membro `CToolBar` nella classe della finestra cornice.

   Eseguire l'override della funzione membro `OnCreateControlBars` per creare una barra degli strumenti quando il server è attivo sul posto. Ad esempio:

   [!code-cpp[NVC_MFCOleServer#1](../mfc/codesnippet/cpp/servers-implementing-in-place-frame-windows_1.cpp)]

   Vedere la discussione su questo codice riportata dopo il passaggio 5.

1. Includere il file di intestazione per questa classe della finestra cornice sul posto nel file principale con estensione cpp.

1. In `InitInstance` per la classe dell'applicazione, chiamare la funzione `SetServerInfo` dell'oggetto modello di documento per specificare le risorse e la finestra cornice sul posto da utilizzare nella modifica aperta e sul posto.

La serie di chiamate di funzione nell' **`if`** istruzione crea la barra degli strumenti dalle risorse fornite dal server. A questo punto, la barra degli strumenti fa parte della gerarchia della finestra del contenitore. Poiché questa barra degli strumenti è derivata da `CToolBar`, passerà i messaggi al proprietario, la finestra cornice dell'applicazione contenitore, a meno che non si modifichi il proprietario. Per questo motivo la chiamata a `SetOwner` è necessaria. Questa chiamata cambia la finestra a cui vengono inviati i comandi con la finestra cornice sul posto del server, causando così il passaggio dei messaggi al server. In questo modo il server può reagire alle operazioni sulla barra degli strumenti che fornisce.

L'ID per la bitmap della barra degli strumenti deve corrispondere a quello delle altre risorse sul posto definite nell'applicazione server. Per informazioni dettagliate, vedere [menu e risorse: aggiunte al server](../mfc/menus-and-resources-server-additions.md) .

Per ulteriori informazioni, vedere [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md), [COleResizeBar](../mfc/reference/coleresizebar-class.md)e [CDocTemplate:: SetServerInfo](../mfc/reference/cdoctemplate-class.md#setserverinfo) in riferimenti alla *libreria di classi*.

## <a name="see-also"></a>Vedere anche

[Server](../mfc/servers.md)<br/>
[Server: implementazione di un server](../mfc/servers-implementing-a-server.md)<br/>
[Server: implementazione di documenti server](../mfc/servers-implementing-server-documents.md)<br/>
[Server: elementi server](../mfc/servers-server-items.md)
