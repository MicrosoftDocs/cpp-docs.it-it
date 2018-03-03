---
title: Comunicazione con un controllo albero | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- tree controls [MFC], communicating with
- CTreeCtrl class [MFC], calling member functions
- communications, tree controls
- tree controls
ms.assetid: 680ad9ee-b11f-452d-93fa-501ca7d7e069
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2ef1188c9519e57c8132a2b20fc3b272d6c0ac51
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="communicating-with-a-tree-control"></a>Comunicazione con un controllo albero
Si usano metodi diversi per chiamare le funzioni membro in un [CTreeCtrl](../mfc/reference/ctreectrl-class.md) oggetto a seconda della modalità di creazione dell'oggetto:  
  
-   Se il controllo struttura ad albero è in una finestra di dialogo, utilizzare una variabile membro di tipo `CTreeCtrl` creati in una classe finestra di dialogo.  
  
-   Se il controllo struttura ad albero è una finestra figlio, utilizzare il `CTreeCtrl` oggetto (o puntatore) utilizzato per costruire l'oggetto.  
  
-   Se si utilizza un `CTreeView` dell'oggetto, utilizzare la funzione [CTreeView:: GetTreeCtrl](../mfc/reference/ctreeview-class.md#gettreectrl) per ottenere un riferimento al controllo struttura ad albero. È possibile inizializzare un altro riferimento con questo valore o assegnare l'indirizzo del riferimento a un `CTreeCtrl` puntatore.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

