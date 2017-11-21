---
title: usesgetlasterror | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.usesgetlasterror
dev_langs: C++
helpviewer_keywords: usesgetlasterror attribute
ms.assetid: d149e33d-35a7-46cb-9137-ae6883d86122
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: cf3cfd6d1b0e484b31769184b2fae5a6b012a58e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
|**Attributi non validi**|Nessuna|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
