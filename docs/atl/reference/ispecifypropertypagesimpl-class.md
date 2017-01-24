---
title: "ISpecifyPropertyPagesImpl Class | Microsoft Docs"
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
  - "ISpecifyPropertyPagesImpl"
  - "ATL.ISpecifyPropertyPagesImpl<T>"
  - "ATL::ISpecifyPropertyPagesImpl"
  - "ATL::ISpecifyPropertyPagesImpl<T>"
  - "ATL.ISpecifyPropertyPagesImpl"
  - "ISpecifyPropertyPagesImpl Class"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ISpecifyPropertyPages"
  - "ISpecifyPropertyPagesImpl class"
  - "proprietà (pagine), CLSIDs associated with"
ms.assetid: 4e4b9795-b656-4d56-9b8c-85941e7731f9
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ISpecifyPropertyPagesImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa **IUnknown** e fornisce un'implementazione predefinita dell'interfaccia [ISpecifyPropertyPages](http://msdn.microsoft.com/library/windows/desktop/ms695217).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template<  
class T   
>  
class ATL_NO_VTABLE ISpecifyPropertyPagesImpl :  
public ISpecifyPropertyPages  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `ISpecifyPropertyPagesImpl`.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ISpecifyPropertyPagesImpl::GetPages](../Topic/ISpecifyPropertyPagesImpl::GetPages.md)|Compila una matrice di valori calcolata di UUID.  Ogni HA corrisponde al CLSID per una delle pagine delle proprietà che possono essere visualizzati nella finestra delle proprietà dell'oggetto.|  
  
## Note  
 L'interfaccia [ISpecifyPropertyPages](http://msdn.microsoft.com/library/windows/desktop/ms695217) consente a un client ottenere un elenco di CLSID per le pagine delle proprietà supportata da un oggetto.  La classe `ISpecifyPropertyPagesImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa **IUnknown** inviando le informazioni del dispositivo di dump nelle build di debug.  
  
> [!NOTE]
>  Non esporre l'interfaccia **ISpecifyPropertyPages** se l'oggetto non supporta le pagine delle proprietà.  
  
 **Articoli correlati** [L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [Creare un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## Gerarchia di ereditarietà  
 `ISpecifyPropertyPages`  
  
 `ISpecifyPropertyPagesImpl`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [IPropertyPageImpl Class](../../atl/reference/ipropertypageimpl-class.md)   
 [IPerPropertyBrowsingImpl Class](../../atl/reference/iperpropertybrowsingimpl-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)