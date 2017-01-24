---
title: "CMFCAcceleratorKeyAssignCtrl Class | Microsoft Docs"
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
  - "CMFCAcceleratorKeyAssignCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCAcceleratorKeyAssignCtrl class"
ms.assetid: 89fb8e62-596e-4e71-8c9a-32740347aaab
caps.latest.revision: 33
caps.handback.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCAcceleratorKeyAssignCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCAcceleratorKeyAssignCtrl` estende la [CEdit Class](../../mfc/reference/cedit-class.md) per supportare pulsanti di sistema supplementari come ALT, CTRL e MAIUSC.  
  
## Sintassi  
  
```  
class CMFCAcceleratorKeyAssignCtrl : public CEdit  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCAcceleratorKeyAssignCtrl::CMFCAcceleratorKeyAssignCtrl](../Topic/CMFCAcceleratorKeyAssignCtrl::CMFCAcceleratorKeyAssignCtrl.md)|Costruisce un oggetto `CMFCAcceleratorKeyAssignCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCAcceleratorKeyAssignCtrl::GetAccel](../Topic/CMFCAcceleratorKeyAssignCtrl::GetAccel.md)|Richiama la `ACCEL` struttura per una combinazione di testi premuta nell'oggetto `CMFCAcceleratorKeyAssignCtrl`.|  
|[CMFCAcceleratorKeyAssignCtrl::IsFocused](../Topic/CMFCAcceleratorKeyAssignCtrl::IsFocused.md)||  
|[CMFCAcceleratorKeyAssignCtrl::IsKeyDefined](../Topic/CMFCAcceleratorKeyAssignCtrl::IsKeyDefined.md)|Determina se è stato definita una combinazione di tasti.|  
|[CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage](../Topic/CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage.md)|Usato dalla classe [CWinApp](../../mfc/reference/cwinapp-class.md) per convertire i messaggi della finestra prima che vengano inviati alle funzioni Windows [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934).  Esegue l'override di [CWnd::PreTranslateMessage](../Topic/CWnd::PreTranslateMessage.md).|  
|[CMFCAcceleratorKeyAssignCtrl::ResetKey](../Topic/CMFCAcceleratorKeyAssignCtrl::ResetKey.md)|Reimposta la combinazione di tasti.|  
  
## Note  
 Questa classe estende la funzionalità della classe `CEdit` grazie al supporto delle combinazioni di tasti, note anche come tasti di scelta rapida.  La classe `CMFCAcceleratorKeyAssignCtrl` funziona come una [CEdit Class](../../mfc/reference/cedit-class.md) ed è anche in grado di riconoscere i pulsanti di sistema.  
  
 Questa classe esegue il mapping delle combinazioni di tasti per i valori stringa.  Ad esempio, si presupponga che viene eseguito il mapping della combinazione di tasti ALT \+ B alla stringa "Alt \+ B".  Quando l'utente preme questa combinazione di tasti in un oggetto `CMFCAcceleratorKeyAssignCtrl`, "Alt \+ B" viene visualizzato all'utente.  Per altre informazioni sul mapping tra le combinazioni di tasti e un formato di stringa, vedere [CMFCAcceleratorKey Class](../../mfc/reference/cmfcacceleratorkey-class.md).  
  
## Esempio  
 L'esempio seguente illustra come costruire un oggetto `CMFCAcceleratorKeyAssignCtrl` e usare il relativo metodo `ResetKey` per reimpostare la combinazione di tasti.  
  
 [!code-cpp[NVC_MFC_RibbonApp#31](../../mfc/reference/codesnippet/CPP/cmfcacceleratorkeyassignctrl-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CEdit](../../mfc/reference/cedit-class.md)  
  
 [CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md)  
  
## Requisiti  
 **Intestazione:** afxacceleratorkeyassignctrl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCAcceleratorKey Class](../../mfc/reference/cmfcacceleratorkey-class.md)