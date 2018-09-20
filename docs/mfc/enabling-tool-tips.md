---
title: Abilitazione di descrizioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- initializing tool tips [MFC]
- enabling tool tips [MFC]
- tool tips [MFC], initializing
- tool tips [MFC], enabling
ms.assetid: 06b7c889-7722-4ce6-8b88-9efa50fe6369
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 968d31b49c6d2b2fe5a5f69e04f58f17de8df5a2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46440485"
---
# <a name="enabling-tool-tips"></a>Abilitazione di descrizioni comandi

È possibile abilitare il supporto della descrizione comandi per i controlli figlio di una finestra (quali i controlli in una visualizzazione form o in una finestra di dialogo).

### <a name="to-enable-tool-tips-for-the-child-controls-of-a-window"></a>Per abilitare le descrizioni comandi per i controlli figlio di una finestra

1. Chiamare `EnableToolTips` per la finestra per la quale si desidera fornire le descrizioni comandi.

1. Specificare una stringa per ogni controllo nel [notifica TTN_NEEDTEXT](../mfc/handling-ttn-needtext-notification-for-tool-tips.md) gestore. Il gestore è nella mappa messaggi della finestra che contiene i controlli figlio (ad esempio, la classe di visualizzazione form). Questo gestore deve chiamare una funzione che identifica il controllo e imposta **pszText** per specificare il testo utilizzato per il controllo descrizione comando.

## <a name="see-also"></a>Vedere anche

[Descrizioni comandi in Windows non derivate da CFrameWnd](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md)

