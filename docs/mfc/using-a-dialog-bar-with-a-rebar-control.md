---
title: Utilizzo di una barra di finestra di dialogo con un controllo Rebar
ms.date: 11/04/2016
helpviewer_keywords:
- WS_EX_TRANSPARENT style
- rebar controls [MFC], dialog bars
- dialog bars [MFC], using with rebar bands
ms.assetid: e528cea0-6b81-4bdf-9643-7c03b6176590
ms.openlocfilehash: e4e786d3670ec74b734739e29aa7e3e33b5af384
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75302367"
---
# <a name="using-a-dialog-bar-with-a-rebar-control"></a>Utilizzo di una barra di finestra di dialogo con un controllo Rebar

Come indicato in [controlli Rebar e bande](../mfc/rebar-controls-and-bands.md), ogni banda può contenere una sola finestra figlio (o controllo). Potrebbe trattarsi di una limitazione se si desidera disporre di più di una finestra figlio per banda. Una soluzione alternativa consiste nel creare una risorsa della barra della finestra di dialogo con più controlli, quindi aggiungere una banda Rebar (contenente la barra di dialogo) al controllo Rebar.

In genere, se si desidera che la banda della barra della finestra di dialogo appaia trasparente, è necessario impostare il WS_EX_TRANSPARENT stile esteso per l'oggetto della barra della finestra di dialogo. Tuttavia, poiché WS_EX_TRANSPARENT presenta alcuni problemi con il disegno corretto dello sfondo di una barra di dialogo, sarà necessario eseguire alcune operazioni aggiuntive per ottenere l'effetto desiderato.

Nella procedura riportata di seguito vengono illustrati i passaggi necessari per ottenere la trasparenza senza utilizzare lo stile esteso WS_EX_TRANSPARENT.

### <a name="to-implement-a-transparent-dialog-bar-in-a-rebar-band"></a>Per implementare una barra di dialogo trasparente in una banda Rebar

1. Utilizzando la finestra di [dialogo Aggiungi classe](../mfc/reference/adding-an-mfc-class.md), aggiungere una nuova classe, ad esempio `CMyDlgBar`, che implementi l'oggetto della barra della finestra di dialogo.

1. Aggiungere un gestore per il messaggio di WM_ERASEBKGND.

1. Nel nuovo gestore modificare il codice esistente in modo che corrisponda all'esempio seguente:

   [!code-cpp[NVC_MFCControlLadenDialog#29](../mfc/codesnippet/cpp/using-a-dialog-bar-with-a-rebar-control_1.cpp)]

1. Aggiungere un gestore per il messaggio di WM_MOVE.

1. Nel nuovo gestore modificare il codice esistente in modo che corrisponda all'esempio seguente:

   [!code-cpp[NVC_MFCControlLadenDialog#30](../mfc/codesnippet/cpp/using-a-dialog-bar-with-a-rebar-control_2.cpp)]

I nuovi gestori simulano la trasparenza della barra della finestra di dialogo inviando il messaggio di WM_ERASEBKGND alla finestra padre e forzando un ridisegno ogni volta che l'oggetto barra della finestra di dialogo viene spostato.

## <a name="see-also"></a>Vedere anche

[Uso di CReBarCtrl](../mfc/using-crebarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
