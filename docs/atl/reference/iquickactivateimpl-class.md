---
title: "IQuickActivateImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::IQuickActivateImpl"
  - "ATL::IQuickActivateImpl<T>"
  - "ATL.IQuickActivateImpl"
  - "ATL.IQuickActivateImpl<T>"
  - "IQuickActivateImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "activating ATL controls"
  - "controlli [ATL], attivazione"
  - "IQuickActivate ATL implementation"
  - "IQuickActivateImpl class"
ms.assetid: aa80c056-1041-494e-b21d-2acca7dc27ea
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# IQuickActivateImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe combina l'inizializzazione del controllo contenitore in un'unica chiamata.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template<   
class T   
>  
class ATL_NO_VTABLE IQuickActivateImpl :  
public IQuickActivate  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IQuickActivateImpl`.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IQuickActivateImpl::GetContentExtent](../Topic/IQuickActivateImpl::GetContentExtent.md)|Recupera le dimensioni correnti di visualizzazione per un controllo in esecuzione.|  
|[IQuickActivateImpl::QuickActivate](../Topic/IQuickActivateImpl::QuickActivate.md)|Esegue l'inizializzazione rapida dei comandi caricati.|  
|[IQuickActivateImpl::SetContentExtent](../Topic/IQuickActivateImpl::SetContentExtent.md)|Notifica al controllo dello spazio del contenitore viene assegnato.|  
  
## Note  
 I contenitori delle indicazioni dell'interfaccia [IQuickActivate](http://msdn.microsoft.com/library/windows/desktop/ms690146) evitare ritardi quando controlli di caricamento combinando l'inizializzazione in un'unica chiamata.  Il metodo `QuickActivate` consente del contenitore passare un puntatore a una struttura [QACONTAINER](http://msdn.microsoft.com/library/windows/desktop/ms688630) che utilizza puntatori alle interfacce le esigenze di controllo.  Per restituire, il controllo passa a un puntatore a una struttura [QACONTROL](http://msdn.microsoft.com/library/windows/desktop/ms693721) che utilizza puntatori alle relative interfacce, utilizzate dal contenitore.  La classe `IQuickActivateImpl` fornisce un'implementazione predefinita **IQuickActivate** e implementa **IUnknown** inviando le informazioni del dispositivo di dump nelle build di debug.  
  
 **Articoli correlati** [L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [Creare un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## Gerarchia di ereditarietà  
 `IQuickActivate`  
  
 `IQuickActivateImpl`  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [CComControl Class](../../atl/reference/ccomcontrol-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)