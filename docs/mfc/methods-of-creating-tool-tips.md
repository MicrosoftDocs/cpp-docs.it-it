---
description: 'Altre informazioni su: metodi di creazione di descrizioni comandi'
title: Metodi di creazione di descrizioni comandi
ms.date: 11/04/2016
helpviewer_keywords:
- CToolTipCtrl class [MFC], creating tool tips
- tool tips [MFC], tool tip controls
- tool tips [MFC], creating
ms.assetid: b015e9f4-ddfb-49a4-a5a6-fa2d45e4d328
ms.openlocfilehash: fc710f569e78f9698cdc924a071489c03b2975b1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97203107"
---
# <a name="methods-of-creating-tool-tips"></a>Metodi di creazione di descrizioni comandi

MFC fornisce tre classi per creare e gestire il controllo descrizione comando: [CWnd](reference/cwnd-class.md), [CToolBarCtrl](reference/ctoolbarctrl-class.md), [CToolTipCtrl](reference/ctooltipctrl-class.md) e [CMFCToolTipCtrl](reference/cmfctooltipctrl-class.md). Le funzioni membro della descrizione comando di queste classi avvolgono l'API del controllo comune di Windows. La classe e la classe `CToolBarCtrl` `CToolTipCtrl` sono derivate dalla classe `CWnd` .

`CWnd` fornisce quattro funzioni membro per la creazione e la gestione di descrizioni comandi: [EnableToolTips](reference/cwnd-class.md#enabletooltips), [CancelToolTips](reference/cwnd-class.md#canceltooltips), [FilterToolTipMessage](reference/cwnd-class.md#filtertooltipmessage)e [OnToolHitTest](reference/cwnd-class.md#ontoolhittest). Per ulteriori informazioni sulla modalità di implementazione delle descrizioni comandi, vedere le singole funzioni membro.

Se si crea una barra degli strumenti usando `CToolBarCtrl` , è possibile implementare le descrizioni comandi per la barra degli strumenti direttamente usando le funzioni membro seguenti: [GetToolTips](reference/ctoolbarctrl-class.md#gettooltips) e [setooltips](reference/ctoolbarctrl-class.md#settooltips). Per ulteriori informazioni sulla modalità di implementazione delle descrizioni comandi, vedere le singole funzioni membro e la [gestione delle notifiche](handling-tool-tip-notifications.md) delle descrizioni comandi.

La `CToolTipCtrl` classe fornisce la funzionalità del controllo ToolTip comune di Windows. Un singolo controllo descrizione comando può fornire informazioni per più di uno strumento. Uno strumento può essere una finestra, ad esempio una finestra o un controllo figlio, oppure un'area rettangolare definita dall'applicazione all'interno dell'area client di una finestra. La classe [CMFCToolTipCtrl](reference/cmfctooltipctrl-class.md) deriva da `CToolTipCtrl` e fornisce stili e funzionalità di visualizzazione aggiuntivi.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CToolTipCtrl](using-ctooltipctrl.md)<br/>
[Controlli](controls-mfc.md)
