---
title: Impostazione di un tasto di scelta rapida
ms.date: 11/04/2016
helpviewer_keywords:
- keyboard shortcuts [MFC], hot keys
- access keys [MFC], hot keys
- CHotKeyCtrl class [MFC], setting hot key
ms.assetid: 6f3bc141-e346-4dce-9ca7-3e6b2c453f3f
ms.openlocfilehash: a5dc885767137a4e53d1ea0d066944d5f276c38c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50508797"
---
# <a name="setting-a-hot-key"></a>Impostazione di un tasto di scelta rapida

L'applicazione può usare le informazioni fornite da un tasto di scelta rapida ([CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)) controllo in uno dei due modi:

- Configurare un tasto di scelta rapida globale per l'attivazione di una finestra non figlio mediante l'invio di un [messaggio WM_SETHOTKEY](/windows/desktop/inputdev/wm-sethotkey) messaggio nella finestra di attivazione.

- Configurare un tasto di scelta rapida specifici di thread chiamando la funzione di Windows [RegisterHotKey](https://msdn.microsoft.com/library/windows/desktop/ms646309).

## <a name="see-also"></a>Vedere anche

[Uso di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

