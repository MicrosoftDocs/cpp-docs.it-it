---
title: library_block | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.library_block
dev_langs:
- C++
helpviewer_keywords:
- library_block attribute
ms.assetid: ae7a7ebe-5e1a-4eda-a058-11bbd058ece8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: dbd97897138edffba12baf47d64465b1f6ca0df4
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33877891"
---
# <a name="libraryblock"></a>library_block
Inserisce un costrutto all'interno del blocco di libreria IDL.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
[library_block]  
  
```  
  
## <a name="remarks"></a>Note  
 Quando si inserisce un costrutto all'interno del blocco di libreria, assicurarsi che verrà passato nella libreria dei tipi, indipendentemente dal fatto che vi fa riferimento. Per impostazione predefinita, i costrutti soli modificando il [coclasse](../windows/coclass.md), [dispinterface](../windows/dispinterface.md), e [idl_module](../windows/idl-module.md) attributi vengono posizionati nel blocco di libreria.  
  
## <a name="example"></a>Esempio  
 Nel codice seguente, un'interfaccia personalizzata viene inserita all'interno del blocco di libreria.  
  
```  
// cpp_attr_ref_library_block.cpp  
// compile with: /LD  
#include <windows.h>  
[module(name="MyLib")];  
[object, library_block, uuid("9E66A290-4365-11D2-A997-00C04FA37DDB")]  
__interface IMyInterface {  
   HRESULT f1();  
};  
```  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Ovunque|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del compilatore](../windows/compiler-attributes.md)   
 [Attributi autonomi](../windows/stand-alone-attributes.md)   
