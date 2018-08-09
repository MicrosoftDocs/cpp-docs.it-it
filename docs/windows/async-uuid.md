---
title: async_uuid | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.async_uuid
dev_langs:
- C++
helpviewer_keywords:
- async_uuid attribute
ms.assetid: 235cb0d7-be58-4dd9-983c-e2a21bbc42c6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0596b15daff5567e2572bf8c1f2b401cdf300a49
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39642412"
---
# <a name="asyncuuid"></a>async_uuid
Specifica l'UUID che indica al compilatore MIDL per definire le versioni sincrone e asincrone di un'interfaccia COM.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[async_uuid (  
   uuid  
)]  
```  
  
### <a name="parameters"></a>Parametri  
 *uuid*  
 Un valore UUID che identifica la versione dell'interfaccia.  
  
## <a name="remarks"></a>Note  
 Il **async_uuid** attributi di C++ ha la stessa funzionalità come la [async_uuid](http://msdn.microsoft.com/library/windows/desktop/aa366735) attributo MIDL.  
  
## <a name="example"></a>Esempio  
  
```cpp  
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
|**Attributi non validi**|**doppia**, **dispinterface**|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   