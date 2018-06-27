---
title: 'TN040: MFC OLE In-Place ridimensionandoli e lo zoom | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.mfc.ole
dev_langs:
- C++
helpviewer_keywords:
- resizing in-place
- TN040
- zooming and in-place activation
- in-place activation, zooming and resizing
ms.assetid: 4d7859bd-0b2e-4254-be62-2735cecf02c6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6dbd817e6bcb9c7ff526bef98bd5c2c8c1f1bb3e
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36955170"
---
# <a name="tn040-mfcole-in-place-resizing-and-zooming"></a>TN040: ridimensionamento sul posto e zoom MFC/OLE
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 In questa nota verrà illustrati i problemi relativi alla modifica sul posto e come un server deve eseguire lo zoom corretto e ridimensionamento sul posto. Con l'attivazione sul posto, il concetto WYSIWYG viene acquisito un unico passaggio ulteriormente in tale contenitori e server cooperano tra loro e interpretano in particolare la specifica OLE nello stesso modo.  
  
 A causa la chiusura interazione di un contenitore e un server che supportano l'attivazione sul posto esistono numerosi comportamenti previsti dall'utente finale che è necessario mantenere:  
  
-   La visualizzazione di presentazione (il metafile disegnato `COleServerItem::OnDraw` eseguire l'override) deve esattamente lo stesso aspetto quando viene disegnato per la modifica (ad eccezione del fatto che gli strumenti di modifica non sono visibili).  
  
-   Quando il contenitore esegue lo zoom avanti, la finestra di server deve troppo!  
  
-   Il contenitore e il server deve visualizzare gli oggetti per la modifica mediante le stesse metriche. Ciò implica l'uso di una modalità di mapping in base al numero di *logico* pixel per pollice, ovvero non fisico pixel per pollice, durante il rendering sul dispositivo di visualizzazione.  
  
> [!NOTE]
>  Poiché l'attivazione sul posto si applica solo agli elementi incorporati (non collegati), lo zoom si applica solo a oggetti incorporati. È possibile osservare le API in entrambi `COleServerDoc` e `COleServerItem` che vengono utilizzati per lo zoom. Il motivo per questo dicotomia è che solo le funzioni che sono valide per gli elementi collegati e incorporati sono `COleServerItem` (in questo modo è possibile ottenere un'implementazione comune) e funzioni che sono valide solo per gli oggetti incorporati sono disponibili nel `COleServerDoc` classe (dalla prospettiva del server, è il **documento** incorporati).  
  
 La maggior parte delle attività viene posizionato sul responsabile dell'implementazione di server, in quanto il server deve essere a conoscenza del fattore di zoom del contenitore e modificare relativa interfaccia modifica in modo appropriato. Ma come server di determinare il fattore di zoom che usa il contenitore  
  
## <a name="mfc-support-for-zooming"></a>Supporto MFC per lo zoom avanti  
 Il fattore di zoom corrente può essere determinato chiamando `COleServerDoc::GetZoomFactor`. La chiamata a questo quando il documento non è attivo sul posto causerà sempre un fattore di zoom 100% (o di rapporto 1:1). Chiamata mentre posto attivo potrebbe restituire un valore diverso da 100%.  
  
 Per un esempio di valore di zoom correttamente vedere l'esempio OLE MFC [HIERSVR](../visual-cpp-samples.md). Lo zoom avanti HIERSVR è complicato dal fatto che venga visualizzato il testo e testo, in generale, non è scalabile in modo lineare (hint convenzioni tipografiche, progettazione larghezze e altezze tutti complicare la questione). Comunque, HIERSVR è un riferimento ragionevole per l'implementazione di zoom correttamente, senza che sia così l'esercitazione MFC [SCRIBBLE](../visual-cpp-samples.md) (passaggio 7).  
  
 `COleServerDoc::GetZoomFactor` Determina il fattore di zoom in un numero di metriche disponibili dal contenitore o rispetto all'implementazione di base del `COleServerItem` e `COleServerDoc` classi. In breve, il fattore di zoom corrente viene determinato tramite la formula seguente:  
  
