---
title: nonbrowsable | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.nonbrowsable
dev_langs: C++
helpviewer_keywords: nonbrowsable attribute
ms.assetid: e71a98e7-4b65-454a-9829-342b9f2a84be
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 279d6e80fe100fbbd41e54c4a13640e3046cf73c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="nonbrowsable"></a>nonbrowsable
Indica che un membro di interfaccia non deve essere visualizzato in un visualizzatore proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
[nonbrowsable]  
  
```  
  
## <a name="remarks"></a>Note  
 Il **nonbrowsable** attributo C++ ha la stessa funzionalità come il [nonbrowsable](http://msdn.microsoft.com/library/windows/desktop/aa367117) attributo MIDL.  
  
## <a name="example"></a>Esempio  
  
```  
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
