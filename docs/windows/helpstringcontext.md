---
title: helpstringcontext | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.helpstringcontext
dev_langs:
- C++
helpviewer_keywords:
- helpstringcontext attribute [C++]
ms.assetid: d4cd135e-d91c-4aa3-9353-8aeb096f52cf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b71d8183921e0df66d6b9a82ff79faf24ccb41d3
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39642334"
---
# <a name="helpstringcontext"></a>helpstringcontext
Specifica l'ID di un argomento della Guida in un file con estensione chm o. hlp.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[ helpstringcontext(  
   contextID  
) ]  
```  
  
### <a name="parameters"></a>Parametri  
 *contextID*  
 Un identificatore di contesto della Guida in linea a 32 bit nel **aiutare** file.  
  
## <a name="remarks"></a>Note  
 Il **helpstringcontext** attributi di C++ ha la stessa funzionalità come la [helpstringcontext](http://msdn.microsoft.com/library/windows/desktop/aa366858) ODL (attributo).  
  
## <a name="example"></a>Esempio  
  
```cpp  
// cpp_attr_ref_helpstringcontext.cpp  
// compile with: /LD  
#include <unknwn.h>  
[module(name="MyLib")];  
  
[   object,   
   helpstring("help string"),   
   helpstringcontext(1),   
   uuid="11111111-1111-1111-1111-111111111111"  
]  
__interface IMyI   
{  
   HRESULT xx();  
};  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**, **interfaccia**, metodo di interfaccia|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
 [Attributi della classe](../windows/class-attributes.md)   
 [Attributi del metodo](../windows/method-attributes.md)   
 [modulo](../windows/module-cpp.md)   