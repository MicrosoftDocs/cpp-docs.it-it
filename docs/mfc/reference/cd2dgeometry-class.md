---
title: "Classe CD2DGeometry | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CD2DGeometry"
  - "afxrendertarget/CD2DGeometry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DGeometry (classe)"
ms.assetid: 3f95054b-fdb8-4e87-87f2-9fc3df7279ec
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Classe CD2DGeometry
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Wrapper per ID2D1Geometry.  
  
## Sintassi  
  
```  
class CD2DGeometry : public CD2DResource;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DGeometry::CD2DGeometry](../Topic/CD2DGeometry::CD2DGeometry.md)|Costruisce un oggetto CD2DGeometry.|  
|[CD2DGeometry::~CD2DGeometry](../Topic/CD2DGeometry::~CD2DGeometry.md)|Il distruttore.  Chiamato quando è in corso l'eliminazione di un oggetto Geometry D2D.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DGeometry::Attach](../Topic/CD2DGeometry::Attach.md)|Allega l'interfaccia della risorsa esistente all'oggetto|  
|[CD2DGeometry::CombineWithGeometry](../Topic/CD2DGeometry::CombineWithGeometry.md)|Combina questa geometria con la geometria specificata e archivia il risultato in un oggetto ID2D1SimplifiedGeometrySink.|  
|[CD2DGeometry::CompareWithGeometry](../Topic/CD2DGeometry::CompareWithGeometry.md)|Descrive l'intersezione tra questa geometria e la geometria specificata.  Il confronto viene eseguito utilizzando la tolleranza dell'appiattimento specificata.|  
|[CD2DGeometry::ComputeArea](../Topic/CD2DGeometry::ComputeArea.md)|Calcola l'area della geometria dopo che è stata trasformata dalla matrice specificata e bidimensionale utilizzando la tolleranza specificata.|  
|[CD2DGeometry::ComputeLength](../Topic/CD2DGeometry::ComputeLength.md)|Calcola la lunghezza della geometria come se ogni segmento fosse spiegato in una riga.|  
|[CD2DGeometry::ComputePointAtLength](../Topic/CD2DGeometry::ComputePointAtLength.md)|Calcola il punto e il vettore tangente alla distanza specificata lungo la geometria dopo che è stato trasformato dalla matrice specificata e bidimensionale utilizzando la tolleranza specificata.|  
|[CD2DGeometry::Destroy](../Topic/CD2DGeometry::Destroy.md)|Elimina un oggetto CD2DGeometry.  \(Esegue l'override di [CD2DResource::Destroy](../Topic/CD2DResource::Destroy.md).\)|  
|[CD2DGeometry::Detach](../Topic/CD2DGeometry::Detach.md)|Disconnette l'interfaccia della risorsa dall'oggetto|  
|[CD2DGeometry::FillContainsPoint](../Topic/CD2DGeometry::FillContainsPoint.md)|Indica se l'area riempita dalla geometria potrebbe contenere il punto specificato in base alla tolleranza bidimensionale specificata.|  
|[CD2DGeometry::Get](../Topic/CD2DGeometry::Get.md)|Restituisce l'interfaccia ID2D1Geometry.|  
|[CD2DGeometry::GetBounds](../Topic/CD2DGeometry::GetBounds.md)||  
|[CD2DGeometry::GetWidenedBounds](../Topic/CD2DGeometry::GetWidenedBounds.md)|Ottiene i limiti della geometria dopo che è stata ampliata in base alla larghezza e allo stile del tratto specificati e dopo che è stata trasformata dalla matrice specificata.|  
|[CD2DGeometry::IsValid](../Topic/CD2DGeometry::IsValid.md)|Controlla la validità della risorsa \(Esegue l'override di [CD2DResource::IsValid](../Topic/CD2DResource::IsValid.md).\)|  
|[CD2DGeometry::Outline](../Topic/CD2DGeometry::Outline.md)|Calcola la struttura della geometria e scrive il risultato in un oggetto ID2D1SimplifiedGeometrySink.|  
|[CD2DGeometry::Simplify](../Topic/CD2DGeometry::Simplify.md)|Crea una versione semplificata della geometria contenente solo righe e \(facoltativamente\) curve di Bezier cubiche e scrive il risultato in un ID2D1SimplifiedGeometrySink.|  
|[CD2DGeometry::StrokeContainsPoint](../Topic/CD2DGeometry::StrokeContainsPoint.md)|Determina se il tratto della geometria contiene il punto specificato dato lo spessore, lo stile e la trasformazione del tratto specificato.|  
|[CD2DGeometry::Tessellate](../Topic/CD2DGeometry::Tessellate.md)|Crea un set di triangoli con vertici orientati in senso orario che analizzano la geometria dopo che è stata trasformata utilizzando la matrice specificata e bidimensionale tramite la tolleranza specificata.|  
|[CD2DGeometry::Widen](../Topic/CD2DGeometry::Widen.md)|Amplia la geometria in base al tratto specificato e scrive il risultato in un oggetto ID2D1SimplifiedGeometrySink dopo che è stato trasformato dalla matrice specificata e bidimensionale utilizzando la tolleranza specificata.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DGeometry::operator ID2D1Geometry\*](../Topic/CD2DGeometry::operator%20ID2D1Geometry*.md)|Restituisce l'interfaccia ID2D1Geometry.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DGeometry::m\_pGeometry](../Topic/CD2DGeometry::m_pGeometry.md)|Puntatore a un oggetto ID2D1Geometry.|  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DGeometry](../../mfc/reference/cd2dgeometry-class.md)  
  
## Requisiti  
 **Intestazione:** afxrendertarget.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)