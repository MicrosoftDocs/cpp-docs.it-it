---
title: "Classe CHwndRenderTarget | Microsoft Docs"
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
  - "CHwndRenderTarget"
  - "afxrendertarget/CHwndRenderTarget"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHwndRenderTarget (classe)"
ms.assetid: aa65b69f-7202-46ea-af81-ef325da0b840
caps.latest.revision: 17
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CHwndRenderTarget
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Wrapper per ID2D1HwndRenderTarget.  
  
## Sintassi  
  
```  
class CHwndRenderTarget : public CRenderTarget;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHwndRenderTarget::CHwndRenderTarget](../Topic/CHwndRenderTarget::CHwndRenderTarget.md)|Costruisce un oggetto CHwndRenderTarget da HWND.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHwndRenderTarget::Attach](../Topic/CHwndRenderTarget::Attach.md)|Allega l'interfaccia della destinazione di rendering esistente all'oggetto|  
|[CHwndRenderTarget::CheckWindowState](../Topic/CHwndRenderTarget::CheckWindowState.md)|Indica se l'HWND associato a questa destinazione di rendering è nascosto.|  
|[CHwndRenderTarget::Create](../Topic/CHwndRenderTarget::Create.md)|Crea una destinazione di rendering associata alla finestra|  
|[CHwndRenderTarget::Detach](../Topic/CHwndRenderTarget::Detach.md)|Disconnette l'interfaccia della destinazione di rendering dall'oggetto|  
|[CHwndRenderTarget::GetHwnd](../Topic/CHwndRenderTarget::GetHwnd.md)|Restituisce l'HWND associato a questa destinazione di rendering.|  
|[CHwndRenderTarget::GetHwndRenderTarget](../Topic/CHwndRenderTarget::GetHwndRenderTarget.md)|Restituisce l'interfaccia ID2D1HwndRenderTarget.|  
|[CHwndRenderTarget::ReCreate](../Topic/CHwndRenderTarget::ReCreate.md)|Ricrea una destinazione di rendering associata alla finestra|  
|[CHwndRenderTarget::Resize](../Topic/CHwndRenderTarget::Resize.md)|Modifica la dimensione della destinazione di rendering in base alle dimensioni in pixel specificate|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHwndRenderTarget::operator ID2D1HwndRenderTarget\*](../Topic/CHwndRenderTarget::operator%20ID2D1HwndRenderTarget*.md)|Restituisce l'interfaccia ID2D1HwndRenderTarget.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHwndRenderTarget::m\_pHwndRenderTarget](../Topic/CHwndRenderTarget::m_pHwndRenderTarget.md)|Un puntatore a un oggetto ID2D1HwndRenderTarget.|  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CRenderTarget](../../mfc/reference/crendertarget-class.md)  
  
 [CHwndRenderTarget](../../mfc/reference/chwndrendertarget-class.md)  
  
## Requisiti  
 **Intestazione:** afxrendertarget.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)