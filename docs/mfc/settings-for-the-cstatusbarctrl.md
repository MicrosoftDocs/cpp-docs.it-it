---
title: Impostazioni per CStatusBarCtrl
ms.date: 11/04/2016
helpviewer_keywords:
- status bar controls [MFC], settings
- CStatusBarCtrl class [MFC], settings
ms.assetid: adeba0c3-17f3-435c-b140-a57845e9ce49
ms.openlocfilehash: 18c4c780ecf7865d8d648bfa4c54961bbffe7b18
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79446393"
---
# <a name="settings-for-the-cstatusbarctrl"></a>Impostazioni per CStatusBarCtrl

La posizione predefinita di una finestra di stato di [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md) è lungo la parte inferiore della finestra padre, ma è possibile specificare lo stile del CCS_TOP in modo che venga visualizzata nella parte superiore dell'area client della finestra padre.

È possibile specificare lo stile SBARS_SIZEGRIP per includere un riquadro di ridimensionamento all'estremità destra della finestra di stato del `CStatusBarCtrl`. Un riquadro di ridimensionamento è simile al bordo di ridimensionamento. si tratta di un'area rettangolare su cui l'utente può fare clic e trascinare per ridimensionare la finestra padre.

> [!NOTE]
>  Se si combinano gli stili CCS_TOP e SBARS_SIZEGRIP, il riquadro di ridimensionamento risultante non è funzionale anche se il sistema lo disegna nella finestra di stato.

La routine della finestra per la finestra di stato imposta automaticamente le dimensioni e la posizione iniziali della finestra del controllo. La larghezza corrisponde a quella dell'area client della finestra padre. L'altezza si basa sulle metriche del tipo di carattere attualmente selezionato nel contesto di dispositivo della finestra di stato e sulla larghezza dei bordi della finestra.

La routine della finestra regola automaticamente le dimensioni della finestra di stato ogni volta che riceve un messaggio di WM_SIZE. In genere, quando viene modificata la dimensione della finestra padre, l'elemento padre invia un messaggio di WM_SIZE alla finestra di stato.

È possibile impostare l'altezza minima dell'area di disegno di una finestra di stato chiamando [SetMinHeight](../mfc/reference/cstatusbarctrl-class.md#setminheight), specificando l'altezza minima in pixel. L'area di disegno non include i bordi della finestra.

Per recuperare le larghezze dei bordi di una finestra di stato, chiamare [GetBorders](../mfc/reference/cstatusbarctrl-class.md#getborders). Questa funzione membro include il puntatore a una matrice a tre elementi che riceve la larghezza del bordo orizzontale, il bordo verticale e il bordo tra i rettangoli.

## <a name="see-also"></a>Vedere anche

[Uso di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
