---
title: Tasti di scelta rapida globali
ms.date: 11/04/2016
helpviewer_keywords:
- keyboard shortcuts [MFC], hot keys
- CHotKeyCtrl class [MFC], global hot keys
- access keys [MFC], hot keys
- global hot keys [MFC]
ms.assetid: e0b95d14-c571-4c9a-9cd1-e7fc1f0e278d
ms.openlocfilehash: 4cafee311f71d8165380b3fb7e192e7032b7941c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50529935"
---
# <a name="global-hot-keys"></a>Tasti di scelta rapida globali

Un tasto di scelta rapida globale è associato a una finestra non figlio specifico. Consente all'utente di attivare la finestra da qualsiasi parte del sistema. Un'applicazione imposta un tasto di scelta rapida globale per una particolare finestra inviando il [messaggio WM_SETHOTKEY](/windows/desktop/inputdev/wm-sethotkey) alla finestra di messaggio. Ad esempio, se `m_HotKeyCtrl` è il [CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md) oggetto e `pMainWnd` è un puntatore alla finestra da attivare quando viene premuto il tasto di scelta rapida, è possibile usare il codice seguente per associare il tasto di scelta rapida specificato nel controllo con la finestra a cui punta `pMainWnd`.

[!code-cpp[NVC_MFCControlLadenDialog#18](../mfc/codesnippet/cpp/global-hot-keys_1.cpp)]

Ogni volta che l'utente preme un tasto di scelta rapida globale, la finestra specificata riceve un [WM_SYSCOMMAND](/windows/desktop/menurc/wm-syscommand) messaggio che specifica **SC_HOTKEY** come tipo di comando. Questo messaggio viene inoltre attivata la finestra che lo riceve. Poiché questo messaggio include le informazioni sulla chiave esatta che è stata premuta, utilizzando questo metodo non consente di distinguere tra diversi tasti di scelta rapida che possono essere collegati alla stessa finestra. Il tasto di scelta rapida rimane valido finché l'applicazione che ha inviato **messaggio WM_SETHOTKEY** viene chiuso.

## <a name="see-also"></a>Vedere anche

[Uso di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

