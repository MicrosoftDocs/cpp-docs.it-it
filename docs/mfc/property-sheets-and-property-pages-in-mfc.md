---
title: "Finestre delle proprietà e pagine delle proprietà in MFC | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- property pages [MFC], MFC
- controls [MFC], property sheets
- property sheets, MFC
- tab dialog boxes
ms.assetid: e1bede2b-0285-4b88-a052-0f8a372807a2
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 24a66bf9e062e43225827afdbb0bba45511c5f13
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="property-sheets-and-property-pages-in-mfc"></a>Finestre delle proprietà e pagine delle proprietà in MFC
Finestra delle proprietà, noto anche come una scheda della finestra di dialogo è una finestra di dialogo che contiene le pagine delle proprietà. Ogni pagina delle proprietà è basata su una risorsa modello di finestra di dialogo e contiene i controlli. Viene racchiuso in una pagina con una scheda nella parte superiore. Il nome della pagina e indica lo scopo. Gli utenti di fare clic su una scheda nella finestra delle proprietà per selezionare un set di controlli.  
  
 Utilizzare le pagine per raggruppare i controlli nella finestra delle proprietà in modo logico. Finestra delle proprietà di contenuto include in genere diversi controlli propri. Queste si applicano a tutte le pagine.  
  
 Finestre delle proprietà sono basate sulla classe [CPropertySheet](../mfc/reference/cpropertysheet-class.md). Pagine delle proprietà sono basate sulla classe [CPropertyPage](../mfc/reference/cpropertypage-class.md).  
  
 Una finestra delle proprietà è un tipo speciale di finestra di dialogo che viene generalmente usato per modificare gli attributi di alcuni oggetti esterni, ad esempio la selezione corrente in una vista. Finestra delle proprietà dispone di tre parti principali: il contenitore della finestra di dialogo Pagine delle proprietà di uno o più mostrato uno alla volta e una scheda nella parte superiore di ogni pagina che l'utente fa clic per selezionare tale pagina. Finestre delle proprietà sono utili per situazioni in cui si dispone di diversi gruppi simili di impostazioni o opzioni per la modifica. Informazioni di una finestra delle proprietà raggruppate in un modo facilmente comprensibile.  
  
> [!NOTE]
>  Quando si sta tentando di visualizzare una finestra delle proprietà tramite `CPropertySheet::DoModal`, il sistema potrebbe generare un'eccezione first-chance. Questa eccezione si verifica perché il sistema sta tentando di modificare il [stili finestra](../mfc/reference/styles-used-by-mfc.md#window-styles) dell'oggetto prima che l'oggetto è stato creato. Per ulteriori informazioni su questa eccezione e come evitarli o gestirlo, vedere [CPropertySheet:: DoModal](../mfc/reference/cpropertysheet-class.md#domodal).  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre delle proprietà](../mfc/property-sheets-mfc.md)

