---
title: "Schede e attributi del controllo Tab | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
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
  - "attributi [C++], argomenti di riferimento"
  - "CTabCtrl (classe), attributi del controllo scheda"
  - "controlli delle schede, attributi"
  - "schede"
  - "schede, attributi"
ms.assetid: ecf190cb-f323-4751-bfdb-766dbe6bb553
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Schede e attributi del controllo Tab
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È molto utile controllare l'aspetto e il comportamento delle schede che costituiscono un controllo Struttura a schede \([CTabCtrl](../mfc/reference/ctabctrl-class.md)\).  Ogni scheda può avere un'etichetta, un'icona, uno stato dell'elemento e un valore a 32 bit definito dall'applicazione associato.  Per ogni scheda, è possibile visualizzare l'icona, label, entrambi.  
  
 Inoltre, ogni elemento tab può avere tre possibili stati: premuto, inattivo, o evidenziato.  Questo stato può essere impostato solo modificando un elemento esistente della scheda.  Per modificare un elemento esistente della scheda, recuperilo con una chiamata a [GetItem](../Topic/CTabCtrl::GetItem.md), modificare la struttura di `TCITEM` \(in particolare i membri dati di **dwStateMask** e di **dwState** \) e quindi restituisce la struttura modificata di `TCITEM` con una chiamata a [SetItem](../Topic/CTabCtrl::SetItem.md).  Se è necessario rimuovere gli stati degli elementi di tutti gli elementi scheda in `CTabCtrl` oggetto, fare una chiamata a [DeselectAll](../Topic/CTabCtrl::DeselectAll.md).  Questa funzione viene reimpostato lo stato di tutti gli elementi scheda o a tutti gli elementi a meno che attualmente selezionato.  
  
 Il codice seguente rimuove lo stato di tutti gli elementi della scheda e quindi modifica lo stato del terzo elemento:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#32](../mfc/codesnippet/CPP/tabs-and-tab-control-attributes_1.cpp)]  
  
 Per ulteriori informazioni sugli attributi della scheda, vedere [Schede e attributi della scheda](http://msdn.microsoft.com/library/windows/desktop/bb760550) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  Per ulteriori informazioni sulle schede di aggiunta a un controllo Struttura a schede, vedere più avanti [Schede di aggiunta a un controllo Struttura a schede](../mfc/adding-tabs-to-a-tab-control.md) in questo argomento.  
  
## Vedere anche  
 [Utilizzo di CTabCtrl](../mfc/using-ctabctrl.md)   
 [Controlli](../mfc/controls-mfc.md)