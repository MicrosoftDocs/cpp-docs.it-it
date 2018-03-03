---
title: Aggiunta di schede a un controllo struttura a schede | Documenti Microsoft
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
- tab controls [MFC], adding tabs
- putting tabs on CTabCtrls [MFC]
- CTabCtrl class [MFC], adding tabs
- tabs [MFC], adding to CTabCtrl class [MFC]
ms.assetid: 7f3d9340-e3c7-4c71-9912-be57534ecc78
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 46012a265c1ecefa7af63f829be22e6132e036cb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="adding-tabs-to-a-tab-control"></a>Aggiunta di schede a un controllo Tab
Dopo la creazione del controllo tab ([CTabCtrl](../mfc/reference/ctabctrl-class.md)), aggiungere le schede in base alle esigenze.  
  
### <a name="to-add-a-tab-item"></a>Per aggiungere un elemento di scheda  
  
1.  Preparare un [TCITEM](http://msdn.microsoft.com/library/windows/desktop/bb760554) struttura.  
  
2.  Chiamare [CTabCtrl:: InsertItem](../mfc/reference/ctabctrl-class.md#insertitem), passando la struttura.  
  
3.  Ripetere i passaggi 1 e 2 per gli elementi aggiuntivi della scheda.  
  
 Per ulteriori informazioni, vedere [la creazione di un controllo struttura a schede](http://msdn.microsoft.com/library/windows/desktop/bb760550) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTabCtrl](../mfc/using-ctabctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

