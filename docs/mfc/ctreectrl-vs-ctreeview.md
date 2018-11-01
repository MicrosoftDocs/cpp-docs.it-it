---
title: CTreeCtrl e CTreeView
ms.date: 11/04/2016
f1_keywords:
- CTreeCtrl
- CTreeView
helpviewer_keywords:
- tree view controls
- CTreeCtrl class [MFC], vs. CTreeView class [MFC]
- CTreeView class [MFC], vs. CTreeCtrl class [MFC]
- tree controls [MFC], and tree view
ms.assetid: bba5af25-103f-4b53-84d3-071bc9bd6494
ms.openlocfilehash: 97997a57a02ee258a50d405f7f61ed9994ccf734
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50540413"
---
# <a name="ctreectrl-vs-ctreeview"></a>CTreeCtrl e CTreeView

MFC fornisce due classi che incapsulano i controlli di struttura ad albero: [CTreeCtrl](../mfc/reference/ctreectrl-class.md) e [CTreeView](../mfc/reference/ctreeview-class.md). Ogni classe è utile in situazioni diverse.

Usare `CTreeCtrl` quando è necessario un controllo di finestra figlio plain; ad esempio, in una finestra di dialogo. In particolare si vogliano utilizzare `CTreeCtrl` se nella finestra di, come in una finestra di dialogo tipica sarà essere presenti altri controlli figlio.

Usare `CTreeView` quando si vuole che il controllo albero può agire come una finestra di visualizzazione nell'architettura documento/visualizzazione, nonché un controllo albero. Oggetto `CTreeView` occupano l'intera area client di una finestra cornice o finestra con separatore. Verrà ridimensionato automaticamente quando la relativa finestra padre viene ridimensionata e sia possibile elaborare i messaggi di comando di menu, tasti di scelta rapida e le barre degli strumenti. Poiché un controllo albero contiene i dati necessari per visualizzare l'albero, l'oggetto documento corrispondente non deve essere complessa, è anche possibile usare [CDocument](../mfc/reference/cdocument-class.md) come tipo di documento nel modello di documento.

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

