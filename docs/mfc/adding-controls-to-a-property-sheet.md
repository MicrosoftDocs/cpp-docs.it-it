---
title: "Aggiunta di controlli a una finestra delle propriet&#224; | Microsoft Docs"
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
  - "controlli [MFC], aggiunta a finestre delle proprietà"
  - "finestre delle proprietà, aggiunta di controlli"
ms.assetid: 24ad4c0b-c1db-4850-b9f0-34aae8d74571
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Aggiunta di controlli a una finestra delle propriet&#224;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per impostazione predefinita, una finestra delle proprietà alloca l'area della finestra per le pagine delle proprietà, l'indice della scheda e i pulsanti OK, Annulla e Applica. \(La finestra delle proprietà non modale non ha i pulsanti OK, Annulla e Applica\). È possibile aggiungere altri controlli nella finestra delle proprietà.  Ad esempio, è possibile aggiungere una finestra di anteprima a destra dell'area della pagina proprietà per mostrare all'utente come apparirebbero le impostazioni correnti se applicate ad un oggetto esterno.  
  
 È possibile aggiungere controlli alla finestra di dialogo della finestra delle proprietà nel gestore di `OnCreate`.  Ospitare controlli aggiuntivi richiede generalmente di espandere la dimensione della finestra di dialogo della finestra delle proprietà.  Dopo avere definito la classe base **CPropertySheet::OnCreate**, chiamare [GetWindowRect](../Topic/CWnd::GetWindowRect.md) per ottenere la larghezza e l'altezza della finestra delle proprietà attualmente allocata, espandere le dimensioni del rettangolo e chiamare [MoveWindow](../Topic/CWnd::MoveWindow.md) per modificare la dimensione della finestra delle proprietà.  
  
## Vedere anche  
 [Finestre delle proprietà](../mfc/property-sheets-mfc.md)   
 [CPropertyPage Class](../mfc/reference/cpropertypage-class.md)   
 [CPropertySheet Class](../mfc/reference/cpropertysheet-class.md)