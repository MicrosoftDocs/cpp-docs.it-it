---
title: "Panoramica sul controllo Rich Edit | Microsoft Docs"
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
  - "Rich Edit (controlli)"
ms.assetid: ad589b9f-a3fd-4820-bf1f-6b1965997e68
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Panoramica sul controllo Rich Edit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!IMPORTANT]
>  Se si utilizza un controllo Rich Edit in una finestra di dialogo \(indipendentemente dal fatto che l'applicazione è lo SDI, MDI, o su windows\), è necessario chiamare una volta [AfxInitRichEdit](../Topic/AfxInitRichEdit.md) prima che la finestra di dialogo visualizza.  Una posizione tipico per chiamare questa funzione è la funzione membro di `InitInstance` del programma.  Non è necessario chiamarlo per ogni volta che viene visualizzata la finestra di dialogo, solo la prima volta.  Non è necessario chiamare `AfxInitRichEdit` se si utilizza `CRichEditView`.  
  
 I controlli Rich Edit \([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)\) forniscono un'interfaccia di programmazione per formattare il testo.  Tuttavia, un'applicazione deve implementare tutti i componenti dell'interfaccia utente necessarie per rendere disponibili le operazioni di formattazione dell'utente.  Ovvero supportato dal controllo Rich Edit la modifica degli attributi di paragrafo o carattere del testo selezionato.  Alcuni esempi degli attributi di carattere sono in grassetto, corsivo, famiglia di carattere e dimensione in punti.  Esempi di attributi di paragrafo includono alignment, margins e le tabulazioni.  Tuttavia, è responsabilità per fornire l'interfaccia utente, se lo si pulsanti, voci di menu, o una finestra di dialogo di caratteri di formato.  Esistono inoltre funzioni per eseguire una query sul controllo Rich Edit per gli attributi della selezione corrente.  Utilizzare queste funzioni per visualizzare le impostazioni correnti per gli attributi, ad esempio, impostare un segno di spunta sull'interfaccia utente del comando se la selezione è stata l'attributo di formattazione dei caratteri grassetto.  
  
 Per ulteriori informazioni sui caratteri e alla formattazione paragrafo, vedere più avanti [Formattazione carattere](../mfc/character-formatting-in-rich-edit-controls.md) e [Formattazione dei paragrafi](../mfc/paragraph-formatting-in-rich-edit-controls.md) in questo argomento.  
  
 I controlli Rich Edit supportano quasi tutti operazioni e messaggi di notifica utilizzati con i controlli di modifica a più righe.  Pertanto, le applicazioni già utilizzano i controlli di modifica possono essere facilmente modificate per utilizzare i controlli Rich Edit.  Altri messaggi e le notifiche permettono alle applicazioni di accedere alla funzionalità specifiche per i controlli Rich Edit.  Per informazioni sui controlli di modifica, vedere [CEdit](../mfc/reference/cedit-class.md).  
  
 Per ulteriori informazioni sulle notifiche, vedere più avanti [Notifiche da un controllo Rich Edit](../mfc/notifications-from-a-rich-edit-control.md) in questo argomento.  
  
## Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)