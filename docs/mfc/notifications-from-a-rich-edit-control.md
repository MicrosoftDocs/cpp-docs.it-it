---
title: "Notifiche da un controllo Rich Edit | Microsoft Docs"
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
  - "CRichEditCtrl (classe), notifiche"
  - "messaggi, notifica"
  - "notifiche, da CRichEditCtrl"
  - "Rich Edit (controlli), notifiche"
ms.assetid: eb5304fe-f4f3-4557-9ebf-3095dea383c4
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Notifiche da un controllo Rich Edit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Eventi rapporto dei messaggi di notifica che influiscono su un controllo Rich Edit \([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)\).  Può essere elaborato dalla finestra padre o, utilizzando la reflection di messaggio, dal controllo Rich Edit stesso.  I controlli Rich Edit supportano tutti i messaggi di notifica utilizzati con i controlli di modifica e diversi aggiuntivi.  È possibile determinare quali messaggi di notifica un controllo Rich Edit invia la finestra padre impostando la maschera "evento".  
  
 Per impostare la maschera eventi per un controllo Rich Edit, utilizzare la funzione membro di [SetEventMask](../Topic/CRichEditCtrl::SetEventMask.md).  È possibile recuperare la maschera di eventi corrente per un controllo Rich Edit utilizzando la funzione membro di [GetEventMask](../Topic/CRichEditCtrl::GetEventMask.md).  
  
 I paragrafi seguenti sono diverse notifiche specifiche e il relativo utilizzo:  
  
-   **EN\_MSGFILTER** che gestisce la notifica di **EN\_MSGFILTER** della classe, o il controllo Rich Edit o la relativa finestra padre, filtra tutti i tastiera e input del mouse sul controllo.  Il gestore può impedire il messaggio il mouse o la tastiera da essere elaborato o può modificare il messaggio modificando la struttura di [MSGFILTER](http://msdn.microsoft.com/library/windows/desktop/bb787936) specificata.  
  
-   Handle di**EN\_PROTECTED**il messaggio di notifica di **EN\_PROTECTED** per rilevare quando l'utente tenta di modificare il testo protetto.  Per contrassegnare un intervallo di testo come protected, è possibile impostare l'effetto protetto del carattere.  Per ulteriori informazioni, vedere [Formattazione carattere nei controlli Rich Edit](../mfc/character-formatting-in-rich-edit-controls.md).  
  
-   **EN\_DROPFILES** è possibile consentire all'utente per rilasciare i file in un controllo Rich Edit sviluppa il messaggio di notifica di **EN\_DROPFILES**.  La struttura specifica di [ENDROPFILES](http://msdn.microsoft.com/library/windows/desktop/bb787895) contiene informazioni sui file che vengono eliminati.  
  
-   **EN\_SELCHANGE** un'applicazione può rilevare quando la selezione corrente viene modificata sviluppa il messaggio di notifica di **EN\_SELCHANGE**.  Il messaggio di notifica viene specificata una struttura di [SELCHANGE](http://msdn.microsoft.com/library/windows/desktop/bb787952) che contiene informazioni sulla nuova selezione.  
  
## Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)