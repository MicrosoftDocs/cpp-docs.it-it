---
title: "CAtlPreviewCtrlImpl Class | Microsoft Docs"
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
  - "atlpreviewctrlimpl/ATL::CAtlPreviewCtrlImpl"
  - "CAtlPreviewCtrlImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlPreviewCtrlImpl class"
ms.assetid: 39b3299e-07e4-4abc-9b6e-b54bfa3b0802
caps.latest.revision: 26
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAtlPreviewCtrlImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe è un'implementazione di ATL una finestra che viene inserita in una finestra host fornita dalla shell per l'anteprima complesso.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
class CAtlPreviewCtrlImpl : public CWindowImpl<CAtlPreviewCtrlImpl>, public IPreviewCtrl;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlPreviewCtrlImpl::~CAtlPreviewCtrlImpl](../Topic/CAtlPreviewCtrlImpl::~CAtlPreviewCtrlImpl.md)|Destructs un oggetto controllo di anteprima.|  
|[CAtlPreviewCtrlImpl::CAtlPreviewCtrlImpl](../Topic/CAtlPreviewCtrlImpl::CAtlPreviewCtrlImpl.md)|Costruisce un oggetto controllo di anteprima.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlPreviewCtrlImpl::Create](../Topic/CAtlPreviewCtrlImpl::Create.md)|Chiamato da un gestore di anteprima dettagliato per creare la finestra di Windows.|  
|[CAtlPreviewCtrlImpl::Destroy](../Topic/CAtlPreviewCtrlImpl::Destroy.md)|Chiamato da un gestore di anteprima dettagliato quando deve eliminare il controllo.|  
|[CAtlPreviewCtrlImpl::Focus](../Topic/CAtlPreviewCtrlImpl::Focus.md)|Imposta lo stato attivo per l'input su questo controllo.|  
|[CAtlPreviewCtrlImpl::OnPaint](../Topic/CAtlPreviewCtrlImpl::OnPaint.md)|Gestisce il messaggio di WM\_PAINT.|  
|[CAtlPreviewCtrlImpl::Redraw](../Topic/CAtlPreviewCtrlImpl::Redraw.md)|Indica al controllo di ridisegno.|  
|[CAtlPreviewCtrlImpl::SetHost](../Topic/CAtlPreviewCtrlImpl::SetHost.md)|Imposta un nuovo nodo padre del controllo.|  
|[CAtlPreviewCtrlImpl::SetPreviewVisuals](../Topic/CAtlPreviewCtrlImpl::SetPreviewVisuals.md)|Chiamato da un gestore di anteprima dettagliato quando deve impostare le rappresentazioni del contenuto di anteprima complesso.|  
|[CAtlPreviewCtrlImpl::SetRect](../Topic/CAtlPreviewCtrlImpl::SetRect.md)|Imposta un nuovo rettangolo di delimitazione del controllo.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlPreviewCtrlImpl::DoPaint](../Topic/CAtlPreviewCtrlImpl::DoPaint.md)|Chiamato dal framework per eseguire il rendering dell'anteprima.|  
  
### Costanti protette  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlPreviewCtrlImpl::m\_plf](../Topic/CAtlPreviewCtrlImpl::m_plf.md)|Carattere utilizzato per visualizzare testo nella finestra di anteprima.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlPreviewCtrlImpl::m\_clrBack](../Topic/CAtlPreviewCtrlImpl::m_clrBack.md)|Colore di sfondo della finestra di anteprima.|  
|[CAtlPreviewCtrlImpl::m\_clrText](../Topic/CAtlPreviewCtrlImpl::m_clrText.md)|Colore del testo della finestra di anteprima.|  
  
## Note  
  
## Gerarchia di ereditarietà  
 `TBase`  
  
 `ATL::CMessageMap`  
  
 `ATL::CWindowImplRoot<TBase>`  
  
 `ATL::CWindowImplBaseT<TBase,TWinTraits>`  
  
 [ATL::CWindowImpl\<CAtlPreviewCtrlImpl\>](../../atl/reference/cwindowimpl-class.md)  
  
 `IPreviewCtrl`  
  
 `ATL::CAtlPreviewCtrlImpl`  
  
## Requisiti  
 **Header:** atlpreviewctrlimpl.h  
  
## Vedere anche  
 [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md)