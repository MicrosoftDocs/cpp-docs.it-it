---
title: nonbrowsable | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.nonbrowsable
dev_langs:
- C++
helpviewer_keywords:
- nonbrowsable attribute
ms.assetid: e71a98e7-4b65-454a-9829-342b9f2a84be
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: db563fb7e140aece589c4f13bfcfe82cf490c966
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40016723"
---
# <a name="nonbrowsable"></a>nonbrowsable
Indica che un membro di interfaccia non deve essere visualizzato in un visualizzatore proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[nonbrowsable]  
```  
  
## <a name="remarks"></a>Note  
 Il **nonbrowsable** attributi di C++ ha la stessa funzionalità come la [nonbrowsable](http://msdn.microsoft.com/library/windows/desktop/aa367117) attributo MIDL.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// cpp_attr_ref_nonbrowsable.cpp  
// compile with: /LD  
#include <unknwn.h>  
[module(name="MyLib")];  
  
[object, helpstring("help string"), helpstringcontext(1),   
uuid="11111111-1111-1111-1111-111111111111"]   
__interface IMyI  
{  
   [nonbrowsable] HRESULT xx();  
};  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Metodo di interfaccia|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di metodo](../windows/method-attributes.md)   