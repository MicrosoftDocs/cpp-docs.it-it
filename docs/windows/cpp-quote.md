---
title: cpp_quote | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- vc-attr.cpp_quote
dev_langs:
- C++
helpviewer_keywords:
- cpp_quote attribute
ms.assetid: f75327ff-42bd-498b-9177-7ffa25427e1f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 95b43856401b5bccfa9a0bef12fdc93ec886cea1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cppquote"></a>cpp_quote
Genera la stringa specificata, senza virgolette, nel file IDL generato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ cpp_quote(  
   "statement"  
) ];  
```  
  
#### <a name="parameters"></a>Parametri  
 *istruzione*  
 Un'istruzione di C.  
  
## <a name="remarks"></a>Note  
 Il **cpp_quote** attributo C++ è utile se si desidera inserire una direttiva del preprocessore in un file IDL.  
  
 È inoltre possibile utilizzare **cpp_quote** e generare un file con estensione h come parte della compilazione MIDL. Ad esempio, se si dispone di un file di intestazione C++ che utilizza attributi IDL C++ ma non è possibile utilizzare questo file per alcune attività, quindi è possibile compilare in modo da creare un file generati da MIDL. h, che dovrebbe essere possibile utilizzare.  
  
 Il **cpp_quote** presenta la stessa funzionalità come il [cpp_quote](http://msdn.microsoft.com/library/windows/desktop/aa366765) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Per vedere l'esempio [dual](../windows/dual.md) per un esempio di uso come utilizzare **cpp_quote**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Ovunque|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi autonomi](../windows/stand-alone-attributes.md)   
