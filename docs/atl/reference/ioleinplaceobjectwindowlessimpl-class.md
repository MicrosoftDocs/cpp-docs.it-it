---
title: "IOleInPlaceObjectWindowlessImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IOleInPlaceObjectWindowlessImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "activation [C++], ATL"
  - "ActiveX (controlli) [C++], communication between container and control"
  - "controlli [ATL], windowless"
  - "deactivating ATL"
  - "IOleInPlaceObjectWindowless, implementazione ATL"
  - "IOleInPlaceObjectWindowlessImpl class"
ms.assetid: a2e0feb4-bc59-4adf-aab2-105457bbdbb4
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# IOleInPlaceObjectWindowlessImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa **IUnknown** e fornisce metodi che consentono a un controllo senza finestra per ricevere i messaggi della finestra e per partecipare alle operazioni di trascinamento.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template< class   
      T  
      >  
class IOleInPlaceObjectWindowlessImpl  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IOleInPlaceObjectWindowlessImpl`.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelp](../Topic/IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelp.md)|Abilita la guida sensibile al contesto.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IOleInPlaceObjectWindowlessImpl::GetDropTarget](../Topic/IOleInPlaceObjectWindowlessImpl::GetDropTarget.md)|Fornisce l'interfaccia `IDropTarget` per un oggetto attivo sul posto e senza finestra che supporta operazioni di trascinamento cadono.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IOleInPlaceObjectWindowlessImpl::GetWindow](../Topic/IOleInPlaceObjectWindowlessImpl::GetWindow.md)|Ottiene un handle di finestra.|  
|[IOleInPlaceObjectWindowlessImpl::InPlaceDeactivate](../Topic/IOleInPlaceObjectWindowlessImpl::InPlaceDeactivate.md)|Disattiva il controllo sul posto attivo.|  
|[IOleInPlaceObjectWindowlessImpl::OnWindowMessage](../Topic/IOleInPlaceObjectWindowlessImpl::OnWindowMessage.md)|Invia un messaggio dal contenitore a un controllo senza finestra che è attivo sul posto.|  
|[IOleInPlaceObjectWindowlessImpl::ReactivateAndUndo](../Topic/IOleInPlaceObjectWindowlessImpl::ReactivateAndUndo.md)|Riattiva un controllo precedentemente disabilitato.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IOleInPlaceObjectWindowlessImpl::SetObjectRects](../Topic/IOleInPlaceObjectWindowlessImpl::SetObjectRects.md)|Indica quale parte del controllo sul posto è visibile.|  
|[IOleInPlaceObjectWindowlessImpl::UIDeactivate](../Topic/IOleInPlaceObjectWindowlessImpl::UIDeactivate.md)|Disattivare e rimuove l'interfaccia utente l'attivazione in grado di supportare.|  
  
## Note  
 L'interfaccia [IOleInPlaceObject](http://msdn.microsoft.com/library/windows/desktop/ms692646) gestisce la riattivazione e la disattivazione dei controlli sul posto e determina l'intervallo del controllo è visibile.  L'interfaccia [IOleInPlaceObjectWindowless](http://msdn.microsoft.com/library/windows/desktop/ms687304) consente a un controllo senza finestra per ricevere i messaggi della finestra e per partecipare alle operazioni di trascinamento.  La classe `IOleInPlaceObjectWindowlessImpl` fornisce un'implementazione predefinita `IOleInPlaceObject` e `IOleInPlaceObjectWindowless` e implementa **IUnknown** inviando le informazioni del dispositivo di dump nelle build di debug.  
  
 **Articoli correlati** [L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [Creare un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## Gerarchia di ereditarietà  
 `IOleInPlaceObjectWindowless`  
  
 `IOleInPlaceObjectWindowlessImpl`  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [CComControl Class](../../atl/reference/ccomcontrol-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)