---
title: "Selezione elementi controllo Tree | Microsoft Docs"
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
  - "controlli [MFC], selezione di elementi in"
  - "CTreeCtrl (classe), selezione di elementi"
  - "selezione di elementi nei controlli struttura ad albero"
  - "struttura ad albero (controlli), selezione di elementi"
ms.assetid: 7bcb3b16-b9c8-4c06-9350-7bc3c1c5009b
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Selezione elementi controllo Tree
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando la selezione cambia da un elemento a un altro, un controllo struttura ad albero \([Problemi](../mfc/reference/ctreectrl-class.md)\) invia [TVN\_SELCHANGING](http://msdn.microsoft.com/library/windows/desktop/bb773547) e i messaggi di notifica di [TVN\_SELCHANGED](http://msdn.microsoft.com/library/windows/desktop/bb773544).  Entrambe le notifiche includono un valore che specifica se la modifica è il risultato di un clic del mouse o una sequenza di tasti.  Le notifiche includono anche informazioni sull'elemento che si sta guadagnando la selezione e l'elemento che si sta della selezione.  È possibile utilizzare queste informazioni per impostare gli attributi dell'elemento che dipendono dallo stato di selezione dell'elemento.  Restituire **TRUE** in risposta a **TVN\_SELCHANGING** impedisce la selezione di modificare; restituire **FALSE** consente la modifica.  
  
 Un'applicazione può modificare la selezione chiamando la funzione membro di [SelectItem](../Topic/CTreeCtrl::SelectItem.md).  
  
## Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)