---
title: Tasti di scelta rapida specifici di thread
ms.date: 11/04/2016
helpviewer_keywords:
- CHotKeyCtrl class [MFC], thread-specific hot keys
- keyboard shortcuts [MFC], hot keys
- threading [MFC], hot keys in CHotKeyCtrl
- access keys [MFC], hot keys
ms.assetid: b6021274-1498-483f-bcbf-ba5723547cc8
ms.openlocfilehash: a54aa878b0160132157879127f8335c951e91785
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57290989"
---
# <a name="thread-specific-hot-keys"></a>Tasti di scelta rapida specifici di thread

Un'applicazione imposta un tasto di scelta rapida specifici di thread ([CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)) utilizzando il Windows `RegisterHotKey` (funzione). Quando l'utente preme un tasto di scelta rapida specifici di thread, Windows invia un [WM_HOTKEY](/windows/desktop/inputdev/wm-hotkey) messaggio all'inizio della coda di messaggi di un thread specifico. Il messaggio WM_HOTKEY contiene il codice tasto virtuale, stato di spostamento e definite dall'utente di ID del tasto di scelta specifico che è stato premuto. Per un elenco di codici di tasti virtuali standard, vedere winuser. h. Per altre informazioni su questo metodo, vedere [RegisterHotKey](/windows/desktop/api/winuser/nf-winuser-registerhotkey).

Si noti che lo stato di spostamento i flag utilizzati nella chiamata a `RegisterHotKey` non sono identici a quelli restituiti dai [GetHotKey](../mfc/reference/chotkeyctrl-class.md#gethotkey) funzione membro; sarà necessario convertire i flag prima di chiamare `RegisterHotKey`.

## <a name="see-also"></a>Vedere anche

[Uso di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
