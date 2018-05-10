---
title: registration_script | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.registration_script
dev_langs:
- C++
helpviewer_keywords:
- registration_script attribute
ms.assetid: 786f8072-9187-4163-a979-7a604dd4c888
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d4385dd12fccafb154a637dd5260764667d3887a
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="registrationscript"></a>registration_script
Esegue lo script di registrazione personalizzato specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ registration_script(   
   script   
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 *Script*  
 Il percorso completo in un file di script (con estensione RGS) di registrazione personalizzato. Il valore **Nessuno**, ad esempio `script = "none"`, indica che la coclasse che dispone di alcun i requisiti di registrazione.  
  
## <a name="remarks"></a>Note  
 Il **registration_script** attributo C++ esegue lo script di registrazione personalizzato specificato da **script**. Se questo attributo viene omesso, viene utilizzato un file con estensione RGS standard (contenente informazioni per la registrazione del componente). Per ulteriori informazioni sui file con estensione RGS, vedere [il componente di registro di sistema ATL (Registrar)](../atl/atl-registry-component-registrar.md).  
  
 Questo attributo richiede che anche l'attributo [coclass](../windows/coclass.md), [progid](../windows/progid.md)o [vi_progid](../windows/vi-progid.md) (o un altro attributo che implica uno di questi) sia applicato allo stesso elemento.  
  
## <a name="example"></a>Esempio  
 Il codice seguente specifica che il componente dispone di uno script del Registro di sistema denominato cpp_attr_ref_registration_script.rgs.  
  
```  
// cpp_attr_ref_registration_script.cpp  
// compile with: /LD  
#define _ATL_ATTRIBUTES  
#include "atlbase.h"  
#include "atlcom.h"  
  
[module (name="REG")];  
  
[object, uuid("d9cd196b-6836-470b-9b9b-5b04b828e5b0")]  
__interface IFace {};  
  
// requires "cpp_attr_ref_registration_script.rgs"  
// create sample .RGS file "cpp_attr_ref_registration_script.rgs" if it does not exist  
[ coclass, registration_script(script="cpp_attr_ref_registration_script.rgs"),  
  uuid("50d3ad42-3601-4f26-8cfe-0f1f26f98f67")]  
class CMyClass:public IFace {};  
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
 [Attributi COM](../windows/com-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [rdx](../windows/rdx.md)   
