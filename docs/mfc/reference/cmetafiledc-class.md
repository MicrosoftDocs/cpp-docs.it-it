---
title: "CMetaFileDC Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMetaFileDC"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMetaFileDC class"
  - "metafile, implementazione"
  - "Windows metafiles [C++]"
ms.assetid: ffce60fa-4181-4d46-9832-25e46fad4db4
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CMetaFileDC Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa un metafile Windows, che contengono una sequenza di Graphics Device Interface \(GDI\) comando che è possibile utilizzare per creare un'immagine desiderata o al testo.  
  
## Sintassi  
  
```  
class CMetaFileDC : public CDC  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMetaFileDC::CMetaFileDC](../Topic/CMetaFileDC::CMetaFileDC.md)|Costruisce un oggetto `CMetaFileDC`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMetaFileDC::Close](../Topic/CMetaFileDC::Close.md)|Chiude il contesto di dispositivo e crea un handle di metafile.|  
|[CMetaFileDC::CloseEnhanced](../Topic/CMetaFileDC::CloseEnhanced.md)|Chiude un contesto di dispositivo di Enhanced Metafile e crea un handle di Enhanced Metafile.|  
|[CMetaFileDC::Create](../Topic/CMetaFileDC::Create.md)|Crea il contesto di dispositivo metafile Windows e lo aggiunge all'oggetto `CMetaFileDC`.|  
|[CMetaFileDC::CreateEnhanced](../Topic/CMetaFileDC::CreateEnhanced.md)|Crea un contesto di dispositivo metafile per un metafile di avanzato\- formato.|  
  
## Note  
 Per implementare un metafile Windows, creare innanzitutto un oggetto `CMetaFileDC`.  Richiamare il costruttore `CMetaFileDC`, quindi chiamare la funzione membro [Crea](../Topic/CMetaFileDC::Create.md), che crea un contesto di dispositivo metafile Windows e lo aggiunge all'oggetto `CMetaFileDC`.  
  
 Dopo inviare l'oggetto `CMetaFileDC` la sequenza `CDC` GDI ordina che si desidera ripristinare.  Solo i controlli GDI che creano l'output, come `MoveTo` e `LineTo`, possono essere utilizzati.  
  
 Dopo aver inviato i controlli desiderati a un metafile, chiamare la funzione membro **Chiudi**, che consente di chiudere i contesti di periferica metafile e restituisce l'handle di metafile.  Quindi è l'oggetto `CMetaFileDC`.  
  
 [CDC::PlayMetaFile](../Topic/CDC::PlayMetaFile.md) può quindi utilizzare i quadratini metafile per riprodurre ripetutamente metafile.  I metafile possono essere modificate da funzioni Windows come [CopyMetaFile](http://msdn.microsoft.com/library/windows/desktop/dd183480), la copia metafile su disco.  
  
 Quando metafile non sono più necessari, eliminarla dalla memoria con la funzione di Windows [DeleteMetaFile](http://msdn.microsoft.com/library/windows/desktop/dd183537).  
  
 È anche possibile implementare l'oggetto `CMetaFileDC` in modo da poter gestire sia le chiamate di output da associare alle chiamate GDI come `GetTextExtent`.  Le già metafile sono più flessibili ed è più facile riutilizzare il codice generale GDI, costituito spesso di chiamate di attributo e di output.  La classe `CMetaFileDC` eredita due contesti di periferica, `m_hDC` e `m_hAttribDC`, da `CDC`.  Il contesto di dispositivo `m_hDC` gestisce tutte le chiamate di output [CDC](../../mfc/reference/cdc-class.md) GDI e l'handle del contesto di dispositivo `m_hAttribDC` tutte le chiamate di attributo `CDC` GDI.  In genere, questi due contesti di periferica si riferiscono allo stesso dispositivo.  Nel caso `CMetaFileDC`, il controller di dominio dell'attributo è impostato su **NULL** per impostazione predefinita.  
  
 Creare un secondo contesto di dispositivo che indica lo schermo, una stampante, o il dispositivo tranne metafile, quindi chiamare la funzione membro `SetAttribDC` per associare il nuovo contesto di dispositivo con `m_hAttribDC`.  Le richieste GDI per informazioni verranno eseguiti a l `m_hAttribDC`.  Le chiamate di output GDI andranno a `m_hDC`, che rappresenta metafile.  
  
 Per ulteriori informazioni su `CMetaFileDC`, vedere [Contesti di periferica](../../mfc/device-contexts.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDC](../../mfc/reference/cdc-class.md)  
  
 `CMetaFileDC`  
  
## Requisiti  
 **Header:** afxext.h  
  
## Vedere anche  
 [Classe CDC](../../mfc/reference/cdc-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)