---
title: "COleDataSource Class | Microsoft Docs"
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
  - "COleDataSource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Appunti [C++], MFC support"
  - "Appunti [C++], OLE support"
  - "COleDataSource class"
  - "data transfer [C++], OLE"
  - "drag and drop [C++], MFC support"
  - "IDataObject, MFC encapsulation"
  - "OLE [C++], uniform data transfer"
  - "OLE Clipboard [C++], supporto"
  - "OLE data transfer [C++]"
  - "uniform data transfer"
  - "uniform data transfer, OLE"
ms.assetid: 02c8ee7d-8e10-4463-8613-bb2a0305ca69
caps.latest.revision: 23
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COleDataSource Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Funge dalla cache in cui un'applicazione posiziona i dati che offrirà durante le operazioni di trasferimento dei dati, quali gli Appunti o operazioni di trascinamento.  
  
## Sintassi  
  
```  
class COleDataSource : public CCmdTarget  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDataSource::COleDataSource](../Topic/COleDataSource::COleDataSource.md)|Costruisce un oggetto `COleDataSource`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDataSource::CacheData](../Topic/COleDataSource::CacheData.md)|Di dati disponibili in un formato specificato utilizzando una struttura **STGMEDIUM**.|  
|[COleDataSource::CacheGlobalData](../Topic/COleDataSource::CacheGlobalData.md)|Offre i dati in un formato specifico utilizzando `HGLOBAL`.|  
|[COleDataSource::DelayRenderData](../Topic/COleDataSource::DelayRenderData.md)|Offre i dati in un formato specificato utilizzando il rendering ritardato.|  
|[COleDataSource::DelayRenderFileData](../Topic/COleDataSource::DelayRenderFileData.md)|Offre i dati in un formato specifico in un puntatore `CFile`.|  
|[COleDataSource::DelaySetData](../Topic/COleDataSource::DelaySetData.md)|Chiamato per ogni formato supportato in `OnSetData`.|  
|[COleDataSource::DoDragDrop](../Topic/COleDataSource::DoDragDrop.md)|Esegue operazioni di trascinamento con un'origine dati.|  
|[COleDataSource::Empty](../Topic/COleDataSource::Empty.md)|Svuota l'oggetto `COleDataSource` dei dati.|  
|[COleDataSource::FlushClipboard](../Topic/COleDataSource::FlushClipboard.md)|Esegue il rendering di tutti i dati negli Appunti.|  
|[COleDataSource::GetClipboardOwner](../Topic/COleDataSource::GetClipboardOwner.md)|Verifica che i dati inseriti negli Appunti siano ancora presenti.|  
|[COleDataSource::OnRenderData](../Topic/COleDataSource::OnRenderData.md)|Recupera dati come parte del rendering ritardato.|  
|[COleDataSource::OnRenderFileData](../Topic/COleDataSource::OnRenderFileData.md)|Recupera i dati in `CFile` durante il rendering ritardato.|  
|[COleDataSource::OnRenderGlobalData](../Topic/COleDataSource::OnRenderGlobalData.md)|Recupera i dati in `HGLOBAL` durante il rendering ritardato.|  
|[COleDataSource::OnSetData](../Topic/COleDataSource::OnSetData.md)|Chiamato per sostituire i dati in `COleDataSource` oggetto.|  
|[COleDataSource::SetClipboard](../Topic/COleDataSource::SetClipboard.md)|Inserisce un oggetto `COleDataSource` gli Appunti.|  
  
## Note  
 È possibile creare direttamente le origini dati OLE.  In alternativa, le classi [COleServerItem](../../mfc/reference/coleserveritem-class.md) e [COleClientItem](../../mfc/reference/coleclientitem-class.md) creano le origini dati OLE in risposta alle relative funzioni membro `DoDragDrop` e `CopyToClipboard`.  Vedere [COleServerItem::CopyToClipboard](../Topic/COleServerItem::CopyToClipboard.md) per una breve descrizione.  Eseguire l'override della funzione membro `OnGetClipboardData` della classe client dell'elemento del server o dell'elemento per aggiungere i formati degli Appunti aggiuntivi ai dati nell'origine dati OLE creata per la funzione membro `DoDragDrop` o `CopyToClipboard`.  
  
 Ogni volta che si desidera applicare ai dati per un trasferimento, è necessario creare un oggetto della classe e compilarlo dei dati utilizzando il metodo più appropriato per i dati.  La modalità inserito in un'origine dati direttamente è influenzata da se i dati vengono forniti immediatamente \(rendering diretto\) o su richiesta \(rendering ritardato\).  Per ogni formato degli Appunti in cui si immettono i dati passando il formato degli Appunti da utilizzare \(e una struttura facoltativa [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) \), chiamata [DelayRenderData](../Topic/COleDataSource::DelayRenderData.md).  
  
 Per ulteriori informazioni sulle origini dati e il trasferimento dei dati, vedere l'articolo [oggetti dati e origini dati \(OLE\)](../../mfc/data-objects-and-data-sources-ole.md).  Inoltre, l'articolo [Argomenti degli Appunti](../../mfc/clipboard.md) viene descritto il meccanismo di Appunti OLE.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleDataSource`  
  
## Requisiti  
 **Header:** afxole.h  
  
## Vedere anche  
 [Esempio HIERSVR MFC](../../top/visual-cpp-samples.md)   
 [Esempio OCLIENT MFC](../../top/visual-cpp-samples.md)   
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleDataObject Class](../../mfc/reference/coledataobject-class.md)