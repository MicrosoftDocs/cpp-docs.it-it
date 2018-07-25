---
title: usesgetlasterror | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.usesgetlasterror
dev_langs:
- C++
helpviewer_keywords:
- usesgetlasterror attribute
ms.assetid: d149e33d-35a7-46cb-9137-ae6883d86122
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 399b9fbbcf4b449f5f91beaea89c403d120d0a21
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33890275"
---
# <a name="usesgetlasterror"></a>usesgetlasterror
Indica al chiamante che se si verifica un errore quando si chiama tale funzione, quindi il chiamante può quindi chiamare `GetLastError` per recuperare il codice di errore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
[usesgetlasterror]  
  
```  
  
## <a name="remarks"></a>Note  
 Il **usesgetlasterror** attributo C++ ha la stessa funzionalità come il [usesgetlasterror](http://msdn.microsoft.com/library/windows/desktop/aa367297) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Vedere il [idl_module](../windows/idl-module.md) esempio per un esempio di come utilizzare **usesgetlasterror**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**modulo** attributo|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
