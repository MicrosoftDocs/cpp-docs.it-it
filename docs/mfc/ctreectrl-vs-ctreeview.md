---
title: CTreeCtrl vs. CTreeView | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CTreeCtrl
- CTreeView
dev_langs:
- C++
helpviewer_keywords:
- tree view controls
- CTreeCtrl class [MFC], vs. CTreeView class [MFC]
- CTreeView class [MFC], vs. CTreeCtrl class [MFC]
- tree controls [MFC], and tree view
ms.assetid: bba5af25-103f-4b53-84d3-071bc9bd6494
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d71048b6f03f7f1b4400c0a88c178d1b97acdf2f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="ctreectrl-vs-ctreeview"></a>CTreeCtrl vs. CTreeView
MFC fornisce due classi che incapsulano i controlli struttura: [CTreeCtrl](../mfc/reference/ctreectrl-class.md) e [CTreeView](../mfc/reference/ctreeview-class.md). Ogni classe è utile in situazioni diverse.  
  
 Utilizzare `CTreeCtrl` quando è necessario un controllo di finestra figlio normale; ad esempio, nella finestra di dialogo. In particolare si desidera utilizzare `CTreeCtrl` se sono presenti altri controlli figlio nella finestra, come una normale finestra di dialogo.  
  
 Utilizzare `CTreeView` quando si desidera il controllo struttura ad albero di agire come una finestra di visualizzazione nell'architettura documento/visualizzazione, nonché un controllo struttura ad albero. Oggetto `CTreeView` occupa l'intera area client di una finestra cornice o finestra con separatore. Si verrà ridimensionato automaticamente quando la finestra padre viene ridimensionata e può elaborare i messaggi di comando di menu e tasti di scelta rapida, barre degli strumenti. Poiché un controllo albero contiene i dati necessari per visualizzare la struttura ad albero, l'oggetto documento corrispondente non deve essere complessa, è anche possibile usare [CDocument](../mfc/reference/cdocument-class.md) come tipo di documento nel modello di documento.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

