---
title: "Mappe messaggi derivate | Microsoft Docs"
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
  - "mappe messaggi derivate"
  - "gestione dei messaggi, gestori messaggi derivati"
  - "mappe messaggi, derivati"
  - "messaggi, routing"
ms.assetid: 21829556-6e64-40c3-8279-fed85d99de77
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Mappe messaggi derivate
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Durante la gestione dei messaggi, controllare la mappa messaggi di una classe non è la fine della storia della mappa messaggi.  Cosa accade se la classe `CMyView` \(derivata da `CView`\) non ha alcuna voce corrispondente per un messaggio?  
  
 Tenere presente che `CView`, la classe base di `CMyView`, è derivata a sua volta da `CWnd`.  Pertanto `CMyView` *è* un `CView` ed *è* un `CWnd`.  Ognuna di queste classi disponibile di una propria mappa messaggi.  La figura seguente "Una Gerarchia di Visualizzazione" mostra la relazione gerarchica delle classi, ma tenere presente che un oggetto `CMyView` è un singolo oggetto che ha le caratteristiche di tutte e tre le classi.  
  
 ![Gerarchia di una visualizzazione](../mfc/media/vc38621.png "vc38621")  
Una Gerarchia di Visualizzazione  
  
 Se pertanto un messaggio non può corrispondere nella mappa messaggi della classe `CMyView`, il framework cerca anche la mappa messaggi dell'immediata classe di base relativa.  La macro `BEGIN_MESSAGE_MAP` all'inizio della mappa messaggi specifica due nomi di classe come suoi argomenti:  
  
 [!code-cpp[NVC_MFCMessageHandling#2](../mfc/codesnippet/CPP/derived-message-maps_1.cpp)]  
  
 Il primo argomento indica il nome della classe alla quale la mappa messaggi appartiene.  Il secondo argomento fornisce una connessione all'immediata classe di base \- `CView` qui \- pertanto il framework può trovare anch'esso la propria mappa messaggi.  
  
 I gestori messaggi forniti in una classe base sono pertanto ereditati dalla classe derivata.  È molto simile alle normali funzioni membro virtuali, senza la necessità di rendere virtuali tutte le funzioni membro del gestore.  
  
 Se nessun gestore viene trovato in una qualsiasi delle mappe messaggi della classe base, l'elaborazione predefinita del messaggio viene eseguita.  Se il messaggio è un comando, il framework lo invia alla destinazione di comando seguente.  Se si tratta di un messaggio standard di Windows, il messaggio viene passato alla routine della finestra predefinita appropriata.  
  
 Per velocizzare la corrispondenza della mappa messaggi, il framework memorizza nella cache le corrispondenze recenti sulla probabilità che riceverà di nuovo lo stesso messaggio.  Una conseguenza di ciò è che il framework elabora in modo abbastanza efficiente i messaggi non gestiti.  Le mappe messaggi sono anche più efficienti nello spazio delle implementazioni che utilizzano funzioni virtuali.  
  
## Vedere anche  
 [Come vengono cercate le mappe messaggi nel framework](../mfc/how-the-framework-searches-message-maps.md)