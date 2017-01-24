---
title: "CClientDC Class | Microsoft Docs"
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
  - "CClientDC"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CClientDC class"
  - "CDC (classe), device contexts for client areas"
  - "client-area device context"
  - "device contexts, area client"
ms.assetid: 8a871d6b-06f8-496e-9fa3-9a5780848369
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CClientDC Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente infatti di chiamare funzioni Windows [GetDC](http://msdn.microsoft.com/library/windows/desktop/dd144871) in fase di costruzione e [ReleaseDC](http://msdn.microsoft.com/library/windows/desktop/dd162920) in fase di eliminazione.  
  
## Sintassi  
  
```  
  
class CClientDC : public CDC  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CClientDC::CClientDC](../Topic/CClientDC::CClientDC.md)|Costruisce un oggetto `CClientDC` connessi a `CWnd`.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CClientDC::m\_hWnd](../Topic/CClientDC::m_hWnd.md)|`HWND` della finestra per il quale questo `CClientDC` è valido.|  
  
## Note  
 Ciò significa che il contesto di dispositivo associato a un oggetto `CClientDC` è l'area client di una finestra.  
  
 Per ulteriori informazioni su `CClientDC`, vedere [Contesti di periferica](../../mfc/device-contexts.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDC](../../mfc/reference/cdc-class.md)  
  
 `CClientDC`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [Esempio MDI MFC](../../top/visual-cpp-samples.md)   
 [Classe CDC](../../mfc/reference/cdc-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CDC](../../mfc/reference/cdc-class.md)