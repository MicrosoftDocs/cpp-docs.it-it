---
description: 'Altre informazioni su: Thread-Specific tasti di scelta rapida'
title: Tasti di scelta rapida specifici di thread
ms.date: 11/04/2016
helpviewer_keywords:
- CHotKeyCtrl class [MFC], thread-specific hot keys
- keyboard shortcuts [MFC], hot keys
- threading [MFC], hot keys in CHotKeyCtrl
- access keys [MFC], hot keys
ms.assetid: b6021274-1498-483f-bcbf-ba5723547cc8
ms.openlocfilehash: 352d39b801d7e6dcecfbf27d841d6977d3666138
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216119"
---
# <a name="thread-specific-hot-keys"></a>Tasti di scelta rapida specifici di thread

Un'applicazione imposta un tasto di scelta rapida specifico per il thread ([CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)) tramite la funzione di Windows `RegisterHotKey` . Quando l'utente preme un tasto di scelta rapida specifico del thread, Windows invia un messaggio di [WM_HOTKEY](/windows/win32/inputdev/wm-hotkey) all'inizio della coda di messaggi di un determinato thread. Il messaggio WM_HOTKEY contiene il codice della chiave virtuale, lo stato di spostamento e l'ID definito dall'utente del tasto di scelta rapida specifico che è stato premuto. Per un elenco di codici chiave virtuali standard, vedere Winuser. h. Per ulteriori informazioni su questo metodo, vedere [RegisterHotKey](/windows/win32/api/winuser/nf-winuser-registerhotkey).

Si noti che i flag di stato di spostamento usati nella chiamata a `RegisterHotKey` non corrispondono a quelli restituiti dalla funzione membro [GetHotKey](../mfc/reference/chotkeyctrl-class.md#gethotkey) . sarà necessario tradurre questi flag prima di chiamare `RegisterHotKey` .

## <a name="see-also"></a>Vedi anche

[Utilizzo di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
