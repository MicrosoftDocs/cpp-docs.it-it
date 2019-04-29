---
title: 'Contenitori di controlli ActiveX: Utilizzo di controlli in un contenitore Non è una finestra di dialogo'
ms.date: 11/04/2016
helpviewer_keywords:
- Create method [MFC], ActiveX controls
- CreateControl method [MFC]
- ActiveX controls [MFC], creating
- ActiveX control containers [MFC], non-dialog containers
- ActiveX control containers [MFC], inserting controls
ms.assetid: 46f195b0-b8ca-4409-8cca-fbfaf2c9ab9f
ms.openlocfilehash: 70a67a6952d5361177b89e3ba514d7036b5799b6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62394871"
---
# <a name="activex-control-containers-using-controls-in-a-non-dialog-container"></a>Contenitori di controlli ActiveX: Utilizzo di controlli in un contenitore Non è una finestra di dialogo

In alcune applicazioni, ad esempio un SDI o MDI, è consigliabile incorporare un controllo in una finestra dell'applicazione. Il **Create** funzione membro della classe wrapper, inserita da Visual C++, può creare un'istanza del controllo in modo dinamico, senza la necessità di una finestra di dialogo.

Il **Create** funzione membro ha i seguenti parametri:

*lpszWindowName*<br/>
Puntatore al testo da visualizzare nella proprietà del controllo di testo o didascalia (se presente).

*dwStyle*<br/>
Stili di Windows. Per un elenco completo, vedere [CWnd:: CreateControl](../mfc/reference/cwnd-class.md#createcontrol).

*rect*<br/>
Specifica le dimensioni e la posizione del controllo.

*pParentWnd*<br/>
Specifica la finestra del controllo padre, in genere un `CDialog`. Non deve essere **NULL**.

*nID*<br/>
Specifica l'ID di controllo e possono essere usate dal contenitore per fare riferimento al controllo.

Un esempio di uso di questa funzione per creare dinamicamente un controllo ActiveX sarebbe in una visualizzazione di form di un'applicazione SDI. È quindi possibile creare un'istanza del controllo nel `WM_CREATE` gestore dell'applicazione.

In questo esempio `CMyView` è la classe di visualizzazione principale, `CCirc` è la classe wrapper e CIRC. H è l'intestazione (. H) file della classe wrapper.

Implementazione di questa funzionalità è un processo in quattro passaggi.

### <a name="to-dynamically-create-an-activex-control-in-a-non-dialog-window"></a>Per creare dinamicamente un controllo ActiveX in una finestra non è una finestra di dialogo

1. Inserisci Circ. H in CMYVIEW. H, appena prima di `CMyView` definizione della classe:

   [!code-cpp[NVC_MFC_AxCont#12](../mfc/codesnippet/cpp/activex-control-containers-using-controls-in-a-non-dialog-container_1.h)]

1. Aggiungere una variabile membro (typu `CCirc`) alla sezione protetta del `CMyView` definizione che si trova in CMYVIEW della classe. H:

   [!code-cpp[NVC_MFC_AxCont#13](../mfc/codesnippet/cpp/activex-control-containers-using-controls-in-a-non-dialog-container_2.h)]
    [!code-cpp[NVC_MFC_AxCont#14](../mfc/codesnippet/cpp/activex-control-containers-using-controls-in-a-non-dialog-container_3.h)]

1. Aggiungere un `WM_CREATE` gestore di messaggi a classe `CMyView`.

1. Nella funzione del gestore `CMyView::OnCreate`, effettuare una chiamata per il controllo `Create` funzione utilizzando il **questo** puntatore come la finestra padre:

   [!code-cpp[NVC_MFC_AxCont#15](../mfc/codesnippet/cpp/activex-control-containers-using-controls-in-a-non-dialog-container_4.cpp)]

1. Ricompilare il progetto. Verrà creato un controllo Circ dinamicamente ogni volta che viene creata la visualizzazione dell'applicazione.

## <a name="see-also"></a>Vedere anche

[Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)
