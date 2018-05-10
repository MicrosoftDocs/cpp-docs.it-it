---
title: personalizzata (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.custom
dev_langs:
- C++
helpviewer_keywords:
- custom attributes, defining
ms.assetid: 3abac928-4d55-4ea6-8cf6-8427a4ad79f1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7b37d87d5380b9d4dac69cee702654285461ead6
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="custom-c"></a>custom (C++)
Definisce i metadati per un oggetto della libreria dei tipi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ custom(  
   uuid,   
   value  
) ];  
```  
  
#### <a name="parameters"></a>Parametri  
 *uuid*  
 ID univoco.  
  
 *valore*  
 Un valore che può essere impostato in una variabile variant.  
  
## <a name="remarks"></a>Note  
 Il **personalizzato** C++ attributo farà in modo informazioni da inserire nella libreria dei tipi. È necessario uno strumento che legge il valore personalizzato dalla libreria dei tipi.  
  
 Il **personalizzato** presenta la stessa funzionalità come il [personalizzato](http://msdn.microsoft.com/library/windows/desktop/aa366766) attributo MIDL.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|COM non `interface`, **classe**, `enum`s, `idl_module` metodi, i membri di interfaccia, i parametri di interfaccia, `typedef`s, **unione**s, `struct`s|  
|**Ripetibile**|Yes|  
|**Attributi obbligatori**|**Coclasse** (quando utilizzato nella classe)|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi autonomi](../windows/stand-alone-attributes.md)   
 [TypeDef, Enum, Union e Struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Attributi dei parametri](../windows/parameter-attributes.md)   
 [Attributi del metodo](../windows/method-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
