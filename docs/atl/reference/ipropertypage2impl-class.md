---
title: "IPropertyPage2Impl Class | Microsoft Docs"
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
  - "IPropertyPage2Impl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IPropertyPage2 ATL implementation"
  - "IPropertyPage2Impl class"
  - "proprietà (pagine)"
ms.assetid: e89fbe90-203a-47f0-a5de-23616697e1ce
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IPropertyPage2Impl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa **IUnknown** ed eredita l'implementazione predefinita [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template< class   
      T  
      >  
class IPropertyPage2Impl : public IPropertyPageImpl< T>  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IPropertyPage2Impl`.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPropertyPage2Impl::EditProperty](../Topic/IPropertyPage2Impl::EditProperty.md)|Specifica che il controllo della proprietà riceverà lo stato attivo quando la pagina delle proprietà è attivata.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
  
## Note  
 l'interfaccia [IPropertyPage2](http://msdn.microsoft.com/library/windows/desktop/ms683996) estende [IPropertyPage](http://msdn.microsoft.com/library/windows/desktop/ms691246) aggiungendo il metodo `EditProperty`.  Questo metodo consente a un client selezionare una proprietà specifica in un oggetto della pagina delle proprietà.  
  
 La classe `IPropertyPage2Impl` restituisce semplicemente **E\_NOTIMPL** per **IPropertyPage2::EditProperty**.  Tuttavia, eredita l'implementazione predefinita [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md) e implementa **IUnknown** inviando le informazioni del dispositivo di dump nelle build di debug.  
  
 Quando si crea una pagina delle proprietà, la classe in genere è derivata da `IPropertyPageImpl`.  Per fornire supporto aggiuntivo per **IPropertyPage2**, modificare la definizione della classe ed esegue l'override del metodo `EditProperty`.  
  
 **Articoli correlati** [L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [Creare un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## Gerarchia di ereditarietà  
 `IPropertyPage`  
  
 [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md)  
  
 `IPropertyPage2Impl`  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [IPerPropertyBrowsingImpl Class](../../atl/reference/iperpropertybrowsingimpl-class.md)   
 [ISpecifyPropertyPagesImpl Class](../../atl/reference/ispecifypropertypagesimpl-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)