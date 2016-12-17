---
title: "aggregati | Microsoft Docs"
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
  - "vc-attr.aggregates"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "attributo aggregates"
  - "aggregazione [C++]"
  - "oggetti aggregati [C++], attributo aggregates"
  - "aggregati [C++]"
ms.assetid: 67a084c9-941f-474b-a029-9c93b38ebe9a
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# aggregati
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica che l'oggetto aggrega l'oggetto specificato dal CLSID.  
  
## Sintassi  
  
```  
  
[ aggregates(  
clsid,  
variable_name  
) ]  
  
```  
  
#### Parametri  
 `clsid`  
 Specifica il CLSID dell'oggetto aggregabile.  
  
 `variable_name`  
 Nome della variabile da inserire. Questa variabile contiene l'interfaccia **IUnknown** dell'oggetto da aggregare.  
  
## Note  
 Quando è applicato a un oggetto, l'attributo **aggregates** di C\+\+ implementa un wrapper esterno per l'oggetto da aggregare \(specificato da `clsid`\).  
  
 Questo attributo richiede che anche l'attributo [coclass](../windows/coclass.md), [progid](../windows/progid.md) o [vi\_progid](../windows/vi-progid.md) \(o un altro attributo che implica uno di questi\) sia applicato allo stesso elemento. Se viene usato un qualsiasi attributo, anche gli altri due vengono applicati automaticamente. Ad esempio, se viene usato **progid**, vengono applicati anche **vi\_progid** e **coclass**.  
  
 **Progetti ATL**  
  
 Se questo attributo viene usato in un progetto che usa ATL, il comportamento dell'attributo cambia. In primo luogo, alla mappa COM dell'oggetto di destinazione viene aggiunta la voce seguente:  
  
```  
COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND(_m_spAttrXXX, clsid)  
```  
  
 In secondo luogo, viene aggiunta anche la macro [DECLARE\_GET\_CONTROLLING\_UNKNOWN](../Topic/DECLARE_GET_CONTROLLING_UNKNOWN.md).  
  
## Esempio  
  
```  
// cpp_attr_ref_aggregates.cpp  
// compile with: /LD  
#define _ATL_ATTRIBUTES  
#include "atlbase.h"  
#include "atlcom.h"  
  
// requires 'aggregatable.dll'  
// see aggregatable attribute to create 'aggregatable.dll'  
class DECLSPEC_UUID("1a8369cc-1c91-42c4-befa-5a5d8c9d2529") CMyClass;  
  
[module (name="MYObject")];  
[object, uuid("ab006d85-e754-47c5-9ef4-2744ff32a20c")]  
__interface IObject  
{  
};  
  
[ coclass, aggregates(__uuidof(CMyClass)),   
  uuid("91cb2c06-8931-432a-baac-206e55c4edfb")]  
struct CObject : IObject  
{  
   int i;  
};  
```  
  
## Requisiti  
  
### Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**class**, `struct`|  
|**Ripetibile**|Sì|  
|**Attributi obbligatori**|Uno o più degli attributi seguenti: **coclass**, **progid** o **vi\_progid**.|  
|**Attributi non validi**|Nessuna|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [COM Attributes](../windows/com-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Aggregazione](http://msdn.microsoft.com/library/windows/desktop/ms686558)   
 [Aggregabile](http://msdn.microsoft.com/library/windows/desktop/aa366721)   
 [COM\_INTERFACE\_ENTRY\_AUTOAGGREGATE\_BLIND](../Topic/COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)