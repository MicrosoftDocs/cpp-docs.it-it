---
title: "Finestre delle propriet&#224; e pagine delle propriet&#224; (MFC) | Microsoft Docs"
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
  - "CPropertyPage (classe), pagine e finestre delle proprietà"
  - "CPropertySheet (classe), pagine e finestre delle proprietà"
  - "MFC (finestre di dialogo), schede"
  - "proprietà (pagine), finestre delle proprietà"
  - "finestre delle proprietà, proprietà (pagine)"
ms.assetid: de8fea12-6c35-4cef-8625-b8073a379446
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Finestre delle propriet&#224; e pagine delle propriet&#224; (MFC)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un [finestra di dialogo](../mfc/dialog-boxes.md) MFC può intraprendere "un aspetto della finestra di dialogo tab" incorporando le finestre e le pagine delle proprietà.  Denominato "una finestra delle proprietà" in MFC, questo tipo di finestra di dialogo, simile a numerose finestre di dialogo in Microsoft Word, Excel e Visual C\+\+, appare contenere uno stack dei fogli a schede, come uno stack delle cartelle di file viste da quello precedente per supportare, o un gruppo di finestre sovrapposte.  I controlli sulla scheda precedente sono visibili; solo la scheda con l'etichetta è visibile nelle schede supporta.  Le finestre delle proprietà sono particolarmente utili per gestire molte proprietà o impostazioni che incorrono piuttosto accuratamente in diversi gruppi.  In genere, una finestra delle proprietà può semplificare un'interfaccia utente sostituendo numerose finestre di dialogo separate.  
  
 A partire dalla versione 4,0 di MFC, le finestre e le pagine delle proprietà vengono implementate utilizzando i controlli comuni disponibili nelle versioni 3,51 di Windows NT e Windows 95 e successive.  
  
 Le finestre delle proprietà vengono implementate mediante le classi [CPropertySheet](../mfc/reference/cpropertysheet-class.md) e [CPropertyPage](../mfc/reference/cpropertypage-class.md) \(descritti *in riferimenti alla libreria MFC*\).  `CPropertySheet` definisce la finestra di dialogo globale, che può contenere "le pagine" più basate su `CPropertyPage`.  
  
 Per informazioni sulla creazione e sull'utilizzo delle finestre delle proprietà, vedere l'argomento [Finestre delle proprietà](../mfc/property-sheets-mfc.md).  
  
## Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)   
 [Finestre delle proprietà e pagine delle proprietà in MFC](../mfc/property-sheets-and-property-pages-in-mfc.md)   
 [Scambio di dati](../mfc/exchanging-data.md)   
 [Creazione di una finestra delle proprietà non modale](../mfc/creating-a-modeless-property-sheet.md)   
 [Gestione del pulsante Applica](../mfc/handling-the-apply-button.md)