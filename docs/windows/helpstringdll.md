---
title: helpstringdll | Microsoft Docs
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
ms.openlocfilehash: 94e33eea3dc367634b3cae9a025b0189598bbdd1
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39648951"
---
# <a name="helpstringdll"></a>helpstringdll
Specifica il nome della DLL da usare per eseguire la ricerca della stringa di documento (localizzazione).  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[ helpstringdll(  
   "string"  
) ]  
```  
  
### <a name="parameters"></a>Parametri  
 *string*  
 La DLL da utilizzare per eseguire una ricerca di stringhe di documento.  
  
## <a name="remarks"></a>Note  
 Il **helpstringdll** attributi di C++ ha la stessa funzionalità come la [helpstringdll](http://msdn.microsoft.com/library/windows/desktop/aa366860) attributo MIDL.  
  
## <a name="example"></a>Esempio  
  
```cpp  
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
|**Si applica a**|**classe**, **interfaccia**, metodo di interfaccia|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
 [Attributi della classe](../windows/class-attributes.md)   
 [Attributi di metodo](../windows/method-attributes.md)   