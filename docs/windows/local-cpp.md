---
title: locale (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.local
dev_langs:
- C++
helpviewer_keywords:
- local attribute
ms.assetid: 35cdd668-bd8e-492a-b7b8-263e7b662437
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: efa937c1eaabb23fe5a360444f8c2105b735b260
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39604200"
---
# <a name="local-c"></a>local (C++)
Quando usato nell'intestazione dell'interfaccia, consente di usare il compilatore MIDL come generatore di intestazione. Se usato in una singola funzione, designa una procedura locale per cui non gli stub vengono generati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
[local]  
```  
  
## <a name="remarks"></a>Note  
 Il **locale** attributi di C++ ha la stessa funzionalità come la [locale](http://msdn.microsoft.com/library/windows/desktop/aa367071) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Visualizzare [call_as](../windows/call-as.md) per un esempio di come usare **locale**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**interfaccia**, metodo di interfaccia|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|`dispinterface`|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
 [Attributi del metodo](../windows/method-attributes.md)   
 [call_as](../windows/call-as.md)   