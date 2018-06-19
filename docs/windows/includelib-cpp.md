---
title: includelib (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.includelib
dev_langs:
- C++
helpviewer_keywords:
- includelib attribute
ms.assetid: cd90ea6e-5ae8-4f11-b8d1-662db95412b2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 252a5d953dd05edc494daf8c4a45322d5511f979
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33878892"
---
# <a name="includelib-c"></a>includelib (C++)
Fa sì che un file IDL o h da includere nel file IDL generato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ includelib(  
   name.idl  
) ];  
```  
  
#### <a name="parameters"></a>Parametri  
 *Name.idl*  
 Il nome del file IDL che si desidera includere come parte del file IDL generato.  
  
## <a name="remarks"></a>Note  
 Il `includelib` attributo C++ fa sì che un file IDL o h da includere nel file IDL generato dopo il `importlib` istruzione.  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene visualizzato in un file. cpp:  
  
```  
// cpp_attr_ref_includelib.cpp  
// compile with: /LD  
[module(name="MyLib")];  
[includelib("includelib.idl")];  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Ovunque|  
|**Ripetibile**|Yes|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi autonomi](../windows/stand-alone-attributes.md)   
 [Importazione](../windows/import.md)   
 [importidl](../windows/importidl.md)   
 [Includere](../windows/include-cpp.md)   
 [importlib](../windows/importlib.md)   
