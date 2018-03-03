---
title: switch_type | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- vc-attr.switch_type
dev_langs:
- C++
helpviewer_keywords:
- switch_type attribute
ms.assetid: e24544dc-b3bc-48ae-b249-f967db49271e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2b41a71483bc26d1a28476f24a47395ccd6b35d4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [TypeDef, Enum, Union e Struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [export](../windows/export.md)   
