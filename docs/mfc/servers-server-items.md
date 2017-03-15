---
title: "Server: elementi server | Microsoft Docs"
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
  - "architettura [C++], elemento server"
  - "applicazioni server OLE, elementi server"
  - "elementi server"
  - "elementi server, implementazione"
  - "server [C++], elementi server"
ms.assetid: 28ba81a1-726a-4728-a52d-68bc7efd5a3c
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Server: elementi server
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando un contenitore avvia un server in modo che l'utente possa modificare un elemento OLE incorporato o collegato, l'applicazione server crea un "elemento server". L'elemento server, ovvero un oggetto di una classe derivata da `COleServerItem`, fornisce un'interfaccia tra il documento server e l'applicazione contenitore.  
  
 La classe `COleServerItem` definisce diverse funzioni membro di cui è possibile eseguire l'override che vengono chiamate da OLE, in genere in risposta alle richieste del contenitore.  Elementi server possono rappresentare una parte o l'intero documento server.  Quando un elemento OLE è incorporato nel documento contenitore, l'elemento server rappresenta l'intero documento server.  Quando l'elemento OLE è collegato, l'elemento server può rappresentare una parte del documento server o l'intero documento, a seconda che il collegamento sia verso una parte o l'intero documento.  
  
 Nell'esempio di [HIERSVR](../top/visual-cpp-samples.md), ad esempio, la classe dell'elemento server, **CServerItem**, ha un membro che è un puntatore a un oggetto della classe **CServerNode**.  L'oggetto **CServerNode** è un nodo nel documento \(un albero\) dell'applicazione HIERSVR.  Quando l'oggetto **CServerNode** è il nodo radice, l'oggetto **CServerItem** rappresenta l'intero documento.  Quando l'oggetto **CServerNode** è un nodo figlio, l'oggetto **CServerItem** rappresenta una parte del documento.  Vedere l'esempio OLE MFC [HIERSVR](../top/visual-cpp-samples.md) per un esempio di questa interazione.  
  
##  <a name="_core_implementing_server_items"></a> Implementare gli elementi server  
 Se si utilizza la creazione guidata applicazione per scrivere il codice "iniziale" per l'applicazione, per includere gli elementi server nel codice iniziale è sufficiente scegliere una delle opzioni server dalla pagina opzioni OLE.  Se si aggiungono elementi server a un'applicazione esistente, eseguire le operazioni seguenti:  
  
#### Per implementare un elemento server  
  
1.  Derivare una classe da `COleServerItem`.  
  
2.  Nella classe derivata, eseguire l'override della funzione membro `OnDraw`.  
  
     Il framework chiama `OnDraw` per eseguire il rendering dell'elemento OLE in un metafile.  L'applicazione contenitore utilizza tale metafile per eseguire il rendering dell'elemento.  La classe di visualizzazione dell'applicazione dispone inoltre di una funzione membro `OnDraw`, utilizzata per eseguire il rendering dell'elemento quando l'applicazione server è attiva.  
  
3.  Implementare un override di `OnGetEmbeddedItem` per la classe documento server.  Per ulteriori informazioni, vedere l'articolo [Server: Implementare i documenti server](../mfc/servers-implementing-server-documents.md) e l'esempio OLE MFC [HIERSVR](../top/visual-cpp-samples.md).  
  
4.  Implementare la funzione membro `OnGetExtent` della classe dell'elemento server.  Il framework chiama questa funzione per recuperare la dimensione dell'elemento.  L'implementazione predefinita non esegue alcuna operazione.  
  
##  <a name="_core_a_tip_for_server.2d.item_architecture"></a> Un suggerimento sull'architettura dell'elemento server  
 Come indicato in [Implementare gli elementi server](#_core_implementing_server_items), le applicazioni server devono essere in grado di eseguire il rendering degli elementi sia nella visualizzazione del server che nel metafile utilizzato dall'applicazione contenitore.  Nell'architettura dell'applicazione della libreria MFC, la funzione membro `OnDraw` della classe di visualizzazione esegue il rendering dell'elemento quando viene modificato \(vedere [CView::OnDraw](../Topic/CView::OnDraw.md) nel *Guida alla libreria delle classi*\).  In tutti gli altri casi l'elemento del server `OnDraw` esegue il rendering dell'elemento in un metafile \(vedere [COleServerItem::OnDraw](../Topic/COleServerItem::OnDraw.md)\).  
  
 È possibile evitare la duplicazione del codice scrivendo funzioni di supporto nella classe del documento server e chiamandole dalle funzioni `OnDraw` nelle classi dell'elemento server e di visualizzazione.  L'esempio OLE MFC [HIERSVR](../top/visual-cpp-samples.md) utilizza questa strategia: le funzioni **CServerView::OnDraw** e **CServerItem::OnDraw** chiamano entrambe **CServerDoc::DrawTree** per eseguire il rendering dell'elemento.  
  
 La visualizzazione e l'elemento hanno entrambi funzioni membro `OnDraw`, perché entrambi disegnano in diverse circostanze.  La visualizzazione deve considerare fattori quali lo zoom, dimensione e ambito di selezione, ritagli ed elementi dell'interfaccia utente quali barre di scorrimento.  L'elemento server, invece, disegna sempre l'intero oggetto OLE.  
  
 Per ulteriori informazioni, vedere [CView::OnDraw](../Topic/CView::OnDraw.md), [COleServerItem](../mfc/reference/coleserveritem-class.md), [COleServerItem::OnDraw](../Topic/COleServerItem::OnDraw.md) e [COleServerDoc::OnGetEmbeddedItem](../Topic/COleServerDoc::OnGetEmbeddedItem.md) nella *Guida alla libreria di classi*.  
  
## Vedere anche  
 [Server](../mfc/servers.md)