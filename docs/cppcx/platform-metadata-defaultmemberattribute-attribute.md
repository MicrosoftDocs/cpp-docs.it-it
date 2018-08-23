---
title: DefaultMemberAttribute (attributo) | Microsoft Docs
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Metadata::DefaultMemberAttribute
dev_langs:
- C++
helpviewer_keywords:
- Platform::Metadata::DefaultMemberAttribute Attribute
ms.assetid: d8abda01-c257-4371-aec4-541d4825e0af
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 62d531418e4729c34907cb65d446f89bfa60fb63
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42608914"
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