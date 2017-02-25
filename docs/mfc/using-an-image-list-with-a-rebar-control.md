---
title: "Utilizzo di un elenco immagini con un controllo Rebar | Microsoft Docs"
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
  - "elenchi di immagini [C++], controlli Rebar"
  - "Rebar (controlli), elenchi di immagini"
ms.assetid: 1a5836ac-019a-46aa-8741-b35c3376b839
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Utilizzo di un elenco immagini con un controllo Rebar
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ogni banda del rebar può contenere, tra l'altro, un'immagine da un elenco immagini associato.  La procedura riportata di seguito illustra le operazioni necessarie per la visualizzazione di un'immagine in una banda del rebar.  
  
### Le immagini in una banda del rebar  
  
1.  Associare un elenco immagini all'oggetto del controllo Rebar mediante una chiamata a [SetImageList](../Topic/CReBarCtrl::SetImageList.md), passando un puntatore ad un elenco immagini esistente.  
  
2.  Modificare la struttura di **REBARBANDINFO** per assegnare un'immagine ad una banda del rebar:  
  
    -   Impostare il membro **fMask** a **RBBIM\_IMAGE**, utilizzando l'operatore OR bit per bit per importare in base alle esigenze i flag aggiuntivi.  
  
    -   Impostare il membro `iImage` all'indice dell'elenco immagini dell'immagine da visualizzare.  
  
3.  Inizializzare tutti i membri di dati restati, ad esempio la dimensione, il testo e un punto di controllo dello finestra figlio contenuta, con le informazioni necessarie.  
  
4.  Inserire la nuova banda \(con l'immagine\) con una chiamata a [CReBarCtrl::InsertBand](../Topic/CReBarCtrl::InsertBand.md), passando la struttura **REBARBANDINFO** .  
  
 L'esempio seguente presuppone che un oggetto elenco immagini esistente con due immagini è stato assegnato all'oggetto controllo Rebar \(`m_wndReBar`\).  Una nuova banda del rebar \(definita da `rbi`\), che contiene la prima immagine, viene aggiunta tramite una chiamata a `InsertBand`:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#28](../mfc/codesnippet/CPP/using-an-image-list-with-a-rebar-control_1.cpp)]  
  
## Vedere anche  
 [Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)