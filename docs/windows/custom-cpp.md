---
title: personalizzati (C++) | Microsoft Docs
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
ms.openlocfilehash: 7222d7021665a76c7e087033f5152d2836008caa
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39460932"
---
# <a name="custom-c"></a>custom (C++)
Definisce i metadati per un oggetto nella libreria dei tipi.  
  
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
 Un valore che può essere impostato in una variante.  
  
## <a name="remarks"></a>Note  
 Il **personalizzato** C++ attributo farà in modo da inserire in libreria dei tipi di informazioni. È necessario uno strumento che legge il valore personalizzato da libreria dei tipi.  
  
 Il **personalizzati** attributo ha la stessa funzionalità di [personalizzato](http://msdn.microsoft.com/library/windows/desktop/aa366766) attributo MIDL.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Non COM **interface**, **classe**, **enum**s, `idl_module` metodi, i membri di interfaccia, i parametri dell'interfaccia **typedef**s, **unione**s **struct**s|  
|**Ripetibile**|Yes|  
|**Attributi obbligatori**|**Coclasse** (se usato nella classe)|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi autonomi](../windows/stand-alone-attributes.md)   
 [TypeDef, Enum, Union e struct (attributi)](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Attributi dei parametri](../windows/parameter-attributes.md)   
 [Attributi del metodo](../windows/method-attributes.md)   
 [Attributi della classe](../windows/class-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   