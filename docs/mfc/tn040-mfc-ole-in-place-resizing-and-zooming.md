---
title: "TN040: ridimensionamento sul posto e zoom MFC/OLE | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "attivazione sul posto, zoom e ridimensionamento"
  - "ridimensionamento sul posto"
  - "TN040"
  - "zoom e ridimensionamento sul posto"
ms.assetid: 4d7859bd-0b2e-4254-be62-2735cecf02c6
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN040: ridimensionamento sul posto e zoom MFC/OLE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota verrà descritto i problemi relativi alla modifica sul posto e come server deve eseguire lo zoom corretto e il ridimensionamento sul posto.  Con l'attivazione sul posto, il concetto WYSIWYG è intrapreso un'azione ulteriore in quanto i contenitori e server prevedono tra loro e in particolare la specifica OLE nello stesso modo.  
  
 A causa dell'interazione tra vicina contenitore e server che supportano l'attivazione sul posto è presente una serie di aspettative dall'utente finale che dovrebbe essere gestito:  
  
-   La visualizzazione di presentazione \(metafile disegnate con un override di `COleServerItem::OnDraw` \) devono essere esattamente lo stesso di quando vengono disegnate per modificare \(ad eccezione di modificare gli strumenti non è visibile\).  
  
-   Quando il contenitore viene ingrandita, la finestra server deve anche\!  
  
-   Sia il contenitore che il server è necessario visualizzare gli oggetti per modificare utilizzando la stessa metrica.  Ciò significa utilizzando una modalità di mapping in base al numero di pixel *logici* per pollice \- pixel non fisici per pollice quando eseguono il rendering del dispositivo di visualizzazione.  
  
> [!NOTE]
>  Poiché l'attivazione sul posto si applica solo agli elementi incorporati \(non connessi\), eseguendo l'ingrandimento si applica solo agli oggetti incorporati.  Verrà visualizzato API in entrambi gli `COleServerDoc` e `COleServerItem` utilizzati per eseguire lo zoom.  Lo scopo di questa dicotomia è che solo le funzioni valide per gli elementi collegati che sono incorporati in `COleServerItem` \(ciò consente di avere un'implementazione comune\) e funzioni che sono validi solo per gli oggetti incorporati sono disponibili nella classe di `COleServerDoc` \(dalla prospettiva del server, è `document` incorporato\).  
  
 La maggior parte del carico viene posizionato sull'implementatore server, in quanto il server deve essere consapevole del fattore di zoom del contenitore e modificare la relativa interfaccia di modifica in base alle proprie esigenze.  Ma come server determina il fattore di zoom che il contenitore utilizza?  
  
## Supporto MFC per eseguire lo zoom  
 Il fattore di zoom corrente può essere determinato chiamando `COleServerDoc::GetZoomFactor`.  Chiamare questo metodo quando il documento non è sempre risultato attivo sul posto di secondo in un fattore di zoom 100% \(o nel rapporto di 1:1\).  Chiamarlo come attivo sul posto può essere diverso da 100%.  
  
 Per un esempio di zoom correttamente vedere l'esempio [HIERSVR](../top/visual-cpp-samples.md) oLE MFC.  Ingrandire HIERSVR è complicata dal fatto che visualizzano testo e testo, in genere non viene ridimensionato in modo lineare \(suggerimenti, le convenzioni tipografiche, la larghezza di progettazione e altezze tutte complicano la materia\).  Tuttavia, HIERSVR è un riferimento ragionevole per implementare tale correttamente e pertanto è MFC [SCRIBBLE](../top/visual-cpp-samples.md) dell'esercitazione \(passaggio 7\).  
  
 `COleServerDoc::GetZoomFactor` determina il fattore di zoom basato su diversi parametri differente disponibile dal contenitore o dall'implementazione delle classi di `COleServerDoc` e di `COleServerItem`.  In breve, il fattore di zoom corrente è determinato dalla formula seguente:  
  
```  
Position Rectangle (PR) / Container Extent (CE)  
```  
  
 Il RETTANGOLO di POSITION è determinato dal contenitore.  Viene restituito al server durante l'attivazione sul posto quando `COleClientItem::OnGetItemPosition` viene chiamato e viene aggiornato quando il contenitore chiama `COleServerDoc::OnSetItemRects` del server \(con una chiamata a `COleClientItem::SetItemRects`\).  
  
 Il AMBITO CONTAINER è leggermente più complesso elaborazione.  Se il contenitore è stato chiamato `COleServerItem::OnSetExtent` \(con una chiamata a `COleClientItem::SetExtent`\), in l AMBITO CONTAINER è il valore convertito in pixel in base al numero di pixel per pollice logico.  Se il contenitore non ha chiamato SetExtent \(che sia in genere il caso\), in l AMBITO CONTAINER è la dimensione restituita da `COleServerItem::OnGetExtent`.  Quindi, se il contenitore non ha chiamato SetExtent, il framework si presuppone che se facesse il contenitore lo ha chiamato con 100% dell'ambito naturale \(il valore restituito da **COleServerItem::GetExtent**\).  Indica altre parole, il framework si presuppone che il contenitore viene visualizzato 100% \(nient'altro nothing, inferiore\) dell'elemento.  
  
 È importante notare che mentre `COleServerItem::OnSetExtent` e `COleServerItem::OnGetExtent` abbiano nomi simili, non modificano lo stesso attributo dell'elemento.  `OnSetExtent` viene chiamato per consentire al server sapere quanto oggetto è visibile nel contenitore indipendentemente dal fattore di zoom\) e `OnGetExtent` viene chiamato dal contenitore per determinare la dimensione ideale dell'oggetto.  
  
 Controllando ogni API utilizzate, è possibile ottenere una più semplice immagine:  
  
