---
title: L'impostazione di un tasto di scelta rapida | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- keyboard shortcuts [MFC], hot keys
- access keys [MFC], hot keys
- CHotKeyCtrl class [MFC], setting hot key
ms.assetid: 6f3bc141-e346-4dce-9ca7-3e6b2c453f3f
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9cd52fca8415196fc1393cc49fe7830f6ca2cfd1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="setting-a-hot-key"></a>Impostazione di un tasto di scelta rapida
L'applicazione può utilizzare le informazioni fornite da un tasto di scelta rapida ([CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)) controllo in uno dei due modi:  
  
-   Impostare un tasto di scelta rapida globale per l'attivazione di una finestra non figlio inviando un [messaggio WM_SETHOTKEY](http://msdn.microsoft.com/library/windows/desktop/ms646284) messaggio nella finestra di attivazione.  
  
-   Impostare un tasto di scelta rapida specifici di thread chiamando la funzione Windows [RegisterHotKey](http://msdn.microsoft.com/library/windows/desktop/ms646309).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

