---
title: Utilizzo di una barra di finestra di dialogo con un controllo Rebar
ms.date: 11/04/2016
f1_keywords:
- WM_EX_TRANSPARENT
helpviewer_keywords:
- WS_EX_TRANSPARENT style
- rebar controls [MFC], dialog bars
- dialog bars [MFC], using with rebar bands
ms.assetid: e528cea0-6b81-4bdf-9643-7c03b6176590
ms.openlocfilehash: fdef763db5085d6419f082ecd4dddca27a5b39b0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50554375"
---
# <a name="using-a-dialog-bar-with-a-rebar-control"></a>Utilizzo di una barra di finestra di dialogo con un controllo Rebar

Come indicato nella [controlli Rebar e bande](../mfc/rebar-controls-and-bands.md), ogni band può contenere un solo figlio finestra (o controllo). Potrebbe trattarsi di una limitazione se si desidera avere più di una finestra figlio per ogni fuori banda. Una pratica soluzione alternativa consiste nel creare una risorsa barra di finestra di dialogo a più controlli e quindi aggiungere un controllo rebar band (che include la barra di finestra di dialogo) per il controllo rebar.

In genere, se si desidera che la finestra di dialogo barra trasparente, è necessario impostare lo stile per l'oggetto barra finestra di dialogo esteso WS_EX_TRANSPARENT. Tuttavia, poiché WS_EX_TRANSPARENT presenta alcuni problemi di disegno dello sfondo di una barra di finestra di dialogo, è necessario eseguire un lavoro supplementare per ottenere l'effetto desiderato.

Nella seguente procedura vengono illustrati i passaggi necessari per ottenere trasparenza senza utilizzare il WS_EX_TRANSPARENT stile esteso.

### <a name="to-implement-a-transparent-dialog-bar-in-a-rebar-band"></a>Per implementare una barra di finestra di dialogo trasparente in un controllo rebar band

1. Usando il [finestra di dialogo Aggiungi classe](../mfc/reference/adding-an-mfc-class.md), aggiungere una nuova classe (ad esempio, `CMyDlgBar`) che implementa l'oggetto barra finestra di dialogo.

1. Aggiungere un gestore per il messaggio WM_ERASEBKGND.

1. Nel nuovo gestore, modificare il codice esistente affinché corrisponda all'esempio seguente:

   [!code-cpp[NVC_MFCControlLadenDialog#29](../mfc/codesnippet/cpp/using-a-dialog-bar-with-a-rebar-control_1.cpp)]

1. Aggiungere un gestore per il messaggio WM_MOVE.

1. Nel nuovo gestore, modificare il codice esistente affinché corrisponda all'esempio seguente:

   [!code-cpp[NVC_MFCControlLadenDialog#30](../mfc/codesnippet/cpp/using-a-dialog-bar-with-a-rebar-control_2.cpp)]

I nuovi gestori di simulano la trasparenza della barra di finestra di dialogo per l'inoltro del messaggio WM_ERASEBKGND per la finestra padre e imposto il ridisegno ogni volta che viene spostato l'oggetto barra finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Uso di CReBarCtrl](../mfc/using-crebarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

