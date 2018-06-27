---
title: Tasti di scelta rapida specifici di thread | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CHotKeyCtrl class [MFC], thread-specific hot keys
- keyboard shortcuts [MFC], hot keys
- threading [MFC], hot keys in CHotKeyCtrl
- access keys [MFC], hot keys
ms.assetid: b6021274-1498-483f-bcbf-ba5723547cc8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 14da7f0e5b0adbe72b6705700c1e9298751bc345
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36953609"
---
# <a name="thread-specific-hot-keys"></a>Tasti di scelta rapida specifici di thread
Un'applicazione imposta un tasto di scelta rapida specifici di thread ([CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)) tramite le finestre `RegisterHotKey` (funzione). Quando l'utente preme un tasto di scelta rapida specifici di thread, Windows invia una [WM_HOTKEY](http://msdn.microsoft.com/library/windows/desktop/ms646279) messaggio all'inizio della coda di messaggi di un particolare thread. Il messaggio WM_HOTKEY contiene il codice tasto virtuale, stato di spostamento e definiti dall'utente ID del tasto di scelta specifico che è stato premuto. Per un elenco di codici di tasti virtuali standard, vedere winuser. h. Per ulteriori informazioni su questo metodo, vedere [RegisterHotKey](http://msdn.microsoft.com/library/windows/desktop/ms646309).  
  
 Si noti che lo stato di spostamento flag utilizzato nella chiamata a `RegisterHotKey` non corrispondono a quelli restituiti dal [GetHotKey](../mfc/reference/chotkeyctrl-class.md#gethotkey) funzione membro; è necessario convertire questi flag prima di chiamare `RegisterHotKey`.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

