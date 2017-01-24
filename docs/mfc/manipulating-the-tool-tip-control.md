---
title: "Modifica del controllo ToolTip | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CToolTipCtrl (classe), modifica di attributi descrizione comandi"
  - "descrizioni comandi [C++], attributi"
ms.assetid: 3600afe5-712a-4b56-8456-96e85fe879af
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Modifica del controllo ToolTip
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe `CToolTipCtrl` fornisce un gruppo di funzioni membro che controllano i vari attributi dell'oggetto `CToolTipCtrl` e della finestra di descrizione comandi.  
  
 Il bordo iniziale, il popup e la durata di visualizzazione per le finestre di descrizione comandi possono essere impostati e recuperati con chiamate a [GetDelayTime](../Topic/CToolTipCtrl::GetDelayTime.md) e a [SetDelayTime](../Topic/CToolTipCtrl::SetDelayTime.md).  
  
 Modificare l'aspetto delle finestre di descrizioni comandi con le seguenti funzioni:  
  
-   [GetMargin](../Topic/CToolTipCtrl::GetMargin.md) e [SetMargin](../Topic/CToolTipCtrl::SetMargin.md) Recupera ed imposta la larghezza tra il bordo ed il testo della descrizione comandi.  
  
-   [GetMaxTipWidth](../Topic/CToolTipCtrl::GetMaxTipWidth.md) e [SetMaxTipWidth](../Topic/CToolTipCtrl::SetMaxTipWidth.md) Recupera ed imposta la larghezza massima della descrizione comandi.  
  
-   [GetTipBkColor](../Topic/CToolTipCtrl::GetTipBkColor.md) e [SetTipBkColor](../Topic/CToolTipCtrl::SetTipBkColor.md) Recupera ed imposta il colore di sfondo della finestra di descrizione comandi.  
  
-   [GetTipTextColor](../Topic/CToolTipCtrl::GetTipTextColor.md) e [SetTipTextColor](../Topic/CToolTipCtrl::SetTipTextColor.md) Recupera ed imposta il colore del testo della finestra di descrizione comandi.  
  
 Affinché il controllo della descrizione comandi sia notificato dei messaggi importanti, come i messaggi **WM\_LBUTTONXXX**, è necessario trasmettere i messaggi al controllo della descrizione comandi.  La soluzione migliore per questa trasmissione è di effettuare una chiamata a [CToolTipCtrl::RelayEvent](../Topic/CToolTipCtrl::RelayEvent.md), nella funzione `PreTranslateMessage` della finestra proprietaria.  Nell'esempio seguente viene illustrato un possibile metodo \(si assuma che il controllo di descrizione comandi sia chiamato `m_ToolTip`\):  
  
 [!code-cpp[NVC_MFCControlLadenDialog#41](../mfc/codesnippet/CPP/manipulating-the-tool-tip-control_1.cpp)]  
  
 Per rimuovere immediatamente una finestra di descrizione comandi, chiamare la funzione membro [Pop](../Topic/CToolTipCtrl::Pop.md).  
  
## Vedere anche  
 [Utilizzo di CToolTipCtrl](../mfc/using-ctooltipctrl.md)   
 [Controlli](../mfc/controls-mfc.md)