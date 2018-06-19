---
title: Abilitazione di descrizioni comandi | Documenti Microsoft
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
ms.openlocfilehash: 598583360eca2a65a5352fc9d284d8d359ac021c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33346136"
---
# <a name="enabling-tool-tips"></a>Abilitazione di descrizioni comandi
È possibile abilitare il supporto della descrizione comandi per i controlli figlio di una finestra (quali i controlli in una visualizzazione form o in una finestra di dialogo).  
  
### <a name="to-enable-tool-tips-for-the-child-controls-of-a-window"></a>Per abilitare le descrizioni comandi per i controlli figlio di una finestra  
  
1.  Chiamare `EnableToolTips` per la finestra per la quale si desidera fornire le descrizioni comandi.  
  
2.  Specificare una stringa per ogni controllo del [della notifica TTN_NEEDTEXT](../mfc/handling-ttn-needtext-notification-for-tool-tips.md) gestore. Il gestore è nella mappa messaggi della finestra che contiene i controlli figlio (ad esempio, la classe di visualizzazione form). Questo gestore deve chiamare una funzione che identifica il controllo e imposta **pszText** per specificare il testo utilizzato per il controllo descrizione comandi.  
  
## <a name="see-also"></a>Vedere anche  
 [Descrizioni comandi in Windows non derivate da CFrameWnd](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md)

