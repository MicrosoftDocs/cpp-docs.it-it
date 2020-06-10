---
title: CTreeCtrl e CTreeView
ms.date: 11/04/2016
helpviewer_keywords:
- tree view controls
- CTreeCtrl class [MFC], vs. CTreeView class [MFC]
- CTreeView class [MFC], vs. CTreeCtrl class [MFC]
- tree controls [MFC], and tree view
ms.assetid: bba5af25-103f-4b53-84d3-071bc9bd6494
ms.openlocfilehash: 83e07c75b9eab6df05dbcd0f52cfbe8b90e1d768
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84620487"
---
# <a name="ctreectrl-vs-ctreeview"></a>CTreeCtrl e CTreeView

MFC fornisce due classi che incapsulano i controlli struttura ad albero: [CTreeCtrl](reference/ctreectrl-class.md) e [CTreeView](reference/ctreeview-class.md). Ogni classe è utile in situazioni diverse.

Usare `CTreeCtrl` quando è necessario un controllo finestra figlio normale, ad esempio in una finestra di dialogo. In particolare, è consigliabile usare `CTreeCtrl` se nella finestra sono presenti altri controlli figlio, come in una normale finestra di dialogo.

Utilizzare `CTreeView` questa funzione quando si desidera che il controllo albero funga da finestra di visualizzazione nell'architettura documento/visualizzazione e in un controllo albero. Un oggetto occuperà `CTreeView` l'intera area client di una finestra cornice o di una finestra con separatore. Viene ridimensionato automaticamente quando la finestra padre viene ridimensionata e può elaborare i messaggi di comando da menu, tasti di scelta rapida e barre degli strumenti. Poiché un controllo struttura ad albero contiene i dati necessari per visualizzare la struttura ad albero, non è necessario che l'oggetto documento corrispondente risulti complesso. è anche possibile usare [CDocument](reference/cdocument-class.md) come tipo di documento nel modello di documento.

## <a name="see-also"></a>Vedere anche

[Utilizzo di CTreeCtrl](using-ctreectrl.md)<br/>
[Controlli](controls-mfc.md)
