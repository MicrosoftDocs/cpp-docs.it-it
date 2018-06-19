---
title: pointer_default | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.pointer_default
dev_langs:
- C++
helpviewer_keywords:
- pointer_default attribute
ms.assetid: 2d0c7bbc-a1e8-4337-9e54-e304523e2735
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ee904f9243cf642d3a942d4bc323f5ec381b0480
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33877462"
---
# <a name="pointerdefault"></a>pointer_default
Specifica l'attributo di puntatore predefinito per tutti i puntatori, ad eccezione dei puntatori di primo livello che vengono visualizzati nell'elenco di parametri.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ pointer_default(  
   value  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 *valore*  
 Un valore che descrive il tipo di puntatore: **ptr**, `ref`, o **univoco**.  
  
## <a name="remarks"></a>Note  
 Il **pointer_default** attributo C++ ha la stessa funzionalità come il [pointer_default](http://msdn.microsoft.com/library/windows/desktop/aa367141) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Per vedere l'esempio [defaultvalue](../windows/defaultvalue.md) per un esempio dell'uso di **pointer_default**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|`interface`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
