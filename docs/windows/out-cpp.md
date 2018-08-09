---
title: out (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.out
dev_langs:
- C++
helpviewer_keywords:
- out attribute
ms.assetid: 5051b1bf-4949-4bf1-b82f-35e14f0f244b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f83314de19548c93afa43feced8b2a877af00738
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40019053"
---
# <a name="out-c"></a>out (C++)
Identifica i parametri dei puntatori restituiti dalla routine chiamata alla routine chiamante (dal server al client).  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[out]  
```  
  
## <a name="remarks"></a>Note  
 L'attributo **out** di C++ ha la stessa funzionalità dell'attributo [out](http://msdn.microsoft.com/library/windows/desktop/aa367136) di MIDL.  
  
## <a name="example"></a>Esempio  
 Per un'illustrazione dell'uso di [out](../windows/bindable.md) , vedere l'esempio per **bindable**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Parametro interfaccia|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi dei parametri](../windows/parameter-attributes.md)   
 [DefaultValue](../windows/defaultvalue.md)   
 [ID](../windows/id.md)   