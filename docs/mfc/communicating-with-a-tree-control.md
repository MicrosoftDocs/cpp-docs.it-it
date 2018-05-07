---
title: Comunicazione con un controllo albero | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- tree controls [MFC], communicating with
- CTreeCtrl class [MFC], calling member functions
- communications, tree controls
- tree controls
ms.assetid: 680ad9ee-b11f-452d-93fa-501ca7d7e069
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: af0b248d5e32b535c23cc17b48efdd551dad7a2c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="communicating-with-a-tree-control"></a>Comunicazione con un controllo albero
Si usano metodi diversi per chiamare le funzioni membro in un [CTreeCtrl](../mfc/reference/ctreectrl-class.md) oggetto a seconda della modalità di creazione dell'oggetto:  
  
-   Se il controllo struttura ad albero è in una finestra di dialogo, utilizzare una variabile membro di tipo `CTreeCtrl` creati in una classe finestra di dialogo.  
  
-   Se il controllo struttura ad albero è una finestra figlio, utilizzare il `CTreeCtrl` oggetto (o puntatore) utilizzato per costruire l'oggetto.  
  
-   Se si utilizza un `CTreeView` dell'oggetto, utilizzare la funzione [CTreeView:: GetTreeCtrl](../mfc/reference/ctreeview-class.md#gettreectrl) per ottenere un riferimento al controllo struttura ad albero. È possibile inizializzare un altro riferimento con questo valore o assegnare l'indirizzo del riferimento a un `CTreeCtrl` puntatore.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

