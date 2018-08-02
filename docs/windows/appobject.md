---
title: appobject | Microsoft Docs
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
ms.openlocfilehash: c0171c8cf836c95afecb74cf1909688bbbe030db
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39466371"
---
# <a name="appobject"></a>appobject
Identifica la coclasse come un oggetto applicazione che è associato a un'applicazione completa .exe e indica che le funzioni e le proprietà della coclasse disponibili a livello globale in questo [libreria dei tipi](../mfc/automation-clients-using-type-libraries.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
[appobject]  
```  
  
## <a name="remarks"></a>Note  
 Il **appobject** attributi di C++ ha la stessa funzionalità come la [appobject](http://msdn.microsoft.com/library/windows/desktop/aa366726) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene illustrata una definizione di classi semplice preceduta da un blocco di attributi che include **appobject**:  
  
```cpp  
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
|**Si applica a**|**classe**, **struct**|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|`coclass`|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi della classe](../windows/class-attributes.md)   
 [Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)   