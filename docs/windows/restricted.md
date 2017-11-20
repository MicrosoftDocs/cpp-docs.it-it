---
title: con restrizioni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.restricted
dev_langs: C++
helpviewer_keywords: restricted attribute
ms.assetid: 504a96be-b904-4269-8be1-920feba201b4
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: c6a6b0172b0078dee659964b36ec37464ec1705d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="restricted"></a>restricted
Specifica che un membro di un modulo, interfaccia o interfaccia dispatch non può essere chiamato in modo arbitrario.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ restricted(  
   interfaces  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 `interfaces`  
 Una o più interfacce che non è possibile chiamare in modo arbitrario in un oggetto COM. Questo parametro è valido solo quando viene applicato a una classe.  
  
## <a name="remarks"></a>Note  
 Il **limitato** attributo C++ ha la stessa funzionalità come il [limitato](http://msdn.microsoft.com/library/windows/desktop/aa367157) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene illustrato come utilizzare il **limitato** attributo:  
  
```  
// cpp_attr_ref_restricted.cpp  
// compile with: /LD  
#include "windows.h"  
#include "unknwn.h"  
[module(name="MyLib")];  
  
[object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface a  
{  
};  
  
[object, uuid("00000000-0000-0000-0000-000000000002")]  
__interface b  
{  
};  
  
[coclass, restricted(a,b), uuid("00000000-0000-0000-0000-000000000003")]  
class c : public a, public b  
{  
};  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Metodo di interfaccia `interface`, **classe**,`struct`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|**coclass** (quando applicato a **class** o `struct`)|  
|**Attributi non validi**|Nessuna|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
 [Attributi di metodo](../windows/method-attributes.md)   
