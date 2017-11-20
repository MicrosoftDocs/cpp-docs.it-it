---
title: Ciclo di vita di una finestra di dialogo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- dialog boxes [MFC], life cycle
- modal dialog boxes [MFC], life cycle
- modeless dialog boxes [MFC], life cycle
- MFC dialog boxes [MFC], life cycle
- life cycle of dialog boxes [MFC]
ms.assetid: e16fd78e-238d-4f31-8c9d-8564f3953bd9
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e2cc5c841a7951d9fc0b351ed7763637b065b729
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="life-cycle-of-a-dialog-box"></a>Ciclo di vita di una finestra di dialogo
Durante il ciclo di vita di una finestra di dialogo, l'utente richiama la finestra di dialogo, in genere all'interno di un gestore del comando che crea e inizializza l'oggetto finestra di dialogo, l'utente interagisce con la finestra di dialogo e chiude la finestra di dialogo.  
  
 Per le finestre di dialogo modali, il gestore raccoglie tutti i dati immessi una volta la finestra di dialogo viene chiusa dall'utente. Dal momento che l'oggetto finestra di dialogo dopo aver chiuso la finestra di dialogo, è possibile utilizzare semplicemente le variabili membro della classe di finestra di dialogo per estrarre i dati.  
  
 Per le finestre di dialogo non modali, è possibile estrarre dati da un oggetto dialog mentre è ancora visibile nella finestra di dialogo. A un certo punto, viene eliminato l'oggetto finestra di dialogo; In questo caso dipende dal codice.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Creazione e visualizzazione delle finestre di dialogo](../mfc/creating-and-displaying-dialog-boxes.md)  
  
-   [Creazione di finestre di dialogo modale](../mfc/creating-modal-dialog-boxes.md)  
  
-   [Creazione di finestre di dialogo non modali](../mfc/creating-modeless-dialog-boxes.md)  
  
-   [Utilizzo di un modello di finestra di dialogo in memoria](../mfc/using-a-dialog-template-in-memory.md)  
  
-   [Impostare il colore di sfondo della finestra di dialogo](../mfc/setting-the-dialog-boxs-background-color.md)  
  
-   [Nella finestra di dialogo di inizializzazione](../mfc/initializing-the-dialog-box.md)  
  
-   [La gestione dei messaggi di Windows nella finestra di dialogo](../mfc/handling-windows-messages-in-your-dialog-box.md)  
  
-   [Il recupero dei dati da un oggetto dialog](../mfc/retrieving-data-from-the-dialog-object.md)  
  
-   [Chiudere la finestra di dialogo](../mfc/closing-the-dialog-box.md)  
  
-   [Nella finestra di dialogo di eliminazione definitiva](../mfc/destroying-the-dialog-box.md)  
  
-   [Dialog data exchange (DDX) e (DDV) di convalida](../mfc/dialog-data-exchange-and-validation.md)  
  
-   [Finestre di dialogo Proprietà finestra](../mfc/property-sheets-and-property-pages-mfc.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)

