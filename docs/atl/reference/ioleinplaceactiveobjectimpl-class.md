---
title: "IOleInPlaceActiveObjectImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IOleInPlaceActiveObjectImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], communication between container and control"
  - "IOleInPlaceActiveObject, implementazione ATL"
  - "IOleInPlaceActiveObjectImpl class"
ms.assetid: 44e6cc6d-a2dc-4187-98e3-73cf0320dea9
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# IOleInPlaceActiveObjectImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per la manutenzione di comunicazione tra un controllo sul posto e il relativo contenitore.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template< class   
      T  
      >  
class IOleInPlaceActiveObjectImpl  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IOleInPlaceActiveObjectImpl`.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IOleInPlaceActiveObjectImpl::ContextSensitiveHelp](../Topic/IOleInPlaceActiveObjectImpl::ContextSensitiveHelp.md)|Abilita la guida sensibile al contesto.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IOleInPlaceActiveObjectImpl::EnableModeless](../Topic/IOleInPlaceActiveObjectImpl::EnableModeless.md)|Attiva le finestre di dialogo non modale.  L'implementazione ATL restituisce `S_OK`.|  
|[IOleInPlaceActiveObjectImpl::GetWindow](../Topic/IOleInPlaceActiveObjectImpl::GetWindow.md)|Ottiene un handle di finestra.|  
|[IOleInPlaceActiveObjectImpl::OnDocWindowActivate](../Topic/IOleInPlaceActiveObjectImpl::OnDocWindowActivate.md)|Notifica al controllo quando la finestra del documento del contenitore viene attivata o disattivata.  L'implementazione ATL restituisce `S_OK`.|  
|[IOleInPlaceActiveObjectImpl::OnFrameWindowActivate](../Topic/IOleInPlaceActiveObjectImpl::OnFrameWindowActivate.md)|Notifica al controllo quando la finestra cornice di primo livello del contenitore viene attivata o disattivata.  Restituisce l'implementazione di ATL|  
|[IOleInPlaceActiveObjectImpl::ResizeBorder](../Topic/IOleInPlaceActiveObjectImpl::ResizeBorder.md)|Notifica al controllo che deve ridimensionare i bordi.  L'implementazione ATL restituisce `S_OK`.|  
|[IOleInPlaceActiveObjectImpl::TranslateAccelerator](../Topic/IOleInPlaceActiveObjectImpl::TranslateAccelerator.md)|Elabora i messaggi del tasto di scelta rapida di menu dal contenitore.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
  
## Note  
 L'interfaccia [IOleInPlaceActiveObject](http://msdn.microsoft.com/library/windows/desktop/ms691299) gestisce la comunicazione tra un controllo sul posto e il relativo contenitore; ad esempio, specificando lo stato attivo del controllo e del contenitore e notifica al controllo deve ridimensionare.  La classe `IOleInPlaceActiveObjectImpl` fornisce un'implementazione predefinita `IOleInPlaceActiveObject` e supporta **IUnknown** inviando le informazioni del dispositivo di dump nelle build di debug.  
  
 **Articoli correlati** [L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [Creare un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## Gerarchia di ereditarietà  
 `IOleInPlaceActiveObject`  
  
 `IOleInPlaceActiveObjectImpl`  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [CComControl Class](../../atl/reference/ccomcontrol-class.md)   
 [ActiveX Controls Interfaces](http://msdn.microsoft.com/library/windows/desktop/ms692724)   
 [Class Overview](../../atl/atl-class-overview.md)