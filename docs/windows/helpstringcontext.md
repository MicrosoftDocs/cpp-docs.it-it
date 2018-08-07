---
title: helpstringcontext | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.helpstringcontext
dev_langs:
- C++
helpviewer_keywords:
- helpstringcontext attribute [C++]
ms.assetid: d4cd135e-d91c-4aa3-9353-8aeb096f52cf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 16f113610beb4c6427af5627ea8dfd725e02600d
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39569999"
---
# <a name="helpstringcontext"></a>helpstringcontext
Specifica l'ID di un argomento della Guida in un file con estensione chm o. hlp.  
  
## <a name="syntax"></a>Sintassi  
  
```  
[ helpstringcontext(  
   contextID  
) ]  
```  
  
### <a name="parameters"></a>Parametri  
 *contextID*  
 Un identificatore di contesto della Guida in linea a 32 bit nel file della Guida.  
  
## <a name="remarks"></a>Note  
 Il **helpstringcontext** attributi di C++ ha la stessa funzionalità come la [helpstringcontext](http://msdn.microsoft.com/library/windows/desktop/aa366858) ODL (attributo).  
  
## <a name="example"></a>Esempio  
  
```cpp  
// cpp_attr_ref_helpstringcontext.cpp  
// compile with: /LD  
#include <unknwn.h>  
[module(name="MyLib")];  
  
[   object,   
   helpstring("help string"),   
   helpstringcontext(1),   
   uuid="11111111-1111-1111-1111-111111111111"  
]  
__interface IMyI   
{  
   HRESULT xx();  
};  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**, **interfaccia**, metodo di interfaccia|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
 [Attributi della classe](../windows/class-attributes.md)   
 [Attributi del metodo](../windows/method-attributes.md)   
 [modulo](../windows/module-cpp.md)   