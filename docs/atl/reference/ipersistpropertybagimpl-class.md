---
title: "IPersistPropertyBagImpl Class | Microsoft Docs"
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
  - "IPersistPropertyBagImpl"
  - "ATL.IPersistPropertyBagImpl<T>"
  - "ATL::IPersistPropertyBagImpl"
  - "ATL::IPersistPropertyBagImpl<T>"
  - "ATL.IPersistPropertyBagImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IPersistPropertyBagImpl class"
ms.assetid: 712af24d-99f8-40f2-9811-53b3ff6e5b19
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IPersistPropertyBagImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa **IUnknown** e consente a un oggetto salvare le proprietà su un contenitore di proprietà fornito.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template <   
class T   
>  
class ATL_NO_VTABLE IPersistPropertyBagImpl :  
public IPersistPropertyBag  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IPersistPropertyBagImpl`.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPersistPropertyBagImpl::GetClassID](../Topic/IPersistPropertyBagImpl::GetClassID.md)|Recupera il CLSID dell'oggetto.|  
|[IPersistPropertyBagImpl::InitNew](../Topic/IPersistPropertyBagImpl::InitNew.md)|Inizializza un oggetto appena creato.  L'implementazione ATL restituisce `S_OK`.|  
|[IPersistPropertyBagImpl::Load](../Topic/IPersistPropertyBagImpl::Load.md)|Carica le proprietà dell'oggetto da un contenitore di proprietà fornito.|  
|[IPersistPropertyBagImpl::Save](../Topic/IPersistPropertyBagImpl::Save.md)|Carica le proprietà dell'oggetto in un contenitore di proprietà fornito.|  
  
## Note  
 L'interfaccia [IPersistPropertyBag](https://msdn.microsoft.com/en-us/library/aa768205.aspx) consente a un oggetto salvare le proprietà su un contenitore di proprietà fornito.  La classe `IPersistPropertyBagImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa **IUnknown** inviando le informazioni del dispositivo di dump nelle build di debug.  
  
 Funzionamento di**IPersistPropertyBag** insieme a [IPropertyBag](https://msdn.microsoft.com/en-us/library/aa768196.aspx) e [IErrorLog](https://msdn.microsoft.com/en-us/library/aa768231.aspx).  Queste due interfacce finale devono essere implementate dal client.  Con `IPropertyBag`, il client salva e carica le singole proprietà dell'oggetto.  Con **IErrorLog**, sia l'oggetto che il client può segnalare gli eventuali errori riscontrati.  
  
 **Articoli correlati** [L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [Creare un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## Gerarchia di ereditarietà  
 `IPersistPropertyBag`  
  
 `IPersistPropertyBagImpl`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [BEGIN\_PROP\_MAP](../Topic/BEGIN_PROP_MAP.md)   
 [Class Overview](../../atl/atl-class-overview.md)