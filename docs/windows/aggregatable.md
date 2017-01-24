---
title: "aggregatable | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.aggregatable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "aggregatable attribute"
ms.assetid: 9253a46a-cd76-41f2-b3b6-86f709bb069c
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# aggregatable
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica che la classe supporta aggregato.  
  
## Sintassi  
  
```  
  
      [ aggregatable(   
   value  
) ]  
```  
  
#### Parametri  
 *valore* \(facoltativo\)  
 un parametro per indicare quando l'oggetto COM può essere aggregatoe:  
  
-   **mai** l'oggetto COM non può essere aggregatoe.  
  
-   **concedere** L'oggetto COM può essere creato direttamente o può essere aggregatoe.  Questa è l'impostazione predefinita.  
  
-   **sempre** L'oggetto COM non può essere creato direttamente e può essere aggregatoe solo.  Quando si chiama `CoCreateInstance` per questo oggetto, è necessario specificare l'oggetto aggregante  **IUnknown** interfaccia \(il controllo  **IUnknown**\).  
  
## Note  
 **cui aggregatable** L'attributo di C\+\+ ha la stessa funzionalità di  [cui aggregatable](http://msdn.microsoft.com/library/windows/desktop/aa366721) Attributo MIDL.  Ciò significa che il passaggio **cui aggregatable** attributo al file generato con estensione .idl.  
  
 L'attributo richiede che [coclasse](../windows/coclass.md),  [progid](../windows/progid.md), o  [vi\_progid](../windows/vi-progid.md) attributo o un altro attributo che implica uno di questi\) viene applicato anche allo stesso elemento.  Se qualsiasi singolo attributo viene utilizzato, gli altri due vengono applicate automaticamente.  Ad esempio, se **progid** viene applicato,  **vi\_progid** e  **coclasse** anche applicati.  
  
 **Progetti ATL**  
  
 Se questo attributo viene utilizzato in un progetto che utilizza ATL, il comportamento dell'attributo viene modificato.  Oltre al comportamento descritto in precedenza, l'attributo viene aggiunta una delle macro nella classe di destinazione:  
  
|Valore del parametro|Macro di comando|  
|--------------------------|----------------------|  
|**Mai**|[DECLARE\_NOT\_AGGREGATABLE](../Topic/DECLARE_NOT_AGGREGATABLE.md)|  
|**Consentito**|[DECLARE\_POLY\_AGGREGATABLE](../Topic/DECLARE_POLY_AGGREGATABLE.md)|  
|**Sempre**|[DECLARE\_ONLY\_AGGREGATABLE](../Topic/DECLARE_ONLY_AGGREGATABLE.md)|  
  
## Esempio  
  
```  
// cpp_attr_ref_aggregatable.cpp  
// compile with: /LD  
#define _ATL_ATTRIBUTES  
#include "atlbase.h"  
#include "atlcom.h"  
  
[module(name="MyModule")];  
  
[ coclass, aggregatable(allowed),  
  uuid("1a8369cc-1c91-42c4-befa-5a5d8c9d2529")]  
class CMyClass {};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**,  `struct`|  
|**ripetibile**|No|  
|**attributi obbligatori**|Uno o più dei seguenti elementi: **coclasse**,  **progid**, o  **vi\_progid**.|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Aggregation](http://msdn.microsoft.com/library/windows/desktop/ms686558)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)