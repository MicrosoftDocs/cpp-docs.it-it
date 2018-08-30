---
title: Aggiunta di elementi al controllo Header | Microsoft Docs
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
ms.openlocfilehash: a6450d99b8df436c64337e52fc14244ecbb0edfc
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43206147"
---
# <a name="adding-items-to-the-header-control"></a>Aggiunta di elementi al controllo Header
Dopo aver creato il controllo intestazione ([CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)) nella finestra padre, aggiungere tanti "elementi di intestazione" necessari: in genere uno per ogni colonna.  
  
### <a name="to-add-a-header-item"></a>Per aggiungere una voce di intestazione  
  
1.  Preparare un' [HD_ITEM](/windows/desktop/api/commctrl/ns-commctrl-_hd_itema) struttura.  
  
2.  Chiamare [CHeaderCtrl:: InsertItem](../mfc/reference/cheaderctrl-class.md#insertitem), passando la struttura.  
  
3.  Ripetere i passaggi 1 e 2 per aggiungere altri elementi.  
  
 Per altre informazioni, vedere [aggiunta di un elemento a un controllo intestazione](/windows/desktop/Controls/header-controls) nel SDK di Windows.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

