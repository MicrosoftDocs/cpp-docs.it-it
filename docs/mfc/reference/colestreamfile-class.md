---
title: "COleStreamFile Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleStreamFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleStreamFile class"
  - "data streams [C++]"
  - "data streams [C++], OLE"
  - "OLE [C++], streams of data"
  - "OLE structured storage [C++]"
  - "streams [C++], OLE"
  - "structured storage in OLE"
ms.assetid: e4f93698-e17c-4a18-a7c0-4b4df8eb4d93
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COleStreamFile Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un flusso di dati \(`IStream`\) in un file composito come parte di un'archiviazione strutturata OLE.  
  
## Sintassi  
  
```  
class COleStreamFile : public CFile  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleStreamFile::COleStreamFile](../Topic/COleStreamFile::COleStreamFile.md)|Costruisce un oggetto `COleStreamFile`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleStreamFile::Attach](../Topic/COleStreamFile::Attach.md)|Associa un flusso mediante l'oggetto.|  
|[COleStreamFile::CreateMemoryStream](../Topic/COleStreamFile::CreateMemoryStream.md)|Crea un flusso dalla memoria globale e lo associa all'oggetto.|  
|[COleStreamFile::CreateStream](../Topic/COleStreamFile::CreateStream.md)|Crea un flusso e lo associa all'oggetto.|  
|[COleStreamFile::Detach](../Topic/COleStreamFile::Detach.md)|Annulla l'associazione del flusso dall'oggetto.|  
|[COleStreamFile::GetStream](../Topic/COleStreamFile::GetStream.md)|Restituisce il flusso corrente.|  
|[COleStreamFile::OpenStream](../Topic/COleStreamFile::OpenStream.md)|In modo sicuro apre un flusso e lo associa all'oggetto.|  
  
## Note  
 Un oggetto `IStorage` deve essere presenti prima che il flusso può essere aperto o creato a meno che non sia un flusso di memoria.  
  
 Gli oggetti di`COleStreamFile` vengono modificati esattamente come gli oggetti [file C](../../mfc/reference/cfile-class.md).  
  
 Per ulteriori informazioni sulla modifica dei flussi e le archiviazioni, vedere l'articolo [contenitori: File composita](../../mfc/containers-compound-files.md).  
  
 Per ulteriori informazioni, vedere [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) e [IStorage](http://msdn.microsoft.com/library/windows/desktop/aa380015) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [File C](../../mfc/reference/cfile-class.md)  
  
 `COleStreamFile`  
  
## Requisiti  
 **Header:** afxole.h  
  
## Vedere anche  
 [CFile Class](../../mfc/reference/cfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)