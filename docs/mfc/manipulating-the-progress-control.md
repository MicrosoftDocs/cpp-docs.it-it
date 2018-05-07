---
title: Modifica del controllo Progress | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CProgressCtrl class [MFC], working with
- progress controls [MFC], manipulating
- CProgressCtrl class [MFC], manipulating
- controlling progress controls [MFC]
- CProgressCtrl class [MFC], using
ms.assetid: 9af561d1-980b-4003-a6da-ff79be15bf23
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 415061306c5e743b9ed95ee5c7105133d2e4d340
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="manipulating-the-progress-control"></a>Modifica del controllo Progress
Esistono tre modi per modificare la posizione corrente di un controllo di stato di avanzamento ([CProgressCtrl](../mfc/reference/cprogressctrl-class.md)).  
  
-   La posizione può essere modificata da un incremento predefinito.  
  
-   La posizione può essere modificata da una quantità arbitraria.  
  
-   Su un valore specifico, è possibile modificare la posizione.  
  
### <a name="to-change-the-position-by-a-preset-amount"></a>Per modificare la posizione di un valore predefinito  
  
1.  Utilizzare il [SetStep](../mfc/reference/cprogressctrl-class.md#setstep) funzione membro per impostare la quantità di incremento. Per impostazione predefinita, questo valore è 10. In genere, questo valore è impostato come una delle impostazioni iniziali per il controllo. Il valore di incremento può essere negativo.  
  
2.  Utilizzare il [StepIt](../mfc/reference/cprogressctrl-class.md#stepit) funzione membro per incrementare la posizione. In questo modo il controllo venga ricreato.  
  
    > [!NOTE]
    >  `StepIt` comporterà il ritorno a capo. Ad esempio, dato un intervallo di 1 -100, un passaggio di 20 e una posizione di 90, `StepIt` imposterà la posizione a 10.  
  
### <a name="to-change-the-position-by-an-arbitrary-amount"></a>Per modificare la posizione da una quantità arbitraria  
  
1.  Utilizzare il [OffsetPos](../mfc/reference/cprogressctrl-class.md#offsetpos) funzione membro per modificare la posizione. `OffsetPos` accetta i valori negativi.  
  
    > [!NOTE]
    >  `OffsetPos`, a differenza di `StepIt`, la posizione non andrà a capo. La nuova posizione viene adattata in modo che all'interno dell'intervallo.  
  
### <a name="to-change-the-position-to-a-specific-value"></a>Per modificare la posizione su un valore specifico  
  
1.  Utilizzare il [funzione membro SetPos](../mfc/reference/cprogressctrl-class.md#setpos) funzione membro per impostare la posizione su un valore specifico. Se necessario, la nuova posizione viene regolata all'interno dell'intervallo.  
  
 In genere, il controllo dello stato viene utilizzato esclusivamente per l'output. Per ottenere la posizione corrente senza specificare un nuovo valore, utilizzare [GetPos](../mfc/reference/cprogressctrl-class.md#getpos).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CProgressCtrl](../mfc/using-cprogressctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

