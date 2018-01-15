---
title: 'TN040: MFC OLE In-ridimensionamento sul posto e zoom | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.mfc.ole
dev_langs: C++
helpviewer_keywords:
- resizing in-place
- TN040
- zooming and in-place activation
- in-place activation, zooming and resizing
ms.assetid: 4d7859bd-0b2e-4254-be62-2735cecf02c6
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b1113da01e58ec00cd4420aab4424b1c20e127e0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tn040-mfcole-in-place-resizing-and-zooming"></a>TN040: ridimensionamento sul posto e zoom MFC/OLE
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota verrà illustrati i problemi relativi alla modifica sul posto e come un server deve eseguire lo zoom corretto ridimensionamento sul posto. Con l'attivazione sul posto, il concetto WYSIWYG viene ulteriormente passaggio in tale contenitori e server cooperare tra loro e interpretare in particolare la specifica OLE in gran parte allo stesso modo.  
  
 A causa di stretta interazione tra un contenitore e i server che supporta l'attivazione sul posto sono disponibili numerosi aspettative dall'utente finale che è necessario mantenere:  
  
-   La visualizzazione di presentazione (metafile disegnato il `COleServerItem::OnDraw` eseguire l'override) deve esattamente lo stesso aspetto quando viene disegnato per la modifica (ad eccezione del fatto che gli strumenti di modifica non sono visibili).  
  
-   Quando il contenitore esegue lo zoom avanti, la finestra di server deve troppo!  
  
-   Il contenitore e il server deve visualizzare gli oggetti per la modifica mediante le stesse metriche. Ciò significa utilizzare una modalità di mapping in base al numero di *logico* pixel per pollice, ovvero non fisico pixel per pollice, durante il rendering sul dispositivo di visualizzazione.  
  
> [!NOTE]
>  Poiché l'attivazione sul posto si applica solo agli elementi incorporati (non collegati), lo zoom si applica solo a oggetti incorporati. Verrà visualizzato in entrambe le API `COleServerDoc` e `COleServerItem` che vengono utilizzati per lo zoom. Il motivo per questo dicotomia è che solo le funzioni che sono valide per elementi collegati e incorporati sono `COleServerItem` (in questo modo è possibile ottenere un'implementazione comune) e funzioni che sono valide solo per gli oggetti incorporati sono disponibili nel `COleServerDoc` classe (dal punto di vista del server, il `document` incorporati).  
  
 La maggior parte delle attività viene posizionato sull'implementatore di server, in quanto il server deve essere a conoscenza del fattore di zoom del contenitore e modificare l'interfaccia di modifica come appropriato. Ma come server di determinare che il contenitore utilizza il fattore di zoom  
  
## <a name="mfc-support-for-zooming"></a>Supporto MFC per lo zoom  
 Il fattore di zoom corrente può essere determinato chiamando `COleServerDoc::GetZoomFactor`. La chiamata a questo quando il documento non è attivo sul posto causerà sempre un fattore di zoom 100% (o di rapporto 1:1). Chiamata mentre attivi sul posto possono restituire un valore diverso da 100%.  
  
 Per un esempio dello zoom in modo corretto, vedere l'esempio OLE MFC [HIERSVR](../visual-cpp-samples.md). Lo zoom avanti HIERSVR è complicato dal fatto che venga visualizzato il testo e testo, in generale, non è scalabile in modo lineare (hint, convenzioni tipografiche, progettazione larghezze e altezze tutti complicare la questione). Comunque, HIERSVR è un riferimento ragionevole per l'implementazione di zoom correttamente e pertanto è l'esercitazione MFC [SCRIBBLE](../visual-cpp-samples.md) (passaggio 7).  
  
 `COleServerDoc::GetZoomFactor`Determina il fattore di zoom in una serie di metriche disponibili dal contenitore o dall'implementazione di base del `COleServerItem` e `COleServerDoc` classi. In breve, il fattore di zoom corrente viene determinato tramite la formula seguente:  
  
```  
Position Rectangle (PR) / Container Extent (CE)  
```  
  
 Il rettangolo di posizione è determinato dal contenitore. Viene restituito al server durante l'attivazione sul posto quando `COleClientItem::OnGetItemPosition` viene chiamato e viene aggiornato quando il contenitore chiama il server `COleServerDoc::OnSetItemRects` (con una chiamata a `COleClientItem::SetItemRects`).  
  
 L'entità contenitore è leggermente più difficile da calcolare. Se il contenitore è stato chiamato `COleServerItem::OnSetExtent` (con una chiamata a `COleClientItem::SetExtent`), quindi l'entità contenitore è il valore convertito in pixel in base al numero di pixel per pollice logico. Se il contenitore non è chiamato SetExtent (che è in genere il caso), sarà l'entità contenitore della dimensione restituita da `COleServerItem::OnGetExtent`. In tal caso, se il contenitore non è chiamato SetExtent, il framework presuppone che in caso contrario il contenitore deve avere chiamato, con 100% dell'estensione naturale (il valore restituito da **COleServerItem::GetExtent**). In altre parole, il framework presuppone che il contenitore è la visualizzazione di 100% (inferiore, non di più) dell'elemento.  
  
 È importante notare che anche se `COleServerItem::OnSetExtent` e `COleServerItem::OnGetExtent` presentano nomi simili, che non modificano lo stesso attributo dell'elemento. `OnSetExtent`viene chiamato per il server di comunicare la quantità dell'oggetto è visibile nel contenitore (indipendentemente dal fattore di zoom) e `OnGetExtent` viene chiamato dal contenitore per determinare le dimensioni ideali dell'oggetto.  
  
 Osservando ognuna delle API del coinvolte, è possibile ottenere un'immagine più chiara:  
  
