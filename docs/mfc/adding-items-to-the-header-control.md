---
title: Aggiunta di elementi al controllo Header | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- controls [MFC], header
- CHeaderCtrl class [MFC], adding items
- header controls [MFC], adding items to
ms.assetid: 2e9a28b1-7302-4a93-8037-c5a4183e589a
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 792c956d73808ef50308f8e14066f74021cc84b8
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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

