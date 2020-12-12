---
description: 'Altre informazioni su: impostazione di un tasto di scelta'
title: Impostazione di un tasto di scelta rapida
ms.date: 11/04/2016
helpviewer_keywords:
- keyboard shortcuts [MFC], hot keys
- access keys [MFC], hot keys
- CHotKeyCtrl class [MFC], setting hot key
ms.assetid: 6f3bc141-e346-4dce-9ca7-3e6b2c453f3f
ms.openlocfilehash: fa713be2d478eb18b11dca27558656e5e6993076
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217185"
---
# <a name="setting-a-hot-key"></a>Impostazione di un tasto di scelta rapida

L'applicazione può utilizzare le informazioni fornite da un controllo[CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)(Hot Key) in uno dei due modi seguenti:

- Impostare un tasto di scelta rapida globale per l'attivazione di una finestra non figlio inviando un messaggio di [WM_SETHOTKEY](/windows/win32/inputdev/wm-sethotkey) alla finestra da attivare.

- Configurare un tasto di scelta rapida specifico del thread chiamando la funzione di Windows [RegisterHotKey](/windows/win32/api/winuser/nf-winuser-registerhotkey).

## <a name="see-also"></a>Vedi anche

[Utilizzo di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
