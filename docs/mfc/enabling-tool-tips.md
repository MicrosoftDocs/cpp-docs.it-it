---
description: 'Altre informazioni su: abilitazione delle descrizioni comandi'
title: Abilitazione di descrizioni comandi
ms.date: 11/04/2016
helpviewer_keywords:
- initializing tool tips [MFC]
- enabling tool tips [MFC]
- tool tips [MFC], initializing
- tool tips [MFC], enabling
ms.assetid: 06b7c889-7722-4ce6-8b88-9efa50fe6369
ms.openlocfilehash: 677d2cc071e87f62f9bd2e700d8fdba166dfdee7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97290947"
---
# <a name="enabling-tool-tips"></a>Abilitazione di descrizioni comandi

È possibile abilitare il supporto della descrizione comandi per i controlli figlio di una finestra (quali i controlli in una visualizzazione form o in una finestra di dialogo).

### <a name="to-enable-tool-tips-for-the-child-controls-of-a-window"></a>Per abilitare le descrizioni comandi per i controlli figlio di una finestra

1. Chiamare `EnableToolTips` per la finestra per la quale si desidera fornire le descrizioni comandi.

1. Specificare una stringa per ogni controllo nel gestore di [notifiche TTN_NEEDTEXT](handling-ttn-needtext-notification-for-tool-tips.md) . Il gestore è nella mappa messaggi della finestra che contiene i controlli figlio (ad esempio, la classe di visualizzazione form). Questo gestore deve chiamare una funzione che identifica il controllo e imposta **pszText** per specificare il testo utilizzato dal controllo descrizione comando.

## <a name="see-also"></a>Vedi anche

[Descrizioni comandi in Windows non derivate da CFrameWnd](tool-tips-in-windows-not-derived-from-cframewnd.md)
