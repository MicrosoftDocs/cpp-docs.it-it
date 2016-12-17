---
title: "Classe CD2DPathGeometry | Microsoft Docs"
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
  - "afxrendertarget/CD2DPathGeometry"
  - "CD2DPathGeometry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DPathGeometry (classe)"
ms.assetid: 686216eb-5080-4242-ace5-8fa1ce96307c
caps.latest.revision: 17
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CD2DPathGeometry
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Wrapper per ID2D1PathGeometry.  
  
## Sintassi  
  
```  
class CD2DPathGeometry : public CD2DGeometry;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DPathGeometry::CD2DPathGeometry](../Topic/CD2DPathGeometry::CD2DPathGeometry.md)|Costruisce un oggetto CD2DPathGeometry.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DPathGeometry::Attach](../Topic/CD2DPathGeometry::Attach.md)|Allega l'interfaccia della risorsa esistente all'oggetto|  
|[CD2DPathGeometry::Create](../Topic/CD2DPathGeometry::Create.md)|Crea un CD2DPathGeometry.  \(Esegue l'override di [CD2DResource::Create](../Topic/CD2DResource::Create.md)\).|  
|[CD2DPathGeometry::Destroy](../Topic/CD2DPathGeometry::Destroy.md)|Elimina un oggetto CD2DPathGeometry.  \(Esegue l'override di [CD2DGeometry::Destroy](../Topic/CD2DGeometry::Destroy.md)\).|  
|[CD2DPathGeometry::Detach](../Topic/CD2DPathGeometry::Detach.md)|Disconnette l'interfaccia della risorsa dall'oggetto|  
|[CD2DPathGeometry::GetFigureCount](../Topic/CD2DPathGeometry::GetFigureCount.md)|Recupera il numero di figure nella geometria del percorso.|  
|[CD2DPathGeometry::GetSegmentCount](../Topic/CD2DPathGeometry::GetSegmentCount.md)|Recupera il numero di segmenti nella geometria del percorso.|  
|[CD2DPathGeometry::Open](../Topic/CD2DPathGeometry::Open.md)|Recupera il sink di geometria utilizzato per popolare la geometria del percorso con figure e segmenti.|  
|[CD2DPathGeometry::Stream](../Topic/CD2DPathGeometry::Stream.md)|Copia il contenuto della geometria del percorso nell'oggetto ID2D1GeometrySink specificato.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DPathGeometry::m\_pPathGeometry](../Topic/CD2DPathGeometry::m_pPathGeometry.md)|Puntatore a un oggetto ID2D1PathGeometry.|  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DGeometry](../../mfc/reference/cd2dgeometry-class.md)  
  
 [CD2DPathGeometry](../../mfc/reference/cd2dpathgeometry-class.md)  
  
## Requisiti  
 **Intestazione:** afxrendertarget.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)