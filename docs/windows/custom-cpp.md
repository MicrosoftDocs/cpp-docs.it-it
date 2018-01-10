---
title: personalizzata (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.custom
dev_langs: C++
helpviewer_keywords: custom attributes, defining
ms.assetid: 3abac928-4d55-4ea6-8cf6-8427a4ad79f1
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e55fd4ad47470a86a0a3d61cc847c20fb21768e8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 *UUID*  
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
|**Attributi obbligatori**|**Coclasse** (se utilizzato nella classe)|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi autonomi](../windows/stand-alone-attributes.md)   
 [TypeDef, Enum, Union e Struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Attributi dei parametri](../windows/parameter-attributes.md)   
 [Attributi del metodo](../windows/method-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
