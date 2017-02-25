---
title: "Classe CD2DLayer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxrendertarget/CD2DLayer"
  - "CD2DLayer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DLayer (classe)"
ms.assetid: 2f96378e-66bb-40d1-9661-6afe324de3c1
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe CD2DLayer
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Wrapper per ID2D1Layer.  
  
## Sintassi  
  
```  
class CD2DLayer : public CD2DResource;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DLayer::CD2DLayer](../Topic/CD2DLayer::CD2DLayer.md)|Costruisce un oggetto CD2DLayer.|  
|[CD2DLayer::~CD2DLayer](../Topic/CD2DLayer::~CD2DLayer.md)|Il distruttore.  Chiamato quando è in corso l'eliminazione di un oggetto livello D2D.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DLayer::Attach](../Topic/CD2DLayer::Attach.md)|Allega l'interfaccia della risorsa esistente all'oggetto|  
|[CD2DLayer::Create](../Topic/CD2DLayer::Create.md)|Crea un CD2DLayer.  \(Esegue l'override di [CD2DResource::Create](../Topic/CD2DResource::Create.md)\).|  
|[CD2DLayer::Destroy](../Topic/CD2DLayer::Destroy.md)|Elimina un oggetto CD2DLayer.  \(Esegue l'override di [CD2DResource::Destroy](../Topic/CD2DResource::Destroy.md).\)|  
|[CD2DLayer::Detach](../Topic/CD2DLayer::Detach.md)|Disconnette l'interfaccia della risorsa dall'oggetto|  
|[CD2DLayer::Get](../Topic/CD2DLayer::Get.md)|Restituisce l'interfaccia ID2D1Layer|  
|[CD2DLayer::GetSize](../Topic/CD2DLayer::GetSize.md)|Restituisce la dimensione della destinazione di rendering in Device Independent Pixel|  
|[CD2DLayer::IsValid](../Topic/CD2DLayer::IsValid.md)|Controlla la validità della risorsa \(Esegue l'override di [CD2DResource::IsValid](../Topic/CD2DResource::IsValid.md).\)|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DLayer::operator ID2D1Layer\*](../Topic/CD2DLayer::operator%20ID2D1Layer*.md)|Restituisce l'interfaccia ID2D1Layer|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DLayer::m\_pLayer](../Topic/CD2DLayer::m_pLayer.md)|Archivia un puntatore ad un oggetto ID2D1Layer.|  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DLayer](../../mfc/reference/cd2dlayer-class.md)  
  
## Requisiti  
 **Intestazione:** afxrendertarget.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)