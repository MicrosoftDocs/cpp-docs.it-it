---
title: Inizializzazione delle parti di un oggetto CStatusBarCtrl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CStatusBarCtrl
dev_langs: C++
helpviewer_keywords:
- CStatusBarCtrl class [MFC], simple mode
- status bars [MFC], declaring parts of
- simple status bars [MFC]
- status bars [MFC], icons
- status bars [MFC], simple mode
- icons, using in status bars
- CStatusBarCtrl class [MFC], declaring parts of
ms.assetid: 60e8f285-d2d8-424a-a6ea-2fc548370303
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b713a46db13508df5ba80b21e3dfe938261eec65
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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

