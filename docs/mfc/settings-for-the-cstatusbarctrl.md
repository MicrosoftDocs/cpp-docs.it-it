---
title: Impostazioni per CStatusBarCtrl
ms.date: 11/04/2016
helpviewer_keywords:
- status bar controls [MFC], settings
- CStatusBarCtrl class [MFC], settings
ms.assetid: adeba0c3-17f3-435c-b140-a57845e9ce49
ms.openlocfilehash: dd7c68d6721c48f751c04437e43c8770f6ec5736
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365370"
---
# <a name="settings-for-the-cstatusbarctrl"></a>Impostazioni per CStatusBarCtrl

La posizione predefinita di un [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md) finestra di stato è lungo la parte inferiore della finestra padre, ma è possibile specificare lo stile CCS_TOP per visualizzare nella parte superiore dell'area client della finestra padre.

È possibile specificare lo stile SBARS_SIZEGRIP per includere un `CStatusBarCtrl` riquadro di ridimensionamento all'estremità destra della finestra di stato. Un grip di ridimensionamento è simile a un bordo di ridimensionamento; è un'area rettangolare su cui l'utente può fare clic e trascinare per ridimensionare la finestra padre.

> [!NOTE]
> Se si combinano gli stili CCS_TOP e SBARS_SIZEGRIP, il grip di ridimensionamento risultante non è funzionale anche se il sistema lo disegna nella finestra di stato.

La routine della finestra per la finestra di stato imposta automaticamente le dimensioni iniziali e la posizione della finestra di controllo. La larghezza è uguale a quella dell'area client della finestra padre. L'altezza si basa sulle metriche del tipo di carattere attualmente selezionato nel contesto di dispositivo della finestra di stato e sulla larghezza dei bordi della finestra.

La routine della finestra regola automaticamente le dimensioni della finestra di stato ogni volta che riceve un messaggio di WM_SIZE. In genere, quando le dimensioni della finestra padre cambiano, l'elemento padre invia un messaggio di WM_SIZE alla finestra di stato.

È possibile impostare l'altezza minima dell'area di disegno di una finestra di stato chiamando [SetMinHeight](../mfc/reference/cstatusbarctrl-class.md#setminheight), specificando l'altezza minima in pixel. L'area di disegno non include i bordi della finestra.

Per recuperare le larghezze dei bordi di una finestra di stato, chiamare [GetBorders](../mfc/reference/cstatusbarctrl-class.md#getborders). Questa funzione membro include il puntatore a una matrice a tre elementi che riceve la larghezza del bordo orizzontale, il bordo verticale e il bordo tra i rettangoli.

## <a name="see-also"></a>Vedere anche

[Uso di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
