---
title: Metodi di creazione di descrizioni comandi
ms.date: 11/04/2016
helpviewer_keywords:
- CToolTipCtrl class [MFC], creating tool tips
- tool tips [MFC], tool tip controls
- tool tips [MFC], creating
ms.assetid: b015e9f4-ddfb-49a4-a5a6-fa2d45e4d328
ms.openlocfilehash: 2ba935f52f24f62dded3b89df1563454cf7e0335
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57276715"
---
# <a name="methods-of-creating-tool-tips"></a>Metodi di creazione di descrizioni comandi

MFC fornisce tre classi per creare e gestire il controllo descrizione comando: [CWnd](../mfc/reference/cwnd-class.md), [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md), [CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md) e [CMFCToolTipCtrl](../mfc/reference/cmfctooltipctrl-class.md). Le funzioni membro suggerimento dello strumento in queste classi di eseguire il wrapping di controlli comuni di Windows API. Classe `CToolBarCtrl` e la classe `CToolTipCtrl` derivano dalla classe `CWnd`.

`CWnd` fornisce quattro funzioni membro per creare e gestire le descrizioni comandi: [EnableToolTips](../mfc/reference/cwnd-class.md#enabletooltips), [CancelToolTips](../mfc/reference/cwnd-class.md#canceltooltips), [FilterToolTipMessage](../mfc/reference/cwnd-class.md#filtertooltipmessage), e [OnToolHitTest](../mfc/reference/cwnd-class.md#ontoolhittest). Vedere le singole funzioni membro per altre informazioni sull'implementazione delle descrizioni comandi.

Se si crea una barra degli strumenti utilizzando `CToolBarCtrl`, è possibile implementare descrizioni comandi per la barra degli strumenti usano direttamente le funzioni membro seguenti: [GetToolTips](../mfc/reference/ctoolbarctrl-class.md#gettooltips) e [SetToolTips](../mfc/reference/ctoolbarctrl-class.md#settooltips). Vedere le singole funzioni membro e [suggerimento dello strumento Gestione delle notifiche](../mfc/handling-tool-tip-notifications.md) per altre informazioni sull'implementazione delle descrizioni comandi.

Il `CToolTipCtrl` classe fornisce la funzionalità di controllo Windows comune descrizione comandi. Un singolo controllo descrizione comandi può fornire informazioni per più di uno strumento. Uno strumento è una finestra, ad esempio una finestra figlia di controllo o un'area rettangolare definita dall'applicazione all'interno dell'area client. Il [CMFCToolTipCtrl](../mfc/reference/cmfctooltipctrl-class.md) deriva dalla classe `CToolTipCtrl` e fornisce funzionalità e gli stili visivi aggiuntivi.

## <a name="see-also"></a>Vedere anche

[Uso di CToolTipCtrl](../mfc/using-ctooltipctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
