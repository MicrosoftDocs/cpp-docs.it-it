---
title: Tasti di scelta rapida specifici di thread | Documenti Microsoft
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
- CHotKeyCtrl class [MFC], thread-specific hot keys
- keyboard shortcuts [MFC], hot keys
- threading [MFC], hot keys in CHotKeyCtrl
- access keys [MFC], hot keys
ms.assetid: b6021274-1498-483f-bcbf-ba5723547cc8
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 89c6ae27dacf5b8637c914c92b6805b1cc405353
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="thread-specific-hot-keys"></a>Tasti di scelta rapida specifici di thread
Un'applicazione imposta un tasto di scelta rapida specifici di thread ([CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)) con Windows **RegisterHotKey** (funzione). Quando l'utente preme un tasto di scelta rapida specifici di thread, Windows invia una [WM_HOTKEY](http://msdn.microsoft.com/library/windows/desktop/ms646279) messaggio all'inizio della coda di messaggi di un particolare thread. Il **WM_HOTKEY** messaggio contiene il codice tasto virtuale, lo stato e ID definiti dall'utente del tasto di scelta specifico che è stato premuto. Per un elenco di codici di tasti virtuali standard, vedere winuser. h. Per ulteriori informazioni su questo metodo, vedere [RegisterHotKey](http://msdn.microsoft.com/library/windows/desktop/ms646309).  
  
 Si noti che lo stato di spostamento flag utilizzato nella chiamata a **RegisterHotKey** non sono uguali a quelli restituiti dal [GetHotKey](../mfc/reference/chotkeyctrl-class.md#gethotkey) funzione membro; è necessario convertire i flag prima di chiamare **RegisterHotKey**.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

