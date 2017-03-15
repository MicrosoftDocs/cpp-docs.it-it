---
title: "Modifica dell&#39;etichetta del controllo Tree | Microsoft Docs"
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
  - "CTreeCtrl (classe), modifica di etichette"
  - "modifica delle etichette dei controlli struttura ad albero"
  - "modifica di etichette nella classe CTreeCtrl"
  - "struttura ad albero (controlli), modifica di etichette"
ms.assetid: 6cde2ac3-43ee-468f-bac2-cf1a228ad32d
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Modifica dell&#39;etichetta del controllo Tree
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'utente può modificare direttamente le etichette di elementi in un controllo di struttura ad albero \([Problemi](../mfc/reference/ctreectrl-class.md)\) che presenta lo stile di **TVS\_EDITLABELS**.  L'utente inizia modifica facendo clic sull'etichetta dell'elemento che presenta lo stato attivo.  Avvia un'applicazione modificando utilizzando la funzione membro di [EditLabel](../Topic/CTreeCtrl::EditLabel.md).  Il controllo struttura ad albero invia una notifica quando inizia la modifica e quando viene annullato o completato.  Quando la modifica è stato completato, è responsabile dell'aggiornamento l'etichetta dell'elemento, se necessario.  
  
 Quando la modifica dell'etichetta avvia, un controllo struttura ad albero invia un messaggio di notifica di [TVN\_BEGINLABELEDIT](http://msdn.microsoft.com/library/windows/desktop/bb773506).  L'elaborazione di questa notifica, è possibile consentire la modifica delle etichette e impedire la modifica di altre.  Restituire 0 consente di modificare e restituire diverso da zero impedisce la.  
  
 Quando la modifica dell'etichetta viene annullata o completata, un controllo struttura ad albero invia un messaggio di notifica di [TVN\_ENDLABELEDIT](http://msdn.microsoft.com/library/windows/desktop/bb773515).  Il parametro di `lParam` è l'indirizzo di una struttura di [NMTVDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb773418).  Il membro di **elemento** è una struttura di [TVITEM](http://msdn.microsoft.com/library/windows/desktop/bb773456) che identifica l'elemento e include il testo modificato.  È responsabile dell'aggiornamento l'etichetta dell'elemento, se necessario, ad esempio dopo la convalida della stringa modificata.  Il membro di **pszText** di `TV_ITEM` è 0 per la modifica è stata annullata.  
  
 Durante la modifica dell'etichetta, in genere in risposta al messaggio di notifica di [TVN\_BEGINLABELEDIT](http://msdn.microsoft.com/library/windows/desktop/bb773506), è possibile ottenere un puntatore al controllo di modifica utilizzato per l'etichetta che modifica utilizzando la funzione membro di [GetEditControl](../Topic/CTreeCtrl::GetEditControl.md).  È possibile chiamare la funzione membro di [SetLimitText](../Topic/CEdit::SetLimitText.md) del controllo di modifica per limitare la quantità di testo che un utente può immettere o sottoclasse il controllo di modifica per intercettare e rimuovere i caratteri non validi.  Notare, tuttavia, che il controllo di modifica viene visualizzata soltanto *dopo* **TVN\_BEGINLABELEDIT** viene inviata.  
  
## Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)