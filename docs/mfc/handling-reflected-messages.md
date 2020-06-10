---
title: Gestione di messaggi riprodotti
ms.date: 11/04/2016
helpviewer_keywords:
- message handling [MFC], reflected messages
- reflected messages, handling
ms.assetid: 147a4e0c-51cc-4447-a8e1-c28b4cece578
ms.openlocfilehash: 8907b432cf4dabad33c0925b841f65dfc57c6295
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84620146"
---
# <a name="handling-reflected-messages"></a>Gestione di messaggi riprodotti

La reflection del messaggio consente di gestire i messaggi per un controllo, ad esempio **WM_CTLCOLOR**, **WM_COMMAND**e **WM_NOTIFY**, all'interno del controllo stesso. Questo rende il controllo più autonomo e portatile. Il meccanismo funziona con i controlli comuni di Windows, nonché con i controlli ActiveX, precedentemente denominati controlli OLE.

La reflection di messaggio consente di riutilizzare più facilmente le classi derivate da `CWnd`. La reflection del messaggio funziona tramite [CWnd:: OnChildNotify](reference/cwnd-class.md#onchildnotify), utilizzando voci speciali della mappa messaggi **ON_XXX_REFLECT** : ad esempio **ON_CTLCOLOR_REFLECT** e **ON_CONTROL_REFLECT**. La [Nota tecnica 62](tn062-message-reflection-for-windows-controls.md) illustra in modo più dettagliato la reflection del messaggio.

## <a name="what-do-you-want-to-do"></a>Cosa si vuole fare

- [Ulteriori informazioni sulla reflection di messaggio](tn062-message-reflection-for-windows-controls.md)

- [Implementare la reflection di messaggio per un controllo comune](tn062-message-reflection-for-windows-controls.md)

- [Implementare la reflection di messaggio per un controllo ActiveX](mfc-activex-controls-subclassing-a-windows-control.md)

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di funzioni gestore messaggi](declaring-message-handler-functions.md)