## COleServerItem::OnGetExtent  
 La funzione deve restituire "la dimensione naturale" in unità di HIMETRIC dell'elemento.  Il modo migliore per stabilire "alle relative dimensioni standard" è di definirla quando la dimensione potrebbe essere visualizzato quando viene stampata.  La dimensione restituita è costante per il contenuto di un elemento di specifico \(molto simile a un metafile, che rappresentano costanti per un particolare elemento\).  Questa dimensione non cambia quando superiore viene applicata all'elemento.  In genere non cambia quando il contenitore fornisce all'elemento uno spazio maggiore o minore chiamando `OnSetExtent`.  Un esempio di una modifica potrebbe essere quello di un editor di testo semplice senza funzionalità "margin" che ha eseguito il wrapping del testo in base all'ultimo ambito inviato dal contenitore.  Se un server cambia, il server deve probabilmente impostare il bit di OLEMISC\_RECOMPOSEONRESIZE nel Registro di sistema \(vedere la documentazione SDK di OLE per ulteriori informazioni su questa opzione\).  
  
## COleServerItem::OnSetExtent  
 Questa funzione viene chiamata quando il contenitore viene riportato "più o meno" object.  La maggior parte dei contenitori non chiamano questo eseguito.  L'implementazione predefinita archivia l'ultimo valore ricevuto dal contenitore "in m\_sizeExtent", utilizzato in `COleServerDoc::GetZoomFactor` quando si calcola il valore di AMBITO CONTAINER descritto in precedenza.  
  
## COleServerDoc::OnSetItemRects  
 Questa funzione è denominata solo quando il documento attivo sul posto.  Viene chiamata quando il contenitore aggiorna la posizione o l'area di visualizzazione dell'elemento applicata all'elemento.  Il RETTANGOLO di POSITION, come descritto in precedenza, fornisce il numeratore per il calcolo fattore di zoom.  Un server può richiedere che la posizione dell'elemento venga modificata chiamando `COleServerDoc::RequestPositionChange`.  Il contenitore può rispondere alla richiesta chiamando `OnSetItemRects` \(con una chiamata a **COleServerItem::SetItemRects**\).  
  
## COleServerDoc::OnDraw  
 È importante tenere presente che i metafile create eseguire l'override di `COleServerItem::OnDraw` producono le stesse metafile, indipendentemente dal fattore di zoom corrente.  Il contenitore viene ridimensionato metafile in base alle proprie esigenze.  Ciò è un'importante distinzione tra `OnDraw` della visualizzazione e `OnDraw`server dell'elemento.  La visualizzazione gestisce lo zoom, l'elemento crea semplicemente metafile *zoomable* e i nodi foglia fino al contenitore per eseguire lo zoom appropriato.  
  
 Il modo migliore per garantire che il server si comporti correttamente è di utilizzare l'implementazione di `COleServerDoc::GetZoomFactor` se il documento attivo sul posto.  
  
## Supporto MFC per il ridimensionamento sul posto  
 MFC supporta implementa l'interfaccia sul posto di ridimensionamento come descritto nella specifica OLE 2.  L'interfaccia utente è supportata dalla classe di `COleResizeBar`, un messaggio **WM\_SIZECHILD**personalizzate e una gestione speciale di questo messaggio in `COleIPFrameWnd`.  
  
 È possibile implementare la gestione diversa del messaggio che a quello offerto dal framework.  Come descritto in precedenza, il framework consente ai risultati di ridimensionamento sul posto fino al contenitore \- il server risponde alla modifica nel fattore di zoom.  Se il contenitore risponde impostando la AMBITO CONTAINER che il RETTANGOLO di POSITION durante l'elaborazione del `COleClientItem::OnChangeItemPosition` \(chiamato in seguito a una chiamata a `COleServerDoc::RequestPositionChange`\) e del ridimensionamento sul posto della rappresentazione "più o meno" elemento nella finestra di modifica.  Se il contenitore risponde impostando semplicemente il RETTANGOLO di POSITION durante l'elaborazione di `COleClientItem::OnChangeItemPosition`, il fattore di zoom cambierà e l'elemento verrà visualizzato "lo zoom avanti o indietro."  
  
 Un server può controllare \(in qualche misura\) fasi della negoziazione spazio.  Un foglio di calcolo, ad esempio potrebbe senza visualizzare più o meno celle quando l'utente ridimensiona la finestra durante la modifica dell'elemento sul posto.  Un wordprocessor potrebbe senza "per modificare i margini di pagina" pertanto sono gli stessi della finestra e di rewrap testo al nuovo margine.  I server implementano questo modifica l'ambito naturale \(la dimensione restituita da `COleServerItem::OnGetExtent`\) quando il ridimensionamento viene eseguito.  Ciò determina il RETTANGOLO di POSITION dell'AMBITO CONTAINER change dallo stesso quantità, con conseguente stesso fattore di zoom, ma una più grande o più piccola area di visualizzazione.  Inoltre, più o meno del documento sarà visibile in un metafile generate da `OnDraw`.  In questo caso, il documento stesso viene modificato quando l'utente ridimensiona l'elemento, anziché solo da tale area.  
  
 È possibile implementare il ridimensionamento personalizzato e tuttavia l'utilizzo l'interfaccia utente fornita da `COleResizeBar` eseguire l'override del messaggio di **WM\_SIZECHILD** nella classe di `COleIPFrameWnd`.  Per ulteriori informazioni sulle specifiche di **WM\_SIZECHILD**, vedere [Nota tecnica 24](../mfc/tn024-mfc-defined-messages-and-resources.md).  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)