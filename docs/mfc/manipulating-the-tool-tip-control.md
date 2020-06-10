---
title: Modifica del controllo ToolTip
ms.date: 11/04/2016
helpviewer_keywords:
- CToolTipCtrl class [MFC], manipulating tool tip attributes
- tool tips [MFC], attributes
ms.assetid: 3600afe5-712a-4b56-8456-96e85fe879af
ms.openlocfilehash: 61bc35e8b19ba7645736b939acac6cdaa6cb7316
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84622415"
---
# <a name="manipulating-the-tool-tip-control"></a>Modifica del controllo ToolTip

La classe `CToolTipCtrl` fornisce un gruppo di funzioni membro che controllano i vari attributi dell'oggetto `CToolTipCtrl` e della finestra di descrizione comandi.

Le durate iniziali, a comparsa e rimostrate per le finestre di descrizione comando possono essere impostate e recuperate con le chiamate a [GetDelayTime](reference/ctooltipctrl-class.md#getdelaytime) e [SetDelayTime](reference/ctooltipctrl-class.md#setdelaytime).

Modificare l'aspetto delle finestre di descrizioni comandi con le seguenti funzioni:

- [GetMargin](reference/ctooltipctrl-class.md#getmargin) e [semargin](reference/ctooltipctrl-class.md#setmargin) recupera e imposta la larghezza tra il bordo della descrizione comando e il testo della descrizione comando.

- [GetMaxTipWidth](reference/ctooltipctrl-class.md#getmaxtipwidth) e [SetMaxTipWidth](reference/ctooltipctrl-class.md#setmaxtipwidth) recupera e imposta la larghezza massima della finestra descrizione comando.

- [GetTipBkColor](reference/ctooltipctrl-class.md#gettipbkcolor) e [SetTipBkColor](reference/ctooltipctrl-class.md#settipbkcolor) recupera e imposta il colore di sfondo della finestra descrizione comando.

- [GetTipTextColor](reference/ctooltipctrl-class.md#gettiptextcolor) e [SetTipTextColor](reference/ctooltipctrl-class.md#settiptextcolor) recupera e imposta il colore del testo della finestra descrizione comando.

Affinché il controllo descrizione comandi riceva le notifiche dei messaggi importanti, come i messaggi WM_LBUTTONXXX, è necessario trasmettere i messaggi al controllo descrizione comandi. Il metodo migliore per questo inoltro consiste nel effettuare una chiamata a [CToolTipCtrl:: RelayEvent](reference/ctooltipctrl-class.md#relayevent)nella `PreTranslateMessage` funzione della finestra proprietaria. Nell'esempio seguente viene illustrato un possibile metodo (basato sulla supposizione che il controllo descrizione comandi sia denominato `m_ToolTip`):

[!code-cpp[NVC_MFCControlLadenDialog#41](codesnippet/cpp/manipulating-the-tool-tip-control_1.cpp)]

Per rimuovere immediatamente una finestra di descrizione comando, chiamare la funzione membro [pop](reference/ctooltipctrl-class.md#pop) .

## <a name="see-also"></a>Vedere anche

[Uso di CToolTipCtrl](using-ctooltipctrl.md)<br/>
[Controlli](controls-mfc.md)
