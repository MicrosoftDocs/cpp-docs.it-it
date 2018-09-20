---
title: Metodi di creazione di descrizioni comandi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CToolTipCtrl class [MFC], creating tool tips
- tool tips [MFC], tool tip controls
- tool tips [MFC], creating
ms.assetid: b015e9f4-ddfb-49a4-a5a6-fa2d45e4d328
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 16b96228bd2f101e30605e555dbbc75b0dff78c3
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46374013"
---
# <a name="methods-of-creating-tool-tips"></a>Metodi di creazione di descrizioni comandi

MFC fornisce tre classi per creare e gestire lo strumento di controllo ToolTip: [CWnd](../mfc/reference/cwnd-class.md), [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md), [CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md) e [CMFCToolTipCtrl](../mfc/reference/cmfctooltipctrl-class.md). Le funzioni membro suggerimento dello strumento in queste classi di eseguire il wrapping di controlli comuni di Windows API. Classe `CToolBarCtrl` e la classe `CToolTipCtrl` derivano dalla classe `CWnd`.

`CWnd` fornisce quattro funzioni membro per creare e gestire le descrizioni comandi: [EnableToolTips](../mfc/reference/cwnd-class.md#enabletooltips), [CancelToolTips](../mfc/reference/cwnd-class.md#canceltooltips), [FilterToolTipMessage](../mfc/reference/cwnd-class.md#filtertooltipmessage), e [OnToolHitTest ](../mfc/reference/cwnd-class.md#ontoolhittest). Vedere le singole funzioni membro per altre informazioni sull'implementazione delle descrizioni comandi.

Se si crea una barra degli strumenti utilizzando `CToolBarCtrl`, è possibile implementare descrizioni comandi per la barra degli strumenti usano direttamente le funzioni membro seguenti: [GetToolTips](../mfc/reference/ctoolbarctrl-class.md#gettooltips) e [SetToolTips](../mfc/reference/ctoolbarctrl-class.md#settooltips). Vedere le singole funzioni membro e [suggerimento dello strumento Gestione delle notifiche](../mfc/handling-tool-tip-notifications.md) per altre informazioni sull'implementazione delle descrizioni comandi.

Il `CToolTipCtrl` classe fornisce la funzionalità di controllo Windows comune descrizione comandi. Un singolo controllo descrizione comandi può fornire informazioni per più di uno strumento. Uno strumento è una finestra, ad esempio una finestra figlia di controllo o un'area rettangolare definita dall'applicazione all'interno dell'area client. Il [CMFCToolTipCtrl](../mfc/reference/cmfctooltipctrl-class.md) deriva dalla classe `CToolTipCtrl` e fornisce funzionalità e gli stili visivi aggiuntivi.

## <a name="see-also"></a>Vedere anche

[Uso di CToolTipCtrl](../mfc/using-ctooltipctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

