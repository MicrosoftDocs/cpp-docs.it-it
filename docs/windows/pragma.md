---
title: pragma | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.pragma
dev_langs:
- C++
helpviewer_keywords:
- pragma attribute
ms.assetid: 3f90d023-b8b5-4007-8311-008bb72cbea1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a9c9d347b319afc3ee84818e74029a98b1aa5484
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40014299"
---
# <a name="pragma"></a>pragma
Genera la stringa specificata nel file con estensione IDL generato senza l'utilizzo delle virgolette. 
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[ pragma(  
   pragma_statement  
) ];  
```  
  
### <a name="parameters"></a>Parametri  
 *pragma_statement*  
 Il pragma che si desidera accedere al file IDL generato.  
  
## <a name="remarks"></a>Note  
 Il **pragma** attributo C++ ha la stessa funzionalità di [pragma](http://msdn.microsoft.com/library/windows/desktop/aa367143) attributo MIDL.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// cpp_attr_ref_pragma.cpp  
// compile with: /LD  
#include "unknwn.h"  
[module(name="MyLib")];  
[pragma(pack(4))];  
  
[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]  
__interface A  
{  
   [id(1)] HRESULT MyMethod ([in, satype("BSTR")] SAFEARRAY **p);  
};  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Ovunque|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi autonomi](../windows/stand-alone-attributes.md)   
 [pack](../preprocessor/pack.md)   