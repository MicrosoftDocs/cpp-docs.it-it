---
title: "Finestre delle propriet&#224; e pagine delle propriet&#224; in MFC | Microsoft Docs"
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
  - "controlli [MFC], finestre delle proprietà"
  - "proprietà (pagine), MFC"
  - "finestre delle proprietà, MFC"
  - "finestre di dialogo a schede"
ms.assetid: e1bede2b-0285-4b88-a052-0f8a372807a2
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Finestre delle propriet&#224; e pagine delle propriet&#224; in MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una finestra delle proprietà, nota anche come finestra di dialogo scheda, è una finestra di dialogo contenente le pagine delle proprietà.  Ogni pagina delle proprietà è basata su una risorsa modello di finestra di dialogo e contiene i controlli.  È inclusa in una pagina con una scheda nella parte superiore.  La scheda assegnare alla pagina e indica lo scopo.  Gli utenti fanno clic su una scheda nella finestra delle proprietà per selezionare un set di controlli.  
  
 Utilizzare le pagine per raggruppare i controlli nella finestra delle proprietà in serie significative.  La finestra delle proprietà contenute in genere include diversi controlli specifici.  Questi si applicano a tutte le pagine.  
  
 Le finestre delle proprietà sono basate su classe [CPropertySheet](../mfc/reference/cpropertysheet-class.md).  Le pagine delle proprietà sono basate su classe [CPropertyPage](../mfc/reference/cpropertypage-class.md).  
  
 Una finestra delle proprietà è un tipo speciale di finestra di dialogo utilizzata in genere per modificare gli attributi di un determinato oggetto esterno, quali la selezione corrente in una visualizzazione.  La finestra proprietà presenta tre parti principali: la finestra di dialogo contenitore, uno o più pagine delle proprietà presenti uno alla volta e una scheda all'inizio di ogni pagina che l'utente fa clic per selezionare la pagina.  Le finestre delle proprietà sono utili per le situazioni in cui sono presenti più simili gruppi di impostazioni di opzioni o cambiare.  Una finestra delle proprietà raggruppate le informazioni in modo semplice comprensione.  
  
> [!NOTE]
>  Quando si tenta di visualizzare una finestra delle proprietà utilizzando `CPropertySheet::DoModal`, il sistema può generare un'eccezione first\-chance.  Questa eccezione si verifica perché il sistema sta cercando di modificare [Stili finestra](../mfc/reference/window-styles.md) dell'oggetto prima che l'oggetto sia stato creato.  Per ulteriori informazioni su questa eccezione e inoltre come evitarla o gestirla, vedere [CPropertySheet::DoModal](../Topic/CPropertySheet::DoModal.md).  
  
## Vedere anche  
 [Finestre delle proprietà](../mfc/property-sheets-mfc.md)