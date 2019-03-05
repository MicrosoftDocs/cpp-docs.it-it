---
title: Gestione di messaggi riprodotti
ms.date: 11/04/2016
helpviewer_keywords:
- message handling [MFC], reflected messages
- reflected messages, handling
ms.assetid: 147a4e0c-51cc-4447-a8e1-c28b4cece578
ms.openlocfilehash: 973e8cff24eca37b1806207d081636f0d1b38365
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57275376"
---
# <a name="handling-reflected-messages"></a>Gestione di messaggi riprodotti

Messaggio reflection consente di gestire i messaggi per un controllo, ad esempio **WM_CTLCOLOR**, **WM_COMMAND**, e **WM_NOTIFY**, all'interno del controllo stesso. Questo rende il controllo più autonomo e portatile. Il meccanismo funziona con i controlli comuni di Windows, nonché con i controlli ActiveX, precedentemente denominati controlli OLE.

La reflection di messaggio consente di riutilizzare più facilmente le classi derivate da `CWnd`. Reflection di messaggio funziona attraverso [CWnd:: OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify), con speciali **ON_XXX_REFLECT** voci della mappa messaggi: ad esempio **ON_CTLCOLOR_REFLECT** e**ON_CONTROL_REFLECT**. [Nota tecnica 62](../mfc/tn062-message-reflection-for-windows-controls.md) spiega la reflection di messaggio in modo più dettagliato.

## <a name="what-do-you-want-to-do"></a>Ciò che si desidera eseguire

- [Altre informazioni sulla reflection di messaggio](../mfc/tn062-message-reflection-for-windows-controls.md)

- [Implementare la reflection di messaggio per un controllo comune](../mfc/tn062-message-reflection-for-windows-controls.md)

- [Implementare la reflection di messaggio per un controllo ActiveX](../mfc/mfc-activex-controls-subclassing-a-windows-control.md)

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di funzioni gestore messaggi](../mfc/declaring-message-handler-functions.md)
