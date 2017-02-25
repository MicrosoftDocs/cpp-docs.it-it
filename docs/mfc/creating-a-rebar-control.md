---
title: "Creazione di un controllo Rebar | Microsoft Docs"
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
  - "CReBarCtrl (classe), creazione"
  - "Rebar (controlli), creazione"
ms.assetid: 0a012e08-772b-4f6a-af86-7cb651d11d3e
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Creazione di un controllo Rebar
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli oggetti [CReBarCtrl](../mfc/reference/crebarctrl-class.md) devono essere creati prima che l'oggetto padre sia visibile.  In questo modo è possibile ridurre le possibilità di problemi di disegno.  
  
 Ad esempio, i controlli Rebar \(utilizzati negli oggetti della finestra cornice\) vengono comunemente usati come finestre padre per i controlli della barra degli strumenti.  Di conseguenza, il padre del controllo Rebar è l'oggetto della finestra cornice.  Poiché l'oggetto della finestra cornice è il padre, la funzione membro `OnCreate` \(del padre\) è una posizione eccellente per creare il controllo Rebar.  
  
 Per utilizzare un oggetto `CReBarCtrl`, in genere è necessario effettuare le seguenti operazioni:  
  
### Per utilizzare un oggetto CReBarCtrl  
  
1.  Creare l'oggetto [CReBarCtrl](../mfc/reference/crebarctrl-class.md).  
  
2.  Chiamare [Create](../Topic/CReBarCtrl::Create.md) per creare il controllo comune Rebar di Windows e per associarlo all'oggetto `CReBarCtrl`, specificando tutti gli stili desiderati.  
  
3.  Caricare un bitmap, con una chiamata a [CBitmap::LoadBitmap](../Topic/CBitmap::LoadBitmap.md), per utilizzarlo come sfondo dell'oggetto di controllo Rebar.  
  
4.  Creare e inizializzare tutti gli oggetti della finestra figlio \(barre degli strumenti, controlli di una finestra di dialogo e così via\) che saranno contenuti nell'oggetto di controllo Rebar.  
  
5.  Inizializzare una struttura **REBARBANDINFO** con le informazioni necessarie per la banda da inserire.  
  
6.  Chiamare [InsertBand](../Topic/CReBarCtrl::InsertBand.md) per inserire le finestre figlio esistenti \(come `m_wndReToolBar`\) nel nuovo controllo Rebar.  Per ulteriori informazioni sull'inserimento delle bande in un controllo Rebar esistente, vedere [Controlli Rebar e bande](../mfc/rebar-controls-and-bands.md).  
  
## Vedere anche  
 [Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)