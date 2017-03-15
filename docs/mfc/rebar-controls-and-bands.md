---
title: "Controlli Rebar e bande | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bande, in controlli Rebar"
  - "Rebar (controlli), utilizzo con bande in"
ms.assetid: b647e7a5-9ea7-48b1-8e5f-096d104748f0
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Controlli Rebar e bande
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Lo scopo principale di un controllo Rebar consiste nel fungere da contenitore per le finestre figlio, i controlli comuni della finestra di dialogo, i menu, barre degli strumenti, e così via.  Il contenimento è supportato dal concetto di una banda." Ogni banda del rebar può contenere qualsiasi combinazione di barra di pinza di ordini, di bitmap, di un'etichetta di testo e di una finestra figlio.  
  
 La classe `CReBarCtrl` ha molte funzioni membro che è possibile utilizzare per recuperare e modificare, informazioni per una banda specifica del rebar:  
  
-   [GetBandCount](../Topic/CReBarCtrl::GetBandCount.md) recupera il numero di bande correnti nel controllo Rebar.  
  
-   [GetBandInfo](../Topic/CReBarCtrl::GetBandInfo.md) inizializza una struttura di **REBARBANDINFO** con informazioni dalla banda specificata.  Esiste una funzione membro corrispondente di [SetBandInfo](../Topic/CReBarCtrl::SetBandInfo.md).  
  
-   [GetRect](../Topic/CReBarCtrl::GetRect.md) recupera il rettangolo di delimitazione di una banda specificata.  
  
-   [GetRowCount](../Topic/CReBarCtrl::GetRowCount.md) recupera il numero di righe della banda in un controllo Rebar.  
  
-   [IDToIndex](../Topic/CReBarCtrl::IDToIndex.md) recupera l'indice di una banda specificata.  
  
-   [GetBandBorders](../Topic/CReBarCtrl::GetBandBorders.md) recupera i bordi di una banda.  
  
 Oltre a modifica, molte funzioni membro vengono forniti che consente di eseguire sulle bande specifiche del rebar.  
  
 [InsertBand](../Topic/CReBarCtrl::InsertBand.md) e [DeleteBand](../Topic/CReBarCtrl::DeleteBand.md) aggiungono e rimuovono le bande del rebar.  [MinimizeBand](../Topic/CReBarCtrl::MinimizeBand.md) e [MaximizeBand](../Topic/CReBarCtrl::MaximizeBand.md) influiscono sulle dimensioni correnti di una banda specifica del rebar.  [MoveBand](../Topic/CReBarCtrl::MoveBand.md) modifica l'indice di una banda specifica del rebar.  [ShowBand](../Topic/CReBarCtrl::ShowBand.md) mostra o nasconde una banda del rebar dall'utente.  
  
 Nell'esempio seguente viene illustrata l'aggiunta della banda della barra degli strumenti \(`m_wndToolBar`\) a un controllo Rebar esistente \(`m_wndReBar`\).  La banda viene descritta l'inizializzazione della struttura di `rbi` quindi chiamando la funzione membro di `InsertBand` :  
  
 [!code-cpp[NVC_MFCControlLadenDialog#27](../mfc/codesnippet/CPP/rebar-controls-and-bands_1.cpp)]  
  
## Vedere anche  
 [Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)