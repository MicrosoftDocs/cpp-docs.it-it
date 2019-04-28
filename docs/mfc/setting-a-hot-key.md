---
title: Impostazione di un tasto di scelta rapida
ms.date: 11/04/2016
helpviewer_keywords:
- keyboard shortcuts [MFC], hot keys
- access keys [MFC], hot keys
- CHotKeyCtrl class [MFC], setting hot key
ms.assetid: 6f3bc141-e346-4dce-9ca7-3e6b2c453f3f
ms.openlocfilehash: a77aad4881acd04c6dabb6dce90acc01be2cfbc8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62307783"
---
# <a name="setting-a-hot-key"></a>Impostazione di un tasto di scelta rapida

L'applicazione può usare le informazioni fornite da un tasto di scelta rapida ([CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)) controllo in uno dei due modi:

- Configurare un tasto di scelta rapida globale per l'attivazione di una finestra non figlio mediante l'invio di un [messaggio WM_SETHOTKEY](/windows/desktop/inputdev/wm-sethotkey) messaggio nella finestra di attivazione.

- Configurare un tasto di scelta rapida specifici di thread chiamando la funzione di Windows [RegisterHotKey](/windows/desktop/api/winuser/nf-winuser-registerhotkey).

## <a name="see-also"></a>Vedere anche

[Uso di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