```  
Position Rectangle (PR) / Container Extent (CE)  
```  
  
 Il rettangolo di posizione è determinato dal contenitore. Viene restituito al server durante l'attivazione sul posto quando `COleClientItem::OnGetItemPosition` viene chiamato e viene aggiornato quando il contenitore chiama il server `COleServerDoc::OnSetItemRects` (con una chiamata a `COleClientItem::SetItemRects`).  
  
 L'entità contenitore è leggermente più difficile da calcolare. Se il contenitore è chiamato `COleServerItem::OnSetExtent` (con una chiamata a `COleClientItem::SetExtent`), quindi l'entità contenitore è il valore convertito in pixel in base al numero di pixel per pollice logico. Se il contenitore non è chiamato SetExtent (ovvero in genere il caso), l'entità contenitore è della dimensione restituita da `COleServerItem::OnGetExtent`. In tal caso, se il contenitore non è chiamato SetExtent, il framework presuppone che in caso contrario il contenitore potrebbe avere lo hanno chiamato con 100% dell'extent naturale (il valore restituito da `COleServerItem::GetExtent`). In altre parole, il framework presuppone che il contenitore verrà visualizzate 100% (inferiore non sono più presenti, nessun) dell'elemento.  
  
 È importante sottolineare che, sebbene `COleServerItem::OnSetExtent` e `COleServerItem::OnGetExtent` hanno nomi simili, che non modificano lo stesso attributo dell'elemento. `OnSetExtent` viene chiamato per segnalare il server quanta parte dell'oggetto è visibile nel contenitore (indipendentemente dal fattore di zoom) e `OnGetExtent` viene chiamato dal contenitore per determinare le dimensioni ideali dell'oggetto.  
  
 Osservando ognuna delle API coinvolte, è possibile ottenere un'immagine più chiara:  
  
## <a name="coleserveritemongetextent"></a>COleServerItem::OnGetExtent  
 Questa funzione deve restituire le "dimensioni naturale" in unità HIMETRIC dell'elemento. Il modo migliore per considerare le "dimensioni naturale" è per definire la dimensione che potrebbe essere visualizzato quando viene stampato. Le dimensioni restituite qui sono costante per il contenuto di un particolare elemento (molto simile metafile, in cui è costante per un particolare elemento). Questa dimensione non subisce variazioni quando lo zoom è applicato alla voce. In genere non viene modificato quando il contenitore fornisce l'elemento più o meno spazio chiamando `OnSetExtent`. Un esempio di una modifica potrebbe essere quella di un semplice editor di testo con alcuna funzionalità di "margine" che è stato eseguito il wrapping in base all'ultimo extent inviato dal contenitore di testo. Se un server di modifica, il server deve impostare probabilmente OLEMISC_RECOMPOSEONRESIZE bit nel Registro di sistema (vedere la documentazione di OLE SDK per ulteriori informazioni su questa opzione).  
  
## <a name="coleserveritemonsetextent"></a>COleServerItem::OnSetExtent  
 Questa funzione viene chiamata quando il contenitore viene visualizzato "più o meno" dell'oggetto. La maggior parte dei contenitori non chiamerà affatto. L'implementazione predefinita archivia l'ultimo valore ricevuto dal contenitore in 'm_sizeExtent', che viene utilizzato in `COleServerDoc::GetZoomFactor` durante il calcolo del valore di EXTENT contenitore descritto in precedenza.  
  
