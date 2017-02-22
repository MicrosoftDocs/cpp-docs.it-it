---
title: "Utilizzo di pulsanti a discesa in un controllo Toolbar | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "TBN_DROPDOWN"
  - "TBSTYLE_EX_DRAWDDARROWS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CToolBarCtrl (classe), pulsanti a discesa"
  - "pulsanti a discesa nelle barre degli strumenti"
  - "TBN_DROPDOWN (notifica)"
  - "TBSTYLE_EX_DRAWDDARROWS"
  - "barre degli strumenti [C++], pulsanti a discesa"
ms.assetid: b859f758-d2f6-40d9-9c26-0ff61993b9b2
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Utilizzo di pulsanti a discesa in un controllo Toolbar
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Oltre ai pulsanti di comando standard, una barra degli strumenti può inoltre disporre di pulsanti a discesa.  Un pulsante a discesa in genere indicato dalla presenza di freccia in giù associata.  
  
> [!NOTE]
>  La freccia in giù associata viene visualizzato solo se lo stile esteso `TBSTYLE_EX_DRAWDDARROWS` è stato impostato.  
  
 Quando l'utente fa clic su questa freccia \(o sul pulsante stesso, se non è necessaria alcuna freccia esistente, un messaggio di notifica di `TBN_DROPDOWN` viene inviato al padre di controllo toolbar.  È possibile quindi gestire la notifica e visualizzare un menu di scelta rapida; simile a quello di Internet Explorer.  
  
 La procedura riportata di seguito viene illustrato come implementare un pulsante della barra degli strumenti a discesa con un menu di scelta rapida:  
  
### Per implementare un pulsante a discesa  
  
1.  Una volta che l'oggetto di `CToolBarCtrl` è stato creato, impostare lo stile di `TBSTYLE_EX_DRAWDDARROWS`, utilizzando il codice seguente:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#36](../mfc/codesnippet/CPP/using-drop-down-buttons-in-a-toolbar-control_1.cpp)]  
  
2.  Impostare lo stile di `TBSTYLE_DROPDOWN` per tutti i nuovi \([InsertButton](../Topic/CToolBarCtrl::InsertButton.md) o [AddButtons](../Topic/CToolBarCtrl::AddButtons.md)\) o i pulsanti esistenti \([SetButtonInfo](../Topic/CToolBarCtrl::SetButtonInfo.md)\) che verranno pulsanti a discesa.  Nell'esempio seguente viene illustrato modificare un pulsante esistente in un oggetto di `CToolBarCtrl` :  
  
     [!code-cpp[NVC_MFCControlLadenDialog#37](../mfc/codesnippet/CPP/using-drop-down-buttons-in-a-toolbar-control_2.cpp)]  
  
3.  Aggiungere un gestore di `TBN_DROPDOWN` alla classe padre dell'oggetto della barra degli strumenti.  
  
     [!code-cpp[NVC_MFCControlLadenDialog#38](../mfc/codesnippet/CPP/using-drop-down-buttons-in-a-toolbar-control_3.cpp)]  
  
4.  Nel nuovo gestore, visualizzare il menu di scelta rapida appropriato.  Il codice seguente viene illustrato un metodo:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#39](../mfc/codesnippet/CPP/using-drop-down-buttons-in-a-toolbar-control_4.cpp)]  
  
## Vedere anche  
 [Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)