---
title: CTreeCtrl e CTreeView
ms.date: 11/04/2016
helpviewer_keywords:
- tree view controls
- CTreeCtrl class [MFC], vs. CTreeView class [MFC]
- CTreeView class [MFC], vs. CTreeCtrl class [MFC]
- tree controls [MFC], and tree view
ms.assetid: bba5af25-103f-4b53-84d3-071bc9bd6494
ms.openlocfilehash: 7c78dfa9920c913fdbedb009c5a6f275a3e3e273
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79445226"
---
# <a name="ctreectrl-vs-ctreeview"></a>CTreeCtrl e CTreeView

MFC fornisce due classi che incapsulano i controlli struttura ad albero: [CTreeCtrl](../mfc/reference/ctreectrl-class.md) e [CTreeView](../mfc/reference/ctreeview-class.md). Ogni classe è utile in situazioni diverse.

Usare `CTreeCtrl` quando è necessario un controllo finestra figlio normale; ad esempio, in una finestra di dialogo. Si consiglia di utilizzare `CTreeCtrl` se nella finestra saranno presenti altri controlli figlio, come in una tipica finestra di dialogo.

Utilizzare `CTreeView` quando si desidera che il controllo di struttura ad albero funga da finestra di visualizzazione nell'architettura documento/visualizzazione e in un controllo albero. Un `CTreeView` occuperà l'intera area client di una finestra cornice o di una finestra con separatore. Viene ridimensionato automaticamente quando la finestra padre viene ridimensionata e può elaborare i messaggi di comando da menu, tasti di scelta rapida e barre degli strumenti. Poiché un controllo struttura ad albero contiene i dati necessari per visualizzare la struttura ad albero, non è necessario che l'oggetto documento corrispondente risulti complesso. è anche possibile usare [CDocument](../mfc/reference/cdocument-class.md) come tipo di documento nel modello di documento.

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
