---
title: Tasti di scelta rapida specifici di thread
ms.date: 11/04/2016
helpviewer_keywords:
- CHotKeyCtrl class [MFC], thread-specific hot keys
- keyboard shortcuts [MFC], hot keys
- threading [MFC], hot keys in CHotKeyCtrl
- access keys [MFC], hot keys
ms.assetid: b6021274-1498-483f-bcbf-ba5723547cc8
ms.openlocfilehash: 49bac6ac357924c26f131bbd8e1092cd74514167
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69511146"
---
# <a name="thread-specific-hot-keys"></a>Tasti di scelta rapida specifici di thread

Un'applicazione imposta un tasto di scelta rapida specifico per il thread ([CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)) tramite `RegisterHotKey` la funzione di Windows. Quando l'utente preme un tasto di scelta rapida specifico del thread, Windows invia un messaggio [WM_HOTKEY](/windows/win32/inputdev/wm-hotkey) all'inizio della coda di messaggi di un thread specifico. Il messaggio WM_HOTKEY contiene il codice della chiave virtuale, lo stato di spostamento e l'ID definito dall'utente del tasto di scelta rapida specifico che è stato premuto. Per un elenco di codici chiave virtuali standard, vedere Winuser. h. Per ulteriori informazioni su questo metodo, vedere [RegisterHotKey](/windows/win32/api/winuser/nf-winuser-registerhotkey).

Si noti che i flag di stato di spostamento usati nella `RegisterHotKey` chiamata a non corrispondono a quelli restituiti dalla funzione membro [GetHotKey](../mfc/reference/chotkeyctrl-class.md#gethotkey) . sarà necessario tradurre questi flag prima di chiamare `RegisterHotKey`.

## <a name="see-also"></a>Vedere anche

[Uso di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
