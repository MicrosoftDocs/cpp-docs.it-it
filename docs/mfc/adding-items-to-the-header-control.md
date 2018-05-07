---
title: Aggiunta di elementi al controllo Header | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- controls [MFC], header
- CHeaderCtrl class [MFC], adding items
- header controls [MFC], adding items to
ms.assetid: 2e9a28b1-7302-4a93-8037-c5a4183e589a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 69d64265a94df2770e3a234ab992130b4809f9e3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="adding-items-to-the-header-control"></a>Aggiunta di elementi al controllo Header
Dopo aver creato il controllo intestazione ([CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)) nella finestra padre, aggiungere il numero "gli"elementi intestazione è necessario: in genere uno per ogni colonna.  
  
### <a name="to-add-a-header-item"></a>Per aggiungere una voce di intestazione  
  
1.  Preparare un [HD_ITEM](http://msdn.microsoft.com/library/windows/desktop/bb775247) struttura.  
  
2.  Chiamare [CHeaderCtrl:: InsertItem](../mfc/reference/cheaderctrl-class.md#insertitem), passando la struttura.  
  
3.  Ripetere i passaggi 1 e 2 per aggiungere altri elementi.  
  
 Per ulteriori informazioni, vedere [aggiunta di un elemento a un controllo intestazione](http://msdn.microsoft.com/library/windows/desktop/bb775238) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

