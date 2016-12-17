---
title: "CMFCPreviewCtrlImpl Class | Microsoft Docs"
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
  - "CMFCPreviewCtrlImpl"
  - "afxwin/CMFCPreviewCtrlImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCPreviewCtrlImpl class"
ms.assetid: 06257fa0-54c9-478d-9d68-c9698c3f93ed
caps.latest.revision: 28
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCPreviewCtrlImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa una finestra che viene inserita in una finestra host fornita dalla shell per l'anteprima complesso.  
  
## Sintassi  
  
```  
class CMFCPreviewCtrlImpl : public CWnd;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPreviewCtrlImpl::~CMFCPreviewCtrlImpl](../Topic/CMFCPreviewCtrlImpl::~CMFCPreviewCtrlImpl.md)|Destructs un oggetto controllo di anteprima.|  
|[CMFCPreviewCtrlImpl::CMFCPreviewCtrlImpl](../Topic/CMFCPreviewCtrlImpl::CMFCPreviewCtrlImpl.md)|Costruisce un oggetto controllo di anteprima.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPreviewCtrlImpl::Create](../Topic/CMFCPreviewCtrlImpl::Create.md)|Di overload.  Chiamato da un gestore di anteprima dettagliato per creare la finestra di Windows.|  
|[CMFCPreviewCtrlImpl::Destroy](../Topic/CMFCPreviewCtrlImpl::Destroy.md)|Chiamato da un gestore di anteprima dettagliato quando deve eliminare il controllo.|  
|[CMFCPreviewCtrlImpl::Focus](../Topic/CMFCPreviewCtrlImpl::Focus.md)|Imposta lo stato attivo per l'input su questo controllo.|  
|[CMFCPreviewCtrlImpl::GetDocument](../Topic/CMFCPreviewCtrlImpl::GetDocument.md)|Restituisce un documento connesso al controllo di anteprima.|  
|[CMFCPreviewCtrlImpl::Redraw](../Topic/CMFCPreviewCtrlImpl::Redraw.md)|Indica al controllo di ridisegno.|  
|[CMFCPreviewCtrlImpl::SetDocument](../Topic/CMFCPreviewCtrlImpl::SetDocument.md)|Chiamato dal gestore di anteprima per creare una relazione tra l'implementazione del documento e il controllo di anteprima.|  
|[CMFCPreviewCtrlImpl::SetHost](../Topic/CMFCPreviewCtrlImpl::SetHost.md)|Imposta un nuovo nodo padre del controllo.|  
|[CMFCPreviewCtrlImpl::SetPreviewVisuals](../Topic/CMFCPreviewCtrlImpl::SetPreviewVisuals.md)|Chiamato da un gestore di anteprima dettagliato quando deve impostare le rappresentazioni del contenuto di anteprima complesso.|  
|[CMFCPreviewCtrlImpl::SetRect](../Topic/CMFCPreviewCtrlImpl::SetRect.md)|Imposta un nuovo rettangolo di delimitazione del controllo.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPreviewCtrlImpl::DoPaint](../Topic/CMFCPreviewCtrlImpl::DoPaint.md)|Chiamato dal framework per eseguire il rendering dell'anteprima.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPreviewCtrlImpl::m\_clrBackColor](../Topic/CMFCPreviewCtrlImpl::m_clrBackColor.md)|Colore di sfondo della finestra di anteprima.|  
|[CMFCPreviewCtrlImpl::m\_clrTextColor](../Topic/CMFCPreviewCtrlImpl::m_clrTextColor.md)|Colore del testo della finestra di anteprima.|  
|[CMFCPreviewCtrlImpl::m\_font](../Topic/CMFCPreviewCtrlImpl::m_font.md)|Carattere utilizzato per visualizzare testo nella finestra di anteprima.|  
|[CMFCPreviewCtrlImpl::m\_pDocument](../Topic/CMFCPreviewCtrlImpl::m_pDocument.md)|Un puntatore a un documento di cui il contenuto viene visualizzato in anteprima il controllo.|  
  
## Note  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCPreviewCtrlImpl](../../mfc/reference/cmfcpreviewctrlimpl-class.md)  
  
## Requisiti  
 **Intestazione:** afxwin.h