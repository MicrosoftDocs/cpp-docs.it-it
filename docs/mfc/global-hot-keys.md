---
description: 'Altre informazioni su: tasti di scelta rapida globali'
title: Tasti di scelta rapida globali
ms.date: 11/04/2016
helpviewer_keywords:
- keyboard shortcuts [MFC], hot keys
- CHotKeyCtrl class [MFC], global hot keys
- access keys [MFC], hot keys
- global hot keys [MFC]
ms.assetid: e0b95d14-c571-4c9a-9cd1-e7fc1f0e278d
ms.openlocfilehash: 3d481c637ec20ed7b9ec3f45a916bd39470ffb5e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97189275"
---
# <a name="global-hot-keys"></a>Tasti di scelta rapida globali

Un tasto di scelta rapida globale è associato a una particolare finestra non figlio. Consente all'utente di attivare la finestra da qualsiasi parte del sistema. Un'applicazione imposta un tasto di scelta rapida globale per una particolare finestra inviando il messaggio di [WM_SETHOTKEY](/windows/win32/inputdev/wm-sethotkey) a tale finestra. Se, ad esempio, `m_HotKeyCtrl` è l'oggetto [CHotKeyCtrl](reference/chotkeyctrl-class.md) e `pMainWnd` è un puntatore alla finestra da attivare quando viene premuto il tasto di scelta, è possibile usare il codice seguente per associare il tasto di scelta rapida specificato nel controllo con la finestra a cui punta `pMainWnd` .

[!code-cpp[NVC_MFCControlLadenDialog#18](codesnippet/cpp/global-hot-keys_1.cpp)]

Ogni volta che l'utente preme un tasto di scelta rapida globale, la finestra specificata riceve un messaggio di [WM_SYSCOMMAND](/windows/win32/menurc/wm-syscommand) che specifica **SC_HOTKEY** come tipo di comando. Questo messaggio attiva anche la finestra che lo riceve. Poiché questo messaggio non include informazioni sulla chiave esatta che è stata premuta, l'utilizzo di questo metodo non consente la distinzione tra tasti di scelta rapida diversi che possono essere collegati alla stessa finestra. Il tasto di scelta rimane valido fino a quando l'applicazione che ha inviato **WM_SETHOTKEY** non viene chiusa.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CHotKeyCtrl](using-chotkeyctrl.md)<br/>
[Controlli](controls-mfc.md)
