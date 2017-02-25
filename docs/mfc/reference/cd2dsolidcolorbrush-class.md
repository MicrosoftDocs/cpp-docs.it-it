---
title: "Classe CD2DSolidColorBrush | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CD2DSolidColorBrush"
  - "afxrendertarget/CD2DSolidColorBrush"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DSolidColorBrush (classe)"
ms.assetid: d4506637-acce-4f74-8a9b-f0a45571a735
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 17
---
# Classe CD2DSolidColorBrush
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Wrapper per ID2D1SolidColorBrush.  
  
## Sintassi  
  
```  
class CD2DSolidColorBrush : public CD2DBrush;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DSolidColorBrush::CD2DSolidColorBrush](../Topic/CD2DSolidColorBrush::CD2DSolidColorBrush.md)|Di overload.  Costruisce un oggetto CD2DSolidColorBrush.|  
|[CD2DSolidColorBrush::~CD2DSolidColorBrush](../Topic/CD2DSolidColorBrush::~CD2DSolidColorBrush.md)|Il distruttore.  Chiamato quando è in corso l'eliminazione di un oggetto pennello a tinta unita D2D.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DSolidColorBrush::Attach](../Topic/CD2DSolidColorBrush::Attach.md)|Allega l'interfaccia della risorsa esistente all'oggetto|  
|[CD2DSolidColorBrush::Create](../Topic/CD2DSolidColorBrush::Create.md)|Crea un CD2DSolidColorBrush.  \(Esegue l'override di [CD2DResource::Create](../Topic/CD2DResource::Create.md)\).|  
|[CD2DSolidColorBrush::Destroy](../Topic/CD2DSolidColorBrush::Destroy.md)|Elimina un oggetto CD2DSolidColorBrush.  \(Esegue l'override di [CD2DBrush::Destroy](../Topic/CD2DBrush::Destroy.md)\).|  
|[CD2DSolidColorBrush::Detach](../Topic/CD2DSolidColorBrush::Detach.md)|Disconnette l'interfaccia della risorsa dall'oggetto|  
|[CD2DSolidColorBrush::Get](../Topic/CD2DSolidColorBrush::Get.md)|Restituisce l'interfaccia ID2D1SolidColorBrush|  
|[CD2DSolidColorBrush::GetColor](../Topic/CD2DSolidColorBrush::GetColor.md)|Recupera il colore del pennello a tinta unita|  
|[CD2DSolidColorBrush::SetColor](../Topic/CD2DSolidColorBrush::SetColor.md)|Specifica il colore di questo pennello della tinta unita|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DSolidColorBrush::operator ID2D1SolidColorBrush\*](../Topic/CD2DSolidColorBrush::operator%20ID2D1SolidColorBrush*.md)|Restituisce l'interfaccia ID2D1SolidColorBrush|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DSolidColorBrush::m\_colorSolid](../Topic/CD2DSolidColorBrush::m_colorSolid.md)|Colore a tinta unita del pennello.|  
|[CD2DSolidColorBrush::m\_pSolidColorBrush](../Topic/CD2DSolidColorBrush::m_pSolidColorBrush.md)|Archivia un puntatore a un oggetto ID2D1SolidColorBrush.|  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DBrush](../../mfc/reference/cd2dbrush-class.md)  
  
 [CD2DSolidColorBrush](../../mfc/reference/cd2dsolidcolorbrush-class.md)  
  
## Requisiti  
 **Intestazione:** afxrendertarget.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)