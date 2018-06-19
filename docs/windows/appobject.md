---
title: appobject | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.appobject
dev_langs:
- C++
helpviewer_keywords:
- appobject attribute
ms.assetid: 8ce30b73-e945-403e-a755-6bc78078a695
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: aca26e156bbb6a883ed6d55a6a01da128982c127
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33856973"
---
# <a name="appobject"></a>appobject
Identifica la coclasse come un oggetto applicazione, che viene associata a un'applicazione completa .exe e indica che le funzioni e le proprietà della coclasse sono disponibili a livello globale in questo [libreria](../mfc/automation-clients-using-type-libraries.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
[appobject]  
  
```  
  
## <a name="remarks"></a>Note  
 Il **appobject** attributo C++ ha la stessa funzionalità come il [appobject](http://msdn.microsoft.com/library/windows/desktop/aa366726) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene illustrata una definizione di classe semplice preceduta da un blocco di attributi che include **appobject**:  
  
```  
// cpp_attr_ref_appobject.cpp  
// compile with: /LD  
#include <windows.h>  
[module(name="MyLib", uuid="f1ce17f0-a5df-4d26-95f6-0a122197ac5b")];  
  
[object, uuid="905de6db-7a12-45ab-9f8b-b39f5112f010"]  
__interface ICustom {};  
  
[coclass, appobject,uuid="00395340-745f-4b69-bd58-e2921452b9fc"]  
class A : public ICustom {  
   int i;  
};  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**class**, `struct`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|**coclass**|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)   
