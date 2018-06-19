---
title: helpstringdll | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.helpstringdll
dev_langs:
- C++
helpviewer_keywords:
- helpstringdll attribute [C++]
ms.assetid: 121271fa-f061-492b-b87f-bbfcf4b02e7b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d7cb3ab5fc624494d3292cd7a47031782ce7da70
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33877345"
---
# <a name="helpstringdll"></a>helpstringdll
Specifica il nome della DLL da utilizzare per eseguire la ricerca della stringa di documento (localizzazione).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ helpstringdll(  
   "string"  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 `string`  
 La DLL da utilizzare per eseguire una ricerca della stringa di documento.  
  
## <a name="remarks"></a>Note  
 Il **helpstringdll** attributo C++ ha la stessa funzionalità come il [helpstringdll](http://msdn.microsoft.com/library/windows/desktop/aa366860) attributo MIDL.  
  
## <a name="example"></a>Esempio  
  
```  
// cpp_attr_ref_helpstringdll.cpp  
// compile with: /LD  
#include <unknwn.h>  
[module(name="MyLib", helpstringdll="xx.dll")];  
  
[object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IMyI   
{  
   HRESULT xxx();  
};  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**, `interface`, metodo di interfaccia|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [Attributi di metodo](../windows/method-attributes.md)   
