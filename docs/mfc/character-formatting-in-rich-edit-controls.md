---
title: "Formattazione caratteri nei controlli Rich Edit | Microsoft Docs"
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
  - "CRichEditCtrl (classe), formattazione di caratteri in"
  - "formattazione [C++], caratteri"
  - "Rich Edit (controlli), formattazione di caratteri in"
ms.assetid: c80f4305-75ad-45f9-8d17-d83d0fe79be5
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Formattazione caratteri nei controlli Rich Edit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare le funzioni membro controllo Rich Edit \([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)\) ai caratteri di formato e recuperare le informazioni di formattazione.  Per i caratteri, è possibile specificare il carattere tipografico, ridimensionare, colorate e gli effetti in grassetto, corsivo e protetto.  
  
 È possibile applicare la formattazione carattere utilizzando le funzioni membro di [SetWordCharFormat](../Topic/CRichEditCtrl::SetWordCharFormat.md) e di [SetSelectionCharFormat](../Topic/CRichEditCtrl::SetSelectionCharFormat.md).  Per determinare la formattazione carattere corrente per il testo selezionato, utilizzare la funzione membro di [GetSelectionCharFormat](../Topic/CRichEditCtrl::GetSelectionCharFormat.md).  La struttura di [CHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787881) viene utilizzata con queste funzioni membro per specificare gli attributi del carattere.  Uno dei membri importanti di **CHARFORMAT** è **dwMask**.  In `SetSelectionCharFormat` e in `SetWordCharFormat`, **dwMask** specifica che gli attributi di caratteri verranno impostati dalla chiamata di funzione.  `GetSelectionCharFormat` segnala gli attributi del primo carattere della selezione; **dwMask** specifica gli attributi coerenti durante la selezione.  
  
 È inoltre possibile ottenere e impostare la formattazione "carattere" predefinita, ovvero la formattazione a tutti i caratteri inseriti avanti.  Ad esempio, se un'applicazione imposta la formattazione carattere predefinita in grassetto e l'utente quindi digitare un carattere, tale carattere è grassetto.  Per ottenere e impostare la formattazione carattere predefinita, utilizzare le funzioni membro di [SetDefaultCharFormat](../Topic/CRichEditCtrl::SetDefaultCharFormat.md) e di [GetDefaultCharFormat](../Topic/CRichEditCtrl::GetDefaultCharFormat.md).  
  
 "Protected" il carattere che l'attributo non modificare l'aspetto del testo.  Se i tentativi dell'utente di modificare il testo protetto, un controllo Rich Edit invia la finestra padre un messaggio di notifica di **EN\_PROTECTED**, consentendo alla finestra padre consentire o impedire la modifica.  Per ricevere il messaggio di notifica, è necessario abilitarlo utilizzando la funzione membro di [SetEventMask](../Topic/CRichEditCtrl::SetEventMask.md).  Per ulteriori informazioni sulla maschera eventi, vedere [Notifiche da un controllo Rich Edit](../mfc/notifications-from-a-rich-edit-control.md), più avanti in questo argomento.  
  
 Il colore di primo piano è un attributo di carattere, ma il colore di sfondo è una proprietà del controllo Rich Edit.  Per impostare il colore di sfondo, utilizzare la funzione membro di [SetBackgroundColor](../Topic/CRichEditCtrl::SetBackgroundColor.md).  
  
## Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)