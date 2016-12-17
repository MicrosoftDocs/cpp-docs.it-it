---
title: "CMiniFrameWnd Class | Microsoft Docs"
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
  - "CMiniFrameWnd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMiniFrameWnd class"
  - "mini-frame windows"
  - "barre degli strumenti [C++]"
ms.assetid: b8f534ed-0532-4d8e-9657-5595cf677749
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMiniFrameWnd Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta una finestra cornice dell'altezza in genere la visualizzazione delle barre degli strumenti mobili.  
  
## Sintassi  
  
```  
class CMiniFrameWnd : public CFrameWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMiniFrameWnd::CMiniFrameWnd](../Topic/CMiniFrameWnd::CMiniFrameWnd.md)|Costruisce un oggetto `CMiniFrameWnd`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMiniFrameWnd::Create](../Topic/CMiniFrameWnd::Create.md)|Crea un oggetto `CMiniFrameWnd` dopo la costruzione.|  
|[CMiniFrameWnd::CreateEx](../Topic/CMiniFrameWnd::CreateEx.md)|Crea un oggetto `CMiniFrameWnd` \(con le opzioni aggiuntive\) dopo la costruzione.|  
  
## Note  
 Queste finestre cornice piccola si comportano come le applicazioni utilizzano normali, con l'eccezione che non dispongono di ridurre a icona o ingrandiscono i pulsanti o i menu ed è necessario solo clic sul menu di sistema chiuderli solo.  
  
 Per utilizzare un oggetto `CMiniFrameWnd`, è necessario definire l'oggetto.  Chiamare la funzione membro [Crea](../Topic/CMiniFrameWnd::Create.md) per visualizzare la finestra cornice piccola.  
  
 Per ulteriori informazioni su come utilizzare gli oggetti `CMiniFrameWnd`, vedere l'articolo [L'aggancio e barre degli strumenti mobili](../../mfc/docking-and-floating-toolbars.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 `CMiniFrameWnd`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [CFrameWnd Class](../../mfc/reference/cframewnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFrameWnd Class](../../mfc/reference/cframewnd-class.md)