---
title: "Etichette degli elementi del controllo Tree | Microsoft Docs"
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
  - "CTreeCtrl (classe), etichette di elementi"
  - "etichette di elementi"
  - "etichette di elementi, struttura ad albero (controlli)"
  - "etichette, elementi CTreeCtrl"
  - "struttura ad albero (controlli), etichette di elementi"
ms.assetid: fe834107-1a25-4280-aced-774c11565805
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Etichette degli elementi del controllo Tree
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In genere si specifica il testo dell'etichetta di un elemento quando si aggiunge l'elemento al controllo di struttura ad albero \([Problemi](../mfc/reference/ctreectrl-class.md)\).  La funzione membro di `InsertItem` possibile passare una struttura di [TVITEM](http://msdn.microsoft.com/library/windows/desktop/bb773456) che definisce le proprietà dell'elemento, inclusa una stringa contenente il testo dell'etichetta.  `InsertItem` dispone di diversi overload che possono essere chiamati dalle varie combinazioni di parametri.  
  
 Un controllo struttura ad albero alloca memoria per archiviare ogni elemento; il testo delle etichette dell'elemento prende una parte significativa della memoria.  Se l'applicazione gestisce una copia di stringhe nel controllo di struttura ad albero, è possibile ridurre i requisiti di memoria del controllo specificando il valore di **LPSTR\_TEXTCALLBACK** nel membro di **pszText** di `TV_ITEM` o il parametro di `lpszItem` anziché passare le stringhe effettive al controllo di struttura ad albero.  Utilizzando le cause di **LPSTR\_TEXTCALLBACK** il controllo struttura ad albero per recuperare il testo dell'etichetta di un elemento dall'applicazione ogni volta che l'elemento ridisegnare.  Per recuperare il testo, il controllo struttura ad albero invia un messaggio di notifica di [TVN\_GETDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb773518), che include l'indirizzo di una struttura di [NMTVDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb773418).  È necessario rispondere impostando i membri appropriati della struttura inclusa.  
  
 Un controllo struttura ad albero utilizza la memoria allocata dall'heap del processo che crea il controllo struttura ad albero.  Numero massimo di elementi in un controllo struttura ad albero dipende dalla quantità di memoria disponibile nell'heap.  Ogni elemento ha 64 byte.  
  
## Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)