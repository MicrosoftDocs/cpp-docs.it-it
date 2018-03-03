---
title: "Finestre delle proprietà e pagine delle proprietà (MFC) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- MFC dialog boxes [MFC], tabs
- property pages [MFC], property sheets
- CPropertyPage class [MFC], property sheets and pages
- CPropertySheet class [MFC], property sheets and pages
- property sheets, propert pages
ms.assetid: de8fea12-6c35-4cef-8625-b8073a379446
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 877d83a6833b9505c326bc5312d2f151add07cb8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="property-sheets-and-property-pages-mfc"></a>Finestre delle proprietà e pagine delle proprietà (MFC)
MFC [la finestra di dialogo](../mfc/dialog-boxes.md) può assumere un aspetto "scheda finestra di dialogo" incorporando finestre delle proprietà e pagine delle proprietà. Chiamata di una finestra delle proprietà"" in MFC, questo tipo di finestra di dialogo simile a molte finestre di dialogo in Microsoft Word, Excel e Visual C++, sembra contenere una pila di finestre a schede, molto simile a una pila di cartelle di file visualizzati dal primo all'ultimo o un gruppo di finestre sovrapposte. Controlli della scheda anteriore sono visibili; solo la scheda con etichetta è visibile nelle schede posteriore. Finestre delle proprietà sono particolarmente utili per la gestione di un numero elevato di proprietà o impostazioni che possono essere suddivise in diversi gruppi. In genere, una finestra delle proprietà consente di semplificare un'interfaccia utente sostituendo diverse finestre di dialogo separate.  
  
 A partire dalla versione 4.0 di MFC, le finestre delle proprietà e pagine delle proprietà vengono implementate mediante i controlli comuni forniti con Windows 95 e Windows NT versione 3.51 e successiva.  
  
 Finestre delle proprietà sono implementate con classi [CPropertySheet](../mfc/reference/cpropertysheet-class.md) e [CPropertyPage](../mfc/reference/cpropertypage-class.md) (descritto nel *riferimenti alla libreria MFC*). `CPropertySheet`definisce la finestra di dialogo generale, che può contenere più "pagine" in base a `CPropertyPage`.  
  
 Per informazioni sulla creazione e utilizzo di finestre delle proprietà, vedere l'argomento [finestre delle proprietà](../mfc/property-sheets-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)   
 [Finestre delle proprietà e pagine delle proprietà in MFC](../mfc/property-sheets-and-property-pages-in-mfc.md)   
 [Lo scambio di dati](../mfc/exchanging-data.md)   
 [Creazione di una finestra delle proprietà non modali](../mfc/creating-a-modeless-property-sheet.md)   
 [Gestione del pulsante Applica](../mfc/handling-the-apply-button.md)

