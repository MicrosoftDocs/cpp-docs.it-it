---
title: DefaultMemberAttribute (attributo) | Documenti Microsoft
ms.custom: 
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Metadata::DefaultMemberAttribute
dev_langs:
- C++
helpviewer_keywords:
- Platform::Metadata::DefaultMemberAttribute Attribute
ms.assetid: d8abda01-c257-4371-aec4-541d4825e0af
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6e8012ff577dbc370e90369a5afbb2adcc4e9278
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="platformmetadatadefaultmemberattribute-attribute"></a>Platform::Metadata::DefaultMemberAttribute (attributo)
Indica la funzione preferita da chiamare tra numerose funzioni in overload possibili.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
  
public ref class DefaultMember abstract : Attribute  
```  
  
## <a name="inheritance"></a>Ereditarietà  
 [Platform::Object](../cppcx/platform-object-class.md)   
  
 [Platform::Metadata::Attribute](../cppcx/platform-metadata-attribute-attribute.md)  
  
### <a name="remarks"></a>Note  
 Applica l'attributo DefaultMember a un metodo che verrà utilizzato da un'applicazione JavaScript.  
  
### <a name="requirements"></a>Requisiti  
 **Client minimo supportato:** Windows 8  
  
 **Server minimo supportato:** Windows Server 2012  
  
 **Spazio dei nomi:** Platform::Metadata  
  
 **Metadati:** platform.winmd  
  
## <a name="see-also"></a>Vedere anche  
 [Platform::Metadata (spazio dei nomi)](../cppcx/platform-metadata-namespace.md)