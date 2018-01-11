---
title: CTreeCtrl vs. CTreeView | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CTreeCtrl
- CTreeView
dev_langs: C++
helpviewer_keywords:
- tree view controls
- CTreeCtrl class [MFC], vs. CTreeView class [MFC]
- CTreeView class [MFC], vs. CTreeCtrl class [MFC]
- tree controls [MFC], and tree view
ms.assetid: bba5af25-103f-4b53-84d3-071bc9bd6494
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: bb0c1b7a7bf73ab70bbccca6f2a9ccc2ab385516
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ctreectrl-vs-ctreeview"></a>CTreeCtrl vs. CTreeView
MFC fornisce due classi che incapsulano i controlli struttura: [CTreeCtrl](../mfc/reference/ctreectrl-class.md) e [CTreeView](../mfc/reference/ctreeview-class.md). Ogni classe è utile in situazioni diverse.  
  
 Utilizzare `CTreeCtrl` quando è necessario un controllo di finestra figlio normale; ad esempio, nella finestra di dialogo. In particolare si desidera utilizzare `CTreeCtrl` se sono presenti altri controlli figlio nella finestra, come una normale finestra di dialogo.  
  
 Utilizzare `CTreeView` quando si desidera il controllo struttura ad albero di agire come una finestra di visualizzazione nell'architettura documento/visualizzazione, nonché un controllo struttura ad albero. Oggetto `CTreeView` occupa l'intera area client di una finestra cornice o finestra con separatore. Si verrà ridimensionato automaticamente quando la finestra padre viene ridimensionata e può elaborare i messaggi di comando di menu e tasti di scelta rapida, barre degli strumenti. Poiché un controllo albero contiene i dati necessari per visualizzare la struttura ad albero, l'oggetto documento corrispondente non deve essere complessa, è anche possibile usare [CDocument](../mfc/reference/cdocument-class.md) come tipo di documento nel modello di documento.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