## <a name="coleserveritemongetextent"></a>COleServerItem::OnGetExtent  
 Questa funzione deve restituire la dimensione"standard" in unità HIMETRIC dell'elemento. Il modo migliore per considerare le "dimensioni naturale" consiste nel definire la dimensione che potrebbe essere stampato. Le dimensioni restituite in questo campo sono costante per un particolare elemento di contenuto (molto simile metafile, in cui è costante per un particolare elemento). Questa dimensione non cambia quando lo zoom viene applicato all'elemento. In genere non viene modificato quando il contenitore consente l'elemento più o meno spazio chiamando `OnSetExtent`. Un esempio di una modifica potrebbe essere quella di un semplice editor di testo con alcuna funzionalità di "margine" che è stato eseguito il wrapping in base all'ultimo extent inviato dal contenitore di testo. Se un server di modifica, il server deve impostare probabilmente il OLEMISC_RECOMPOSEONRESIZE bit nel Registro di sistema (vedere la documentazione di OLE SDK per ulteriori informazioni su questa opzione).  
  
## <a name="coleserveritemonsetextent"></a>COleServerItem::OnSetExtent  
 Questa funzione viene chiamata quando il contenitore viene visualizzato "più o meno" dell'oggetto. La maggior parte dei contenitori non chiamerà affatto. L'implementazione predefinita archivia l'ultimo valore ricevuto dal contenitore in 'm_sizeExtent', che viene utilizzato in `COleServerDoc::GetZoomFactor` durante il calcolo del valore di EXTENT contenitore descritto in precedenza.  
  
## <a name="coleserverdoconsetitemrects"></a>COleServerDoc::OnSetItemRects  
 Questa funzione viene chiamata solo quando il documento è attiva. Viene chiamato quando il contenitore Aggiorna la posizione dell'elemento o il ritaglio applicato alla voce. Il rettangolo di posizione, come illustrato in precedenza, fornisce il numeratore per il calcolo di fattore di zoom. Un server può richiedere che la posizione dell'elemento deve essere modificato chiamando `COleServerDoc::RequestPositionChange`. Il contenitore può o potrebbe non rispondere a questa richiesta chiamando `OnSetItemRects` (con una chiamata a **COleServerItem::SetItemRects**).  
  
## <a name="coleserverdocondraw"></a>COleServerDoc::OnDraw  
 È importante tenere presente che il metafile creato eseguendo l'override di `COleServerItem::OnDraw` produce esattamente il metafile stesso, indipendentemente dal fattore di zoom corrente. Il contenitore verrà ridimensionato il metafile come appropriato. Si tratta di un'importante differenza tra la visualizzazione `OnDraw` e dell'elemento server `OnDraw`. Gli handle di visualizzazione lo zoom, l'elemento crea solo un *sul quale* metafile e lascia il contenitore per eseguire lo zoom avanti appropriato.  
  
 È il modo migliore per assicurare che il server funziona correttamente per utilizzare l'implementazione di `COleServerDoc::GetZoomFactor` se il documento è attiva.  
  
## <a name="mfc-support-for-in-place-resizing"></a>Supporto MFC per il ridimensionamento sul posto  
 MFC implementa completamente l'interfaccia di ridimensionamento sul posto, come descritto nella specifica OLE 2. L'interfaccia utente è supportata per il `COleResizeBar` classe, un messaggio personalizzato **WM_SIZECHILD**e una gestione speciale di questo messaggio nel `COleIPFrameWnd`.  
  
 È consigliabile implementare una gestione differente del messaggio rispetto a quello fornito dal framework. Come descritto in precedenza, il framework lascia i risultati di ridimensionamento sul posto fino al contenitore, il server risponde alla modifica del fattore di zoom. Se il contenitore reagisce impostando entrambi gli EXTENT di contenitore e il rettangolo di posizione durante l'elaborazione di relativo `COleClientItem::OnChangeItemPosition` (chiamato in seguito a una chiamata a `COleServerDoc::RequestPositionChange`), quindi il ridimensionamento sul posto comporterà la visualizzazione "più o meno" dell'elemento di modifica finestra. Se il contenitore reagisce impostando semplicemente il rettangolo di posizione durante l'elaborazione di `COleClientItem::OnChangeItemPosition`, verrà modificato il fattore di zoom e verrà visualizzato l'elemento "ingrandito o ridotto in".  
  
 Un server può controllare (in una certa) cosa accade durante la negoziazione. Un foglio di calcolo, ad esempio potrebbe scegliere di mostrare il numero di celle quando l'utente ridimensiona la finestra durante la modifica dell'elemento sul posto. Un programma di elaborazione testi potrebbe scegliere di modificare i margini della pagina"" in modo che sono uguali a quelle della finestra e ridisporre il testo per il nuovo margine. Server di implementano questo modificando l'estensione naturale (della dimensione restituita da `COleServerItem::OnGetExtent`) quando è terminato il ridimensionamento. In questo modo il rettangolo di posizione sia l'entità contenitore per la modifica della stessa quantità, determinando lo stesso fattore di zoom, ma una o più piccola area di visualizzazione. Inoltre, più o meno del documento saranno visibili nel metafile generato da `OnDraw`. In questo caso, il documento stesso in fase di modifica quando l'utente ridimensiona l'elemento, anziché solo l'area di visualizzazione.  
  
 È possibile implementare il ridimensionamento personalizzato e sfruttare l'interfaccia utente fornita da `COleResizeBar` eseguendo l'override di **WM_SIZECHILD** dei messaggi nel `COleIPFrameWnd` classe. Per ulteriori informazioni sulle specifiche di **WM_SIZECHILD**, vedere [Nota tecnica 24](../mfc/tn024-mfc-defined-messages-and-resources.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

