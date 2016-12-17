---
title: "Classe CBitmapRenderTarget | Microsoft Docs"
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
  - "afxrendertarget/CBitmapRenderTarget"
  - "CBitmapRenderTarget"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CBitmapRenderTarget (classe)"
ms.assetid: c89a4437-812e-4943-acb2-b429a04cc4d2
caps.latest.revision: 16
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CBitmapRenderTarget
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Wrapper per ID2D1BitmapRenderTarget.  
  
## Sintassi  
  
```  
class CBitmapRenderTarget : public CRenderTarget;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBitmapRenderTarget::CBitmapRenderTarget](../Topic/CBitmapRenderTarget::CBitmapRenderTarget.md)|Costruisce un oggetto CBitmapRenderTarget.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBitmapRenderTarget::Attach](../Topic/CBitmapRenderTarget::Attach.md)|Allega l'interfaccia della destinazione di rendering esistente all'oggetto|  
|[CBitmapRenderTarget::Detach](../Topic/CBitmapRenderTarget::Detach.md)|Disconnette l'interfaccia della destinazione di rendering dall'oggetto|  
|[CBitmapRenderTarget::GetBitmap](../Topic/CBitmapRenderTarget::GetBitmap.md)|Recupera la bitmap per questa destinazione di rendering.  La bitmap restituita può essere utilizzata per le operazioni di disegno.|  
|[CBitmapRenderTarget::GetBitmapRenderTarget](../Topic/CBitmapRenderTarget::GetBitmapRenderTarget.md)|Restituisce l'interfaccia ID2D1BitmapRenderTarget|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBitmapRenderTarget::operator ID2D1BitmapRenderTarget\*](../Topic/CBitmapRenderTarget::operator%20ID2D1BitmapRenderTarget*.md)|Restituisce l'interfaccia ID2D1BitmapRenderTarget|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBitmapRenderTarget::m\_pBitmapRenderTarget](../Topic/CBitmapRenderTarget::m_pBitmapRenderTarget.md)|Un puntatore a un oggetto ID2D1BitmapRenderTarget.|  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CRenderTarget](../../mfc/reference/crendertarget-class.md)  
  
 [CBitmapRenderTarget](../../mfc/reference/cbitmaprendertarget-class.md)  
  
## Requisiti  
 **Intestazione:** afxrendertarget.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)