## <a name="coleserverdoconsetitemrects"></a>COleServerDoc::OnSetItemRects  
 Questa funzione viene chiamata solo quando il documento è attivo sul posto. Viene chiamato quando il contenitore Aggiorna la posizione dell'elemento o il ritaglio applicato alla voce. Il rettangolo di posizione, come illustrato in precedenza, fornisce il numeratore per il calcolo di fattore di zoom. Un server può richiedere che la posizione degli elementi deve essere modificato chiamando `COleServerDoc::RequestPositionChange`. Il contenitore potrebbe o potrebbe non rispondere a questa richiesta chiamando `OnSetItemRects` (con una chiamata a `COleServerItem::SetItemRects`).  
  
## <a name="coleserverdocondraw"></a>COleServerDoc::OnDraw  
 È importante tenere presente che il metafile creato eseguendo l'override di `COleServerItem::OnDraw` produce esattamente il metafile stesso, indipendentemente dal fattore di zoom corrente. Il contenitore verrà ridimensionato il metafile come appropriato. Si tratta di un'importante differenza tra la vista `OnDraw` e l'elemento server `OnDraw`. Gli handle di visualizzazione lo zoom avanti, l'elemento crea solo un *pizzico* metafile e lascia il contenitore per eseguire lo zoom avanti appropriato.  
  
 Il modo migliore per assicurare che il server si comporti correttamente consiste nell'utilizzare l'implementazione di `COleServerDoc::GetZoomFactor` se il documento è attiva.  
  
## <a name="mfc-support-for-in-place-resizing"></a>Supporto MFC per il ridimensionamento sul posto  
 MFC implementa completamente l'interfaccia di ridimensionamento sul posto come descritto nella specifica OLE 2. L'interfaccia utente è supportata per il `COleResizeBar` classe, un messaggio personalizzato WM_SIZECHILD e una gestione speciale di questo messaggio nel `COleIPFrameWnd`.  
  
 È possibile implementare una gestione differente del messaggio rispetto a quello fornito dal framework. Come descritto in precedenza, il framework lascia i risultati di ridimensionamento sul posto fino al contenitore, ovvero il server risponde alla modifica nel fattore di zoom. Se il contenitore reagisce impostando entrambi gli EXTENT di contenitore e il rettangolo di posizione durante l'elaborazione di relativa `COleClientItem::OnChangeItemPosition` (chiamato in seguito a una chiamata a `COleServerDoc::RequestPositionChange`) quindi il ridimensionamento sul posto comporterà la visualizzazione "più o meno" dell'elemento nella modifica finestra. Se il contenitore reagisce impostando semplicemente il rettangolo di posizione durante l'elaborazione di `COleClientItem::OnChangeItemPosition`, verrà modificato il fattore di zoom e l'elemento verrà visualizzato "ingrandita o ridotta in".  
  
 Un server può controllare (in una certa) cosa accade durante la negoziazione. Ad esempio, un foglio di calcolo può decidere mostrare le celle più o meno quando l'utente ridimensiona la finestra durante la modifica dell'elemento sul posto. Un programma di elaborazione testi potrebbe decidere di modificare i margini della pagina"" in modo che corrispondono a quelle della finestra e ridisporre il testo per il nuovo margine. Server di implementano questo modificando l'estensione naturale (della dimensione restituita da `COleServerItem::OnGetExtent`) quando è terminato il ridimensionamento. Questa operazione comporterà sia il rettangolo di posizione e la modifica della stessa quantità conseguente lo stesso fattore di zoom, ma una o più piccola area di visualizzazione dell'EXTENT contenitore. Inoltre, più o meno del documento saranno visibili nel metafile generato da `OnDraw`. In questo caso, il documento stesso in fase di modifica quando l'utente ridimensiona l'elemento, anziché solo l'area di visualizzazione.  
  
 È possibile implementare il ridimensionamento personalizzata e comunque sfruttare l'interfaccia utente fornita da `COleResizeBar` sostituendo il messaggio WM_SIZECHILD il `COleIPFrameWnd` classe. Per ulteriori informazioni sulle specifiche di WM_SIZECHILD, vedere [Nota tecnica 24](../mfc/tn024-mfc-defined-messages-and-resources.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

