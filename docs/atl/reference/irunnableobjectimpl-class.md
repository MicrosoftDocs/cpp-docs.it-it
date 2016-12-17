---
title: "IRunnableObjectImpl Class | Microsoft Docs"
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
  - "IRunnableObjectImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "contenitori, running controls"
  - "controlli [ATL], esecuzione"
  - "controlli [C++], container running in ATL"
  - "IRunnableObject, implementazione ATL"
  - "IRunnableObjectImpl class"
ms.assetid: 305c7c3b-889e-49dd-aca1-34379c1b9931
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRunnableObjectImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa **IUnknown** e fornisce un'implementazione predefinita dell'interfaccia [IRunnableObject](http://msdn.microsoft.com/library/windows/desktop/ms692783).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template< class   
      T  
      >  
class IRunnableObjectImpl  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IRunnableObjectImpl`.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IRunnableObjectImpl::GetRunningClass](../Topic/IRunnableObjectImpl::GetRunningClass.md)|Restituisce il CLSID del controllo in esecuzione.  L'implementazione ATL imposta il CLSID a `GUID_NULL` e restituisce **E\_UNEXPECTED**.|  
|[IRunnableObjectImpl::IsRunning](../Topic/IRunnableObjectImpl::IsRunning.md)|Determina se il controllo è in esecuzione.  L'implementazione ATL restituisce **TRUE**.|  
|[IRunnableObjectImpl::LockRunning](../Topic/IRunnableObjectImpl::LockRunning.md)|Blocca il controllo in stato di esecuzione.  L'implementazione ATL restituisce `S_OK`.|  
|[IRunnableObjectImpl::Run](../Topic/IRunnableObjectImpl::Run.md)|Forza il controllo per l'esecuzione.  L'implementazione ATL restituisce `S_OK`.|  
|[IRunnableObjectImpl::SetContainedObject](../Topic/IRunnableObjectImpl::SetContainedObject.md)|Indica che il controllo è incorporato.  L'implementazione ATL restituisce `S_OK`.|  
  
## Note  
 L'interfaccia [IRunnableObject](http://msdn.microsoft.com/library/windows/desktop/ms692783) consente a un contenitore per determinare se un controllo è in esecuzione, lo potrebbe essere, o bloccata in stato di esecuzione.  La classe `IRunnableObjectImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa **IUnknown** inviando le informazioni del dispositivo di dump nelle build di debug.  
  
 **Articoli correlati** [L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [Creare un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## Gerarchia di ereditarietà  
 `IRunnableObject`  
  
 `IRunnableObjectImpl`  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [CComControl Class](../../atl/reference/ccomcontrol-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)