---
title: "Aggiunta di controlli a una finestra delle proprietà | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- controls [MFC], adding to property sheets
- property sheets, adding controls
ms.assetid: 24ad4c0b-c1db-4850-b9f0-34aae8d74571
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2acbbed1a253a502aea8b19af6fd16ddb343e3ec
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="adding-controls-to-a-property-sheet"></a>Aggiunta di controlli a una finestra delle proprietà
Per impostazione predefinita, una finestra delle proprietà alloca l'area della finestra per le pagine delle proprietà, l'indice della scheda e i pulsanti OK, Annulla e Applica. La finestra delle proprietà non modale non possiede i pulsanti OK, Annulla e Applica. È possibile aggiungere altri controlli nella finestra delle proprietà. Ad esempio, è possibile aggiungere una finestra di anteprima a destra dell'area della pagina delle proprietà per mostrare all'utente come apparirebbero le impostazioni correnti se applicate a un oggetto esterno.  
  
 È possibile aggiungere controlli alla finestra delle proprietà nel gestore di `OnCreate`. L'aggiunta di ulteriori controlli in genere richiede di espandere le dimensioni della finestra delle proprietà. Dopo avere chiamato la classe di base **CPropertySheet:: OnCreate**, chiamare [GetWindowRect](../mfc/reference/cwnd-class.md#getwindowrect) per ottenere la larghezza e l'altezza della finestra delle proprietà attualmente allocata, espandere il rettangolo, dimensioni e chiamata [MoveWindow](../mfc/reference/cwnd-class.md#movewindow) per modificare le dimensioni della finestra delle proprietà.  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre delle proprietà](../mfc/property-sheets-mfc.md)   
 [CPropertyPage (classe)](../mfc/reference/cpropertypage-class.md)   
 [Classe CPropertySheet](../mfc/reference/cpropertysheet-class.md)
