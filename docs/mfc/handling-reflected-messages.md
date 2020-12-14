---
description: 'Altre informazioni su: gestione dei messaggi riflessi'
title: Gestione di messaggi riprodotti
ms.date: 11/04/2016
helpviewer_keywords:
- message handling [MFC], reflected messages
- reflected messages, handling
ms.assetid: 147a4e0c-51cc-4447-a8e1-c28b4cece578
ms.openlocfilehash: 4093c2feaa263470bc07df6feec32b12fea01542
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97254911"
---
# <a name="handling-reflected-messages"></a>Gestione di messaggi riprodotti

La reflection del messaggio consente di gestire i messaggi per un controllo, ad esempio **WM_CTLCOLOR**, **WM_COMMAND** e **WM_NOTIFY**, all'interno del controllo stesso. Questo rende il controllo più autonomo e portatile. Il meccanismo funziona con i controlli comuni di Windows, nonché con i controlli ActiveX, precedentemente denominati controlli OLE.

La reflection di messaggio consente di riutilizzare più facilmente le classi derivate da `CWnd`. La reflection del messaggio funziona tramite [CWnd:: OnChildNotify](reference/cwnd-class.md#onchildnotify), utilizzando voci speciali della mappa messaggi **ON_XXX_REFLECT** : ad esempio **ON_CTLCOLOR_REFLECT** e **ON_CONTROL_REFLECT**. La [Nota tecnica 62](tn062-message-reflection-for-windows-controls.md) illustra in modo più dettagliato la reflection del messaggio.

## <a name="what-do-you-want-to-do"></a>Cosa si vuole fare

- [Ulteriori informazioni sulla reflection di messaggio](tn062-message-reflection-for-windows-controls.md)

- [Implementare la reflection di messaggio per un controllo comune](tn062-message-reflection-for-windows-controls.md)

- [Implementare la reflection di messaggio per un controllo ActiveX](mfc-activex-controls-subclassing-a-windows-control.md)

## <a name="see-also"></a>Vedi anche

[Dichiarazione delle funzioni del gestore di messaggi](declaring-message-handler-functions.md)
