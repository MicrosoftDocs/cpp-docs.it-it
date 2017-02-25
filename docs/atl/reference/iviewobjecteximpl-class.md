---
title: "IViewObjectExImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::IViewObjectExImpl<T>"
  - "ATL.IViewObjectExImpl"
  - "ATL::IViewObjectExImpl"
  - "ATL.IViewObjectExImpl<T>"
  - "IViewObjectExImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], drawing"
  - "advise sinks"
  - "IViewObjectEx ATL implementation"
  - "IViewObjectExImpl class"
ms.assetid: ad6de760-1ee5-4883-b033-ae57beffc369
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# IViewObjectExImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa **IUnknown** e fornisce le implementazioni predefinite delle interfacce [IViewObject](http://msdn.microsoft.com/library/windows/desktop/ms680763), [IViewObject2](http://msdn.microsoft.com/library/windows/desktop/ms691318)e [IViewObjectEx](http://msdn.microsoft.com/library/windows/desktop/ms682375).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template<  
class T   
>  
class ATL_NO_VTABLE IViewObjectExImpl :  
public IViewObjectEx  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IViewObjectExImpl`.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IViewObjectExImpl::Draw](../Topic/IViewObjectExImpl::Draw.md)|Disegna una rappresentazione del controllo su un contesto di dispositivo.|  
|[IViewObjectExImpl::Freeze](../Topic/IViewObjectExImpl::Freeze.md)|Blocca la rappresentazione pull di un controllo in modo da non cambierà fino a `Unfreeze`.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IViewObjectExImpl::GetAdvise](../Topic/IViewObjectExImpl::GetAdvise.md)|Recupera una connessione esistente consultiva il sink sul controllo, se presente.|  
|[IViewObjectExImpl::GetColorSet](../Topic/IViewObjectExImpl::GetColorSet.md)|Restituisce la tavolozza logica utilizzata dal controllo per disegnare.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IViewObjectExImpl::GetExtent](../Topic/IViewObjectExImpl::GetExtent.md)|Recupera le dimensioni di visualizzazione del controllo in unità di HIMETRIC \(0,01 millimetri per unità\) dal membro dati [CComControlBase::m\_sizeExtent](../Topic/CComControlBase::m_sizeExtent.md)della classe del controllo.|  
|[IViewObjectExImpl::GetNaturalExtent](../Topic/IViewObjectExImpl::GetNaturalExtent.md)|Vengono forniti suggerimenti di ridimensionamento dal contenitore dell'oggetto da utilizzare come utente lo ridimensiona.|  
|[IViewObjectExImpl::GetRect](../Topic/IViewObjectExImpl::GetRect.md)|Restituisce un rettangolo che descrive un aspetto disegno richiesto.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IViewObjectExImpl::GetViewStatus](../Topic/IViewObjectExImpl::GetViewStatus.md)|Restituisce informazioni dell'opacità dell'oggetto e che aspetti del disegno sono supportati.|  
|[IViewObjectExImpl::QueryHitPoint](../Topic/IViewObjectExImpl::QueryHitPoint.md)|Controllare se il punto specificato nel rettangolo specificato e restituisce un valore [HITRESULT](http://msdn.microsoft.com/library/windows/desktop/ms682187) in `pHitResult`.|  
|[IViewObjectExImpl::QueryHitRect](../Topic/IViewObjectExImpl::QueryHitRect.md)|Controlla se il rettangolo del controllo si sovrapponga qualsiasi punto del rettangolo specificato di posizione e restituire un valore **HITRESULT** in `pHitResult`.|  
|[IViewObjectExImpl::SetAdvise](../Topic/IViewObjectExImpl::SetAdvise.md)|L'installazione di una connessione tra il controllo e un sink di notifica pertanto il sink può essere informati sulle modifiche apportate alla visualizzazione del controllo.|  
|[IViewObjectExImpl::Unfreeze](../Topic/IViewObjectExImpl::Unfreeze.md)|Scongela la rappresentazione pull del controllo.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
  
## Note  
 Le interfacce [IViewObject](http://msdn.microsoft.com/library/windows/desktop/ms680763), [IViewObject2](http://msdn.microsoft.com/library/windows/desktop/ms691318)e [IViewObjectEx](http://msdn.microsoft.com/library/windows/desktop/ms682375) consentono a un controllo per visualizzare direttamente e per creare e gestire un sink di notifica per notificare al contenitore delle modifiche nella visualizzazione del controllo.  L'interfaccia **IViewObjectEx** fornisce il supporto per le funzionalità estese del controllo come disegnare senza sfarfallio, controlli non rettangolari e trasparenti e hit testing, ad esempio come la fine un clic del mouse deve essere necessario essere considerata nel controllo.  La classe `IViewObjectExImpl` fornisce un'implementazione predefinita di queste interfacce e implementa **IUnknown** inviando le informazioni del dispositivo di dump nelle build di debug.  
  
## Gerarchia di ereditarietà  
 `IViewObjectEx`  
  
 `IViewObjectExImpl`  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [CComControl Class](../../atl/reference/ccomcontrol-class.md)   
 [ActiveX Controls Interfaces](http://msdn.microsoft.com/library/windows/desktop/ms692724)   
 [Esercitazione](../../atl/active-template-library-atl-tutorial.md)   
 [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)   
 [Class Overview](../../atl/atl-class-overview.md)