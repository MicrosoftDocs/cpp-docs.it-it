---
title: in (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.in
dev_langs:
- C++
helpviewer_keywords:
- in attribute
ms.assetid: 7b450cc4-4d2e-4910-a195-7487c6b7c373
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0cb730163b9048005d3af64bb42ae9113681d52b
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33874018"
---
# <a name="in-c"></a>in (C++)
Indica che un parametro deve essere passato dalla routine chiamante alla routine chiamata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
[in]  
  
```  
  
## <a name="remarks"></a>Note  
 Il **in** attributo C++ ha la stessa funzionalità come il [in](http://msdn.microsoft.com/library/windows/desktop/aa367051) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Vedere [associabili](../windows/bindable.md) per un esempio di come utilizzare **in**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Parametro di interfaccia, metodo di interfaccia|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|**retval**|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi dei parametri](../windows/parameter-attributes.md)   
 [Attributi del metodo](../windows/method-attributes.md)   
 [DefaultValue](../windows/defaultvalue.md)   
 [ID](../windows/id.md)   
 [out](../windows/out-cpp.md)   
