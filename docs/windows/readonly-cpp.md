---
title: ReadOnly (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.readonly
dev_langs: C++
helpviewer_keywords: readonly attribute
ms.assetid: 1246cadd-5304-43a9-beea-51153d12704d
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 829ca2126ec43be54d96a98b2ada4f5952626e21
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="readonly-c"></a>readonly (C++)
Non consente l'assegnazione a un membro dati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
[readonly]  
  
```  
  
## <a name="remarks"></a>Note  
 L'attributo **readonly** di C++ ha la stessa funzionalità dell'attributo [readonly](http://msdn.microsoft.com/library/windows/desktop/aa367152) di MIDL.  
  
 Se si vuole impedire la modifica di un parametro di metodo, usare l'attributo [in](../windows/in-cpp.md) .  
  
## <a name="example"></a>Esempio  
 Il codice seguente mostra un utilizzo dell'attributo **readonly** :  
  
```  
// cpp_attr_ref_readonly.cpp  
// compile with: /LD  
[idl_quote("midl_pragma warning(disable:2461)")];  
#include "unknwn.h"  
[module(name="ATLFIRELib")];  
  
[dispinterface, uuid(11111111-1111-1111-1111-111111111111)]  
__interface IFireTabCtrl  
{  
   [readonly, id(1)] int i();  
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
 [Attributi di membro dati](../windows/data-member-attributes.md)   
