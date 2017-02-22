---
title: "ISupportErrorInfoImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::ISupportErrorInfoImpl<piid>"
  - "ATL::ISupportErrorInfoImpl"
  - "ISupportErrorInfoImpl"
  - "ATL.ISupportErrorInfoImpl<piid>"
  - "ATL.ISupportErrorInfoImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "error information, ATL"
  - "ISupportErrorInfo ATL implementation"
  - "ISupportErrorInfoImpl class"
ms.assetid: e33a4b11-a123-41cf-bcea-7b19743902af
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 26
---
# ISupportErrorInfoImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce un'implementazione predefinita [ISupportErrorInfo Interface](http://msdn.microsoft.com/it-it/42d33066-36b4-4a5b-aa5d-46682e560f32) e può essere utilizzata quando una sola interfaccia genera errori in un oggetto.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template<  
const IID* piid   
>  
class ATL_NO_VTABLE ISupportErrorInfoImpl :  
public ISupportErrorInfo  
```  
  
#### Parametri  
 `piid`  
 Un puntatore all'IID di un'interfaccia che supporta [IErrorInfo](http://msdn.microsoft.com/it-it/4dda6909-2d9a-4727-ae0c-b5f90dcfa447).  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ISupportErrorInfoImpl::InterfaceSupportsErrorInfo](../Topic/ISupportErrorInfoImpl::InterfaceSupportsErrorInfo.md)|Indica se l'interfaccia identificata da `riid` supporta l'interfaccia [IErrorInfo](http://msdn.microsoft.com/it-it/4dda6909-2d9a-4727-ae0c-b5f90dcfa447).|  
  
## Note  
 [ISupportErrorInfo Interface](http://msdn.microsoft.com/it-it/42d33066-36b4-4a5b-aa5d-46682e560f32) garantisce che le informazioni sugli errori possano essere restituite al client.  Gli oggetti che utilizzano **IErrorInfo** devono implementare **ISupportErrorInfo**.  
  
 La classe `ISupportErrorInfoImpl` fornisce un'implementazione predefinita **ISupportErrorInfo** e può essere utilizzata quando una sola interfaccia genera errori in un oggetto.  Di seguito è riportato un esempio:  
  
 [!code-cpp[NVC_ATL_COM#48](../../atl/codesnippet/CPP/isupporterrorinfoimpl-class_1.h)]  
  
## Gerarchia di ereditarietà  
 `ISupportErrorInfo`  
  
 `ISupportErrorInfoImpl`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)