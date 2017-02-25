---
title: "COleControlModule Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleControlModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleControlModule class"
  - "control modules"
  - "MFC ActiveX controls, OLE control modules"
  - "OLE control modules"
ms.assetid: 0721724d-d4af-4eda-ad34-5a2b27810dd4
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# COleControlModule Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe base da cui deriva un oggetto modulo di controllo OLE.  
  
## Sintassi  
  
```  
class COleControlModule : public CWinApp  
```  
  
## Note  
 Questa classe fornisce le funzioni membro per inizializzare il modulo di controllo.  Ogni modulo di controllo OLE utilizzando le classi MFC \(Microsoft Foundation può contenere un solo oggetto derivato da `COleControlModule`.  Questo oggetto viene creato quando altri oggetti globali C\+\+ vengono costruiti.  Dichiarare l'oggetto derivato `COleControlModule` a livello globale.  
  
 Per ulteriori informazioni su come utilizzare la classe `COleControlModule`, vedere la classe [CWinApp](../../mfc/reference/cwinapp-class.md) e l'articolo [controlli ActiveX](../../mfc/mfc-activex-controls.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWinThread](../../mfc/reference/cwinthread-class.md)  
  
 [CWinApp](../../mfc/reference/cwinapp-class.md)  
  
 `COleControlModule`  
  
## Requisiti  
 **Header:** afxctl.h  
  
## Vedere anche  
 [Esempio TESTHELP MFC](../../top/visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)