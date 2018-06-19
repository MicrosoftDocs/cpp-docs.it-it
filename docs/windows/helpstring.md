---
title: HelpString | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.helpstring
dev_langs:
- C++
helpviewer_keywords:
- helpstring attribute [C++]
ms.assetid: 0401e905-a63e-4fad-98d0-d1efea111966
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 81a3e45c5636fd193b7880e093711b5cc584bf99
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33879006"
---
# <a name="helpstring"></a>helpstring
Specifica una stringa di caratteri utilizzato per descrivere l'elemento a cui viene applicata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ helpstring(  
   "string"  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 `string`  
 Il testo della stringa della Guida.  
  
## <a name="remarks"></a>Note  
 Il **helpstring** attributo C++ ha la stessa funzionalità come il [helpstring](http://msdn.microsoft.com/library/windows/desktop/aa366856) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Per vedere l'esempio [defaultvalue](../windows/defaultvalue.md) per un esempio di come utilizzare **helpstring**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|`interface`, `typedef`, **classe**, metodo, proprietà|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [Attributi del metodo](../windows/method-attributes.md)   
 [TypeDef, Enum, Union e Struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [HelpFile](../windows/helpfile.md)   
 [helpcontext](../windows/helpcontext.md)   
