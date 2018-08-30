---
title: Tasti di scelta rapida specifici di thread | Microsoft Docs
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
ms.openlocfilehash: f480b293e9c57e7fa189c6427ab39147681cfdaf
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43206860"
---
# <a name="thread-specific-hot-keys"></a>Tasti di scelta rapida specifici di thread
Un'applicazione imposta un tasto di scelta rapida specifici di thread ([CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)) utilizzando il Windows `RegisterHotKey` (funzione). Quando l'utente preme un tasto di scelta rapida specifici di thread, Windows invia un [WM_HOTKEY](/windows/desktop/inputdev/wm-hotkey) messaggio all'inizio della coda di messaggi di un thread specifico. Il messaggio WM_HOTKEY contiene il codice tasto virtuale, stato di spostamento e definite dall'utente di ID del tasto di scelta specifico che è stato premuto. Per un elenco di codici di tasti virtuali standard, vedere winuser. h. Per altre informazioni su questo metodo, vedere [RegisterHotKey](https://msdn.microsoft.com/library/windows/desktop/ms646309).  
  
 Si noti che lo stato di spostamento i flag utilizzati nella chiamata a `RegisterHotKey` non sono identici a quelli restituiti dai [GetHotKey](../mfc/reference/chotkeyctrl-class.md#gethotkey) funzione membro; sarà necessario convertire i flag prima di chiamare `RegisterHotKey`.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

