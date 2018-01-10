---
title: async_uuid | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.async_uuid
dev_langs: C++
helpviewer_keywords: async_uuid attribute
ms.assetid: 235cb0d7-be58-4dd9-983c-e2a21bbc42c6
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9c3d9fc9afb7a6f65be8ace5fec085db9bd92191
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="asyncuuid"></a>async_uuid
Specifica l'UUID che indica al compilatore MIDL per definire versioni sincrone e asincrone di un'interfaccia COM.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [async_uuid (  
   uuid  
)]  
```  
  
#### <a name="parameters"></a>Parametri  
 *UUID*  
 UUID che identifica la versione dell'interfaccia.  
  
## <a name="remarks"></a>Note  
 Il **async_uuid** attributo C++ ha la stessa funzionalità come il [async_uuid](http://msdn.microsoft.com/library/windows/desktop/aa366735) attributo MIDL.  
  
## <a name="example"></a>Esempio  
  
```  
// cpp_attr_ref_async_uuid.cpp  
// compile with: /LD  
#include <Windows.h>  
[module(name="Test")];  
[object, uuid("9e66a290-4365-11d2-a997-00c04fa37ddb"),   
async_uuid("e8583106-38fd-487e-912e-4fc8645c677e")]  
__interface ICustom {  
   HRESULT Custom([in] long l, [out, retval] long *pLong);  
};  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|`interface`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|**doppia**, **interfaccia dispatch**|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
