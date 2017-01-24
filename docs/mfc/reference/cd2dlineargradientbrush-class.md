---
title: "Classe CD2DLinearGradientBrush | Microsoft Docs"
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
  - "afxrendertarget/CD2DLinearGradientBrush"
  - "CD2DLinearGradientBrush"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DLinearGradientBrush (classe)"
ms.assetid: d4be9ff9-0ea8-45e6-9b8d-f3bc5673cbac
caps.latest.revision: 17
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CD2DLinearGradientBrush
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Wrapper per ID2D1LinearGradientBrush.  
  
## Sintassi  
  
```  
class CD2DLinearGradientBrush : public CD2DGradientBrush;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DLinearGradientBrush::CD2DLinearGradientBrush](../Topic/CD2DLinearGradientBrush::CD2DLinearGradientBrush.md)|Crea un oggetto CD2DLinearGradientBrush.|  
|[CD2DLinearGradientBrush::~CD2DLinearGradientBrush](../Topic/CD2DLinearGradientBrush::~CD2DLinearGradientBrush.md)|Il distruttore.  Chiamato quando è in corso l'eliminazione di un oggetto pennello sfumato lineare D2D.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DLinearGradientBrush::Attach](../Topic/CD2DLinearGradientBrush::Attach.md)|Allega l'interfaccia della risorsa esistente all'oggetto|  
|[CD2DLinearGradientBrush::Create](../Topic/CD2DLinearGradientBrush::Create.md)|Crea un CD2DLinearGradientBrush.  \(Esegue l'override di [CD2DResource::Create](../Topic/CD2DResource::Create.md)\).|  
|[CD2DLinearGradientBrush::Destroy](../Topic/CD2DLinearGradientBrush::Destroy.md)|Elimina un oggetto CD2DLinearGradientBrush.  \(Esegue l'override di [CD2DGradientBrush::Destroy](../Topic/CD2DGradientBrush::Destroy.md)\).|  
|[CD2DLinearGradientBrush::Detach](../Topic/CD2DLinearGradientBrush::Detach.md)|Disconnette l'interfaccia della risorsa dall'oggetto|  
|[CD2DLinearGradientBrush::Get](../Topic/CD2DLinearGradientBrush::Get.md)|Restituisce l'interfaccia ID2D1LinearGradientBrush|  
|[CD2DLinearGradientBrush::GetEndPoint](../Topic/CD2DLinearGradientBrush::GetEndPoint.md)|Recupera le coordinate finali della sfumatura lineare|  
|[CD2DLinearGradientBrush::GetStartPoint](../Topic/CD2DLinearGradientBrush::GetStartPoint.md)|Recupera le coordinate iniziali della sfumatura lineare|  
|[CD2DLinearGradientBrush::SetEndPoint](../Topic/CD2DLinearGradientBrush::SetEndPoint.md)|Imposta le coordinate finali della sfumatura lineare nello spazio delle coordinate del pennello|  
|[CD2DLinearGradientBrush::SetStartPoint](../Topic/CD2DLinearGradientBrush::SetStartPoint.md)|Imposta le coordinate iniziali della sfumatura lineare nello spazio delle coordinate del pennello.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DLinearGradientBrush::operator ID2D1LinearGradientBrush\*](../Topic/CD2DLinearGradientBrush::operator%20ID2D1LinearGradientBrush*.md)|Restituisce l'interfaccia ID2D1LinearGradientBrush|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DLinearGradientBrush::m\_LinearGradientBrushProperties](../Topic/CD2DLinearGradientBrush::m_LinearGradientBrushProperties.md)|I punti di inizio e di fine della sfumatura.|  
|[CD2DLinearGradientBrush::m\_pLinearGradientBrush](../Topic/CD2DLinearGradientBrush::m_pLinearGradientBrush.md)|Puntatore a un oggetto ID2D1LinearGradientBrush.|  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DBrush](../../mfc/reference/cd2dbrush-class.md)  
  
 [CD2DGradientBrush](../../mfc/reference/cd2dgradientbrush-class.md)  
  
 [CD2DLinearGradientBrush](../../mfc/reference/cd2dlineargradientbrush-class.md)  
  
## Requisiti  
 **Intestazione:** afxrendertarget.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)