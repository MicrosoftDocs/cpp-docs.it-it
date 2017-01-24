---
title: "Utilizzo di elenchi di immagini in un controllo Toolbar | Microsoft Docs"
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
  - "CToolBarCtrl (classe), elenchi di immagini"
  - "elenchi di immagini [C++], controlli della barra degli strumenti"
  - "controlli della barra degli strumenti [MFC], immagine"
ms.assetid: ccbe8df4-4ed9-4b54-bb93-9a1dcb3b97eb
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di elenchi di immagini in un controllo Toolbar
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per impostazione predefinita, le immagini utilizzate dai pulsanti in un controllo toolbar vengono archiviate come una singola immagine.  Tuttavia, è anche possibile memorizzare le immagini del pulsante in un set di elenchi immagini.  L'oggetto del controllo toolbar può utilizzare fino a tre elenchi immagini separati:  
  
-   L'elenco di immagini attivato contiene immagini per i pulsanti della barra degli strumenti attualmente sono abilitati.  
  
-   L'elenco di immagini disabilitato contiene immagini per i pulsanti della barra degli strumenti attualmente sono disabilitati.  
  
-   L'elenco di immagini evidenziato contiene immagini per i pulsanti della barra degli strumenti attualmente sono evidenziati.  Questo elenco immagini viene utilizzato solo quando la barra degli strumenti utilizza lo stile di **TBSTYLE\_FLAT**.  
  
 Questi elenchi immagini vengono utilizzati dal controllo toolbar quando vengono associate all'oggetto di `CToolBarCtrl`.  Questa associazione viene eseguita mediante le chiamate a [CToolBarCtrl::SetImageList](../Topic/CToolBarCtrl::SetImageList.md), a [SetDisabledImageList](../Topic/CToolBarCtrl::SetDisabledImageList.md) e a [SetHotImageList](../Topic/CToolBarCtrl::SetHotImageList.md).  
  
 Per impostazione predefinita, MFC utilizza la classe di `CToolBar` per implementare le barre degli strumenti applicazione MFC.  Tuttavia, la funzione membro di `GetToolBarCtrl` può essere utilizzata per recuperare l'oggetto incorporato di `CToolBarCtrl`.  È quindi possibile effettuare chiamate alle funzioni membro di `CToolBarCtrl` utilizzando l'oggetto restituito.  
  
 Nell'esempio seguente viene illustrata questa tecnica assegnando un elenco immagini attivato \(`m_ToolBarImages`\) e disattivato \(`m_ToolBarDisabledImages`a un oggetto di `CToolBarCtrl` \(`m_ToolBarCtrl`\).  
  
 [!code-cpp[NVC_MFCControlLadenDialog#35](../mfc/codesnippet/CPP/using-image-lists-in-a-toolbar-control_1.cpp)]  
  
> [!NOTE]
>  Gli elenchi di immagini utilizzate dall'oggetto della barra degli strumenti devono essere oggetti permanenti.  Per questo motivo, vengono comunemente membri dati di una classe MFC; in questo esempio, la classe della finestra cornice principale.  
  
 Una volta che gli elenchi di immagini sono associati all'oggetto di `CToolBarCtrl`, il framework di visualizzare l'immagine del pulsante appropriata.  
  
## Vedere anche  
 [Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)