---
title: in (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.in
dev_langs: C++
helpviewer_keywords: in attribute
ms.assetid: 7b450cc4-4d2e-4910-a195-7487c6b7c373
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 37eaee8d796897b14d4780f0cf65e36908d7c66b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
