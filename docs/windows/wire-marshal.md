---
title: wire_marshal | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.wire_marshal
dev_langs: C++
helpviewer_keywords: wire_marshal attribute
ms.assetid: 244f9d72-776d-4ebd-b60a-cee600a126b5
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a5f61e753e6b87f2dbdbd5fcfe7052ddf8e00724
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="wiremarshal"></a>wire_marshal
Specifica un tipo di dati che verrà utilizzato per la trasmissione anziché un tipo di dati specifici dell'applicazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
[wire_marshal]  
  
```  
  
## <a name="remarks"></a>Note  
 Il **wire_marshal** attributo C++ ha la stessa funzionalità come il [wire_marshal](http://msdn.microsoft.com/library/windows/desktop/aa367309) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene illustrato un utilizzo di **wire_marshal**:  
  
```  
// cpp_attr_ref_wire_marshal.cpp  
// compile with: /LD  
#include "windows.h"  
[module(name="MyLibrary")];  
  
[export, public] typedef unsigned long _FOUR_BYTE_DATA;  
  
[export] typedef struct _TWO_X_TWO_BYTE_DATA {  
   unsigned short low;  
   unsigned short high;  
} TWO_X_TWO_BYTE_DATA ;  
  
[export, wire_marshal(TWO_X_TWO_BYTE_DATA)] typedef _FOUR_BYTE_DATA FOUR_BYTE_DATA;  
```  
  
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
 [Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)   
