---
title: "CPaintDC Class | Microsoft Docs"
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
  - "CPaintDC"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPaintDC class"
  - "OnPaint handler"
  - "WM_PAINT message"
ms.assetid: 7e245baa-bf9b-403e-a637-7218adf28fab
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CPaintDC Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una classe di contesto di dispositivo derivata da [CDC](../../mfc/reference/cdc-class.md).  
  
## Sintassi  
  
```  
class CPaintDC : public CDC  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPaintDC::CPaintDC](../Topic/CPaintDC::CPaintDC.md)|Costruisce `CPaintDC` connesso a [CWnd](../../mfc/reference/cwnd-class.md)specificato.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPaintDC::m\_ps](../Topic/CPaintDC::m_ps.md)|Contiene [PAINTSTRUCT](../../mfc/reference/paintstruct-structure.md) utilizzato per disegnare l'area client.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPaintDC::m\_hWnd](../Topic/CPaintDC::m_hWnd.md)|`HWND` a cui questo oggetto `CPaintDC` è collegato.|  
  
## Note  
 Esegue [CWnd::BeginPaint](../Topic/CWnd::BeginPaint.md) in fase di costruzione e [CWnd::EndPaint](../Topic/CWnd::EndPaint.md) in fase di eliminazione.  
  
 Un oggetto `CPaintDC` può essere utilizzato solo quando risponde a un messaggio [WM\_PAINT](http://msdn.microsoft.com/library/windows/desktop/dd145213), in genere nella funzione membro per la gestione dei messaggi `OnPaint`.  
  
 Per ulteriori informazioni su l `CPaintDC`, vedere [Contesti di periferica](../../mfc/device-contexts.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDC](../../mfc/reference/cdc-class.md)  
  
 `CPaintDC`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [MFC esempi MDI](../../top/visual-cpp-samples.md)   
 [Classe CDC](../../mfc/reference/cdc-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)