---
title: voce | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.entry
dev_langs:
- C++
helpviewer_keywords:
- entry attribute
ms.assetid: ba4843e3-d7ad-4b86-9a15-0b4192f0f698
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: db90390be5313ddbea1103105f47b55fe9e23d62
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="entry"></a>entry
Specifica una costante o alla funzione esportata in un modulo identificando il punto di ingresso nella DLL.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ entry(  
   id  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 `id`  
 L'ID del punto di ingresso.  
  
## <a name="remarks"></a>Note  
 Il **voce** attributo C++ ha la stessa funzionalità come il [voce](http://msdn.microsoft.com/library/windows/desktop/aa366815) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Per vedere l'esempio [idl_module](../windows/idl-module.md) per ad esempio **voce**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Attributo `idl_module`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
