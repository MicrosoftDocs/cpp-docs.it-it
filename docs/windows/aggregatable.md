---
title: aggregabile | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.aggregatable
dev_langs:
- C++
helpviewer_keywords:
- aggregatable attribute
ms.assetid: 9253a46a-cd76-41f2-b3b6-86f709bb069c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1d80b2fb707145f698e8d9bb883059478c3da10b
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="aggregatable"></a>aggregatable
Indica che la classe supporta l'aggregazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ aggregatable(   
   value  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 *valore* (facoltativo)  
 Un parametro per indicare quando l'oggetto COM può essere aggregato:  
  
-   **mai** l'oggetto COM non può essere aggregata.  
  
-   **consentito** l'oggetto COM è possibile creare direttamente oppure possono essere aggregato. Questa è l'impostazione predefinita.  
  
-   **sempre** l'oggetto COM non è possibile creare direttamente e possono solo essere aggregato. Quando si chiama `CoCreateInstance` per questo oggetto, è necessario specificare l'oggetto aggregazione **IUnknown** interfaccia (il controllo **IUnknown**).  
  
## <a name="remarks"></a>Note  
 Il **aggregabile** attributo C++ ha la stessa funzionalità come il [aggregabile](http://msdn.microsoft.com/library/windows/desktop/aa366721) attributo MIDL. Ciò significa che il compilatore passerà il **aggregabile** attributo tramite il file IDL generato.  
  
 Questo attributo richiede che anche l'attributo [coclass](../windows/coclass.md), [progid](../windows/progid.md)o [vi_progid](../windows/vi-progid.md) (o un altro attributo che implica uno di questi) sia applicato allo stesso elemento. Se viene usato un qualsiasi attributo, anche gli altri due vengono applicati automaticamente. Ad esempio, se viene usato **progid** , vengono applicati anche **vi_progid** e **coclass** .  
  
 **Progetti ATL**  
  
 Se questo attributo viene usato in un progetto che usa ATL, il comportamento dell'attributo cambia. Oltre al comportamento descritto in precedenza, l'attributo aggiunge anche una delle seguenti macro per la classe di destinazione:  
  
|Valore del parametro|Inserito (macro)|  
|---------------------|--------------------|  
|**Mai**|[DECLARE_NOT_AGGREGATABLE](../atl/reference/aggregation-and-class-factory-macros.md#declare_not_aggregatable)|  
|**È consentito**|[DECLARE_POLY_AGGREGATABLE](../atl/reference/aggregation-and-class-factory-macros.md#declare_poly_aggregatable)|  
|**Sempre**|[DECLARE_ONLY_AGGREGATABLE](../atl/reference/aggregation-and-class-factory-macros.md#declare_only_aggregatable)|  
  
## <a name="example"></a>Esempio  
  
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
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**class**, `struct`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Uno o più degli attributi seguenti: **coclass**, **progid**o **vi_progid**.|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [TypeDef, Enum, Union e Struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Aggregazione](http://msdn.microsoft.com/library/windows/desktop/ms686558)   
