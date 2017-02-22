---
title: "Classe CD2DBrush | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CD2DBrush"
  - "afxrendertarget/CD2DBrush"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DBrush (classe)"
ms.assetid: 0d2c0857-2261-48a8-8ee0-a88cbf08499a
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Classe CD2DBrush
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Wrapper per ID2D1Brush.  
  
## Sintassi  
  
```  
class CD2DBrush : public CD2DResource;  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBrush::CD2DBrush](../Topic/CD2DBrush::CD2DBrush.md)|Costruisce un oggetto CD2DBrush.|  
|[CD2DBrush::~CD2DBrush](../Topic/CD2DBrush::~CD2DBrush.md)|Il distruttore.  Chiamato quando è in corso l'eliminazione di un oggetto Brush D2D.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBrush::Attach](../Topic/CD2DBrush::Attach.md)|Allega l'interfaccia della risorsa esistente all'oggetto|  
|[CD2DBrush::Destroy](../Topic/CD2DBrush::Destroy.md)|Elimina un oggetto CD2DBrush.  \(Esegue l'override di [CD2DResource::Destroy](../Topic/CD2DResource::Destroy.md).\)|  
|[CD2DBrush::Detach](../Topic/CD2DBrush::Detach.md)|Disconnette l'interfaccia della risorsa dall'oggetto|  
|[CD2DBrush::Get](../Topic/CD2DBrush::Get.md)|Restituisce l'interfaccia ID2D1Brush|  
|[CD2DBrush::GetOpacity](../Topic/CD2DBrush::GetOpacity.md)|Ottiene il grado di opacità di questo pennello|  
|[CD2DBrush::GetTransform](../Topic/CD2DBrush::GetTransform.md)|Ottiene la trasformazione corrente della destinazione di rendering.|  
|[CD2DBrush::IsValid](../Topic/CD2DBrush::IsValid.md)|Controlla la validità della risorsa \(Esegue l'override di [CD2DResource::IsValid](../Topic/CD2DResource::IsValid.md).\)|  
|[CD2DBrush::SetOpacity](../Topic/CD2DBrush::SetOpacity.md)|Imposta il grado di opacità di questo pennello|  
|[CD2DBrush::SetTransform](../Topic/CD2DBrush::SetTransform.md)|Applica la trasformazione specificata alla destinazione di rendering, sostituendo la trasformazione esistente.  Tutte le operazioni di disegno successive si verificano nello spazio trasformato|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBrush::operator ID2D1Brush\*](../Topic/CD2DBrush::operator%20ID2D1Brush*.md)|Restituisce l'interfaccia ID2D1Brush|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBrush::m\_pBrush](../Topic/CD2DBrush::m_pBrush.md)|Archivia un puntatore a un oggetto ID2D1Bitmap.|  
|[CD2DBrush::m\_pBrushProperties](../Topic/CD2DBrush::m_pBrushProperties.md)|Proprietà del pennello.|  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DBrush](../../mfc/reference/cd2dbrush-class.md)  
  
## Requisiti  
 **Intestazione:** afxrendertarget.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)