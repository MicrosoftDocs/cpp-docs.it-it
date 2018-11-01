---
title: Comunicazione con un controllo albero
ms.date: 11/04/2016
helpviewer_keywords:
- tree controls [MFC], communicating with
- CTreeCtrl class [MFC], calling member functions
- communications, tree controls
- tree controls
ms.assetid: 680ad9ee-b11f-452d-93fa-501ca7d7e069
ms.openlocfilehash: a5749b76468a7ba30cd48dc3a9b61f2de7ac67b9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50654184"
---
# <a name="communicating-with-a-tree-control"></a>Comunicazione con un controllo albero

Si usano metodi diversi per chiamare le funzioni membro una [CTreeCtrl](../mfc/reference/ctreectrl-class.md) oggetti a seconda del modo in cui è stato creato l'oggetto:

- Se il controllo struttura ad albero è in una finestra di dialogo, utilizzare una variabile membro di tipo `CTreeCtrl` creati nella classe della finestra di dialogo.

- Se il controllo struttura ad albero è una finestra figlio, utilizzare il `CTreeCtrl` oggetto (o puntatore) usato per costruire l'oggetto.

- Se si usa un' `CTreeView` dell'oggetto, utilizzare la funzione [CTreeView:: GetTreeCtrl](../mfc/reference/ctreeview-class.md#gettreectrl) per ottenere un riferimento al controllo albero. È possibile inizializzare un altro riferimento con questo valore o assegnare l'indirizzo del riferimento da un `CTreeCtrl` puntatore.

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

