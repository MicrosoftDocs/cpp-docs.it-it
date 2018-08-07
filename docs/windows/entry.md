---
title: voce | Microsoft Docs
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
ms.openlocfilehash: 933fc1db2a890fedd9d725c49bbeb6c363e2f4c8
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39569638"
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
 *ID*  
 L'ID del punto di ingresso.  
  
## <a name="remarks"></a>Note  
 Il **voce** attributi di C++ ha la stessa funzionalità come la [voce](http://msdn.microsoft.com/library/windows/desktop/aa366815) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio relativo [idl_module](../windows/idl-module.md) per un esempio di uso dei **voce**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Attributo `idl_module`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   