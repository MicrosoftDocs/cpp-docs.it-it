---
title: "COleServerItem Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleServerItem"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleServerItem class"
  - "applicazioni server OLE, managing server documents"
  - "applicazioni server OLE, server interfaces"
  - "OLE server documents"
  - "server, OLE"
ms.assetid: 80256df6-3888-4256-944b-787d4b2e6b0d
caps.latest.revision: 23
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COleServerItem Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce l'interfaccia server agli elementi OLE.  
  
## Sintassi  
  
```  
class COleServerItem : public CDocItem  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleServerItem::COleServerItem](../Topic/COleServerItem::COleServerItem.md)|Costruisce un oggetto `COleServerItem`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleServerItem::AddOtherClipboardData](../Topic/COleServerItem::AddOtherClipboardData.md)|I formati di presentazione e di conversione dei punti in `COleDataSource` oggetto.|  
|[COleServerItem::CopyToClipboard](../Topic/COleServerItem::CopyToClipboard.md)|Copiare l'elemento negli Appunti.|  
|[COleServerItem::DoDragDrop](../Topic/COleServerItem::DoDragDrop.md)|Esegue un'operazione di trascinamento.|  
|[COleServerItem::GetClipboardData](../Topic/COleServerItem::GetClipboardData.md)|Ottiene l'oggetto origine dati da utilizzare nel trasferimento dei dati \(trascinamento e destinazione o Appunti.|  
|[COleServerItem::GetDocument](../Topic/COleServerItem::GetDocument.md)|Restituisce il documento server contenente l'elemento.|  
|[COleServerItem::GetEmbedSourceData](../Topic/COleServerItem::GetEmbedSourceData.md)|Ottiene i dati **CF\_EMBEDSOURCE** per un elemento OLE.|  
|[COleServerItem::GetItemName](../Topic/COleServerItem::GetItemName.md)|Restituisce il nome dell'elemento.  Utilizzato per gli elementi collegati solo.|  
|[COleServerItem::GetLinkSourceData](../Topic/COleServerItem::GetLinkSourceData.md)|Ottiene i dati `CF_LINKSOURCE` per un elemento OLE.|  
|[COleServerItem::GetObjectDescriptorData](../Topic/COleServerItem::GetObjectDescriptorData.md)|Ottiene i dati **CF\_OBJECTDESCRIPTOR** per un elemento OLE.|  
|[COleServerItem::IsConnected](../Topic/COleServerItem::IsConnected.md)|Indica se l'elemento è attualmente connesso a un contenitore attivo.|  
|[COleServerItem::IsLinkedItem](../Topic/COleServerItem::IsLinkedItem.md)|Indica se l'elemento rappresenta un elemento OLE collegati.|  
|[COleServerItem::NotifyChanged](../Topic/COleServerItem::NotifyChanged.md)|Aggiorna tutti i contenitori all'aggiornamento di collegamento automatico.|  
|[COleServerItem::OnDoVerb](../Topic/COleServerItem::OnDoVerb.md)|Chiamato per eseguire un verbo.|  
|[COleServerItem::OnDraw](../Topic/COleServerItem::OnDraw.md)|Chiamato quando le richieste del contenitore di disegnare l'elemento, implementazione richiesta.|  
|[COleServerItem::OnDrawEx](../Topic/COleServerItem::OnDrawEx.md)|Chiamato per il disegno specializzato dell'elemento.|  
|[COleServerItem::OnGetClipboardData](../Topic/COleServerItem::OnGetClipboardData.md)|Chiamato dal framework per ottenere i dati che verranno copiati negli Appunti.|  
|[COleServerItem::OnGetExtent](../Topic/COleServerItem::OnGetExtent.md)|Chiamato dal framework per recuperare la dimensione elemento OLE.|  
|[COleServerItem::OnInitFromData](../Topic/COleServerItem::OnInitFromData.md)|Chiamato dal framework per inizializzare un elemento OLE tramite il contenuto dell'oggetto del trasferimento dei dati specificato.|  
|[COleServerItem::OnQueryUpdateItems](../Topic/COleServerItem::OnQueryUpdateItems.md)|Chiamato per determinare se gli elementi collegati richiedono l'aggiornamento.|  
|[COleServerItem::OnRenderData](../Topic/COleServerItem::OnRenderData.md)|Recupera dati come parte del rendering ritardato.|  
|[COleServerItem::OnRenderFileData](../Topic/COleServerItem::OnRenderFileData.md)|Recupera i dati in un oggetto `CFile` durante il rendering ritardato.|  
|[COleServerItem::OnRenderGlobalData](../Topic/COleServerItem::OnRenderGlobalData.md)|Recupera i dati in `HGLOBAL` durante il rendering ritardato.|  
|[COleServerItem::OnSetColorScheme](../Topic/COleServerItem::OnSetColorScheme.md)|Chiamato per impostare la combinazione colori dell'elemento.|  
|[COleServerItem::OnSetData](../Topic/COleServerItem::OnSetData.md)|Chiamato per impostare i dati dell'elemento.|  
|[COleServerItem::OnSetExtent](../Topic/COleServerItem::OnSetExtent.md)|Chiamato dal framework per impostare la dimensione dell'elemento OLE.|  
|[COleServerItem::OnUpdate](../Topic/COleServerItem::OnUpdate.md)|Chiamato quando parte del documento l'elemento appartiene in viene modificato.|  
|[COleServerItem::OnUpdateItems](../Topic/COleServerItem::OnUpdateItems.md)|Chiamato per aggiornare la cache di presentazione di tutti gli elementi del documento server.|  
|[COleServerItem::SetItemName](../Topic/COleServerItem::SetItemName.md)|Imposta il nome dell'elemento.  Utilizzato per gli elementi collegati solo.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleServerItem::GetDataSource](../Topic/COleServerItem::GetDataSource.md)|Ottiene l'oggetto utilizzato formati di conversione dell'archivio.|  
|[COleServerItem::OnHide](../Topic/COleServerItem::OnHide.md)|Chiamato dal framework per nascondere l'elemento OLE.|  
|[COleServerItem::OnOpen](../Topic/COleServerItem::OnOpen.md)|Chiamato dal framework per visualizzare l'elemento OLE in una finestra di primo livello.|  
|[COleServerItem::OnShow](../Topic/COleServerItem::OnShow.md)|Chiamato quando le richieste del contenitore di visualizzare l'elemento.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleServerItem::m\_sizeExtent](../Topic/COleServerItem::m_sizeExtent.md)|Notifica al server su cui l'elemento OLE è visibile.|  
  
## Note  
 Un elemento collegato può rappresentare una parte o tutto il documento server.  Un elemento incorporato rappresenta sempre un intero documento server.  
  
 La classe `COleServerItem` definisce diverse funzioni membro sottoponibili a override che vengono chiamate da librerie a collegamento dinamico di sistema \(DLLs\) OLE, in genere in risposta alle richieste dall'applicazione contenitore.  Queste funzioni membro e consentono l'applicazione contenitore indirettamente modificare l'elemento in vari modi, come visualizzare, eseguire i verbi, o recuperare i dati in diversi formati.  
  
 Per utilizzare `COleServerItem`, derivare una classe da e implementare le funzioni membro [Serializzare](../Topic/CObject::Serialize.md) e [OnDraw](../Topic/COleServerItem::OnDraw.md).  La funzione `OnDraw` fornisce la rappresentazione di metafile di un elemento, consentendo la visualizzare quando un'applicazione contenitore apre un documento composto.  La funzione `Serialize``CObject` fornisce la rappresentazione nativa di un elemento, consentendo un elemento incorporato per il trasferimento tra il server e applicazioni contenitori.  [OnGetExtent](../Topic/COleServerItem::OnGetExtent.md) fornisce la dimensione naturale dell'elemento al contenitore, attivando il contenitore per ridimensionare l'elemento.  
  
 Per ulteriori informazioni sui server e gli argomenti correlati, vedere l'articolo [server: Implementazione di un server](../../mfc/servers-implementing-a-server.md) e "creare un'applicazione contenitore\/server" nell'articolo [contenitori: funzionalità avanzate](../../mfc/containers-advanced-features.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocItem](../../mfc/reference/cdocitem-class.md)  
  
 `COleServerItem`  
  
## Requisiti  
 **Header:** afxole.h  
  
## Vedere anche  
 [MFC campione HIERSVR](../../top/visual-cpp-samples.md)   
 [CDocItem Class](../../mfc/reference/cdocitem-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleClientItem Class](../../mfc/reference/coleclientitem-class.md)   
 [COleServerDoc Class](../../mfc/reference/coleserverdoc-class.md)   
 [COleTemplateServer Class](../../mfc/reference/coletemplateserver-class.md)