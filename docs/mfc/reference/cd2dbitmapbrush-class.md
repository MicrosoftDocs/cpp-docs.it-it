---
title: "Classe CD2DBitmapBrush | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CD2DBitmapBrush"
  - "afxrendertarget/CD2DBitmapBrush"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DBitmapBrush (classe)"
ms.assetid: 46ebbe34-66e0-44c8-af1d-d129e851de5e
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Classe CD2DBitmapBrush
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Wrapper per ID2D1BitmapBrush.  
  
## Sintassi  
  
```  
class CD2DBitmapBrush : public CD2DBrush;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBitmapBrush::CD2DBitmapBrush](../Topic/CD2DBitmapBrush::CD2DBitmapBrush.md)|Di overload.  Costruisce un oggetto CD2DBitmapBrush dal file.|  
|[CD2DBitmapBrush::~CD2DBitmapBrush](../Topic/CD2DBitmapBrush::~CD2DBitmapBrush.md)|Il distruttore.  Chiamato quando è in corso l'eliminazione di un oggetto pennello bitmap D2D.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBitmapBrush::Attach](../Topic/CD2DBitmapBrush::Attach.md)|Allega l'interfaccia della risorsa esistente all'oggetto|  
|[CD2DBitmapBrush::Create](../Topic/CD2DBitmapBrush::Create.md)|Crea un CD2DBitmapBrush.  \(Esegue l'override di [CD2DResource::Create](../Topic/CD2DResource::Create.md)\).|  
|[CD2DBitmapBrush::Destroy](../Topic/CD2DBitmapBrush::Destroy.md)|Elimina un oggetto CD2DBitmapBrush.  \(Esegue l'override di [CD2DBrush::Destroy](../Topic/CD2DBrush::Destroy.md)\).|  
|[CD2DBitmapBrush::Detach](../Topic/CD2DBitmapBrush::Detach.md)|Disconnette l'interfaccia della risorsa dall'oggetto|  
|[CD2DBitmapBrush::Get](../Topic/CD2DBitmapBrush::Get.md)|Restituisce l'interfaccia ID2D1BitmapBrush|  
|[CD2DBitmapBrush::GetBitmap](../Topic/CD2DBitmapBrush::GetBitmap.md)|Ottiene l'origine della bitmap che questo pennello utilizza per disegnare|  
|[CD2DBitmapBrush::GetExtendModeX](../Topic/CD2DBitmapBrush::GetExtendModeX.md)|Ottiene il metodo mediante il quale il pennello affianca orizzontalmente quelle aree che si estendono oltre la bitmap|  
|[CD2DBitmapBrush::GetExtendModeY](../Topic/CD2DBitmapBrush::GetExtendModeY.md)|Ottiene il metodo mediante il quale il pennello affianca verticalmente quelle aree che si estendono oltre la bitmap|  
|[CD2DBitmapBrush::GetInterpolationMode](../Topic/CD2DBitmapBrush::GetInterpolationMode.md)|Ottiene il metodo di interpolazione utilizzato quando la bitmap pennello viene ridimensionata o ruotata|  
|[CD2DBitmapBrush::SetBitmap](../Topic/CD2DBitmapBrush::SetBitmap.md)|Specifica l'origine della bitmap che questo pennello utilizza per disegnare|  
|[CD2DBitmapBrush::SetExtendModeX](../Topic/CD2DBitmapBrush::SetExtendModeX.md)|Specifica come il pennello riempie orizzontalmente quelle aree che si estendono oltre la bitmap|  
|[CD2DBitmapBrush::SetExtendModeY](../Topic/CD2DBitmapBrush::SetExtendModeY.md)|Specifica come il pennello affianca verticalmente quelle aree che si estendono oltre la bitmap|  
|[CD2DBitmapBrush::SetInterpolationMode](../Topic/CD2DBitmapBrush::SetInterpolationMode.md)|Specifica la modalità di interpolazione utilizzata quando la bitmap pennello viene ridimensionata o è ruotata|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBitmapBrush::CommonInit](../Topic/CD2DBitmapBrush::CommonInit.md)|Inizializza l'oggetto.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBitmapBrush::operator ID2D1BitmapBrush\*](../Topic/CD2DBitmapBrush::operator%20ID2D1BitmapBrush*.md)|Restituisce l'interfaccia ID2D1BitmapBrush|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DBitmapBrush::m\_pBitmap](../Topic/CD2DBitmapBrush::m_pBitmap.md)|Archivia un puntatore a un oggetto CD2DBitmap.|  
|[CD2DBitmapBrush::m\_pBitmapBrush](../Topic/CD2DBitmapBrush::m_pBitmapBrush.md)|Archivia un puntatore a un oggetto ID2D1BitmapBrush.|  
|[CD2DBitmapBrush::m\_pBitmapBrushProperties](../Topic/CD2DBitmapBrush::m_pBitmapBrushProperties.md)|Proprietà del pennello bitmap.|  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DBrush](../../mfc/reference/cd2dbrush-class.md)  
  
 [CD2DBitmapBrush](../../mfc/reference/cd2dbitmapbrush-class.md)  
  
## Requisiti  
 **Intestazione:** afxrendertarget.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)