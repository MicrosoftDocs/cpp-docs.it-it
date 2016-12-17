---
title: "IPropertyPageImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IPropertyPageImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IPropertyPage ATL implementation"
  - "IPropertyPageImpl class"
  - "proprietà (pagine)"
ms.assetid: f9b7c8b1-7a04-4eab-aa63-63efddb740fa
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IPropertyPageImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa **IUnknown** e fornisce un'implementazione predefinita dell'interfaccia [IPropertyPage](http://msdn.microsoft.com/library/windows/desktop/ms691246).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template< class   
      T  
      >  
class IPropertyPageImpl  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IPropertyPageImpl`.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPropertyPageImpl::IPropertyPageImpl](../Topic/IPropertyPageImpl::IPropertyPageImpl.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPropertyPageImpl::Activate](../Topic/IPropertyPageImpl::Activate.md)|Crea la finestra di dialogo per la pagina delle proprietà.|  
|[IPropertyPageImpl::Apply](../Topic/IPropertyPageImpl::Apply.md)|Applica i valori correnti della pagina delle proprietà agli oggetti sottostanti specificati con `SetObjects`.  L'implementazione ATL restituisce `S_OK`.|  
|[IPropertyPageImpl::Deactivate](../Topic/IPropertyPageImpl::Deactivate.md)|Elimina la finestra creata con **Attiva**.|  
|[IPropertyPageImpl::GetPageInfo](../Topic/IPropertyPageImpl::GetPageInfo.md)|Recupera le informazioni sulla pagina delle proprietà.|  
|[IPropertyPageImpl::Help](../Topic/IPropertyPageImpl::Help.md)|Guida di Windows per richiamare la pagina delle proprietà.|  
|[IPropertyPageImpl::IsPageDirty](../Topic/IPropertyPageImpl::IsPageDirty.md)|Indica se la pagina delle proprietà è stata modificata da quando è stata attivata.|  
|[IPropertyPageImpl::Move](../Topic/IPropertyPageImpl::Move.md)|Le posizioni e ridimensiona la finestra di dialogo pagina delle proprietà.|  
|[IPropertyPageImpl::SetDirty](../Topic/IPropertyPageImpl::SetDirty.md)|Contrassegna lo stato della pagina delle proprietà come modificato o invariato.|  
|[IPropertyPageImpl::SetObjects](../Topic/IPropertyPageImpl::SetObjects.md)|Fornisce una matrice di puntatori a **IUnknown** per gli oggetti associati alla pagina delle proprietà.  Questi oggetti ricevono i valori correnti della pagina delle proprietà con una chiamata a **Apply**.|  
|[IPropertyPageImpl::SetPageSite](../Topic/IPropertyPageImpl::SetPageSite.md)|Fornisce la pagina delle proprietà con un puntatore `IPropertyPageSite`, tra cui la pagina delle proprietà comunica con la finestra proprietà.|  
|[IPropertyPageImpl::Show](../Topic/IPropertyPageImpl::Show.md)|Nella finestra di dialogo pagina delle proprietà visibile o invisibile.|  
|[IPropertyPageImpl::TranslateAccelerator](../Topic/IPropertyPageImpl::TranslateAccelerator.md)|Elabora un tasto specificato.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPropertyPageImpl::m\_bDirty](../Topic/IPropertyPageImpl::m_bDirty.md)|Specifica se lo stato della pagina delle proprietà è stata modificata.|  
|[IPropertyPageImpl::m\_dwDocString](../Topic/IPropertyPageImpl::m_dwDocString.md)|Contiene l'identificatore della risorsa associato alla stringa di testo che descrive la pagina delle proprietà.|  
|[IPropertyPageImpl::m\_dwHelpContext](../Topic/IPropertyPageImpl::m_dwHelpContext.md)|Archivia l'identificatore di contesto per l'argomento della Guida associato alla pagina delle proprietà.|  
|[IPropertyPageImpl::m\_dwHelpFile](../Topic/IPropertyPageImpl::m_dwHelpFile.md)|Contiene l'identificatore della risorsa associato al nome del file della Guida che descrive la pagina delle proprietà.|  
|[IPropertyPageImpl::m\_dwTitle](../Topic/IPropertyPageImpl::m_dwTitle.md)|Contiene l'identificatore della risorsa associato alla stringa di testo visualizzata nella scheda della pagina delle proprietà.|  
|[IPropertyPageImpl::m\_nObjects](../Topic/IPropertyPageImpl::m_nObjects.md)|Archivia il numero di oggetti associati alla pagina delle proprietà.|  
|[IPropertyPageImpl::m\_pPageSite](../Topic/IPropertyPageImpl::m_pPageSite.md)|Punti all'interfaccia `IPropertyPageSite` tra cui la pagina delle proprietà comunica con la finestra proprietà.|  
|[IPropertyPageImpl::m\_ppUnk](../Topic/IPropertyPageImpl::m_ppUnk.md)|Punta a una matrice di puntatori a **IUnknown** a oggetti associati alla pagina delle proprietà.|  
|[IPropertyPageImpl::m\_size](../Topic/IPropertyPageImpl::m_size.md)|Archivia l'altezza e la larghezza della finestra di dialogo pagina delle proprietà, in pixel.|  
  
## Note  
 L'interfaccia [IPropertyPage](http://msdn.microsoft.com/library/windows/desktop/ms691246) consente a un oggetto gestire una pagina delle proprietà particolare all'interno di una finestra delle proprietà.  La classe `IPropertyPageImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa **IUnknown** inviando le informazioni del dispositivo di dump nelle build di debug.  
  
 **Articoli correlati** [L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [Creare un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## Gerarchia di ereditarietà  
 `IPropertyPage`  
  
 `IPropertyPageImpl`  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [IPropertyPage2Impl Class](../../atl/reference/ipropertypage2impl-class.md)   
 [IPerPropertyBrowsingImpl Class](../../atl/reference/iperpropertybrowsingimpl-class.md)   
 [ISpecifyPropertyPagesImpl Class](../../atl/reference/ispecifypropertypagesimpl-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)