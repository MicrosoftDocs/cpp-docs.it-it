---
title: "Classe CD2DMesh | Microsoft Docs"
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
  - "afxrendertarget/CD2DMesh"
  - "CD2DMesh"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DMesh (classe)"
ms.assetid: 11a2c78a-1367-40e8-a34f-44aa0509a4c9
caps.latest.revision: 17
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CD2DMesh
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Wrapper per ID2D1Mesh.  
  
## Sintassi  
  
```  
class CD2DMesh : public CD2DResource;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DMesh::CD2DMesh](../Topic/CD2DMesh::CD2DMesh.md)|Costruisce un oggetto CD2DMesh.|  
|[CD2DMesh::~CD2DMesh](../Topic/CD2DMesh::~CD2DMesh.md)|Il distruttore.  Chiamato quando è in corso l'eliminazione di un oggetto mesh D2D.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DMesh::Attach](../Topic/CD2DMesh::Attach.md)|Allega l'interfaccia della risorsa esistente all'oggetto|  
|[CD2DMesh::Create](../Topic/CD2DMesh::Create.md)|Crea un CD2DMesh.  \(Esegue l'override di [CD2DResource::Create](../Topic/CD2DResource::Create.md)\).|  
|[CD2DMesh::Destroy](../Topic/CD2DMesh::Destroy.md)|Elimina un oggetto CD2DMesh.  \(Esegue l'override di [CD2DResource::Destroy](../Topic/CD2DResource::Destroy.md).\)|  
|[CD2DMesh::Detach](../Topic/CD2DMesh::Detach.md)|Disconnette l'interfaccia della risorsa dall'oggetto|  
|[CD2DMesh::Get](../Topic/CD2DMesh::Get.md)|Restituisce l'interfaccia ID2D1Mesh|  
|[CD2DMesh::IsValid](../Topic/CD2DMesh::IsValid.md)|Controlla la validità della risorsa \(Esegue l'override di [CD2DResource::IsValid](../Topic/CD2DResource::IsValid.md).\)|  
|[CD2DMesh::Open](../Topic/CD2DMesh::Open.md)|Apre la mesh per il popolamento.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DMesh::operator ID2D1Mesh\*](../Topic/CD2DMesh::operator%20ID2D1Mesh*.md)|Restituisce l'interfaccia ID2D1Mesh|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DMesh::m\_pMesh](../Topic/CD2DMesh::m_pMesh.md)|Puntatore a un oggetto ID2D1Mesh.|  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DMesh](../../mfc/reference/cd2dmesh-class.md)  
  
## Requisiti  
 **Intestazione:** afxrendertarget.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)