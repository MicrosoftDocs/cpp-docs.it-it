---
title: Impostazione di un tasto di scelta rapida
ms.date: 11/04/2016
helpviewer_keywords:
- keyboard shortcuts [MFC], hot keys
- access keys [MFC], hot keys
- CHotKeyCtrl class [MFC], setting hot key
ms.assetid: 6f3bc141-e346-4dce-9ca7-3e6b2c453f3f
ms.openlocfilehash: 7b49f24039b130f74693e7567f5287476126f225
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69511213"
---
# <a name="setting-a-hot-key"></a>Impostazione di un tasto di scelta rapida

L'applicazione può utilizzare le informazioni fornite da un controllo[CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)(Hot Key) in uno dei due modi seguenti:

- Impostare un tasto di scelta rapida globale per l'attivazione di una finestra non figlio inviando un messaggio [WM_SETHOTKEY](/windows/win32/inputdev/wm-sethotkey) alla finestra da attivare.

- Configurare un tasto di scelta rapida specifico del thread chiamando la funzione di Windows [RegisterHotKey](/windows/win32/api/winuser/nf-winuser-registerhotkey).

## <a name="see-also"></a>Vedere anche

[Uso di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
