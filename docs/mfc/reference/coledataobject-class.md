---
title: "COleDataObject Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IDataObject"
  - "COleDataObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Appunti [C++], MFC support"
  - "Appunti [C++], OLE support"
  - "COleDataObject class"
  - "data transfer [C++]"
  - "data transfer [C++], OLE"
  - "drag and drop [C++], MFC support"
  - "IDataObject interface, MFC encapsulation"
  - "OLE [C++], uniform data transfer"
  - "OLE Clipboard [C++], supporto"
  - "OLE data transfer [C++]"
  - "uniform data transfer"
  - "uniform data transfer, OLE"
ms.assetid: d1cc84be-2e1c-4bb3-a8a0-565eb08aaa34
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# COleDataObject Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato nei trasferimenti di dati per recuperare i dati in diversi formati dagli Appunti, tramite il trascinamento della selezione, o da un elemento OLE incorporato.  
  
## Sintassi  
  
```  
class COleDataObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDataObject::COleDataObject](../Topic/COleDataObject::COleDataObject.md)|Costruisce un oggetto `COleDataObject`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDataObject::Attach](../Topic/COleDataObject::Attach.md)|Connettere l'oggetto dati specificato OLE a `COleDataObject`.|  
|[COleDataObject::AttachClipboard](../Topic/COleDataObject::AttachClipboard.md)|Connettere l'oggetto dati dagli Appunti.|  
|[COleDataObject::BeginEnumFormats](../Topic/COleDataObject::BeginEnumFormats.md)|Prepara per uno o più chiamate successive `GetNextFormat`.|  
|[COleDataObject::Detach](../Topic/COleDataObject::Detach.md)|Rimuove l'oggetto collegato `IDataObject`.|  
|[COleDataObject::GetData](../Topic/COleDataObject::GetData.md)|Copia i dati dell'oggetto dati collegato OLE in un formato specificato.|  
|[COleDataObject::GetFileData](../Topic/COleDataObject::GetFileData.md)|Copia i dati dell'oggetto dati collegato OLE in un puntatore `CFile` il formato specificato.|  
|[COleDataObject::GetGlobalData](../Topic/COleDataObject::GetGlobalData.md)|Copia i dati dell'oggetto dati collegato OLE in `HGLOBAL` il formato specificato.|  
|[COleDataObject::GetNextFormat](../Topic/COleDataObject::GetNextFormat.md)|Restituisce il formato dati successivo disponibile.|  
|[COleDataObject::IsDataAvailable](../Topic/COleDataObject::IsDataAvailable.md)|Controlla se i dati sono disponibili in un formato specificato.|  
|[COleDataObject::Release](../Topic/COleDataObject::Release.md)|Rimuove e rilascia l'oggetto collegato `IDataObject`.|  
  
## Note  
 `COleDataObject` non dispone di una classe base.  
  
 Questi tipi di trasferimento dei dati includono un database di origine e di destinazione.  L'origine dati viene implementata come un oggetto classe [COleDataSource](../../mfc/reference/coledatasource-class.md).  Ogni volta che una applicazione di destinazione con dati trascinati in o viene chiesta di eseguire un'operazione Incolla dagli Appunti, un oggetto classe `COleDataObject` deve essere creato.  
  
 Questa classe consente di determinare se i dati esistenti in un formato specificato.  È inoltre possibile enumerare i formati dati o il controllo se un formato specificato è disponibile quindi recuperare i dati nel formato desiderato.  Il recupero dell'oggetto può essere eseguita in diversi modi, incluso l'utilizzo [file C](../../mfc/reference/cfile-class.md), `HGLOBAL`, o di una struttura **STGMEDIUM**.  
  
 Per ulteriori informazioni, vedere la struttura [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni sull'utilizzo di oggetti dati, vedere l'articolo [oggetti dati e origini dati \(OLE\)](../../mfc/data-objects-and-data-sources-ole.md).  
  
## Gerarchia di ereditarietà  
 `COleDataObject`  
  
## Requisiti  
 **Header:** afxole.h  
  
## Vedere anche  
 [MFC campione HIERSVR](../../top/visual-cpp-samples.md)   
 [Esempio OCLIENT MFC](../../top/visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleDataSource Class](../../mfc/reference/coledatasource-class.md)   
 [COleClientItem Class](../../mfc/reference/coleclientitem-class.md)   
 [COleServerItem Class](../../mfc/reference/coleserveritem-class.md)   
 [COleDataSource::DoDragDrop](../Topic/COleDataSource::DoDragDrop.md)   
 [CView::OnDrop](../Topic/CView::OnDrop.md)