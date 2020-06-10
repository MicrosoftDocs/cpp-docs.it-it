---
title: 'Contenitori di controlli ActiveX: utilizzo di controlli in un contenitore diverso da una finestra di dialogo'
ms.date: 11/04/2016
helpviewer_keywords:
- Create method [MFC], ActiveX controls
- CreateControl method [MFC]
- ActiveX controls [MFC], creating
- ActiveX control containers [MFC], non-dialog containers
- ActiveX control containers [MFC], inserting controls
ms.assetid: 46f195b0-b8ca-4409-8cca-fbfaf2c9ab9f
ms.openlocfilehash: b010c35f32462810cbdb008e5688d4b41254fad1
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84620765"
---
# <a name="activex-control-containers-using-controls-in-a-non-dialog-container"></a>Contenitori di controlli ActiveX: utilizzo di controlli in un contenitore diverso da una finestra di dialogo

In alcune applicazioni, ad esempio in un'applicazione SDI o MDI, è necessario incorporare un controllo in una finestra dell'applicazione. La funzione membro **create** della classe wrapper, inserita da Visual C++, può creare un'istanza del controllo in modo dinamico, senza la necessità di una finestra di dialogo.

La funzione membro **create** presenta i parametri seguenti:

*lpszWindowName*<br/>
Puntatore al testo da visualizzare nella proprietà di testo o didascalia del controllo (se presente).

*dwStyle*<br/>
Stili di Windows. Per un elenco completo, vedere [CWnd:: CreateControl](reference/cwnd-class.md#createcontrol).

*Rect*<br/>
Specifica la posizione e le dimensioni del controllo.

*pParentWnd*<br/>
Specifica la finestra padre del controllo, in genere `CDialog` . Non deve essere **null**.

*nID*<br/>
Specifica l'ID del controllo e può essere usato dal contenitore per fare riferimento al controllo.

Un esempio di utilizzo di questa funzione per creare dinamicamente un controllo ActiveX è costituito da una visualizzazione form di un'applicazione SDI. È quindi possibile creare un'istanza del controllo nel `WM_CREATE` gestore dell'applicazione.

Per questo esempio, `CMyView` è la classe di visualizzazione principale, `CCirc` è la classe wrapper e circ. H è l'intestazione (. H) file della classe wrapper.

L'implementazione di questa funzionalità è un processo in quattro fasi.

### <a name="to-dynamically-create-an-activex-control-in-a-non-dialog-window"></a>Per creare dinamicamente un controllo ActiveX in una finestra non di dialogo

1. Inserire CIRC. H in CMYVIEW. H, appena prima della `CMyView` definizione della classe:

   [!code-cpp[NVC_MFC_AxCont#12](codesnippet/cpp/activex-control-containers-using-controls-in-a-non-dialog-container_1.h)]

1. Aggiungere una variabile membro (di tipo `CCirc` ) alla sezione protected della `CMyView` definizione di classe che si trova in CMyView. H

   [!code-cpp[NVC_MFC_AxCont#13](codesnippet/cpp/activex-control-containers-using-controls-in-a-non-dialog-container_2.h)]
    [!code-cpp[NVC_MFC_AxCont#14](codesnippet/cpp/activex-control-containers-using-controls-in-a-non-dialog-container_3.h)]

1. Aggiungere un `WM_CREATE` gestore di messaggi alla classe `CMyView` .

1. Nella funzione del gestore, `CMyView::OnCreate` effettuare una chiamata alla funzione del controllo `Create` utilizzando il puntatore **this** come finestra padre:

   [!code-cpp[NVC_MFC_AxCont#15](codesnippet/cpp/activex-control-containers-using-controls-in-a-non-dialog-container_4.cpp)]

1. Ricompilare il progetto. Un controllo Circ verrà creato dinamicamente ogni volta che viene creata la vista dell'applicazione.

## <a name="see-also"></a>Vedere anche

[Contenitori di controlli ActiveX](activex-control-containers.md)
