---
title: Metodi di creazione di descrizioni comandi | Documenti Microsoft
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
ms.openlocfilehash: 26f6e7cbf8c6464afa90c52f9cd91dcdb55de767
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33349532"
---
# <a name="methods-of-creating-tool-tips"></a>Metodi di creazione di descrizioni comandi
MFC fornisce tre classi per creare e gestire lo strumento di controllo ToolTip: [CWnd](../mfc/reference/cwnd-class.md), [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md), [CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md) e [CMFCToolTipCtrl](../mfc/reference/cmfctooltipctrl-class.md). Le funzioni membro di suggerimento di strumento in queste classi eseguono il wrapping di controlli comuni di Windows API. Classe `CToolBarCtrl` e classe `CToolTipCtrl` sono derivati dalla classe `CWnd`.  
  
 `CWnd` fornisce quattro funzioni membro per creare e gestire descrizioni: [EnableToolTips](../mfc/reference/cwnd-class.md#enabletooltips), [CancelToolTips](../mfc/reference/cwnd-class.md#canceltooltips), [FilterToolTipMessage](../mfc/reference/cwnd-class.md#filtertooltipmessage), e [OnToolHitTest ](../mfc/reference/cwnd-class.md#ontoolhittest). Vedere le singole funzioni membro per ulteriori informazioni sull'implementazione delle descrizioni comandi.  
  
 Se si crea una barra degli strumenti utilizzando `CToolBarCtrl`, è possibile implementare le descrizioni comandi per la barra degli strumenti utilizzando direttamente le funzioni membro seguenti: [GetToolTips](../mfc/reference/ctoolbarctrl-class.md#gettooltips) e [SetToolTips](../mfc/reference/ctoolbarctrl-class.md#settooltips). Vedere le singole funzioni membro e [strumento di gestione delle notifiche](../mfc/handling-tool-tip-notifications.md) per ulteriori informazioni sull'implementazione delle descrizioni comandi.  
  
 La `CToolTipCtrl` classe fornisce la funzionalità di controllo Windows comune descrizione comando. Un singolo controllo descrizione comandi può fornire informazioni per più di uno strumento. Uno strumento è una finestra, ad esempio una finestra figlio o di controllo o di un'area rettangolare definita dall'applicazione all'interno dell'area client. Il [CMFCToolTipCtrl](../mfc/reference/cmfctooltipctrl-class.md) deriva dalla classe `CToolTipCtrl` e fornisce funzionalità e gli stili di visualizzazione aggiuntivi.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CToolTipCtrl](../mfc/using-ctooltipctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

