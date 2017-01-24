---
title: "CWindowDC Class | Microsoft Docs"
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
  - "CWindowDC"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWindowDC class"
  - "device contexts, finestra"
  - "screen output classes"
ms.assetid: 876a3641-4cde-471c-b0d1-fe58b32af79c
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CWindowDC Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Derivata da `CDC`.  
  
## Sintassi  
  
```  
class CWindowDC : public CDC  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWindowDC::CWindowDC](../Topic/CWindowDC::CWindowDC.md)|Costruisce un oggetto `CWindowDC`.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWindowDC::m\_hWnd](../Topic/CWindowDC::m_hWnd.md)|Oggetto `HWND` a cui è associato `CWindowDC`.|  
  
## Note  
 Chiama la funzione Windows [GetWindowDC](http://msdn.microsoft.com/library/windows/desktop/dd144947\(v=vs.85\).aspx)in fase di costruzione e [ReleaseDC](http://msdn.microsoft.com/library/windows/desktop/dd162920\(v=vs.85\).aspx) in fase di eliminazione.  Ciò significa che un oggetto `CWindowDC` accede all'intera area dello schermo di un oggetto [CWnd](../../mfc/reference/cwnd-class.md) \(aree client e non client\).  
  
 Per ulteriori informazioni sull'utilizzo di `CWindowDC`, vedere [Contesti di dispositivo](../../mfc/device-contexts.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDC](../../mfc/reference/cdc-class.md)  
  
 `CWindowDC`  
  
## Requisiti  
 Intestazione: afxwin.h  
  
## Vedere anche  
 [Classe CDC](../../mfc/reference/cdc-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CDC](../../mfc/reference/cdc-class.md)