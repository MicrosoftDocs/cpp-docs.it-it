---
title: Tasti di scelta rapida globali | Documenti Microsoft
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
- CHotKeyCtrl class [MFC], global hot keys
- access keys [MFC], hot keys
- global hot keys [MFC]
ms.assetid: e0b95d14-c571-4c9a-9cd1-e7fc1f0e278d
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 82297507d8725e6292def759272f48d0d63e84b8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="global-hot-keys"></a>Tasti di scelta rapida globali
Un tasto di scelta rapida globale è associato a una finestra non figlio specifico. Consente all'utente di attivare la finestra di qualsiasi parte del sistema. Un'applicazione imposta un tasto di scelta rapida globale per una particolare finestra inviando il [messaggio WM_SETHOTKEY](http://msdn.microsoft.com/library/windows/desktop/ms646284) messaggio alla finestra. Ad esempio, se `m_HotKeyCtrl` è il [CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md) oggetto e `pMainWnd` è un puntatore alla finestra venga attivato quando viene premuto il tasto di scelta rapida, è possibile utilizzare il codice seguente per associare il tasto di scelta specificato nel controllo con la finestra a cui puntava `pMainWnd`.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#18](../mfc/codesnippet/cpp/global-hot-keys_1.cpp)]  
  
 Ogni volta che l'utente preme un tasto di scelta rapida globale, la finestra specificata riceve un [WM_SYSCOMMAND](http://msdn.microsoft.com/library/windows/desktop/ms646360) messaggio che specifica **SC_HOTKEY** come il tipo del comando. Questo messaggio viene inoltre attivata la finestra che riceve. Poiché questo messaggio non include le informazioni sulla chiave esatta che è stata premuta, questo metodo consente di distinguere tra diversi tasti di scelta rapida che possono essere collegati alla stessa finestra. Il tasto di scelta rimane valido fino a quando l'applicazione che ha inviato **messaggio WM_SETHOTKEY** viene chiuso.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

