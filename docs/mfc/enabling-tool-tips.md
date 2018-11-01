---
title: Abilitazione di descrizioni comandi
ms.date: 11/04/2016
helpviewer_keywords:
- initializing tool tips [MFC]
- enabling tool tips [MFC]
- tool tips [MFC], initializing
- tool tips [MFC], enabling
ms.assetid: 06b7c889-7722-4ce6-8b88-9efa50fe6369
ms.openlocfilehash: 270eb8bad03679cd6e605e3279c0e4ffc499a765
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50571146"
---
# <a name="enabling-tool-tips"></a>Abilitazione di descrizioni comandi

È possibile abilitare il supporto della descrizione comandi per i controlli figlio di una finestra (quali i controlli in una visualizzazione form o in una finestra di dialogo).

### <a name="to-enable-tool-tips-for-the-child-controls-of-a-window"></a>Per abilitare le descrizioni comandi per i controlli figlio di una finestra

1. Chiamare `EnableToolTips` per la finestra per la quale si desidera fornire le descrizioni comandi.

1. Specificare una stringa per ogni controllo nel [notifica TTN_NEEDTEXT](../mfc/handling-ttn-needtext-notification-for-tool-tips.md) gestore. Il gestore è nella mappa messaggi della finestra che contiene i controlli figlio (ad esempio, la classe di visualizzazione form). Questo gestore deve chiamare una funzione che identifica il controllo e imposta **pszText** per specificare il testo utilizzato per il controllo descrizione comando.

## <a name="see-also"></a>Vedere anche

[Descrizioni comandi in Windows non derivate da CFrameWnd](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md)

