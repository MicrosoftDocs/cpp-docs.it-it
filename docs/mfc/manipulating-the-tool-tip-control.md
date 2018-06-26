---
title: Modifica il controllo ToolTip | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CToolTipCtrl class [MFC], manipulating tool tip attributes
- tool tips [MFC], attributes
ms.assetid: 3600afe5-712a-4b56-8456-96e85fe879af
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 91e2e247acb85188c1280713e9e5ad8ef8f19448
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929828"
---
# <a name="manipulating-the-tool-tip-control"></a>Modifica del controllo ToolTip
La classe `CToolTipCtrl` fornisce un gruppo di funzioni membro che controllano i vari attributi dell'oggetto `CToolTipCtrl` e della finestra di descrizione comandi.  
  
 L'iniziale, di popup e nuova visualizzazione durate per finestre di descrizioni comandi possono essere impostate e recuperate con chiamate a [GetDelayTime](../mfc/reference/ctooltipctrl-class.md#getdelaytime) e [SetDelayTime](../mfc/reference/ctooltipctrl-class.md#setdelaytime).  
  
 Modificare l'aspetto delle finestre di descrizioni comandi con le seguenti funzioni:  
  
-   [GetMargin](../mfc/reference/ctooltipctrl-class.md#getmargin) e [SetMargin](../mfc/reference/ctooltipctrl-class.md#setmargin) recuperano e impostano la larghezza tra il bordo e lo strumento di testo di suggerimento.  
  
-   [GetMaxTipWidth](../mfc/reference/ctooltipctrl-class.md#getmaxtipwidth) e [SetMaxTipWidth](../mfc/reference/ctooltipctrl-class.md#setmaxtipwidth) recuperano e impostano la larghezza massima dello strumento della finestra di descrizione comandi.  
  
-   [GetTipBkColor](../mfc/reference/ctooltipctrl-class.md#gettipbkcolor) e [SetTipBkColor](../mfc/reference/ctooltipctrl-class.md#settipbkcolor) recuperano e impostano il colore di sfondo dello strumento della finestra di descrizione comandi.  
  
-   [GetTipTextColor](../mfc/reference/ctooltipctrl-class.md#gettiptextcolor) e [SetTipTextColor](../mfc/reference/ctooltipctrl-class.md#settiptextcolor) recuperano e impostano il colore del testo dello strumento della finestra di descrizione comandi.  
  
 Affinché il controllo descrizione comando ricevere una notifica di messaggi importanti, ad esempio i messaggi WM_LBUTTONXXX, è necessario trasmettere i messaggi al controllo descrizione comandi. Il metodo migliore per l'inoltro è per effettuare una chiamata a [CToolTipCtrl:: RelayEvent](../mfc/reference/ctooltipctrl-class.md#relayevent)nella `PreTranslateMessage` funzione della finestra proprietaria. Nell'esempio seguente viene illustrato un possibile metodo (basato sulla supposizione che il controllo descrizione comandi sia denominato `m_ToolTip`):  
  
 [!code-cpp[NVC_MFCControlLadenDialog#41](../mfc/codesnippet/cpp/manipulating-the-tool-tip-control_1.cpp)]  
  
 Per rimuovere immediatamente una finestra di descrizione comandi, chiamare il [Pop](../mfc/reference/ctooltipctrl-class.md#pop) funzione membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CToolTipCtrl](../mfc/using-ctooltipctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

