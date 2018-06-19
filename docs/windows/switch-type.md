---
title: switch_type | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.switch_type
dev_langs:
- C++
helpviewer_keywords:
- switch_type attribute
ms.assetid: e24544dc-b3bc-48ae-b249-f967db49271e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1870e1ee623d8495e9f19dd8f32ea9382070bc14
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33890183"
---
# <a name="switchtype"></a>switch_type
Identifica il tipo della variabile utilizzata come l'unione discriminante.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
[switch_type(  
type  
}]  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `type`  
 Il tipo di opzione, può essere di tipo integer, carattere, Boolean o enumerazione.  
  
## <a name="remarks"></a>Note  
 Il **switch_type** attributo C++ ha la stessa funzionalità come il [switch_type](http://msdn.microsoft.com/library/windows/desktop/aa367276) attributo MIDL.  
  
 Gli attributi di C++ non supportano [incapsulato unioni](http://msdn.microsoft.com/library/windows/desktop/aa366811). [Unioni nonencapsulated](http://msdn.microsoft.com/library/windows/desktop/aa367119) sono supportati solo nel formato seguente:  
  
```  
// cpp_attr_ref_switch_type.cpp  
// compile with: /LD  
#include <windows.h>  
[module(name="MyLibrary")];  
[ export ]  
struct SizedValue2 {  
   [switch_type("char"), switch_is(kind)] union {  
      [case(1), string]  
         wchar_t* wval;  
      [default, string]  
         char* val;  
   };  
   char kind;  
};  
```  
  
## <a name="example"></a>Esempio  
 Vedere il [case](../windows/case-cpp.md) esempio per un esempio dell'uso di **switch_type**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|`typedef`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [TypeDef, Enum, Union e Struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [export](../windows/export.md)   
