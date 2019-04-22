---
title: 'Server: Elementi del server'
ms.date: 11/04/2016
helpviewer_keywords:
- server items, implementing
- servers [MFC], server items
- architecture [MFC], server-item
- server items
- OLE server applications [MFC], server items
ms.assetid: 28ba81a1-726a-4728-a52d-68bc7efd5a3c
ms.openlocfilehash: abee619aa921b3e036a2bbeb1b4f5ae08d83f5bb
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58767899"
---
# <a name="servers-server-items"></a>Server: Elementi del server

Quando un contenitore avvia un server in modo che l'utente possa modificare un elemento OLE incorporato o collegato, l'applicazione server crea un "elemento server". L'elemento server, ovvero un oggetto di una classe derivata da `COleServerItem`, fornisce un'interfaccia tra il documento server e l'applicazione contenitore.

La classe `COleServerItem` definisce diverse funzioni membro di cui è possibile eseguire l'override che vengono chiamate da OLE, in genere in risposta alle richieste del contenitore. Gli elementi server possono rappresentare una parte o l'intero documento server. Quando un elemento OLE è incorporato nel documento contenitore, l'elemento server rappresenta l'intero documento server. Quando l'elemento OLE è collegato, l'elemento server può rappresentare una parte del documento server o l'intero documento, a seconda che il collegamento sia verso una parte o l'intero documento.

Nel [HIERSVR](../overview/visual-cpp-samples.md) campionamento, ad esempio, la classe dell'elemento server, `CServerItem`, contiene un membro che è un puntatore a un oggetto della classe `CServerNode`. Il `CServerNode` oggetto è un nodo nel documento dell'applicazione HIERSVR, ovvero una struttura ad albero. Quando la `CServerNode` oggetto è il nodo radice, il `CServerItem` oggetto rappresenta l'intero documento. Quando la `CServerNode` oggetto è un nodo figlio, il `CServerItem` oggetto rappresenta una parte del documento. Vedere l'esempio OLE MFC [HIERSVR](../overview/visual-cpp-samples.md) per un esempio di questa interazione.

##  <a name="_core_implementing_server_items"></a> Implementazione di elementi Server

Se si utilizza la creazione guidata applicazione per scrivere il codice "di avvio" dell'applicazione, per includere gli elementi server nel codice di avvio è sufficiente scegliere una delle opzioni server dalla pagina Opzioni OLE. Se si aggiungono elementi server a un'applicazione esistente, attenersi ai passaggi indicati di seguito:

#### <a name="to-implement-a-server-item"></a>Per implementare un elemento server

1. Derivare una classe da `COleServerItem`.

1. Nella classe derivata, eseguire l'override della funzione membro `OnDraw`.

   Il framework chiama `OnDraw` per eseguire il rendering dell'elemento OLE in un metafile. L'applicazione contenitore utilizza tale metafile per eseguire il rendering dell'elemento. La classe di visualizzazione dell'applicazione dispone inoltre di una funzione membro `OnDraw`, utilizzata per eseguire il rendering dell'elemento quando l'applicazione server è attiva.

1. Implementare un override di `OnGetEmbeddedItem` per la classe documento server. Per altre informazioni, vedere l'articolo [server: Implementazione di documenti Server](../mfc/servers-implementing-server-documents.md) e l'esempio OLE MFC [HIERSVR](../overview/visual-cpp-samples.md).

1. Implementare la funzione membro `OnGetExtent` della classe dell'elemento server. Il framework chiama questa funzione per recuperare la dimensione dell'elemento. L'implementazione predefinita non esegue alcuna operazione.

##  <a name="_core_a_tip_for_server.2d.item_architecture"></a> Un suggerimento per l'architettura di Server-elemento

Come indicato nelle [implementazione di elementi Server](#_core_implementing_server_items), le applicazioni server devono essere in grado di eseguire il rendering di elementi nella visualizzazione del server e nel metafile utilizzato dall'applicazione contenitore. In applicazione, la classe di visualizzazione dell'architettura della libreria Microsoft Foundation classe `OnDraw` funzione membro esegue il rendering l'elemento quando viene modificato (vedere [CView::](../mfc/reference/cview-class.md#ondraw) nel *riferimenti alla libreria di classi* ). L'elemento di server `OnDraw` esegue il rendering l'elemento in un metafile in tutti gli altri casi (vedere [COleServerItem:: OnDraw](../mfc/reference/coleserveritem-class.md#ondraw)).

È possibile evitare la duplicazione del codice scrivendo funzioni di supporto nella classe del documento server e chiamandole dalle funzioni `OnDraw` nelle classi dell'elemento server e di visualizzazione. L'esempio OLE MFC [HIERSVR](../overview/visual-cpp-samples.md) utilizza questa strategia: le funzioni `CServerView::OnDraw` e `CServerItem::OnDraw` chiamano entrambe `CServerDoc::DrawTree` per il rendering dell'elemento.

La visualizzazione e l'elemento hanno entrambi funzioni membro `OnDraw`, perché eseguono il disegno in circostanze diverse. La visualizzazione deve considerare fattori quali lo zoom, la dimensione e l'ambito di selezione, il ritaglio e gli elementi dell'interfaccia utente quali le barre di scorrimento. L'elemento server, invece, disegna sempre l'intero oggetto OLE.

Per altre informazioni, vedere [CView:: OnDraw](../mfc/reference/cview-class.md#ondraw), [COleServerItem](../mfc/reference/coleserveritem-class.md), [COleServerItem:: OnDraw](../mfc/reference/coleserveritem-class.md#ondraw), e [COleServerDoc:: OnGetEmbeddedItem](../mfc/reference/coleserverdoc-class.md#ongetembeddeditem)nel *riferimenti alla libreria di classi*.

## <a name="see-also"></a>Vedere anche

[Server](../mfc/servers.md)
