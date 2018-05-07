---
title: Inizializzazione delle parti di un oggetto CStatusBarCtrl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CStatusBarCtrl
dev_langs:
- C++
helpviewer_keywords:
- CStatusBarCtrl class [MFC], simple mode
- status bars [MFC], declaring parts of
- simple status bars [MFC]
- status bars [MFC], icons
- status bars [MFC], simple mode
- icons, using in status bars
- CStatusBarCtrl class [MFC], declaring parts of
ms.assetid: 60e8f285-d2d8-424a-a6ea-2fc548370303
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 89cea1516924530f821003affd96e2848687882b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="initializing-the-parts-of-a-cstatusbarctrl-object"></a>Inizializzazione delle parti di un oggetto CStatusBarCtrl
Per impostazione predefinita, una barra di stato Visualizza informazioni sullo stato usando riquadri separati. Questi riquadri (detto anche parti) possono contenere una stringa di testo, un'icona o entrambi.  
  
 Utilizzare [SetParts](../mfc/reference/cstatusbarctrl-class.md#setparts) avrà per definire il numero di parti e la lunghezza, la barra di stato. Dopo aver creato le parti della barra di stato, effettuare chiamate a [SetText](../mfc/reference/cstatusbarctrl-class.md#settext) e [SetIcon](../mfc/reference/cstatusbarctrl-class.md#seticon) per impostare il testo o icona per una parte specifica della barra di stato. Una volta la parte è stata impostata correttamente, il controllo viene ridisegnato automaticamente.  
  
 Nell'esempio seguente Inizializza un oggetto esistente `CStatusBarCtrl` oggetto (`m_StatusBarCtrl`) con quattro riquadri e quindi imposta un'icona (IDI_ICON1) e il testo nella seconda parte.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#31](../mfc/codesnippet/cpp/initializing-the-parts-of-a-cstatusbarctrl-object_1.cpp)]  
  
 Per ulteriori informazioni sull'impostazione della modalità di un `CStatusBarCtrl` oggetto semplice, vedere [l'impostazione della modalità di un oggetto CStatusBarCtrl](../mfc/setting-the-mode-of-a-cstatusbarctrl-object.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

